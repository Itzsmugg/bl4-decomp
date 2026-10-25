// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1453bb2e0 FUN_1453bb2e0 body=246 status=ok
// SIG undefined FUN_1453bb2e0(void)

undefined8
FUN_1453bb2e0(uint *param_1,longlong *param_2,uint param_3,undefined8 param_4,uint param_5,
             uint param_6,uint param_7,float param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar2 = 8;
  if (8 < param_3) {
    uVar2 = param_3;
  }
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[0xc] = param_7;
  uVar3 = uVar2 + 3 & 0xfffffffc;
  *param_1 = uVar3;
  fVar4 = (float)uVar3;
  uVar2 = (uint)(longlong)(fVar4 * param_8) & 0xfffffffc;
  param_1[1] = uVar2;
  if (0x18fff < uVar2 * 8 + 0x1000) {
    uVar2 = (uint)(longlong)((12288.0 / fVar4) * fVar4) & 0xfffffffc;
    param_1[1] = uVar2;
  }
  if (uVar3 <= uVar2) {
    param_1[1] = uVar2 - 4;
  }
  uVar2 = uVar3 * 2 + 0x400;
  param_1[7] = param_5;
  param_1[2] = uVar2;
  param_1[8] = param_6;
  param_1[9] = param_7;
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)uVar2 << 2,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\UniComb.cpp"
                     ,0x2f);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  param_1[6] = 0;
  return 1;
}



// FUNCTION 1453bb3e0 FUN_1453bb3e0 body=45 status=ok
// SIG undefined FUN_1453bb3e0(void)

void FUN_1453bb3e0(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1453bb410 FUN_1453bb410 body=46 status=ok
// SIG undefined FUN_1453bb410(void)

void FUN_1453bb410(longlong param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 8) << 2));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1453bb440 FUN_1453bb440 body=104 status=ok
// SIG undefined FUN_1453bb440(void)

void FUN_1453bb440(uint *param_1,uint param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  float fVar2;
  
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  fVar2 = (float)*param_1;
  uVar1 = (uint)(longlong)(fVar2 * param_5) & 0xfffffffc;
  param_1[1] = uVar1;
  if (0x18fff < uVar1 * 8 + 0x1000) {
    uVar1 = (uint)(longlong)((12288.0 / fVar2) * fVar2) & 0xfffffffc;
    param_1[1] = uVar1;
  }
  if (*param_1 <= uVar1) {
    param_1[1] = uVar1 - 4;
  }
  return;
}



// FUNCTION 1453bb4b0 FUN_1453bb4b0 body=382 status=ok
// SIG undefined FUN_1453bb4b0(void)

void FUN_1453bb4b0(int *param_1,float *param_2,uint param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar4 = *(longlong *)(param_1 + 4);
  if (param_4 != 0) {
    FUN_1453bb630(param_1,param_2,param_3,param_4,lVar4);
    return;
  }
  fVar12 = (float)param_1[7];
  fVar13 = (float)param_1[8];
  fVar15 = (float)param_1[10] - fVar12;
  fVar14 = (float)param_1[9];
  uVar9 = param_1[6];
  uVar2 = param_1[2];
  iVar3 = *param_1;
  fVar16 = (float)param_1[0xb] - fVar13;
  fVar17 = (float)param_1[0xc] - fVar14;
  fVar11 = 1.0 / (float)param_3;
  while (param_3 != 0) {
    uVar7 = (ulonglong)((uVar2 - iVar3) + uVar9) % (ulonglong)uVar2;
    uVar6 = (uint)uVar7;
    if (uVar2 - uVar9 < uVar2 - (uint)uVar7) {
      uVar6 = uVar9;
    }
    uVar8 = uVar2 - uVar6;
    if (param_3 <= uVar2 - uVar6) {
      uVar8 = param_3;
    }
    param_3 = param_3 - uVar8;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      fVar1 = *(float *)(lVar4 + uVar7 * 4);
      fVar12 = fVar12 + fVar15 * fVar11;
      uVar5 = (ulonglong)uVar9;
      fVar13 = fVar13 + fVar16 * fVar11;
      uVar9 = uVar9 + 1;
      fVar14 = fVar14 + fVar17 * fVar11;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      fVar10 = fVar1 * fVar12 + *param_2;
      *(float *)(lVar4 + uVar5 * 4) = fVar10;
      *param_2 = fVar10 * fVar14 + fVar1 * fVar13;
      param_2 = param_2 + 1;
    }
    uVar9 = uVar9 % uVar2;
  }
  param_1[7] = param_1[10];
  param_1[8] = param_1[0xb];
  param_1[9] = param_1[0xc];
  param_1[6] = uVar9;
  return;
}



// FUNCTION 1453bb630 FUN_1453bb630 body=1637 status=ok
// SIG undefined FUN_1453bb630(void)

void FUN_1453bb630(int *param_1,float *param_2,uint param_3,float *param_4,longlong param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
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
  
  uVar2 = param_1[2];
  uVar6 = param_1[6];
  fVar15 = (float)param_1[7];
  fVar17 = (float)param_1[8];
  iVar9 = uVar2 - *param_1;
  fVar20 = (float)param_1[9];
  uVar3 = param_1[1];
  uVar10 = (uVar2 - uVar3) - 1;
  uVar8 = (ulonglong)(iVar9 + uVar6) % (ulonglong)uVar2;
  fVar11 = 1.0 / (float)param_3;
  fVar23 = ((float)param_1[10] - fVar15) * fVar11;
  fVar24 = ((float)param_1[0xb] - fVar17) * fVar11;
  fVar11 = ((float)param_1[0xc] - fVar20) * fVar11;
  do {
    if (param_3 == 0) {
      param_1[7] = param_1[10];
      param_1[8] = param_1[0xb];
      param_1[9] = param_1[0xc];
      param_1[6] = uVar6;
      return;
    }
    uVar5 = uVar10 - (int)uVar8;
    uVar4 = (uVar2 - uVar6) - 1;
    if (uVar4 <= uVar5) {
      uVar5 = uVar4;
    }
    uVar4 = param_3;
    if (uVar5 < param_3) {
      uVar4 = uVar5;
    }
    do {
      if (((((uint)uVar8 < uVar10) && ((uint)param_1[1] <= (uint)uVar8)) && (uVar6 != uVar2 - 1)) &&
         (7 < uVar4)) break;
      fVar13 = *param_4;
      uVar5 = iVar9 + uVar6;
      fVar15 = fVar15 + fVar23;
      param_3 = param_3 - 1;
      param_4 = param_4 + 1;
      fVar17 = fVar17 + fVar24;
      fVar20 = fVar20 + fVar11;
      fVar13 = (float)uVar3 * fVar13 + (float)uVar5;
      uVar8 = (ulonglong)fVar13;
      fVar13 = fVar13 - (float)(uVar8 & 0xffffffff);
      fVar12 = (1.0 - fVar13) * *(float *)(param_5 + ((uVar8 & 0xffffffff) % (ulonglong)uVar2) * 4)
               + fVar13 * *(float *)(param_5 + ((ulonglong)((int)uVar8 + 1) % (ulonglong)uVar2) * 4)
      ;
      fVar13 = fVar12 * fVar15 + *param_2;
      *(float *)(param_5 + (ulonglong)uVar6 * 4) = fVar13;
      uVar6 = (uVar6 + 1) % uVar2;
      uVar8 = (ulonglong)(uVar5 + 1) % (ulonglong)uVar2;
      uVar5 = uVar10 - (int)uVar8;
      *param_2 = fVar13 * fVar20 + fVar12 * fVar17;
      param_2 = param_2 + 1;
      uVar4 = (uVar2 - uVar6) - 1;
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
      uVar4 = param_3;
      if (uVar5 < param_3) {
        uVar4 = uVar5;
      }
    } while (param_3 != 0);
    uVar8 = (ulonglong)(iVar9 + uVar6) % (ulonglong)uVar2;
    uVar4 = (uVar2 - uVar6) - 1;
    uVar5 = uVar10 - (int)uVar8;
    if (uVar4 <= uVar5) {
      uVar5 = uVar4;
    }
    uVar4 = param_3;
    if (uVar5 < param_3) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 >> 3;
    param_3 = param_3 + uVar5 * -8;
    if (uVar4 >> 3 != 0) {
      fVar13 = (float)uVar3;
      do {
        iVar7 = (int)uVar8;
        fVar12 = fVar13 * *param_4 + (float)uVar8;
        uVar8 = (ulonglong)fVar12;
        fVar12 = fVar12 - (float)(uVar8 & 0xffffffff);
        fVar14 = (1.0 - fVar12) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar12 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar12 = param_4[1];
        fVar18 = fVar17 + fVar24 + fVar24;
        fVar16 = fVar15 + fVar23 + fVar23;
        fVar15 = fVar14 * (fVar15 + fVar23) + *param_2;
        *(float *)(param_5 + (ulonglong)uVar6 * 4) = fVar15;
        fVar21 = fVar20 + fVar11 + fVar11;
        *param_2 = fVar15 * (fVar20 + fVar11) + fVar14 * (fVar17 + fVar24);
        fVar15 = fVar13 * fVar12 + (float)(iVar7 + 1);
        uVar8 = (ulonglong)fVar15;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar20 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar15 = param_4[2];
        fVar17 = fVar20 * fVar16 + param_2[1];
        *(float *)(param_5 + (ulonglong)(uVar6 + 1) * 4) = fVar17;
        param_2[1] = fVar17 * fVar21 + fVar20 * fVar18;
        fVar15 = fVar13 * fVar15 + (float)(iVar7 + 2);
        uVar8 = (ulonglong)fVar15;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar20 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar16 = fVar16 + fVar23;
        fVar18 = fVar18 + fVar24;
        fVar21 = fVar21 + fVar11;
        fVar15 = param_4[3];
        fVar12 = fVar16 + fVar23;
        fVar19 = fVar18 + fVar24;
        fVar17 = fVar20 * fVar16 + param_2[2];
        *(float *)(param_5 + (ulonglong)(uVar6 + 2) * 4) = fVar17;
        fVar22 = fVar21 + fVar11;
        param_2[2] = fVar17 * fVar21 + fVar20 * fVar18;
        fVar15 = fVar13 * fVar15 + (float)(iVar7 + 3);
        uVar8 = (ulonglong)fVar15;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar20 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar15 = param_4[4];
        fVar16 = fVar19 + fVar24;
        fVar14 = fVar12 + fVar23;
        fVar17 = fVar20 * fVar12 + param_2[3];
        *(float *)(param_5 + (ulonglong)(uVar6 + 3) * 4) = fVar17;
        fVar21 = fVar22 + fVar11;
        param_2[3] = fVar17 * fVar22 + fVar20 * fVar19;
        fVar15 = fVar13 * fVar15 + (float)(iVar7 + 4);
        uVar8 = (ulonglong)fVar15;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar20 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar15 = param_4[5];
        fVar17 = fVar20 * fVar14 + param_2[4];
        *(float *)(param_5 + (ulonglong)(uVar6 + 4) * 4) = fVar17;
        param_2[4] = fVar17 * fVar21 + fVar20 * fVar16;
        fVar15 = fVar13 * fVar15 + (float)(iVar7 + 5);
        fVar14 = fVar14 + fVar23;
        uVar8 = (ulonglong)fVar15;
        fVar16 = fVar16 + fVar24;
        fVar21 = fVar21 + fVar11;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar20 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar15 = param_4[6];
        fVar18 = fVar16 + fVar24;
        fVar12 = fVar14 + fVar23;
        fVar17 = fVar20 * fVar14 + param_2[5];
        *(float *)(param_5 + (ulonglong)(uVar6 + 5) * 4) = fVar17;
        fVar19 = fVar21 + fVar11;
        param_2[5] = fVar17 * fVar21 + fVar20 * fVar16;
        fVar15 = fVar13 * fVar15 + (float)(iVar7 + 6);
        uVar8 = (ulonglong)fVar15;
        fVar15 = fVar15 - (float)(uVar8 & 0xffffffff);
        fVar14 = (1.0 - fVar15) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar15 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar17 = fVar18 + fVar24;
        fVar15 = fVar12 + fVar23;
        fVar12 = fVar14 * fVar12 + param_2[6];
        *(float *)(param_5 + (ulonglong)(uVar6 + 6) * 4) = fVar12;
        fVar20 = fVar19 + fVar11;
        param_2[6] = fVar12 * fVar19 + fVar14 * fVar18;
        pfVar1 = param_4 + 7;
        param_4 = param_4 + 8;
        fVar12 = fVar13 * *pfVar1 + (float)(iVar7 + 7);
        uVar8 = (ulonglong)fVar12;
        fVar12 = fVar12 - (float)(uVar8 & 0xffffffff);
        fVar14 = (1.0 - fVar12) * *(float *)(param_5 + (uVar8 & 0xffffffff) * 4) +
                 fVar12 * *(float *)(param_5 + (ulonglong)((int)uVar8 + 1) * 4);
        fVar12 = fVar14 * fVar15 + param_2[7];
        uVar8 = (ulonglong)(iVar7 + 8);
        *(float *)(param_5 + (ulonglong)(uVar6 + 7) * 4) = fVar12;
        uVar6 = uVar6 + 8;
        param_2[7] = fVar12 * fVar20 + fVar14 * fVar17;
        param_2 = param_2 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  } while( true );
}



// FUNCTION 1453bbca0 FUN_1453bbca0 body=4708 status=ok
// SIG undefined FUN_1453bbca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453bbca0(undefined8 *param_1,undefined1 (*param_2) [32],uint param_3,uint param_4,
                  uint *param_5,float param_6,float param_7,uint param_8,uint param_9,float param_10
                  )

{
  undefined1 (*pauVar1) [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [28];
  float *pfVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  ulonglong uVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [32];
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar28 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar45 [16];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar51;
  float fVar52;
  float fVar61;
  float fVar63;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  float fVar62;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar56 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 local_d8 [8];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  float fStack_c4;
  float fStack_c0;
  
  fVar7 = param_10 * param_10 * param_10;
  uVar14 = (ulonglong)param_4 & 0xfffffff8;
  auVar81 = vinsertps_avx(ZEXT416((uint)param_10),ZEXT416((uint)(param_10 * param_10)),0x10);
  auVar81 = vinsertps_avx(auVar81,ZEXT416((uint)fVar7),0x20);
  auVar81 = vinsertps_avx(auVar81,ZEXT416((uint)(fVar7 * param_10)),0x30);
  fVar7 = 1.0 - param_10;
  fStack_c4 = fVar7 * param_10 * param_10;
  auStack_cc._0_4_ = 0;
  _local_d8 = ZEXT812(0);
  auStack_cc._4_4_ = fVar7 * param_10;
  pauVar1 = (undefined1 (*) [32])((longlong)*param_2 + (ulonglong)param_4 * 4);
  uVar25 = uVar14 * 4;
  fStack_c0 = fStack_c4 * param_10;
  auVar79 = ZEXT464(*param_5);
  uVar19 = param_5[1];
  auVar80 = ZEXT1664(CONCAT412(uVar19,CONCAT48(uVar19,CONCAT44(uVar19,uVar19))));
  pauVar23 = (undefined1 (*) [32])((longlong)*param_2 + uVar14 * 4);
  auVar9 = local_d8._16_12_;
  auStack_cc._0_4_ = fVar7;
  auVar10._16_12_ = auVar9;
  auVar10._0_16_ = _local_d8;
  auVar78._0_12_ = ZEXT812(0);
  auVar78._12_4_ = 0;
  if (param_2 < pauVar23) {
    _auStack_cc = auVar10._12_16_;
    auVar45 = _auStack_cc;
    _auStack_d0 = auVar10._8_16_;
    auVar82 = _auStack_d0;
    stack0xffffffffffffff2c = auVar10._4_16_;
    pauVar16 = param_2;
    if (0x3f < uVar25) {
      do {
        auVar28._0_4_ = *(float *)*pauVar16 + 1e-25;
        auVar28._4_4_ = *(float *)((longlong)*pauVar16 + 4) + 1e-25;
        auVar28._8_4_ = *(float *)((longlong)*pauVar16 + 8) + 1e-25;
        auVar28._12_4_ = *(float *)((longlong)*pauVar16 + 0xc) + 1e-25;
        auVar56 = vpermilps_avx(auVar28,0xff);
        auVar53._0_4_ = auVar56._0_4_ * 0.0;
        auVar53._4_4_ = auVar56._4_4_ * 0.0;
        auVar53._8_4_ = auVar56._8_4_ * 0.0;
        auVar53._12_4_ = auVar56._12_4_ * fVar7;
        auVar56 = vpermilps_avx(auVar28,0xaa);
        auVar53 = vfmadd231ps_fma(auVar53,auVar56,stack0xffffffffffffff2c);
        auVar56 = vpermilps_avx(auVar28,0x55);
        auVar53 = vfmadd231ps_fma(auVar53,auVar56,auVar82);
        auVar56 = vpermilps_avx(auVar28,0);
        auVar56 = vfmadd231ps_fma(auVar53,auVar56,auVar45);
        auVar53 = vfmadd231ps_fma(auVar56,auVar80._0_16_,auVar81);
        *(undefined1 (*) [16])*pauVar16 = auVar53;
        auVar27._0_4_ = *(float *)((longlong)*pauVar16 + 0x10) + 1e-25;
        auVar27._4_4_ = *(float *)((longlong)*pauVar16 + 0x14) + 1e-25;
        auVar27._8_4_ = *(float *)((longlong)*pauVar16 + 0x18) + 1e-25;
        auVar27._12_4_ = *(float *)((longlong)*pauVar16 + 0x1c) + 1e-25;
        auVar56 = vpermilps_avx(auVar27,0xff);
        auVar75._0_4_ = auVar56._0_4_ * 0.0;
        auVar75._4_4_ = auVar56._4_4_ * 0.0;
        auVar75._8_4_ = auVar56._8_4_ * 0.0;
        auVar75._12_4_ = auVar56._12_4_ * fVar7;
        auVar56 = vpermilps_avx(auVar27,0xaa);
        auVar28 = vfmadd231ps_fma(auVar75,auVar56,stack0xffffffffffffff2c);
        auVar56 = vpermilps_avx(auVar27,0x55);
        auVar28 = vfmadd231ps_fma(auVar28,auVar56,auVar82);
        auVar56 = vpermilps_avx(auVar53,0xff);
        auVar53 = vpermilps_avx(auVar27,0);
        auVar53 = vfmadd231ps_fma(auVar28,auVar53,auVar45);
        auVar53 = vfmadd231ps_fma(auVar53,auVar56,auVar81);
        *(undefined1 (*) [16])((longlong)*pauVar16 + 0x10) = auVar53;
        auVar26._0_4_ = *(float *)pauVar16[1] + 1e-25;
        auVar26._4_4_ = *(float *)((longlong)pauVar16[1] + 4) + 1e-25;
        auVar26._8_4_ = *(float *)((longlong)pauVar16[1] + 8) + 1e-25;
        auVar26._12_4_ = *(float *)((longlong)pauVar16[1] + 0xc) + 1e-25;
        auVar56 = vpermilps_avx(auVar26,0xff);
        auVar76._0_4_ = auVar56._0_4_ * 0.0;
        auVar76._4_4_ = auVar56._4_4_ * 0.0;
        auVar76._8_4_ = auVar56._8_4_ * 0.0;
        auVar76._12_4_ = auVar56._12_4_ * fVar7;
        auVar56 = vpermilps_avx(auVar26,0xaa);
        auVar28 = vfmadd231ps_fma(auVar76,auVar56,stack0xffffffffffffff2c);
        auVar56 = vpermilps_avx(auVar26,0x55);
        auVar28 = vfmadd231ps_fma(auVar28,auVar56,auVar82);
        auVar56 = vpermilps_avx(auVar26,0);
        auVar28 = vfmadd231ps_fma(auVar28,auVar56,auVar45);
        auVar56 = vpermilps_avx(auVar53,0xff);
        auVar53 = vfmadd231ps_fma(auVar28,auVar56,auVar81);
        *(undefined1 (*) [16])pauVar16[1] = auVar53;
        auVar43._0_4_ = *(float *)((longlong)pauVar16[1] + 0x10) + 1e-25;
        auVar43._4_4_ = *(float *)((longlong)pauVar16[1] + 0x14) + 1e-25;
        auVar43._8_4_ = *(float *)((longlong)pauVar16[1] + 0x18) + 1e-25;
        auVar43._12_4_ = *(float *)((longlong)pauVar16[1] + 0x1c) + 1e-25;
        auVar56 = vpermilps_avx(auVar43,0xff);
        auVar54._0_4_ = auVar56._0_4_ * 0.0;
        auVar54._4_4_ = auVar56._4_4_ * 0.0;
        auVar54._8_4_ = auVar56._8_4_ * 0.0;
        auVar54._12_4_ = auVar56._12_4_ * fVar7;
        auVar56 = vpermilps_avx(auVar43,0xaa);
        auVar28 = vfmadd231ps_fma(auVar54,auVar56,stack0xffffffffffffff2c);
        auVar56 = vpermilps_avx(auVar43,0x55);
        auVar28 = vfmadd231ps_fma(auVar28,auVar56,auVar82);
        auVar56 = vpermilps_avx(auVar43,0);
        auVar28 = vfmadd231ps_fma(auVar28,auVar56,auVar45);
        auVar56 = vpermilps_avx(auVar53,0xff);
        auVar56 = vfmadd231ps_fma(auVar28,auVar56,auVar81);
        *(undefined1 (*) [16])((longlong)pauVar16[1] + 0x10) = auVar56;
        pauVar16 = pauVar16 + 2;
        auVar56 = vpermilps_avx(auVar56,0xff);
        auVar80 = ZEXT1664(auVar56);
      } while (pauVar16 < (undefined1 (*) [32])((longlong)pauVar23[-2] + 0x10));
      if (pauVar23 <= pauVar16) goto LAB_1453bbf72;
    }
    do {
      auVar44._0_4_ = *(float *)*pauVar16 + 1e-25;
      auVar44._4_4_ = *(float *)((longlong)*pauVar16 + 4) + 1e-25;
      auVar44._8_4_ = *(float *)((longlong)*pauVar16 + 8) + 1e-25;
      auVar44._12_4_ = *(float *)((longlong)*pauVar16 + 0xc) + 1e-25;
      auVar56 = vpermilps_avx(auVar44,0xff);
      auVar55._0_4_ = auVar56._0_4_ * 0.0;
      auVar55._4_4_ = auVar56._4_4_ * 0.0;
      auVar55._8_4_ = auVar56._8_4_ * 0.0;
      auVar55._12_4_ = auVar56._12_4_ * fVar7;
      auVar56 = vpermilps_avx(auVar44,0xaa);
      auVar53 = vfmadd231ps_fma(auVar55,auVar56,stack0xffffffffffffff2c);
      auVar56 = vpermilps_avx(auVar44,0x55);
      auVar53 = vfmadd231ps_fma(auVar53,auVar56,auVar82);
      auVar56 = vpermilps_avx(auVar44,0);
      auVar56 = vfmadd231ps_fma(auVar53,auVar56,auVar45);
      auVar56 = vfmadd231ps_fma(auVar56,auVar80._0_16_,auVar81);
      *(undefined1 (*) [16])*pauVar16 = auVar56;
      pfVar22 = (float *)*pauVar16;
      auVar56 = vpermilps_avx(auVar56,0xff);
      auVar80 = ZEXT1664(auVar56);
      pauVar16 = (undefined1 (*) [32])(pfVar22 + 4);
    } while ((undefined1 (*) [32])(pfVar22 + 4) < pauVar23);
LAB_1453bbf7e:
    auVar13 = _DAT_149d47760;
    auVar12 = _DAT_149d476a0;
    auVar42 = _DAT_149931400;
    pauVar16 = param_2;
    if (0x7f < uVar25) {
      auVar48._4_4_ = param_6;
      auVar48._0_4_ = param_6;
      auVar48._8_4_ = param_6;
      auVar48._12_4_ = param_6;
      auVar48._16_4_ = param_6;
      auVar48._20_4_ = param_6;
      auVar48._24_4_ = param_6;
      auVar48._28_4_ = param_6;
      auVar46 = _DAT_149d47820;
      do {
        auVar30 = _DAT_149d47820;
        auVar47 = vpand_avx2(auVar12,*pauVar16);
        auVar47 = vpaddd_avx2(auVar47,auVar42);
        fVar8 = auVar47._0_4_;
        fVar52 = auVar42._0_4_;
        fVar51 = fVar52 + fVar8;
        fVar21 = auVar47._4_4_;
        fVar62 = auVar42._4_4_;
        fVar61 = fVar62 + fVar21;
        fVar17 = auVar47._8_4_;
        fVar64 = auVar42._8_4_;
        fVar63 = fVar64 + fVar17;
        fVar2 = auVar47._12_4_;
        fVar66 = auVar42._12_4_;
        fVar65 = fVar66 + fVar2;
        fVar3 = auVar47._16_4_;
        fVar68 = auVar42._16_4_;
        fVar67 = fVar68 + fVar3;
        fVar4 = auVar47._20_4_;
        fVar70 = auVar42._20_4_;
        fVar69 = fVar70 + fVar4;
        fVar5 = auVar47._24_4_;
        fVar72 = auVar42._24_4_;
        fVar71 = fVar72 + fVar5;
        fVar6 = auVar47._28_4_;
        fVar74 = auVar42._28_4_;
        fVar73 = fVar74 + fVar6;
        auVar47._0_4_ = fVar8 * fVar8 * fVar8;
        auVar47._4_4_ = fVar21 * fVar21 * fVar21;
        auVar47._8_4_ = fVar17 * fVar17 * fVar17;
        auVar47._12_4_ = fVar2 * fVar2 * fVar2;
        auVar47._16_4_ = fVar3 * fVar3 * fVar3;
        auVar47._20_4_ = fVar4 * fVar4 * fVar4;
        auVar47._24_4_ = fVar5 * fVar5 * fVar5;
        auVar47._28_4_ = fVar6 * fVar6 * fVar6;
        auVar81 = vfmadd231ps_fma(auVar46,auVar47,auVar13);
        auVar46._0_4_ = fVar51 * fVar51 * fVar51;
        auVar46._4_4_ = fVar61 * fVar61 * fVar61;
        auVar46._8_4_ = fVar63 * fVar63 * fVar63;
        auVar46._12_4_ = fVar65 * fVar65 * fVar65;
        auVar46._16_4_ = fVar67 * fVar67 * fVar67;
        auVar46._20_4_ = fVar69 * fVar69 * fVar69;
        auVar46._24_4_ = fVar71 * fVar71 * fVar71;
        auVar46._28_4_ = fVar73 * fVar73 * fVar73;
        auVar47 = vdivps_avx(ZEXT1632(auVar81),auVar46);
        auVar46 = vpslld_avx2(*pauVar16,1);
        auVar46 = vpsrld_avx2(auVar46,0x18);
        auVar46 = vcvtdq2ps_avx(auVar46);
        auVar46 = vsubps_avx(auVar46,_DAT_149d477c0);
        auVar81 = vfmadd231ps_fma(auVar47,auVar46,_DAT_149d47700);
        auVar81 = vfmsub231ps_fma(auVar48,ZEXT1632(auVar81),_DAT_149d47780);
        auVar46 = vmaxps_avx(ZEXT1632(auVar81),ZEXT832(0) << 0x20);
        *pauVar16 = auVar46;
        auVar32 = _DAT_149d47820;
        auVar46 = vpand_avx2(auVar12,pauVar16[1]);
        auVar46 = vpaddd_avx2(auVar46,auVar42);
        fVar8 = auVar46._0_4_;
        fVar51 = fVar52 + fVar8;
        fVar21 = auVar46._4_4_;
        fVar61 = fVar62 + fVar21;
        fVar17 = auVar46._8_4_;
        fVar63 = fVar64 + fVar17;
        fVar2 = auVar46._12_4_;
        fVar65 = fVar66 + fVar2;
        fVar3 = auVar46._16_4_;
        fVar67 = fVar68 + fVar3;
        fVar4 = auVar46._20_4_;
        fVar69 = fVar70 + fVar4;
        fVar5 = auVar46._24_4_;
        fVar71 = fVar72 + fVar5;
        fVar6 = auVar46._28_4_;
        fVar73 = fVar74 + fVar6;
        auVar29._0_4_ = fVar8 * fVar8 * fVar8;
        auVar29._4_4_ = fVar21 * fVar21 * fVar21;
        auVar29._8_4_ = fVar17 * fVar17 * fVar17;
        auVar29._12_4_ = fVar2 * fVar2 * fVar2;
        auVar29._16_4_ = fVar3 * fVar3 * fVar3;
        auVar29._20_4_ = fVar4 * fVar4 * fVar4;
        auVar29._24_4_ = fVar5 * fVar5 * fVar5;
        auVar29._28_4_ = fVar6 * fVar6 * fVar6;
        auVar81 = vfmadd231ps_fma(auVar30,auVar29,auVar13);
        auVar30._0_4_ = fVar51 * fVar51 * fVar51;
        auVar30._4_4_ = fVar61 * fVar61 * fVar61;
        auVar30._8_4_ = fVar63 * fVar63 * fVar63;
        auVar30._12_4_ = fVar65 * fVar65 * fVar65;
        auVar30._16_4_ = fVar67 * fVar67 * fVar67;
        auVar30._20_4_ = fVar69 * fVar69 * fVar69;
        auVar30._24_4_ = fVar71 * fVar71 * fVar71;
        auVar30._28_4_ = fVar73 * fVar73 * fVar73;
        auVar47 = vdivps_avx(ZEXT1632(auVar81),auVar30);
        auVar46 = vpslld_avx2(pauVar16[1],1);
        auVar46 = vpsrld_avx2(auVar46,0x18);
        auVar46 = vcvtdq2ps_avx(auVar46);
        auVar46 = vsubps_avx(auVar46,_DAT_149d477c0);
        auVar81 = vfmadd231ps_fma(auVar47,auVar46,_DAT_149d47700);
        auVar81 = vfmsub231ps_fma(auVar48,ZEXT1632(auVar81),_DAT_149d47780);
        auVar46 = vmaxps_avx(ZEXT1632(auVar81),ZEXT832(0) << 0x20);
        pauVar16[1] = auVar46;
        auVar30 = _DAT_149d47820;
        auVar46 = vpand_avx2(auVar12,pauVar16[2]);
        auVar46 = vpaddd_avx2(auVar46,auVar42);
        fVar8 = auVar46._0_4_;
        fVar51 = fVar52 + fVar8;
        fVar21 = auVar46._4_4_;
        fVar61 = fVar62 + fVar21;
        fVar17 = auVar46._8_4_;
        fVar63 = fVar64 + fVar17;
        fVar2 = auVar46._12_4_;
        fVar65 = fVar66 + fVar2;
        fVar3 = auVar46._16_4_;
        fVar67 = fVar68 + fVar3;
        fVar4 = auVar46._20_4_;
        fVar69 = fVar70 + fVar4;
        fVar5 = auVar46._24_4_;
        fVar71 = fVar72 + fVar5;
        fVar6 = auVar46._28_4_;
        fVar73 = fVar74 + fVar6;
        auVar31._0_4_ = fVar8 * fVar8 * fVar8;
        auVar31._4_4_ = fVar21 * fVar21 * fVar21;
        auVar31._8_4_ = fVar17 * fVar17 * fVar17;
        auVar31._12_4_ = fVar2 * fVar2 * fVar2;
        auVar31._16_4_ = fVar3 * fVar3 * fVar3;
        auVar31._20_4_ = fVar4 * fVar4 * fVar4;
        auVar31._24_4_ = fVar5 * fVar5 * fVar5;
        auVar31._28_4_ = fVar6 * fVar6 * fVar6;
        auVar81 = vfmadd231ps_fma(auVar32,auVar31,auVar13);
        auVar32._0_4_ = fVar51 * fVar51 * fVar51;
        auVar32._4_4_ = fVar61 * fVar61 * fVar61;
        auVar32._8_4_ = fVar63 * fVar63 * fVar63;
        auVar32._12_4_ = fVar65 * fVar65 * fVar65;
        auVar32._16_4_ = fVar67 * fVar67 * fVar67;
        auVar32._20_4_ = fVar69 * fVar69 * fVar69;
        auVar32._24_4_ = fVar71 * fVar71 * fVar71;
        auVar32._28_4_ = fVar73 * fVar73 * fVar73;
        auVar47 = vdivps_avx(ZEXT1632(auVar81),auVar32);
        auVar46 = vpslld_avx2(pauVar16[2],1);
        auVar46 = vpsrld_avx2(auVar46,0x18);
        auVar46 = vcvtdq2ps_avx(auVar46);
        auVar46 = vsubps_avx(auVar46,_DAT_149d477c0);
        auVar81 = vfmadd231ps_fma(auVar47,auVar46,_DAT_149d47700);
        auVar81 = vfmsub231ps_fma(auVar48,ZEXT1632(auVar81),_DAT_149d47780);
        auVar46 = vmaxps_avx(ZEXT1632(auVar81),ZEXT832(0) << 0x20);
        pauVar16[2] = auVar46;
        auVar46 = _DAT_149d47820;
        auVar47 = vpand_avx2(auVar12,pauVar16[3]);
        auVar47 = vpaddd_avx2(auVar47,auVar42);
        fVar8 = auVar47._0_4_;
        fVar52 = fVar52 + fVar8;
        fVar21 = auVar47._4_4_;
        fVar62 = fVar62 + fVar21;
        fVar17 = auVar47._8_4_;
        fVar64 = fVar64 + fVar17;
        fVar2 = auVar47._12_4_;
        fVar66 = fVar66 + fVar2;
        fVar3 = auVar47._16_4_;
        fVar68 = fVar68 + fVar3;
        fVar4 = auVar47._20_4_;
        fVar70 = fVar70 + fVar4;
        fVar5 = auVar47._24_4_;
        fVar72 = fVar72 + fVar5;
        fVar6 = auVar47._28_4_;
        fVar74 = fVar74 + fVar6;
        auVar33._0_4_ = fVar8 * fVar8 * fVar8;
        auVar33._4_4_ = fVar21 * fVar21 * fVar21;
        auVar33._8_4_ = fVar17 * fVar17 * fVar17;
        auVar33._12_4_ = fVar2 * fVar2 * fVar2;
        auVar33._16_4_ = fVar3 * fVar3 * fVar3;
        auVar33._20_4_ = fVar4 * fVar4 * fVar4;
        auVar33._24_4_ = fVar5 * fVar5 * fVar5;
        auVar33._28_4_ = fVar6 * fVar6 * fVar6;
        auVar81 = vfmadd231ps_fma(auVar30,auVar33,auVar13);
        auVar34._0_4_ = fVar52 * fVar52 * fVar52;
        auVar34._4_4_ = fVar62 * fVar62 * fVar62;
        auVar34._8_4_ = fVar64 * fVar64 * fVar64;
        auVar34._12_4_ = fVar66 * fVar66 * fVar66;
        auVar34._16_4_ = fVar68 * fVar68 * fVar68;
        auVar34._20_4_ = fVar70 * fVar70 * fVar70;
        auVar34._24_4_ = fVar72 * fVar72 * fVar72;
        auVar34._28_4_ = fVar74 * fVar74 * fVar74;
        auVar30 = vdivps_avx(ZEXT1632(auVar81),auVar34);
        auVar47 = vpslld_avx2(pauVar16[3],1);
        auVar47 = vpsrld_avx2(auVar47,0x18);
        auVar47 = vcvtdq2ps_avx(auVar47);
        auVar47 = vsubps_avx(auVar47,_DAT_149d477c0);
        auVar81 = vfmadd231ps_fma(auVar30,auVar47,_DAT_149d47700);
        auVar81 = vfmsub231ps_fma(auVar48,ZEXT1632(auVar81),_DAT_149d47780);
        auVar47 = vmaxps_avx(ZEXT1632(auVar81),ZEXT832(0) << 0x20);
        pauVar16[3] = auVar47;
        pauVar16 = pauVar16 + 4;
      } while (pauVar16 < pauVar23 + -3);
      if (pauVar23 <= pauVar16) goto LAB_1453bc239;
    }
    auVar46 = _DAT_149d47760;
    auVar13 = _DAT_149d47700;
    auVar12 = _DAT_149d476a0;
    auVar42 = _DAT_149931400;
    auVar77._4_4_ = param_6;
    auVar77._0_4_ = param_6;
    auVar77._8_4_ = param_6;
    auVar77._12_4_ = param_6;
    auVar77._16_4_ = param_6;
    auVar77._20_4_ = param_6;
    auVar77._24_4_ = param_6;
    auVar77._28_4_ = param_6;
    auVar48 = _DAT_149d47820;
    do {
      auVar30 = _DAT_149d47820;
      auVar47 = vpand_avx2(auVar12,*pauVar16);
      auVar47 = vpaddd_avx2(auVar47,auVar42);
      fVar8 = auVar47._0_4_;
      fVar51 = auVar42._0_4_ + fVar8;
      fVar21 = auVar47._4_4_;
      fVar52 = auVar42._4_4_ + fVar21;
      fVar17 = auVar47._8_4_;
      fVar61 = auVar42._8_4_ + fVar17;
      fVar2 = auVar47._12_4_;
      fVar62 = auVar42._12_4_ + fVar2;
      fVar3 = auVar47._16_4_;
      fVar63 = auVar42._16_4_ + fVar3;
      fVar4 = auVar47._20_4_;
      fVar64 = auVar42._20_4_ + fVar4;
      fVar5 = auVar47._24_4_;
      fVar65 = auVar42._24_4_ + fVar5;
      fVar6 = auVar47._28_4_;
      fVar66 = auVar42._28_4_ + fVar6;
      auVar35._0_4_ = fVar8 * fVar8 * fVar8;
      auVar35._4_4_ = fVar21 * fVar21 * fVar21;
      auVar35._8_4_ = fVar17 * fVar17 * fVar17;
      auVar35._12_4_ = fVar2 * fVar2 * fVar2;
      auVar35._16_4_ = fVar3 * fVar3 * fVar3;
      auVar35._20_4_ = fVar4 * fVar4 * fVar4;
      auVar35._24_4_ = fVar5 * fVar5 * fVar5;
      auVar35._28_4_ = fVar6 * fVar6 * fVar6;
      auVar81 = vfmadd231ps_fma(auVar48,auVar35,auVar46);
      auVar36._0_4_ = fVar51 * fVar51 * fVar51;
      auVar36._4_4_ = fVar52 * fVar52 * fVar52;
      auVar36._8_4_ = fVar61 * fVar61 * fVar61;
      auVar36._12_4_ = fVar62 * fVar62 * fVar62;
      auVar36._16_4_ = fVar63 * fVar63 * fVar63;
      auVar36._20_4_ = fVar64 * fVar64 * fVar64;
      auVar36._24_4_ = fVar65 * fVar65 * fVar65;
      auVar36._28_4_ = fVar66 * fVar66 * fVar66;
      auVar47 = vdivps_avx(ZEXT1632(auVar81),auVar36);
      auVar48 = vpslld_avx2(*pauVar16,1);
      auVar48 = vpsrld_avx2(auVar48,0x18);
      auVar48 = vcvtdq2ps_avx(auVar48);
      auVar48 = vsubps_avx(auVar48,_DAT_149d477c0);
      auVar81 = vfmadd231ps_fma(auVar47,auVar48,auVar13);
      auVar81 = vfmsub231ps_fma(auVar77,ZEXT1632(auVar81),_DAT_149d47780);
      auVar48 = vmaxps_avx(ZEXT1632(auVar81),ZEXT832(0) << 0x20);
      *pauVar16 = auVar48;
      pauVar16 = pauVar16 + 1;
      pauVar15 = param_2;
      auVar48 = auVar30;
    } while (pauVar16 < pauVar23);
LAB_1453bc250:
    do {
      auVar81 = *(undefined1 (*) [16])*pauVar15;
      auVar45 = ZEXT416((uint)(auVar79._0_4_ - auVar81._0_4_));
      auVar82 = vcmpss_avx(auVar78,auVar45,2);
      auVar82 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar82);
      auVar28 = vfmadd231ss_fma(auVar81,auVar45,auVar82);
      auVar45 = vshufps_avx(auVar81,auVar81,0x55);
      auVar56 = ZEXT416((uint)(auVar28._0_4_ - auVar45._0_4_));
      auVar82 = vcmpss_avx(auVar78,auVar56,2);
      auVar82 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar82);
      auVar45 = vfmadd231ss_fma(auVar45,auVar56,auVar82);
      auVar56 = vshufps_avx(auVar81,auVar81,0xaa);
      auVar27 = ZEXT416((uint)(auVar45._0_4_ - auVar56._0_4_));
      auVar82 = vcmpss_avx(auVar78,auVar27,2);
      auVar82 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar82);
      auVar53 = vshufps_avx(auVar81,auVar81,0xff);
      auVar45 = vinsertps_avx(auVar28,auVar45,0x10);
      auVar82 = vfmadd231ss_fma(auVar56,auVar27,auVar82);
      auVar56 = ZEXT416((uint)(auVar82._0_4_ - auVar53._0_4_));
      auVar81 = vcmpss_avx(auVar78,auVar56,2);
      auVar81 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar81);
      auVar56 = vfmadd231ss_fma(auVar53,auVar56,auVar81);
      auVar79 = ZEXT1664(auVar56);
      auVar81 = vinsertps_avx(auVar45,auVar82,0x20);
      auVar81 = vinsertps_avx(auVar81,auVar56,0x30);
      *(undefined1 (*) [16])*pauVar15 = auVar81;
      auVar13 = _DAT_149d47840;
      auVar12 = _DAT_149d477e0;
      auVar42 = _DAT_149d477a0;
      pfVar22 = (float *)*pauVar15;
      pauVar15 = (undefined1 (*) [32])(pfVar22 + 4);
    } while ((undefined1 (*) [32])(pfVar22 + 4) < pauVar23);
    pauVar16 = param_2;
    if (0x7f < uVar25) {
      auVar48 = _DAT_149d47800;
      auVar46 = _DAT_149935440;
      do {
        auVar49._0_4_ = param_7 * *(float *)*pauVar16 * 0.05;
        auVar49._4_4_ = param_7 * *(float *)((longlong)*pauVar16 + 4) * 0.05;
        auVar49._8_4_ = param_7 * *(float *)((longlong)*pauVar16 + 8) * 0.05;
        auVar49._12_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0xc) * 0.05;
        auVar49._16_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x10) * 0.05;
        auVar49._20_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x14) * 0.05;
        auVar49._24_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x18) * 0.05;
        auVar49._28_4_ = param_7 * *(float *)((longlong)*pauVar16 + 0x1c) * 0.05;
        auVar47 = vcmpps_avx(auVar49,auVar13,1);
        auVar30 = vcmpps_avx(auVar49,auVar42,0xe);
        auVar30 = vorps_avx(auVar47,auVar30);
        auVar47 = vblendvps_avx(auVar49,auVar13,auVar30);
        auVar81 = vfmadd231ps_fma(auVar48,auVar47,auVar12);
        auVar48 = vcvtps2dq_avx(ZEXT1632(auVar81));
        auVar47 = vpand_avx2(_DAT_149d476a0,auVar48);
        auVar47 = vpaddd_avx2(auVar47,_DAT_149931400);
        auVar46 = vpand_avx2(auVar46,auVar48);
        auVar37._0_4_ =
             ((auVar47._0_4_ * 0.32518977 + 0.020805772) * auVar47._0_4_ + 0.65304345) *
             auVar46._0_4_;
        auVar37._4_4_ =
             ((auVar47._4_4_ * 0.32518977 + 0.020805772) * auVar47._4_4_ + 0.65304345) *
             auVar46._4_4_;
        auVar37._8_4_ =
             ((auVar47._8_4_ * 0.32518977 + 0.020805772) * auVar47._8_4_ + 0.65304345) *
             auVar46._8_4_;
        auVar37._12_4_ =
             ((auVar47._12_4_ * 0.32518977 + 0.020805772) * auVar47._12_4_ + 0.65304345) *
             auVar46._12_4_;
        auVar37._16_4_ =
             ((auVar47._16_4_ * 0.32518977 + 0.020805772) * auVar47._16_4_ + 0.65304345) *
             auVar46._16_4_;
        auVar37._20_4_ =
             ((auVar47._20_4_ * 0.32518977 + 0.020805772) * auVar47._20_4_ + 0.65304345) *
             auVar46._20_4_;
        auVar37._24_4_ =
             ((auVar47._24_4_ * 0.32518977 + 0.020805772) * auVar47._24_4_ + 0.65304345) *
             auVar46._24_4_;
        auVar37._28_4_ =
             ((auVar47._28_4_ * 0.32518977 + 0.020805772) * auVar47._28_4_ + 0.65304345) *
             auVar46._28_4_;
        auVar46 = vblendvps_avx(auVar37,ZEXT432(0) << 0x20,auVar30);
        *pauVar16 = auVar46;
        auVar58._0_4_ = param_7 * *(float *)pauVar16[1] * 0.05;
        auVar58._4_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 4) * 0.05;
        auVar58._8_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 8) * 0.05;
        auVar58._12_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0xc) * 0.05;
        auVar58._16_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x10) * 0.05;
        auVar58._20_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x14) * 0.05;
        auVar58._24_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x18) * 0.05;
        auVar58._28_4_ = param_7 * *(float *)((longlong)pauVar16[1] + 0x1c) * 0.05;
        auVar46 = vcmpps_avx(auVar58,auVar13,1);
        auVar48 = vcmpps_avx(auVar58,auVar42,0xe);
        auVar48 = vorps_avx(auVar46,auVar48);
        auVar46 = vblendvps_avx(auVar58,auVar13,auVar48);
        auVar81 = vfmadd231ps_fma(_DAT_149d47800,auVar46,auVar12);
        auVar46 = vcvtps2dq_avx(ZEXT1632(auVar81));
        auVar47 = vpand_avx2(_DAT_149d476a0,auVar46);
        auVar30 = vpand_avx2(_DAT_149935440,auVar46);
        auVar46 = vpaddd_avx2(auVar47,_DAT_149931400);
        auVar38._0_4_ =
             ((auVar46._0_4_ * 0.32518977 + 0.020805772) * auVar46._0_4_ + 0.65304345) *
             auVar30._0_4_;
        auVar38._4_4_ =
             ((auVar46._4_4_ * 0.32518977 + 0.020805772) * auVar46._4_4_ + 0.65304345) *
             auVar30._4_4_;
        auVar38._8_4_ =
             ((auVar46._8_4_ * 0.32518977 + 0.020805772) * auVar46._8_4_ + 0.65304345) *
             auVar30._8_4_;
        auVar38._12_4_ =
             ((auVar46._12_4_ * 0.32518977 + 0.020805772) * auVar46._12_4_ + 0.65304345) *
             auVar30._12_4_;
        auVar38._16_4_ =
             ((auVar46._16_4_ * 0.32518977 + 0.020805772) * auVar46._16_4_ + 0.65304345) *
             auVar30._16_4_;
        auVar38._20_4_ =
             ((auVar46._20_4_ * 0.32518977 + 0.020805772) * auVar46._20_4_ + 0.65304345) *
             auVar30._20_4_;
        auVar38._24_4_ =
             ((auVar46._24_4_ * 0.32518977 + 0.020805772) * auVar46._24_4_ + 0.65304345) *
             auVar30._24_4_;
        auVar38._28_4_ =
             ((auVar46._28_4_ * 0.32518977 + 0.020805772) * auVar46._28_4_ + 0.65304345) *
             auVar30._28_4_;
        auVar46 = vblendvps_avx(auVar38,ZEXT432(0) << 0x20,auVar48);
        pauVar16[1] = auVar46;
        auVar59._0_4_ = param_7 * *(float *)pauVar16[2] * 0.05;
        auVar59._4_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 4) * 0.05;
        auVar59._8_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 8) * 0.05;
        auVar59._12_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0xc) * 0.05;
        auVar59._16_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x10) * 0.05;
        auVar59._20_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x14) * 0.05;
        auVar59._24_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x18) * 0.05;
        auVar59._28_4_ = param_7 * *(float *)((longlong)pauVar16[2] + 0x1c) * 0.05;
        auVar46 = vcmpps_avx(auVar59,auVar13,1);
        auVar48 = vcmpps_avx(auVar59,auVar42,0xe);
        auVar48 = vorps_avx(auVar46,auVar48);
        auVar46 = vblendvps_avx(auVar59,auVar13,auVar48);
        auVar81 = vfmadd231ps_fma(_DAT_149d47800,auVar46,auVar12);
        auVar46 = vcvtps2dq_avx(ZEXT1632(auVar81));
        auVar47 = vpand_avx2(_DAT_149935440,auVar46);
        auVar46 = vpand_avx2(_DAT_149d476a0,auVar46);
        auVar46 = vpaddd_avx2(auVar46,_DAT_149931400);
        auVar39._0_4_ =
             ((auVar46._0_4_ * 0.32518977 + 0.020805772) * auVar46._0_4_ + 0.65304345) *
             auVar47._0_4_;
        auVar39._4_4_ =
             ((auVar46._4_4_ * 0.32518977 + 0.020805772) * auVar46._4_4_ + 0.65304345) *
             auVar47._4_4_;
        auVar39._8_4_ =
             ((auVar46._8_4_ * 0.32518977 + 0.020805772) * auVar46._8_4_ + 0.65304345) *
             auVar47._8_4_;
        auVar39._12_4_ =
             ((auVar46._12_4_ * 0.32518977 + 0.020805772) * auVar46._12_4_ + 0.65304345) *
             auVar47._12_4_;
        auVar39._16_4_ =
             ((auVar46._16_4_ * 0.32518977 + 0.020805772) * auVar46._16_4_ + 0.65304345) *
             auVar47._16_4_;
        auVar39._20_4_ =
             ((auVar46._20_4_ * 0.32518977 + 0.020805772) * auVar46._20_4_ + 0.65304345) *
             auVar47._20_4_;
        auVar39._24_4_ =
             ((auVar46._24_4_ * 0.32518977 + 0.020805772) * auVar46._24_4_ + 0.65304345) *
             auVar47._24_4_;
        auVar39._28_4_ =
             ((auVar46._28_4_ * 0.32518977 + 0.020805772) * auVar46._28_4_ + 0.65304345) *
             auVar47._28_4_;
        auVar46 = vblendvps_avx(auVar39,ZEXT432(0) << 0x20,auVar48);
        pauVar16[2] = auVar46;
        auVar48 = _DAT_149d47800;
        auVar46 = _DAT_149935440;
        auVar60._0_4_ = param_7 * *(float *)pauVar16[3] * 0.05;
        auVar60._4_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 4) * 0.05;
        auVar60._8_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 8) * 0.05;
        auVar60._12_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0xc) * 0.05;
        auVar60._16_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x10) * 0.05;
        auVar60._20_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x14) * 0.05;
        auVar60._24_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x18) * 0.05;
        auVar60._28_4_ = param_7 * *(float *)((longlong)pauVar16[3] + 0x1c) * 0.05;
        auVar47 = vcmpps_avx(auVar60,auVar13,1);
        auVar30 = vcmpps_avx(auVar60,auVar42,0xe);
        auVar30 = vorps_avx(auVar47,auVar30);
        auVar47 = vblendvps_avx(auVar60,auVar13,auVar30);
        auVar81 = vfmadd231ps_fma(_DAT_149d47800,auVar47,auVar12);
        auVar47 = vcvtps2dq_avx(ZEXT1632(auVar81));
        auVar32 = vpand_avx2(_DAT_149935440,auVar47);
        auVar47 = vpand_avx2(_DAT_149d476a0,auVar47);
        auVar47 = vpaddd_avx2(auVar47,_DAT_149931400);
        auVar40._0_4_ =
             ((auVar47._0_4_ * 0.32518977 + 0.020805772) * auVar47._0_4_ + 0.65304345) *
             auVar32._0_4_;
        auVar40._4_4_ =
             ((auVar47._4_4_ * 0.32518977 + 0.020805772) * auVar47._4_4_ + 0.65304345) *
             auVar32._4_4_;
        auVar40._8_4_ =
             ((auVar47._8_4_ * 0.32518977 + 0.020805772) * auVar47._8_4_ + 0.65304345) *
             auVar32._8_4_;
        auVar40._12_4_ =
             ((auVar47._12_4_ * 0.32518977 + 0.020805772) * auVar47._12_4_ + 0.65304345) *
             auVar32._12_4_;
        auVar40._16_4_ =
             ((auVar47._16_4_ * 0.32518977 + 0.020805772) * auVar47._16_4_ + 0.65304345) *
             auVar32._16_4_;
        auVar40._20_4_ =
             ((auVar47._20_4_ * 0.32518977 + 0.020805772) * auVar47._20_4_ + 0.65304345) *
             auVar32._20_4_;
        auVar40._24_4_ =
             ((auVar47._24_4_ * 0.32518977 + 0.020805772) * auVar47._24_4_ + 0.65304345) *
             auVar32._24_4_;
        auVar40._28_4_ =
             ((auVar47._28_4_ * 0.32518977 + 0.020805772) * auVar47._28_4_ + 0.65304345) *
             auVar32._28_4_;
        auVar47 = vblendvps_avx(auVar40,ZEXT432(0) << 0x20,auVar30);
        pauVar16[3] = auVar47;
        pauVar16 = pauVar16 + 4;
      } while (pauVar16 < pauVar23 + -3);
    }
    auVar48 = _DAT_149d47840;
    auVar46 = _DAT_149d47800;
    auVar13 = _DAT_149d477e0;
    auVar12 = _DAT_149d477a0;
    auVar42 = _DAT_149935440;
    if (pauVar16 < pauVar23) {
      fVar8 = param_7 * 0.05;
      auVar47 = _DAT_149931400;
      do {
        auVar31 = _DAT_149931400;
        auVar50._0_4_ = fVar8 * *(float *)*pauVar16;
        auVar50._4_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 4);
        auVar50._8_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 8);
        auVar50._12_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0xc);
        auVar50._16_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x10);
        auVar50._20_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x14);
        auVar50._24_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x18);
        auVar50._28_4_ = fVar8 * *(float *)((longlong)*pauVar16 + 0x1c);
        auVar30 = vcmpps_avx(auVar50,auVar48,1);
        auVar32 = vcmpps_avx(auVar50,auVar12,0xe);
        auVar32 = vorps_avx(auVar30,auVar32);
        auVar30 = vblendvps_avx(auVar50,auVar48,auVar32);
        auVar81 = vfmadd231ps_fma(auVar46,auVar30,auVar13);
        auVar30 = vcvtps2dq_avx(ZEXT1632(auVar81));
        auVar29 = vpand_avx2(_DAT_149d476a0,auVar30);
        auVar47 = vpaddd_avx2(auVar29,auVar47);
        auVar30 = vpand_avx2(auVar42,auVar30);
        auVar41._0_4_ =
             ((auVar47._0_4_ * 0.32518977 + 0.020805772) * auVar47._0_4_ + 0.65304345) *
             auVar30._0_4_;
        auVar41._4_4_ =
             ((auVar47._4_4_ * 0.32518977 + 0.020805772) * auVar47._4_4_ + 0.65304345) *
             auVar30._4_4_;
        auVar41._8_4_ =
             ((auVar47._8_4_ * 0.32518977 + 0.020805772) * auVar47._8_4_ + 0.65304345) *
             auVar30._8_4_;
        auVar41._12_4_ =
             ((auVar47._12_4_ * 0.32518977 + 0.020805772) * auVar47._12_4_ + 0.65304345) *
             auVar30._12_4_;
        auVar41._16_4_ =
             ((auVar47._16_4_ * 0.32518977 + 0.020805772) * auVar47._16_4_ + 0.65304345) *
             auVar30._16_4_;
        auVar41._20_4_ =
             ((auVar47._20_4_ * 0.32518977 + 0.020805772) * auVar47._20_4_ + 0.65304345) *
             auVar30._20_4_;
        auVar41._24_4_ =
             ((auVar47._24_4_ * 0.32518977 + 0.020805772) * auVar47._24_4_ + 0.65304345) *
             auVar30._24_4_;
        auVar41._28_4_ =
             ((auVar47._28_4_ * 0.32518977 + 0.020805772) * auVar47._28_4_ + 0.65304345) *
             auVar30._28_4_;
        auVar47 = vblendvps_avx(auVar41,ZEXT432(0) << 0x20,auVar32);
        *pauVar16 = auVar47;
        pauVar16 = pauVar16 + 1;
        auVar47 = auVar31;
      } while (pauVar16 < pauVar23);
    }
  }
  else {
LAB_1453bbf72:
    if (param_2 < pauVar23) goto LAB_1453bbf7e;
LAB_1453bc239:
    pauVar15 = param_2;
    if (param_2 < pauVar23) goto LAB_1453bc250;
  }
  auVar81 = ZEXT416((uint)param_10);
  if (pauVar23 < pauVar1) {
    auVar82 = SUB6416(ZEXT464(0x4bd49a78),0);
    auVar45 = SUB6416(ZEXT464(0x4e7e0000),0);
    auVar56 = SUB6416(ZEXT464(0x3ea67f46),0);
    auVar53 = SUB6416(ZEXT464(0x3caa70de),0);
    fVar8 = 0.0;
    if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar23) & 0xfffffffffffffffcU)) {
      do {
        auVar28 = vfmadd231ss_fma(ZEXT416((uint)(auVar80._0_4_ * param_10)),
                                  ZEXT416((uint)(*(float *)*pauVar23 + 1e-25)),ZEXT416((uint)fVar7))
        ;
        uVar19 = auVar28._0_4_;
        fVar17 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar57._0_4_ = 11.581186 / (fVar21 * fVar21 * fVar21);
        auVar57._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar28 = vfmsub231ss_fma(auVar57,auVar57,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar28 = vfmadd231ss_fma(auVar28,ZEXT416((uint)((float)(uVar19 >> 0x17 & 0xff) - 127.0)),
                                  ZEXT416(0x4040a8c2));
        auVar27 = vmaxss_avx(ZEXT416((uint)(auVar28._0_4_ - param_6)),auVar78);
        auVar28 = vcmpss_avx(auVar78,ZEXT416((uint)(auVar79._0_4_ - auVar27._0_4_)),2);
        auVar28 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar28);
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar28);
        auVar28 = vfmadd231ss_fma(auVar27,auVar79._0_16_,auVar28);
        fVar21 = auVar28._0_4_ * param_7 * 0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar27 = vfmadd213ss_fma(auVar82,ZEXT416((uint)fVar21),auVar45);
          uVar20 = (uint)(longlong)auVar27._0_4_;
          uVar18 = (uVar20 & 0x7fffff) + 0x3f800000;
          auVar27 = vfmadd132ss_fma(auVar56,auVar53,ZEXT416(uVar18));
          auVar27 = vfmadd132ss_fma(auVar27,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar18));
          fVar17 = auVar27._0_4_ * (float)(uVar20 & 0xff800000);
        }
        auVar27 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 4) + 1e-25));
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar81);
        auVar43 = vfmadd231ss_fma(auVar27,auVar81,ZEXT416(uVar19));
        *(float *)*pauVar23 = fVar17;
        fVar17 = (float)((auVar43._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar27 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar27 = vfmsub231ss_fma(auVar27,auVar27,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar27 = vfmadd231ss_fma(auVar27,ZEXT416((uint)((float)(auVar43._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar26 = vmaxss_avx(ZEXT416((uint)(auVar27._0_4_ - param_6)),auVar78);
        auVar27 = vcmpss_avx(auVar78,ZEXT416((uint)(auVar28._0_4_ - auVar26._0_4_)),2);
        auVar27 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar27);
        auVar26 = vfnmadd231ss_fma(auVar26,auVar26,auVar27);
        auVar28 = vfmadd231ss_fma(auVar26,auVar28,auVar27);
        fVar21 = auVar28._0_4_ * param_7 * 0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar27 = vfmadd213ss_fma(auVar82,ZEXT416((uint)fVar21),auVar45);
          uVar19 = (uint)(longlong)auVar27._0_4_;
          auVar26 = ZEXT416((uVar19 & 0x7fffff) + 0x3f800000);
          auVar27 = vfmadd132ss_fma(auVar56,auVar53,auVar26);
          auVar27 = vfmadd213ss_fma(auVar27,auVar26,ZEXT416(0x3f272ddb));
          fVar17 = auVar27._0_4_ * (float)(uVar19 & 0xff800000);
        }
        auVar27 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 8) + 1e-25));
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar81);
        *(float *)((longlong)*pauVar23 + 4) = fVar17;
        auVar43 = vfmadd231ss_fma(auVar27,auVar81,auVar43);
        fVar17 = (float)((auVar43._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar27 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar27 = vfmsub231ss_fma(auVar27,auVar27,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar27 = vfmadd231ss_fma(auVar27,ZEXT416((uint)((float)(auVar43._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar26 = vmaxss_avx(ZEXT416((uint)(auVar27._0_4_ - param_6)),auVar78);
        auVar27 = vcmpss_avx(auVar78,ZEXT416((uint)(auVar28._0_4_ - auVar26._0_4_)),2);
        auVar27 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar27);
        auVar26 = vfnmadd231ss_fma(auVar26,auVar26,auVar27);
        auVar28 = vfmadd231ss_fma(auVar26,auVar28,auVar27);
        fVar21 = auVar28._0_4_ * param_7 * 0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar27 = vfmadd213ss_fma(auVar82,ZEXT416((uint)fVar21),auVar45);
          uVar19 = (uint)(longlong)auVar27._0_4_;
          uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
          auVar27 = vfmadd132ss_fma(auVar56,auVar53,ZEXT416(uVar20));
          auVar27 = vfmadd132ss_fma(auVar27,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
          fVar17 = auVar27._0_4_ * (float)(uVar19 & 0xff800000);
        }
        *(float *)((longlong)*pauVar23 + 8) = fVar17;
        auVar27 = ZEXT416((uint)(*(float *)((longlong)*pauVar23 + 0xc) + 1e-25));
        auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar81);
        auVar27 = vfmadd231ss_fma(auVar27,auVar81,auVar43);
        auVar80 = ZEXT1664(auVar27);
        fVar17 = (float)((auVar27._0_4_ & 0x7fffff) + 0x3f800000);
        fVar21 = fVar17 + 1.0;
        auVar26 = ZEXT416((uint)(11.581186 / (fVar21 * fVar21 * fVar21)));
        auVar26 = vfmsub231ss_fma(auVar26,auVar26,ZEXT416((uint)(fVar17 * fVar17 * fVar17)));
        auVar27 = vfmadd231ss_fma(auVar26,ZEXT416((uint)((float)(auVar27._0_4_ >> 0x17 & 0xff) -
                                                        127.0)),ZEXT416(0x4040a8c2));
        auVar26 = vmaxss_avx(ZEXT416((uint)(auVar27._0_4_ - param_6)),auVar78);
        auVar27 = vcmpss_avx(auVar78,ZEXT416((uint)(auVar28._0_4_ - auVar26._0_4_)),2);
        auVar27 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar27);
        auVar26 = vfnmadd231ss_fma(auVar26,auVar26,auVar27);
        auVar28 = vfmadd231ss_fma(auVar26,auVar28,auVar27);
        auVar79 = ZEXT1664(auVar28);
        fVar21 = auVar28._0_4_ * param_7 * 0.05;
        fVar17 = fVar8;
        if ((-37.0 <= fVar21) && (fVar21 <= 37.0)) {
          auVar28 = vfmadd213ss_fma(auVar82,ZEXT416((uint)fVar21),auVar45);
          uVar19 = (uint)(longlong)auVar28._0_4_;
          uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
          auVar28 = vfmadd132ss_fma(auVar56,auVar53,ZEXT416(uVar20));
          auVar28 = vfmadd132ss_fma(auVar28,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
          fVar17 = auVar28._0_4_ * (float)(uVar19 & 0xff800000);
        }
        *(float *)((longlong)*pauVar23 + 0xc) = fVar17;
        pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 0x10);
      } while (pauVar23 < (undefined1 (*) [32])((longlong)pauVar1[-1] + 0x14));
      if (pauVar1 <= pauVar23) goto LAB_1453bcd30;
    }
    do {
      auVar28 = ZEXT416((uint)(*(float *)*pauVar23 + 1e-25));
      auVar28 = vfnmadd231ss_fma(auVar28,auVar28,auVar81);
      auVar28 = vfmadd231ss_fma(auVar28,auVar81,auVar80._0_16_);
      auVar80 = ZEXT1664(auVar28);
      fVar21 = (float)((auVar28._0_4_ & 0x7fffff) + 0x3f800000);
      fVar7 = fVar21 + 1.0;
      auVar27 = ZEXT416((uint)(11.581186 / (fVar7 * fVar7 * fVar7)));
      auVar27 = vfmsub231ss_fma(auVar27,auVar27,ZEXT416((uint)(fVar21 * fVar21 * fVar21)));
      auVar28 = vfmadd231ss_fma(auVar27,ZEXT416((uint)((float)(auVar28._0_4_ >> 0x17 & 0xff) - 127.0
                                                      )),ZEXT416(0x4040a8c2));
      auVar27 = vmaxss_avx(ZEXT416((uint)(auVar28._0_4_ - param_6)),auVar78);
      auVar28 = vcmpss_avx(auVar78,ZEXT416((uint)(auVar79._0_4_ - auVar27._0_4_)),2);
      auVar28 = vblendvps_avx(ZEXT416(param_8),ZEXT416(param_9),auVar28);
      auVar27 = vfnmadd231ss_fma(auVar27,auVar27,auVar28);
      auVar28 = vfmadd231ss_fma(auVar27,auVar79._0_16_,auVar28);
      auVar79 = ZEXT1664(auVar28);
      fVar7 = auVar28._0_4_ * param_7 * 0.05;
      fVar21 = fVar8;
      if ((-37.0 <= fVar7) && (fVar7 <= 37.0)) {
        auVar28 = vfmadd213ss_fma(auVar82,ZEXT416((uint)fVar7),auVar45);
        uVar19 = (uint)(longlong)auVar28._0_4_;
        uVar20 = (uVar19 & 0x7fffff) + 0x3f800000;
        auVar28 = vfmadd132ss_fma(auVar56,auVar53,ZEXT416(uVar20));
        auVar28 = vfmadd132ss_fma(auVar28,SUB6416(ZEXT464(0x3f272ddb),0),ZEXT416(uVar20));
        fVar21 = auVar28._0_4_ * (float)(uVar19 & 0xff800000);
      }
      *(float *)*pauVar23 = fVar21;
      pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 4);
    } while (pauVar23 < pauVar1);
  }
LAB_1453bcd30:
  *param_5 = auVar79._0_4_;
  param_5[1] = auVar80._0_4_;
  if (param_3 != 0) {
    uVar14 = (ulonglong)param_3;
    uVar25 = (ulonglong)((longlong)pauVar1 + (3 - (longlong)param_2)) >> 2;
    if (pauVar1 < param_2) {
      uVar25 = 0;
    }
    do {
      pfVar22 = (float *)*param_1;
      pauVar23 = param_2;
      if (((uVar25 != 0) && (0x1f < uVar25)) &&
         (((float *)((longlong)param_2[-1] + (uVar25 + 7) * 4) < pfVar22 ||
          ((undefined1 (*) [32])(pfVar22 + (uVar25 - 1)) < param_2)))) {
        uVar24 = 0;
        do {
          fVar7 = *(float *)((longlong)*pauVar23 + 4);
          fVar8 = *(float *)((longlong)*pauVar23 + 8);
          fVar21 = *(float *)((longlong)*pauVar23 + 0xc);
          fVar17 = *(float *)((longlong)*pauVar23 + 0x10);
          fVar2 = *(float *)((longlong)*pauVar23 + 0x14);
          fVar3 = *(float *)((longlong)*pauVar23 + 0x18);
          fVar4 = *(float *)((longlong)*pauVar23 + 0x1c);
          *pfVar22 = *(float *)*pauVar23 * *pfVar22;
          pfVar22[1] = fVar7 * pfVar22[1];
          pfVar22[2] = fVar8 * pfVar22[2];
          pfVar22[3] = fVar21 * pfVar22[3];
          pfVar22[4] = fVar17 * pfVar22[4];
          pfVar22[5] = fVar2 * pfVar22[5];
          pfVar22[6] = fVar3 * pfVar22[6];
          pfVar22[7] = fVar4 * pfVar22[7];
          fVar7 = *(float *)((longlong)pauVar23[1] + 4);
          fVar8 = *(float *)((longlong)pauVar23[1] + 8);
          fVar21 = *(float *)((longlong)pauVar23[1] + 0xc);
          fVar17 = *(float *)((longlong)pauVar23[1] + 0x10);
          fVar2 = *(float *)((longlong)pauVar23[1] + 0x14);
          fVar3 = *(float *)((longlong)pauVar23[1] + 0x18);
          fVar4 = *(float *)((longlong)pauVar23[1] + 0x1c);
          pfVar22[8] = *(float *)pauVar23[1] * pfVar22[8];
          pfVar22[9] = fVar7 * pfVar22[9];
          pfVar22[10] = fVar8 * pfVar22[10];
          pfVar22[0xb] = fVar21 * pfVar22[0xb];
          pfVar22[0xc] = fVar17 * pfVar22[0xc];
          pfVar22[0xd] = fVar2 * pfVar22[0xd];
          pfVar22[0xe] = fVar3 * pfVar22[0xe];
          pfVar22[0xf] = fVar4 * pfVar22[0xf];
          fVar7 = *(float *)((longlong)pauVar23[2] + 4);
          fVar8 = *(float *)((longlong)pauVar23[2] + 8);
          fVar21 = *(float *)((longlong)pauVar23[2] + 0xc);
          fVar17 = *(float *)((longlong)pauVar23[2] + 0x10);
          fVar2 = *(float *)((longlong)pauVar23[2] + 0x14);
          fVar3 = *(float *)((longlong)pauVar23[2] + 0x18);
          fVar4 = *(float *)((longlong)pauVar23[2] + 0x1c);
          pfVar22[0x10] = *(float *)pauVar23[2] * pfVar22[0x10];
          pfVar22[0x11] = fVar7 * pfVar22[0x11];
          pfVar22[0x12] = fVar8 * pfVar22[0x12];
          pfVar22[0x13] = fVar21 * pfVar22[0x13];
          pfVar22[0x14] = fVar17 * pfVar22[0x14];
          pfVar22[0x15] = fVar2 * pfVar22[0x15];
          pfVar22[0x16] = fVar3 * pfVar22[0x16];
          pfVar22[0x17] = fVar4 * pfVar22[0x17];
          auVar42._0_4_ = *(float *)pauVar23[3] * pfVar22[0x18];
          auVar42._4_4_ = *(float *)((longlong)pauVar23[3] + 4) * pfVar22[0x19];
          auVar42._8_4_ = *(float *)((longlong)pauVar23[3] + 8) * pfVar22[0x1a];
          auVar42._12_4_ = *(float *)((longlong)pauVar23[3] + 0xc) * pfVar22[0x1b];
          auVar42._16_4_ = *(float *)((longlong)pauVar23[3] + 0x10) * pfVar22[0x1c];
          auVar42._20_4_ = *(float *)((longlong)pauVar23[3] + 0x14) * pfVar22[0x1d];
          auVar42._24_4_ = *(float *)((longlong)pauVar23[3] + 0x18) * pfVar22[0x1e];
          auVar42._28_4_ = *(float *)((longlong)pauVar23[3] + 0x1c) * pfVar22[0x1f];
          *(undefined1 (*) [32])(pfVar22 + 0x18) = auVar42;
          pfVar22 = pfVar22 + 0x20;
          pauVar23 = pauVar23 + 4;
          uVar24 = uVar24 + 0x20;
        } while (uVar24 < (uVar25 & 0xffffffffffffffe0));
      }
      if (pauVar23 < pauVar1) {
        if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar23) & 0xfffffffffffffffcU)) {
          do {
            *pfVar22 = *(float *)*pauVar23 * *pfVar22;
            pfVar22[1] = *(float *)((longlong)*pauVar23 + 4) * pfVar22[1];
            pfVar22[2] = *(float *)((longlong)*pauVar23 + 8) * pfVar22[2];
            pfVar22[3] = *(float *)((longlong)*pauVar23 + 0xc) * pfVar22[3];
            pfVar22 = pfVar22 + 4;
            pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 0x10);
          } while (pauVar23 < (undefined1 (*) [32])((longlong)pauVar1[-1] + 0x14));
          if (pauVar1 <= pauVar23) goto LAB_1453bced9;
        }
        do {
          pfVar11 = (float *)*pauVar23;
          pauVar23 = (undefined1 (*) [32])((longlong)*pauVar23 + 4);
          *pfVar22 = *pfVar11 * *pfVar22;
          pfVar22 = pfVar22 + 1;
        } while (pauVar23 < pauVar1);
      }
LAB_1453bced9:
      param_1 = param_1 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 1453bcf10 FUN_1453bcf10 body=27 status=ok
// SIG undefined FUN_1453bcf10(void)

undefined8 * FUN_1453bcf10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1453bcf30 FUN_1453bcf30 body=3 status=ok
// SIG undefined FUN_1453bcf30(void)

void FUN_1453bcf30(void)

{
  return;
}



// FUNCTION 1453bcf40 FUN_1453bcf40 body=197 status=ok
// SIG undefined FUN_1453bcf40(void)

undefined4
FUN_1453bcf40(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  uVar1 = FUN_14556e040(1);
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,uVar1,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoder.cpp"
                     ,0x31);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    FUN_14556e100(lVar2,1,*(undefined4 *)(param_1 + 0x28),param_6);
    lVar2 = *param_2;
    uVar1 = FUN_14556e0f0(*(undefined8 *)(param_1 + 0x10));
    lVar2 = (**(code **)(lVar2 + 8))
                      (param_2,uVar1,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoder.cpp"
                       ,0x36);
    *(longlong *)(param_1 + 0x18) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
      uVar1 = 0x34;
    }
    return uVar1;
  }
  return 0x34;
}



// FUNCTION 1453bd010 FUN_1453bd010 body=89 status=ok
// SIG undefined FUN_1453bd010(void)

void FUN_1453bd010(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_14556ff30(param_1,param_2);
  return;
}



// FUNCTION 1453bd070 FUN_1453bd070 body=18 status=ok
// SIG undefined FUN_1453bd070(void)

void FUN_1453bd070(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}



// FUNCTION 1453bd090 FUN_1453bd090 body=120 status=ok
// SIG undefined FUN_1453bd090(void)

undefined8 FUN_1453bd090(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)((param_3 >> 1) + 1) << 2,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoder.cpp"
                     ,0x56);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  uVar2 = FUN_14556f6e0(param_1,param_2,param_3,param_3);
  return uVar2;
}



// FUNCTION 1453bd110 FUN_1453bd110 body=50 status=ok
// SIG undefined FUN_1453bd110(void)

void FUN_1453bd110(longlong param_1,longlong *param_2)

{
  FUN_14556f560();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}



// FUNCTION 1453bd150 FUN_1453bd150 body=82 status=ok
// SIG undefined FUN_1453bd150(void)

void FUN_1453bd150(longlong param_1,ulonglong param_2,undefined1 param_3)

{
  FUN_14556f5a0();
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x20),0,(ulonglong)((int)(param_2 >> 1) * 4 + 4));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2d) = param_3;
  return;
}



// FUNCTION 1453bd1b0 FUN_1453bd1b0 body=406 status=ok
// SIG undefined FUN_1453bd1b0(void)

ulonglong FUN_1453bd1b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint in_stack_00000030;
  
  uVar3 = FUN_145571830();
  if ((int)uVar3 == 1) {
    uVar2 = FUN_14556fb10(param_1,param_2,*(undefined4 *)(param_1 + 0x28),2,(char)uVar3,
                          in_stack_00000030 & 0xffffff00);
    uVar8 = (ulonglong)uVar2;
    uVar3 = uVar8;
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar4 = (**(code **)(*param_2 + 8))
                        (param_2,(ulonglong)*(uint *)(param_1 + 0x20) * 0x60,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoderClassic.cpp"
                         ,0x29);
      *(longlong *)(param_1 + 0x40) = lVar4;
      if (lVar4 == 0) {
        uVar3 = 0x34;
      }
      else {
        uVar7 = 0;
        uVar6 = uVar7;
        if (*(int *)(param_1 + 0x20) != 0) {
          do {
            puVar5 = (undefined8 *)(uVar6 * 0x60 + lVar4);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
              puVar5[3] = 0;
              puVar5[4] = 0;
              puVar5[5] = 0;
              puVar5[6] = 0;
              puVar5[7] = 0;
              puVar5[8] = 0;
              puVar5[9] = 0;
              puVar5[10] = 0;
              puVar5[0xb] = 0;
              *(undefined4 *)(puVar5 + 7) = 0;
              *(undefined2 *)((longlong)puVar5 + 0x3c) = 0;
              puVar5[8] = 0;
              *(undefined4 *)(puVar5 + 9) = 0;
              *(undefined2 *)((longlong)puVar5 + 0x4c) = 0;
              puVar5[10] = 0;
              *(undefined4 *)(puVar5 + 0xb) = 0;
              *(undefined2 *)((longlong)puVar5 + 0x5c) = 0;
              lVar4 = *(longlong *)(param_1 + 0x40);
            }
            uVar2 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_1 + 0x20));
          if (*(uint *)(param_1 + 0x20) != 0) {
            while( true ) {
              uVar1 = *(undefined4 *)(param_1 + 0x28);
              lVar4 = uVar7 * 0x60 + *(longlong *)(param_1 + 0x40);
              uVar3 = FUN_1453bd090(lVar4,param_2,uVar1);
              if ((((int)uVar3 != 1) ||
                  (uVar3 = FUN_145570650(lVar4 + 0x30,param_2,uVar1), (int)uVar3 != 1)) ||
                 (uVar3 = FUN_145570650(lVar4 + 0x40,param_2,uVar1), (int)uVar3 != 1)) break;
              uVar3 = FUN_145570650(lVar4 + 0x50,param_2,uVar1);
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              uVar2 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar2;
              if (*(uint *)(param_1 + 0x20) <= uVar2) {
                return uVar8;
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 1453bd350 FUN_1453bd350 body=163 status=ok
// SIG undefined FUN_1453bd350(void)

void FUN_1453bd350(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_145571930();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        lVar3 = uVar2 * 0x60 + *(longlong *)(param_1 + 0x40);
        FUN_1453bd110(lVar3,param_2);
        FUN_1455706a0(lVar3 + 0x30,param_2);
        FUN_1455706a0(lVar3 + 0x40,param_2);
        FUN_1455706a0(lVar3 + 0x50,param_2);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1453bd400 FUN_1453bd400 body=192 status=ok
// SIG undefined FUN_1453bd400(void)

void FUN_1453bd400(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  if (param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x28);
    if (param_3 == '\0') {
      uVar2 = uVar2 >> 2;
    }
  }
  else {
    uVar2 = **(uint **)(param_1 + 0x38);
  }
  FUN_1455719a0(param_1,uVar2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    do {
      lVar1 = uVar3 * 0x60 + *(longlong *)(param_1 + 0x40);
      FUN_1453bd150(lVar1,*(uint *)(param_1 + 0x28),param_3);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined1 *)(lVar1 + 0x3c) = 0;
      *(undefined1 *)(lVar1 + 0x4c) = 0;
      *(undefined1 *)(lVar1 + 0x5c) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1453bd4c0 FUN_1453bd4c0 body=1426 status=ok
// SIG undefined FUN_1453bd4c0(void)

undefined4
FUN_1453bd4c0(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
             longlong param_6,float param_7,undefined8 param_8)

{
  float fVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  uint local_res8;
  
  fVar1 = *(float *)(param_1 + 0xc);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar19 = *(uint *)(param_1 + 0x2c);
  uVar16 = 0x2d;
  fVar23 = *(float *)(param_1 + 0x48);
  uVar15 = (ulonglong)param_5;
  iVar18 = 0;
  uVar4 = *(uint *)(param_1 + 0x28);
  piVar12 = (int *)(uVar15 * 0x60 + *(longlong *)(param_1 + 0x40));
  uVar5 = uVar4 >> 2;
  uVar9 = 0;
  local_res8 = 0;
  uVar17 = param_4;
  uVar14 = param_3;
  do {
    if (((uVar14 == 0) && (param_3 <= local_res8)) || (99 < uVar9)) {
      if (param_5 == *(int *)(param_1 + 0x20) - 1U) {
        *(undefined1 *)(param_1 + 0x30) = uVar2;
        *(float *)(param_1 + 0x48) = fVar23;
        *(uint *)(param_1 + 0x2c) = uVar19;
      }
      return uVar16;
    }
    uVar9 = uVar9 + 1;
    uVar8 = uVar19;
    if (uVar14 < uVar19) {
      uVar8 = uVar14;
    }
    uVar10 = 0;
    uVar19 = uVar19 - uVar8;
    iVar13 = uVar14 - uVar8;
    if ((param_2 != 0) && (iVar13 != 0)) {
      uVar10 = FUN_1455716d0(uVar15 * 0x20 + *(longlong *)(param_1 + 0x38),
                             param_2 + (ulonglong)(iVar18 + uVar8) * 4,iVar13,param_7);
      uVar17 = param_4 & 0xff;
    }
    iVar18 = iVar18 + uVar8 + uVar10;
    uVar14 = iVar13 - (uVar10 & 0xffff);
    if ((char)piVar12[(ulonglong)(*(byte *)(piVar12 + 0xb) & 1) * 4 + 0xf] == '\0') {
      cVar6 = FUN_14556f600(*(longlong *)(param_1 + 0x38) + uVar15 * 0x20,param_8,uVar4,uVar17);
      if (cVar6 != '\0') {
        FUN_14556f5d0(*(longlong *)(param_1 + 0x38) + uVar15 * 0x20,uVar5);
        FUN_14556ff60(param_1,param_8,uVar4,0x3f800000);
        FUN_1455706e0(piVar12 + ((ulonglong)(*(byte *)(piVar12 + 0xb) & 1) + 3) * 4,param_8,uVar4,
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
        FUN_145570760(piVar12 + ((ulonglong)(*(byte *)(piVar12 + 0xb) & 1) + 3) * 4);
      }
    }
    if ((char)piVar12[(ulonglong)(*(byte *)(piVar12 + 0xb) - 1 & 1) * 4 + 0xf] == '\0') {
      cVar6 = FUN_14556f600(*(longlong *)(param_1 + 0x38) + uVar15 * 0x20,param_8,uVar4,
                            (char)param_4);
      if (cVar6 != '\0') {
        FUN_14556f5d0(*(longlong *)(param_1 + 0x38) + uVar15 * 0x20,uVar5);
        FUN_14556ff60(param_1,param_8,uVar4,0x3f800000);
        FUN_1455706e0(piVar12 + ((ulonglong)(*(byte *)(piVar12 + 0xb) - 1 & 1) + 3) * 4,param_8,
                      uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
        FUN_145570760(piVar12 + ((ulonglong)(*(byte *)(piVar12 + 0xb) - 1 & 1) + 3) * 4);
      }
    }
    uVar17 = (ulonglong)(*(byte *)(piVar12 + 0xb) - 1 & 1);
    if (((char)piVar12[uVar17 * 4 + 0xf] == '\0') ||
       (uVar11 = (ulonglong)(*(byte *)(piVar12 + 0xb) & 1), (char)piVar12[uVar11 * 4 + 0xf] == '\0')
       ) {
LAB_1453bd7ed:
      if ((char)piVar12[0x17] != '\0') goto LAB_1453bd7f7;
    }
    else {
      if ((char)piVar12[0x17] == '\0') {
        FUN_145570770(piVar12 + 0x14,*(undefined8 *)(piVar12 + (uVar11 + 3) * 4),
                      *(undefined8 *)(piVar12 + (uVar17 + 3) * 4),*(undefined8 *)(piVar12 + 8),uVar5
                      ,fVar23,uVar2);
        uVar2 = 0;
        goto LAB_1453bd7ed;
      }
LAB_1453bd7f7:
      if (uVar4 <= (uint)(*piVar12 - piVar12[3])) {
        FUN_145570710(piVar12 + 0x14,param_8,uVar4,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18));
        FUN_14556ff60(param_1,param_8,uVar4,1.0 / ((fVar1 * 4.0) / (float)uVar4));
        FUN_14556f6f0(piVar12,param_8,uVar5);
        fVar23 = fVar23 + 1.0 / param_7;
        *(undefined1 *)(piVar12 + 0x17) = 0;
        if (1.0 <= fVar23) {
          bVar3 = *(byte *)(piVar12 + 0xb);
          iVar13 = (int)fVar23;
          *(undefined1 *)(piVar12 + (ulonglong)(bVar3 & 1) * 4 + 0xf) = 0;
          fVar21 = fVar23;
          if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar23)) {
            auVar22._4_4_ = fVar23;
            auVar22._0_4_ = fVar23;
            auVar22._8_8_ = 0;
            uVar8 = movmskps((bVar3 & 1) * 2,auVar22);
            fVar21 = (float)(int)(iVar13 - (uVar8 & 1));
          }
          if ((uint)(longlong)fVar21 < 2) {
            fVar23 = fVar23 - fVar21;
            *(byte *)(piVar12 + 0xb) = *(byte *)(piVar12 + 0xb) + 1;
          }
          else {
            iVar20 = ((uint)(longlong)fVar21 - 2) * uVar5;
            *(undefined1 *)(piVar12 + (ulonglong)(*(byte *)(piVar12 + 0xb) - 1 & 1) * 4 + 0xf) = 0;
            iVar13 = FUN_14556f5d0(uVar15 * 0x20 + *(longlong *)(param_1 + 0x38),iVar20);
            uVar19 = iVar20 - iVar13;
            fVar23 = fVar23 - fVar21;
          }
        }
      }
    }
    if (((((char)param_4 == '\0') ||
         (*(int *)(uVar15 * 0x20 + 0xc + *(longlong *)(param_1 + 0x38)) != 0)) ||
        ((char)piVar12[0x17] != '\0')) || (piVar12[3] != 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    uVar7 = FUN_14556f9b0(piVar12,param_6 + (ulonglong)local_res8 * 4,uVar5,param_3 - local_res8,
                          cVar6);
    local_res8 = local_res8 + uVar7;
    uVar17 = param_4 & 0xff;
    if ((cVar6 != '\0') && (piVar12[3] == 0)) {
      iVar13 = FUN_14556fae0(piVar12,uVar5);
      uVar17 = param_4 & 0xff;
      if (iVar13 == 0) {
        uVar16 = 0x11;
      }
    }
  } while( true );
}



// FUNCTION 1453bda60 FUN_1453bda60 body=1977 status=ok
// SIG undefined FUN_1453bda60(void)

void FUN_1453bda60(longlong param_1,longlong *param_2,int param_3,longlong *param_4,float param_5,
                  float param_6,char param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  char cVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  char cVar25;
  int *piVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  int local_res8;
  uint local_c8;
  uint local_c4;
  
  fVar12 = param_6;
  pcVar1 = (char *)(param_1 + 0x30);
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar11 = uVar6 >> 2;
  uVar10 = (ulonglong)uVar11;
  param_5 = param_5 / param_6;
  if (param_7 != '\0') {
    *pcVar1 = '\x01';
  }
  if (param_5 == 1.0) {
    if (*pcVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  uVar17 = 0;
  local_c4 = 0;
  fVar30 = 1.0 / ((*(float *)(param_1 + 0xc) * 4.0) / (float)uVar6);
  do {
    uVar4 = *(ushort *)(param_2 + 2);
    cVar2 = *pcVar1;
    uVar24 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    fVar29 = *(float *)(param_1 + 0x48);
    param_6 = *(float *)(param_1 + 0x2c);
    param_7 = *(char *)(param_1 + 0x31);
    lVar8 = *param_2;
    piVar26 = (int *)(uVar17 * 0x60 + *(longlong *)(param_1 + 0x40));
    local_c8 = (uint)*(ushort *)((longlong)param_4 + 0x12);
    uVar5 = *(ushort *)(param_4 + 2);
    lVar9 = *param_4;
    local_res8 = param_3;
    do {
      uVar16 = (uint)param_6;
      if (uVar24 < (uint)param_6) {
        uVar16 = uVar24;
      }
      param_6 = (float)((int)param_6 - uVar16);
      iVar23 = uVar24 - uVar16;
      if (((param_7 != '\0') && (iVar23 == 0)) &&
         (uVar24 = 0, *(int *)((longlong)param_2 + 0xc) != 0x11)) break;
      lVar22 = uVar17 * 0x20;
      uVar15 = FUN_1455716d0(*(longlong *)(param_1 + 0x38) + lVar22,
                             lVar8 + uVar4 * uVar17 * 4 + (ulonglong)(local_res8 + uVar16) * 4,
                             iVar23,fVar12);
      lVar18 = *(longlong *)(param_1 + 0x38);
      uVar7 = *(uint *)(lVar18 + 0xc + lVar22);
      if (*(uint *)(lVar18 + lVar22) == uVar7) {
        uVar24 = iVar23 - (uVar15 & 0xffff);
        param_7 = '\0';
      }
      else {
        uVar24 = iVar23 - (uVar15 & 0xffff);
        if (((param_7 != '\0') && (uVar24 == 0)) && (*(int *)((longlong)param_2 + 0xc) != 0x11)) {
          *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
          goto LAB_1453be171;
        }
      }
      local_res8 = local_res8 + uVar16 + uVar15;
      if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (uVar24 == 0)) {
        cVar25 = '\x01';
      }
      else {
        cVar25 = '\0';
      }
      if (uVar6 <= (uint)(*piVar26 - piVar26[3])) {
        if (*(char *)(param_1 + 0x32) == '\0') {
          if (((char)piVar26[(ulonglong)(*(byte *)(piVar26 + 0xb) & 1) * 4 + 0xf] == '\0') &&
             ((uVar6 + uVar11 <= *(uint *)(uVar17 * 0x20 + 0xc + lVar18) || (cVar25 != '\0')))) {
            FUN_14556f5d0(uVar17 * 0x20 + lVar18,uVar10);
            cVar13 = FUN_14556f600(uVar17 * 0x20 + *(longlong *)(param_1 + 0x38),param_8,uVar6,
                                   cVar25);
            if (cVar13 != '\0') {
              FUN_14556ff60(param_1,param_8,uVar6,0x3f800000);
              FUN_1455706e0(piVar26 + ((ulonglong)(*(byte *)(piVar26 + 0xb) & 1) + 3) * 4,param_8,
                            uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
              FUN_145570760(piVar26 + ((ulonglong)(*(byte *)(piVar26 + 0xb) & 1) + 3) * 4);
            }
          }
          if (((char)piVar26[(ulonglong)(*(byte *)(piVar26 + 0xb) - 1 & 1) * 4 + 0xf] == '\0') &&
             ((lVar18 = uVar17 * 0x20 + *(longlong *)(param_1 + 0x38),
              uVar6 + uVar11 <= *(uint *)(lVar18 + 0xc) || (cVar25 != '\0')))) {
            FUN_14556f5d0(lVar18,uVar10);
            cVar13 = FUN_14556f600(uVar17 * 0x20 + *(longlong *)(param_1 + 0x38),param_8,uVar6,
                                   cVar25);
            if (cVar13 != '\0') {
              FUN_14556ff60(param_1,param_8,uVar6,0x3f800000);
              FUN_1455706e0(piVar26 + ((ulonglong)(*(byte *)(piVar26 + 0xb) - 1 & 1) + 3) * 4,
                            param_8,uVar6,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(param_1 + 0x18));
              FUN_145570760(piVar26 + ((ulonglong)(*(byte *)(piVar26 + 0xb) - 1 & 1) + 3) * 4);
            }
          }
          uVar19 = (ulonglong)(*(byte *)(piVar26 + 0xb) - 1 & 1);
          if (((char)piVar26[uVar19 * 4 + 0xf] != '\0') &&
             (uVar20 = (ulonglong)(*(byte *)(piVar26 + 0xb) & 1),
             (char)piVar26[uVar20 * 4 + 0xf] != '\0')) {
            FUN_145570770(piVar26 + 0x14,*(undefined8 *)(piVar26 + (uVar20 + 3) * 4),
                          *(undefined8 *)(piVar26 + (uVar19 + 3) * 4),*(undefined8 *)(piVar26 + 8),
                          uVar11,fVar29,cVar2);
            cVar2 = '\0';
            FUN_145570710(piVar26 + 0x14,param_8,uVar6,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
            FUN_14556ff60(param_1,param_8,uVar6,fVar30);
            FUN_14556f6f0(piVar26,param_8,uVar10);
            fVar29 = fVar29 + param_5;
            *(undefined1 *)(piVar26 + 0x17) = 0;
            if (1.0 <= fVar29) {
              bVar3 = *(byte *)(piVar26 + 0xb);
              iVar23 = (int)fVar29;
              *(undefined1 *)(piVar26 + (ulonglong)(bVar3 & 1) * 4 + 0xf) = 0;
              fVar27 = fVar29;
              if ((iVar23 != -0x80000000) && ((float)iVar23 != fVar29)) {
                auVar28._4_4_ = fVar29;
                auVar28._0_4_ = fVar29;
                auVar28._8_8_ = 0;
                uVar16 = movmskps((bVar3 & 1) * 2,auVar28);
                fVar27 = (float)(int)(iVar23 - (uVar16 & 1));
              }
              if ((uint)(longlong)fVar27 < 2) {
                *(byte *)(piVar26 + 0xb) = *(byte *)(piVar26 + 0xb) + 1;
              }
              else {
                iVar21 = ((uint)(longlong)fVar27 - 2) * uVar11;
                *(undefined1 *)(piVar26 + (ulonglong)(*(byte *)(piVar26 + 0xb) - 1 & 1) * 4 + 0xf) =
                     0;
                iVar23 = FUN_14556f5d0(uVar17 * 0x20 + *(longlong *)(param_1 + 0x38),iVar21);
                param_6 = (float)(iVar21 - iVar23);
              }
              fVar29 = fVar29 - fVar27;
            }
          }
        }
        else if ((uVar6 + uVar11 <= uVar7) || (cVar25 != '\0')) {
          fVar27 = (float)uVar10 * fVar29;
          uVar19 = uVar10;
          if ((int)(longlong)fVar27 != 0) {
            fVar29 = 0.0;
            uVar19 = (longlong)fVar27;
          }
          FUN_14556f5d0(uVar17 * 0x20 + lVar18,uVar19);
          *(undefined1 *)(piVar26 + (ulonglong)(*(byte *)(piVar26 + 0xb) & 1) * 4 + 0xf) = 0;
          cVar13 = FUN_14556f600(uVar17 * 0x20 + *(longlong *)(param_1 + 0x38),param_8,uVar6,cVar25)
          ;
          if (cVar13 != '\0') {
            FUN_14556ff60(param_1,param_8,uVar6,0x3f800000);
            FUN_14556ff60(param_1,param_8,uVar6,fVar30);
            FUN_14556f6f0(piVar26,param_8,uVar10);
          }
        }
        if (*(char *)((longlong)piVar26 + 0x2d) != '\0') {
          iVar23 = FUN_14556f5d0(piVar26,uVar6 >> 1);
          piVar26[10] = piVar26[10] + iVar23;
          if (uVar6 >> 1 < (uint)piVar26[10]) {
            *(undefined1 *)((longlong)piVar26 + 0x2d) = 0;
          }
        }
      }
      if ((cVar25 == '\0') || (*(int *)(uVar17 * 0x20 + 0xc + *(longlong *)(param_1 + 0x38)) != 0))
      {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
      uVar14 = FUN_14556f9b0(piVar26,lVar9 + uVar5 * uVar17 * 4 + (ulonglong)local_c8 * 4,uVar10,
                             *(ushort *)(param_4 + 2) - local_c8,cVar13);
      local_c8 = local_c8 + uVar14;
      if (((cVar13 != '\0') && (piVar26[3] == 0)) &&
         (iVar23 = FUN_14556fae0(piVar26,uVar10), iVar23 == 0)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
        goto LAB_1453be171;
      }
      if (local_c8 == *(ushort *)(param_4 + 2)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x2d;
        goto LAB_1453be171;
      }
    } while ((cVar25 != '\0') || (uVar24 != 0));
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
LAB_1453be171:
    local_c4 = local_c4 + 1;
    uVar17 = (ulonglong)local_c4;
    if (*(uint *)(param_1 + 0x20) <= local_c4) {
      *(short *)((longlong)param_2 + 0x12) = (short)uVar24;
      *(short *)((longlong)param_4 + 0x12) = (short)local_c8;
      *(float *)(param_1 + 0x48) = fVar29;
      *(float *)(param_1 + 0x2c) = param_6;
      *(char *)(param_1 + 0x30) = cVar2;
      *(char *)(param_1 + 0x31) = param_7;
      return;
    }
  } while( true );
}



// FUNCTION 1453be220 FUN_1453be220 body=88 status=ok
// SIG undefined FUN_1453be220(void)

undefined8 FUN_1453be220(uint *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  
  param_3 = param_3 & 0xfffffffc;
  *param_1 = param_3;
  if (param_3 != 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,(ulonglong)param_3 << 2,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\DelayLineLight.cpp"
                       ,0x1b);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 0x34;
    }
  }
  param_1[4] = 0;
  return 1;
}



// FUNCTION 1453be280 FUN_1453be280 body=54 status=ok
// SIG undefined FUN_1453be280(void)

void FUN_1453be280(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1453be2c0 FUN_1453be2c0 body=45 status=ok
// SIG undefined FUN_1453be2c0(void)

void FUN_1453be2c0(int *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    memset(*(void **)(param_1 + 2),0,(ulonglong)(uint)(*param_1 << 2));
  }
  param_1[4] = 0;
  return;
}



// FUNCTION 1453be2f0 FUN_1453be2f0 body=240 status=ok
// SIG undefined FUN_1453be2f0(void)

void FUN_1453be2f0(int *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(longlong *)(param_1 + 2) != 0) {
    uVar8 = *param_1 - param_1[4];
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
    uVar9 = param_3 >> 2;
    uVar6 = (ulonglong)uVar9;
    if (param_3 < uVar8) {
      if (uVar9 != 0) {
        do {
          uVar1 = puVar4[1];
          uVar2 = *param_2;
          uVar3 = param_2[1];
          *param_2 = *puVar4;
          param_2[1] = uVar1;
          param_2 = param_2 + 2;
          *puVar4 = uVar2;
          puVar4[1] = uVar3;
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar6 != 0);
      }
      param_1[4] = param_1[4] + param_3;
      return;
    }
    while (uVar9 != 0) {
      uVar7 = (ulonglong)(uVar8 >> 2);
      if ((uint)uVar6 < uVar8 >> 2) {
        uVar7 = uVar6;
      }
      uVar9 = (uint)uVar7;
      uVar8 = uVar9;
      while (uVar8 != 0) {
        uVar1 = puVar4[1];
        uVar2 = *param_2;
        uVar3 = param_2[1];
        *param_2 = *puVar4;
        param_2[1] = uVar1;
        param_2 = param_2 + 2;
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
        puVar4 = puVar4 + 2;
        uVar8 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar8;
      }
      param_1[4] = param_1[4] + uVar9 * 4;
      iVar5 = param_1[4];
      if (iVar5 == *param_1) {
        puVar4 = *(undefined8 **)(param_1 + 2);
        iVar5 = 0;
        param_1[4] = 0;
      }
      uVar8 = *param_1 - iVar5;
      uVar9 = (uint)uVar6 - uVar9;
      uVar6 = (ulonglong)uVar9;
    }
  }
  return;
}



// FUNCTION 1453be3e0 FUN_1453be3e0 body=276 status=ok
// SIG undefined FUN_1453be3e0(void)

void FUN_1453be3e0(undefined8 param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  param_4 = param_4 & 0xffffffff;
  lVar2 = param_4 * 0x1c;
  if (*(char *)(lVar2 + 0x100 + param_2) != '\0') {
    uVar3 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20),param_3);
    uVar5 = param_5;
    FUN_1453bd4c0(param_4 * 0x50 + param_2,param_1,param_7,param_8,uVar3,param_5,param_9,param_10);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (*(int *)(lVar2 + 0xe8 + param_2) != 0) {
      local_res10 = param_5;
      lVar1 = (param_4 + 5) * 0x20 + param_2;
      FUN_1453bec40(&local_res10,param_7,param_3,lVar1 + 0x10,lVar1);
      uVar4 = (undefined4)((ulonglong)lVar1 >> 0x20);
    }
    FUN_1453baf30(param_6,param_5,0x3f800000,0x3f800000,
                  CONCAT44(uVar4,*(undefined4 *)(lVar2 + 0x148 + param_2)),
                  CONCAT44(uVar6,*(undefined4 *)((param_4 + 9) * 0x1c + param_2)),param_7);
  }
  return;
}



// FUNCTION 1453be500 FUN_1453be500 body=1523 status=ok
// SIG undefined FUN_1453be500(void)

void FUN_1453be500(longlong *param_1,longlong param_2,longlong param_3)

{
  void *_Dst;
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res10;
  uint local_res20;
  uint local_98;
  
  uVar7 = *(int *)(param_2 + 300) * 0xc;
  if (*(int *)((longlong)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x180) = 0xffffffff;
    goto LAB_1453be64f;
  }
  uVar15 = *(uint *)(param_2 + 0x180);
  if (uVar15 == 0) {
    if (*(short *)((longlong)param_1 + 0x12) == 0) goto LAB_1453be64f;
LAB_1453be551:
    *(uint *)(param_2 + 0x180) = uVar7;
    uVar15 = uVar7;
LAB_1453be55d:
    *(uint *)(param_2 + 0x184) = uVar7;
  }
  else {
    if ((uVar15 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) goto LAB_1453be551;
    if (*(uint *)(param_2 + 0x184) < uVar7) {
      uVar15 = (uVar15 - *(uint *)(param_2 + 0x184)) + uVar7;
      *(uint *)(param_2 + 0x180) = uVar15;
      goto LAB_1453be55d;
    }
  }
  uVar8 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar7 = uVar15;
  if (uVar8 <= uVar15) {
    uVar7 = uVar8;
  }
  *(uint *)(param_2 + 0x180) = uVar15 - uVar7;
  uVar3 = *(ushort *)(param_1 + 2);
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar14 = (ulonglong)*(byte *)(param_1 + 1);
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  iVar9 = (uint)uVar3 - (uint)uVar6;
  if (iVar9 != 0) {
    if (*(byte *)(param_1 + 1) != 0) {
      lVar12 = 0;
      do {
        memset((void *)(*param_1 +
                       ((ulonglong)*(ushort *)(param_1 + 2) * lVar12 + (ulonglong)(uint)uVar6) * 4),
               0,(ulonglong)(uint)(iVar9 * 4));
        lVar12 = lVar12 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    *(short *)((longlong)param_1 + 0x12) = (short)param_1[2];
  }
  if (*(int *)(param_2 + 0x180) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
  }
LAB_1453be64f:
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar7 = (uint)uVar3;
  if (0x1f < uVar7) {
    uVar15 = *(uint *)(param_1 + 1);
    _Dst = (void *)(param_3 + (ulonglong)uVar3 * 4);
    uVar8 = *(uint *)(param_2 + 0x188);
    lVar12 = param_3 + (ulonglong)((uint)uVar3 * 2) * 4;
    if ((((char)uVar8 == (char)uVar15) && (((uVar8 ^ uVar15) & 0xf00) == 0)) &&
       (((uVar8 ^ uVar15) & 0xfffff000) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    uVar8 = 0;
    uVar14 = 0;
    local_98 = 0;
    local_res20 = 0;
    uVar16 = 0;
    local_res10 = 0;
    if ((char)uVar15 != '\0') {
      uVar17 = 1;
      uVar10 = uVar15;
      do {
        if (((uVar15 >> 0xc & uVar17) != 0) || (uVar15 >> 0xc == 0)) {
          if (((uVar17 & 8) == 0) || (uVar15 >> 0xc == 0)) {
            lVar11 = (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar8;
            local_98 = uVar8 + 1;
LAB_1453be742:
            pfVar13 = (float *)(*param_1 + lVar11 * 4);
          }
          else {
            if ((uVar10 >> 0xf & 1) != 0) {
              lVar11 = (ulonglong)((uVar10 & 0xff) - 1) * (ulonglong)*(ushort *)(param_1 + 2);
              goto LAB_1453be742;
            }
            pfVar13 = (float *)0x0;
          }
          if (((uVar17 & *(uint *)(param_2 + 0x188) >> 0xc) != 0) || (bVar4)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((*(char *)(param_2 + 0x194) != '\0') && (bVar5)) {
            memset(_Dst,0,(ulonglong)(uVar7 * 4));
            FUN_1453be3e0(pfVar13,param_2,local_res10,0,param_3,_Dst,uVar7,
                          *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0xf8),
                          lVar12);
            FUN_1453be3e0(pfVar13,param_2,local_res10,1,param_3,_Dst,uVar7,
                          *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0x114)
                          ,lVar12);
            local_res10 = local_res10 + 1;
            uVar14 = (ulonglong)local_res20;
          }
          if (*(char *)(param_2 + 0x131) != '\0') {
            FUN_1453be2f0(*(longlong *)(param_2 + 0xe0) + (uVar14 & 0xffffffff) * 0x18,pfVar13,uVar7
                         );
            local_res20 = local_res20 + 1;
            uVar14 = (ulonglong)local_res20;
          }
          if (((*(char *)(param_2 + 0x194) != '\0') && (bVar5)) ||
             ((*(int *)(param_2 + 0x120) == 6 && ((uVar17 == 2 && ((uVar15 >> 0xc & 2) != 0)))))) {
            FUN_1453baf30(pfVar13,_Dst,*(undefined4 *)(param_2 + 0x170),
                          *(undefined4 *)(param_2 + 0x124),*(undefined4 *)(param_2 + 0x174),
                          *(undefined4 *)(param_2 + 0x128),uVar7);
            uVar14 = (ulonglong)local_res20;
          }
          else {
            fVar23 = *(float *)(param_2 + 0x124);
            fVar22 = *(float *)(param_2 + 0x170);
            if (fVar23 == fVar22) {
              FUN_1453beb00(pfVar13,fVar22,uVar7);
            }
            else {
              pfVar1 = pfVar13 + uVar7;
              if (3 < uVar7) {
                pfVar2 = pfVar13 + (uVar7 & 0xfffffffc);
                fVar19 = (fVar23 - fVar22) / (float)(uVar7 & 0xfffffffc);
                fVar24 = fVar19 * 4.0;
                fVar18 = fVar19 + fVar22 + fVar19;
                fVar20 = fVar22;
                fVar21 = fVar19 + fVar22;
                fVar19 = fVar18 + fVar19;
                for (; pfVar13 < pfVar2; pfVar13 = pfVar13 + 4) {
                  *pfVar13 = *pfVar13 * fVar20;
                  pfVar13[1] = pfVar13[1] * fVar21;
                  pfVar13[2] = pfVar13[2] * fVar18;
                  pfVar13[3] = pfVar13[3] * fVar19;
                  fVar20 = fVar20 + fVar24;
                  fVar21 = fVar21 + fVar24;
                  fVar18 = fVar18 + fVar24;
                  fVar19 = fVar19 + fVar24;
                }
              }
              if (pfVar13 < pfVar1) {
                fVar23 = (fVar23 - fVar22) / (float)uVar7;
                if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar13) & 0xfffffffffffffffcU)) {
                  do {
                    *pfVar13 = fVar22 * *pfVar13;
                    fVar20 = fVar22 + fVar23 + fVar23;
                    pfVar13[1] = (fVar22 + fVar23) * pfVar13[1];
                    fVar21 = fVar20 + fVar23;
                    pfVar13[2] = fVar20 * pfVar13[2];
                    fVar22 = fVar21 + fVar23;
                    pfVar13[3] = fVar21 * pfVar13[3];
                    pfVar13 = pfVar13 + 4;
                  } while (pfVar13 < pfVar1 + -3);
                  if (pfVar1 <= pfVar13) goto LAB_1453bea48;
                }
                do {
                  *pfVar13 = fVar22 * *pfVar13;
                  pfVar13 = pfVar13 + 1;
                  fVar22 = fVar22 + fVar23;
                } while (pfVar13 < pfVar1);
              }
            }
          }
LAB_1453bea48:
          uVar16 = uVar16 + 1;
          uVar8 = local_98;
        }
        uVar10 = *(uint *)(param_1 + 1);
        uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      } while (uVar16 < (uVar10 & 0xff));
    }
    *(undefined8 *)(param_2 + 0x134) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0x13c) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_2 + 0x144) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_2 + 0x14c) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x154) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x15c) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x164) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x16c) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x174) = *(undefined8 *)(param_2 + 0x128);
    *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(param_2 + 0x130);
  }
  return;
}



// FUNCTION 1453beb00 FUN_1453beb00 body=309 status=ok
// SIG undefined FUN_1453beb00(void)

void FUN_1453beb00(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453bec40 FUN_1453bec40 body=745 status=ok
// SIG undefined FUN_1453bec40(void)

void FUN_1453bec40(longlong *param_1,uint param_2,uint param_3,undefined8 *param_4,longlong *param_5
                  )

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
  undefined8 uVar31;
  undefined8 uVar32;
  float *pfVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  float *pfVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if ((param_2 & 3) != 0) {
    uVar39 = 4 - (param_2 & 3);
    if (uVar39 != 0) {
      memset((void *)(*param_1 + (ulonglong)param_2 * 4),0,(ulonglong)uVar39 << 2);
    }
    param_2 = param_2 + uVar39;
  }
  uVar40 = param_3 >> 2;
  uVar41 = param_3 & 3;
  uVar39 = *(uint *)((longlong)param_5 + 0xc);
  if ((uVar39 - 1 == param_3) && ((uVar39 & 1) != 0)) {
    uVar34 = uVar40;
    if ((uVar39 != 1) && (1 < uVar41)) {
      uVar34 = uVar40 + 1;
    }
    lVar38 = *param_5;
    uVar35 = (ulonglong)(uVar34 << 4);
    fVar42 = *(float *)(lVar38 + uVar35 * 4);
    fVar49 = *(float *)(lVar38 + 4 + uVar35 * 4);
    fVar55 = *(float *)(lVar38 + 8 + uVar35 * 4);
    fVar54 = *(float *)(lVar38 + 0xc + uVar35 * 4);
  }
  else {
    lVar36 = (ulonglong)(uVar40 << 4) + (ulonglong)uVar41;
    lVar38 = *param_5;
    fVar42 = *(float *)(lVar38 + lVar36 * 4);
    fVar49 = *(float *)(lVar38 + 0x10 + lVar36 * 4);
    fVar55 = *(float *)(lVar38 + 0x20 + lVar36 * 4);
    fVar54 = *(float *)(lVar38 + 0x30 + lVar36 * 4);
  }
  pfVar37 = (float *)0x0;
  pfVar33 = pfVar37;
  if ((*(byte *)((longlong)param_4 + 0xc) & 1) != 0) {
    pfVar33 = (float *)*param_4;
  }
  uVar31 = *(undefined8 *)(pfVar33 + 0x1c);
  uVar32 = *(undefined8 *)(pfVar33 + 0x1e);
  fVar1 = *pfVar33;
  fVar2 = pfVar33[1];
  fVar3 = pfVar33[2];
  fVar4 = pfVar33[3];
  fVar5 = pfVar33[4];
  fVar6 = pfVar33[5];
  fVar7 = pfVar33[6];
  fVar8 = pfVar33[7];
  fVar9 = pfVar33[8];
  fVar10 = pfVar33[9];
  fVar11 = pfVar33[10];
  fVar12 = pfVar33[0xb];
  fVar13 = pfVar33[0xc];
  fVar14 = pfVar33[0xd];
  fVar15 = pfVar33[0xe];
  fVar16 = pfVar33[0xf];
  fVar17 = pfVar33[0x10];
  fVar18 = pfVar33[0x11];
  fVar19 = pfVar33[0x12];
  fVar20 = pfVar33[0x13];
  fVar21 = pfVar33[0x14];
  fVar22 = pfVar33[0x15];
  fVar23 = pfVar33[0x16];
  fVar24 = pfVar33[0x17];
  fVar25 = pfVar33[0x18];
  fVar26 = pfVar33[0x19];
  fVar27 = pfVar33[0x1a];
  fVar28 = pfVar33[0x1b];
  if (param_2 != 0) {
    do {
      fVar43 = fVar17 * fVar42;
      fVar45 = fVar18 * fVar42;
      fVar47 = fVar19 * fVar42;
      fVar48 = fVar20 * fVar42;
      uVar39 = (int)pfVar37 + 4;
      fVar50 = fVar21 * fVar49;
      fVar51 = fVar22 * fVar49;
      fVar52 = fVar23 * fVar49;
      fVar53 = fVar24 * fVar49;
      pfVar33 = (float *)(*param_1 + (longlong)pfVar37 * 4);
      fVar29 = *pfVar33;
      fVar30 = pfVar33[1];
      fVar49 = pfVar33[2];
      fVar42 = pfVar33[3];
      fVar44 = fVar25 * fVar55;
      fVar46 = fVar26 * fVar55;
      local_b8 = (float)uVar31;
      fStack_b4 = (float)((ulonglong)uVar31 >> 0x20);
      fStack_b0 = (float)uVar32;
      fStack_ac = (float)((ulonglong)uVar32 >> 0x20);
      local_b8 = local_b8 * fVar54;
      fStack_b4 = fStack_b4 * fVar54;
      fStack_ac = fStack_ac * fVar54;
      fVar54 = fVar30 * fVar11 + fVar49 * fVar7 + fVar49 * fVar3 + fVar47 + fVar52 + fVar29 * fVar15
               + fVar27 * fVar55 + fStack_b0 * fVar54;
      fVar55 = fVar30 * fVar12 + fVar49 * fVar8 + fVar42 * fVar4 + fVar48 + fVar53 + fVar29 * fVar16
               + fVar28 * fVar55 + fStack_ac;
      pfVar33 = (float *)(*param_1 + (longlong)pfVar37 * 4);
      *pfVar33 = fVar30 * fVar9 + fVar49 * fVar5 + fVar29 * fVar1 + fVar43 + fVar50 +
                 fVar29 * fVar13 + fVar44 + local_b8;
      pfVar33[1] = fVar30 * fVar10 + fVar49 * fVar6 + fVar30 * fVar2 + fVar45 + fVar51 +
                   fVar29 * fVar14 + fVar46 + fStack_b4;
      pfVar33[2] = fVar54;
      pfVar33[3] = fVar55;
      pfVar37 = (float *)(ulonglong)uVar39;
    } while (uVar39 < param_2);
  }
  uVar39 = *(uint *)((longlong)param_5 + 0xc);
  if ((uVar39 - 1 == param_3) && ((uVar39 & 1) != 0)) {
    if ((uVar39 != 1) && (1 < uVar41)) {
      uVar40 = uVar40 + 1;
    }
    uVar35 = (ulonglong)(uVar40 << 4);
    *(float *)(*param_5 + uVar35 * 4) = fVar42;
    *(float *)(*param_5 + 4 + uVar35 * 4) = fVar49;
    *(float *)(*param_5 + 8 + uVar35 * 4) = fVar55;
    *(float *)(*param_5 + 0xc + uVar35 * 4) = fVar54;
  }
  else {
    lVar38 = (ulonglong)(uVar40 << 4) + (ulonglong)uVar41;
    *(float *)(*param_5 + lVar38 * 4) = fVar42;
    *(float *)(*param_5 + 0x10 + lVar38 * 4) = fVar49;
    *(float *)(*param_5 + 0x20 + lVar38 * 4) = fVar55;
    *(float *)(*param_5 + 0x30 + lVar38 * 4) = fVar54;
  }
  return;
}



// FUNCTION 1453bef30 FUN_1453bef30 body=47 status=ok
// SIG undefined FUN_1453bef30(void)

longlong FUN_1453bef30(longlong param_1)

{
  FUN_1453bcf10();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 1453bef60 FUN_1453bef60 body=630 status=ok
// SIG undefined FUN_1453bef60(void)

undefined8
FUN_1453bef60(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,uint param_5,
             uint param_6,undefined8 param_7,char param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  *(int *)(param_1 + 0x20) = param_3;
  if ((param_8 == '\0') || (param_3 != 2)) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  uVar1 = FUN_145571830();
  if ((int)uVar1 == 1) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar2 = (**(code **)(*param_2 + 8))
                        (param_2,(ulonglong)*(uint *)(param_1 + 0x20) * 0xb0,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoderDoneRight.cpp"
                         ,0x3a,param_5,param_6);
      *(longlong *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return 0x34;
      }
      uVar6 = 0;
      uVar5 = uVar6;
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          _Dst = (void *)(uVar5 * 0xb0 + lVar2);
          if (_Dst != (void *)0x0) {
            memset(_Dst,0,0xb0);
            *(undefined4 *)((longlong)_Dst + 0x38) = 0;
            *(undefined2 *)((longlong)_Dst + 0x3c) = 0;
            *(undefined8 *)((longlong)_Dst + 0x40) = 0;
            *(undefined4 *)((longlong)_Dst + 0x48) = 0;
            *(undefined2 *)((longlong)_Dst + 0x4c) = 0;
            *(undefined8 *)((longlong)_Dst + 0x50) = 0;
            *(undefined4 *)((longlong)_Dst + 0x58) = 0;
            *(undefined2 *)((longlong)_Dst + 0x5c) = 0;
            *(undefined8 *)((longlong)_Dst + 0x60) = 0;
            *(undefined4 *)((longlong)_Dst + 0x68) = 0;
            *(undefined2 *)((longlong)_Dst + 0x6c) = 0;
            *(undefined8 *)((longlong)_Dst + 0x70) = 0;
            *(undefined8 *)((longlong)_Dst + 0x78) = 0;
            *(undefined8 *)((longlong)_Dst + 0x80) = 0;
            *(undefined8 *)((longlong)_Dst + 0x88) = 0;
            *(undefined8 *)((longlong)_Dst + 0x90) = 0;
            *(undefined8 *)((longlong)_Dst + 0x98) = 0;
            *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
            *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
            lVar2 = *(longlong *)(param_1 + 0x50);
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x20));
        if (*(uint *)(param_1 + 0x20) != 0) {
          do {
            uVar4 = *(uint *)(param_1 + 0x28);
            lVar2 = uVar6 * 0xb0 + *(longlong *)(param_1 + 0x50);
            uVar1 = FUN_1453bd090(lVar2,param_2,uVar4);
            if ((int)uVar1 != 1) {
              return uVar1;
            }
            uVar1 = FUN_145571bf0(lVar2 + 0x30,param_2,uVar4);
            if ((int)uVar1 != 1) {
              return uVar1;
            }
            uVar1 = FUN_145571bf0(lVar2 + 0x40,param_2,uVar4);
            if ((int)uVar1 != 1) {
              return uVar1;
            }
            uVar1 = FUN_145571bf0(lVar2 + 0x50,param_2,uVar4);
            if ((int)uVar1 != 1) {
              return uVar1;
            }
            uVar1 = FUN_145572dc0(lVar2 + 0x60,param_2,uVar4,param_7);
            if ((int)uVar1 != 1) {
              return uVar1;
            }
            lVar3 = (**(code **)(*param_2 + 8))
                              (param_2,(ulonglong)((uVar4 >> 1) + 1) << 2,
                               "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkPhaseVocoderDoneRight.cpp"
                               ,0x87);
            *(longlong *)(lVar2 + 0xa8) = lVar3;
            if (lVar3 == 0) {
              return 0x34;
            }
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(param_1 + 0x20));
        }
      }
    }
    uVar1 = FUN_14556fb10(param_1,param_2,*(undefined4 *)(param_1 + 0x28),3,param_5 & 0xffffff00,
                          param_6 & 0xffffff00);
    if (((int)uVar1 == 1) &&
       (uVar1 = FUN_145571a00(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0x28)),
       (int)uVar1 == 1)) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x28) >> 2;
      uVar1 = 1;
    }
  }
  return uVar1;
}



// FUNCTION 1453bf1e0 FUN_1453bf1e0 body=212 status=ok
// SIG undefined FUN_1453bf1e0(void)

void FUN_1453bf1e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        lVar2 = (ulonglong)uVar1 * 0xb0 + *(longlong *)(param_1 + 0x50);
        FUN_1453bd110(lVar2,param_2);
        FUN_145571c40(lVar2 + 0x30,param_2);
        FUN_145571c40(lVar2 + 0x40,param_2);
        FUN_145571c40(lVar2 + 0x50,param_2);
        FUN_145572ea0(lVar2 + 0x60,param_2);
        if (*(longlong *)(lVar2 + 0xa8) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_145571ba0(param_1 + 0x40,param_2);
  FUN_145571930(param_1,param_2);
  return;
}



// FUNCTION 1453bf2c0 FUN_1453bf2c0 body=96 status=ok
// SIG undefined FUN_1453bf2c0(void)

void FUN_1453bf2c0(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1455719a0(param_1,*(undefined4 *)(param_1 + 0x28));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        FUN_1453bd150((ulonglong)uVar1 * 0xb0 + *(longlong *)(param_1 + 0x50),
                      *(undefined4 *)(param_1 + 0x28),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 1453bf320 FUN_1453bf320 body=40 status=ok
// SIG undefined FUN_1453bf320(void)

void FUN_1453bf320(longlong param_1)

{
  if ((*(char *)(param_1 + 0x5c) != '\0') && (*(int *)(param_1 + 0x20) == 3)) {
    FUN_1453bfca0();
    return;
  }
  FUN_1453bf350();
  return;
}



// FUNCTION 1453bf350 FUN_1453bf350 body=2367 status=ok
// SIG undefined FUN_1453bf350(void)

void FUN_1453bf350(longlong param_1,longlong *param_2,int param_3,longlong *param_4,float param_5,
                  float param_6,char param_7,undefined8 param_8,undefined4 param_9)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  char cVar25;
  float fVar26;
  uint local_res8;
  uint local_e4;
  
  uVar8 = param_8;
  pcVar1 = (char *)(param_1 + 0x30);
  param_5 = param_5 / param_6;
  if (param_7 != '\0') {
    *pcVar1 = '\x01';
  }
  if (param_5 == 1.0) {
    if (*pcVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar14 = (ulonglong)((float)*(uint *)(param_1 + 0x58) * param_5 + 0.5);
  local_e4 = 0;
  fVar26 = 1.0 / ((*(float *)(param_1 + 0xc) * 4.0) / (float)uVar5);
  do {
    uVar3 = *(ushort *)(param_2 + 2);
    cVar2 = *pcVar1;
    uVar19 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar22 = *(uint *)(param_1 + 0x2c);
    cVar15 = *(char *)(param_1 + 0x31);
    uVar24 = (ulonglong)local_e4;
    lVar6 = *param_2;
    local_res8 = (uint)*(ushort *)((longlong)param_4 + 0x12);
    uVar4 = *(ushort *)(param_4 + 2);
    lVar7 = *param_4;
    piVar20 = (int *)(uVar24 * 0xb0 + *(longlong *)(param_1 + 0x50));
    param_8._0_4_ = param_3;
    do {
      uVar12 = uVar22;
      if (uVar19 < uVar22) {
        uVar12 = uVar19;
      }
      uVar22 = uVar22 - uVar12;
      iVar18 = uVar19 - uVar12;
      if (((cVar15 != '\0') && (iVar18 == 0)) &&
         (uVar19 = 0, *(int *)((longlong)param_2 + 0xc) != 0x11)) break;
      lVar16 = uVar24 * 0x20;
      uVar13 = FUN_1455716d0(*(longlong *)(param_1 + 0x38) + lVar16,
                             lVar6 + uVar3 * uVar24 * 4 + (ulonglong)((int)param_8 + uVar12) * 4,
                             iVar18,param_6);
      lVar23 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar23 + lVar16) == *(int *)(lVar23 + 0xc + lVar16)) {
        uVar19 = iVar18 - (uVar13 & 0xffff);
        cVar15 = '\0';
      }
      else {
        uVar19 = iVar18 - (uVar13 & 0xffff);
        if (((cVar15 != '\0') && (uVar19 == 0)) && (*(int *)((longlong)param_2 + 0xc) != 0x11)) {
          *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
          goto LAB_1453bfc08;
        }
      }
      param_8._0_4_ = (int)param_8 + uVar12 + uVar13;
      if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (uVar19 == 0)) {
        cVar25 = '\x01';
      }
      else {
        cVar25 = '\0';
      }
      if (uVar5 <= (uint)(*piVar20 - piVar20[3])) {
        lVar16 = (longlong)
                 (int)((uint)*(byte *)(piVar20 + 0xb) + (*(byte *)(piVar20 + 0xb) / 3) * -3);
        if (*(char *)(param_1 + 0x32) == '\0') {
          if (((char)piVar20[lVar16 * 4 + 0xf] == '\0') &&
             (cVar9 = FUN_14556f600(uVar24 * 0x20 + lVar23,uVar8,uVar5,cVar25), cVar9 != '\0')) {
            FUN_14556f5d0(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar14 & 0xffffffff);
            FUN_14556ff60(param_1,uVar8,uVar5,0x3f800000);
            FUN_145571c80(piVar20 + ((longlong)
                                     (int)((uint)*(byte *)(piVar20 + 0xb) +
                                          (*(byte *)(piVar20 + 0xb) / 3) * -3) + 3) * 4,uVar8,uVar5,
                          *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
            FUN_145571d20(piVar20 + ((longlong)
                                     (int)((uint)*(byte *)(piVar20 + 0xb) +
                                          (*(byte *)(piVar20 + 0xb) / 3) * -3) + 3) * 4,
                          param_1 + 0x40);
            FUN_145571d00(piVar20 + ((longlong)
                                     (int)((uint)*(byte *)(piVar20 + 0xb) +
                                          (*(byte *)(piVar20 + 0xb) / 3) * -3) + 3) * 4);
          }
          if (((char)piVar20[(longlong)(int)((*(byte *)(piVar20 + 0xb) + 1) % 3) * 4 + 0xf] == '\0')
             && (cVar9 = FUN_14556f600(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar8,uVar5,
                                       cVar25), cVar9 != '\0')) {
            FUN_14556f5d0(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar14 & 0xffffffff);
            FUN_14556ff60(param_1,uVar8,uVar5,0x3f800000);
            FUN_145571c80(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 1) % 3) + 3) * 4,
                          uVar8,uVar5,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
            FUN_145571d20(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 1) % 3) + 3) * 4,
                          param_1 + 0x40);
            FUN_145571d00(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 1) % 3) + 3) * 4);
          }
          if (((char)piVar20[(longlong)(int)((*(byte *)(piVar20 + 0xb) + 2) % 3) * 4 + 0xf] == '\0')
             && (cVar9 = FUN_14556f600(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar8,uVar5,
                                       cVar25), cVar9 != '\0')) {
            FUN_14556f5d0(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar14 & 0xffffffff);
            FUN_14556ff60(param_1,uVar8,uVar5,0x3f800000);
            FUN_145571c80(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 2) % 3) + 3) * 4,
                          uVar8,uVar5,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
            FUN_145571d20(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 2) % 3) + 3) * 4,
                          param_1 + 0x40);
            FUN_145571d00(piVar20 + ((longlong)(int)((*(byte *)(piVar20 + 0xb) + 2) % 3) + 3) * 4);
          }
          bVar10 = *(byte *)(piVar20 + 0xb);
          lVar23 = (longlong)(int)((uint)bVar10 + (bVar10 / 3) * -3);
          if ((((char)piVar20[lVar23 * 4 + 0xf] != '\0') &&
              (lVar16 = (longlong)(int)((bVar10 + 1) % 3), (char)piVar20[lVar16 * 4 + 0xf] != '\0'))
             && (lVar21 = (longlong)(int)((bVar10 + 2) % 3), (char)piVar20[lVar21 * 4 + 0xf] != '\0'
                )) {
            FUN_145572f20(piVar20 + 0x18,*(undefined8 *)(piVar20 + (lVar23 + 3) * 4),
                          *(undefined8 *)(piVar20 + (lVar16 + 3) * 4),
                          *(undefined8 *)(piVar20 + (lVar21 + 3) * 4),
                          *(undefined8 *)(piVar20 + 0x2a),*(undefined8 *)(piVar20 + 8),(int)uVar14,
                          *(undefined4 *)(param_1 + 0x58),cVar2,param_9);
            cVar2 = '\0';
            FUN_145571d10(piVar20 + 0x18);
            FUN_145571d80(piVar20 + 0x18,param_1 + 0x40);
            FUN_145571cb0(piVar20 + 0x18,uVar8,uVar5,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
            FUN_14556ff60(param_1,uVar8,uVar5,fVar26);
            FUN_14556f6f0(piVar20,uVar8,*(undefined4 *)(param_1 + 0x58));
            *(undefined1 *)(piVar20 + 0x1b) = 0;
            *(undefined1 *)
             (piVar20 +
             (longlong)(int)((uint)*(byte *)(piVar20 + 0xb) + (*(byte *)(piVar20 + 0xb) / 3) * -3) *
             4 + 0xf) = 0;
            bVar10 = (char)piVar20[0xb] + 1;
            *(byte *)(piVar20 + 0xb) = bVar10 + bVar10 / 0xff;
          }
        }
        else {
          *(undefined1 *)(piVar20 + lVar16 * 4 + 0xf) = 0;
          *(undefined1 *)(piVar20 + (longlong)(int)((*(byte *)(piVar20 + 0xb) + 1) % 3) * 4 + 0xf) =
               0;
          cVar9 = FUN_14556f600(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar8,uVar5,cVar25);
          if (cVar9 != '\0') {
            FUN_14556f5d0(uVar24 * 0x20 + *(longlong *)(param_1 + 0x38),uVar14);
            FUN_14556ff60(param_1,uVar8,uVar5,0x3f800000);
            FUN_14556ff60(param_1,uVar8,uVar5,fVar26);
            FUN_14556f6f0(piVar20,uVar8,*(undefined4 *)(param_1 + 0x58));
          }
        }
        if (*(char *)((longlong)piVar20 + 0x2d) != '\0') {
          uVar17 = (ulonglong)((float)uVar5 * 0.5 * (1.0 / param_5));
          iVar18 = FUN_14556f5d0(piVar20,uVar17 & 0xffffffff);
          piVar20[10] = piVar20[10] + iVar18;
          if ((uint)uVar17 < (uint)piVar20[10]) {
            *(undefined1 *)((longlong)piVar20 + 0x2d) = 0;
          }
        }
      }
      if ((cVar25 == '\0') || (*(int *)(uVar24 * 0x20 + 0xc + *(longlong *)(param_1 + 0x38)) != 0))
      {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
      uVar11 = FUN_14556f9b0(piVar20,lVar7 + uVar4 * uVar24 * 4 + (ulonglong)local_res8 * 4,
                             *(undefined4 *)(param_1 + 0x58),*(ushort *)(param_4 + 2) - local_res8,
                             cVar9);
      local_res8 = local_res8 + uVar11;
      if (((cVar9 != '\0') && (piVar20[3] == 0)) &&
         (iVar18 = FUN_14556fae0(piVar20,*(undefined4 *)(param_1 + 0x58)), iVar18 == 0)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
        goto LAB_1453bfc08;
      }
      if (local_res8 == *(ushort *)(param_4 + 2)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x2d;
        goto LAB_1453bfc08;
      }
    } while ((cVar25 != '\0') || (uVar19 != 0));
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
LAB_1453bfc08:
    local_e4 = local_e4 + 1;
    if (*(uint *)(param_1 + 0x20) <= local_e4) {
      *(short *)((longlong)param_2 + 0x12) = (short)uVar19;
      *(short *)((longlong)param_4 + 0x12) = (short)local_res8;
      *(uint *)(param_1 + 0x2c) = uVar22;
      *(char *)(param_1 + 0x30) = cVar2;
      *(char *)(param_1 + 0x31) = cVar15;
      if ((param_5 == 1.0) && (param_7 != '\0')) {
        *(undefined1 *)(param_1 + 0x32) = 1;
      }
      return;
    }
  } while( true );
}



// FUNCTION 1453bfca0 FUN_1453bfca0 body=3818 status=ok
// SIG undefined FUN_1453bfca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453bfca0(longlong param_1,longlong *param_2,int param_3,longlong *param_4,float param_5,
                  float param_6,char param_7,undefined8 param_8,undefined4 param_9)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  longlong lVar24;
  int *piVar25;
  longlong *plVar26;
  undefined1 uVar27;
  uint uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  char local_res8 [8];
  longlong *local_res10;
  char local_res18 [8];
  longlong *local_res20;
  undefined1 auStack_158 [80];
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  uint local_f0 [4];
  uint local_e0 [4];
  char *local_d0;
  uint local_c8 [4];
  int local_b8 [30];
  
  fVar9 = param_6;
  local_res20 = param_4;
  local_res10 = param_2;
  fVar30 = param_5 / param_6;
  if (param_7 == '\0') {
    param_5._0_1_ = *(char *)(param_1 + 0x30);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    param_5._0_1_ = '\x01';
  }
  if (fVar30 == 1.0) {
    if (param_5._0_1_ != '\0') {
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  uVar12 = *(ushort *)((longlong)param_2 + 0x12);
  param_6 = (float)(uint)uVar12;
  local_f0[0] = (uint)param_6;
  local_f0[1] = (uint)uVar12;
  local_f0[2] = (uint)uVar12;
  local_b8[0] = param_3;
  local_b8[1] = param_3;
  local_b8[2] = param_3;
  local_res18[0] = param_5._0_1_;
  local_res18[1] = param_5._0_1_;
  local_res18[2] = param_5._0_1_;
  bVar8 = false;
  local_f8 = (ulonglong)((float)*(uint *)(param_1 + 0x58) * fVar30 + 0.5);
  local_108 = (ulonglong)*(uint *)(param_1 + 0x28);
  uVar12 = *(ushort *)((longlong)param_4 + 0x12);
  local_100 = CONCAT44(local_100._4_4_,(uint)uVar12);
  local_e0[0] = (uint)uVar12;
  local_e0[1] = (uint)uVar12;
  local_e0[2] = (uint)uVar12;
  local_c8[0] = *(uint *)(param_1 + 0x2c);
  local_c8[1] = local_c8[0];
  local_c8[2] = local_c8[0];
  local_res8[0] = *(char *)(param_1 + 0x31);
  local_res8[1] = local_res8[0];
  local_res8[2] = local_res8[0];
  fVar31 = 1.0 / ((*(float *)(param_1 + 0xc) * 4.0) / (float)local_108);
  puVar22 = auStack_158;
  do {
    uVar21 = 0;
    iVar17 = 1;
    if (*(int *)(param_1 + 0x20) != 1) {
      do {
        uVar13 = local_c8[uVar21];
        uVar18 = local_f0[uVar21];
        uVar12 = *(ushort *)(local_res10 + 2);
        lVar19 = *local_res10;
        uVar28 = uVar18;
        if (uVar13 <= uVar18) {
          uVar28 = uVar13;
        }
        iVar17 = uVar18 - uVar28;
        local_c8[uVar21] = uVar13 - uVar28;
        uVar28 = local_b8[uVar21] + uVar28;
        local_d0 = local_res8 + uVar21;
        cVar10 = local_res8[uVar21];
        if (((cVar10 != '\0') && (iVar17 == 0)) && (*(int *)((longlong)local_res10 + 0xc) != 0x11))
        {
          bVar8 = true;
          *(undefined4 *)((longlong)local_res20 + 0xc) = 0x2b;
        }
        lVar20 = *(longlong *)(param_1 + 0x38);
        lVar23 = uVar21 * 0x20;
        *(undefined8 *)(puVar22 + -8) = 0x1453bfeda;
        uVar13 = FUN_1455716d0(lVar20 + lVar23,lVar19 + ((ulonglong)uVar28 + uVar12 * uVar21) * 4,
                               iVar17,fVar9);
        pcVar14 = local_d0;
        if (*(int *)(lVar23 + *(longlong *)(param_1 + 0x38)) ==
            *(int *)(lVar23 + 0xc + *(longlong *)(param_1 + 0x38))) {
          local_f0[uVar21] = iVar17 - (uVar13 & 0xffff);
          *pcVar14 = '\0';
          local_b8[uVar21] = uVar28 + uVar13;
        }
        else {
          uVar18 = iVar17 - (uVar13 & 0xffff);
          local_b8[uVar21] = uVar13 + uVar28;
          local_f0[uVar21] = uVar18;
          if (((cVar10 != '\0') && (uVar18 == 0)) && (*(int *)((longlong)local_res10 + 0xc) != 0x11)
             ) {
            *(undefined4 *)((longlong)local_res20 + 0xc) = 0x2b;
            bVar8 = true;
          }
        }
        iVar17 = *(int *)(param_1 + 0x20);
        uVar13 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar13;
      } while (uVar13 < iVar17 - 1U);
      param_6 = (float)local_f0[2];
      param_4 = local_res20;
    }
    uVar21 = local_108;
    uVar15 = 0;
    if (iVar17 != 1) {
      do {
        lVar19 = uVar15 * 0xb0 + *(longlong *)(param_1 + 0x50);
        if ((*(int *)((longlong)local_res10 + 0xc) == 0x11) && (local_f0[uVar15] == 0)) {
          uVar29 = 1;
        }
        else {
          uVar29 = 0;
        }
        if (*(char *)(lVar19 + 0x3c +
                     (longlong)
                     (int)((uint)*(byte *)(lVar19 + 0x2c) + (*(byte *)(lVar19 + 0x2c) / 3) * -3) *
                     0x10) == '\0') {
          lVar20 = *(longlong *)(param_1 + 0x38);
          *(undefined8 *)(puVar22 + -8) = 0x1453bfff5;
          cVar10 = FUN_14556f600(lVar20 + uVar15 * 0x20,param_8,uVar21 & 0xffffffff,uVar29);
          if (cVar10 != '\0') {
            lVar20 = *(longlong *)(param_1 + 0x38);
            uVar16 = local_f8 & 0xffffffff;
            *(undefined8 *)(puVar22 + -8) = 0x1453c0008;
            FUN_14556f5d0(lVar20 + uVar15 * 0x20,uVar16);
            *(undefined8 *)(puVar22 + -8) = 0x1453c001d;
            FUN_14556ff60(param_1,param_8,uVar21 & 0xffffffff,0x3f800000);
            bVar11 = *(byte *)(lVar19 + 0x2c);
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(puVar22 + -8) = 0x1453c0059;
            FUN_145571c80(((longlong)(int)((uint)bVar11 + (bVar11 / 3) * -3) + 3) * 0x10 + lVar19,
                          param_8,uVar21 & 0xffffffff,uVar3);
          }
        }
        if (*(char *)(lVar19 + 0x3c + (longlong)(int)((*(byte *)(lVar19 + 0x2c) + 1) % 3) * 0x10) ==
            '\0') {
          lVar20 = *(longlong *)(param_1 + 0x38);
          *(undefined8 *)(puVar22 + -8) = 0x1453c009f;
          cVar10 = FUN_14556f600(lVar20 + uVar15 * 0x20,param_8,uVar21 & 0xffffffff,uVar29);
          if (cVar10 != '\0') {
            lVar20 = *(longlong *)(param_1 + 0x38);
            uVar16 = local_f8 & 0xffffffff;
            *(undefined8 *)(puVar22 + -8) = 0x1453c00b2;
            FUN_14556f5d0(lVar20 + uVar15 * 0x20,uVar16);
            *(undefined8 *)(puVar22 + -8) = 0x1453c00ca;
            FUN_14556ff60(param_1,param_8,uVar21 & 0xffffffff,0x3f800000);
            bVar11 = *(byte *)(lVar19 + 0x2c);
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(puVar22 + -8) = 0x1453c0104;
            FUN_145571c80(((longlong)(int)((bVar11 + 1) % 3) + 3) * 0x10 + lVar19,param_8,
                          uVar21 & 0xffffffff,uVar3);
          }
        }
        if (*(char *)(lVar19 + 0x3c + (longlong)(int)((*(byte *)(lVar19 + 0x2c) + 2) % 3) * 0x10) ==
            '\0') {
          lVar20 = *(longlong *)(param_1 + 0x38);
          *(undefined8 *)(puVar22 + -8) = 0x1453c0149;
          cVar10 = FUN_14556f600(lVar20 + uVar15 * 0x20,param_8,uVar21 & 0xffffffff,uVar29);
          if (cVar10 != '\0') {
            lVar20 = *(longlong *)(param_1 + 0x38);
            uVar16 = local_f8 & 0xffffffff;
            *(undefined8 *)(puVar22 + -8) = 0x1453c015c;
            FUN_14556f5d0(lVar20 + uVar15 * 0x20,uVar16);
            *(undefined8 *)(puVar22 + -8) = 0x1453c016d;
            FUN_14556ff60(param_1,param_8,uVar21 & 0xffffffff,0x3f800000);
            bVar11 = *(byte *)(lVar19 + 0x2c);
            uVar29 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(puVar22 + -8) = 0x1453c01a8;
            FUN_145571c80(((longlong)(int)((bVar11 + 2) % 3) + 3) * 0x10 + lVar19,param_8,
                          uVar21 & 0xffffffff,uVar29);
          }
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
        param_4 = local_res20;
      } while (uVar13 < *(int *)(param_1 + 0x20) - 1U);
    }
    uVar21 = local_108;
    lVar19 = *(longlong *)(param_1 + 0x50);
    lVar24 = ((longlong)(int)((uint)*(byte *)(lVar19 + 0x2c) + (*(byte *)(lVar19 + 0x2c) / 3) * -3)
             + 3) * 0x10 + lVar19;
    lVar23 = ((longlong)(int)((uint)*(byte *)(lVar19 + 0xdc) + (*(byte *)(lVar19 + 0xdc) / 3) * -3)
             + 3) * 0x10 + lVar19 + 0xb0;
    lVar20 = ((longlong)
              (int)((uint)*(byte *)(lVar19 + 0x18c) + (*(byte *)(lVar19 + 0x18c) / 3) * -3) + 3) *
             0x10 + lVar19 + 0x160;
    if (((*(char *)(lVar20 + 0xc) == '\0') && (*(char *)(lVar24 + 0xc) != '\0')) &&
       (*(char *)(lVar23 + 0xc) != '\0')) {
      uVar15 = local_108 & 0xffffffff;
      *(undefined8 *)(puVar22 + -8) = 0x1453c0264;
      FUN_145571de0(uVar15,lVar24,lVar23,lVar20);
      *(undefined2 *)(lVar20 + 0xc) = 1;
    }
    if ((*(char *)(lVar24 + 0xc) != '\0') && (*(char *)(lVar24 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c0288;
      FUN_145571d20(lVar24,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c0290;
      FUN_145571d00(lVar24);
    }
    if ((*(char *)(lVar23 + 0xc) != '\0') && (*(char *)(lVar23 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c02a8;
      FUN_145571d20(lVar23,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c02b0;
      FUN_145571d00(lVar23);
    }
    if ((*(char *)(lVar20 + 0xc) != '\0') && (*(char *)(lVar20 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c02c8;
      FUN_145571d20(lVar20,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c02d0;
      FUN_145571d00(lVar20);
    }
    lVar24 = ((longlong)(int)((*(byte *)(lVar19 + 0x2c) + 1) % 3) + 3) * 0x10 + lVar19;
    lVar23 = ((longlong)(int)((*(byte *)(lVar19 + 0xdc) + 1) % 3) + 3) * 0x10 + lVar19 + 0xb0;
    lVar20 = ((longlong)(int)((*(byte *)(lVar19 + 0x18c) + 1) % 3) + 3) * 0x10 + lVar19 + 0x160;
    if (*(char *)(lVar20 + 0xc) == '\0') {
      if (*(char *)(lVar24 + 0xc) != '\0') {
        if (*(char *)(lVar23 + 0xc) != '\0') {
          *(undefined8 *)(puVar22 + -8) = 0x1453c036a;
          FUN_145571de0(uVar21 & 0xffffffff,lVar24,lVar23,lVar20);
          *(undefined2 *)(lVar20 + 0xc) = 1;
        }
        goto LAB_1453c0370;
      }
    }
    else {
LAB_1453c0370:
      if ((*(char *)(lVar24 + 0xc) != '\0') && (*(char *)(lVar24 + 0xd) == '\0')) {
        *(undefined8 *)(puVar22 + -8) = 0x1453c0388;
        FUN_145571d20(lVar24,param_1 + 0x40);
        *(undefined8 *)(puVar22 + -8) = 0x1453c0390;
        FUN_145571d00(lVar24);
      }
    }
    if ((*(char *)(lVar23 + 0xc) != '\0') && (*(char *)(lVar23 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c03a8;
      FUN_145571d20(lVar23,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c03b0;
      FUN_145571d00(lVar23);
    }
    if ((*(char *)(lVar20 + 0xc) != '\0') && (*(char *)(lVar20 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c03c8;
      FUN_145571d20(lVar20,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c03d0;
      FUN_145571d00(lVar20);
    }
    lVar23 = ((longlong)(int)((*(byte *)(lVar19 + 0x2c) + 2) % 3) + 3) * 0x10 + lVar19;
    lVar20 = ((longlong)(int)((*(byte *)(lVar19 + 0xdc) + 2) % 3) + 3) * 0x10 + lVar19 + 0xb0;
    lVar19 = ((longlong)(int)((*(byte *)(lVar19 + 0x18c) + 2) % 3) + 3) * 0x10 + lVar19 + 0x160;
    if (*(char *)(lVar19 + 0xc) == '\0') {
      if (*(char *)(lVar23 + 0xc) != '\0') {
        if (*(char *)(lVar20 + 0xc) != '\0') {
          *(undefined8 *)(puVar22 + -8) = 0x1453c046d;
          FUN_145571de0(uVar21 & 0xffffffff,lVar23,lVar20,lVar19);
          *(undefined2 *)(lVar19 + 0xc) = 1;
        }
        goto LAB_1453c0473;
      }
    }
    else {
LAB_1453c0473:
      if ((*(char *)(lVar23 + 0xc) != '\0') && (*(char *)(lVar23 + 0xd) == '\0')) {
        *(undefined8 *)(puVar22 + -8) = 0x1453c048b;
        FUN_145571d20(lVar23,param_1 + 0x40);
        *(undefined8 *)(puVar22 + -8) = 0x1453c0493;
        FUN_145571d00(lVar23);
      }
    }
    if ((*(char *)(lVar20 + 0xc) != '\0') && (*(char *)(lVar20 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c04ab;
      FUN_145571d20(lVar20,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c04b3;
      FUN_145571d00(lVar20);
    }
    if ((*(char *)(lVar19 + 0xc) != '\0') && (*(char *)(lVar19 + 0xd) == '\0')) {
      *(undefined8 *)(puVar22 + -8) = 0x1453c04cb;
      FUN_145571d20(lVar19,param_1 + 0x40);
      *(undefined8 *)(puVar22 + -8) = 0x1453c04d3;
      FUN_145571d00(lVar19);
    }
    uVar15 = 0;
    if (*(int *)(param_1 + 0x20) != 1) {
      do {
        local_d0 = (char *)(*(ushort *)(param_4 + 2) * uVar15);
        local_100 = *param_4;
        piVar25 = (int *)(uVar15 * 0xb0 + *(longlong *)(param_1 + 0x50));
        if ((*(int *)((longlong)local_res10 + 0xc) == 0x11) && (local_f0[uVar15] == 0)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        bVar11 = *(byte *)(piVar25 + 0xb);
        lVar19 = (longlong)(int)((uint)bVar11 + (bVar11 / 3) * -3);
        if ((((char)piVar25[lVar19 * 4 + 0xf] == '\0') ||
            (lVar20 = (longlong)(int)((bVar11 + 1) % 3), (char)piVar25[lVar20 * 4 + 0xf] == '\0'))
           || (lVar23 = (longlong)(int)((bVar11 + 2) % 3), (char)piVar25[lVar23 * 4 + 0xf] == '\0'))
        {
LAB_1453c0688:
          if ((char)piVar25[0x1b] != '\0') goto LAB_1453c0692;
        }
        else {
          if ((char)piVar25[0x1b] == '\0') {
            if (*(char *)(param_1 + 0x32) == '\0') {
              cVar10 = local_res18[uVar15];
              *(undefined4 *)(puVar22 + 0x48) = param_9;
              puVar22[0x40] = cVar10;
              *(undefined4 *)(puVar22 + 0x38) = *(undefined4 *)(param_1 + 0x58);
              *(int *)(puVar22 + 0x30) = (int)local_f8;
              uVar29 = *(undefined8 *)(piVar25 + (lVar23 + 3) * 4);
              uVar3 = *(undefined8 *)(piVar25 + (lVar20 + 3) * 4);
              uVar6 = *(undefined8 *)(piVar25 + (lVar19 + 3) * 4);
              *(undefined8 *)(puVar22 + 0x28) = *(undefined8 *)(piVar25 + 8);
              *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(piVar25 + 0x2a);
              *(undefined8 *)(puVar22 + -8) = 0x1453c067f;
              FUN_145572f20(piVar25 + 0x18,uVar6,uVar3,uVar29);
              local_res18[uVar15] = '\0';
            }
            else {
              uVar13 = *(uint *)(param_1 + 0x28);
              pvVar4 = *(void **)(piVar25 + 0x18);
              pvVar5 = *(void **)(piVar25 + (lVar20 + 3) * 4);
              *(undefined8 *)(puVar22 + -8) = 0x1453c0618;
              memcpy(pvVar4,pvVar5,(ulonglong)((uVar13 >> 1) * 8 + 8));
              *(undefined2 *)(piVar25 + 0x1b) = 0x101;
            }
            goto LAB_1453c0688;
          }
LAB_1453c0692:
          if ((uint)uVar21 <= (uint)(*piVar25 - piVar25[3])) {
            *(undefined8 *)(puVar22 + -8) = 0x1453c06a9;
            FUN_145571d10(piVar25 + 0x18);
            *(undefined8 *)(puVar22 + -8) = 0x1453c06b6;
            FUN_145571d80(piVar25 + 0x18,param_1 + 0x40);
            uVar29 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(puVar22 + -8) = 0x1453c06d6;
            FUN_145571cb0(piVar25 + 0x18,param_8,uVar21 & 0xffffffff,uVar29);
            *(undefined8 *)(puVar22 + -8) = 0x1453c06ec;
            FUN_14556ff60(param_1,param_8,uVar21 & 0xffffffff,fVar31);
            uVar2 = *(undefined4 *)(param_1 + 0x58);
            *(undefined8 *)(puVar22 + -8) = 0x1453c06ff;
            FUN_14556f6f0(piVar25,param_8,uVar2);
            *(undefined1 *)(piVar25 + 0x1b) = 0;
            *(undefined1 *)
             (piVar25 +
             (longlong)(int)((uint)*(byte *)(piVar25 + 0xb) + (*(byte *)(piVar25 + 0xb) / 3) * -3) *
             4 + 0xf) = 0;
            bVar11 = (char)piVar25[0xb] + 1;
            *(byte *)(piVar25 + 0xb) = bVar11 + bVar11 / 0xff;
          }
        }
        if (((bVar7) && (*(int *)(uVar15 * 0x20 + 0xc + *(longlong *)(param_1 + 0x38)) == 0)) &&
           (((char)piVar25[0x1b] == '\0' && (piVar25[3] == 0)))) {
          cVar10 = '\x01';
        }
        else {
          cVar10 = '\0';
        }
        if (*(char *)((longlong)piVar25 + 0x2d) != '\0') {
          uVar21 = (ulonglong)((float)(local_108 & 0xffffffff) * 0.5 * (1.0 / fVar30));
          *(undefined8 *)(puVar22 + -8) = 0x1453c0795;
          iVar17 = FUN_14556f5d0(piVar25,uVar21 & 0xffffffff);
          piVar25[10] = piVar25[10] + iVar17;
          if ((uint)uVar21 < (uint)piVar25[10]) {
            *(undefined1 *)((longlong)piVar25 + 0x2d) = 0;
          }
        }
        uVar21 = local_100;
        uVar13 = local_e0[uVar15];
        pcVar14 = local_d0 + uVar13;
        uVar12 = *(ushort *)(param_4 + 2);
        uVar2 = *(undefined4 *)(param_1 + 0x58);
        puVar22[0x20] = cVar10;
        *(undefined8 *)(puVar22 + -8) = 0x1453c07cd;
        uVar12 = FUN_14556f9b0(piVar25,uVar21 + (longlong)pcVar14 * 4,uVar2,uVar12 - uVar13);
        local_e0[uVar15] = uVar13 + uVar12;
        if ((cVar10 == '\0') || (piVar25[3] != 0)) {
LAB_1453c07fc:
          if (uVar13 + uVar12 == (uint)*(ushort *)(param_4 + 2)) {
            *(undefined4 *)((longlong)param_4 + 0xc) = 0x2d;
            goto LAB_1453c0828;
          }
          if ((!bVar7) && (local_f0[uVar15] == 0)) {
            *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
            goto LAB_1453c0828;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x58);
          *(undefined8 *)(puVar22 + -8) = 0x1453c07ee;
          iVar17 = FUN_14556fae0(piVar25,uVar2);
          if (iVar17 != 0) goto LAB_1453c07fc;
          *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
LAB_1453c0828:
          bVar8 = true;
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
        uVar21 = local_108;
      } while (uVar13 < *(int *)(param_1 + 0x20) - 1U);
      param_5._0_1_ = local_res18[2];
      local_100 = CONCAT44(local_100._4_4_,local_e0[2]);
    }
    plVar26 = local_res10;
    lVar19 = *(longlong *)(param_1 + 0x50);
    piVar25 = (int *)(lVar19 + 0x160);
    if ((*(int *)((longlong)local_res10 + 0xc) == 0x11) && (param_6 == 0.0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    bVar11 = *(byte *)(lVar19 + 0x18c);
    lVar20 = (longlong)(int)((uint)bVar11 + (bVar11 / 3) * -3);
    if (((*(char *)(lVar19 + 0x19c + lVar20 * 0x10) == '\0') ||
        (lVar23 = (longlong)(int)((bVar11 + 1) % 3),
        *(char *)(lVar19 + 0x19c + lVar23 * 0x10) == '\0')) ||
       (lVar24 = (longlong)(int)((bVar11 + 2) % 3),
       *(char *)(lVar19 + 0x19c + lVar24 * 0x10) == '\0')) {
LAB_1453c0975:
      uVar21 = local_108;
      if (*(char *)(lVar19 + 0x1cc) != '\0') goto LAB_1453c097f;
    }
    else {
      if (*(char *)(lVar19 + 0x1cc) == '\0') {
        if (*(char *)(param_1 + 0x32) == '\0') {
          uVar2 = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(puVar22 + 0x48) = param_9;
          puVar22[0x40] = param_5._0_1_;
          *(undefined4 *)(puVar22 + 0x38) = uVar2;
          *(int *)(puVar22 + 0x30) = (int)local_f8;
          uVar29 = *(undefined8 *)(piVar25 + (lVar24 + 3) * 4);
          uVar3 = *(undefined8 *)(piVar25 + (lVar23 + 3) * 4);
          uVar6 = *(undefined8 *)(piVar25 + (lVar20 + 3) * 4);
          *(undefined8 *)(puVar22 + 0x28) = *(undefined8 *)(lVar19 + 0x180);
          *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(lVar19 + 0x208);
          *(undefined8 *)(puVar22 + -8) = 0x1453c0967;
          FUN_145572f20((undefined8 *)(lVar19 + 0x1c0),uVar6,uVar3,uVar29);
          param_5._0_1_ = '\0';
          local_res18[2] = '\0';
        }
        else {
          uVar13 = *(uint *)(param_1 + 0x28);
          pvVar4 = *(void **)(lVar19 + 0x1c0);
          pvVar5 = *(void **)(piVar25 + (lVar23 + 3) * 4);
          *(undefined8 *)(puVar22 + -8) = 0x1453c0909;
          memcpy(pvVar4,pvVar5,(ulonglong)((uVar13 >> 1) * 8 + 8));
          *(undefined2 *)(lVar19 + 0x1cc) = 0x101;
        }
        goto LAB_1453c0975;
      }
LAB_1453c097f:
      uVar21 = local_108;
      if ((uint)local_108 <= (uint)(*piVar25 - *(int *)(lVar19 + 0x16c))) {
        *(undefined8 *)(puVar22 + -8) = 0x1453c0999;
        FUN_145571d10(lVar19 + 0x1c0);
        *(undefined8 *)(puVar22 + -8) = 0x1453c09a6;
        FUN_145571d80(lVar19 + 0x1c0,param_1 + 0x40);
        uVar29 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(puVar22 + 0x20) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(puVar22 + -8) = 0x1453c09c9;
        FUN_145571cb0(lVar19 + 0x1c0,param_8,uVar21 & 0xffffffff,uVar29);
        *(undefined8 *)(puVar22 + -8) = 0x1453c09db;
        FUN_14556ff60(param_1,param_8,uVar21 & 0xffffffff,fVar31);
        uVar2 = *(undefined4 *)(param_1 + 0x58);
        *(undefined8 *)(puVar22 + -8) = 0x1453c09ea;
        FUN_14556f6f0(piVar25,param_8,uVar2);
        *(undefined1 *)(lVar19 + 0x1cc) = 0;
        *(undefined1 *)
         (lVar19 + 0x19c +
         (longlong)(int)((uint)*(byte *)(lVar19 + 0x18c) + (*(byte *)(lVar19 + 0x18c) / 3) * -3) *
         0x10) = 0;
        bVar11 = *(char *)(lVar19 + 0x18c) + 1;
        *(byte *)(lVar19 + 0x18c) = bVar11 + bVar11 / 0xff;
        plVar26 = local_res10;
      }
    }
    if (((bVar7) && (*(int *)(*(longlong *)(param_1 + 0x38) + 0xc) == 0)) &&
       ((*(char *)(lVar19 + 0x1cc) == '\0' && (*(int *)(lVar19 + 0x16c) == 0)))) {
      uVar27 = 1;
    }
    else {
      uVar27 = 0;
    }
    if (*(char *)(lVar19 + 0x18d) != '\0') {
      uVar21 = (ulonglong)((float)(uVar21 & 0xffffffff) * 0.5 * (1.0 / fVar30));
      *(undefined8 *)(puVar22 + -8) = 0x1453c0a81;
      iVar17 = FUN_14556f5d0(piVar25,uVar21 & 0xffffffff);
      *(int *)(lVar19 + 0x188) = *(int *)(lVar19 + 0x188) + iVar17;
      if ((uint)uVar21 < *(uint *)(lVar19 + 0x188)) {
        *(undefined1 *)(lVar19 + 0x18d) = 0;
      }
    }
    uVar12 = *(ushort *)(param_4 + 2);
    uVar15 = (ulonglong)uVar12 * 4;
    uVar21 = uVar15 + 0xf;
    if (uVar21 <= uVar15) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar22 + -8) = 0x1453c0ab8;
    iVar17 = (uint)uVar12 - (int)local_100;
    lVar20 = -(uVar21 & 0xfffffffffffffff0);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    puVar1 = puVar22 + lVar20 + 0x50;
    puVar22[lVar20 + 0x20] = uVar27;
    *(undefined8 *)(puVar22 + lVar20 + -8) = 0x1453c0ad8;
    uVar13 = FUN_14556f9b0(piVar25,puVar1,uVar2,iVar17);
    lVar19 = *param_4;
    iVar17 = (int)local_100;
    uVar21 = local_100 & 0xffffffff;
    *(uint *)(puVar22 + lVar20 + 0x20) = uVar13;
    *(undefined8 *)(puVar22 + lVar20 + -8) = 0x1453c0af8;
    FUN_1453bb180(lVar19 + uVar21 * 4,puVar1,0x3f800000,0x3f800000);
    uVar12 = *(ushort *)(param_4 + 2);
    lVar19 = *param_4;
    *(uint *)(puVar22 + lVar20 + 0x20) = uVar13;
    *(undefined8 *)(puVar22 + lVar20 + -8) = 0x1453c0b1a;
    FUN_1453bb180(lVar19 + (uVar12 + uVar21) * 4,puVar1,0x3f800000,0x3f800000);
    local_e0[2] = iVar17 + (uVar13 & 0xffff);
    local_100 = CONCAT44(local_100._4_4_,local_e0[2]);
    puVar22 = puVar22 + lVar20;
    if (bVar8) {
      *(undefined2 *)((longlong)plVar26 + 0x12) = (undefined2)local_f0[0];
      *(undefined2 *)((longlong)param_4 + 0x12) = (undefined2)local_e0[0];
      *(uint *)(param_1 + 0x2c) = local_c8[0];
      *(char *)(param_1 + 0x30) = local_res18[0];
      *(char *)(param_1 + 0x31) = local_res8[0];
      return;
    }
  } while( true );
}



// FUNCTION 1453c0bb0 FUN_1453c0bb0 body=558 status=ok
// SIG undefined FUN_1453c0bb0(void)

undefined8
FUN_1453c0bb0(longlong *param_1,longlong *param_2,float param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  float fVar12;
  
  uVar9 = (ulonglong)param_4;
  fVar12 = param_3 * 0.001 * (float)param_5;
  dVar11 = 0.0;
  dVar3 = (double)fVar12;
  lVar7 = (longlong)fVar12;
  if ((lVar7 != -0x8000000000000000) && (dVar11 = (double)lVar7, dVar11 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar4 = movmskpd(0,auVar2);
    dVar3 = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
  }
  uVar10 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 3) = (int)(longlong)dVar3 + 3U & 0xfffffffc;
  lVar7 = (**(code **)(*param_2 + 8))
                    (dVar11,uVar9 * 8,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkDelayPitchShift.cpp"
                     ,0x20);
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    lVar7 = (**(code **)(*param_2 + 8))
                      (param_2,uVar9 * 0x18,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkDelayPitchShift.cpp"
                       ,0x24);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      uVar8 = uVar10;
      if (param_4 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      }
      else {
        do {
          puVar5 = (undefined8 *)(uVar8 + lVar7);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            *(undefined4 *)(puVar5 + 2) = 0;
            lVar7 = *param_1;
          }
          uVar9 = uVar9 - 1;
          uVar8 = uVar8 + 0x18;
        } while (uVar9 != 0);
        *(uint *)((longlong)param_1 + 0x14) = param_4;
        uVar9 = uVar10;
        do {
          *(undefined4 *)(param_1[1] + uVar9 * 4) = 0;
          lVar7 = param_1[3];
          if ((int)lVar7 != 0) {
            lVar1 = *param_1;
            puVar5 = (undefined8 *)
                     (**(code **)(*param_2 + 8))
                               (param_2,8,
                                "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                               );
            *(undefined8 **)(lVar1 + uVar9 * 0x18) = puVar5;
            if (puVar5 == (undefined8 *)0x0) {
              return 0x34;
            }
            *puVar5 = 0;
            uVar4 = (int)lVar7 + 3U & 0xfffffffc;
            *(undefined4 *)(lVar1 + 0x10 + uVar9 * 0x18) = 1;
            *(uint *)(lVar1 + 8 + uVar9 * 0x18) = uVar4;
            *(undefined4 *)(lVar1 + 0xc + uVar9 * 0x18) = 0;
            uVar8 = uVar10;
            if (uVar4 != 0) {
              do {
                uVar6 = (**(code **)(*param_2 + 8))
                                  (param_2,(ulonglong)*(uint *)(lVar1 + 8 + uVar9 * 0x18) << 2,
                                   "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                                   ,0x54);
                *(undefined8 *)(*(longlong *)(lVar1 + uVar9 * 0x18) + uVar8 * 8) = uVar6;
                if (*(longlong *)(*(longlong *)(lVar1 + uVar9 * 0x18) + uVar8 * 8) == 0) {
                  return 0x34;
                }
                uVar4 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar4;
              } while (uVar4 < *(uint *)(lVar1 + 0x10 + uVar9 * 0x18));
            }
          }
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)((longlong)param_1 + 0x14));
      }
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 1453c0de0 FUN_1453c0de0 body=247 status=ok
// SIG undefined FUN_1453c0de0(void)

void FUN_1453c0de0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      do {
        plVar1 = (longlong *)(*param_1 + uVar4 * 0x18);
        if (*(longlong *)(*param_1 + uVar4 * 0x18) != 0) {
          uVar3 = 0;
          if ((int)plVar1[2] != 0) {
            do {
              if (*(longlong *)(uVar3 * 8 + *plVar1) != 0) {
                (**(code **)(*param_2 + 0x10))(param_2);
                *(undefined8 *)(uVar3 * 8 + *plVar1) = 0;
              }
              uVar2 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar2;
            } while (uVar2 < *(uint *)(plVar1 + 2));
          }
          (**(code **)(*param_2 + 0x10))(param_2,*plVar1);
        }
        uVar2 = (int)uVar4 + 1;
        *(undefined4 *)(plVar1 + 1) = 0;
        *(undefined4 *)(plVar1 + 2) = 0;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)((longlong)param_1 + 0x14));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1453c0ee0 FUN_1453c0ee0 body=154 status=ok
// SIG undefined FUN_1453c0ee0(void)

void FUN_1453c0ee0(longlong *param_1)

{
  longlong *plVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  
  if ((*param_1 != 0) && (uVar3 = 0, *(int *)((longlong)param_1 + 0x14) != 0)) {
    do {
      plVar1 = (longlong *)(*param_1 + (ulonglong)uVar3 * 0x18);
      if ((*(int *)(*param_1 + 8 + (ulonglong)uVar3 * 0x18) != 0) &&
         (uVar2 = 0, (int)plVar1[2] != 0)) {
        do {
          _Dst = *(void **)(*plVar1 + (ulonglong)uVar2 * 8);
          if (_Dst != (void *)0x0) {
            memset(_Dst,0,(ulonglong)(uint)((int)plVar1[1] << 2));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(plVar1 + 2));
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0x14));
  }
  return;
}



// FUNCTION 1453c0f80 FUN_1453c0f80 body=67 status=ok
// SIG undefined FUN_1453c0f80(void)

void FUN_1453c0f80(longlong param_1,float param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (param_2 != 1.0) {
    *(float *)(param_1 + 0x10) = 1.0 - param_2;
    return;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      uVar1 = (ulonglong)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar1 * 4) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  return;
}



// FUNCTION 1453c0fd0 FUN_1453c0fd0 body=735 status=ok
// SIG undefined FUN_1453c0fd0(void)

void FUN_1453c0fd0(longlong *param_1,undefined4 *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar16 = (ulonglong)param_5;
  fVar1 = *(float *)(param_1 + 2);
  fVar23 = (float)(uVar5 >> 1);
  fVar20 = *(float *)(param_1[1] + uVar16 * 4);
  fVar21 = (float)uVar5;
  lVar7 = **(longlong **)(*param_1 + uVar16 * 0x18);
  uVar14 = *(uint *)(*param_1 + 0xc + uVar16 * 0x18);
  for (; param_4 != 0; param_4 = param_4 - uVar15) {
    uVar15 = uVar5 - uVar14;
    if (param_4 < uVar5 - uVar14) {
      uVar15 = param_4;
    }
    if (uVar15 != 0) {
      uVar12 = (ulonglong)uVar15;
      do {
        fVar20 = fVar20 + fVar1;
        auVar17._0_4_ = fVar20 + fVar23;
        if (fVar21 <= fVar20) {
          fVar20 = fVar20 - fVar21;
        }
        if (fVar21 <= auVar17._0_4_) {
          auVar17._0_4_ = auVar17._0_4_ - fVar21;
        }
        if (fVar20 < 0.0) {
          fVar20 = fVar20 + fVar21;
        }
        if (auVar17._0_4_ < 0.0) {
          auVar17._0_4_ = auVar17._0_4_ + fVar21;
        }
        fVar22 = (float)uVar14 - fVar20;
        iVar10 = (int)fVar22;
        uVar8 = uVar14;
        fVar18 = fVar22;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar22)) {
          auVar19._4_4_ = fVar22;
          auVar19._0_4_ = fVar22;
          auVar19._8_8_ = 0;
          uVar8 = movmskps(uVar14,auVar19);
          uVar8 = uVar8 & 1;
          fVar18 = (float)(int)(iVar10 - uVar8);
        }
        auVar17._0_4_ = (float)uVar14 - auVar17._0_4_;
        iVar13 = (int)fVar18;
        iVar10 = (int)auVar17._0_4_;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar17._0_4_)) {
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_8_ = 0;
          uVar8 = movmskps(uVar8,auVar17);
          auVar17._0_4_ = (float)(int)(iVar10 - (uVar8 & 1));
        }
        fVar22 = fVar22 - fVar18;
        iVar9 = (int)auVar17._0_4_;
        iVar10 = iVar13 - uVar5;
        if (iVar13 < (int)uVar5) {
          iVar10 = iVar13;
        }
        iVar13 = iVar9 - uVar5;
        if (iVar9 < (int)uVar5) {
          iVar13 = iVar9;
        }
        auVar17._0_4_ = ABS(fVar20 - fVar23) * (1.0 / fVar23);
        iVar9 = iVar10 + uVar5;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        iVar10 = iVar13 + uVar5;
        if (-1 < iVar13) {
          iVar10 = iVar13;
        }
        iVar13 = 0;
        if (iVar9 + 1 < (int)uVar5) {
          iVar13 = iVar9 + 1;
        }
        uVar11 = (ulonglong)uVar14;
        fVar18 = *(float *)(lVar7 + (longlong)iVar13 * 4);
        fVar2 = *(float *)(lVar7 + (longlong)iVar9 * 4);
        iVar13 = 0;
        if (iVar10 + 1 < (int)uVar5) {
          iVar13 = iVar10 + 1;
        }
        uVar14 = uVar14 + 1;
        fVar3 = *(float *)(lVar7 + (longlong)iVar13 * 4);
        fVar4 = *(float *)(lVar7 + (longlong)iVar10 * 4);
        uVar6 = *param_2;
        param_2 = param_2 + 1;
        *(undefined4 *)(lVar7 + uVar11 * 4) = uVar6;
        *param_3 = (fVar22 * fVar18 + (1.0 - fVar22) * fVar2) * (1.0 - auVar17._0_4_) +
                   (fVar22 * fVar3 + (1.0 - fVar22) * fVar4) * auVar17._0_4_;
        param_3 = param_3 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar8 = 0;
    if (uVar14 != uVar5) {
      uVar8 = uVar14;
    }
    uVar14 = uVar8;
  }
  *(uint *)(*param_1 + 0xc + uVar16 * 0x18) = uVar14;
  *(float *)(param_1[1] + uVar16 * 4) = fVar20;
  return;
}



// FUNCTION 1453c12b0 FUN_1453c12b0 body=1235 status=ok
// SIG undefined FUN_1453c12b0(void)

void FUN_1453c12b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_res10;
  uint local_78;
  uint local_74;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  
  uVar9 = *(uint *)(param_2 + 0xac);
  if (*(int *)((longlong)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
    goto LAB_1453c13e3;
  }
  uVar17 = *(uint *)(param_2 + 0x48);
  if (uVar17 == 0) {
    if (*(short *)((longlong)param_1 + 0x12) == 0) goto LAB_1453c13e3;
LAB_1453c12fb:
    *(uint *)(param_2 + 0x48) = uVar9;
    uVar17 = uVar9;
LAB_1453c1304:
    *(uint *)(param_2 + 0x4c) = uVar9;
  }
  else {
    if ((uVar17 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) goto LAB_1453c12fb;
    if (*(uint *)(param_2 + 0x4c) < uVar9) {
      uVar17 = (uVar17 - *(uint *)(param_2 + 0x4c)) + uVar9;
      *(uint *)(param_2 + 0x48) = uVar17;
      goto LAB_1453c1304;
    }
  }
  uVar10 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar9 = uVar17;
  if (uVar10 <= uVar17) {
    uVar9 = uVar10;
  }
  *(uint *)(param_2 + 0x48) = uVar17 - uVar9;
  uVar3 = *(ushort *)(param_1 + 2);
  uVar8 = *(ushort *)((longlong)param_1 + 0x12);
  uVar16 = (ulonglong)*(byte *)(param_1 + 1);
  if (uVar3 <= uVar8) {
    uVar8 = uVar3;
  }
  iVar11 = (uint)uVar3 - (uint)uVar8;
  if (iVar11 != 0) {
    if (*(byte *)(param_1 + 1) != 0) {
      lVar14 = 0;
      do {
        memset((void *)(*param_1 +
                       ((ulonglong)*(ushort *)(param_1 + 2) * lVar14 + (ulonglong)(uint)uVar8) * 4),
               0,(ulonglong)(uint)(iVar11 * 4));
        lVar14 = lVar14 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *(short *)((longlong)param_1 + 0x12) = (short)param_1[2];
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
  }
LAB_1453c13e3:
  uVar9 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  if (0x1f < uVar9) {
    uVar17 = *(uint *)(param_1 + 1);
    uVar10 = *(uint *)(param_2 + 0xa0);
    if ((((char)uVar10 == (char)uVar17) && (((uVar10 ^ uVar17) & 0xf00) == 0)) &&
       (((uVar10 ^ uVar17) & 0xfffff000) == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    uVar10 = 0;
    uVar16 = 0;
    local_74 = 0;
    uVar13 = 0;
    local_res10 = 0;
    local_78 = 0;
    iVar11 = 0;
    if ((char)uVar17 != '\0') {
      uVar18 = 1;
      uVar12 = uVar17;
      do {
        if (((uVar17 >> 0xc & uVar18) != 0) || (uVar17 >> 0xc == 0)) {
          if (((uVar18 & 8) == 0) || (uVar17 >> 0xc == 0)) {
            lVar14 = (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar10;
            local_74 = uVar10 + 1;
LAB_1453c14bb:
            pfVar15 = (float *)(*param_1 + lVar14 * 4);
          }
          else {
            if ((uVar12 >> 0xf & 1) != 0) {
              lVar14 = (ulonglong)((uVar12 & 0xff) - 1) * (ulonglong)*(ushort *)(param_1 + 2);
              goto LAB_1453c14bb;
            }
            pfVar15 = (float *)0x0;
          }
          if (((char)*(uint *)(param_2 + 0xa0) == '\0') ||
             (((uVar18 & *(uint *)(param_2 + 0xa0) >> 0xc) == 0 && (!bVar5)))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            FUN_1453c0fd0(param_2,pfVar15,param_3,uVar9,iVar11);
            if (*(int *)(param_2 + 0x50) != 0) {
              local_68 = param_3;
              FUN_1453bec40(&local_68,uVar9,iVar11,param_2 + 0x30,param_2 + 0x20);
            }
            uVar16 = (ulonglong)local_res10;
            iVar11 = iVar11 + 1;
          }
          if (*(char *)(param_2 + 0x75) != '\0') {
            FUN_1453be2f0(*(longlong *)(param_2 + 0x40) + (uVar16 & 0xffffffff) * 0x18,pfVar15,uVar9
                         );
            local_res10 = local_res10 + 1;
            uVar16 = (ulonglong)local_res10;
          }
          fVar22 = *(float *)(param_2 + 0x68);
          fVar21 = *(float *)(param_2 + 0x90);
          if (bVar4) {
            FUN_1453baf30(pfVar15,param_3,fVar21,fVar22,*(undefined4 *)(param_2 + 0x94),
                          *(undefined4 *)(param_2 + 0x6c),uVar9);
            uVar16 = (ulonglong)local_res10;
          }
          else if (fVar22 == fVar21) {
            FUN_1453c1790(pfVar15,fVar21,uVar9);
          }
          else {
            pfVar1 = pfVar15 + uVar9;
            if (3 < uVar9) {
              pfVar2 = pfVar15 + (uVar9 & 0xfffffffc);
              fStack_5c = (fVar22 - fVar21) / (float)(uVar9 & 0xfffffffc);
              fVar23 = fStack_5c * 4.0;
              fVar19 = fStack_5c + fVar21;
              fStack_60 = fVar19 + fStack_5c;
              fStack_5c = fStack_60 + fStack_5c;
              local_68 = CONCAT44(fVar19,fVar21);
              fVar20 = fVar21;
              fVar6 = fStack_60;
              fVar7 = fStack_5c;
              for (; pfVar15 < pfVar2; pfVar15 = pfVar15 + 4) {
                *pfVar15 = *pfVar15 * fVar20;
                pfVar15[1] = pfVar15[1] * fVar19;
                pfVar15[2] = pfVar15[2] * fVar6;
                pfVar15[3] = pfVar15[3] * fVar7;
                fVar20 = fVar20 + fVar23;
                fVar19 = fVar19 + fVar23;
                fVar6 = fVar6 + fVar23;
                fVar7 = fVar7 + fVar23;
              }
            }
            if (pfVar15 < pfVar1) {
              fVar22 = (fVar22 - fVar21) / (float)uVar9;
              if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar15) & 0xfffffffffffffffcU)) {
                do {
                  *pfVar15 = fVar21 * *pfVar15;
                  fVar20 = fVar21 + fVar22 + fVar22;
                  pfVar15[1] = (fVar21 + fVar22) * pfVar15[1];
                  fVar19 = fVar20 + fVar22;
                  pfVar15[2] = fVar20 * pfVar15[2];
                  fVar21 = fVar19 + fVar22;
                  pfVar15[3] = fVar19 * pfVar15[3];
                  pfVar15 = pfVar15 + 4;
                } while (pfVar15 < pfVar1 + -3);
                if (pfVar1 <= pfVar15) goto LAB_1453c1708;
              }
              do {
                *pfVar15 = fVar21 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                fVar21 = fVar21 + fVar22;
              } while (pfVar15 < pfVar1);
            }
          }
LAB_1453c1708:
          uVar13 = local_78 + 1;
          uVar10 = local_74;
          local_78 = uVar13;
        }
        uVar12 = *(uint *)(param_1 + 1);
        uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      } while (uVar13 < (uVar12 & 0xff));
    }
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x70);
  }
  return;
}



// FUNCTION 1453c1790 FUN_1453c1790 body=309 status=ok
// SIG undefined FUN_1453c1790(void)

void FUN_1453c1790(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453c18d0 FUN_1453c18d0 body=2326 status=ok
// SIG undefined FUN_1453c18d0(void)

void FUN_1453c18d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (param_6 == 3) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar9 = -fVar8;
      fVar11 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar9 = 1.0;
      fVar11 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar2 = fVar6 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar5 + fVar9) * fVar11;
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar5 + fVar7;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c2160;
      }
      if (param_6 == 7) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar7 = fVar4 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar2 = fVar6 * fVar2;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar8 = (fVar9 + fVar5) * fVar11;
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c2160;
      }
      if (param_6 == 2) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c2160;
      }
      if (param_6 == 8) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c2160;
      }
      if (param_6 != 1) goto LAB_1453c2160;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = cosf(param_7);
      param_9 = param_9 * 0.025;
      if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
        uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar11 = sinf(param_7);
      fVar4 = fVar4 * -2.0;
      fVar11 = fVar11 * (0.5 / param_10);
      fVar8 = fVar11 * fVar7;
      fVar11 = fVar11 / fVar7;
      fVar9 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    fVar11 = fVar11 + 1.0;
  }
LAB_1453c2160:
  fVar11 = 1.0 / fVar11;
  *param_1 = fVar11 * fVar8;
  *param_2 = fVar11 * fVar6;
  *param_3 = fVar11 * fVar9;
  *param_4 = fVar11 * fVar4;
  *param_5 = fVar11 * fVar7;
  return;
}



// FUNCTION 1453c21f0 FUN_1453c21f0 body=292 status=ok
// SIG undefined FUN_1453c21f0(void)

int FUN_1453c21f0(longlong param_1,undefined8 param_2,float *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  double dVar9;
  
  *(uint *)(param_1 + 0x50) = param_4;
  dVar9 = 0.0;
  fVar7 = (float)param_4 * *param_3;
  dVar3 = (double)fVar7;
  lVar6 = (longlong)fVar7;
  if ((lVar6 != -0x8000000000000000) && (dVar9 = (double)lVar6, dVar9 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar4 = movmskpd(param_4,auVar2);
    dVar3 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
  }
  iVar5 = FUN_1453c29b0(fVar7,SUB84(dVar3,0),dVar9,1,1);
  if (iVar5 == 1) {
    fVar7 = (float)param_4 * param_3[1];
    uVar8 = 0;
    dVar3 = (double)fVar7;
    lVar6 = (longlong)fVar7;
    if ((lVar6 != -0x8000000000000000) && (uVar8 = SUB84((double)lVar6,0), (double)lVar6 != dVar3))
    {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar4 = movmskpd(1,auVar1);
      dVar3 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
    }
    iVar5 = FUN_1453c29b0(param_1 + 0x18,uVar8,(longlong)dVar3,1,1);
  }
  FUN_145117330(param_1 + 0x30,param_2,2);
  return iVar5;
}



// FUNCTION 1453c2320 FUN_1453c2320 body=106 status=ok
// SIG undefined FUN_1453c2320(void)

void FUN_1453c2320(longlong param_1,longlong *param_2)

{
  FUN_14510dae0();
  FUN_14510dae0(param_1 + 0x18,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1453c2390 FUN_1453c2390 body=54 status=ok
// SIG undefined FUN_1453c2390(void)

void FUN_1453c2390(longlong param_1)

{
  FUN_1453c2aa0();
  FUN_1453c2aa0(param_1 + 0x18);
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x30),0,(ulonglong)*(uint *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1453c23d0 FUN_1453c23d0 body=1500 status=ok
// SIG undefined FUN_1453c23d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1453c23d0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                       longlong param_5,int *param_6,char param_7)

{
  ushort uVar1;
  longlong lVar2;
  void *pvVar3;
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
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong uVar20;
  uint uVar21;
  float *pfVar22;
  undefined1 *puVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 *local_res8;
  longlong *local_res10;
  uint local_res18;
  uint local_res20;
  undefined8 uStack_180;
  undefined1 auStack_178 [32];
  undefined8 **local_158;
  int local_150;
  float local_148;
  int local_140;
  int local_138;
  int local_130;
  uint local_128;
  uint local_124;
  float *local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  
  puVar23 = auStack_178;
  local_124 = *(uint *)((longlong)param_1 + 0x24);
  local_res18 = *(uint *)(param_1 + 1);
  local_res20 = *(uint *)(param_1 + 4);
  uVar20 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  uVar1 = *(ushort *)((longlong)param_2 + 0x12);
  pfVar34 = (float *)*param_3;
  fVar56 = *(float *)(param_4 + 4);
  fVar60 = *(float *)(param_4 + 0x10);
  uVar16 = local_res18 - *(uint *)((longlong)param_1 + 0xc);
  uVar31 = local_res20 - local_124;
  if (uVar16 < local_res20 - local_124) {
    uVar31 = uVar16;
  }
  uVar21 = (uint)uVar1;
  local_120 = *(float **)*param_1;
  fVar50 = 1.0 / (float)uVar1;
  local_110 = *(float **)param_1[3];
  local_118 = (float *)*param_2;
  local_108 = local_118 + *(ushort *)(param_2 + 2);
  pfVar29 = pfVar34 + *(ushort *)(param_3 + 2);
  fVar49 = (*(float *)(param_5 + 4) - fVar56) * fVar50;
  fVar35 = fVar49 + fVar56;
  fVar75 = fVar49 * 4.0;
  fVar39 = fVar35 + fVar49;
  fVar49 = fVar39 + fVar49;
  fVar43 = (*(float *)(param_5 + 0x10) - fVar60) * fVar50;
  fVar36 = fVar43 + fVar60;
  fVar76 = fVar43 * 4.0;
  fVar40 = fVar43 + fVar36;
  fVar43 = fVar43 + fVar40;
  fVar61 = *(float *)(param_4 + 8);
  fVar63 = *(float *)(param_4 + 0x14);
  uVar33 = 0;
  fVar44 = (*(float *)(param_5 + 8) - fVar61) * fVar50;
  fVar37 = fVar44 + fVar61;
  fVar77 = fVar44 * 4.0;
  fVar41 = fVar44 + fVar37;
  fVar44 = fVar44 + fVar41;
  fVar50 = (*(float *)(param_5 + 0x14) - fVar63) * fVar50;
  fVar78 = fVar50 * 4.0;
  fVar38 = fVar50 + fVar63;
  fVar42 = fVar50 + fVar38;
  fVar50 = fVar50 + fVar42;
  uVar16 = local_124;
  fVar55 = fVar56;
  fVar67 = fVar60;
  pfVar26 = local_120 + uVar20;
  pfVar19 = local_110 + local_124;
  pfVar28 = local_118;
  pfVar22 = local_108;
  fVar57 = fVar35;
  fVar58 = fVar39;
  fVar59 = fVar49;
  fVar68 = fVar36;
  fVar69 = fVar40;
  fVar70 = fVar43;
  fVar71 = fVar61;
  fVar62 = fVar63;
  param_5._0_4_ = (uint)uVar1;
  fVar72 = fVar37;
  fVar73 = fVar41;
  fVar74 = fVar44;
  fVar64 = fVar38;
  fVar65 = fVar42;
  fVar66 = fVar50;
  while (pfVar25 = pfVar19, (uint)param_5 != 0) {
    if ((uint)param_5 < uVar31) {
      uVar31 = (uint)param_5;
    }
    uVar18 = (ulonglong)(uVar31 >> 2);
    fVar51 = fVar56;
    fVar52 = fVar35;
    fVar53 = fVar39;
    fVar54 = fVar49;
    if (uVar31 >> 2 != 0) {
      do {
        fVar4 = *pfVar25;
        fVar5 = pfVar25[1];
        fVar6 = pfVar25[2];
        fVar7 = pfVar25[3];
        pfVar25 = pfVar25 + 4;
        fVar8 = *pfVar26;
        fVar9 = pfVar26[1];
        fVar10 = pfVar26[2];
        fVar11 = pfVar26[3];
        pfVar26 = pfVar26 + 4;
        fVar56 = fVar55 + fVar75;
        fVar35 = fVar57 + fVar75;
        fVar39 = fVar58 + fVar75;
        fVar49 = fVar59 + fVar75;
        fVar45 = fVar4 * fVar63;
        fVar46 = fVar5 * fVar38;
        fVar47 = fVar6 * fVar42;
        fVar48 = fVar7 * fVar50;
        fVar60 = fVar60 + fVar76;
        fVar36 = fVar36 + fVar76;
        fVar40 = fVar40 + fVar76;
        fVar43 = fVar43 + fVar76;
        fVar55 = *pfVar28;
        fVar57 = pfVar28[1];
        fVar58 = pfVar28[2];
        fVar59 = pfVar28[3];
        *pfVar34 = fVar8;
        pfVar34[1] = fVar9;
        pfVar34[2] = fVar10;
        pfVar34[3] = fVar11;
        pfVar34 = pfVar34 + 4;
        fVar12 = *pfVar22;
        fVar13 = pfVar22[1];
        fVar14 = pfVar22[2];
        fVar15 = pfVar22[3];
        fVar61 = fVar61 + fVar77;
        fVar37 = fVar37 + fVar77;
        fVar41 = fVar41 + fVar77;
        fVar44 = fVar44 + fVar77;
        *pfVar29 = fVar4;
        pfVar29[1] = fVar5;
        pfVar29[2] = fVar6;
        pfVar29[3] = fVar7;
        pfVar29 = pfVar29 + 4;
        fVar63 = fVar62 + fVar78;
        fVar38 = fVar64 + fVar78;
        fVar42 = fVar65 + fVar78;
        fVar50 = fVar66 + fVar78;
        *pfVar28 = fVar45 + fVar55 + fVar8 * fVar51;
        pfVar28[1] = fVar46 + fVar57 + fVar9 * fVar52;
        pfVar28[2] = fVar47 + fVar58 + fVar10 * fVar53;
        pfVar28[3] = fVar48 + fVar59 + fVar11 * fVar54;
        pfVar28 = pfVar28 + 4;
        *pfVar22 = fVar8 * fVar71 + fVar12 + fVar4 * fVar67;
        pfVar22[1] = fVar9 * fVar72 + fVar13 + fVar5 * fVar68;
        pfVar22[2] = fVar10 * fVar73 + fVar14 + fVar6 * fVar69;
        pfVar22[3] = fVar11 * fVar74 + fVar15 + fVar7 * fVar70;
        pfVar22 = pfVar22 + 4;
        uVar18 = uVar18 - 1;
        fVar51 = fVar56;
        fVar52 = fVar35;
        fVar53 = fVar39;
        fVar54 = fVar49;
        fVar55 = fVar56;
        fVar57 = fVar35;
        fVar58 = fVar39;
        fVar59 = fVar49;
        fVar62 = fVar63;
        fVar64 = fVar38;
        fVar65 = fVar42;
        fVar66 = fVar50;
        fVar67 = fVar60;
        fVar68 = fVar36;
        fVar69 = fVar40;
        fVar70 = fVar43;
        fVar71 = fVar61;
        fVar72 = fVar37;
        fVar73 = fVar41;
        fVar74 = fVar44;
      } while (uVar18 != 0);
    }
    uVar30 = (int)uVar20 + uVar31;
    uVar27 = uVar16 + uVar31;
    uVar20 = uVar33;
    if (uVar30 != local_res18) {
      uVar20 = (ulonglong)uVar30;
    }
    uVar16 = 0;
    if (uVar27 != local_res20) {
      uVar16 = uVar27;
    }
    uVar17 = local_res18 - (int)uVar20;
    param_5._0_4_ = (uint)param_5 - uVar31;
    uVar31 = local_res20 - uVar16;
    if (uVar17 < local_res20 - uVar16) {
      uVar31 = uVar17;
    }
    pfVar19 = local_120;
    if (uVar30 != local_res18) {
      pfVar19 = pfVar26;
    }
    pfVar26 = pfVar19;
    pfVar19 = local_110;
    if (uVar27 != local_res20) {
      pfVar19 = pfVar25;
    }
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_128 = uVar21;
  if (*param_6 != 0) {
    if (param_7 != '\0') {
      local_130 = param_6[3];
      local_138 = param_6[1];
      local_140 = param_6[2];
      local_148 = (float)*(uint *)(param_1 + 10);
      local_150 = *param_6 + -1;
      local_158 = &local_res8;
      uStack_180 = 0x1453c27e1;
      FUN_1453c18d0(&local_120,&local_124,&param_6,&param_5);
      local_150 = (int)local_res8;
      local_158 = (undefined8 **)CONCAT44(local_158._4_4_,(uint)param_5);
      uStack_180 = 0x1453c2818;
      FUN_14510b8c0(param_1 + 8,local_120._0_4_,local_124,param_6._0_4_);
    }
    pfVar34 = local_118;
    uVar1 = *(ushort *)(local_res10 + 2);
    uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c) * 8;
    uVar20 = uVar18 + 0xf;
    if (uVar20 <= uVar18) {
      uVar20 = 0xffffffffffffff0;
    }
    uStack_180 = 0x1453c2851;
    lVar2 = -(uVar20 & 0xfffffffffffffff0);
    puVar23 = auStack_178 + lVar2;
    if (*(uint *)((longlong)param_1 + 0x3c) != 0) {
      do {
        *(float **)((longlong)&local_128 + lVar2 + uVar33 * 8) = pfVar34 + (int)uVar33 * (uint)uVar1
        ;
        uVar31 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar31;
      } while (uVar31 < *(uint *)((longlong)param_1 + 0x3c));
    }
    uVar21 = local_128;
    *(undefined8 *)(auStack_178 + lVar2 + -8) = 0x1453c2887;
    FUN_14510c5e0((longlong)&local_128 + lVar2,uVar21,param_1 + 8);
  }
  pfVar34 = local_118;
  uVar30 = local_res20;
  uVar27 = local_res18;
  uVar31 = *(uint *)((longlong)param_1 + 0xc);
  uVar16 = *(uint *)((longlong)param_1 + 0x24);
  uVar32 = local_res18 - uVar31;
  local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,uVar31);
  lVar2 = *(longlong *)*param_1;
  uVar24 = local_res20 - uVar16;
  uVar17 = uVar32;
  if (uVar21 < uVar32) {
    uVar17 = uVar21;
  }
  *(undefined8 *)(puVar23 + -8) = 0x1453c28d6;
  memcpy((void *)(lVar2 + (ulonglong)uVar31 * 4),pfVar34,(ulonglong)(uVar17 << 2));
  if (uVar32 < uVar21) {
    pfVar34 = local_118 + uVar32;
    pvVar3 = *(void **)*param_1;
    *(undefined8 *)(puVar23 + -8) = 0x1453c28f8;
    memcpy(pvVar3,pfVar34,(ulonglong)((uVar21 - uVar32) * 4));
  }
  pfVar34 = local_108;
  uVar31 = uVar24;
  if (uVar21 < uVar24) {
    uVar31 = uVar21;
  }
  lVar2 = *(longlong *)param_1[3];
  *(undefined8 *)(puVar23 + -8) = 0x1453c291c;
  memcpy((void *)(lVar2 + (ulonglong)uVar16 * 4),pfVar34,(ulonglong)(uVar31 << 2));
  if (uVar24 < uVar21) {
    pvVar3 = *(void **)param_1[3];
    *(undefined8 *)(puVar23 + -8) = 0x1453c293a;
    memcpy(pvVar3,pfVar34 + uVar24,(ulonglong)((uVar21 - uVar24) * 4));
  }
  *(uint *)((longlong)param_1 + 0xc) = ((int)local_res8 + uVar21) % uVar27;
  *(uint *)((longlong)param_1 + 0x24) = (uVar21 + uVar16) % uVar30;
  return (ulonglong)(uVar21 + uVar16) / (ulonglong)uVar30;
}



// FUNCTION 1453c29b0 FUN_1453c29b0 body=228 status=ok
// SIG undefined FUN_1453c29b0(void)

undefined8 FUN_1453c29b0(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))
                           (param_2,(ulonglong)param_4 << 3,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                            ,0x3f);
  *param_1 = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
LAB_1453c2a74:
    uVar1 = 0x34;
  }
  else {
    memset(_Dst,0,(ulonglong)(param_4 * 8));
    *(uint *)(param_1 + 2) = param_4;
    if (param_5 != '\0') {
      param_3 = param_3 + 3 & 0xfffffffc;
    }
    uVar3 = 0;
    *(uint *)(param_1 + 1) = param_3;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if ((param_3 != 0) && (param_4 != 0)) {
      do {
        uVar1 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)*(uint *)(param_1 + 1) << 2,
                           "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                           ,0x54);
        *(undefined8 *)(uVar3 * 8 + *param_1) = uVar1;
        if (*(longlong *)(uVar3 * 8 + *param_1) == 0) goto LAB_1453c2a74;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 2));
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1453c2aa0 FUN_1453c2aa0 body=111 status=ok
// SIG undefined FUN_1453c2aa0(void)

void FUN_1453c2aa0(longlong *param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  
  if ((int)param_1[1] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  uVar2 = 0;
  if ((int)param_1[2] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  do {
    _Dst = *(void **)(*param_1 + uVar2 * 8);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)(uint)((int)param_1[1] << 2));
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 2));
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1453c2b10 FUN_1453c2b10 body=1899 status=ok
// SIG undefined FUN_1453c2b10(void)

void FUN_1453c2b10(longlong *param_1,longlong param_2,void *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  void *pvVar11;
  void *_Src;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  size_t _Size;
  uint uVar16;
  ushort *puVar17;
  longlong lVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 in_stack_ffffffffffffff48;
  uint uVar28;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ushort local_88;
  ushort local_86;
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ushort local_70;
  ushort local_6e;
  
  lVar18 = 0;
  uVar16 = *(uint *)(param_2 + 400);
  if (*(int *)((longlong)param_1 + 0xc) == 0x11) {
    uVar15 = *(uint *)(param_2 + 0x188);
    if (uVar15 == 0) {
      if (*(short *)((longlong)param_1 + 0x12) == 0) goto LAB_1453c2c6b;
LAB_1453c2b6c:
      *(uint *)(param_2 + 0x188) = uVar16;
      uVar15 = uVar16;
LAB_1453c2b78:
      *(uint *)(param_2 + 0x18c) = uVar16;
    }
    else {
      if ((uVar15 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) goto LAB_1453c2b6c;
      if (*(uint *)(param_2 + 0x18c) < uVar16) {
        uVar15 = uVar15 + (uVar16 - *(uint *)(param_2 + 0x18c));
        *(uint *)(param_2 + 0x188) = uVar15;
        goto LAB_1453c2b78;
      }
    }
    uVar8 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
    uVar16 = uVar15;
    if (uVar8 <= uVar15) {
      uVar16 = uVar8;
    }
    *(uint *)(param_2 + 0x188) = uVar15 - uVar16;
    uVar1 = *(ushort *)(param_1 + 2);
    uVar7 = *(ushort *)((longlong)param_1 + 0x12);
    uVar14 = (ulonglong)*(byte *)(param_1 + 1);
    if (uVar1 <= uVar7) {
      uVar7 = uVar1;
    }
    iVar9 = (uint)uVar1 - (uint)uVar7;
    if (iVar9 != 0) {
      if (*(byte *)(param_1 + 1) != 0) {
        lVar13 = lVar18;
        do {
          memset((void *)(*param_1 +
                         ((ulonglong)*(ushort *)(param_1 + 2) * lVar13 + (ulonglong)(uint)uVar7) * 4
                         ),0,(ulonglong)(uint)(iVar9 * 4));
          lVar13 = lVar13 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      *(short *)((longlong)param_1 + 0x12) = (short)param_1[2];
    }
    if (*(int *)(param_2 + 0x188) != 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x188) = 0xffffffff;
  }
LAB_1453c2c6b:
  local_88 = *(ushort *)((longlong)param_1 + 0x12);
  uVar16 = (uint)local_88;
  if (uVar16 < 0x20) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 1) >> 0xc;
  if (uVar15 == 8) {
    return;
  }
  local_98 = (void *)((longlong)param_3 + (ulonglong)((uint)local_88 + (uint)local_88) * 4);
  uVar8 = uVar15 & 0xffff7;
  iVar9 = *(int *)(param_2 + 0x120);
  uVar12 = uVar8 << 0xc;
  uVar15 = *(uint *)(param_1 + 1) - (uVar15 - uVar8 >> 3) & 0xff;
  local_74 = 0x2b;
  local_78 = 0x3102;
  local_8c = 0x2b;
  local_90 = 0x3102;
  local_86 = local_88;
  local_80 = param_3;
  local_70 = local_88;
  local_6e = local_88;
  if (iVar9 == 0) {
LAB_1453c2db0:
    pvVar11 = (void *)*param_1;
LAB_1453c2db3:
    memcpy(param_3,pvVar11,(ulonglong)((uint)local_88 * 4));
  }
  else {
    if (iVar9 == 1) {
      if (((uVar12 & 0x1000) != 0) && ((uVar12 & 0x4000) != 0)) {
        lVar18 = 8;
      }
      pvVar11 = (void *)((ulonglong)*(ushort *)(param_1 + 2) * lVar18 + *param_1);
      goto LAB_1453c2db3;
    }
    if (iVar9 == 2) {
      if (((uVar12 & 0x1000) == 0) || ((uVar12 & 0x4000) == 0)) goto LAB_1453c2db0;
      in_stack_ffffffffffffff48 = 0x3f34fdf4;
      FUN_1453bac80(*param_1,*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,param_3,0x3f34fdf4,
                    0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,uVar16);
    }
    else if (iVar9 == 3) {
      memset(param_3,0,(ulonglong)((uint)local_88 * 4));
    }
  }
  iVar9 = *(int *)(param_2 + 0x124);
  pvVar11 = (void *)((longlong)local_80 + (ulonglong)local_70 * 4);
  if (iVar9 == 0) {
    _Src = (void *)*param_1;
    _Size = (size_t)(uVar16 * 4);
    if ((uVar12 & 0x2000) != 0) {
      _Src = (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4);
    }
  }
  else if (iVar9 == 1) {
    if ((uVar12 & 0x6000) == 0x6000) {
      uVar14 = 2;
    }
    else {
      uVar14 = (ulonglong)(uVar15 - 1);
      if (1 < uVar15 - 1) {
        uVar14 = 1;
      }
    }
    _Size = (size_t)(uVar16 * 4);
    _Src = (void *)(*param_1 + *(ushort *)(param_1 + 2) * uVar14 * 4);
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 3) {
        memset(pvVar11,0,(ulonglong)(uVar16 * 4));
      }
      goto LAB_1453c2ecb;
    }
    _Src = (void *)*param_1;
    if (((byte)uVar8 & 6) == 6) {
      in_stack_ffffffffffffff48 = 0x3f34fdf4;
      FUN_1453bac80((void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4),
                    (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 8),pvVar11,
                    0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,uVar16);
      goto LAB_1453c2ecb;
    }
    _Size = (size_t)(uVar16 * 4);
    if ((uVar12 & 0x2000) != 0) {
      _Src = (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4);
    }
  }
  memcpy(pvVar11,_Src,_Size);
LAB_1453c2ecb:
  lVar18 = param_2 + 0x128;
  uVar28 = CONCAT31((int3)((uint)in_stack_ffffffffffffff48 >> 8),*(undefined1 *)(param_2 + 0x19c));
  lVar13 = param_2 + 0x108;
  auVar19._0_8_ = FUN_1453c23d0(param_2,&local_80,&local_98,param_2 + 0x148,lVar13,lVar18,uVar28);
  uVar25 = (undefined4)((ulonglong)lVar13 >> 0x20);
  uVar27 = (undefined4)((ulonglong)lVar18 >> 0x20);
  auVar19._8_8_ = extraout_XMM0_Qb;
  fVar21 = 1.0;
  fVar22 = 1.0;
  fVar23 = 1.0;
  fVar20 = 1.0;
  if ((uVar12 & 0x210000) != 0) {
    dVar5 = (double)*(float *)(param_2 + 0x140) * 0.005 + 0.5;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = ABS(dVar5);
    auVar19 = sqrtpd(auVar19,auVar3);
    fVar22 = (float)auVar19._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = 1.0 - ABS(dVar5);
    auVar19 = sqrtpd(auVar19,auVar2);
    fVar21 = (float)auVar19._0_8_;
    dVar5 = (double)*(float *)(param_2 + 0x180) * 0.005 + 0.5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ABS(dVar5);
    auVar19 = sqrtpd(auVar19,auVar4);
    fVar20 = (float)auVar19._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 1.0 - ABS(dVar5);
    auVar19 = sqrtpd(auVar19,auVar6);
    fVar23 = (float)auVar19._0_8_;
  }
  pvVar11 = (void *)((longlong)local_98 + (ulonglong)local_88 * 4);
  if (uVar8 == 4) {
    uVar28 = *(uint *)(param_2 + 0x13c);
    uVar26 = CONCAT44(uVar27,*(undefined4 *)(param_2 + 0x17c));
    uVar24 = CONCAT44(uVar25,*(undefined4 *)(param_2 + 0x138));
    FUN_1453c8200(*param_1,local_98,pvVar11,*(undefined4 *)(param_2 + 0x178),uVar24,uVar26,uVar28,
                  *(undefined4 *)(param_2 + 0x17c),uVar28,uVar16);
    uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
  }
  else if ((uVar12 & 0x1000) != 0) {
    uVar26 = CONCAT44(uVar27,fVar23 * *(float *)(param_2 + 0x13c));
    uVar24 = CONCAT44(uVar25,fVar21 * *(float *)(param_2 + 0x17c));
    FUN_1453baf30(*param_1,local_98,*(undefined4 *)(param_2 + 0x178),
                  *(undefined4 *)(param_2 + 0x138),uVar24,uVar26,uVar16);
    uVar26 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),fVar23 * *(float *)(param_2 + 0x13c));
    uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),fVar21 * *(float *)(param_2 + 0x17c));
    uVar28 = uVar16;
    FUN_1453baf30(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 4,pvVar11,
                  *(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),uVar24,uVar26,
                  uVar16);
    uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
  }
  if ((uVar12 & 0x210000) != 0) {
    bVar10 = (byte)(uVar8 >> 2);
    FUN_1453c3520(&local_80,&local_98,param_1,param_2,CONCAT44(uVar25,fVar22),
                  CONCAT44(uVar27,fVar20),CONCAT31((int3)(uVar28 >> 8),bVar10) & 0xffffff01 | 2,1);
    if ((uVar12 & 0x210000) == 0x210000) {
      FUN_1453c3520(&local_80,&local_98,param_1,param_2,fVar22,fVar20,(bVar10 & 1 | 2) + 2,2);
    }
  }
  if (((uVar12 & 0x4000) != 0) && (uVar8 != 4)) {
    FUN_1453c33c0(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,
                  *(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),uVar16);
  }
  puVar17 = (ushort *)(param_1 + 2);
  if (((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) &&
     (lVar18 = *param_1 + (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) * (ulonglong)*puVar17 * 4
     , lVar18 != 0)) {
    FUN_1453c33c0(lVar18,*(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),uVar16);
  }
  bVar10 = 0;
  uVar8 = (uVar12 & 0xff9c0000) >> 0xc;
  if (uVar8 != 0) {
    do {
      bVar10 = bVar10 + 1;
      uVar8 = uVar8 & uVar8 - 1;
    } while (uVar8 != 0);
    puVar17 = (ushort *)(param_1 + 2);
  }
  if (bVar10 != 0) {
    for (uVar8 = uVar15 - bVar10; (int)uVar8 < (int)uVar15; uVar8 = uVar8 + 1) {
      FUN_1453c33c0(*param_1 + (ulonglong)uVar8 * (ulonglong)*puVar17 * 4,
                    *(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),uVar16);
    }
  }
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x140);
  return;
}



// FUNCTION 1453c3280 FUN_1453c3280 body=309 status=ok
// SIG undefined FUN_1453c3280(void)

void FUN_1453c3280(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453c33c0 FUN_1453c33c0 body=350 status=ok
// SIG undefined FUN_1453c33c0(void)

void FUN_1453c33c0(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 == param_2) {
    FUN_1453c3280(param_1,param_1,param_4);
    return;
  }
  pfVar1 = param_1 + param_4;
  if (3 < param_4) {
    pfVar2 = param_1 + (param_4 & 0xfffffffc);
    fVar5 = (param_3 - param_2) / (float)(param_4 & 0xfffffffc);
    fVar7 = fVar5 * 4.0;
    fVar4 = fVar5 + param_2 + fVar5;
    fVar6 = fVar5 + param_2;
    fVar5 = fVar4 + fVar5;
    fVar3 = param_2;
    for (; param_1 < pfVar2; param_1 = param_1 + 4) {
      *param_1 = *param_1 * fVar3;
      param_1[1] = param_1[1] * fVar6;
      param_1[2] = param_1[2] * fVar4;
      param_1[3] = param_1[3] * fVar5;
      fVar6 = fVar6 + fVar7;
      fVar4 = fVar4 + fVar7;
      fVar5 = fVar5 + fVar7;
      fVar3 = fVar3 + fVar7;
    }
  }
  if (param_1 < pfVar1) {
    fVar6 = (param_3 - param_2) / (float)param_4;
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        *param_1 = param_2 * *param_1;
        fVar4 = param_2 + fVar6 + fVar6;
        param_1[1] = (param_2 + fVar6) * param_1[1];
        fVar5 = fVar4 + fVar6;
        param_1[2] = fVar4 * param_1[2];
        param_2 = fVar5 + fVar6;
        param_1[3] = fVar5 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1 + -3);
      if (pfVar1 <= param_1) {
        return;
      }
    }
    do {
      *param_1 = param_2 * *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + fVar6;
    } while (param_1 < pfVar1);
  }
  return;
}



// FUNCTION 1453c3520 FUN_1453c3520 body=550 status=ok
// SIG undefined FUN_1453c3520(void)

void FUN_1453c3520(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  float param_5,float param_6,byte param_7,byte param_8)

{
  void *_Dst;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *_Dst_00;
  longlong lVar4;
  
  _Dst_00 = (void *)*param_1;
  lVar4 = *param_2;
  iVar3 = *(int *)(param_4 + 0x120);
  uVar1 = *(ushort *)((longlong)param_3 + 0x12);
  _Dst = (void *)((longlong)_Dst_00 + (ulonglong)*(ushort *)(param_1 + 2) * 4);
  uVar2 = *(ushort *)(param_2 + 2);
  if (iVar3 == 0) {
LAB_1453c35b6:
    memcpy(_Dst_00,(void *)(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)param_7 * 4)
           ,(ulonglong)((uint)uVar1 * 4));
  }
  else if (iVar3 == 1) {
LAB_1453c35a2:
    memset(_Dst_00,0,(ulonglong)((uint)uVar1 * 4));
  }
  else {
    if (iVar3 == 2) goto LAB_1453c35b6;
    if (iVar3 == 3) goto LAB_1453c35a2;
  }
  iVar3 = *(int *)(param_4 + 0x124);
  if (iVar3 == 0) {
LAB_1453c3602:
    memcpy(_Dst,(void *)(*param_3 +
                        (ulonglong)(param_7 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4),
           (ulonglong)((uint)uVar1 * 4));
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) goto LAB_1453c3602;
      if (iVar3 != 3) goto LAB_1453c3624;
    }
    memset(_Dst,0,(ulonglong)((uint)uVar1 * 4));
  }
LAB_1453c3624:
  FUN_1453c23d0((ulonglong)param_8 * 0x58 + param_4,param_1,param_2,param_4 + 0x148,param_4 + 0x108,
                param_4 + 0x128,*(undefined1 *)(param_4 + 0x19c));
  FUN_1453baf30(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)param_7 * 4,lVar4,
                *(undefined4 *)(param_4 + 0x178),*(undefined4 *)(param_4 + 0x138),
                param_6 * *(float *)(param_4 + 0x17c),param_5 * *(float *)(param_4 + 0x13c),uVar1);
  FUN_1453baf30(*param_3 + (ulonglong)(param_7 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4,
                (ulonglong)uVar2 * 4 + lVar4,*(undefined4 *)(param_4 + 0x178),
                *(undefined4 *)(param_4 + 0x138));
  return;
}



// FUNCTION 1453c3750 FUN_1453c3750 body=2326 status=ok
// SIG undefined FUN_1453c3750(void)

void FUN_1453c3750(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (param_6 == 3) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar9 = -fVar8;
      fVar11 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar9 = 1.0;
      fVar11 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar2 = fVar6 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar5 + fVar9) * fVar11;
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar5 + fVar7;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c3fe0;
      }
      if (param_6 == 7) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar7 = fVar4 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar2 = fVar6 * fVar2;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar8 = (fVar9 + fVar5) * fVar11;
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c3fe0;
      }
      if (param_6 == 2) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c3fe0;
      }
      if (param_6 == 8) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1453c3fe0;
      }
      if (param_6 != 1) goto LAB_1453c3fe0;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = cosf(param_7);
      param_9 = param_9 * 0.025;
      if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
        uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar11 = sinf(param_7);
      fVar4 = fVar4 * -2.0;
      fVar11 = fVar11 * (0.5 / param_10);
      fVar8 = fVar11 * fVar7;
      fVar11 = fVar11 / fVar7;
      fVar9 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    fVar11 = fVar11 + 1.0;
  }
LAB_1453c3fe0:
  fVar11 = 1.0 / fVar11;
  *param_1 = fVar11 * fVar8;
  *param_2 = fVar11 * fVar6;
  *param_3 = fVar11 * fVar9;
  *param_4 = fVar11 * fVar4;
  *param_5 = fVar11 * fVar7;
  return;
}



// FUNCTION 1453c4070 FUN_1453c4070 body=19 status=ok
// SIG undefined FUN_1453c4070(void)

undefined8 * FUN_1453c4070(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1453c4090 FUN_1453c4090 body=498 status=ok
// SIG undefined FUN_1453c4090(void)

undefined8 FUN_1453c4090(longlong *param_1,longlong *param_2,ushort param_3,ushort param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  *(ushort *)((longlong)param_1 + 0xc) = param_4;
  *(ushort *)((longlong)param_1 + 0xe) = param_3;
  if (param_4 != 0) {
    uVar7 = (uint)param_4;
    lVar4 = (**(code **)(*param_2 + 8))
                      (param_2,(ulonglong)param_4 << 5,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkMultiBandEQ.cpp"
                      );
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar11 = (ulonglong)uVar7;
      uVar6 = uVar9;
      do {
        puVar1 = (undefined8 *)(lVar4 + uVar6);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          lVar4 = *param_1;
        }
        uVar6 = uVar6 + 0x20;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar10 = (uint)param_3;
      iVar5 = ((uVar10 & 1) + ((param_3 >> 1 & 1) + (uint)(param_3 >> 2)) * 4) * 0x10;
      uVar6 = uVar9;
      do {
        plVar8 = (longlong *)(*param_1 + uVar6);
        if (*plVar8 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *plVar8 = 0;
          *(undefined4 *)(plVar8 + 1) = 0;
        }
        *(int *)(plVar8 + 1) = iVar5;
        *(uint *)((longlong)plVar8 + 0xc) = uVar10;
        _Dst = (void *)(**(code **)(*param_2 + 0x18))
                                 (param_2,iVar5,0x10,
                                  "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                                  ,0x39e);
        *plVar8 = (longlong)_Dst;
        if (_Dst == (void *)0x0) {
LAB_1453c4223:
          if (*plVar8 != 0) {
            (**(code **)(*param_2 + 0x10))(param_2);
            *plVar8 = 0;
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          if (plVar8[2] == 0) {
            return 0x34;
          }
          (**(code **)(*param_2 + 0x10))(param_2);
          plVar8[2] = 0;
          *(undefined4 *)(plVar8 + 3) = 0;
          return 0x34;
        }
        memset(_Dst,0,(ulonglong)*(uint *)(plVar8 + 1));
        if ((param_3 & 1) == 0) {
          uVar2 = *(uint *)((longlong)plVar8 + 0x1c) & 0xfffffffe;
        }
        else {
          uVar2 = *(uint *)((longlong)plVar8 + 0x1c) | 1;
        }
        if ((param_3 & 2) == 0) {
          uVar2 = uVar2 & 0xfffffffd;
        }
        else {
          uVar2 = uVar2 | 2;
        }
        *(uint *)((longlong)plVar8 + 0x1c) = uVar2;
        if (uVar10 < 4) {
          uVar2 = uVar2 & 0xfffffffb;
        }
        else {
          uVar2 = uVar2 | 4;
        }
        *(uint *)((longlong)plVar8 + 0x1c) = uVar2;
        iVar3 = FUN_14510b800(plVar8 + 2,param_2);
        if (iVar3 != 1) goto LAB_1453c4223;
        uVar2 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar2;
        uVar6 = uVar6 + 0x20;
      } while (uVar2 < uVar7);
    }
  }
  return 1;
}



// FUNCTION 1453c4290 FUN_1453c4290 body=157 status=ok
// SIG undefined FUN_1453c4290(void)

void FUN_1453c4290(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    if (*(short *)((longlong)param_1 + 0xc) != 0) {
      do {
        plVar1 = (longlong *)(uVar2 * 0x20 + *param_1);
        if (*plVar1 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *plVar1 = 0;
          *(undefined4 *)(plVar1 + 1) = 0;
        }
        if (plVar1[2] != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          plVar1[2] = 0;
          *(undefined4 *)(plVar1 + 3) = 0;
        }
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *(ushort *)((longlong)param_1 + 0xc));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1453c4330 FUN_1453c4330 body=81 status=ok
// SIG undefined FUN_1453c4330(void)

void FUN_1453c4330(longlong *param_1)

{
  void *_Dst;
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(short *)((longlong)param_1 + 0xc) != 0) {
    do {
      puVar1 = (undefined8 *)(uVar3 * 0x20 + *param_1);
      _Dst = (void *)*puVar1;
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,(ulonglong)*(uint *)(puVar1 + 1));
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(ushort *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 1453c4390 FUN_1453c4390 body=197 status=ok
// SIG undefined FUN_1453c4390(void)

void FUN_1453c4390(longlong *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  FUN_1453c3750(local_14,&local_18,local_res8,local_res18,local_res10,param_4,(float)param_3,param_5
                ,param_6,param_7);
  FUN_14510b8c0((ulonglong)param_2 * 0x20 + *param_1 + 0x10,local_14[0],local_18,local_res8[0]);
  return;
}



// FUNCTION 1453c4460 FUN_1453c4460 body=37 status=ok
// SIG undefined FUN_1453c4460(void)

void FUN_1453c4460(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar1;
    return;
  }
  *(uint *)(param_1 + 8) = ~uVar1 & *(uint *)(param_1 + 8);
  return;
}



// FUNCTION 1453c4490 FUN_1453c4490 body=102 status=ok
// SIG undefined FUN_1453c4490(void)

void FUN_1453c4490(longlong *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
  uVar2 = 0;
  if (*(short *)((longlong)param_1 + 0xc) != 0) {
    do {
      if ((*(uint *)(param_1 + 1) >> (uVar2 & 0x1f) & 1) != 0) {
        FUN_14510c150((ulonglong)uVar2 * 0x20 + *param_1,*param_2,uVar1,*(undefined2 *)(param_2 + 2)
                     );
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 1453c4500 FUN_1453c4500 body=20 status=ok
// SIG undefined FUN_1453c4500(void)

undefined8 * FUN_1453c4500(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1453c4520 FUN_1453c4520 body=120 status=ok
// SIG undefined FUN_1453c4520(void)

void FUN_1453c4520(undefined4 *param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  char param_5)

{
  float fVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  fVar1 = powf(25.0,param_3 * 0.01);
  param_1[5] = param_4;
  fVar1 = fVar1 * 4.0 - 3.0;
  param_1[3] = fVar1;
  if (param_5 != '\0') {
    param_1[2] = param_3;
    param_1[4] = fVar1;
    param_1[6] = param_4;
  }
  return;
}



// FUNCTION 1453c45a0 FUN_1453c45a0 body=368 status=ok
// SIG undefined FUN_1453c45a0(void)

void FUN_1453c45a0(int *param_1,longlong *param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        FUN_1453c4710(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 2) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        FUN_1453c4b80(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 3) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        FUN_1453c50d0(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 4) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        FUN_1453c5830(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}



// FUNCTION 1453c4710 FUN_1453c4710 body=1129 status=ok
// SIG undefined FUN_1453c4710(void)

void FUN_1453c4710(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = (*(float *)(param_1 + 0x18) * 0.003333333 + 0.6666666) * *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 4) * -0.01;
  fVar10 = ((*(float *)(param_1 + 0x14) * 0.003333333 + 0.6666666) * *(float *)(param_1 + 0xc) -
           fVar6) * (1.0 / (float)param_3);
  if ((fVar3 < -37.0) || (37.0 < fVar3)) {
    fVar3 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar4 = *(float *)(param_1 + 8) * -0.01;
  if ((fVar4 < -37.0) || (37.0 < fVar4)) {
    fVar4 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  pfVar1 = param_2 + param_3;
  fVar3 = (fVar3 - fVar4) * (1.0 / (float)param_3);
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar7 = ABS(fVar6 * *param_2);
        if (fVar7 <= 0.6666666) {
          fVar5 = 2.0 - fVar7 * 3.0;
          fVar5 = (3.0 - fVar5 * fVar5) * 0.3333333;
          if (fVar7 <= 0.3333333) {
            fVar5 = fVar7 + fVar7;
          }
        }
        else {
          fVar5 = 1.0;
        }
        if (fVar6 * *param_2 <= 0.0) {
          fVar5 = -fVar5;
        }
        fVar8 = (fVar6 + fVar10) * param_2[1];
        *param_2 = fVar5 * fVar4;
        fVar6 = fVar6 + fVar10 + fVar10;
        fVar7 = ABS(fVar8);
        if (fVar7 <= 0.6666666) {
          fVar5 = 2.0 - fVar7 * 3.0;
          fVar5 = (3.0 - fVar5 * fVar5) * 0.3333333;
          if (fVar7 <= 0.3333333) {
            fVar5 = fVar7 + fVar7;
          }
        }
        else {
          fVar5 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar5 = -fVar5;
        }
        fVar8 = fVar6 * param_2[2];
        fVar7 = fVar4 + fVar3 + fVar3;
        param_2[1] = fVar5 * (fVar4 + fVar3);
        fVar6 = fVar6 + fVar10;
        fVar4 = ABS(fVar8);
        if (fVar4 <= 0.6666666) {
          fVar5 = 2.0 - fVar4 * 3.0;
          fVar5 = (3.0 - fVar5 * fVar5) * 0.3333333;
          if (fVar4 <= 0.3333333) {
            fVar5 = fVar4 + fVar4;
          }
        }
        else {
          fVar5 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar5 = -fVar5;
        }
        fVar9 = fVar6 * param_2[3];
        fVar8 = fVar7 + fVar3;
        param_2[2] = fVar5 * fVar7;
        fVar6 = fVar6 + fVar10;
        fVar4 = ABS(fVar9);
        if (fVar4 <= 0.6666666) {
          fVar7 = 2.0 - fVar4 * 3.0;
          fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
          if (fVar4 <= 0.3333333) {
            fVar7 = fVar4 + fVar4;
          }
        }
        else {
          fVar7 = 1.0;
        }
        if (fVar9 <= 0.0) {
          fVar7 = -fVar7;
        }
        fVar4 = fVar8 + fVar3;
        param_2[3] = fVar7 * fVar8;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      fVar7 = ABS(fVar6 * *param_2);
      if (fVar7 <= 0.6666666) {
        fVar5 = 2.0 - fVar7 * 3.0;
        fVar5 = (3.0 - fVar5 * fVar5) * 0.3333333;
        if (fVar7 <= 0.3333333) {
          fVar5 = fVar7 + fVar7;
        }
      }
      else {
        fVar5 = 1.0;
      }
      if (fVar6 * *param_2 <= 0.0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * fVar4;
      fVar4 = fVar4 + fVar3;
      *param_2 = fVar5;
      param_2 = param_2 + 1;
      fVar6 = fVar6 + fVar10;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 1453c4b80 FUN_1453c4b80 body=1351 status=ok
// SIG undefined FUN_1453c4b80(void)

void FUN_1453c4b80(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 4) * -0.01;
  fVar10 = (*(float *)(param_1 + 0xc) - fVar6) * (1.0 / (float)param_3);
  if ((fVar3 < -37.0) || (37.0 < fVar3)) {
    fVar3 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar4 = *(float *)(param_1 + 8) * -0.01;
  if ((fVar4 < -37.0) || (37.0 < fVar4)) {
    fVar4 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  pfVar1 = param_2 + param_3;
  fVar3 = (fVar3 - fVar4) * (1.0 / (float)param_3);
  if (param_2 < pfVar1) {
    if ((ulonglong)param_3 < 4) goto LAB_1453c4fe0;
    do {
      fVar7 = ABS(fVar6 * *param_2);
      if (fVar7 <= 37.0) {
        uVar2 = (uint)(longlong)(1.0653532e+09 - fVar7 * 12102203.0);
        fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      else {
        fVar7 = 0.0;
      }
      fVar5 = 1.0 - fVar7;
      if (-0.0 <= fVar6 * *param_2) {
        fVar5 = fVar7 - 1.0;
      }
      fVar8 = (fVar6 + fVar10) * param_2[1];
      *param_2 = fVar5 * fVar4;
      fVar6 = fVar6 + fVar10 + fVar10;
      fVar7 = ABS(fVar8);
      if (fVar7 <= 37.0) {
        uVar2 = (uint)(longlong)(1.0653532e+09 - fVar7 * 12102203.0);
        fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      else {
        fVar7 = 0.0;
      }
      fVar5 = 1.0 - fVar7;
      if (-0.0 <= fVar8) {
        fVar5 = fVar7 - 1.0;
      }
      fVar8 = fVar6 * param_2[2];
      fVar7 = fVar4 + fVar3 + fVar3;
      param_2[1] = fVar5 * (fVar4 + fVar3);
      fVar6 = fVar6 + fVar10;
      fVar4 = ABS(fVar8);
      if (fVar4 <= 37.0) {
        uVar2 = (uint)(longlong)(1.0653532e+09 - fVar4 * 12102203.0);
        fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      else {
        fVar4 = 0.0;
      }
      fVar5 = 1.0 - fVar4;
      if (-0.0 <= fVar8) {
        fVar5 = fVar4 - 1.0;
      }
      fVar9 = fVar6 * param_2[3];
      fVar8 = fVar7 + fVar3;
      param_2[2] = fVar5 * fVar7;
      fVar6 = fVar6 + fVar10;
      fVar4 = ABS(fVar9);
      if (fVar4 <= 37.0) {
        uVar2 = (uint)(longlong)(1.0653532e+09 - fVar4 * 12102203.0);
        fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      else {
        fVar4 = 0.0;
      }
      fVar7 = 1.0 - fVar4;
      if (-0.0 <= fVar9) {
        fVar7 = fVar4 - 1.0;
      }
      fVar4 = fVar8 + fVar3;
      param_2[3] = fVar7 * fVar8;
      param_2 = param_2 + 4;
    } while (param_2 < pfVar1 + -3);
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
LAB_1453c4fe0:
      fVar7 = ABS(fVar6 * *param_2);
      if (fVar7 <= 37.0) {
        uVar2 = (uint)(longlong)(1.0653532e+09 - fVar7 * 12102203.0);
        fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      else {
        fVar7 = 0.0;
      }
      fVar5 = 1.0 - fVar7;
      if (-0.0 <= fVar6 * *param_2) {
        fVar5 = fVar7 - 1.0;
      }
      fVar5 = fVar5 * fVar4;
      fVar4 = fVar4 + fVar3;
      *param_2 = fVar5;
      fVar6 = fVar6 + fVar10;
    }
  }
  return;
}



// FUNCTION 1453c50d0 FUN_1453c50d0 body=1879 status=ok
// SIG undefined FUN_1453c50d0(void)

void FUN_1453c50d0(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
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
  
  fVar10 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 4) * -0.01;
  fVar13 = (*(float *)(param_1 + 0xc) - fVar10) * (1.0 / (float)param_3);
  if ((fVar3 < -37.0) || (37.0 < fVar3)) {
    fVar3 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar4 = *(float *)(param_1 + 8) * -0.01;
  if ((fVar4 < -37.0) || (37.0 < fVar4)) {
    fVar4 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar3 = (fVar3 - fVar4) * (1.0 / (float)param_3);
  if (-39.0 <= *(float *)(param_1 + 0x14) * 0.03) {
    uVar2 = (uint)(longlong)(*(float *)(param_1 + 0x14) * 251658.23 + 1.0821304e+09);
    fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar12 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar2 & 0xff800000)
    ;
    fVar5 = fVar12 * -0.2;
    if (fVar5 < -37.0) {
      fVar5 = 0.0;
      goto LAB_1453c52ff;
    }
  }
  else {
    fVar5 = -0.0;
    fVar12 = 0.0;
  }
  uVar2 = (uint)(longlong)(fVar5 * 12102203.0 + 1.0653532e+09);
  fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
  fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar2 & 0xff800000);
LAB_1453c52ff:
  fVar11 = 1.0 / fVar12;
  pfVar1 = param_2 + param_3;
  fVar5 = -0.2 / (1.0 - fVar5);
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar6 = fVar11;
        if (fVar10 * *param_2 != -0.2) {
          fVar6 = fVar10 * *param_2 - -0.2;
          if (fVar6 * fVar12 <= 37.0) {
            uVar2 = (uint)(longlong)(1.0653532e+09 - fVar6 * fVar12 * 12102203.0);
            fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar6 = fVar6 / (1.0 - ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                                   (float)(uVar2 & 0xff800000));
          }
          else {
            fVar6 = fVar6 / 1.0;
          }
        }
        fVar6 = fVar5 + fVar6;
        fVar7 = (fVar10 + fVar13) * param_2[1];
        fVar10 = fVar10 + fVar13 + fVar13;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
        *param_2 = fVar6 * fVar4;
        fVar6 = fVar11;
        if (fVar7 != -0.2) {
          fVar7 = fVar7 - -0.2;
          if (fVar7 * fVar12 <= 37.0) {
            uVar2 = (uint)(longlong)(1.0653532e+09 - fVar7 * fVar12 * 12102203.0);
            fVar6 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar6 = fVar7 / (1.0 - ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                                   (float)(uVar2 & 0xff800000));
          }
          else {
            fVar6 = fVar7 / 1.0;
          }
        }
        fVar6 = fVar5 + fVar6;
        fVar7 = fVar10 * param_2[2];
        fVar10 = fVar10 + fVar13;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
        fVar8 = fVar4 + fVar3 + fVar3;
        param_2[1] = fVar6 * (fVar4 + fVar3);
        fVar4 = fVar11;
        if (fVar7 != -0.2) {
          fVar7 = fVar7 - -0.2;
          if (fVar7 * fVar12 <= 37.0) {
            uVar2 = (uint)(longlong)(1.0653532e+09 - fVar7 * fVar12 * 12102203.0);
            fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar4 = fVar7 / (1.0 - ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) *
                                   (float)(uVar2 & 0xff800000));
          }
          else {
            fVar4 = fVar7 / 1.0;
          }
        }
        fVar4 = fVar5 + fVar4;
        fVar6 = fVar10 * param_2[3];
        fVar10 = fVar10 + fVar13;
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        if (fVar4 <= -1.0) {
          fVar4 = -1.0;
        }
        fVar9 = fVar8 + fVar3;
        param_2[2] = fVar4 * fVar8;
        fVar7 = fVar11;
        if (fVar6 != -0.2) {
          fVar6 = fVar6 - -0.2;
          if (fVar6 * fVar12 <= 37.0) {
            uVar2 = (uint)(longlong)(1.0653532e+09 - fVar6 * fVar12 * 12102203.0);
            fVar4 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar7 = fVar6 / (1.0 - ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) *
                                   (float)(uVar2 & 0xff800000));
          }
          else {
            fVar7 = fVar6 / 1.0;
          }
        }
        fVar7 = fVar5 + fVar7;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
        if (fVar7 <= -1.0) {
          fVar7 = -1.0;
        }
        fVar4 = fVar9 + fVar3;
        param_2[3] = fVar7 * fVar9;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      fVar6 = fVar11;
      if (fVar10 * *param_2 != -0.2) {
        fVar6 = fVar10 * *param_2 - -0.2;
        if (fVar6 * fVar12 <= 37.0) {
          uVar2 = (uint)(longlong)(1.0653532e+09 - fVar6 * fVar12 * 12102203.0);
          fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
          fVar6 = fVar6 / (1.0 - ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                                 (float)(uVar2 & 0xff800000));
        }
        else {
          fVar6 = fVar6 / 1.0;
        }
      }
      fVar6 = fVar5 + fVar6;
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      if (fVar6 <= -1.0) {
        fVar6 = -1.0;
      }
      fVar6 = fVar6 * fVar4;
      fVar4 = fVar4 + fVar3;
      *param_2 = fVar6;
      param_2 = param_2 + 1;
      fVar10 = fVar10 + fVar13;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 1453c5830 FUN_1453c5830 body=582 status=ok
// SIG undefined FUN_1453c5830(void)

void FUN_1453c5830(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_1 + 0x10);
  fVar6 = 0.0;
  fVar3 = *(float *)(param_1 + 4) * -0.01;
  fVar10 = (*(float *)(param_1 + 0xc) - fVar9) * (1.0 / (float)param_3);
  if ((fVar3 < -37.0) || (37.0 < fVar3)) {
    fVar3 = 0.0;
  }
  else {
    uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar4 = *(float *)(param_1 + 8) * -0.01;
  if ((-37.0 <= fVar4) && (fVar4 <= 37.0)) {
    uVar2 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  pfVar1 = param_2 + param_3;
  fVar3 = (fVar3 - fVar6) * (1.0 / (float)param_3);
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar4 = fVar9 * *param_2;
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        fVar5 = (fVar9 + fVar10) * param_2[1];
        fVar9 = fVar9 + fVar10 + fVar10;
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar4 <= -1.0) {
          fVar4 = -1.0;
        }
        if (fVar5 <= -1.0) {
          fVar5 = -1.0;
        }
        *param_2 = fVar4 * fVar6;
        fVar4 = fVar9 * param_2[2];
        fVar9 = fVar9 + fVar10;
        fVar7 = fVar6 + fVar3 + fVar3;
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        param_2[1] = fVar5 * (fVar6 + fVar3);
        fVar5 = fVar9 * param_2[3];
        fVar9 = fVar9 + fVar10;
        if (fVar4 <= -1.0) {
          fVar4 = -1.0;
        }
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        fVar8 = fVar7 + fVar3;
        if (fVar5 <= -1.0) {
          fVar5 = -1.0;
        }
        param_2[2] = fVar4 * fVar7;
        fVar6 = fVar8 + fVar3;
        param_2[3] = fVar5 * fVar8;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      fVar4 = fVar9 * *param_2;
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= -1.0) {
        fVar4 = -1.0;
      }
      fVar4 = fVar4 * fVar6;
      fVar6 = fVar6 + fVar3;
      *param_2 = fVar4;
      param_2 = param_2 + 1;
      fVar9 = fVar9 + fVar10;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 1453c5a80 FUN_1453c5a80 body=16 status=ok
// SIG undefined FUN_1453c5a80(void)

undefined8 * FUN_1453c5a80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1453c5a90 FUN_1453c5a90 body=88 status=ok
// SIG undefined FUN_1453c5a90(void)

void FUN_1453c5a90(float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_2 != 0.0) {
    fVar1 = (float)((50.0 < param_2) + 1);
  }
  param_1[4] = fVar1;
  fVar1 = param_2;
  if (50.0 <= param_2) {
    fVar1 = 50.0;
  }
  fVar2 = (param_2 - 50.0) * 0.02;
  fVar1 = (50.0 - fVar1) * -0.02;
  param_1[2] = fVar2;
  *param_1 = fVar1;
  if (param_3 != '\0') {
    param_1[1] = fVar1;
    param_1[3] = fVar2;
  }
  return;
}



// FUNCTION 1453c5af0 FUN_1453c5af0 body=136 status=ok
// SIG undefined FUN_1453c5af0(void)

void FUN_1453c5af0(undefined4 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1[4] != 0) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      uVar2 = (ulonglong)*(byte *)(param_2 + 1);
      lVar3 = 0;
      do {
        FUN_1453c5b80(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  param_1[1] = *param_1;
  param_1[3] = param_1[2];
  return;
}



// FUNCTION 1453c5b80 FUN_1453c5b80 body=486 status=ok
// SIG undefined FUN_1453c5b80(void)

void FUN_1453c5b80(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_1[1];
  uVar3 = (ulonglong)param_3;
  pfVar1 = param_2 + uVar3;
  fVar8 = (*param_1 - fVar6) * (1.0 / (float)param_3);
  if (param_1[4] == 1.4013e-45) {
    if (param_2 < pfVar1) {
      if (3 < uVar3) {
        do {
          fVar4 = *param_2;
          if (*param_2 <= fVar6) {
            fVar4 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          *param_2 = fVar4;
          fVar4 = param_2[1];
          if (param_2[1] <= fVar6) {
            fVar4 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          param_2[1] = fVar4;
          fVar4 = param_2[2];
          if (param_2[2] <= fVar6) {
            fVar4 = fVar6;
          }
          fVar7 = fVar6 + fVar8;
          param_2[2] = fVar4;
          fVar6 = fVar7 + fVar8;
          if (fVar7 <= param_2[3]) {
            fVar7 = param_2[3];
          }
          param_2[3] = fVar7;
          param_2 = param_2 + 4;
        } while (param_2 < pfVar1 + -3);
        if (pfVar1 <= param_2) {
          return;
        }
      }
      do {
        fVar4 = *param_2;
        if (*param_2 <= fVar6) {
          fVar4 = fVar6;
        }
        fVar6 = fVar6 + fVar8;
        *param_2 = fVar4;
        param_2 = param_2 + 1;
      } while (param_2 < pfVar1);
      return;
    }
  }
  else {
    fVar4 = param_1[3];
    fVar7 = (param_1[2] - fVar4) * (1.0 / (float)param_3);
    if (param_2 < pfVar1) {
      if (3 < uVar3) {
        do {
          fVar2 = *param_2;
          fVar5 = fVar2;
          if (fVar2 <= fVar6) {
            fVar5 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar4;
          }
          fVar2 = param_2[1];
          *param_2 = fVar5;
          fVar5 = fVar2;
          if (fVar2 <= fVar6) {
            fVar5 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * (fVar4 + fVar7);
          }
          fVar2 = param_2[2];
          fVar4 = fVar4 + fVar7 + fVar7;
          param_2[1] = fVar5;
          fVar5 = fVar2;
          if (fVar2 <= fVar6) {
            fVar5 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar4;
          }
          fVar2 = param_2[3];
          fVar4 = fVar4 + fVar7;
          param_2[2] = fVar5;
          fVar5 = fVar2;
          if (fVar2 <= fVar6) {
            fVar5 = fVar6;
          }
          fVar6 = fVar6 + fVar8;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar4;
          }
          param_2[3] = fVar5;
          fVar4 = fVar4 + fVar7;
          param_2 = param_2 + 4;
        } while (param_2 < pfVar1 + -3);
        if (pfVar1 <= param_2) {
          return;
        }
      }
      do {
        fVar2 = *param_2;
        fVar5 = fVar2;
        if (fVar2 <= fVar6) {
          fVar5 = fVar6;
        }
        fVar6 = fVar6 + fVar8;
        if (fVar2 <= 0.0) {
          fVar5 = fVar5 - fVar2 * fVar4;
        }
        *param_2 = fVar5;
        fVar4 = fVar4 + fVar7;
        param_2 = param_2 + 1;
      } while (param_2 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453c5d70 FUN_1453c5d70 body=218 status=ok
// SIG undefined FUN_1453c5d70(void)

void FUN_1453c5d70(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_1[2];
  fVar7 = *param_1;
  fVar6 = param_1[1];
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar5 = *param_2;
        fVar3 = param_2[1];
        fVar4 = fVar5 - fVar7;
        fVar7 = param_2[3];
        fVar4 = fVar4 + fVar6 * fVar2;
        fVar6 = param_2[2];
        *param_2 = fVar4;
        fVar5 = (fVar3 - fVar5) + fVar4 * fVar2;
        param_2[1] = fVar5;
        fVar5 = (fVar6 - fVar3) + fVar5 * fVar2;
        param_2[2] = fVar5;
        fVar6 = (fVar7 - fVar6) + fVar5 * fVar2;
        param_2[3] = fVar6;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) goto LAB_1453c5e40;
    }
    do {
      fVar5 = *param_2;
      fVar6 = (fVar5 - fVar7) + fVar6 * fVar2;
      *param_2 = fVar6;
      param_2 = param_2 + 1;
      fVar7 = fVar5;
    } while (param_2 < pfVar1);
    *param_1 = fVar5;
    param_1[1] = fVar6;
    return;
  }
LAB_1453c5e40:
  param_1[1] = fVar6;
  *param_1 = fVar7;
  return;
}



// FUNCTION 1453c5e50 FUN_1453c5e50 body=279 status=ok
// SIG undefined FUN_1453c5e50(void)

void FUN_1453c5e50(float *param_1,float *param_2,uint param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_1;
  fVar7 = param_1[1];
  fVar2 = param_1[2];
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar5 = *param_2;
        fVar3 = param_2[1];
        fVar6 = param_4 * fVar5 - fVar8;
        fVar8 = param_4 * param_2[3];
        fVar4 = param_2[2];
        fVar6 = fVar6 + fVar7 * fVar2;
        *param_2 = fVar6;
        fVar7 = (param_4 * fVar3 - param_4 * fVar5) + fVar6 * fVar2;
        param_2[1] = fVar7;
        fVar7 = (param_4 * fVar4 - param_4 * fVar3) + fVar7 * fVar2;
        param_2[2] = fVar7;
        fVar7 = (fVar8 - param_4 * fVar4) + fVar7 * fVar2;
        param_2[3] = fVar7;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) goto LAB_1453c5f50;
    }
    do {
      fVar5 = param_4 * *param_2;
      fVar7 = (fVar5 - fVar8) + fVar7 * fVar2;
      *param_2 = fVar7;
      param_2 = param_2 + 1;
      fVar8 = fVar5;
    } while (param_2 < pfVar1);
    *param_1 = fVar5;
    param_1[1] = fVar7;
    return;
  }
LAB_1453c5f50:
  param_1[1] = fVar7;
  *param_1 = fVar8;
  return;
}



// FUNCTION 1453c5f70 FUN_1453c5f70 body=734 status=ok
// SIG undefined FUN_1453c5f70(void)

undefined8
FUN_1453c5f70(uint *param_1,longlong *param_2,float param_3,float *param_4,float *param_5,
             uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_6 - 1 < 0x40) && (param_7 - 1 < 0x40)) {
    fVar13 = powf(2.0,param_3 * 0.01);
    fVar15 = *param_4;
    if (*param_5 <= *param_4) {
      fVar15 = *param_5;
    }
    fVar16 = (float)param_8;
    fVar14 = param_4[(ulonglong)(param_6 - 1) * 2];
    if (param_4[(ulonglong)(param_6 - 1) * 2] <= param_5[(ulonglong)(param_7 - 1) * 2]) {
      fVar14 = param_5[(ulonglong)(param_7 - 1) * 2];
    }
    fVar15 = fVar15 * fVar13;
    uVar2 = (uint)(longlong)((fVar14 * fVar13 - fVar15) * 0.001 * fVar16);
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    else if (0xffff < uVar2) goto LAB_1453c621e;
    *param_1 = uVar2 & 0xfffc;
    lVar4 = (**(code **)(*param_2 + 8))
                      (param_2,(ulonglong)(uVar2 & 0xfffc) << 2,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\ERUnitDual.cpp"
                       ,0x35);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 == 0) {
      uVar5 = 0x34;
    }
    else {
      uVar12 = 0;
      *(undefined2 *)(param_1 + 0xc5) = 0;
      uVar2 = 0xffffffff;
      uVar7 = uVar12;
      uVar11 = uVar12;
      uVar9 = uVar12;
      if (param_6 != 0) {
        do {
          uVar1 = *param_1;
          uVar3 = (uint)(longlong)
                        ((fVar13 * param_4[(ulonglong)uVar9 * 2] - fVar15) * 0.001 * fVar16) &
                  0xfffffffc;
          uVar10 = uVar1 - 4;
          if (uVar3 < uVar1) {
            uVar10 = uVar3;
          }
          if (uVar10 != uVar2) {
            uVar6 = (short)uVar1 - (short)uVar10;
            uVar8 = (ulonglong)uVar7;
            *(ushort *)((longlong)param_1 + uVar8 * 2 + 0x214) = uVar6;
            if (uVar10 == 0) {
              *(undefined2 *)((longlong)param_1 + uVar8 * 2 + 0x214) = 0;
              uVar6 = uVar12;
            }
            param_1[uVar8 + 5] = (uint)param_4[(ulonglong)uVar9 * 2 + 1];
            if (uVar11 < uVar6) {
              *(ushort *)(param_1 + 0xc5) = uVar7;
              uVar11 = uVar6;
            }
            uVar7 = uVar7 + 1;
          }
          uVar9 = uVar9 + 1;
          uVar2 = uVar10;
        } while (uVar9 < param_6);
      }
      *(ushort *)(param_1 + 0xc6) = uVar7;
      uVar12 = 0;
      *(undefined2 *)((longlong)param_1 + 0x316) = 0;
      uVar7 = uVar12;
      uVar11 = uVar12;
      uVar9 = uVar12;
      uVar2 = 0xffffffff;
      if (param_7 != 0) {
        do {
          uVar1 = *param_1;
          uVar3 = (uint)(longlong)
                        ((fVar13 * param_5[(ulonglong)uVar9 * 2] - fVar15) * 0.001 * fVar16) &
                  0xfffffffc;
          uVar10 = uVar1 - 4;
          if (uVar3 < uVar1) {
            uVar10 = uVar3;
          }
          if (uVar10 != uVar2) {
            uVar6 = (short)uVar1 - (short)uVar10;
            uVar8 = (ulonglong)uVar7;
            *(ushort *)((longlong)param_1 + uVar8 * 2 + 0x294) = uVar6;
            if (uVar10 == 0) {
              *(undefined2 *)((longlong)param_1 + uVar8 * 2 + 0x294) = 0;
              uVar6 = uVar12;
            }
            param_1[uVar8 + 0x45] = (uint)param_5[(ulonglong)uVar9 * 2 + 1];
            if (uVar11 < uVar6) {
              *(ushort *)((longlong)param_1 + 0x316) = uVar7;
              uVar11 = uVar6;
            }
            uVar7 = uVar7 + 1;
          }
          uVar9 = uVar9 + 1;
          uVar2 = uVar10;
        } while (uVar9 < param_7);
      }
      uVar5 = 1;
      param_1[4] = 0;
      *(ushort *)((longlong)param_1 + 0x31a) = uVar7;
    }
  }
  else {
LAB_1453c621e:
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 1453c6250 FUN_1453c6250 body=54 status=ok
// SIG undefined FUN_1453c6250(void)

void FUN_1453c6250(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1453c6290 FUN_1453c6290 body=27 status=ok
// SIG undefined FUN_1453c6290(void)

void FUN_1453c6290(uint *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    memset(*(void **)(param_1 + 2),0,(ulonglong)*param_1 << 2);
    return;
  }
  return;
}



// FUNCTION 1453c62b0 FUN_1453c62b0 body=1128 status=ok
// SIG undefined FUN_1453c62b0(void)

void FUN_1453c62b0(uint *param_1,undefined8 *param_2,float *param_3,float *param_4,uint param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  longlong lVar20;
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
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ushort uVar44;
  ulonglong uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint local_res8;
  float *local_res18;
  float *local_res20;
  
  lVar20 = *(longlong *)(param_1 + 2);
  uVar44 = (ushort)param_1[0xc6];
  if (*(ushort *)((longlong)param_1 + 0x31a) <= (ushort)param_1[0xc6]) {
    uVar44 = *(ushort *)((longlong)param_1 + 0x31a);
  }
  local_res20 = param_4;
  local_res18 = param_3;
  for (; param_5 != 0; param_5 = param_5 - uVar41) {
    uVar46 = *param_1;
    uVar38 = (uint)*(ushort *)
                    ((longlong)param_1 +
                    (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294);
    uVar41 = (uint)*(ushort *)((longlong)param_1 + (ulonglong)(ushort)param_1[0xc5] * 2 + 0x214);
    if (uVar46 - uVar41 < uVar46 - uVar38) {
      uVar38 = uVar41;
    }
    if (uVar46 - param_1[4] < uVar46 - uVar38) {
      uVar38 = param_1[4];
    }
    uVar41 = uVar46 - uVar38;
    if (param_5 < uVar46 - uVar38) {
      uVar41 = param_5;
    }
    if (3 < uVar41) {
      uVar43 = (ulonglong)(uVar41 >> 2);
      do {
        uVar46 = 0;
        uVar36 = *param_2;
        uVar37 = param_2[1];
        param_2 = param_2 + 2;
        fVar51 = 0.0;
        fVar52 = 0.0;
        fVar53 = 0.0;
        fVar54 = 0.0;
        fVar47 = 0.0;
        fVar48 = 0.0;
        fVar49 = 0.0;
        fVar50 = 0.0;
        puVar1 = (undefined8 *)(lVar20 + (ulonglong)param_1[4] * 4);
        *puVar1 = uVar36;
        puVar1[1] = uVar37;
        param_1[4] = param_1[4] + 4;
        if ((uVar44 & 0xfffc) != 0) {
          local_res8 = 2;
          uVar39 = 2;
          do {
            uVar38 = (int)uVar39 - 1;
            uVar12 = *(ushort *)((longlong)param_1 + (ulonglong)uVar38 * 2 + 0x214);
            uVar42 = (ulonglong)uVar38;
            uVar38 = (int)uVar39 + 1;
            uVar45 = (ulonglong)uVar38;
            fVar7 = (float)param_1[uVar39 + 5];
            uVar13 = *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x214);
            uVar14 = *(ushort *)((longlong)param_1 + uVar42 * 2 + 0x294);
            uVar15 = *(ushort *)((longlong)param_1 + uVar45 * 2 + 0x294);
            uVar16 = *(ushort *)((longlong)param_1 + (ulonglong)uVar38 * 2 + 0x214);
            uVar17 = *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x294);
            uVar40 = (ulonglong)uVar46;
            uVar46 = uVar46 + 4;
            fVar8 = (float)param_1[uVar40 + 5];
            uVar18 = *(ushort *)((longlong)param_1 + uVar40 * 2 + 0x214);
            uVar19 = *(ushort *)((longlong)param_1 + uVar40 * 2 + 0x294);
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar18 * 4);
            pfVar3 = (float *)(lVar20 + (ulonglong)uVar12 * 4);
            fVar9 = (float)param_1[uVar42 + 5];
            pfVar4 = (float *)(lVar20 + (ulonglong)uVar13 * 4);
            fVar10 = (float)param_1[uVar45 + 5];
            pfVar5 = (float *)(lVar20 + (ulonglong)uVar16 * 4);
            fVar11 = (float)param_1[uVar39 + 0x45];
            pfVar6 = (float *)(lVar20 + (ulonglong)uVar19 * 4);
            fVar21 = *pfVar6;
            fVar22 = pfVar6[1];
            fVar23 = pfVar6[2];
            fVar24 = pfVar6[3];
            fVar51 = fVar51 + fVar8 * *pfVar2 + fVar9 * *pfVar3 + fVar7 * *pfVar4 + fVar10 * *pfVar5
            ;
            fVar52 = fVar52 + fVar8 * pfVar2[1] + fVar9 * pfVar3[1] + fVar7 * pfVar4[1] +
                     fVar10 * pfVar5[1];
            fVar53 = fVar53 + fVar8 * pfVar2[2] + fVar9 * pfVar3[2] + fVar7 * pfVar4[2] +
                     fVar10 * pfVar5[2];
            fVar54 = fVar54 + fVar8 * pfVar2[3] + fVar9 * pfVar3[3] + fVar7 * pfVar4[3] +
                     fVar10 * pfVar5[3];
            fVar7 = (float)param_1[uVar40 + 0x45];
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar14 * 4);
            fVar10 = *pfVar2;
            fVar25 = pfVar2[1];
            fVar26 = pfVar2[2];
            fVar27 = pfVar2[3];
            fVar8 = (float)param_1[uVar42 + 0x45];
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar17 * 4);
            fVar28 = *pfVar2;
            fVar29 = pfVar2[1];
            fVar30 = pfVar2[2];
            fVar31 = pfVar2[3];
            fVar9 = (float)param_1[uVar45 + 0x45];
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar15 * 4);
            fVar32 = *pfVar2;
            fVar33 = pfVar2[1];
            fVar34 = pfVar2[2];
            fVar35 = pfVar2[3];
            *(ushort *)((longlong)param_1 + uVar45 * 2 + 0x214) = uVar16 + 4;
            *(ushort *)((longlong)param_1 + uVar45 * 2 + 0x294) = uVar15 + 4;
            local_res8 = local_res8 + 4;
            *(ushort *)((longlong)param_1 + uVar42 * 2 + 0x294) = uVar14 + 4;
            *(ushort *)((longlong)param_1 + uVar40 * 2 + 0x214) = uVar18 + 4;
            *(ushort *)((longlong)param_1 + uVar42 * 2 + 0x214) = uVar12 + 4;
            *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x214) = uVar13 + 4;
            fVar47 = fVar47 + fVar7 * fVar21 + fVar8 * fVar10 + fVar11 * fVar28 + fVar9 * fVar32;
            fVar48 = fVar48 + fVar7 * fVar22 + fVar8 * fVar25 + fVar11 * fVar29 + fVar9 * fVar33;
            fVar49 = fVar49 + fVar7 * fVar23 + fVar8 * fVar26 + fVar11 * fVar30 + fVar9 * fVar34;
            fVar50 = fVar50 + fVar7 * fVar24 + fVar8 * fVar27 + fVar11 * fVar31 + fVar9 * fVar35;
            *(ushort *)((longlong)param_1 + uVar40 * 2 + 0x294) = uVar19 + 4;
            *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x294) = uVar17 + 4;
            param_3 = local_res18;
            uVar39 = (ulonglong)local_res8;
            param_4 = local_res20;
          } while (uVar46 < (uVar44 & 0xfffffffc));
        }
        uVar38 = uVar46;
        if (uVar46 < (ushort)param_1[0xc6]) {
          do {
            uVar39 = (ulonglong)uVar38;
            uVar38 = uVar38 + 1;
            uVar12 = *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x214);
            fVar7 = (float)param_1[uVar39 + 5];
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar12 * 4);
            fVar8 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
            *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x214) = uVar12 + 4;
            fVar51 = fVar51 + fVar7 * fVar8;
            fVar52 = fVar52 + fVar7 * fVar9;
            fVar53 = fVar53 + fVar7 * fVar10;
            fVar54 = fVar54 + fVar7 * fVar11;
          } while (uVar38 < (ushort)param_1[0xc6]);
        }
        if (uVar46 < *(ushort *)((longlong)param_1 + 0x31a)) {
          do {
            uVar39 = (ulonglong)uVar46;
            uVar46 = uVar46 + 1;
            uVar12 = *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x294);
            fVar7 = (float)param_1[uVar39 + 0x45];
            pfVar2 = (float *)(lVar20 + (ulonglong)uVar12 * 4);
            fVar8 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
            *(ushort *)((longlong)param_1 + uVar39 * 2 + 0x294) = uVar12 + 4;
            fVar47 = fVar47 + fVar7 * fVar8;
            fVar48 = fVar48 + fVar7 * fVar9;
            fVar49 = fVar49 + fVar7 * fVar10;
            fVar50 = fVar50 + fVar7 * fVar11;
          } while (uVar46 < *(ushort *)((longlong)param_1 + 0x31a));
        }
        *param_3 = fVar51;
        param_3[1] = fVar52;
        param_3[2] = fVar53;
        param_3[3] = fVar54;
        param_3 = param_3 + 4;
        *param_4 = fVar47;
        param_4[1] = fVar48;
        param_4[2] = fVar49;
        param_4[3] = fVar50;
        param_4 = param_4 + 4;
        uVar43 = uVar43 - 1;
        local_res18 = param_3;
        local_res20 = param_4;
      } while (uVar43 != 0);
    }
    if ((uint)*(ushort *)((longlong)param_1 + (ulonglong)(ushort)param_1[0xc5] * 2 + 0x214) ==
        *param_1) {
      *(undefined2 *)((longlong)param_1 + (ulonglong)(ushort)param_1[0xc5] * 2 + 0x214) = 0;
      *(ushort *)(param_1 + 0xc5) = (ushort)((short)param_1[0xc5] + 1U) % (ushort)param_1[0xc6];
    }
    if ((uint)*(ushort *)
               ((longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294)
        == *param_1) {
      *(undefined2 *)
       ((longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294) = 0;
      *(ushort *)((longlong)param_1 + 0x316) =
           (ushort)(*(short *)((longlong)param_1 + 0x316) + 1U) %
           *(ushort *)((longlong)param_1 + 0x31a);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
  }
  return;
}



// FUNCTION 1453c6720 FUN_1453c6720 body=121 status=ok
// SIG undefined FUN_1453c6720(void)

undefined8 FUN_1453c6720(uint *param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  *param_1 = uVar1;
  lVar2 = (**(code **)(*param_2 + 0x18))
                    (param_2,(ulonglong)uVar1 << 3,0x10,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\AllpassFilter.cpp"
                     ,0x29);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  param_1[5] = param_4;
  param_1[4] = 0;
  return 1;
}



// FUNCTION 1453c67a0 FUN_1453c67a0 body=54 status=ok
// SIG undefined FUN_1453c67a0(void)

void FUN_1453c67a0(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1453c67e0 FUN_1453c67e0 body=27 status=ok
// SIG undefined FUN_1453c67e0(void)

void FUN_1453c67e0(uint *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    memset(*(void **)(param_1 + 2),0,(ulonglong)*param_1 << 3);
    return;
  }
  return;
}



// FUNCTION 1453c6800 FUN_1453c6800 body=511 status=ok
// SIG undefined FUN_1453c6800(void)

void FUN_1453c6800(int *param_1,float *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_3 != 0) {
    iVar5 = param_1[4];
    pfVar7 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)(iVar5 * 2) * 4);
    do {
      uVar2 = *param_1 - iVar5;
      if (param_3 < (uint)(*param_1 - iVar5)) {
        uVar2 = param_3;
      }
      param_3 = param_3 - uVar2;
      param_1[4] = iVar5 + uVar2;
      uVar4 = uVar2;
      if (3 < uVar2) {
        fVar10 = (float)param_1[5];
        uVar4 = uVar2 + (uVar2 >> 2) * -4;
        if (uVar2 >> 2 != 0) {
          uVar3 = (ulonglong)(uVar2 >> 2);
          do {
            fVar8 = param_2[1];
            fVar9 = param_2[2];
            fVar1 = param_2[3];
            fVar11 = (*param_2 - pfVar7[1]) * fVar10 + *pfVar7;
            fVar12 = (fVar8 - pfVar7[3]) * fVar10 + pfVar7[2];
            fVar13 = (fVar9 - pfVar7[5]) * fVar10 + pfVar7[4];
            fVar14 = (fVar1 - pfVar7[7]) * fVar10 + pfVar7[6];
            *pfVar7 = *param_2;
            pfVar7[1] = fVar11;
            pfVar7[2] = fVar8;
            pfVar7[3] = fVar12;
            pfVar7[4] = fVar9;
            pfVar7[5] = fVar13;
            pfVar7[6] = fVar1;
            pfVar7[7] = fVar14;
            pfVar7 = pfVar7 + 8;
            *param_2 = fVar11;
            param_2[1] = fVar12;
            param_2[2] = fVar13;
            param_2[3] = fVar14;
            param_2 = param_2 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      pfVar6 = (float *)(param_1 + 5);
      uVar2 = 0;
      if (3 < uVar4) {
        uVar2 = (uVar4 - 4 >> 2) + 1;
        uVar3 = (ulonglong)uVar2;
        uVar2 = uVar2 * 4;
        do {
          fVar10 = param_2[1];
          fVar9 = (*param_2 - pfVar7[1]) * *pfVar6 + *pfVar7;
          *pfVar7 = *param_2;
          fVar8 = pfVar7[3];
          *param_2 = fVar9;
          pfVar7[1] = fVar9;
          fVar9 = param_2[2];
          fVar8 = (fVar10 - fVar8) * *pfVar6 + pfVar7[2];
          pfVar7[2] = fVar10;
          pfVar7[3] = fVar8;
          param_2[1] = fVar8;
          fVar8 = (fVar9 - pfVar7[5]) * *pfVar6 + pfVar7[4];
          pfVar7[4] = fVar9;
          fVar10 = param_2[3];
          pfVar7[5] = fVar8;
          param_2[2] = fVar8;
          fVar8 = (fVar10 - pfVar7[7]) * *pfVar6 + pfVar7[6];
          pfVar7[6] = fVar10;
          pfVar7[7] = fVar8;
          pfVar7 = pfVar7 + 8;
          param_2[3] = fVar8;
          param_2 = param_2 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (uVar2 < uVar4) {
        uVar3 = (ulonglong)(uVar4 - uVar2);
        do {
          fVar10 = (*param_2 - pfVar7[1]) * (float)param_1[5] + *pfVar7;
          *pfVar7 = *param_2;
          pfVar7[1] = fVar10;
          pfVar7 = pfVar7 + 2;
          *param_2 = fVar10;
          param_2 = param_2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      iVar5 = param_1[4];
      if (iVar5 == *param_1) {
        pfVar7 = *(float **)(param_1 + 2);
        iVar5 = 0;
        param_1[4] = 0;
      }
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1453c6a00 FUN_1453c6a00 body=96 status=ok
// SIG undefined FUN_1453c6a00(void)

undefined8 FUN_1453c6a00(uint *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 4;
  if (3 < param_3) {
    uVar1 = param_3;
  }
  *param_1 = uVar1;
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(uVar1 + 3 & 0xfffffffc) << 2,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\DelayLine.cpp"
                     ,0x29);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  param_1[4] = 0;
  return 1;
}



// FUNCTION 1453c6a60 FUN_1453c6a60 body=54 status=ok
// SIG undefined FUN_1453c6a60(void)

void FUN_1453c6a60(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1453c6aa0 FUN_1453c6aa0 body=27 status=ok
// SIG undefined FUN_1453c6aa0(void)

void FUN_1453c6aa0(int *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    memset(*(void **)(param_1 + 2),0,(ulonglong)(uint)(*param_1 << 2));
    return;
  }
  return;
}



// FUNCTION 1453c6ac0 FUN_1453c6ac0 body=180 status=ok
// SIG undefined FUN_1453c6ac0(void)

void FUN_1453c6ac0(uint *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar5 = (ulonglong)param_1[4];
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
  if (param_3 != 0) {
    do {
      uVar8 = *param_1 - (int)uVar5;
      if (param_3 < uVar8) {
        uVar8 = param_3;
      }
      uVar5 = (ulonglong)(uVar8 >> 2);
      uVar7 = (ulonglong)(uVar8 & 3);
      if (uVar8 >> 2 != 0) {
        do {
          uVar2 = puVar9[1];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          *param_2 = *puVar9;
          param_2[1] = uVar2;
          param_2 = param_2 + 2;
          *puVar9 = uVar3;
          puVar9[1] = uVar4;
          puVar9 = puVar9 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((uVar8 & 3) != 0) {
        do {
          uVar1 = *(undefined4 *)param_2;
          *(undefined4 *)param_2 = *(undefined4 *)puVar9;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          *(undefined4 *)puVar9 = uVar1;
          puVar9 = (undefined8 *)((longlong)puVar9 + 4);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar6 = param_1[4] + uVar8;
      param_1[4] = uVar6;
      uVar5 = (ulonglong)uVar6;
      if (uVar6 == *param_1) {
        puVar9 = *(undefined8 **)(param_1 + 2);
        param_1[4] = 0;
        uVar5 = 0;
      }
      param_3 = param_3 - uVar8;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1453c6b80 FUN_1453c6b80 body=203 status=ok
// SIG undefined FUN_1453c6b80(void)

void FUN_1453c6b80(uint *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar5 = (ulonglong)param_1[4];
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
  if (param_4 != 0) {
    do {
      uVar8 = *param_1 - (int)uVar5;
      if (param_4 < uVar8) {
        uVar8 = param_4;
      }
      uVar5 = (ulonglong)(uVar8 >> 2);
      uVar7 = (ulonglong)(uVar8 & 3);
      if (uVar8 >> 2 != 0) {
        do {
          uVar2 = puVar9[1];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          param_2 = param_2 + 2;
          *param_3 = *puVar9;
          param_3[1] = uVar2;
          param_3 = param_3 + 2;
          *puVar9 = uVar3;
          puVar9[1] = uVar4;
          puVar9 = puVar9 + 2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((uVar8 & 3) != 0) {
        do {
          uVar1 = *(undefined4 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          *(undefined4 *)param_3 = *(undefined4 *)puVar9;
          param_3 = (undefined8 *)((longlong)param_3 + 4);
          *(undefined4 *)puVar9 = uVar1;
          puVar9 = (undefined8 *)((longlong)puVar9 + 4);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar6 = param_1[4] + uVar8;
      param_1[4] = uVar6;
      uVar5 = (ulonglong)uVar6;
      if (uVar6 == *param_1) {
        puVar9 = *(undefined8 **)(param_1 + 2);
        param_1[4] = 0;
        uVar5 = 0;
      }
      param_4 = param_4 - uVar8;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 1453c6c50 FUN_1453c6c50 body=190 status=ok
// SIG undefined FUN_1453c6c50(void)

void FUN_1453c6c50(longlong param_1,float param_2,float param_3,uint param_4,uint param_5)

{
  double _X;
  double dVar1;
  
  _X = pow(10.0,((double)param_5 * -3.0) / ((double)param_2 * (double)param_4));
  dVar1 = log10(_X);
  dVar1 = dVar1 * 0.5756462732485116 * (1.0 - (double)param_3 * (double)param_3);
  if (0.999 <= dVar1) {
    dVar1 = 0.999;
  }
  *(float *)(param_1 + 4) = (float)((1.0 - dVar1) * _X);
  *(float *)(param_1 + 8) = (float)-dVar1;
  return;
}



// FUNCTION 1453c6d10 FUN_1453c6d10 body=308 status=ok
// SIG undefined FUN_1453c6d10(void)

undefined8
FUN_1453c6d10(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1453c7ee0(param_3[3],param_4,param_5,param_6);
  uVar1 = FUN_1453c6a00(param_1,param_2,*param_3);
  if ((int)uVar1 == 1) {
    uVar1 = FUN_1453c6a00(param_1 + 0x18,param_2,param_3[1]);
    if ((int)uVar1 == 1) {
      uVar1 = FUN_1453c6a00(param_1 + 0x30,param_2,param_3[2]);
      if ((int)uVar1 == 1) {
        uVar1 = FUN_1453c6a00(param_1 + 0x48,param_2,param_3[3]);
        if ((int)uVar1 == 1) {
          FUN_1453c6c50(param_1 + 0x60,param_4,uVar2,param_6,*param_3);
          FUN_1453c6c50(param_1 + 0x6c,param_4,uVar2,param_6,param_3[1]);
          FUN_1453c6c50(param_1 + 0x78,param_4,uVar2,param_6,param_3[2]);
          FUN_1453c6c50(param_1 + 0x84,param_4,uVar2,param_6,param_3[3]);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 1453c6e50 FUN_1453c6e50 body=67 status=ok
// SIG undefined FUN_1453c6e50(void)

void FUN_1453c6e50(longlong param_1,undefined8 param_2)

{
  FUN_1453c6a60();
  FUN_1453c6a60(param_1 + 0x18,param_2);
  FUN_1453c6a60(param_1 + 0x30,param_2);
  FUN_1453c6a60(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 1453c6ea0 FUN_1453c6ea0 body=64 status=ok
// SIG undefined FUN_1453c6ea0(void)

void FUN_1453c6ea0(longlong param_1)

{
  FUN_1453c6aa0();
  FUN_1453c6aa0(param_1 + 0x18);
  FUN_1453c6aa0(param_1 + 0x30);
  FUN_1453c6aa0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



// FUNCTION 1453c6ee0 FUN_1453c6ee0 body=1178 status=ok
// SIG undefined FUN_1453c6ee0(void)

void FUN_1453c6ee0(int *param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
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
  float fVar35;
  
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1c];
  fVar33 = (float)param_1[0x1b];
  fVar34 = (float)param_1[0x1e];
  fVar35 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1f];
  fVar12 = -(float)param_1[0x1a];
  fVar32 = (float)param_1[0x18];
  fVar13 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar14 = -(float)param_1[0x23];
  fVar15 = -(float)param_1[0x20];
  fVar20 = fVar32;
  fVar16 = fVar33;
  fVar17 = fVar34;
  fVar18 = fVar35;
  do {
    uVar11 = param_4;
    if ((uint)(*param_1 - param_1[4]) <= param_4) {
      uVar11 = *param_1 - param_1[4];
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar11 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar11;
    }
    uVar11 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar11 = uVar9;
    }
    uVar9 = param_1[0x12] - param_1[0x16];
    if (uVar11 < (uint)(param_1[0x12] - param_1[0x16])) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar10 = (ulonglong)uVar11;
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar28 = *pfVar1 * fVar5 + fVar12 * fVar32;
        fVar29 = *pfVar2 * fVar6 + fVar13 * fVar33;
        fVar30 = *pfVar3 * fVar7 + fVar15 * fVar34;
        fVar31 = *pfVar4 * fVar8 + fVar14 * fVar35;
        fVar24 = pfVar1[1] * fVar5 + fVar28 * fVar12;
        fVar25 = pfVar2[1] * fVar6 + fVar29 * fVar13;
        fVar26 = pfVar3[1] * fVar7 + fVar30 * fVar15;
        fVar27 = pfVar4[1] * fVar8 + fVar31 * fVar14;
        fVar16 = pfVar1[2] * fVar5 + fVar24 * fVar12;
        fVar17 = pfVar2[2] * fVar6 + fVar25 * fVar13;
        fVar18 = pfVar3[2] * fVar7 + fVar26 * fVar15;
        fVar19 = pfVar4[2] * fVar8 + fVar27 * fVar14;
        fVar32 = pfVar1[3] * fVar5 + fVar16 * fVar12;
        fVar33 = pfVar2[3] * fVar6 + fVar17 * fVar13;
        fVar34 = pfVar3[3] * fVar7 + fVar18 * fVar15;
        fVar35 = pfVar4[3] * fVar8 + fVar19 * fVar14;
        *param_3 = (fVar28 + fVar30 + *param_3) - (fVar29 + fVar31);
        param_3[1] = (fVar24 + fVar26 + param_3[1]) - (fVar25 + fVar27);
        param_3[2] = (fVar16 + fVar18 + param_3[2]) - (fVar17 + fVar19);
        param_3[3] = (fVar32 + fVar34 + param_3[3]) - (fVar33 + fVar35);
        param_3 = param_3 + 4;
        fVar20 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar20 = (fVar28 + fVar29 + fVar30 + fVar31) * -0.5 + fVar20;
        fVar21 = (fVar24 + fVar25 + fVar26 + fVar27) * -0.5 + *pfVar1;
        fVar22 = (fVar16 + fVar17 + fVar18 + fVar19) * -0.5 + *pfVar2;
        fVar23 = (fVar32 + fVar33 + fVar34 + fVar35) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar20 + fVar29;
        pfVar1[1] = fVar21 + fVar25;
        pfVar1[2] = fVar22 + fVar17;
        pfVar1[3] = fVar23 + fVar33;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar20 + fVar30;
        pfVar1[1] = fVar21 + fVar26;
        pfVar1[2] = fVar22 + fVar18;
        pfVar1[3] = fVar23 + fVar34;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar20 + fVar31;
        pfVar1[1] = fVar21 + fVar27;
        pfVar1[2] = fVar22 + fVar19;
        pfVar1[3] = fVar23 + fVar35;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar20 + fVar28;
        pfVar1[1] = fVar21 + fVar24;
        pfVar1[2] = fVar22 + fVar16;
        pfVar1[3] = fVar23 + fVar32;
        param_1[0x16] = param_1[0x16] + 4;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (uVar11 * 4 < uVar9) {
      uVar10 = (ulonglong)(uVar9 + uVar11 * -4);
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        fVar32 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar12 * fVar32;
        fVar33 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar6 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar7 + fVar15 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar14 * fVar35;
        *param_3 = fVar35 * -1.0 + fVar34 * 1.0 + fVar33 * -1.0 + fVar32 * 1.0 + *param_3;
        param_3 = param_3 + 1;
        fVar16 = fVar33 * -0.5 + fVar32 * -0.5;
        fVar17 = fVar32 * -0.5 + fVar33 * -0.5;
        fVar18 = fVar35 * -0.5 + fVar34 * -0.5;
        fVar19 = fVar34 * -0.5 + fVar35 * -0.5;
        fVar20 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar19 + fVar17 + fVar33 + fVar20;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar16 + fVar18 + fVar34 + fVar20;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar17 + fVar19 + fVar35 + fVar20;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar18 + fVar16 + fVar32 + fVar20;
        param_1[0x16] = param_1[0x16] + 1;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    if (param_1[0x16] == param_1[0x12]) {
      param_1[0x16] = 0;
    }
    param_4 = param_4 - uVar9;
  } while (param_4 != 0);
  param_1[0x18] = (int)fVar32;
  param_1[0x1b] = (int)fVar33;
  param_1[0x1e] = (int)fVar34;
  param_1[0x21] = (int)fVar35;
  return;
}



// FUNCTION 1453c7380 FUN_1453c7380 body=1304 status=ok
// SIG undefined FUN_1453c7380(void)

void FUN_1453c7380(int *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
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
  float fVar35;
  
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1c];
  fVar33 = (float)param_1[0x1b];
  fVar34 = (float)param_1[0x1e];
  fVar35 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1f];
  fVar12 = -(float)param_1[0x1a];
  fVar32 = (float)param_1[0x18];
  fVar13 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar14 = -(float)param_1[0x23];
  fVar15 = -(float)param_1[0x20];
  fVar20 = fVar32;
  fVar16 = fVar33;
  fVar17 = fVar34;
  fVar18 = fVar35;
  do {
    uVar11 = param_5;
    if ((uint)(*param_1 - param_1[4]) <= param_5) {
      uVar11 = *param_1 - param_1[4];
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar11 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar11;
    }
    uVar11 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar11 = uVar9;
    }
    uVar9 = param_1[0x12] - param_1[0x16];
    if (uVar11 < (uint)(param_1[0x12] - param_1[0x16])) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar10 = (ulonglong)uVar11;
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar28 = *pfVar1 * fVar5 + fVar12 * fVar32;
        fVar29 = *pfVar2 * fVar6 + fVar13 * fVar33;
        fVar30 = *pfVar3 * fVar7 + fVar15 * fVar34;
        fVar31 = *pfVar4 * fVar8 + fVar14 * fVar35;
        fVar24 = pfVar1[1] * fVar5 + fVar28 * fVar12;
        fVar25 = pfVar2[1] * fVar6 + fVar29 * fVar13;
        fVar26 = pfVar3[1] * fVar7 + fVar30 * fVar15;
        fVar27 = pfVar4[1] * fVar8 + fVar31 * fVar14;
        fVar16 = pfVar1[2] * fVar5 + fVar24 * fVar12;
        fVar17 = pfVar2[2] * fVar6 + fVar25 * fVar13;
        fVar18 = pfVar3[2] * fVar7 + fVar26 * fVar15;
        fVar19 = pfVar4[2] * fVar8 + fVar27 * fVar14;
        fVar32 = pfVar1[3] * fVar5 + fVar16 * fVar12;
        fVar33 = pfVar2[3] * fVar6 + fVar17 * fVar13;
        fVar34 = pfVar3[3] * fVar7 + fVar18 * fVar15;
        fVar35 = pfVar4[3] * fVar8 + fVar19 * fVar14;
        *param_3 = (fVar28 + fVar30 + *param_3) - (fVar29 + fVar31);
        param_3[1] = (fVar24 + fVar26 + param_3[1]) - (fVar25 + fVar27);
        param_3[2] = (fVar16 + fVar18 + param_3[2]) - (fVar17 + fVar19);
        param_3[3] = (fVar32 + fVar34 + param_3[3]) - (fVar33 + fVar35);
        param_3 = param_3 + 4;
        *param_4 = (fVar28 + fVar29 + *param_4) - (fVar30 + fVar31);
        param_4[1] = (fVar24 + fVar25 + param_4[1]) - (fVar26 + fVar27);
        param_4[2] = (fVar16 + fVar17 + param_4[2]) - (fVar18 + fVar19);
        param_4[3] = (fVar32 + fVar33 + param_4[3]) - (fVar34 + fVar35);
        param_4 = param_4 + 4;
        fVar20 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar20 = (fVar28 + fVar29 + fVar30 + fVar31) * -0.5 + fVar20;
        fVar21 = (fVar24 + fVar25 + fVar26 + fVar27) * -0.5 + *pfVar1;
        fVar22 = (fVar16 + fVar17 + fVar18 + fVar19) * -0.5 + *pfVar2;
        fVar23 = (fVar32 + fVar33 + fVar34 + fVar35) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar20 + fVar29;
        pfVar1[1] = fVar21 + fVar25;
        pfVar1[2] = fVar22 + fVar17;
        pfVar1[3] = fVar23 + fVar33;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar20 + fVar30;
        pfVar1[1] = fVar21 + fVar26;
        pfVar1[2] = fVar22 + fVar18;
        pfVar1[3] = fVar23 + fVar34;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar20 + fVar31;
        pfVar1[1] = fVar21 + fVar27;
        pfVar1[2] = fVar22 + fVar19;
        pfVar1[3] = fVar23 + fVar35;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar20 + fVar28;
        pfVar1[1] = fVar21 + fVar24;
        pfVar1[2] = fVar22 + fVar16;
        pfVar1[3] = fVar23 + fVar32;
        param_1[0x16] = param_1[0x16] + 4;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (uVar11 * 4 < uVar9) {
      uVar10 = (ulonglong)(uVar9 + uVar11 * -4);
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        fVar32 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar12 * fVar32;
        fVar33 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar6 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar7 + fVar15 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar14 * fVar35;
        *param_3 = fVar35 * -1.0 + fVar34 * 1.0 + fVar33 * -1.0 + fVar32 * 1.0 + *param_3;
        param_3 = param_3 + 1;
        *param_4 = fVar35 * -1.0 + fVar34 * -1.0 + fVar33 * 1.0 + fVar32 * 1.0 + *param_4;
        param_4 = param_4 + 1;
        fVar16 = fVar33 * -0.5 + fVar32 * -0.5;
        fVar17 = fVar32 * -0.5 + fVar33 * -0.5;
        fVar18 = fVar35 * -0.5 + fVar34 * -0.5;
        fVar19 = fVar34 * -0.5 + fVar35 * -0.5;
        fVar20 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar19 + fVar17 + fVar33 + fVar20;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar16 + fVar18 + fVar34 + fVar20;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar17 + fVar19 + fVar35 + fVar20;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar18 + fVar16 + fVar32 + fVar20;
        param_1[0x16] = param_1[0x16] + 1;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    if (param_1[0x16] == param_1[0x12]) {
      param_1[0x16] = 0;
    }
    param_5 = param_5 - uVar9;
  } while (param_5 != 0);
  param_1[0x18] = (int)fVar32;
  param_1[0x1b] = (int)fVar33;
  param_1[0x1e] = (int)fVar34;
  param_1[0x21] = (int)fVar35;
  return;
}



// FUNCTION 1453c78a0 FUN_1453c78a0 body=1419 status=ok
// SIG undefined FUN_1453c78a0(void)

void FUN_1453c78a0(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
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
  float fVar35;
  
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1c];
  fVar33 = (float)param_1[0x1b];
  fVar34 = (float)param_1[0x1e];
  fVar35 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1f];
  fVar12 = -(float)param_1[0x1a];
  fVar32 = (float)param_1[0x18];
  fVar13 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar14 = -(float)param_1[0x23];
  fVar15 = -(float)param_1[0x20];
  fVar20 = fVar32;
  fVar16 = fVar33;
  fVar17 = fVar34;
  fVar18 = fVar35;
  do {
    uVar11 = param_6;
    if ((uint)(*param_1 - param_1[4]) <= param_6) {
      uVar11 = *param_1 - param_1[4];
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar11 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar11;
    }
    uVar11 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar11 = uVar9;
    }
    uVar9 = param_1[0x12] - param_1[0x16];
    if (uVar11 < (uint)(param_1[0x12] - param_1[0x16])) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar10 = (ulonglong)uVar11;
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar28 = *pfVar1 * fVar5 + fVar12 * fVar32;
        fVar29 = *pfVar2 * fVar6 + fVar13 * fVar33;
        fVar30 = *pfVar3 * fVar7 + fVar15 * fVar34;
        fVar31 = *pfVar4 * fVar8 + fVar14 * fVar35;
        fVar24 = pfVar1[1] * fVar5 + fVar28 * fVar12;
        fVar25 = pfVar2[1] * fVar6 + fVar29 * fVar13;
        fVar26 = pfVar3[1] * fVar7 + fVar30 * fVar15;
        fVar27 = pfVar4[1] * fVar8 + fVar31 * fVar14;
        fVar16 = pfVar1[2] * fVar5 + fVar24 * fVar12;
        fVar17 = pfVar2[2] * fVar6 + fVar25 * fVar13;
        fVar18 = pfVar3[2] * fVar7 + fVar26 * fVar15;
        fVar19 = pfVar4[2] * fVar8 + fVar27 * fVar14;
        fVar32 = pfVar1[3] * fVar5 + fVar16 * fVar12;
        fVar33 = pfVar2[3] * fVar6 + fVar17 * fVar13;
        fVar34 = pfVar3[3] * fVar7 + fVar18 * fVar15;
        fVar35 = pfVar4[3] * fVar8 + fVar19 * fVar14;
        *param_3 = (fVar28 + fVar30 + *param_3) - (fVar29 + fVar31);
        param_3[1] = (fVar24 + fVar26 + param_3[1]) - (fVar25 + fVar27);
        param_3[2] = (fVar16 + fVar18 + param_3[2]) - (fVar17 + fVar19);
        param_3[3] = (fVar32 + fVar34 + param_3[3]) - (fVar33 + fVar35);
        param_3 = param_3 + 4;
        *param_4 = (fVar28 + fVar29 + *param_4) - (fVar30 + fVar31);
        param_4[1] = (fVar24 + fVar25 + param_4[1]) - (fVar26 + fVar27);
        param_4[2] = (fVar16 + fVar17 + param_4[2]) - (fVar18 + fVar19);
        param_4[3] = (fVar32 + fVar33 + param_4[3]) - (fVar34 + fVar35);
        param_4 = param_4 + 4;
        *param_5 = (fVar28 + fVar31 + *param_5) - (fVar29 + fVar30);
        param_5[1] = (fVar24 + fVar27 + param_5[1]) - (fVar25 + fVar26);
        param_5[2] = (fVar16 + fVar19 + param_5[2]) - (fVar17 + fVar18);
        param_5[3] = (fVar32 + fVar35 + param_5[3]) - (fVar33 + fVar34);
        param_5 = param_5 + 4;
        fVar20 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar20 = (fVar28 + fVar29 + fVar30 + fVar31) * -0.5 + fVar20;
        fVar21 = (fVar24 + fVar25 + fVar26 + fVar27) * -0.5 + *pfVar1;
        fVar22 = (fVar16 + fVar17 + fVar18 + fVar19) * -0.5 + *pfVar2;
        fVar23 = (fVar32 + fVar33 + fVar34 + fVar35) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar20 + fVar29;
        pfVar1[1] = fVar21 + fVar25;
        pfVar1[2] = fVar22 + fVar17;
        pfVar1[3] = fVar23 + fVar33;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar20 + fVar30;
        pfVar1[1] = fVar21 + fVar26;
        pfVar1[2] = fVar22 + fVar18;
        pfVar1[3] = fVar23 + fVar34;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar20 + fVar31;
        pfVar1[1] = fVar21 + fVar27;
        pfVar1[2] = fVar22 + fVar19;
        pfVar1[3] = fVar23 + fVar35;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar20 + fVar28;
        pfVar1[1] = fVar21 + fVar24;
        pfVar1[2] = fVar22 + fVar16;
        pfVar1[3] = fVar23 + fVar32;
        param_1[0x16] = param_1[0x16] + 4;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (uVar11 * 4 < uVar9) {
      uVar10 = (ulonglong)(uVar9 + uVar11 * -4);
      fVar32 = fVar20;
      fVar33 = fVar16;
      fVar34 = fVar17;
      fVar35 = fVar18;
      do {
        fVar32 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar12 * fVar32;
        fVar33 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar6 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar7 + fVar15 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar14 * fVar35;
        *param_3 = fVar35 * -1.0 + fVar34 * 1.0 + fVar33 * -1.0 + fVar32 * 1.0 + *param_3;
        param_3 = param_3 + 1;
        *param_4 = fVar35 * -1.0 + fVar34 * -1.0 + fVar33 * 1.0 + fVar32 * 1.0 + *param_4;
        param_4 = param_4 + 1;
        *param_5 = fVar35 * 1.0 + fVar34 * -1.0 + fVar33 * -1.0 + fVar32 * 1.0 + *param_5;
        param_5 = param_5 + 1;
        fVar16 = fVar33 * -0.5 + fVar32 * -0.5;
        fVar17 = fVar32 * -0.5 + fVar33 * -0.5;
        fVar18 = fVar35 * -0.5 + fVar34 * -0.5;
        fVar19 = fVar34 * -0.5 + fVar35 * -0.5;
        fVar20 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar19 + fVar17 + fVar33 + fVar20;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar16 + fVar18 + fVar34 + fVar20;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar17 + fVar19 + fVar35 + fVar20;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar18 + fVar16 + fVar32 + fVar20;
        param_1[0x16] = param_1[0x16] + 1;
        uVar10 = uVar10 - 1;
        fVar20 = fVar32;
        fVar16 = fVar33;
        fVar17 = fVar34;
        fVar18 = fVar35;
      } while (uVar10 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    if (param_1[0x16] == param_1[0x12]) {
      param_1[0x16] = 0;
    }
    param_6 = param_6 - uVar9;
  } while (param_6 != 0);
  param_1[0x18] = (int)fVar32;
  param_1[0x1b] = (int)fVar33;
  param_1[0x1e] = (int)fVar34;
  param_1[0x21] = (int)fVar35;
  return;
}



// FUNCTION 1453c7e30 FUN_1453c7e30 body=163 status=ok
// SIG undefined FUN_1453c7e30(void)

void FUN_1453c7e30(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1453c7ee0(param_1[0x12]);
  FUN_1453c6c50(param_1 + 0x18,param_2,uVar1,param_4,*param_1);
  FUN_1453c6c50(param_1 + 0x1b,param_2,uVar1,param_4,param_1[6]);
  FUN_1453c6c50(param_1 + 0x1e,param_2,uVar1,param_4,param_1[0xc]);
  FUN_1453c6c50(param_1 + 0x21,param_2,uVar1,param_4,param_1[0x12]);
  return;
}



// FUNCTION 1453c7ee0 FUN_1453c7ee0 body=160 status=ok
// SIG undefined FUN_1453c7ee0(void)

void FUN_1453c7ee0(uint param_1,float param_2,float param_3,uint param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  
  dVar1 = 1.0 - (double)param_3 * (double)param_3;
  dVar3 = pow(10.0,((double)param_1 * -3.0) / ((double)param_2 * (double)param_4));
  dVar3 = log10(dVar3);
  auVar4._0_8_ = dVar3 * 0.5756462732485116;
  auVar4._8_8_ = extraout_XMM0_Qb;
  if (1.0 < auVar4._0_8_ * dVar1) {
    dVar1 = 1.0 / auVar4._0_8_;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = 1.0 - dVar1;
  sqrtpd(auVar4,auVar2);
  return;
}



// FUNCTION 1453c7f80 FUN_1453c7f80 body=635 status=ok
// SIG undefined FUN_1453c7f80(void)

void FUN_1453c7f80(longlong *param_1,uint param_2,ulonglong param_3,float *param_4,float param_5,
                  float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = *(uint *)(param_1 + 1);
  param_3 = param_3 & 0xffffffff;
  if ((uVar7 & 0xf00) == 0x100) {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    uVar6 = uVar7 >> 0xc;
    if (1.0 <= param_5) {
      param_5 = 1.0;
    }
    if ((uVar6 & 1) != 0) {
      fVar11 = 1.0;
    }
    if ((uVar6 & 2) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 0x10) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 0x20) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 4) != 0) {
      fVar12 = param_5 * param_5;
    }
    if ((uVar6 & 8) != 0) {
      fVar13 = param_6 * param_6;
    }
    fVar11 = SQRT(1.0 / (fVar12 + fVar11 + fVar13));
    memset(param_4,0,(longlong)(int)param_2 << 2);
    uVar6 = 1;
    uVar10 = 0;
    uVar7 = uVar7 >> 0xc;
    while (uVar7 != 0) {
      if (((uVar7 & uVar6) != 0) || (uVar7 == 8)) {
        fVar12 = fVar11;
        if ((uVar6 & 4) != 0) {
          fVar12 = fVar11 * param_5;
        }
        if (uVar7 == 8) {
          uVar7 = 0;
          fVar12 = fVar12 * param_6;
        }
        else if ((uVar6 & 8) != 0) goto LAB_1453c8104;
        pfVar5 = (float *)(*param_1 +
                          ((ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar10 + param_3) * 4);
        if (0 < (int)param_2) {
          uVar9 = (ulonglong)((param_2 - 1 >> 2) + 1);
          pfVar4 = param_4;
          do {
            fVar13 = *pfVar5;
            fVar1 = pfVar5[1];
            fVar2 = pfVar5[2];
            fVar3 = pfVar5[3];
            pfVar5 = pfVar5 + 4;
            *pfVar4 = fVar12 * fVar13 + *pfVar4;
            pfVar4[1] = fVar12 * fVar1 + pfVar4[1];
            pfVar4[2] = fVar12 * fVar2 + pfVar4[2];
            pfVar4[3] = fVar12 * fVar3 + pfVar4[3];
            pfVar4 = pfVar4 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar7 = uVar7 & ~uVar6;
        uVar10 = uVar10 + 1;
      }
LAB_1453c8104:
      uVar6 = uVar6 * 2;
    }
  }
  else if ((uVar7 & 0xf00) == 0x200) {
    memcpy(param_4,(void *)(*param_1 + param_3 * 4),(ulonglong)param_2 << 2);
  }
  else {
    fVar11 = 1.0 / SQRT((float)(uVar7 & 0xff));
    memset(param_4,0,(longlong)(int)param_2 << 2);
    uVar9 = 0;
    if ((char)param_1[1] != '\0') {
      do {
        pfVar5 = (float *)(*param_1 + (*(ushort *)(param_1 + 2) * uVar9 + param_3) * 4);
        if (0 < (int)param_2) {
          uVar8 = (ulonglong)((param_2 - 1 >> 2) + 1);
          pfVar4 = param_4;
          do {
            fVar12 = *pfVar5;
            fVar13 = pfVar5[1];
            fVar1 = pfVar5[2];
            fVar2 = pfVar5[3];
            pfVar5 = pfVar5 + 4;
            *pfVar4 = fVar11 * fVar12 + *pfVar4;
            pfVar4[1] = fVar11 * fVar13 + pfVar4[1];
            pfVar4[2] = fVar11 * fVar1 + pfVar4[2];
            pfVar4[3] = fVar11 * fVar2 + pfVar4[3];
            pfVar4 = pfVar4 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < *(byte *)(param_1 + 1));
    }
  }
  return;
}



// FUNCTION 1453c8200 FUN_1453c8200 body=577 status=ok
// SIG undefined FUN_1453c8200(void)

void FUN_1453c8200(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,uint param_10)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
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
  float fVar16;
  float fVar17;
  
  if (((param_5 == param_4) && (param_7 == param_6)) && (param_9 == param_8)) {
    pfVar1 = param_1 + param_10;
    if (param_1 < pfVar1) {
      lVar6 = (longlong)param_2 - (longlong)param_1;
      lVar7 = (longlong)param_3 - (longlong)param_1;
      do {
        pfVar2 = (float *)(lVar6 + (longlong)param_1);
        fVar8 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar3 = (float *)(lVar7 + (longlong)param_1);
        fVar4 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4 + *pfVar3 * param_8;
        param_1[1] = fVar8 * param_6 + param_1[1] * param_4 + fVar4 * param_8;
        param_1[2] = fVar16 * param_6 + param_1[2] * param_4 + fVar9 * param_8;
        param_1[3] = fVar17 * param_6 + param_1[3] * param_4 + fVar10 * param_8;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    uVar5 = (ulonglong)param_10;
    pfVar1 = param_1 + uVar5;
    fVar8 = 1.0 / (float)uVar5;
    fVar17 = (param_5 - param_4) * fVar8;
    fVar16 = (param_7 - param_6) * fVar8;
    fVar8 = (param_9 - param_8) * fVar8;
    if (param_1 < pfVar1) {
      if (3 < uVar5) {
        do {
          fVar10 = param_4 + fVar17 + fVar17;
          fVar4 = param_3[1];
          fVar12 = param_8 + fVar8 + fVar8;
          *param_1 = param_4 * *param_1 + param_6 * *param_2 + param_8 * *param_3;
          fVar14 = param_6 + fVar16 + fVar16;
          fVar11 = fVar10 + fVar17;
          fVar9 = param_3[2];
          fVar13 = fVar12 + fVar8;
          param_1[1] = (param_6 + fVar16) * param_2[1] + (param_4 + fVar17) * param_1[1] +
                       (param_8 + fVar8) * fVar4;
          fVar15 = fVar14 + fVar16;
          param_4 = fVar11 + fVar17;
          fVar4 = param_3[3];
          param_8 = fVar13 + fVar8;
          param_3 = param_3 + 4;
          param_1[2] = fVar14 * param_2[2] + fVar10 * param_1[2] + fVar12 * fVar9;
          pfVar2 = param_2 + 3;
          param_6 = fVar15 + fVar16;
          param_2 = param_2 + 4;
          param_1[3] = fVar15 * *pfVar2 + fVar11 * param_1[3] + fVar13 * fVar4;
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      lVar6 = (longlong)param_2 - (longlong)param_3;
      do {
        fVar9 = param_6 * *(float *)(lVar6 + (longlong)param_3);
        param_6 = param_6 + fVar16;
        fVar4 = *param_3;
        param_3 = param_3 + 1;
        *param_1 = fVar9 + param_4 * *param_1 + param_8 * fVar4;
        param_1 = param_1 + 1;
        param_4 = param_4 + fVar17;
        param_8 = param_8 + fVar8;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453c8450 FUN_1453c8450 body=575 status=ok
// SIG undefined FUN_1453c8450(void)

uint FUN_1453c8450(uint *param_1,uint *param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    return 0x80260201;
  }
  if ((param_3 & 0xfffffffe) != 0) {
    return 0x80260205;
  }
  if (param_4 == 0) {
    return 0x80260200;
  }
  uVar1 = *param_2;
  if (((uVar1 - 0x40 < 0xc1) && ((uVar1 & 0x3f) == 0)) && (*param_1 = uVar1, param_2[1] == 48000)) {
    param_1[1] = 48000;
    if (param_2[2] < 0xd) {
      param_1[2] = param_2[2];
      uVar1 = param_2[3];
      if ((uVar1 != 0) && (uVar1 <= param_2[2])) {
        param_1[3] = uVar1;
        uVar1 = param_2[4];
        if ((param_2[3] <= uVar1) && ((uVar1 & 3) == 0)) {
          param_1[4] = uVar1;
          bVar5 = 0;
          param_1[5] = param_2[5];
          uVar6 = 0;
          uVar1 = param_2[5];
          uVar2 = param_2[3];
          param_1[6] = 0;
          param_1[7] = 0;
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
          uVar7 = uVar1;
          if (uVar1 != 0) {
            do {
              if (0xb < (uint)uVar6) break;
              if (((uVar7 & 1) != 0) && (iVar4 = 1 << (bVar5 & 0x1f), iVar4 != 8)) {
                if (iVar4 < 0x201) {
                  if (iVar4 == 0x200) {
                    uVar3 = 4;
                  }
                  else if (iVar4 == 1) {
                    uVar3 = 0;
                  }
                  else if (iVar4 == 2) {
                    uVar3 = 1;
                  }
                  else if (iVar4 == 4) {
                    uVar3 = 2;
                  }
                  else if (iVar4 == 0x10) {
                    uVar3 = 6;
                  }
                  else {
                    if (iVar4 != 0x20) {
                      return 0x80260202;
                    }
                    uVar3 = 7;
                  }
                }
                else if (iVar4 == 0x400) {
                  uVar3 = 5;
                }
                else if (iVar4 == 0x1000) {
                  uVar3 = 8;
                }
                else if (iVar4 == 0x4000) {
                  uVar3 = 9;
                }
                else if (iVar4 == 0x8000) {
                  uVar3 = 10;
                }
                else {
                  if (iVar4 != 0x20000) {
                    return 0x80260202;
                  }
                  uVar3 = 0xb;
                }
                param_1[uVar6 + 6] = uVar3;
                uVar6 = (ulonglong)((uint)uVar6 + 1);
              }
              bVar5 = bVar5 + 1;
              uVar7 = uVar7 >> 1;
            } while (uVar7 != 0);
            if ((uVar1 & 8) != 0) {
              param_1[uVar6 + 6] = 3;
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
          }
          if ((uint)uVar6 == uVar2) {
            *(char *)(param_1 + 0x14) = (char)param_2[6];
            iVar4 = FUN_1453c8d70(param_1,param_3,param_4);
            return -(uint)(iVar4 != 0) & 0x80800005;
          }
        }
      }
    }
  }
  return 0x80260202;
}



// FUNCTION 1453c8690 FUN_1453c8690 body=171 status=ok
// SIG undefined FUN_1453c8690(void)

int FUN_1453c8690(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 == 0) {
    return -0x7fd9fdff;
  }
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xa8),param_2);
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
  }
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0xf0),param_2);
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
  }
  if (*(code **)(param_1 + 0x148) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x138),param_2);
    if (iVar1 == 0) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



// FUNCTION 1453c8740 FUN_1453c8740 body=290 status=ok
// SIG undefined FUN_1453c8740(void)

int FUN_1453c8740(longlong param_1,uint *param_2,undefined4 param_3,uint param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return -0x7fd9fdff;
  }
  if ((param_4 & 0xfffffffe) != 0) {
    return -0x7fd9fdfb;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    return -0x7fd9fdfd;
  }
  iVar2 = FUN_1453c8f50(param_1,param_4,param_5);
  if (iVar2 != 0) {
    return -0x7f7ffffb;
  }
  uVar6 = 0;
  iVar2 = 0;
  if (*param_2 != 0) {
    do {
      uVar5 = 0;
      piVar3 = (int *)(param_1 + 0x58);
      do {
        if (*piVar3 == *(int *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar6 * 0x10)) {
          lVar1 = param_1 + uVar5 * 0x48;
          iVar2 = (**(code **)(lVar1 + 0x80))
                            (*(undefined8 *)(lVar1 + 0x60),
                             *(undefined8 *)
                              (*(longlong *)(param_2 + 2) + 8 + (ulonglong)uVar6 * 0x10),param_3,
                             param_5);
          if (iVar2 != 0) {
            return -0x7f7ffff8;
          }
          break;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar3 = piVar3 + 0x12;
      } while (uVar4 < 4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_2);
  }
  return iVar2;
}



// FUNCTION 1453c8870 FUN_1453c8870 body=94 status=ok
// SIG undefined FUN_1453c8870(void)

undefined8 FUN_1453c8870(longlong param_1,int param_2,uint param_3)

{
  if (((param_1 != 0) && (param_2 < 5)) && (param_3 < 2)) {
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      return 0x80260203;
    }
    if (*(int *)(param_1 + 0x58) == param_2) {
      *(uint *)(param_1 + 0x98) = param_3;
    }
    if (*(int *)(param_1 + 0xa0) == param_2) {
      *(uint *)(param_1 + 0xe0) = param_3;
    }
    if (*(int *)(param_1 + 0xe8) == param_2) {
      *(uint *)(param_1 + 0x128) = param_3;
    }
    if (*(int *)(param_1 + 0x130) == param_2) {
      *(uint *)(param_1 + 0x170) = param_3;
    }
    return 0;
  }
  return 0x80260201;
}



// FUNCTION 1453c88e0 FUN_1453c88e0 body=310 status=ok
// SIG undefined FUN_1453c88e0(void)

undefined8 FUN_1453c88e0(uint *param_1,void *param_2,void *param_3,longlong param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  short sVar5;
  void *pvVar6;
  
  sVar5 = 0;
  if ((((param_1 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != (void *)0x0)) &&
     (param_4 != 0)) {
    pvVar3 = *(void **)(param_4 + 0x20);
    if ((param_1[0x12] & 1) == 0) {
      return 0x80260203;
    }
    pvVar6 = param_2;
    if (param_5 <= *param_1) {
      do {
        lVar2 = (longlong)sVar5;
        pvVar4 = pvVar3;
        if (param_1[lVar2 * 0x12 + 0x16] == 0xffffffff) break;
        if (param_1[lVar2 * 0x12 + 0x26] != 1) {
          iVar1 = (**(code **)(param_1 + lVar2 * 0x12 + 0x1e))
                            (*(undefined8 *)(param_1 + lVar2 * 0x12 + 0x18),pvVar6,pvVar3,param_4,
                             param_5);
          if (iVar1 != 0) {
            return 0x80800005;
          }
          pvVar4 = param_3;
          pvVar6 = pvVar3;
          if (pvVar3 == param_3) {
            pvVar4 = *(void **)(param_4 + 0x20);
          }
        }
        sVar5 = sVar5 + 1;
        pvVar3 = pvVar4;
      } while (sVar5 < 4);
      if (pvVar4 == param_3) {
        memcpy(param_3,*(void **)(param_4 + 0x20),(ulonglong)(param_5 * param_1[4] * 4));
      }
      if (pvVar6 == param_2) {
        memcpy(param_3,param_2,(ulonglong)(param_5 * param_1[4] * 4));
      }
      return 0;
    }
  }
  return 0x80260201;
}



// FUNCTION 1453c8a20 FUN_1453c8a20 body=572 status=ok
// SIG undefined FUN_1453c8a20(void)

undefined8 FUN_1453c8a20(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    return 0x80260203;
  }
  iVar1 = *param_2;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      uVar3 = 0;
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x58 + uVar5 * 0x48) == 1) {
          param_2[4] = 0x1020001;
          iVar1 = (**(code **)(param_1 + uVar5 * 0x48 + 0x88))
                            (*(undefined8 *)(param_1 + 0x60 + uVar5 * 0x48));
          if (iVar1 != 0) {
            return 0x80800008;
          }
          while (*(int *)(param_1 + 0x58 + (ulonglong)uVar3 * 0x48) != 3) {
            uVar3 = uVar3 + 1;
            if (3 < uVar3) {
              return 0x80800005;
            }
          }
          param_2 = param_2 + 0x48;
          goto LAB_1453c8c13;
        }
        uVar4 = (short)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 4);
    }
    else {
      if (iVar1 != 3) {
        return 0x80260204;
      }
      uVar3 = 0;
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x58 + uVar5 * 0x48) == 1) {
          param_2[4] = 0x1030001;
          iVar1 = (**(code **)(param_1 + uVar5 * 0x48 + 0x88))
                            (*(undefined8 *)(param_1 + 0x60 + uVar5 * 0x48));
          if (iVar1 != 0) {
            return 0x80800008;
          }
          while (*(int *)(param_1 + 0x58 + (ulonglong)uVar3 * 0x48) != 3) {
            uVar3 = uVar3 + 1;
            if (3 < uVar3) {
              return 0x80800005;
            }
          }
          param_2[0x68] = 0x1020003;
          goto LAB_1453c8c19;
        }
        uVar4 = (short)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 4);
    }
    return 0x80800005;
  }
  uVar3 = 0;
  uVar5 = 0;
  while (*(int *)(param_1 + 0x58 + uVar5 * 0x48) != 1) {
    uVar4 = (short)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    if (3 < uVar4) {
      return 0x80800005;
    }
  }
  param_2[4] = 0x1010001;
  iVar1 = (**(code **)(param_1 + uVar5 * 0x48 + 0x88))
                    (*(undefined8 *)(param_1 + 0x60 + uVar5 * 0x48));
  if (iVar1 != 0) {
    return 0x80800008;
  }
  while (*(int *)(param_1 + 0x58 + (ulonglong)uVar3 * 0x48) != 3) {
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      return 0x80800005;
    }
  }
  param_2 = param_2 + 0x38;
LAB_1453c8c13:
  *param_2 = 0x1010003;
LAB_1453c8c19:
  uVar2 = (**(code **)(param_1 + (ulonglong)uVar3 * 0x48 + 0x88))
                    (*(undefined8 *)(param_1 + 0x60 + (ulonglong)uVar3 * 0x48));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  return 0x80800008;
}



// FUNCTION 1453c8c60 FUN_1453c8c60 body=260 status=ok
// SIG undefined FUN_1453c8c60(void)

undefined8 FUN_1453c8c60(uint *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return 0x80260201;
  }
  uVar6 = 0;
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 2);
  if (*param_1 != 0) {
    do {
      uVar5 = (ulonglong)uVar6;
      iVar4 = *(int *)(lVar3 + uVar5 * 0x10);
      lVar1 = lVar3 + uVar5 * 0x10;
      if (iVar4 == 0) {
        iVar4 = FUN_1455752c0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10),
                              param_3,param_4);
      }
      else if (iVar4 == 1) {
        iVar4 = FUN_1455776e0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10),
                              param_3,param_4);
      }
      else if (iVar4 == 2) {
        iVar4 = FUN_145578f50(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10),
                              param_3,param_4);
      }
      else {
        if (iVar4 != 3) {
          return 0x80800008;
        }
        iVar4 = FUN_145578810(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10),
                              param_3,param_4);
      }
      if (iVar4 != 0) {
        return 0x80800008;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_1);
  }
  return 0;
}



// FUNCTION 1453c8d70 FUN_1453c8d70 body=467 status=ok
// SIG undefined FUN_1453c8d70(void)

undefined8 FUN_1453c8d70(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80260201;
  }
  local_74 = *param_1;
  local_60 = *(undefined8 *)(param_1 + 6);
  uStack_58 = *(undefined8 *)(param_1 + 8);
  local_78 = param_1[1];
  local_50 = *(undefined8 *)(param_1 + 10);
  uStack_48 = *(undefined8 *)(param_1 + 0xc);
  local_6c = param_1[2];
  local_70 = param_1[3];
  local_68 = param_1[4];
  local_64 = param_1[5];
  piVar5 = param_1 + 0x16;
  local_30 = *(undefined1 *)(param_1 + 0x14);
  uVar1 = (ulonglong)(param_2 & 1);
  uVar6 = 0;
  local_40 = param_1[0xe];
  uStack_3c = param_1[0xf];
  uStack_38 = param_1[0x10];
  uStack_34 = param_1[0x11];
  lVar7 = 0;
  do {
    if (uVar6 < *(uint *)(&DAT_149d47de0 + uVar1 * 0x10)) {
      iVar3 = *(int *)((&PTR_DAT_149d47de8)[uVar1 * 2] + lVar7);
    }
    else {
      iVar3 = -1;
    }
    *piVar5 = iVar3;
    if (piVar5 == (int *)0x0) {
      return 0x80800005;
    }
    piVar5[0x10] = 1;
    piVar5[0x11] = 0;
    uVar2 = FUN_1453c9340();
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    iVar3 = *piVar5;
    if (iVar3 == -1) {
      puVar4 = (undefined4 *)0x0;
    }
    else if (iVar3 == 0) {
      puVar4 = param_1 + 0x176;
    }
    else if (iVar3 == 1) {
      puVar4 = param_1 + 0x2ce;
    }
    else if (iVar3 == 2) {
      puVar4 = param_1 + 0x5e;
    }
    else {
      if (iVar3 != 3) {
        piVar5[2] = 0;
        piVar5[3] = 0;
        return 0x80260201;
      }
      puVar4 = param_1 + 0x7c;
    }
    uVar2 = 0;
    *(undefined4 **)(piVar5 + 2) = puVar4;
    if (*(uint *)(&DAT_149d47de0 + uVar1 * 0x10) <= uVar6) break;
    piVar5[0x10] = *(int *)((&PTR_DAT_149d47de8)[uVar1 * 2] + lVar7 + 4);
    uVar2 = (**(code **)(piVar5 + 4))(*(undefined8 *)(piVar5 + 2),&local_78,param_3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    piVar5[0x11] = 1;
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 0x12;
    lVar7 = lVar7 + 0x10;
  } while (uVar6 < 4);
  param_1[0x12] = 1;
  param_1[0x13] = param_2;
  return uVar2;
}



// FUNCTION 1453c8f50 FUN_1453c8f50 body=683 status=ok
// SIG undefined FUN_1453c8f50(void)

ulonglong FUN_1453c8f50(longlong param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 local_78 [80];
  
  uVar4 = 0;
  uVar1 = 0;
  uVar10 = 0;
  if (param_1 == 0) {
    return 0x80260201;
  }
  if (((param_2 ^ *(uint *)(param_1 + 0x4c)) & 1) != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x98);
      uVar10 = 0;
    }
    else if (*(int *)(param_1 + 0x58) == 1) {
      uVar10 = *(undefined4 *)(param_1 + 0x98);
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xe0);
    }
    else if (*(int *)(param_1 + 0xa0) == 1) {
      uVar10 = *(undefined4 *)(param_1 + 0xe0);
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x128);
    }
    else if (*(int *)(param_1 + 0xe8) == 1) {
      uVar10 = *(undefined4 *)(param_1 + 0x128);
    }
    if (*(int *)(param_1 + 0x130) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x170);
    }
    else if (*(int *)(param_1 + 0x130) == 1) {
      uVar10 = *(undefined4 *)(param_1 + 0x170);
    }
    uVar8 = (ulonglong)(param_2 & 1);
    piVar6 = (int *)(param_1 + 0x58);
    uVar2 = 0;
    lVar9 = 0;
    do {
      uVar5 = (uint)uVar2;
      if (uVar5 < *(uint *)(&DAT_149d47de0 + uVar8 * 0x10)) {
        iVar3 = *(int *)((&PTR_DAT_149d47de8)[uVar8 * 2] + lVar9);
      }
      else {
        iVar3 = -1;
      }
      *piVar6 = iVar3;
      uVar1 = FUN_1453c9340(param_1 + (uVar2 * 9 + 0xb) * 8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (piVar6 == (int *)0x0) {
        return 0x80800005;
      }
      iVar3 = *piVar6;
      if (iVar3 == -1) {
        lVar7 = 0;
      }
      else if (iVar3 == 0) {
        lVar7 = param_1 + 0x5d8;
      }
      else if (iVar3 == 1) {
        lVar7 = param_1 + 0xb38;
      }
      else if (iVar3 == 2) {
        lVar7 = param_1 + 0x178;
      }
      else {
        if (iVar3 != 3) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 0x80260201;
        }
        lVar7 = param_1 + 0x1f0;
      }
      uVar1 = 0;
      *(longlong *)(piVar6 + 2) = lVar7;
      if ((uVar5 < *(uint *)(&DAT_149d47de0 + uVar8 * 0x10)) && (piVar6[0x11] == 0)) {
        piVar6[0x10] = *(int *)((&PTR_DAT_149d47de8)[uVar8 * 2] + lVar9 + 4);
        uVar2 = (**(code **)(piVar6 + 4))(lVar7,local_78,param_3);
        uVar1 = uVar2 & 0xffffffff;
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        piVar6[0x11] = 1;
      }
      uVar2 = (ulonglong)(uVar5 + 1);
      lVar9 = lVar9 + 0x10;
      piVar6 = piVar6 + 0x12;
    } while (uVar5 + 1 < 4);
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined4 *)(param_1 + 0x98) = uVar4;
    }
    else if (*(int *)(param_1 + 0x58) == 1) {
      *(undefined4 *)(param_1 + 0x98) = uVar10;
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(undefined4 *)(param_1 + 0xe0) = uVar4;
    }
    else if (*(int *)(param_1 + 0xa0) == 1) {
      *(undefined4 *)(param_1 + 0xe0) = uVar10;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      *(undefined4 *)(param_1 + 0x128) = uVar4;
    }
    else if (*(int *)(param_1 + 0xe8) == 1) {
      *(undefined4 *)(param_1 + 0x128) = uVar10;
    }
    if (*(int *)(param_1 + 0x130) == 0) {
      *(undefined4 *)(param_1 + 0x170) = uVar4;
    }
    else if (*(int *)(param_1 + 0x130) == 1) {
      *(undefined4 *)(param_1 + 0x170) = uVar10;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(uint *)(param_1 + 0x4c) = param_2;
  }
  return uVar1;
}



// FUNCTION 1453c9200 FUN_1453c9200 body=309 status=ok
// SIG undefined FUN_1453c9200(void)

undefined8 FUN_1453c9200(uint param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar5 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  uVar6 = param_1;
  if (param_1 != 0) {
    do {
      if (0xb < uVar5) break;
      if (((uVar6 & 1) != 0) && (iVar1 = 1 << (bVar7 & 0x1f), iVar1 != 8)) {
        if (iVar1 < 0x201) {
          if (iVar1 == 0x200) {
            uVar4 = 4;
          }
          else if (iVar1 == 1) {
            uVar4 = 0;
          }
          else if (iVar1 == 2) {
            uVar4 = 1;
          }
          else if (iVar1 == 4) {
            uVar4 = 2;
          }
          else if (iVar1 == 0x10) {
            uVar4 = 6;
          }
          else {
            if (iVar1 != 0x20) {
              return 0x80260202;
            }
            uVar4 = 7;
          }
        }
        else if (iVar1 == 0x400) {
          uVar4 = 5;
        }
        else if (iVar1 == 0x1000) {
          uVar4 = 8;
        }
        else if (iVar1 == 0x4000) {
          uVar4 = 9;
        }
        else if (iVar1 == 0x8000) {
          uVar4 = 10;
        }
        else {
          if (iVar1 != 0x20000) {
            return 0x80260202;
          }
          uVar4 = 0xb;
        }
        uVar2 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)param_3 + uVar2 * 4) = uVar4;
      }
      bVar7 = bVar7 + 1;
      uVar6 = uVar6 >> 1;
    } while (uVar6 != 0);
    if ((param_1 & 8) != 0) {
      uVar2 = (ulonglong)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)((longlong)param_3 + uVar2 * 4) = 3;
    }
  }
  uVar3 = 0x80260202;
  if (uVar5 == param_2) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1453c9340 FUN_1453c9340 body=295 status=ok
// SIG undefined FUN_1453c9340(void)

code * FUN_1453c9340(int *param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  
  pcVar6 = (code *)0x0;
  pcVar4 = (code *)0x0;
  if (param_1 == (int *)0x0) {
    return (code *)0x80800005;
  }
  iVar1 = *param_1;
  pcVar5 = pcVar6;
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      pcVar3 = FUN_1455752c0;
      pcVar2 = FUN_145574d50;
      pcVar5 = FUN_1455750d0;
      pcVar7 = FUN_145574ea0;
      pcVar8 = FUN_145574e40;
      goto LAB_1453c9399;
    }
    if (iVar1 == 1) {
      pcVar3 = FUN_1455776e0;
      pcVar5 = FUN_145577410;
      pcVar6 = FUN_145577240;
      pcVar7 = FUN_1455759a0;
      pcVar8 = FUN_145575910;
      pcVar2 = FUN_145575500;
      goto LAB_1453c9399;
    }
    if (iVar1 == 2) {
      pcVar3 = FUN_145578f50;
      pcVar2 = FUN_145578ac0;
      pcVar5 = FUN_145578ef0;
      pcVar7 = FUN_145578b40;
      pcVar8 = (code *)&LAB_145578b30;
      goto LAB_1453c9399;
    }
    if (iVar1 == 3) {
      pcVar3 = FUN_145578810;
      pcVar5 = FUN_1455786b0;
      pcVar7 = FUN_145578120;
      pcVar8 = (code *)&LAB_145578110;
      pcVar2 = FUN_145577fa0;
      pcVar4 = pcVar6;
      pcVar6 = (code *)&LAB_1455785d0;
      goto LAB_1453c9399;
    }
    *param_1 = -1;
    pcVar5 = (code *)0x80260201;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  pcVar2 = pcVar6;
  pcVar3 = pcVar6;
  pcVar4 = pcVar5;
  pcVar5 = pcVar6;
  pcVar7 = pcVar6;
  pcVar8 = pcVar6;
LAB_1453c9399:
  *(code **)(param_1 + 4) = pcVar2;
  *(code **)(param_1 + 6) = pcVar8;
  *(code **)(param_1 + 10) = pcVar7;
  *(code **)(param_1 + 0xc) = pcVar6;
  *(code **)(param_1 + 8) = pcVar5;
  *(code **)(param_1 + 0xe) = pcVar3;
  return pcVar4;
}



// FUNCTION 1453c9470 FUN_1453c9470 body=43 status=ok
// SIG undefined FUN_1453c9470(void)

undefined8 * FUN_1453c9470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d47ec0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1453c94a0 FUN_1453c94a0 body=53 status=ok
// SIG undefined FUN_1453c94a0(void)

undefined8 * FUN_1453c94a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d47f00;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1453c94e0 FUN_1453c94e0 body=506 status=ok
// SIG undefined FUN_1453c94e0(void)

undefined8
FUN_1453c94e0(longlong param_1,longlong *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar9 = param_3[1];
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 5);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if ((param_4 < 0x31) || (uVar2 = *(uint *)(param_1 + 0x2c), uVar2 == 0)) {
LAB_1453c96b3:
    uVar9 = 0x1f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1c);
    *(undefined8 **)(param_1 + 0x68) = param_3 + 6;
    plVar7 = (longlong *)
             (**(code **)(*param_2 + 8))
                       (param_2,(ulonglong)bVar1 << 3,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                       );
    *(longlong **)(param_1 + 0x50) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = ((ulonglong)uVar2 * 2 + 0xf & 0xfffffffffffffff0) + (longlong)(param_3 + 6);
      if (1 < bVar1) {
        uVar11 = (ulonglong)(bVar1 - 1);
        lVar8 = 8;
        lVar10 = 0;
        do {
          *(ulonglong *)(lVar8 + *(longlong *)(param_1 + 0x50)) =
               *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x50)) +
               (ulonglong)*(uint *)(param_1 + 0x30) * 8;
          uVar11 = uVar11 - 1;
          lVar8 = lVar8 + 8;
          lVar10 = lVar10 + 8;
        } while (uVar11 != 0);
      }
      iVar5 = FUN_14556e040(1,*(undefined4 *)(param_1 + 0x14));
      if (iVar5 == 0) {
        if (*(longlong *)(param_1 + 0x50) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        goto LAB_1453c96b3;
      }
      lVar8 = (**(code **)(*param_2 + 8))
                        (param_2,iVar5,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                         ,0x68);
      *(longlong *)(param_1 + 0x40) = lVar8;
      if (lVar8 != 0) {
        FUN_14556e100(lVar8,1,*(undefined4 *)(param_1 + 0x14),param_5);
        uVar9 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)*(uint *)(param_1 + 0x14) << 2,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                           ,0x6e);
        *(undefined8 *)(param_1 + 0x70) = uVar9;
        uVar9 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)((*(uint *)(param_1 + 0x14) >> 1) + 1) << 3,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                           ,0x6f);
        *(undefined8 *)(param_1 + 0x78) = uVar9;
        lVar8 = *param_2;
        uVar6 = FUN_14556e0f0(*(undefined8 *)(param_1 + 0x40));
        lVar8 = (**(code **)(lVar8 + 8))
                          (param_2,uVar6,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                           ,0x70);
        *(longlong *)(param_1 + 0x48) = lVar8;
        if (((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
           (lVar8 != 0)) {
          *(byte *)(param_1 + 0x80) = (byte)(param_5 >> 2) & 1;
          return 1;
        }
      }
    }
    uVar9 = 0x34;
  }
  return uVar9;
}



// FUNCTION 1453c96e0 FUN_1453c96e0 body=159 status=ok
// SIG undefined FUN_1453c96e0(void)

undefined8 FUN_1453c96e0(longlong param_1,longlong *param_2)

{
  FUN_1453c9de0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return 1;
}



// FUNCTION 1453c9780 FUN_1453c9780 body=133 status=ok
// SIG undefined FUN_1453c9780(void)

undefined8 FUN_1453c9780(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 1;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    do {
      _Dst = *(void **)(lVar1 + uVar3 * 8);
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,(ulonglong)((uint)*(ushort *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c) * 8))
        ;
        lVar1 = *(longlong *)(param_1 + 0x58);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 1;
}



// FUNCTION 1453c9860 FUN_1453c9860 body=222 status=ok
// SIG undefined FUN_1453c9860(void)

undefined8 FUN_1453c9860(longlong param_1,longlong *param_2,uint param_3)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_1453c9de0();
  *(uint *)(param_1 + 100) = param_3;
  _Dst = (void *)(**(code **)(*param_2 + 8))
                           (param_2,(ulonglong)param_3 << 3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                            ,0xe5);
  *(void **)(param_1 + 0x58) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  memset(_Dst,0,(ulonglong)(uint)(*(int *)(param_1 + 100) << 3));
  if ((*(int *)(param_1 + 0x2c) != 0) && (uVar3 = 0, *(int *)(param_1 + 100) != 0)) {
    do {
      uVar1 = (**(code **)(*param_2 + 8))
                        (param_2,(uint)*(ushort *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c) * 8,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkPartitionedConvolutionEngine.cpp"
                         ,0xee);
      *(undefined8 *)(uVar3 * 8 + *(longlong *)(param_1 + 0x58)) = uVar1;
      if (*(longlong *)(uVar3 * 8 + *(longlong *)(param_1 + 0x58)) == 0) {
        return 0x34;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 100));
  }
  return 1;
}



// FUNCTION 1453c9950 FUN_1453c9950 body=1155 status=ok
// SIG undefined FUN_1453c9950(void)

undefined8
FUN_1453c9950(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,undefined8 param_5,
             byte *param_6)

{
  size_t _Size;
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  float *pfVar17;
  void *_Src;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong local_res8;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((param_3 * param_4 & 0x3fffffff) != 0) {
      memset((void *)*param_2,0,(ulonglong)(param_3 * param_4 * 4));
      return 1;
    }
  }
  else {
    if (param_4 != 0) {
      local_res8 = (ulonglong)param_4;
      lVar23 = 0;
      do {
        bVar1 = *param_6;
        iVar20 = *(int *)(param_1 + 0x14);
        memcpy(*(void **)(param_1 + 0x70),*(void **)(lVar23 + (longlong)param_2),
               (ulonglong)(param_3 * 4));
        memset((void *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_3 * 4),0,
               (ulonglong)((iVar20 - param_3) * 4));
        FUN_14556e470(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        uVar22 = 0;
        uVar12 = *(uint *)(param_1 + 0x2c);
        pfVar17 = *(float **)(*(longlong *)(param_1 + 0x50) + (ulonglong)bVar1 * 8);
        lVar3 = *(longlong *)(param_1 + 0x68);
        uVar14 = 0;
        if (uVar12 != 0) {
          do {
            uVar2 = *(ushort *)(lVar3 + uVar22 * 2);
            pfVar16 = *(float **)(param_1 + 0x78);
            uVar15 = (ulonglong)(uVar2 >> 3);
            pfVar13 = (float *)((ulonglong)
                                ((uint)*(ushort *)(param_1 + 0x34) *
                                 ((uint)(*(int *)(param_1 + 0x60) + (int)uVar22) % uVar12) * 8) +
                               *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar23));
            uVar12 = (uint)(uVar2 >> 3);
            pfVar18 = pfVar17;
            if (*(char *)(param_1 + 0x80) == '\0') {
              if (uVar12 != 0) {
                do {
                  fVar4 = *pfVar18;
                  fVar5 = pfVar18[1];
                  fVar6 = pfVar18[2];
                  fVar7 = pfVar18[3];
                  fVar8 = *pfVar16;
                  fVar9 = pfVar16[1];
                  fVar10 = pfVar16[2];
                  fVar11 = pfVar16[3];
                  *pfVar13 = -fVar9 * fVar5 + fVar8 * fVar4 + *pfVar13;
                  pfVar13[1] = fVar9 * fVar4 + fVar8 * fVar5 + pfVar13[1];
                  pfVar13[2] = -fVar11 * fVar7 + fVar10 * fVar6 + pfVar13[2];
                  pfVar13[3] = fVar11 * fVar6 + fVar10 * fVar7 + pfVar13[3];
                  fVar4 = pfVar18[4];
                  fVar5 = pfVar18[5];
                  fVar6 = pfVar18[6];
                  fVar7 = pfVar18[7];
                  fVar8 = pfVar16[4];
                  fVar9 = pfVar16[5];
                  fVar10 = pfVar16[6];
                  fVar11 = pfVar16[7];
                  pfVar13[4] = -fVar9 * fVar5 + fVar8 * fVar4 + pfVar13[4];
                  pfVar13[5] = fVar9 * fVar4 + fVar8 * fVar5 + pfVar13[5];
                  pfVar13[6] = -fVar11 * fVar7 + fVar10 * fVar6 + pfVar13[6];
                  pfVar13[7] = fVar11 * fVar6 + fVar10 * fVar7 + pfVar13[7];
                  fVar4 = pfVar18[8];
                  fVar5 = pfVar18[9];
                  fVar6 = pfVar18[10];
                  fVar7 = pfVar18[0xb];
                  fVar8 = pfVar16[8];
                  fVar9 = pfVar16[9];
                  fVar10 = pfVar16[10];
                  fVar11 = pfVar16[0xb];
                  pfVar13[8] = -fVar9 * fVar5 + fVar8 * fVar4 + pfVar13[8];
                  pfVar13[9] = fVar9 * fVar4 + fVar8 * fVar5 + pfVar13[9];
                  pfVar13[10] = -fVar11 * fVar7 + fVar10 * fVar6 + pfVar13[10];
                  pfVar13[0xb] = fVar11 * fVar6 + fVar10 * fVar7 + pfVar13[0xb];
                  fVar4 = pfVar16[0xc];
                  fVar5 = pfVar16[0xd];
                  fVar6 = pfVar16[0xe];
                  fVar7 = pfVar16[0xf];
                  pfVar16 = pfVar16 + 0x10;
                  fVar8 = pfVar18[0xc];
                  fVar9 = pfVar18[0xd];
                  fVar10 = pfVar18[0xe];
                  fVar11 = pfVar18[0xf];
                  pfVar18 = pfVar18 + 0x10;
                  pfVar13[0xc] = -fVar5 * fVar9 + fVar4 * fVar8 + pfVar13[0xc];
                  pfVar13[0xd] = fVar5 * fVar8 + fVar4 * fVar9 + pfVar13[0xd];
                  pfVar13[0xe] = -fVar7 * fVar11 + fVar6 * fVar10 + pfVar13[0xe];
                  pfVar13[0xf] = fVar7 * fVar10 + fVar6 * fVar11 + pfVar13[0xf];
                  pfVar13 = pfVar13 + 0x10;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
            }
            else if (uVar12 != 0) {
              do {
                fVar4 = *pfVar16;
                fVar5 = pfVar16[1];
                fVar6 = pfVar16[2];
                fVar7 = pfVar16[3];
                fVar8 = *pfVar18;
                fVar9 = pfVar18[1];
                fVar10 = pfVar18[2];
                fVar11 = pfVar18[3];
                *pfVar13 = (fVar4 * fVar8 - fVar9 * fVar5) + *pfVar13;
                pfVar13[1] = fVar4 * fVar9 + fVar8 * fVar5 + pfVar13[1];
                pfVar13[2] = (fVar6 * fVar10 - fVar11 * fVar7) + pfVar13[2];
                pfVar13[3] = fVar6 * fVar11 + fVar10 * fVar7 + pfVar13[3];
                fVar4 = pfVar16[4];
                fVar5 = pfVar16[5];
                fVar6 = pfVar16[6];
                fVar7 = pfVar16[7];
                fVar8 = pfVar18[4];
                fVar9 = pfVar18[5];
                fVar10 = pfVar18[6];
                fVar11 = pfVar18[7];
                pfVar13[4] = (fVar4 * fVar8 - fVar9 * fVar5) + pfVar13[4];
                pfVar13[5] = fVar4 * fVar9 + fVar8 * fVar5 + pfVar13[5];
                pfVar13[6] = (fVar6 * fVar10 - fVar11 * fVar7) + pfVar13[6];
                pfVar13[7] = fVar6 * fVar11 + fVar10 * fVar7 + pfVar13[7];
                fVar4 = pfVar16[8];
                fVar5 = pfVar16[9];
                fVar6 = pfVar16[10];
                fVar7 = pfVar16[0xb];
                fVar8 = pfVar18[8];
                fVar9 = pfVar18[9];
                fVar10 = pfVar18[10];
                fVar11 = pfVar18[0xb];
                pfVar13[8] = (fVar4 * fVar8 - fVar9 * fVar5) + pfVar13[8];
                pfVar13[9] = fVar4 * fVar9 + fVar8 * fVar5 + pfVar13[9];
                pfVar13[10] = (fVar6 * fVar10 - fVar11 * fVar7) + pfVar13[10];
                pfVar13[0xb] = fVar6 * fVar11 + fVar10 * fVar7 + pfVar13[0xb];
                fVar4 = pfVar16[0xc];
                fVar5 = pfVar16[0xd];
                fVar6 = pfVar16[0xe];
                fVar7 = pfVar16[0xf];
                pfVar16 = pfVar16 + 0x10;
                fVar8 = pfVar18[0xc];
                fVar9 = pfVar18[0xd];
                fVar10 = pfVar18[0xe];
                fVar11 = pfVar18[0xf];
                pfVar18 = pfVar18 + 0x10;
                pfVar13[0xc] = (fVar4 * fVar8 - fVar9 * fVar5) + pfVar13[0xc];
                pfVar13[0xd] = fVar4 * fVar9 + fVar8 * fVar5 + pfVar13[0xd];
                pfVar13[0xe] = (fVar6 * fVar10 - fVar11 * fVar7) + pfVar13[0xe];
                pfVar13[0xf] = fVar6 * fVar11 + fVar10 * fVar7 + pfVar13[0xf];
                pfVar13 = pfVar13 + 0x10;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            iVar20 = (uint)uVar2 + uVar12 * -8;
            if (iVar20 != 0) {
              lVar19 = (longlong)pfVar18 - (longlong)pfVar16;
              uVar15 = (ulonglong)((iVar20 - 1U >> 1) + 1);
              do {
                fVar4 = *pfVar16;
                fVar5 = pfVar16[1];
                fVar6 = pfVar16[2];
                fVar7 = pfVar16[3];
                pfVar18 = (float *)((longlong)pfVar16 + lVar19);
                fVar8 = *pfVar18;
                fVar9 = pfVar18[1];
                fVar10 = pfVar18[2];
                fVar11 = pfVar18[3];
                pfVar16 = pfVar16 + 4;
                *pfVar13 = -fVar5 * fVar9 + fVar4 * fVar8 + *pfVar13;
                pfVar13[1] = fVar5 * fVar8 + fVar4 * fVar9 + pfVar13[1];
                pfVar13[2] = -fVar7 * fVar11 + fVar6 * fVar10 + pfVar13[2];
                pfVar13[3] = fVar7 * fVar10 + fVar6 * fVar11 + pfVar13[3];
                pfVar13 = pfVar13 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            uVar14 = *(uint *)(param_1 + 0x2c);
            pfVar17 = pfVar17 + (ulonglong)uVar2 * 2;
            uVar21 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar21;
            uVar12 = uVar14;
          } while (uVar21 < uVar14);
        }
        uVar2 = *(ushort *)(param_1 + 0x34);
        uVar21 = (uint)uVar2 * 8;
        _Src = (void *)((ulonglong)((*(uint *)(param_1 + 0x60) % uVar14) * (uint)uVar2 * 8) +
                       *(longlong *)(*(longlong *)(param_1 + 0x58) + lVar23));
        uVar12 = *(uint *)(param_1 + 0x14);
        memcpy(*(void **)(param_1 + 0x78),_Src,(ulonglong)uVar21);
        memset((void *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar21),0,
               (ulonglong)((uVar12 >> 1) * 8 + 8 + (uint)uVar2 * -8));
        FUN_14556e490(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        _Size = (ulonglong)*(ushort *)(param_1 + 0x10) * 4;
        memcpy(*(void **)(lVar23 + (longlong)param_2),
               (void *)(*(longlong *)(param_1 + 0x70) + _Size),_Size);
        memset(_Src,0,(ulonglong)uVar21);
        param_6 = param_6 + 1;
        lVar23 = lVar23 + 8;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
    uVar12 = *(int *)(param_1 + 0x60) + 1;
    *(uint *)(param_1 + 0x60) = uVar12;
    if (*(uint *)(param_1 + 0x2c) <= uVar12) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return 1;
}



// FUNCTION 1453c9de0 FUN_1453c9de0 body=139 status=ok
// SIG undefined FUN_1453c9de0(void)

void FUN_1453c9de0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        if (*(longlong *)(uVar2 * 8 + *(longlong *)(param_1 + 0x58)) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined8 *)(uVar2 * 8 + *(longlong *)(param_1 + 0x58)) = 0;
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 100));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1453c9e70 FUN_1453c9e70 body=43 status=ok
// SIG undefined FUN_1453c9e70(void)

undefined8 * FUN_1453c9e70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d47ec0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1453c9ea0 FUN_1453c9ea0 body=89 status=ok
// SIG undefined FUN_1453c9ea0(void)

undefined8 * FUN_1453c9ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d47fc0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 1453c9f00 FUN_1453c9f00 body=649 status=ok
// SIG undefined FUN_1453c9f00(void)

undefined8
FUN_1453c9f00(longlong param_1,longlong *param_2,undefined8 *param_3,uint param_4,undefined4 param_5
             )

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar9 = param_3[1];
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 5);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if ((param_4 < 0x31) || (uVar2 = *(uint *)(param_1 + 0x2c), uVar2 == 0)) {
LAB_1453ca162:
    uVar9 = 0x1f;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1c);
    *(undefined8 **)(param_1 + 0x78) = param_3 + 6;
    plVar7 = (longlong *)
             (**(code **)(*param_2 + 8))
                       (param_2,(ulonglong)bVar1 << 3,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                       );
    *(longlong **)(param_1 + 0x50) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = ((ulonglong)uVar2 * 2 + 0xf & 0xfffffffffffffff0) + (longlong)(param_3 + 6);
      if (1 < bVar1) {
        uVar11 = (ulonglong)(bVar1 - 1);
        lVar8 = 8;
        lVar10 = 0;
        do {
          *(ulonglong *)(lVar8 + *(longlong *)(param_1 + 0x50)) =
               *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x50)) +
               (ulonglong)*(uint *)(param_1 + 0x30) * 4;
          uVar11 = uVar11 - 1;
          lVar8 = lVar8 + 8;
          lVar10 = lVar10 + 8;
        } while (uVar11 != 0);
      }
      iVar5 = FUN_14556e040(1,*(undefined4 *)(param_1 + 0x14));
      if (iVar5 == 0) {
        if (*(longlong *)(param_1 + 0x50) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        goto LAB_1453ca162;
      }
      lVar8 = (**(code **)(*param_2 + 8))
                        (param_2,iVar5,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                         ,0x69);
      *(longlong *)(param_1 + 0x40) = lVar8;
      if (lVar8 != 0) {
        FUN_14556e100(lVar8,1,*(undefined4 *)(param_1 + 0x14),param_5);
        uVar9 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)*(uint *)(param_1 + 0x14) << 2,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                           ,0x6f);
        *(undefined8 *)(param_1 + 0x88) = uVar9;
        uVar9 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)((*(uint *)(param_1 + 0x14) >> 1) + 1) << 3,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                           ,0x70);
        *(undefined8 *)(param_1 + 0x90) = uVar9;
        lVar8 = *param_2;
        uVar6 = FUN_14556e0f0(*(undefined8 *)(param_1 + 0x40));
        lVar8 = (**(code **)(lVar8 + 8))
                          (param_2,uVar6,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                           ,0x71);
        *(longlong *)(param_1 + 0x48) = lVar8;
        if (((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
           (lVar8 != 0)) {
          *(code **)(param_1 + 0x98) = FUN_1455791f0;
          *(code **)(param_1 + 0xa0) = FUN_145579430;
          *(undefined1 **)(param_1 + 0xa8) = &LAB_1455795e0;
          if (((byte)param_5 & 0x60) == 0x60) {
            *(code **)(param_1 + 0x98) = FUN_1455796a0;
            *(code **)(param_1 + 0xa0) = FUN_145579800;
            *(code **)(param_1 + 0xa8) = FUN_1455799b0;
          }
          if (((byte)param_5 & 0xc0) == 0xc0) {
            *(code **)(param_1 + 0x98) = FUN_1455796a0;
            *(code **)(param_1 + 0xa0) = FUN_145579a40;
            *(code **)(param_1 + 0xa8) = FUN_1455799b0;
          }
          return 1;
        }
      }
    }
    uVar9 = 0x34;
  }
  return uVar9;
}



// FUNCTION 1453ca190 FUN_1453ca190 body=171 status=ok
// SIG undefined FUN_1453ca190(void)

undefined8 FUN_1453ca190(longlong param_1,longlong *param_2)

{
  FUN_1453ca910();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return 1;
}



// FUNCTION 1453ca240 FUN_1453ca240 body=59 status=ok
// SIG undefined FUN_1453ca240(void)

undefined8 FUN_1453ca240(longlong param_1)

{
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x80),0,
           (ulonglong)((uint)*(ushort *)(param_1 + 0x10) * *(int *)(param_1 + 0x70) * 4));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 1;
}



// FUNCTION 1453ca2d0 FUN_1453ca2d0 body=341 status=ok
// SIG undefined FUN_1453ca2d0(void)

undefined8 FUN_1453ca2d0(longlong param_1,longlong *param_2,uint param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  FUN_1453ca910();
  *(uint *)(param_1 + 0x70) = param_3;
  pvVar1 = (void *)(**(code **)(*param_2 + 8))
                             (param_2,(ulonglong)param_3 << 3,
                              "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                              ,0xfe);
  *(void **)(param_1 + 0x58) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0x34;
  }
  memset(pvVar1,0,(ulonglong)(uint)(*(int *)(param_1 + 0x70) << 3));
  if (*(int *)(param_1 + 0x2c) != 0) {
    pvVar1 = (void *)(**(code **)(*param_2 + 8))
                               (param_2,(ulonglong)
                                        (uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x70))
                                        << 2,
                                "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                                ,0x104);
    *(void **)(param_1 + 0x60) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    memset(pvVar1,0,(ulonglong)(uint)(*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x2c) * 4));
    uVar5 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        uVar2 = (**(code **)(*param_2 + 8))
                          (param_2,(uint)*(ushort *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c) * 4,
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                           ,0x10b);
        *(undefined8 *)(uVar5 * 8 + *(longlong *)(param_1 + 0x58)) = uVar2;
        if (*(longlong *)(uVar5 * 8 + *(longlong *)(param_1 + 0x58)) == 0) {
          return 0x34;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x70));
    }
  }
  lVar3 = (**(code **)(*param_2 + 8))
                    (param_2,(uint)*(ushort *)(param_1 + 0x10) * *(int *)(param_1 + 0x70) * 4,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\ConvolutionEngine\\AkHalfPrecisionConvolutionEngine.cpp"
                     ,0x111);
  *(longlong *)(param_1 + 0x80) = lVar3;
  uVar2 = 1;
  if (lVar3 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 1453ca440 FUN_1453ca440 body=1218 status=ok
// SIG undefined FUN_1453ca440(void)

undefined8
FUN_1453ca440(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,undefined4 param_5,
             byte *param_6)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  float *_Src;
  void *_Dst;
  void *_Dst_00;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined8 *puVar48;
  ushort *puVar49;
  uint uVar50;
  uint uVar51;
  longlong lVar52;
  ulonglong uVar53;
  bool bVar54;
  undefined1 auVar55 [16];
  uint local_174;
  
  uVar10 = *(ushort *)(param_1 + 0x10);
  uVar12 = *(uint *)(param_1 + 0x2c);
  if (uVar12 == 0) {
    if ((param_3 * param_4 & 0x3fffffff) != 0) {
      memset((void *)*param_2,0,(ulonglong)(param_3 * param_4 * 4));
      return 1;
    }
  }
  else {
    uVar47 = *(int *)(param_1 + 0x6c) + 1;
    if (uVar12 <= uVar47) {
      uVar47 = uVar12;
    }
    *(uint *)(param_1 + 0x6c) = uVar47;
    local_174 = 0;
    puVar48 = param_2;
    if (param_4 != 0) {
      do {
        bVar9 = *param_6;
        _Src = (float *)*puVar48;
        uVar11 = *(ushort *)(param_1 + 0x34);
        uVar51 = (uint)uVar11;
        _Dst = *(void **)(param_1 + 0x88);
        iVar13 = *(int *)(param_1 + 0x14);
        _Dst_00 = *(void **)(param_1 + 0x90);
        lVar14 = *(longlong *)
                  ((*(longlong *)(param_1 + 0x58) - (longlong)param_2) + (longlong)puVar48);
        uVar47 = *(uint *)(param_1 + 0x68);
        lVar1 = *(longlong *)(param_1 + 0x60) + (ulonglong)(uVar12 * local_174) * 4;
        bVar54 = *_Src == 0.0;
        lVar2 = lVar14 + (ulonglong)(uVar51 * uVar47) * 4;
        uVar53 = 0;
        if (param_3 != 0 && bVar54) {
          do {
            pfVar3 = _Src + uVar53;
            pfVar4 = _Src + uVar53 + 4;
            pfVar5 = _Src + uVar53 + 8;
            pfVar6 = _Src + uVar53 + 0xc;
            auVar55._0_4_ =
                 -(uint)(((*pfVar4 == 0.0 && *pfVar3 == 0.0) && *pfVar5 == 0.0) && *pfVar6 == 0.0);
            auVar55._4_4_ =
                 -(uint)(((pfVar4[1] == 0.0 && pfVar3[1] == 0.0) && pfVar5[1] == 0.0) &&
                        pfVar6[1] == 0.0);
            auVar55._8_4_ =
                 -(uint)(((pfVar4[2] == 0.0 && pfVar3[2] == 0.0) && pfVar5[2] == 0.0) &&
                        pfVar6[2] == 0.0);
            auVar55._12_4_ =
                 -(uint)(((pfVar4[3] == 0.0 && pfVar3[3] == 0.0) && pfVar5[3] == 0.0) &&
                        pfVar6[3] == 0.0);
            bVar54 = (ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                              (ushort)((byte)(auVar55._12_4_ >> 7) & 1) << 0xc |
                              (ushort)((byte)(auVar55._12_4_ >> 0xf) & 1) << 0xd |
                              (ushort)((byte)(auVar55._12_4_ >> 0x17) & 1) << 0xe |
                             (ushort)(byte)(auVar55._12_4_ >> 0x1f) << 0xf) == 0xffff;
            uVar50 = (int)uVar53 + 0x10;
            uVar53 = (ulonglong)uVar50;
          } while (uVar50 < param_3 && bVar54);
        }
        if (bVar54) {
          *(undefined4 *)(lVar1 + (ulonglong)uVar47 * 4) = 0;
        }
        else {
          memcpy(_Dst,_Src,(ulonglong)(param_3 * 4));
          memset((void *)((longlong)_Dst + (ulonglong)param_3 * 4),0,
                 (ulonglong)((iVar13 - param_3) * 4));
          FUN_14556e470(_Dst,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x40));
          (**(code **)(param_1 + 0x98))(lVar2,_Dst_00,uVar11,param_5,lVar1 + (ulonglong)uVar47 * 4);
        }
        memset(_Dst_00,0,(ulonglong)((*(uint *)(param_1 + 0x14) >> 1) * 8 + 8));
        uVar50 = *(uint *)(param_1 + 0x6c);
        puVar49 = *(ushort **)(param_1 + 0x78);
        lVar52 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)bVar9 * 8);
        if (!bVar54) {
          uVar15 = (uint)*puVar49;
          if (uVar51 <= *puVar49) {
            uVar15 = uVar51;
          }
          (**(code **)(param_1 + 0xa0))(_Dst_00,lVar2,lVar52,uVar15);
        }
        if (uVar47 == 0) {
          uVar47 = uVar12;
        }
        lVar52 = lVar52 + (ulonglong)*puVar49 * 4;
        if (1 < uVar50) {
          uVar53 = (ulonglong)(uVar50 - 1);
          do {
            uVar47 = uVar47 - 1;
            puVar49 = puVar49 + 1;
            uVar50 = (uint)*puVar49;
            if (*(uint *)(lVar1 + (ulonglong)uVar47 * 4) <= (uint)*puVar49) {
              uVar50 = *(uint *)(lVar1 + (ulonglong)uVar47 * 4);
            }
            if (uVar50 != 0) {
              (**(code **)(param_1 + 0xa0))
                        (_Dst_00,lVar14 + (ulonglong)(uVar51 * uVar47) * 4,lVar52);
            }
            if (uVar47 == 0) {
              uVar47 = uVar12;
            }
            lVar52 = lVar52 + (ulonglong)*puVar49 * 4;
            uVar53 = uVar53 - 1;
          } while (uVar53 != 0);
        }
        uVar53 = 0;
        if (uVar11 != 0) {
          do {
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x40);
            uVar16 = *puVar7;
            uVar17 = puVar7[1];
            uVar18 = puVar7[2];
            uVar19 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x50);
            uVar20 = *puVar7;
            uVar21 = puVar7[1];
            uVar22 = puVar7[2];
            uVar23 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x60);
            uVar24 = *puVar7;
            uVar25 = puVar7[1];
            uVar26 = puVar7[2];
            uVar27 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x70);
            uVar28 = *puVar7;
            uVar29 = puVar7[1];
            uVar30 = puVar7[2];
            uVar31 = puVar7[3];
            puVar8 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8);
            uVar32 = puVar8[1];
            uVar33 = puVar8[2];
            uVar34 = puVar8[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x10);
            uVar35 = *puVar7;
            uVar36 = puVar7[1];
            uVar37 = puVar7[2];
            uVar38 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x20);
            uVar39 = *puVar7;
            uVar40 = puVar7[1];
            uVar41 = puVar7[2];
            uVar42 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x30);
            uVar43 = *puVar7;
            uVar44 = puVar7[1];
            uVar45 = puVar7[2];
            uVar46 = puVar7[3];
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8);
            *puVar7 = *puVar8;
            puVar7[1] = uVar16;
            puVar7[2] = uVar32;
            puVar7[3] = uVar17;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x10);
            *puVar7 = uVar33;
            puVar7[1] = uVar18;
            puVar7[2] = uVar34;
            puVar7[3] = uVar19;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x20);
            *puVar7 = uVar35;
            puVar7[1] = uVar20;
            puVar7[2] = uVar36;
            puVar7[3] = uVar21;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x30);
            *puVar7 = uVar37;
            puVar7[1] = uVar22;
            puVar7[2] = uVar38;
            puVar7[3] = uVar23;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x40);
            *puVar7 = uVar39;
            puVar7[1] = uVar24;
            puVar7[2] = uVar40;
            puVar7[3] = uVar25;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x50);
            *puVar7 = uVar41;
            puVar7[1] = uVar26;
            puVar7[2] = uVar42;
            puVar7[3] = uVar27;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x60);
            *puVar7 = uVar43;
            puVar7[1] = uVar28;
            puVar7[2] = uVar44;
            puVar7[3] = uVar29;
            puVar7 = (undefined4 *)((longlong)_Dst_00 + uVar53 * 8 + 0x70);
            *puVar7 = uVar45;
            puVar7[1] = uVar30;
            puVar7[2] = uVar46;
            puVar7[3] = uVar31;
            uVar47 = (int)uVar53 + 0x10;
            uVar53 = (ulonglong)uVar47;
          } while (uVar47 < uVar51);
        }
        FUN_14556e490(_Dst_00,_Dst,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        (**(code **)(param_1 + 0xa8))
                  (_Dst,*puVar48,*(longlong *)(param_1 + 0x80) + (ulonglong)(local_174 * uVar10) * 4
                   ,(uint)uVar10);
        local_174 = local_174 + 1;
        param_6 = param_6 + 1;
        puVar48 = puVar48 + 1;
      } while (local_174 < param_4);
    }
    uVar47 = *(int *)(param_1 + 0x68) + 1;
    *(uint *)(param_1 + 0x68) = uVar47;
    if (uVar12 <= uVar47) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  return 1;
}



// FUNCTION 1453ca910 FUN_1453ca910 body=188 status=ok
// SIG undefined FUN_1453ca910(void)

void FUN_1453ca910(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        if (*(longlong *)(uVar1 * 8 + *(longlong *)(param_1 + 0x58)) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined8 *)(uVar1 * 8 + *(longlong *)(param_1 + 0x58)) = 0;
        }
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x70));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1453ca9d0 FUN_1453ca9d0 body=43 status=ok
// SIG undefined FUN_1453ca9d0(void)

undefined8 * FUN_1453ca9d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d47ec0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1453caa00 FUN_1453caa00 body=127 status=ok
// SIG undefined FUN_1453caa00(void)

void FUN_1453caa00(float param_1,float param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = 0.0;
  fVar5 = param_1 * 0.001627189 + 0.707106;
  fVar1 = 1.0 - fVar5 * fVar5;
  fVar3 = 0.0;
  if (0.0 < fVar1) {
    fVar3 = SQRT(fVar1);
  }
  fVar1 = param_2 * 0.001627189 + 0.707106;
  fVar4 = 1.0 - fVar1 * fVar1;
  if (0.0 < fVar4) {
    fVar2 = SQRT(fVar4);
  }
  *param_3 = fVar1;
  *param_4 = fVar2;
  *param_5 = fVar5;
  *param_6 = fVar3;
  return;
}



// FUNCTION 1453caa80 FUN_1453caa80 body=1053 status=ok
// SIG undefined FUN_1453caa80(void)

void FUN_1453caa80(float *param_1,float *param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
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
  
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar7 = param_4 * 0.001627189 + 0.707106;
  fVar6 = 1.0 - fVar7 * fVar7;
  if (0.0 < fVar6) {
    fVar13 = SQRT(fVar6);
  }
  fVar11 = param_5 * 0.001627189 + 0.707106;
  fVar6 = 1.0 - fVar11 * fVar11;
  if (0.0 < fVar6) {
    fVar12 = SQRT(fVar6);
  }
  if ((fVar11 == fVar7) && (fVar12 == fVar13)) {
    uVar4 = 0;
    pfVar1 = param_1 + param_3;
    uVar2 = (ulonglong)param_3;
    if (pfVar1 < param_1) {
      uVar2 = uVar4;
    }
    if ((uVar2 != 0) && (7 < uVar2)) {
      do {
        fVar6 = *param_1;
        fVar7 = param_1[1];
        fVar13 = param_1[2];
        fVar5 = param_1[3];
        uVar4 = uVar4 + 8;
        fVar10 = *param_2;
        fVar16 = param_2[1];
        fVar8 = param_2[2];
        fVar9 = param_2[3];
        *param_1 = fVar6 * fVar11 + fVar10 * fVar12;
        param_1[1] = fVar7 * fVar11 + fVar16 * fVar12;
        param_1[2] = fVar13 * fVar11 + fVar8 * fVar12;
        param_1[3] = fVar5 * fVar11 + fVar9 * fVar12;
        *param_2 = fVar6 * fVar12 + fVar10 * fVar11;
        param_2[1] = fVar7 * fVar12 + fVar16 * fVar11;
        param_2[2] = fVar13 * fVar12 + fVar8 * fVar11;
        param_2[3] = fVar5 * fVar12 + fVar9 * fVar11;
        fVar6 = param_1[4];
        fVar7 = param_1[5];
        fVar13 = param_1[6];
        fVar5 = param_1[7];
        fVar10 = param_2[4];
        fVar16 = param_2[5];
        fVar8 = param_2[6];
        fVar9 = param_2[7];
        param_1[4] = fVar6 * fVar11 + fVar10 * fVar12;
        param_1[5] = fVar7 * fVar11 + fVar16 * fVar12;
        param_1[6] = fVar13 * fVar11 + fVar8 * fVar12;
        param_1[7] = fVar5 * fVar11 + fVar9 * fVar12;
        param_1 = param_1 + 8;
        param_2[4] = fVar6 * fVar12 + fVar10 * fVar11;
        param_2[5] = fVar7 * fVar12 + fVar16 * fVar11;
        param_2[6] = fVar13 * fVar12 + fVar8 * fVar11;
        param_2[7] = fVar5 * fVar12 + fVar9 * fVar11;
        param_2 = param_2 + 8;
      } while (uVar4 < (uVar2 & 0xfffffffffffffff8));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          fVar6 = *param_1;
          fVar7 = *param_2;
          fVar13 = param_1[1];
          fVar5 = param_2[1];
          *param_1 = fVar7 * fVar12 + fVar6 * fVar11;
          *param_2 = fVar6 * fVar12 + fVar7 * fVar11;
          fVar6 = param_1[2];
          fVar7 = param_2[2];
          param_1[1] = fVar5 * fVar12 + fVar13 * fVar11;
          param_2[1] = fVar13 * fVar12 + fVar5 * fVar11;
          fVar13 = param_1[3];
          param_1[2] = fVar7 * fVar12 + fVar6 * fVar11;
          fVar5 = param_2[3];
          param_2[2] = fVar6 * fVar12 + fVar7 * fVar11;
          param_1[3] = fVar5 * fVar12 + fVar13 * fVar11;
          param_1 = param_1 + 4;
          param_2[3] = fVar13 * fVar12 + fVar5 * fVar11;
          param_2 = param_2 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      lVar3 = (longlong)param_2 - (longlong)param_1;
      do {
        fVar6 = *param_1;
        fVar7 = *(float *)((longlong)param_1 + lVar3);
        *param_1 = fVar7 * fVar12 + fVar6 * fVar11;
        *(float *)((longlong)param_1 + lVar3) = fVar6 * fVar12 + fVar7 * fVar11;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  else {
    pfVar1 = param_1 + param_3;
    fVar6 = (fVar11 - fVar7) * (1.0 / (float)param_3);
    fVar12 = (fVar12 - fVar13) * (1.0 / (float)param_3);
    if (param_1 < pfVar1) {
      if (3 < (ulonglong)param_3) {
        do {
          fVar11 = *param_1;
          fVar5 = *param_2;
          fVar14 = fVar13 + fVar12;
          fVar8 = fVar7 + fVar6;
          fVar10 = param_2[1];
          *param_2 = fVar11 * fVar13 + fVar5 * fVar7;
          fVar16 = param_1[1];
          *param_1 = fVar5 * fVar13 + fVar11 * fVar7;
          fVar15 = fVar14 + fVar12;
          fVar9 = fVar8 + fVar6;
          fVar7 = param_2[2];
          param_2[1] = fVar16 * fVar14 + fVar10 * fVar8;
          fVar13 = param_1[2];
          param_1[1] = fVar10 * fVar14 + fVar16 * fVar8;
          fVar16 = fVar15 + fVar12;
          fVar10 = fVar9 + fVar6;
          fVar11 = param_2[3];
          param_2[2] = fVar13 * fVar15 + fVar7 * fVar9;
          fVar5 = param_1[3];
          param_1[2] = fVar7 * fVar15 + fVar13 * fVar9;
          fVar13 = fVar16 + fVar12;
          fVar7 = fVar10 + fVar6;
          param_1[3] = fVar11 * fVar16 + fVar5 * fVar10;
          param_1 = param_1 + 4;
          param_2[3] = fVar5 * fVar16 + fVar11 * fVar10;
          param_2 = param_2 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        fVar11 = *param_1 * fVar7;
        fVar5 = *param_2 * fVar13;
        fVar16 = *param_1 * fVar13;
        fVar13 = fVar13 + fVar12;
        fVar10 = *param_2 * fVar7;
        fVar7 = fVar7 + fVar6;
        *param_1 = fVar5 + fVar11;
        param_1 = param_1 + 1;
        *param_2 = fVar16 + fVar10;
        param_2 = param_2 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453caea0 FUN_1453caea0 body=1143 status=ok
// SIG undefined FUN_1453caea0(void)

void FUN_1453caea0(float *param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                  float param_6,float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  
  fVar15 = 0.0;
  fVar20 = 0.0;
  fVar11 = param_6 * 0.001627189 + 0.707106;
  fVar9 = 1.0 - fVar11 * fVar11;
  if (0.0 < fVar9) {
    fVar15 = SQRT(fVar9);
  }
  fVar19 = param_7 * 0.001627189 + 0.707106;
  fVar9 = 1.0 - fVar19 * fVar19;
  if (0.0 < fVar9) {
    fVar20 = SQRT(fVar9);
  }
  if ((fVar19 == fVar11) && (fVar20 == fVar15)) {
    uVar8 = 0;
    pfVar1 = param_1 + param_5;
    uVar4 = (ulonglong)param_5;
    if (pfVar1 < param_1) {
      uVar4 = uVar8;
    }
    if ((uVar4 != 0) && (7 < uVar4)) {
      do {
        fVar9 = *param_1;
        fVar11 = param_1[1];
        fVar15 = param_1[2];
        fVar10 = param_1[3];
        uVar8 = uVar8 + 8;
        fVar14 = *param_2;
        fVar18 = param_2[1];
        fVar12 = param_2[2];
        fVar13 = param_2[3];
        fVar16 = param_2[4];
        fVar17 = param_2[5];
        fVar2 = param_2[6];
        fVar3 = param_2[7];
        param_2 = param_2 + 8;
        *param_3 = fVar9 * fVar19 + fVar20 * fVar14;
        param_3[1] = fVar11 * fVar19 + fVar20 * fVar18;
        param_3[2] = fVar15 * fVar19 + fVar20 * fVar12;
        param_3[3] = fVar10 * fVar19 + fVar20 * fVar13;
        *param_4 = fVar9 * fVar20 + fVar14 * fVar19;
        param_4[1] = fVar11 * fVar20 + fVar18 * fVar19;
        param_4[2] = fVar15 * fVar20 + fVar12 * fVar19;
        param_4[3] = fVar10 * fVar20 + fVar13 * fVar19;
        fVar9 = param_1[4];
        fVar11 = param_1[5];
        fVar15 = param_1[6];
        fVar10 = param_1[7];
        param_1 = param_1 + 8;
        param_3[4] = fVar9 * fVar19 + fVar20 * fVar16;
        param_3[5] = fVar11 * fVar19 + fVar20 * fVar17;
        param_3[6] = fVar15 * fVar19 + fVar20 * fVar2;
        param_3[7] = fVar10 * fVar19 + fVar20 * fVar3;
        param_3 = param_3 + 8;
        param_4[4] = fVar9 * fVar20 + fVar16 * fVar19;
        param_4[5] = fVar11 * fVar20 + fVar17 * fVar19;
        param_4[6] = fVar15 * fVar20 + fVar2 * fVar19;
        param_4[7] = fVar10 * fVar20 + fVar3 * fVar19;
        param_4 = param_4 + 8;
      } while (uVar8 < (uVar4 & 0xfffffffffffffff8));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          fVar9 = *param_1;
          fVar11 = *param_2;
          fVar15 = param_1[1];
          fVar10 = param_2[1];
          *param_3 = fVar11 * fVar20 + fVar9 * fVar19;
          *param_4 = fVar9 * fVar20 + fVar11 * fVar19;
          fVar9 = param_1[2];
          fVar11 = param_2[2];
          param_3[1] = fVar10 * fVar20 + fVar15 * fVar19;
          param_4[1] = fVar15 * fVar20 + fVar10 * fVar19;
          fVar15 = param_1[3];
          param_1 = param_1 + 4;
          param_3[2] = fVar11 * fVar20 + fVar9 * fVar19;
          fVar10 = param_2[3];
          param_2 = param_2 + 4;
          param_4[2] = fVar9 * fVar20 + fVar11 * fVar19;
          param_3[3] = fVar10 * fVar20 + fVar15 * fVar19;
          param_3 = param_3 + 4;
          param_4[3] = fVar15 * fVar20 + fVar10 * fVar19;
          param_4 = param_4 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      lVar5 = (longlong)param_2 - (longlong)param_1;
      lVar6 = (longlong)param_3 - (longlong)param_1;
      lVar7 = (longlong)param_4 - (longlong)param_1;
      do {
        fVar9 = *param_1;
        fVar11 = *(float *)(lVar5 + (longlong)param_1);
        *(float *)(lVar6 + (longlong)param_1) = fVar11 * fVar20 + fVar9 * fVar19;
        *(float *)(lVar7 + (longlong)param_1) = fVar9 * fVar20 + fVar11 * fVar19;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  else {
    uVar4 = (ulonglong)param_5;
    pfVar1 = param_1 + uVar4;
    fVar9 = (fVar19 - fVar11) * (1.0 / (float)uVar4);
    fVar20 = (fVar20 - fVar15) * (1.0 / (float)uVar4);
    if (param_1 < pfVar1) {
      if (3 < uVar4) {
        do {
          fVar19 = *param_1;
          fVar10 = *param_2;
          fVar16 = fVar15 + fVar20;
          fVar12 = fVar11 + fVar9;
          fVar14 = param_2[1];
          *param_4 = fVar19 * fVar15 + fVar10 * fVar11;
          fVar18 = param_1[1];
          *param_3 = fVar10 * fVar15 + fVar19 * fVar11;
          fVar17 = fVar16 + fVar20;
          fVar13 = fVar12 + fVar9;
          fVar11 = param_2[2];
          param_4[1] = fVar18 * fVar16 + fVar14 * fVar12;
          fVar15 = param_1[2];
          param_3[1] = fVar14 * fVar16 + fVar18 * fVar12;
          fVar18 = fVar17 + fVar20;
          fVar14 = fVar13 + fVar9;
          fVar19 = param_2[3];
          param_2 = param_2 + 4;
          param_4[2] = fVar15 * fVar17 + fVar11 * fVar13;
          fVar10 = param_1[3];
          param_1 = param_1 + 4;
          param_3[2] = fVar11 * fVar17 + fVar15 * fVar13;
          fVar15 = fVar18 + fVar20;
          fVar11 = fVar14 + fVar9;
          param_3[3] = fVar19 * fVar18 + fVar10 * fVar14;
          param_3 = param_3 + 4;
          param_4[3] = fVar10 * fVar18 + fVar19 * fVar14;
          param_4 = param_4 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      lVar5 = (longlong)param_2 - (longlong)param_3;
      lVar6 = (longlong)param_4 - (longlong)param_3;
      do {
        fVar19 = *param_1;
        param_1 = param_1 + 1;
        fVar10 = *(float *)(lVar5 + (longlong)param_3);
        fVar14 = fVar19 * fVar11;
        fVar18 = fVar10 * fVar15;
        fVar19 = fVar19 * fVar15;
        fVar15 = fVar15 + fVar20;
        fVar10 = fVar10 * fVar11;
        fVar11 = fVar11 + fVar9;
        *param_3 = fVar18 + fVar14;
        *(float *)(lVar6 + (longlong)param_3) = fVar19 + fVar10;
        param_3 = param_3 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1453cb320 FUN_1453cb320 body=2927 status=ok
// SIG undefined FUN_1453cb320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453cb320(longlong *param_1,longlong *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  void *_Dst;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  void *pvVar18;
  int iVar19;
  size_t sVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 auStack_110 [5];
  float local_e8 [2];
  longlong local_e0;
  uint local_d8 [4];
  float local_c8 [2];
  undefined8 local_c0;
  uint local_b8;
  float local_b4;
  float local_b0 [2];
  size_t local_a8;
  longlong local_a0;
  float local_88 [24];
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar22 = (ulonglong)*(ushort *)((longlong)param_1 + 0x12);
  uVar14 = uVar9 >> 0xc;
  local_c8[1] = (float)uVar14;
  uVar16 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  if (((uVar9 & 0xf00) != 0x100) || ((uVar9 & 0xff) < 2)) {
    sVar20 = uVar22 << 2;
    auStack_110[0] = 0x1453cbd54;
    memcpy((void *)*param_2,(void *)*param_1,sVar20);
    uVar22 = 1;
    uVar9 = *(uint *)(param_2 + 1) & 0xff;
    if ((*(uint *)(param_2 + 1) & 0xf00) != 0x200) {
      if (uVar9 < 2) {
        return;
      }
      do {
        auStack_110[0] = 0x1453cbdfc;
        memset((void *)(*param_2 + *(ushort *)(param_2 + 2) * uVar22 * 4),0,sVar20);
        auStack_110[0] = 0x1453cbe36;
        local_e8[0] = param_7 * 0.0055555557;
        local_e0._0_4_ = param_8 * 0.0055555557;
        local_d8[0] = uVar16;
        FUN_1453baf30(*param_2 + *(ushort *)(param_2 + 2) * uVar22 * 4,
                      *param_1 + *(ushort *)(param_1 + 2) * uVar22 * 4,0,0);
        uVar9 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar9;
      } while (uVar9 < *(byte *)(param_2 + 1));
      return;
    }
    if (uVar9 < 2) {
      return;
    }
    do {
      auStack_110[0] = 0x1453cbd9d;
      memcpy((void *)(*param_2 + uVar22 * *(ushort *)(param_2 + 2) * 4),(void *)*param_1,sVar20);
      uVar9 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar9;
    } while (uVar9 < *(byte *)(param_2 + 1));
    return;
  }
  local_a0 = 0;
  uVar13 = 0;
  for (uVar8 = uVar14 & 0x633; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar23 = 0.0;
  fVar27 = (float)uVar13;
  if ((uVar14 & 4) != 0) {
    if (((byte)uVar14 & 7) == 7) {
      fVar25 = param_3 * param_3;
      fVar24 = param_4 * param_4;
    }
    else {
      fVar27 = fVar27 + 1.0;
    }
  }
  local_c8[0] = (float)(uVar14 & 8);
  if ((float)(uVar14 & 8) != 0.0) {
    fVar23 = param_5 * param_5;
    fVar26 = param_6 * param_6;
  }
  uVar10 = (ulonglong)((uVar9 & 0xff) << 5);
  uVar7 = uVar10 + 0xf;
  fVar23 = SQRT(1.0 / (fVar25 + fVar27 + fVar23));
  fVar24 = SQRT(1.0 / (fVar24 + fVar27 + fVar26));
  if (uVar7 <= uVar10) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x1453cb49d;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = uVar10 + 0xf;
  if (uVar7 <= uVar10) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar5) = 0x1453cb4ba;
  lVar6 = -(uVar7 & 0xfffffffffffffff0);
  bVar12 = 0;
  lVar21 = lVar6 + lVar5 + -200;
  if ((byte)((char)uVar9 - ((byte)(uVar9 >> 0xf) & 1)) < 2) {
    uVar9 = 4;
    do {
      bVar12 = bVar12 + 1;
      uVar9 = uVar9 & uVar9 - 1;
    } while (uVar9 != 0);
    uVar8 = 0;
    uVar9 = bVar12 | 0x4100;
    do {
      uVar13 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      *(float *)((longlong)local_c8 + (ulonglong)uVar13 * 4 + lVar5) = fVar24;
      *(float *)((longlong)local_c8 + (ulonglong)uVar13 * 4 + lVar21 + 200) = fVar23;
    } while (uVar8 < *(byte *)(param_1 + 1));
    if (((byte)uVar14 & 7) == 7) {
      *(float *)((longlong)local_88 + lVar5) = param_4 * *(float *)((longlong)local_88 + lVar5);
      *(float *)((longlong)local_88 + lVar6 + lVar5) =
           param_3 * *(float *)((longlong)local_88 + lVar6 + lVar5);
    }
    local_b8 = uVar9;
    if (local_c8[0] == 0.0) goto LAB_1453cb8dc;
    if (local_c8[1] != 1.12104e-44) {
      uVar7 = (ulonglong)((uint)*(byte *)(param_1 + 1) * 8 - 8);
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) =
           param_6 * *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5);
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) =
           param_5 * *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200);
      goto LAB_1453cb8e6;
    }
  }
  else {
    uVar9 = 3;
    do {
      bVar12 = bVar12 + 1;
      uVar9 = uVar9 & uVar9 - 1;
    } while (uVar9 != 0);
    iVar19 = 0;
    uVar9 = (uint)bVar12;
    uVar7 = 0;
    local_b8 = (uint)bVar12;
    uVar14 = 1;
    uVar8 = (uint)local_c8[1] & 0xfffffff7;
    if (uVar8 != 0) {
      do {
        if ((uVar14 & uVar8) != 0) {
          uVar10 = (ulonglong)(uint)(iVar19 * 8);
          iVar19 = iVar19 + 1;
          fVar25 = *(float *)(&DAT_149d48080 + uVar7 * 8);
          fVar26 = *(float *)(&DAT_149d48084 + uVar7 * 8);
          *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5) = fVar25 * fVar24;
          *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5 + 4) = fVar26 * fVar24;
          *(float *)((longlong)local_c8 + uVar10 * 4 + lVar21 + 200) = fVar25 * fVar23;
          *(float *)((longlong)local_c8 + uVar10 * 4 + lVar6 + lVar5 + 4) = fVar26 * fVar23;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar14 = uVar14 * 2;
      } while (uVar14 <= uVar8);
    }
    *(float **)((longlong)&local_e0 + lVar6 + lVar5) = local_b0;
    *(size_t **)((longlong)local_e8 + lVar6 + lVar5) = &local_a8;
    *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cb59c;
    FUN_1453caa00(param_7,param_8,&local_c0);
    fVar24 = local_b4;
    uVar14 = 0;
    fVar25 = (float)local_a8;
    fVar23 = (float)local_c0;
    uVar8 = *(uint *)(param_1 + 1) - (*(uint *)(param_1 + 1) >> 0xf & 1) & 0xff;
    if (3 < uVar8) {
      do {
        uVar10 = (ulonglong)(uVar14 * 8);
        fVar26 = *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5 + 4);
        uVar7 = (ulonglong)(uVar14 * 8 + 8);
        fVar27 = *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5);
        *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5) = fVar27 * fVar23 + fVar26 * fVar24;
        *(float *)((longlong)local_c8 + uVar10 * 4 + lVar5 + 4) = fVar27 * fVar24 + fVar26 * fVar23;
        fVar26 = *(float *)((longlong)local_c8 + uVar10 * 4 + lVar6 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar10 * 4 + lVar21 + 200);
        *(float *)((longlong)local_c8 + uVar10 * 4 + lVar21 + 200) =
             fVar27 * fVar25 + fVar26 * local_b0[0];
        *(float *)((longlong)local_c8 + uVar10 * 4 + lVar6 + lVar5 + 4) =
             fVar27 * local_b0[0] + fVar26 * fVar25;
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5);
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) = fVar27 * fVar23 + fVar26 * fVar24;
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4) = fVar27 * fVar24 + fVar26 * fVar23;
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200);
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) =
             fVar27 * fVar25 + fVar26 * local_b0[0];
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4) =
             fVar27 * local_b0[0] + fVar26 * fVar25;
        uVar7 = (ulonglong)(uVar14 * 8 + 0x10);
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5);
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) = fVar27 * fVar23 + fVar26 * fVar24;
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4) = fVar27 * fVar24 + fVar26 * fVar23;
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200);
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) =
             fVar27 * fVar25 + fVar26 * local_b0[0];
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4) =
             fVar27 * local_b0[0] + fVar26 * fVar25;
        uVar7 = (ulonglong)(uVar14 * 8 + 0x18);
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4);
        uVar14 = uVar14 + 4;
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) = fVar26 * fVar23 + fVar27 * fVar24;
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4) = fVar26 * fVar24 + fVar27 * fVar23;
        fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4);
        fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200);
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) =
             fVar27 * fVar25 + fVar26 * local_b0[0];
        *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4) =
             fVar27 * local_b0[0] + fVar26 * fVar25;
      } while (uVar14 < uVar8 - 3);
    }
    for (; uVar14 < uVar8; uVar14 = uVar14 + 1) {
      uVar7 = (ulonglong)(uVar14 * 8);
      fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4);
      fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5);
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) = fVar27 * fVar23 + fVar26 * fVar24;
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4) = fVar27 * fVar24 + fVar26 * fVar23;
      fVar26 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4);
      fVar27 = *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200);
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) =
           fVar27 * fVar25 + fVar26 * local_b0[0];
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4) =
           fVar27 * local_b0[0] + fVar26 * fVar25;
    }
    if ((SUB41(local_c8[1],0) & 7) == 7) {
      *(float *)((longlong)local_88 + lVar5) = param_4 * *(float *)((longlong)local_88 + lVar5);
      *(float *)((longlong)local_88 + lVar6 + lVar5) =
           param_3 * *(float *)((longlong)local_88 + lVar6 + lVar5);
      *(float *)((longlong)local_88 + lVar5 + 4) =
           param_4 * *(float *)((longlong)local_88 + lVar5 + 4);
      *(float *)((longlong)local_88 + lVar6 + lVar5 + 4) =
           param_3 * *(float *)((longlong)local_88 + lVar6 + lVar5 + 4);
    }
    if (local_c8[0] != 0.0) {
      uVar7 = (ulonglong)((uint)*(byte *)(param_1 + 1) * 8 - 8);
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5) = param_6;
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar21 + 200) = param_5;
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar5 + 4) = param_6;
      *(float *)((longlong)local_c8 + uVar7 * 4 + lVar6 + lVar5 + 4) = param_5;
    }
LAB_1453cb8dc:
    if (local_c8[1] != 1.12104e-44) {
LAB_1453cb8e6:
      uVar7 = 0;
      if ((char)param_2[1] != '\0') {
        do {
          uVar3 = *(ushort *)(param_2 + 2);
          lVar11 = *param_2;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cb91b;
          memset((void *)(lVar11 + uVar7 * uVar3 * 4),0,uVar22 << 2);
          uVar14 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar14;
        } while (uVar14 < *(byte *)(param_2 + 1));
        uVar22 = (ulonglong)uVar16;
      }
      uVar7 = 0;
      local_b4 = (float)(uVar9 & 0xff);
      local_a8 = uVar22 << 2;
      local_c8[0] = 0.0;
      local_c0 = (ushort *)(CONCAT44(local_c0._4_4_,(int)local_b4 + 7) & 0xfffffffffffffff8);
      do {
        sVar20 = local_a8;
        uVar3 = *(ushort *)(param_2 + 2);
        lVar11 = *param_2;
        *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cb97c;
        memset((void *)(lVar11 + uVar3 * uVar7 * 4),0,sVar20);
        uVar22 = 0;
        do {
          uVar3 = *(ushort *)(param_1 + 2);
          uVar9 = (int)(float)local_c0 * (int)uVar22;
          lVar11 = *param_1;
          *(uint *)((longlong)local_d8 + lVar6 + lVar5) = uVar16;
          uVar4 = *(ushort *)(param_2 + 2);
          lVar15 = *param_2;
          lVar17 = uVar9 + uVar7;
          uVar2 = *(undefined4 *)((longlong)local_c8 + lVar17 * 4 + lVar21 + 200);
          *(undefined4 *)((longlong)&local_e0 + lVar6 + lVar5) =
               *(undefined4 *)((longlong)local_c8 + lVar17 * 4 + lVar5);
          *(undefined4 *)((longlong)local_e8 + lVar6 + lVar5) = uVar2;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cb9d4;
          FUN_1453baf30(lVar15 + uVar4 * uVar7 * 4,lVar11 + uVar3 * uVar22 * 4,0x3f800000,0x3f800000
                       );
          uVar9 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar9;
        } while (uVar9 < *(byte *)(param_1 + 1));
        local_c8[0] = (float)((int)local_c8[0] + 1);
        uVar7 = (ulonglong)(uint)local_c8[0];
      } while ((uint)local_c8[0] < (uint)local_b4);
      uVar22 = (ulonglong)uVar16;
      uVar9 = local_b8;
      goto LAB_1453cbade;
    }
  }
  pvVar18 = (void *)0x0;
  if ((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) {
    pvVar18 = (void *)(*param_1 +
                      (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) *
                      (ulonglong)*(ushort *)(param_1 + 2) * 4);
  }
  _Dst = (void *)*param_2;
  *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbade;
  memcpy(_Dst,pvVar18,uVar22 << 2);
LAB_1453cbade:
  uVar7 = 1;
  uVar14 = *(uint *)(param_2 + 1);
  if ((uVar14 & 0xf00) == 0x100) {
    uVar9 = uVar9 & 0xff;
    if (uVar9 < (uVar14 & 0xff)) {
      if (uVar9 == 1) {
        if (1 < (uVar14 & 0xff)) {
          do {
            uVar3 = *(ushort *)(param_2 + 2);
            pvVar18 = (void *)*param_2;
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbb3a;
            memcpy((void *)((longlong)pvVar18 + uVar7 * uVar3 * 4),pvVar18,uVar22 << 2);
            uVar9 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
          } while (uVar9 < *(byte *)(param_2 + 1));
        }
      }
      else if (uVar9 == 2) {
        puVar1 = (ushort *)(param_2 + 2);
        uVar14 = uVar14 & 0x7000;
        if (uVar14 == 0x7000) {
          lVar21 = *param_2;
          uVar3 = *puVar1;
          *(int *)((longlong)local_d8 + lVar6 + lVar5) = (int)uVar22;
          *(undefined4 *)((longlong)&local_e0 + lVar6 + lVar5) = 0x3f000000;
          *(undefined4 *)((longlong)local_e8 + lVar6 + lVar5) = 0x3f000000;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbb96;
          FUN_1453baf30(lVar21 + (ulonglong)uVar3 * 8,lVar21,0x3f800000,0x3f800000);
          uVar3 = *puVar1;
          lVar21 = *param_2;
          *(int *)((longlong)local_d8 + lVar6 + lVar5) = (int)uVar22;
          *(undefined4 *)((longlong)&local_e0 + lVar6 + lVar5) = 0x3f000000;
          *(undefined4 *)((longlong)local_e8 + lVar6 + lVar5) = 0x3f000000;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbbc0;
          FUN_1453baf30(lVar21 + (ulonglong)uVar3 * 8,lVar21 + (ulonglong)uVar3 * 4,0x3f800000,
                        0x3f800000);
        }
        lVar21 = 0x10;
        if ((*(uint *)(param_2 + 1) & 0x210000) != 0) {
          uVar3 = *puVar1;
          pvVar18 = (void *)*param_2;
          lVar11 = 8;
          if (uVar14 == 0x7000) {
            lVar11 = 0xc;
          }
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbbff;
          memcpy((void *)(lVar11 * (ulonglong)uVar3 + (longlong)pvVar18),pvVar18,uVar22 << 2);
          uVar3 = *puVar1;
          lVar11 = *param_2;
          lVar15 = 0xc;
          if (uVar14 == 0x7000) {
            lVar15 = 0x10;
          }
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbc25;
          memcpy((void *)(lVar11 + lVar15 * (ulonglong)uVar3),
                 (void *)(lVar11 + (ulonglong)uVar3 * 4),uVar22 << 2);
        }
        local_c0 = (ushort *)(param_2 + 2);
        if ((*(uint *)(param_2 + 1) & 0x210000) == 0x210000) {
          uVar3 = *puVar1;
          pvVar18 = (void *)*param_2;
          if (uVar14 == 0x7000) {
            lVar21 = 0x14;
          }
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbc76;
          memcpy((void *)((ulonglong)uVar3 * lVar21 + (longlong)pvVar18),pvVar18,
                 (ulonglong)uVar16 << 2);
          uVar3 = *puVar1;
          lVar21 = *param_2;
          lVar11 = 0x14;
          if (uVar14 == 0x7000) {
            lVar11 = 0x18;
          }
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbca0;
          memcpy((void *)(lVar21 + lVar11 * (ulonglong)uVar3),
                 (void *)(lVar21 + (ulonglong)uVar3 * 4),(ulonglong)uVar16 << 2);
        }
        puVar1 = local_c0;
        uVar9 = *(uint *)(param_2 + 1);
        if ((uVar9 & 0x8000) != 0) {
          uVar3 = *local_c0;
          lVar21 = *param_2;
          *(uint *)((longlong)local_d8 + lVar6 + lVar5) = uVar16;
          *(undefined4 *)((longlong)&local_e0 + lVar6 + lVar5) = 0x3f000000;
          *(undefined4 *)((longlong)local_e8 + lVar6 + lVar5) = 0x3f000000;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbcee;
          FUN_1453baf30(lVar21 + (ulonglong)((uVar9 & 0xff) - 1) * (ulonglong)uVar3 * 4,lVar21,
                        0x3f800000,0x3f800000);
          if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
            local_a0 = *param_2 +
                       (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulonglong)*puVar1 * 4;
          }
          lVar11 = local_a0;
          uVar3 = *puVar1;
          lVar21 = *param_2;
          *(uint *)((longlong)local_d8 + lVar6 + lVar5) = uVar16;
          *(undefined4 *)((longlong)&local_e0 + lVar6 + lVar5) = 0x3f000000;
          *(undefined4 *)((longlong)local_e8 + lVar6 + lVar5) = 0x3f000000;
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar5) = 0x1453cbd3a;
          FUN_1453baf30(lVar11,lVar21 + (ulonglong)uVar3 * 4,0x3f800000,0x3f800000);
        }
      }
    }
  }
  return;
}



// FUNCTION 1453cbe90 FUN_1453cbe90 body=27 status=ok
// SIG undefined FUN_1453cbe90(void)

undefined8 * FUN_1453cbe90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c346f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1453cbeb0 FUN_1453cbeb0 body=178 status=ok
// SIG undefined FUN_1453cbeb0(void)

undefined8 FUN_1453cbeb0(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)param_3 * 0x90,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\WidebandSynthesis.cpp"
                     ,0x1e);
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        lVar2 = *(longlong *)(param_1 + 8);
        uVar3 = (int)uVar4 + 1;
        puVar1 = (undefined8 *)(lVar2 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x20 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x30 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x40 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x50 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x60 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x70 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar2 + 0x80 + uVar4 * 0x90);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1453cbf70 FUN_1453cbf70 body=17 status=ok
// SIG undefined FUN_1453cbf70(void)

void FUN_1453cbf70(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001453cbf7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1453cbf90 FUN_1453cbf90 body=43 status=ok
// SIG undefined FUN_1453cbf90(void)

void FUN_1453cbf90(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      lVar3 = uVar2 * 0x90;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      puVar4 = (undefined8 *)(lVar3 + *(longlong *)(param_1 + 8));
      *puVar4 = 0;
      puVar4[1] = 0;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1453cbfc0 FUN_1453cbfc0 body=1275 status=ok
// SIG undefined FUN_1453cbfc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453cbfc0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,float param_5
                  ,float param_6,float param_7,float *param_8)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined8 auStack_120 [5];
  uint auStack_f8 [4];
  undefined8 local_e8;
  longlong local_e0;
  ulonglong uVar13;
  
  uVar15 = (ulonglong)param_3 * 4 + 0xf;
  if (uVar15 <= (ulonglong)param_3 * 4) {
    uVar15 = 0xffffffffffffff0;
  }
  auStack_120[0] = 0x1453cc05a;
  pfVar2 = (float *)(param_1 + 0x18);
  fVar18 = *pfVar2;
  lVar5 = -(uVar15 & 0xfffffffffffffff0);
  param_6 = param_6 * param_7;
  bVar4 = param_6 == fVar18;
  if (!bVar4) {
    fVar18 = 1.0;
  }
  fVar19 = *(float *)(param_1 + 0x14);
  *(uint *)((longlong)auStack_f8 + lVar5) = param_3;
  *(undefined8 *)((longlong)auStack_120 + lVar5) = 0x1453cc0c4;
  FUN_1453bb070(param_8,param_2,uVar15 & 0xfffffffffffffff0,param_7 * fVar19 * fVar18);
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar15 = 0;
  local_e8 = param_2;
  local_e0 = (longlong)&local_e8 + lVar5;
  if (uVar12 != 0) {
    do {
      fVar18 = (float)uVar12 - 1.0;
      if (fVar18 <= 1.0) {
        fVar18 = 1.0;
      }
      fVar18 = ((float)uVar15 / fVar18) * 0.2;
      if (fVar18 < param_5) {
        *(undefined8 *)((longlong)auStack_120 + lVar5) = 0x1453cc19a;
        fmodf(param_5 - fVar18,0.2);
      }
      lVar9 = uVar15 * 0x90 + *(longlong *)(param_1 + 8);
      *(longlong *)((longlong)auStack_f8 + lVar5) = lVar9;
      *(undefined8 *)((longlong)auStack_120 + lVar5) = 0x1453cc1ea;
      FUN_145380490(&local_e8,param_3,0,lVar9 + 0x10);
      *(uint *)((longlong)auStack_f8 + lVar5) = param_3;
      *(undefined8 *)((longlong)auStack_120 + lVar5) = 0x1453cc223;
      FUN_1453bb070(param_8,(longlong)&local_e8 + lVar5);
      uVar12 = *(uint *)(param_1 + 0x10);
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
    } while (uVar17 < uVar12);
  }
  uVar15 = 0;
  if (bVar4) {
    return;
  }
  fVar18 = *pfVar2;
  fVar19 = (param_6 - fVar18) / (float)param_3;
  if (param_3 != 0) {
    if ((7 < param_3) && ((pfVar2 < param_8 || (param_8 + (param_3 - 1) < pfVar2)))) {
      uVar12 = 7;
      do {
        iVar11 = (int)uVar15;
        pfVar10 = param_8 + uVar15;
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar3 = param_8 + uVar15;
        *pfVar3 = (((float)(iVar11 + 1U >> 8) * 256.0 + (float)(iVar11 + 1U & 0xff)) * fVar19 +
                  fVar18) * *pfVar10;
        pfVar3[1] = (((float)(iVar11 + 2U >> 8) * 256.0 + (float)(iVar11 + 2U & 0xff)) * fVar19 +
                    fVar18) * fVar6;
        pfVar3[2] = (((float)(iVar11 + 3U >> 8) * 256.0 + (float)(iVar11 + 3U & 0xff)) * fVar19 +
                    fVar18) * fVar7;
        pfVar3[3] = (((float)(iVar11 + 4U >> 8) * 256.0 + (float)(iVar11 + 4U & 0xff)) * fVar19 +
                    fVar18) * fVar8;
        uVar15 = (ulonglong)(iVar11 + 8U);
        pfVar10 = param_8 + (uVar12 - 3);
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar3 = param_8 + (uVar12 - 3);
        *pfVar3 = (((float)(uVar12 - 2 >> 8) * 256.0 + (float)(uVar12 - 2 & 0xff)) * fVar19 + fVar18
                  ) * *pfVar10;
        pfVar3[1] = (((float)(uVar12 - 1 >> 8) * 256.0 + (float)(uVar12 - 1 & 0xff)) * fVar19 +
                    fVar18) * fVar6;
        pfVar3[2] = (((float)(uVar12 >> 8) * 256.0 + (float)(uVar12 & 0xff)) * fVar19 + fVar18) *
                    fVar7;
        pfVar3[3] = (((float)(uVar12 + 1 >> 8) * 256.0 + (float)(uVar12 + 1 & 0xff)) * fVar19 +
                    fVar18) * fVar8;
        uVar12 = uVar12 + 8;
      } while (iVar11 + 8U < (param_3 & 0xfffffff8));
    }
    uVar12 = (uint)uVar15;
    if (uVar12 < param_3) {
      uVar13 = uVar15;
      if (3 < param_3 - uVar12) {
        uVar14 = uVar12 + 2;
        pfVar10 = param_8 + uVar15 + 2;
        uVar17 = ((param_3 - uVar12) - 4 >> 2) + 1;
        uVar16 = (ulonglong)uVar17;
        uVar12 = uVar12 + uVar17 * 4;
        uVar13 = (ulonglong)uVar12;
        uVar15 = uVar15 + (ulonglong)uVar17 * 4;
        do {
          uVar17 = uVar14 + 1;
          pfVar10[-2] = ((float)(uVar14 - 1) * fVar19 + *pfVar2) * pfVar10[-2];
          pfVar10[-1] = ((float)uVar14 * fVar19 + *pfVar2) * pfVar10[-1];
          uVar1 = uVar14 + 2;
          uVar14 = uVar14 + 4;
          *pfVar10 = ((float)uVar17 * fVar19 + *pfVar2) * *pfVar10;
          pfVar10[1] = ((float)uVar1 * fVar19 + *pfVar2) * pfVar10[1];
          pfVar10 = pfVar10 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        if (param_3 <= uVar12) goto LAB_1453cc463;
      }
      param_8 = param_8 + uVar15;
      do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        *param_8 = ((float)uVar13 * fVar19 + *pfVar2) * *param_8;
        param_8 = param_8 + 1;
      } while (uVar12 < param_3);
    }
  }
LAB_1453cc463:
  *pfVar2 = param_6;
  return;
}



// FUNCTION 1453cc4c0 FUN_1453cc4c0 body=761 status=ok
// SIG undefined FUN_1453cc4c0(void)

undefined8
FUN_1453cc4c0(longlong param_1,longlong param_2,uint param_3,float param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
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
  
  uVar8 = 0;
  if (param_3 >> 1 != 0) {
    do {
      uVar5 = uVar8 * 2;
      fVar13 = *(float *)(param_2 + (ulonglong)uVar5 * 8);
      uVar7 = (ulonglong)uVar5;
      uVar6 = (ulonglong)(uVar5 + 1);
      fVar1 = *(float *)(param_1 + uVar7 * 8);
      fVar14 = *(float *)(param_2 + uVar6 * 8);
      fVar18 = fVar13 + fVar14;
      fVar2 = *(float *)(param_1 + 4 + uVar7 * 8);
      fVar3 = *(float *)(param_1 + uVar6 * 8);
      fVar19 = *(float *)(param_1 + 4 + uVar6 * 8);
      if (fVar18 == 0.0) {
        return 2;
      }
      fVar13 = ((fVar1 * fVar14 - *(float *)(param_2 + 4 + uVar6 * 8) * fVar2) +
               (fVar13 * fVar3 - fVar19 * *(float *)(param_2 + 4 + uVar7 * 8))) / fVar18;
      fVar14 = fVar13 * param_4 + 1.0;
      if (fVar14 == 0.0) {
        return 2;
      }
      fVar19 = fVar19 * param_4;
      fVar17 = fVar1 * param_4 + 1.0;
      fVar20 = fVar2 * param_4;
      fVar13 = (fVar13 + param_4) / fVar14;
      fVar15 = fVar3 * param_4 + 1.0;
      if ((fVar17 == 0.0) && (fVar20 == 0.0)) {
        return 2;
      }
      if ((fVar15 == 0.0) && (fVar19 == 0.0)) {
        return 2;
      }
      fVar11 = 1.0 / (fVar20 * fVar20 + fVar17 * fVar17);
      fVar4 = *(float *)(param_1 + 4 + uVar6 * 8);
      fVar9 = ((fVar1 + param_4) * fVar17 + fVar20 * fVar2) * fVar11;
      fVar12 = 1.0 / (fVar19 * fVar19 + fVar15 * fVar15);
      fVar16 = fVar15 * fVar17 - fVar19 * fVar20;
      fVar10 = ((fVar3 + param_4) * fVar15 + fVar19 * *(float *)(param_1 + 4 + uVar6 * 8)) * fVar12;
      if (fVar16 == 0.0) {
        return 2;
      }
      uVar5 = uVar8 * 6;
      uVar8 = uVar8 + 1;
      fVar16 = (fVar14 * fVar18) / fVar16;
      *(float *)(param_5 + (ulonglong)uVar5 * 4) = fVar16;
      *(float *)(param_5 + (ulonglong)(uVar5 + 1) * 4) = -((fVar13 + param_4) * fVar16);
      *(float *)(param_5 + (ulonglong)(uVar5 + 2) * 4) = fVar16 * fVar13 * param_4;
      *(undefined4 *)(param_5 + (ulonglong)(uVar5 + 3) * 4) = 0x3f800000;
      *(float *)(param_5 + (ulonglong)(uVar5 + 4) * 4) = -fVar9 - fVar10;
      *(float *)(param_5 + (ulonglong)(uVar5 + 5) * 4) =
           fVar10 * fVar9 -
           (fVar15 * fVar4 - (fVar3 + param_4) * fVar19) * fVar12 *
           (fVar17 * fVar2 - (fVar1 + param_4) * fVar20) * fVar11;
    } while (uVar8 < param_3 >> 1);
  }
  return 1;
}



// FUNCTION 1453cc7c0 FUN_1453cc7c0 body=572 status=ok
// SIG undefined FUN_1453cc7c0(void)

void FUN_1453cc7c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      uVar3 = (int)uVar4 * 6;
      fVar1 = *(float *)(param_2 + (ulonglong)(uVar3 + 2) * 4);
      fVar5 = *(float *)(param_2 + (ulonglong)uVar3 * 4);
      fVar8 = *(float *)(param_2 + (ulonglong)(uVar3 + 1) * 4);
      fVar10 = -*(float *)(param_2 + (ulonglong)(uVar3 + 4) * 4);
      fVar11 = -*(float *)(param_2 + (ulonglong)(uVar3 + 5) * 4);
      pfVar2 = (float *)(*(longlong *)(param_1 + 8) + 0x10 + uVar4 * 0x90);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = fVar5;
        pfVar2[1] = fVar5;
        pfVar2[2] = fVar5;
        pfVar2[3] = fVar5;
        pfVar2[4] = 0.0;
        pfVar2[5] = 0.0;
        pfVar2[0x14] = fVar1;
        pfVar2[6] = 0.0;
        pfVar2[8] = 0.0;
        pfVar2[9] = 0.0;
        fVar6 = fVar10 * fVar5 + fVar8;
        fVar9 = fVar10 * fVar11;
        pfVar2[0xc] = 0.0;
        pfVar2[0x10] = fVar8;
        pfVar2[0x18] = fVar10;
        pfVar2[0x1d] = fVar9;
        pfVar2[7] = fVar6;
        pfVar2[10] = fVar6;
        pfVar2[0xd] = fVar6;
        fVar7 = fVar11 * fVar8;
        pfVar2[0x1c] = fVar11;
        fVar6 = fVar6 * fVar10 + fVar1 + fVar11 * fVar5;
        pfVar2[0xb] = fVar6;
        pfVar2[0xe] = fVar6;
        pfVar2[0xf] = fVar9 * fVar5 + fVar6 * fVar10 + fVar7;
        fVar5 = fVar10 * fVar8 + fVar1;
        pfVar2[0x11] = fVar5;
        fVar5 = fVar5 * fVar10 + fVar7;
        pfVar2[0x12] = fVar5;
        pfVar2[0x15] = fVar10 * fVar1;
        fVar8 = fVar10 * fVar1 * fVar10;
        pfVar2[0x13] = (fVar5 + fVar7) * fVar10 + fVar11 * fVar1;
        fVar5 = fVar10 * fVar10;
        pfVar2[0x16] = fVar8 + fVar11 * fVar1;
        pfVar2[0x17] = ((fVar1 + fVar1) * fVar11 + fVar8) * fVar10;
        pfVar2[0x19] = fVar5 + fVar11;
        pfVar2[0x1a] = (fVar11 + fVar11 + fVar5) * fVar10;
        pfVar2[0x1b] = (fVar11 * 3.0 + fVar5) * fVar10 * fVar10 + fVar11 * fVar11;
        pfVar2[0x1e] = fVar11 * fVar11 + fVar9 * fVar10;
        pfVar2[0x1f] = ((fVar11 + fVar11) * fVar11 + fVar9 * fVar10) * fVar10;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1453cca00 FUN_1453cca00 body=117 status=ok
// SIG undefined FUN_1453cca00(void)

void FUN_1453cca00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  memset(param_1 + 5,0,800);
  memset(param_1 + 0xd4,0,0x4000);
  *param_1 = param_3;
  param_1[2] = param_4;
  param_1[0x10d4] = param_2;
  FUN_1453ccdf0(param_1,param_5);
  return;
}



// FUNCTION 1453cca80 FUN_1453cca80 body=29 status=ok
// SIG undefined FUN_1453cca80(void)

void FUN_1453cca80(longlong param_1,byte param_2,undefined4 param_3,void *param_4)

{
  *(byte *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  memcpy((void *)(param_1 + 0x14),param_4,(ulonglong)param_2 << 3);
  return;
}



// FUNCTION 1453ccaa0 FUN_1453ccaa0 body=686 status=ok
// SIG undefined FUN_1453ccaa0(void)

void FUN_1453ccaa0(longlong param_1,uint param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  byte bVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = 0;
  fVar10 = 0.0;
  fVar1 = *(float *)(param_1 + 0x348);
  fVar2 = *(float *)(param_1 + 0x340);
  fVar6 = (float)param_2;
  if (fVar6 <= 1.0) {
    fVar6 = 1.0;
  }
  if (param_2 != 0) {
    pfVar5 = (float *)(param_1 + 0x350);
    do {
      fVar10 = (float)FUN_1453cd110(param_1,*(undefined4 *)(param_1 + 0x338));
      uVar3 = uVar3 + 1;
      fVar7 = sinf(*(float *)(param_1 + 0x4364));
      fVar9 = *(float *)(param_1 + 0x340);
      fVar8 = fmodf(*(float *)(param_1 + 0x435c) + 1.5707964,6.2831855);
      fVar9 = fmodf(ABS(fVar7) * ((float)uVar3 * (param_4 - fVar2) * (1.0 / fVar6) + fVar9) *
                    6.2831855 + fVar8,6.2831855);
      fVar9 = sinf(fVar9);
      *pfVar5 = fVar9 * ((float)uVar3 * (param_5 - fVar1) * (1.0 / fVar6) +
                        *(float *)(param_1 + 0x348)) * fVar10;
      fVar9 = fmodf(*(float *)(param_1 + 0x435c) + *(float *)(param_1 + 0x4358),6.2831855);
      *(float *)(param_1 + 0x435c) = fVar9;
      fVar9 = fmodf(*(float *)(param_1 + 0x4364) + *(float *)(param_1 + 0x4360),6.2831855);
      fVar7 = param_3 + *(float *)(param_1 + 0x338);
      bVar4 = *(byte *)(param_1 + 0x334);
      *(float *)(param_1 + 0x4364) = fVar9;
      *(float *)(param_1 + 0x338) = fVar7;
      while (((int)(uint)bVar4 < (int)(*(byte *)(param_1 + 0x10) - 1) &&
             ((float)*(uint *)(param_1 + 0x1c + (ulonglong)bVar4 * 8) <= fVar7))) {
        bVar4 = bVar4 + 1;
        *(byte *)(param_1 + 0x334) = bVar4;
      }
      if ((float)*(uint *)(param_1 + 0xc) <= fVar7) {
        *(undefined1 *)(param_1 + 0x4354) = 1;
      }
      pfVar5 = pfVar5 + 1;
    } while (uVar3 < param_2);
  }
  *(float *)(param_1 + 0x348) = param_5;
  *(float *)(param_1 + 0x344) = fVar10;
  *(float *)(param_1 + 0x340) = param_4;
  *(undefined1 *)(param_1 + 0x4374) = 1;
  return;
}



// FUNCTION 1453ccd50 FUN_1453ccd50 body=153 status=ok
// SIG undefined FUN_1453ccd50(void)

void FUN_1453ccd50(longlong param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x4350);
  fVar1 = *(float *)(param_1 + 4);
  fVar3 = fmodf(*(float *)(param_1 + 0x435c) + 1.5707964,6.2831855);
  fVar3 = fmodf(fVar3 + 3.1415927,6.2831855);
  *(float *)(param_1 + 0x4368) = fVar3 - 3.1415927;
  *(float *)(param_1 + 0x4370) = (float)uVar2;
  *(float *)(param_1 + 0x436c) = (fVar1 * 6.2831855) / (float)uVar2;
  return;
}



// FUNCTION 1453ccdf0 FUN_1453ccdf0 body=651 status=ok
// SIG undefined FUN_1453ccdf0(void)

void FUN_1453ccdf0(float *param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  if (param_2 != 0.0) {
    fVar4 = param_1[0x10d4];
    uVar2 = FUN_145376c80(((fVar1 - DAT_14c73e884) / (float)(uint)fVar4) * 6.2831855);
    fVar1 = (float)uVar2;
    fVar5 = (float)((ulonglong)uVar2 >> 0x20);
    fVar6 = fVar1 * param_2;
    fVar8 = fVar5 + param_2;
    fVar7 = fVar5 * param_2 + 1.0;
    fVar5 = 1.0 / (fVar6 * fVar6 + fVar7 * fVar7);
    fVar1 = atan2f((fVar7 * fVar1 - fVar8 * fVar6) * fVar5,(fVar8 * fVar7 + fVar6 * fVar1) * fVar5);
    fVar1 = fVar1 * 0.15915494 * (float)(uint)fVar4 + DAT_14c73e884;
  }
  if (1.0 <= fVar1) {
    fVar4 = (float)(uint)param_1[0x10d4] * 0.5;
    if (fVar1 <= (float)(uint)param_1[0x10d4] * 0.5) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 1.0;
  }
  fVar1 = param_1[2];
  param_1[1] = fVar4;
  param_1[0xd1] = 0.0;
  param_1[0xd2] = 0.0;
  fVar6 = (float)(uint)param_1[0x10d4];
  param_1[0xce] = 0.0;
  param_1[0xd0] = 0.0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  param_1[0x10d7] = fVar1;
  param_1[0x10d6] = (1.0 / fVar6) * fVar4 * 6.2831855;
  dVar3 = pow((double)(fVar4 * 0.001 * fVar4 * 0.001 * 1.4 + 1.0),0.6899999976158142);
  param_1[0x10d9] = 0.0;
  fVar5 = (float)dVar3 * 75.0 * 0.9 + 22.5;
  param_1[0xcf] = fVar5;
  param_1[0x10d8] = fVar5 * 6.2831855 * (1.0 / fVar6);
  fVar1 = fmodf(fVar1 + 1.5707964,6.2831855);
  fVar1 = fmodf(fVar1 + 3.1415927,6.2831855);
  param_1[0x10dc] = fVar6;
  param_1[0x10db] = (fVar4 * 6.2831855) / fVar6;
  param_1[0x10da] = fVar1 - 3.1415927;
  *(undefined1 *)(param_1 + 0x10dd) = 0;
  *(undefined1 *)(param_1 + 0x10d5) = 0;
  return;
}



// FUNCTION 1453cd080 FUN_1453cd080 body=131 status=ok
// SIG undefined FUN_1453cd080(void)

void FUN_1453cd080(longlong param_1,float param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x334);
  fVar2 = (float)param_3 * param_2 + *(float *)(param_1 + 0x338);
  *(float *)(param_1 + 0x338) = fVar2;
  while (((int)(uint)bVar1 < (int)(*(byte *)(param_1 + 0x10) - 1) &&
         ((float)*(uint *)(param_1 + 0x1c + (ulonglong)bVar1 * 8) <= fVar2))) {
    bVar1 = bVar1 + 1;
    *(byte *)(param_1 + 0x334) = bVar1;
  }
  if ((float)*(uint *)(param_1 + 0xc) <= fVar2) {
    *(undefined1 *)(param_1 + 0x4354) = 1;
  }
  return;
}



// FUNCTION 1453cd110 FUN_1453cd110 body=254 status=ok
// SIG undefined FUN_1453cd110(void)

float FUN_1453cd110(longlong param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 local_res18;
  
  bVar1 = *(byte *)(param_1 + 0x334);
  uVar3 = (ulonglong)bVar1;
  uVar4 = uVar3;
  if ((float)*(uint *)(param_1 + 0x1c + uVar3 * 8) <= param_2) {
    do {
      uVar4 = (ulonglong)bVar1;
      if ((int)(*(byte *)(param_1 + 0x10) - 1) <= (int)uVar3) break;
      bVar1 = (char)uVar3 + 1;
      uVar3 = (ulonglong)bVar1;
      *(byte *)(param_1 + 0x334) = bVar1;
      uVar4 = (ulonglong)bVar1;
    } while ((float)*(uint *)(param_1 + 0x1c + uVar3 * 8) <= param_2);
  }
  uVar3 = uVar4;
  if (((char)uVar4 != '\0') || (uVar3 = 0, (float)*(uint *)(param_1 + 0x14) <= param_2)) {
    local_res18 = *(ulonglong *)(param_1 + 0x14 + uVar3 * 8);
    if ((int)uVar4 == *(byte *)(param_1 + 0x10) - 1) {
      local_res8 = (ulonglong)*(uint *)(param_1 + 0xc);
    }
    else {
      local_res8 = *(ulonglong *)(param_1 + 0x1c + uVar4 * 8);
    }
  }
  else {
    local_res8 = *(ulonglong *)(param_1 + 0x14);
    local_res18 = 0;
  }
  iVar2 = (int)local_res8;
  local_res8._4_4_ = (float)(local_res8 >> 0x20);
  return ((param_2 - (float)(local_res18 & 0xffffffff)) / (float)(uint)(iVar2 - (int)local_res18)) *
         (local_res8._4_4_ - local_res18._4_4_) + local_res18._4_4_;
}



// FUNCTION 1453cd210 FUN_1453cd210 body=741 status=ok
// SIG undefined FUN_1453cd210(void)

void FUN_1453cd210(longlong param_1,uint param_2,float param_3,float param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_R9;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  uint *puVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_1 + 0x4354) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (((float)uVar1 <= *(float *)(param_1 + 0x338)) &&
       (uVar1 = *(uint *)(param_1 + 0xc),
       (int)(uint)*(byte *)(param_1 + 0x334) < (int)(*(byte *)(param_1 + 0x10) - 1))) {
      uVar1 = *(uint *)(param_1 + 0x1c + (ulonglong)*(byte *)(param_1 + 0x334) * 8);
    }
    auVar5._0_4_ = ((float)uVar1 - *(float *)(param_1 + 0x338)) / param_3;
    iVar2 = (int)auVar5._0_4_;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != auVar5._0_4_)) {
      auVar5._4_4_ = auVar5._0_4_;
      auVar5._8_8_ = 0;
      uVar1 = movmskps(uVar1,auVar5);
      auVar5._0_4_ = (float)(int)(iVar2 + (uVar1 & 1 ^ 1));
    }
    if ((uint)(longlong)auVar5._0_4_ < param_2) {
      param_2 = (uint)(longlong)auVar5._0_4_;
    }
    if (param_2 < 0x10) {
      FUN_1453cd500(param_1,param_2,param_3,in_R9,param_5);
    }
    else {
      uVar1 = *param_5;
      puVar8 = param_5;
      FUN_1453cd500(param_1,-uVar1 & 0xf,param_3,in_R9,param_5);
      uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
      param_2 = param_2 - (-uVar1 & 0xf);
      uVar1 = param_2 & 0xfffffff0;
      if (uVar1 != 0) {
        fVar7 = (float)uVar1;
        auVar5._0_4_ = (float)FUN_1453cd110(param_1,fVar7 * param_3 + *(float *)(param_1 + 0x338));
        fVar6 = fVar7 * param_4 + *(float *)(param_1 + 0x348);
        FUN_1450fa230(param_1 + 0x4368,param_1 + ((ulonglong)*param_5 + 0xd4) * 4,uVar1,
                      *(float *)(param_1 + 0x348) * *(float *)(param_1 + 0x344),
                      CONCAT44(uVar9,fVar6 * auVar5._0_4_));
        *param_5 = *param_5 + uVar1;
        fVar4 = fmodf(fVar7 * *(float *)(param_1 + 0x4358) + *(float *)(param_1 + 0x435c),6.2831855)
        ;
        *(float *)(param_1 + 0x435c) = fVar4;
        fVar4 = fmodf(fVar7 * *(float *)(param_1 + 0x4360) + *(float *)(param_1 + 0x4364),6.2831855)
        ;
        *(float *)(param_1 + 0x4364) = fVar4;
        FUN_1453cd080(param_1);
        *(float *)(param_1 + 0x344) = auVar5._0_4_;
        *(float *)(param_1 + 0x348) = fVar6;
      }
      FUN_1453cd500(param_1,param_2 - uVar1,param_3,param_4,param_5);
    }
  }
  else {
    iVar2 = 0;
    if (3 < (int)param_2) {
      uVar1 = (param_2 - 4 >> 2) + 1;
      uVar3 = (ulonglong)uVar1;
      iVar2 = uVar1 * 4;
      do {
        *(undefined4 *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = 0;
        *param_5 = *param_5 + 1;
        *(undefined4 *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = 0;
        *param_5 = *param_5 + 1;
        *(undefined4 *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = 0;
        *param_5 = *param_5 + 1;
        *(undefined4 *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = 0;
        *param_5 = *param_5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (iVar2 < (int)param_2) {
      uVar3 = (ulonglong)(param_2 - iVar2);
      do {
        *(undefined4 *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = 0;
        *param_5 = *param_5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1453cd500 FUN_1453cd500 body=572 status=ok
// SIG undefined FUN_1453cd500(void)

void FUN_1453cd500(longlong param_1,uint param_2,float param_3,float param_4,uint *param_5)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      fVar3 = (float)FUN_1453cd110(param_1,*(undefined4 *)(param_1 + 0x338));
      uVar1 = uVar1 + 1;
      fVar6 = (float)uVar1 * param_4 + *(float *)(param_1 + 0x348);
      fVar4 = fmodf(*(float *)(param_1 + 0x435c) + 1.5707964,6.2831855);
      fVar4 = sinf(fVar4);
      *(float *)(param_1 + 0x350 + (ulonglong)*param_5 * 4) = fVar4 * fVar6 * fVar3;
      *param_5 = *param_5 + 1;
      fVar4 = fmodf(*(float *)(param_1 + 0x435c) + *(float *)(param_1 + 0x4358),6.2831855);
      *(float *)(param_1 + 0x435c) = fVar4;
      fVar4 = fmodf(*(float *)(param_1 + 0x4360) + *(float *)(param_1 + 0x4364),6.2831855);
      fVar5 = param_3 + *(float *)(param_1 + 0x338);
      bVar2 = *(byte *)(param_1 + 0x334);
      *(float *)(param_1 + 0x4364) = fVar4;
      *(float *)(param_1 + 0x338) = fVar5;
      while (((int)(uint)bVar2 < (int)(*(byte *)(param_1 + 0x10) - 1) &&
             ((float)*(uint *)(param_1 + 0x1c + (ulonglong)bVar2 * 8) <= fVar5))) {
        bVar2 = bVar2 + 1;
        *(byte *)(param_1 + 0x334) = bVar2;
      }
      if ((float)*(uint *)(param_1 + 0xc) <= fVar5) {
        *(undefined1 *)(param_1 + 0x4354) = 1;
      }
    } while (uVar1 < param_2);
    uVar1 = *(uint *)(param_1 + 0x4350);
    *(float *)(param_1 + 0x344) = fVar3;
    fVar3 = *(float *)(param_1 + 4);
    *(float *)(param_1 + 0x348) = fVar6;
    fVar4 = fmodf(*(float *)(param_1 + 0x435c) + 1.5707964,6.2831855);
    fVar4 = fmodf(fVar4 + 3.1415927,6.2831855);
    *(float *)(param_1 + 0x4368) = fVar4 - 3.1415927;
    *(float *)(param_1 + 0x4370) = (float)uVar1;
    *(float *)(param_1 + 0x436c) = (fVar3 * 6.2831855) / (float)uVar1;
  }
  return;
}



// FUNCTION 1453cd740 FUN_1453cd740 body=23 status=ok
// SIG undefined FUN_1453cd740(void)

undefined8 * FUN_1453cd740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c346f8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1453cd760 FUN_1453cd760 body=63 status=ok
// SIG undefined FUN_1453cd760(void)

int FUN_1453cd760(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(param_3 & 0xffffffff) * 0x4380,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\NarrowbandSynthesis.cpp"
                     ,0x1b);
  *(longlong *)(param_1 + 0x10) = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1453cd7a0 FUN_1453cd7a0 body=17 status=ok
// SIG undefined FUN_1453cd7a0(void)

void FUN_1453cd7a0(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001453cd7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1453cd7c0 FUN_1453cd7c0 body=832 status=ok
// SIG undefined FUN_1453cd7c0(void)

void FUN_1453cd7c0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar4;
  
  uVar4 = 0;
  fVar12 = DAT_14c73e884;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar2 = uVar4 * 0x4380;
      fVar5 = *(float *)(lVar2 + lVar1);
      if (param_2 == 0.0) {
        uVar3 = *(uint *)(lVar2 + 0x4350 + lVar1);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0x4350 + lVar1);
        uVar6 = FUN_145376c80(((fVar5 - fVar12) / (float)uVar3) * 6.2831855);
        fVar5 = (float)uVar6;
        fVar9 = fVar5 * param_2;
        fVar8 = (float)((ulonglong)uVar6 >> 0x20);
        fVar10 = fVar8 + param_2;
        fVar11 = fVar8 * param_2 + 1.0;
        fVar8 = 1.0 / (fVar9 * fVar9 + fVar11 * fVar11);
        fVar5 = atan2f((fVar11 * fVar5 - fVar10 * fVar9) * fVar8,
                       (fVar9 * fVar5 + fVar10 * fVar11) * fVar8);
        fVar5 = fVar5 * 0.15915494 * (float)uVar3 + fVar12;
      }
      if (1.0 <= fVar5) {
        fVar12 = (float)uVar3 * 0.5;
        if (fVar5 <= (float)uVar3 * 0.5) {
          fVar12 = fVar5;
        }
      }
      else {
        fVar12 = 1.0;
      }
      fVar5 = *(float *)(lVar2 + 8 + lVar1);
      *(float *)(lVar2 + 4 + lVar1) = fVar12;
      *(undefined8 *)(lVar2 + 0x344 + lVar1) = 0;
      *(float *)(lVar2 + 0x435c + lVar1) = fVar5;
      fVar11 = (float)uVar3;
      *(undefined4 *)(lVar2 + 0x338 + lVar1) = 0;
      *(undefined4 *)(lVar2 + 0x340 + lVar1) = 0;
      *(undefined1 *)(lVar2 + 0x334 + lVar1) = 0;
      *(float *)(lVar2 + 0x4358 + lVar1) = (1.0 / fVar11) * fVar12 * 6.2831855;
      dVar7 = pow((double)(fVar12 * 0.001 * fVar12 * 0.001 * 1.4 + 1.0),0.6899999976158142);
      *(undefined4 *)(lVar2 + 0x4364 + lVar1) = 0;
      fVar8 = (float)dVar7 * 75.0 * 0.9 + 22.5;
      *(float *)(lVar2 + 0x33c + lVar1) = fVar8;
      *(float *)(lVar2 + 0x4360 + lVar1) = fVar8 * 6.2831855 * (1.0 / fVar11);
      fVar5 = fmodf(fVar5 + 1.5707964,6.2831855);
      fVar5 = fmodf(fVar5 + 3.1415927,6.2831855);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(float *)(lVar2 + 0x4370 + lVar1) = fVar11;
      *(float *)(lVar2 + 0x436c + lVar1) = (fVar12 * 6.2831855) / fVar11;
      fVar12 = DAT_14c73e884;
      *(float *)(lVar2 + 0x4368 + lVar1) = fVar5 - 3.1415927;
      *(undefined1 *)(lVar2 + 0x4374 + lVar1) = 0;
      *(undefined1 *)(lVar2 + 0x4354 + lVar1) = 0;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1453cdb00 FUN_1453cdb00 body=454 status=ok
// SIG undefined FUN_1453cdb00(void)

void FUN_1453cdb00(float *param_1,longlong param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  param_3 = param_3 & 0xff;
  fVar9 = 1.0 / (float)param_3;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x344);
    fVar10 = (float)param_3 - 1.0;
    uVar4 = 0;
    if (fVar10 <= 1.0) {
      fVar10 = 1.0;
    }
    do {
      uVar2 = uVar4 + 1;
      fVar5 = (float)(int)uVar2 * fVar9 - *param_1;
      if (0.0 <= fVar5) {
        if (fVar9 <= fVar5) {
          fVar5 = fVar9;
        }
        fVar5 = fVar5 / fVar9;
      }
      else {
        fVar5 = 0.0;
      }
      fVar6 = ((float)uVar4 / fVar10) * 0.2;
      if (fVar6 < param_1[9]) {
        fVar6 = param_1[9] - fVar6;
        fVar7 = fmodf(fVar6,0.2);
        fVar7 = fVar7 * 5.0;
        if (((int)(fVar6 * 5.0) & 1U) == 0) {
          fVar7 = 1.0 - fVar7;
        }
      }
      else {
        fVar7 = 0.0;
      }
      fVar6 = param_1[10];
      fVar1 = param_1[0xd];
      uVar8 = FUN_1453cd110(puVar3 + -0xd1,puVar3[-3]);
      *puVar3 = uVar8;
      puVar3[1] = (1.0 - fVar7) * (1.0 - fVar5) * fVar1;
      puVar3[-1] = fVar6;
      puVar3 = puVar3 + 0x10e0;
      uVar4 = uVar2;
    } while ((int)uVar2 < (int)param_3);
  }
  return;
}



// FUNCTION 1453cdcd0 FUN_1453cdcd0 body=1283 status=ok
// SIG undefined FUN_1453cdcd0(void)

void FUN_1453cdcd0(float param_1,float param_2,float param_3,float param_4,longlong param_5,
                  byte param_6,float param_7,uint param_8,float param_9,float param_10,
                  float *param_11)

{
  float *pfVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  char *pcVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  uint uVar13;
  
  fVar19 = param_7;
  bVar3 = param_6;
  lVar2 = param_5;
  fVar21 = *(float *)(param_5 + 0x338);
  fVar20 = (float)*(uint *)(param_5 + 0xc);
  if (fVar21 < fVar20) {
    uVar8 = (ulonglong)param_8;
    if (fVar20 <= (float)(param_8 - 1) * param_7 + fVar21) {
      fVar14 = (fVar20 - fVar21) / param_7;
      auVar18._0_8_ = (double)fVar14;
      lVar5 = (longlong)fVar14;
      if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar18._0_8_)) {
        auVar18._8_8_ = auVar18._0_8_;
        uVar4 = movmskpd(0,auVar18);
        auVar18._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar4 & 1));
      }
      uVar8 = (ulonglong)auVar18._0_8_;
    }
    fVar14 = 1.0 / (float)param_6;
    uVar4 = (uint)uVar8;
    if (param_2 <= 0.0) {
      fVar20 = 1.0;
    }
    else {
      fVar15 = powf(10.0,param_2 * 3.0);
      fVar15 = (fVar15 - 1.0) * 0.1001001;
      fVar20 = ((float)(uVar8 & 0xffffffff) + fVar21) / fVar20;
      if (1.0 <= fVar20) {
        fVar20 = 0.0;
      }
      else if (fVar15 == 2.0) {
        fVar20 = 1.0 - fVar20;
      }
      else {
        fVar20 = (fVar15 / ((1.0 - fVar15 * 0.5) * fVar20 - 1.0) + 2.0) / (2.0 - fVar15);
      }
    }
    fVar20 = fVar20 * param_9;
    uVar13 = 0;
    if (bVar3 != 0) {
      pcVar7 = (char *)(lVar2 + 0x4374);
      fVar21 = (float)bVar3 - 1.0;
      if (fVar21 <= 1.0) {
        fVar21 = 1.0;
      }
      do {
        if (uVar4 == 0) {
          pcVar7[-0x20] = '\x01';
        }
        fVar15 = (float)(uVar13 + 1) * fVar14 - param_1;
        if (0.0 <= fVar15) {
          if (fVar14 <= fVar15) {
            fVar15 = fVar14;
          }
          fVar15 = fVar15 / fVar14;
        }
        else {
          fVar15 = 0.0;
        }
        fVar17 = ((float)uVar13 / fVar21) * 0.2;
        if (fVar17 < param_4) {
          fVar17 = param_4 - fVar17;
          fVar16 = fmodf(fVar17,0.2);
          fVar16 = fVar16 * 5.0;
          if (((int)(fVar17 * 5.0) & 1U) == 0) {
            fVar16 = 1.0 - fVar16;
          }
        }
        else {
          fVar16 = 0.0;
        }
        fVar15 = (1.0 - fVar16) * (1.0 - fVar15) * param_10 * fVar20;
        if ((param_3 == 0.0) && (*(float *)(pcVar7 + -0x4034) == 0.0)) {
          if (*pcVar7 != '\0') {
            FUN_1453ccd50(pcVar7 + -0x4374);
            *pcVar7 = '\0';
          }
          param_5._0_4_ = 0;
          fVar17 = *(float *)(pcVar7 + -0x402c);
          if (uVar4 != 0) {
            do {
              FUN_1453cd210(pcVar7 + -0x4374,uVar4 - (uint)param_5,fVar19,
                            (fVar15 - fVar17) / (float)(uVar8 & 0xffffffff),&param_5);
            } while ((uint)param_5 < uVar4);
          }
        }
        else {
          FUN_1453ccaa0(pcVar7 + -0x4374,uVar8 & 0xffffffff,fVar19,param_3,fVar15);
        }
        bVar12 = (char)uVar13 + 1;
        uVar13 = (uint)bVar12;
        pcVar7 = pcVar7 + 0x4380;
      } while (bVar12 < bVar3);
    }
    uVar11 = (ulonglong)(uVar4 & 0xfffffff0);
    uVar8 = 0;
    for (pfVar9 = param_11; pfVar9 < param_11 + uVar11; pfVar9 = pfVar9 + 4) {
      fVar21 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar14 = 0.0;
      sVar6 = 0;
      if (bVar3 != 0) {
        do {
          lVar5 = (longlong)sVar6;
          sVar6 = sVar6 + 1;
          pfVar1 = (float *)(lVar2 + 0x350 + (lVar5 * 0x10e0 + uVar8) * 4);
          fVar21 = fVar21 + *pfVar1;
          fVar19 = fVar19 + pfVar1[1];
          fVar20 = fVar20 + pfVar1[2];
          fVar14 = fVar14 + pfVar1[3];
        } while (sVar6 < (short)(ushort)bVar3);
      }
      uVar8 = (ulonglong)((int)uVar8 + 4);
      *pfVar9 = *pfVar9 + fVar21;
      pfVar9[1] = pfVar9[1] + fVar19;
      pfVar9[2] = pfVar9[2] + fVar20;
      pfVar9[3] = pfVar9[3] + fVar14;
    }
    uVar4 = uVar4 - (uVar4 & 0xfffffff0);
    if (uVar4 != 0) {
      uVar10 = (ulonglong)uVar4;
      do {
        fVar21 = 0.0;
        sVar6 = 0;
        if (bVar3 != 0) {
          do {
            lVar5 = (longlong)sVar6;
            sVar6 = sVar6 + 1;
            fVar21 = fVar21 + *(float *)(lVar2 + 0x350 + (lVar5 * 0x10e0 + uVar8) * 4);
          } while (sVar6 < (short)(ushort)bVar3);
        }
        uVar8 = (ulonglong)((int)uVar8 + 1);
        param_11[uVar11] = fVar21 + param_11[uVar11];
        uVar11 = (ulonglong)((int)uVar11 + 1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}



// FUNCTION 1453ce1e0 FUN_1453ce1e0 body=17 status=ok
// SIG undefined FUN_1453ce1e0(void)

undefined4 * FUN_1453ce1e0(undefined4 *param_1)

{
  *param_1 = 0xac44;
  param_1[1] = 1;
  return param_1;
}



// FUNCTION 1453ce200 FUN_1453ce200 body=3 status=ok
// SIG undefined FUN_1453ce200(void)

void FUN_1453ce200(void)

{
  return;
}



// FUNCTION 1453ce210 FUN_1453ce210 body=17 status=ok
// SIG undefined FUN_1453ce210(void)

void FUN_1453ce210(undefined8 param_1,double param_2,longlong param_3,int param_4)

{
  *(float *)(param_3 + (longlong)param_4 * 4) = (float)param_2;
  return;
}



// FUNCTION 1453ce230 FUN_1453ce230 body=17 status=ok
// SIG undefined FUN_1453ce230(void)

void FUN_1453ce230(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  *(float *)(param_3 + (longlong)param_4 * 4) = (float)param_2;
  return;
}



// FUNCTION 1453ce250 FUN_1453ce250 body=373 status=ok
// SIG undefined FUN_1453ce250(void)

void FUN_1453ce250(undefined8 param_1,ulonglong param_2,uint param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar16;
  ulonglong uVar15;
  
  lVar6 = (longlong)param_5;
  uVar12 = 0;
  uVar14 = 0;
  if (((0 < (int)param_3) && (7 < param_3)) &&
     ((param_2 + ((longlong)(int)param_3 + -1) * 8 < (ulonglong)(param_4 + lVar6 * 4) ||
      ((ulonglong)(param_4 + (longlong)(int)(param_5 + -1 + param_3) * 4) < param_2)))) {
    pdVar7 = (double *)(param_2 + 0x20);
    puVar10 = (undefined8 *)(param_4 + (lVar6 + 4) * 4);
    uVar15 = uVar12;
    do {
      uVar14 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar12 + 8;
      dVar2 = pdVar7[-2];
      dVar3 = pdVar7[-1];
      puVar10[-2] = CONCAT44((float)pdVar7[-3],(float)pdVar7[-4]);
      dVar4 = *pdVar7;
      dVar5 = pdVar7[1];
      puVar10[-1] = CONCAT44((float)dVar3,(float)dVar2);
      dVar2 = pdVar7[2];
      dVar3 = pdVar7[3];
      *puVar10 = CONCAT44((float)dVar5,(float)dVar4);
      puVar10[1] = CONCAT44((float)dVar3,(float)dVar2);
      pdVar7 = pdVar7 + 8;
      puVar10 = puVar10 + 4;
    } while ((longlong)uVar12 < (longlong)((longlong)(int)param_3 & 0xfffffffffffffff8U));
  }
  lVar11 = (longlong)(int)uVar14;
  lVar16 = (longlong)(int)param_3;
  if (lVar11 < lVar16) {
    if (3 < lVar16 - lVar11) {
      lVar8 = lVar6 + 2 + lVar11;
      lVar1 = lVar11 * 8;
      lVar9 = ((lVar16 - lVar11) - 4U >> 2) + 1;
      lVar11 = lVar11 + lVar9 * 4;
      pdVar7 = (double *)(param_2 + 0x10 + lVar1);
      pfVar13 = (float *)(param_4 + lVar8 * 4);
      do {
        pfVar13[-2] = (float)pdVar7[-2];
        pfVar13[-1] = (float)pdVar7[-1];
        *pfVar13 = (float)*pdVar7;
        pfVar13[1] = (float)pdVar7[1];
        lVar9 = lVar9 + -1;
        pdVar7 = pdVar7 + 4;
        pfVar13 = pfVar13 + 4;
      } while (lVar9 != 0);
      if (lVar16 <= lVar11) {
        return;
      }
    }
    pfVar13 = (float *)(param_4 + (lVar6 + lVar11) * 4);
    do {
      lVar6 = lVar11 * 8;
      lVar11 = lVar11 + 1;
      *pfVar13 = (float)*(double *)(param_2 + lVar6);
      pfVar13 = pfVar13 + 1;
    } while (lVar11 < lVar16);
  }
  return;
}



// FUNCTION 1453ce3d0 FUN_1453ce3d0 body=82 status=ok
// SIG undefined FUN_1453ce3d0(void)

void FUN_1453ce3d0(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_4;
  *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
  *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
  *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[2];
  *(float *)(param_3 + 0xc + lVar1 * 4) = (float)param_2[4];
  *(float *)(param_3 + 0x10 + lVar1 * 4) = (float)param_2[5];
  return;
}



// FUNCTION 1453ce430 FUN_1453ce430 body=50 status=ok
// SIG undefined FUN_1453ce430(void)

void FUN_1453ce430(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_4;
  *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
  *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
  *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[4];
  return;
}



// FUNCTION 1453ce470 FUN_1453ce470 body=36 status=ok
// SIG undefined FUN_1453ce470(void)

void FUN_1453ce470(undefined8 *param_1)

{
  *param_1 = 0x3ff0000000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 1453ce4a0 FUN_1453ce4a0 body=525 status=ok
// SIG undefined FUN_1453ce4a0(void)

void FUN_1453ce4a0(uint param_1,double param_2,double param_3,double param_4,double *param_5)

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
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar5 = tan(param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar2 = (1.0 / param_3) * (dVar5 + 1.0);
  dVar3 = dVar5 * dVar5;
  dVar6 = pow(10.0,param_4 * 0.05);
  param_4 = param_4 * 0.08333333333333333;
  if (dVar6 < 1.0) {
    dVar6 = 1.0 / dVar6;
    dVar7 = dVar6 * dVar2;
    dVar1 = (param_2 * dVar7 + (1.0 - param_2)) * ABS(param_4) + (1.0 - ABS(param_4));
    if (dVar1 <= 1.0) {
      dVar1 = dVar4;
    }
    dVar8 = 1.0;
    dVar9 = dVar2;
    dVar4 = dVar1;
    if (dVar6 <= dVar1) {
      dVar4 = dVar6;
    }
  }
  else {
    dVar9 = dVar6 * dVar2;
    dVar8 = (1.0 - ABS(param_4)) + (param_2 * dVar9 + (1.0 - param_2)) * ABS(param_4);
    if (dVar8 <= 1.0) {
      dVar8 = 1.0;
    }
    dVar7 = dVar2;
    if (dVar6 <= dVar8) {
      dVar8 = dVar6;
    }
  }
  param_5[3] = 1.0;
  dVar2 = 1.0 / (dVar7 * dVar5 + dVar4 + dVar3);
  *param_5 = (dVar9 * dVar5 + dVar8 + dVar3) * dVar2;
  param_5[1] = ((dVar3 + dVar3) - (dVar8 + dVar8)) * dVar2;
  param_5[5] = ((dVar4 - dVar7 * dVar5) + dVar3) * dVar2;
  param_5[2] = ((dVar8 - dVar9 * dVar5) + dVar3) * dVar2;
  param_5[4] = ((dVar3 + dVar3) - (dVar4 + dVar4)) * dVar2;
  return;
}



// FUNCTION 1453ce6b0 FUN_1453ce6b0 body=139 status=ok
// SIG undefined FUN_1453ce6b0(void)

void FUN_1453ce6b0(uint param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = tan(param_2 * 3.141592653589793);
  param_3[2] = 0.0;
  param_3[5] = 0.0;
  param_3[3] = 1.0;
  dVar2 = 1.0 / (dVar1 + 1.0);
  *param_3 = dVar2;
  param_3[1] = -dVar2;
  param_3[4] = (dVar1 - 1.0) * dVar2;
  return;
}



// FUNCTION 1453ce740 FUN_1453ce740 body=194 status=ok
// SIG undefined FUN_1453ce740(void)

void FUN_1453ce740(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = tan(param_2 * 3.141592653589793);
  dVar3 = dVar1 * dVar1;
  param_4[3] = 1.0;
  dVar2 = 1.0 / (dVar1 * param_3 + 1.0 + dVar3);
  *param_4 = dVar2;
  param_4[2] = dVar2;
  param_4[5] = ((1.0 - dVar1 * param_3) + dVar3) * dVar2;
  param_4[1] = dVar2 * -2.0;
  param_4[4] = ((dVar3 + dVar3) - 2.0) * dVar2;
  return;
}



// FUNCTION 1453ce810 FUN_1453ce810 body=134 status=ok
// SIG undefined FUN_1453ce810(void)

void FUN_1453ce810(uint param_1,double param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar3 = tan(param_2 * 3.141592653589793);
  *(undefined8 *)param_3[1] = 0;
  *(undefined8 *)(param_3[2] + 8) = 0;
  *(undefined8 *)(param_3[1] + 8) = 0x3ff0000000000000;
  dVar4 = 1.0 / (dVar3 + 1.0);
  dVar2 = dVar4 * dVar3;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_3 = auVar1;
  *(double *)param_3[2] = (dVar3 - 1.0) * dVar4;
  return;
}



// FUNCTION 1453ce8a0 FUN_1453ce8a0 body=200 status=ok
// SIG undefined FUN_1453ce8a0(void)

void FUN_1453ce8a0(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar2 = tan(param_2 * 3.141592653589793);
  dVar1 = dVar2 * dVar2;
  param_4[3] = 1.0;
  dVar3 = dVar2 * param_3 + 1.0 + dVar1;
  param_4[4] = ((dVar1 + dVar1) - 2.0) / dVar3;
  param_4[5] = ((1.0 - dVar2 * param_3) + dVar1) / dVar3;
  *param_4 = dVar1 / dVar3;
  param_4[1] = (dVar1 + dVar1) / dVar3;
  param_4[2] = dVar1 / dVar3;
  return;
}



// FUNCTION 1453ce970 FUN_1453ce970 body=326 status=ok
// SIG undefined FUN_1453ce970(void)

void FUN_1453ce970(uint param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  param_2 = (1.0 / (double)param_1) * param_2;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar1 = tan(param_2 * 3.141592653589793);
  param_3 = (1.0 / (double)param_1) * param_3;
  if (param_3 <= 0.00020833333333333335) {
    param_3 = 0.00020833333333333335;
  }
  dVar4 = 1.0 / (dVar1 + 1.0);
  if (0.4583333333333333 <= param_3) {
    param_3 = 0.4583333333333333;
  }
  dVar1 = (dVar1 - 1.0) * dVar4;
  dVar2 = tan(param_3 * 3.141592653589793);
  param_4[3] = 1.0;
  dVar3 = 1.0 / (dVar2 + 1.0);
  dVar5 = (dVar2 - 1.0) * dVar3;
  dVar3 = dVar3 * dVar2;
  dVar2 = dVar3 * dVar4;
  *param_4 = dVar2;
  param_4[4] = dVar5 + dVar1;
  dVar4 = -(dVar3 * dVar4);
  param_4[2] = dVar4;
  param_4[5] = dVar5 * dVar1;
  param_4[1] = dVar2 + dVar4;
  return;
}



// FUNCTION 1453ceac0 FUN_1453ceac0 body=525 status=ok
// SIG undefined FUN_1453ceac0(void)

void FUN_1453ceac0(uint param_1,double param_2,double param_3,double param_4,double *param_5)

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
  
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar5 = tan(param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar2 = (1.0 / param_3) * (dVar5 + 1.0);
  dVar3 = dVar5 * dVar5;
  dVar6 = pow(10.0,param_4 * 0.05);
  param_4 = param_4 * 0.05555555555555555;
  if (dVar6 < 1.0) {
    dVar6 = 1.0 / dVar6;
    dVar7 = dVar6 * dVar2;
    dVar1 = (param_2 * dVar7 + (1.0 - param_2)) * ABS(param_4) + (1.0 - ABS(param_4));
    if (dVar1 <= 1.0) {
      dVar1 = dVar4;
    }
    dVar8 = 1.0;
    dVar9 = dVar2;
    dVar4 = dVar1;
    if (dVar6 <= dVar1) {
      dVar4 = dVar6;
    }
  }
  else {
    dVar9 = dVar6 * dVar2;
    dVar8 = (1.0 - ABS(param_4)) + (param_2 * dVar9 + (1.0 - param_2)) * ABS(param_4);
    if (dVar8 <= 1.0) {
      dVar8 = 1.0;
    }
    dVar7 = dVar2;
    if (dVar6 <= dVar8) {
      dVar8 = dVar6;
    }
  }
  param_5[3] = 1.0;
  dVar2 = 1.0 / (dVar7 * dVar5 + dVar4 + dVar3);
  *param_5 = (dVar9 * dVar5 + dVar8 + dVar3) * dVar2;
  param_5[1] = ((dVar3 + dVar3) - (dVar8 + dVar8)) * dVar2;
  param_5[5] = ((dVar4 - dVar7 * dVar5) + dVar3) * dVar2;
  param_5[2] = ((dVar8 - dVar9 * dVar5) + dVar3) * dVar2;
  param_5[4] = ((dVar3 + dVar3) - (dVar4 + dVar4)) * dVar2;
  return;
}



// FUNCTION 1453cecd0 FUN_1453cecd0 body=142 status=ok
// SIG undefined FUN_1453cecd0(void)

void FUN_1453cecd0(undefined4 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = pow(param_3,0.25);
  FUN_1453cee70(param_1,param_2,0x3feb333333333333,SUB84(dVar1 * -1.6,0),0x8000000000000000,param_4,
                1,0,0x3ff0000000000000,param_5);
  return;
}



// FUNCTION 1453ced60 FUN_1453ced60 body=128 status=ok
// SIG undefined FUN_1453ced60(void)

void FUN_1453ced60(undefined4 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = pow(param_3,0.25);
  FUN_1453cf230(param_1,param_2,0x3feb333333333333,SUB84(dVar1 * -1.6,0),0x8000000000000000,param_4,
                1,0,param_5);
  return;
}



// FUNCTION 1453cede0 FUN_1453cede0 body=144 status=ok
// SIG undefined FUN_1453cede0(void)

float FUN_1453cede0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10) * 4.0;
  fVar1 = fVar2 * fVar2 - fVar4;
  if (fVar1 < 0.0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (double)fVar4;
    auVar3 = sqrtpd(ZEXT416((uint)fVar1),auVar3);
    return 1.0 / (1.0 - (float)(auVar3._0_8_ * 0.5));
  }
  fVar4 = ABS(-fVar2 - SQRT(fVar1));
  fVar2 = ABS(SQRT(fVar1) - fVar2);
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  return 1.0 / (1.0 - fVar4 * 0.5);
}



// FUNCTION 1453cee70 FUN_1453cee70 body=956 status=ok
// SIG undefined FUN_1453cee70(void)

void FUN_1453cee70(uint param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,char param_7,char param_8,double param_9,double *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar10;
  double dVar8;
  undefined4 uVar11;
  double dVar9;
  double dVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double local_res10;
  
  dVar12 = param_6;
  uVar16 = SUB84(param_5,0);
  uVar17 = (undefined4)((ulonglong)param_5 >> 0x20);
  dVar6 = pow(10.0,param_6 * 0.05);
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  dVar7 = tan(param_2 * 3.141592653589793);
  uVar5 = SUB84(dVar7,0);
  uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = tan(param_2 * 3.141592653589793 * param_9);
  dVar3 = 1.0;
  uVar11 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (param_6 <= 0.0) {
    param_6 = 1.0;
    dVar2 = dVar8 * dVar8;
    dVar4 = (1.0 / SQRT(dVar6)) * (1.0 / SQRT(dVar6));
    dVar1 = dVar7 * dVar7;
    uVar14 = SUB84(dVar8,0);
    uVar15 = uVar11;
  }
  else {
    dVar1 = dVar8 * dVar8;
    dVar2 = dVar7 * dVar7;
    uVar14 = uVar5;
    uVar15 = uVar10;
    uVar5 = SUB84(dVar8,0);
    uVar10 = uVar11;
    dVar4 = dVar3;
    param_6 = dVar6;
  }
  if (param_8 != '\0') {
    dVar12 = dVar12 * 0.8333333333333333;
  }
  dVar6 = pow(10.0,dVar12 * 0.05);
  dVar7 = 1.0;
  auVar13._0_8_ = ABS(dVar12 * 0.05555555555555555);
  auVar13._8_8_ = 0;
  auVar13 = sqrtpd(auVar13,auVar13);
  if (dVar12 <= 0.0) {
    dVar7 = SQRT(dVar6);
    dVar6 = 1.0;
    dVar7 = 1.0 / dVar7;
    param_5 = 1.0;
    dVar3 = dVar7 * dVar7;
    local_res10 = param_4;
  }
  else {
    local_res10 = param_5;
    param_5 = SQRT(dVar6);
    uVar16 = SUB84(param_4,0);
    uVar17 = (int)((ulonglong)param_4 >> 0x20);
  }
  dVar6 = (param_6 - param_6 * param_3) + dVar6 * param_3;
  dVar9 = dVar6 * dVar1;
  dVar12 = (((double)CONCAT44(uVar17,uVar16) * 0.5 * auVar13._0_8_ + 1.4142135623730951) * param_3 *
            param_5 + (1.0 - param_3)) * (double)CONCAT44(uVar10,uVar5);
  dVar6 = (dVar1 + dVar1) * dVar6 - (param_3 + param_3);
  param_10[1] = dVar6;
  dVar1 = (param_3 - dVar12) + dVar9;
  dVar9 = dVar12 + param_3 + dVar9;
  *param_10 = dVar9;
  param_10[2] = dVar1;
  dVar12 = (dVar4 - dVar4 * param_3) + dVar3 * param_3;
  dVar8 = dVar12 * dVar2;
  dVar7 = ((local_res10 * 0.5 * auVar13._0_8_ + 1.4142135623730951) * param_3 * dVar7 +
          (1.0 - param_3)) * (double)CONCAT44(uVar15,uVar14);
  dVar3 = (dVar2 + dVar2) * dVar12 - (param_3 + param_3);
  param_10[4] = dVar3;
  dVar12 = dVar7 + param_3 + dVar8;
  dVar8 = (param_3 - dVar7) + dVar8;
  param_10[3] = dVar12;
  param_10[5] = dVar8;
  if (param_7 != '\0') {
    dVar12 = 1.0 / dVar12;
    param_10[3] = 1.0;
    *param_10 = dVar9 * dVar12;
    param_10[1] = dVar6 * dVar12;
    param_10[2] = dVar1 * dVar12;
    param_10[4] = dVar3 * dVar12;
    param_10[5] = dVar8 * dVar12;
  }
  return;
}



// FUNCTION 1453cf230 FUN_1453cf230 body=942 status=ok
// SIG undefined FUN_1453cf230(void)

void FUN_1453cf230(uint param_1,double param_2,double param_3,undefined8 param_4,double param_5,
                  double param_6,char param_7,char param_8,double *param_9)

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
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar9 = param_5;
  uVar12 = SUB84(param_5,0);
  uVar13 = (undefined4)((ulonglong)param_5 >> 0x20);
  param_2 = param_2 / (double)param_1;
  if (param_2 <= 0.00020833333333333335) {
    param_2 = 0.00020833333333333335;
  }
  if (0.4583333333333333 <= param_2) {
    param_2 = 0.4583333333333333;
  }
  auVar11 = in_XMM3;
  dVar6 = pow(10.0,param_6 * 0.05);
  dVar7 = tan(1.5707963267948966 - param_2 * 3.141592653589793);
  dVar4 = 1.0;
  dVar8 = dVar7 * dVar7;
  dVar2 = dVar4;
  param_5 = dVar6;
  if (param_6 <= 0.0) {
    param_5 = 1.0;
    dVar2 = (1.0 / SQRT(dVar6)) * (1.0 / SQRT(dVar6));
  }
  if (param_8 != '\0') {
    param_6 = param_6 * 0.8333333333333333;
  }
  dVar6 = pow(10.0,param_6 * 0.05);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = ABS(param_6 * 0.05555555555555555);
  auVar11 = sqrtpd(auVar11,auVar1);
  if (param_6 <= 0.0) {
    dVar9 = SQRT(dVar6);
    param_6 = in_XMM3._0_8_;
    dVar6 = 1.0;
    dVar9 = 1.0 / dVar9;
    dVar3 = dVar9 * dVar9;
    dVar10 = dVar4;
  }
  else {
    param_6 = dVar9;
    uVar12 = in_XMM3._0_4_;
    uVar13 = in_XMM3._4_4_;
    dVar10 = SQRT(dVar6);
    dVar9 = dVar4;
    dVar3 = dVar4;
  }
  param_3 = (1.0 - param_2) * param_3;
  if (param_3 <= 0.015) {
    param_3 = 0.015;
  }
  dVar4 = (param_5 - param_3 * param_5) + param_3 * dVar6;
  dVar6 = ((auVar11._0_8_ * (double)CONCAT44(uVar13,uVar12) * 0.5 + 1.4142135623730951) * param_3 *
           dVar10 + (1.0 - param_3)) * dVar7;
  dVar10 = dVar4 * dVar8;
  dVar4 = (param_3 + param_3) - (dVar8 + dVar8) * dVar4;
  dVar5 = (param_3 - dVar6) + dVar10;
  dVar10 = dVar6 + param_3 + dVar10;
  param_9[1] = dVar4;
  *param_9 = dVar10;
  dVar2 = (dVar2 - param_3 * dVar2) + param_3 * dVar3;
  param_9[2] = dVar5;
  dVar6 = dVar2 * dVar8;
  dVar2 = (param_3 + param_3) - (dVar8 + dVar8) * dVar2;
  param_9[4] = dVar2;
  dVar7 = ((auVar11._0_8_ * param_6 * 0.5 + 1.4142135623730951) * param_3 * dVar9 + (1.0 - param_3))
          * dVar7;
  dVar9 = dVar7 + param_3 + dVar6;
  dVar6 = (param_3 - dVar7) + dVar6;
  param_9[3] = dVar9;
  param_9[5] = dVar6;
  if (param_7 != '\0') {
    dVar9 = 1.0 / dVar9;
    param_9[3] = 1.0;
    *param_9 = dVar10 * dVar9;
    param_9[1] = dVar4 * dVar9;
    param_9[2] = dVar5 * dVar9;
    param_9[4] = dVar2 * dVar9;
    param_9[5] = dVar6 * dVar9;
  }
  return;
}



// FUNCTION 1453cf5e0 FUN_1453cf5e0 body=27 status=ok
// SIG undefined FUN_1453cf5e0(void)

void FUN_1453cf5e0(uint param_1,double param_2)

{
  FUN_145579b60((double)param_1 * param_2 * 0.001);
  return;
}



// FUNCTION 1453cf600 FUN_1453cf600 body=27 status=ok
// SIG undefined FUN_1453cf600(void)

void FUN_1453cf600(uint param_1,double param_2)

{
  FUN_145579b60((double)param_1 * param_2 * 0.001);
  return;
}



// FUNCTION 1453cf620 FUN_1453cf620 body=27 status=ok
// SIG undefined FUN_1453cf620(void)

int FUN_1453cf620(uint param_1,double param_2)

{
  return (int)(param_2 * 0.001 * (double)param_1);
}



// FUNCTION 1453cf640 thunk_FUN_145579b90 body=5 status=ok
// SIG undefined thunk_FUN_145579b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_145579b90(ulonglong param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  uint uVar4;
  ulonglong uVar5;
  undefined4 in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  double dVar32;
  uint uVar35;
  int iVar36;
  uint uVar37;
  undefined1 auVar33 [16];
  double dVar38;
  undefined1 auVar34 [16];
  undefined4 uVar39;
  ulonglong auStack_180 [8];
  undefined4 auStack_140 [16];
  double adStack_100 [29];
  
  auStack_140[0] = SUB84(param_2,0);
  uVar4 = (uint)(param_1 >> 0x20);
  uVar29 = (uVar4 & 0xffe00) + 0x200 >> 10;
  uVar35 = (in_XMM0_Dd & 0xffe00) + 0x200 >> 10;
  iVar30 = uVar29 * 0x10;
  iVar36 = uVar35 << 4;
  iVar14 = uVar29 * 8;
  auVar16._0_8_ = param_1 & 0xfffffffffffff;
  auVar16._8_4_ = in_XMM0_Dc;
  auVar16._12_4_ = in_XMM0_Dd & 0xfffff;
  uVar29 = ((int)(uVar4 + 0xc0180200) >> 0x14) + 0x41380000;
  auVar16 = auVar16 | _DAT_14d2c8600;
  dVar28 = *(double *)(&DAT_14d2c1a00 + iVar14);
  dVar24 = auVar16._0_8_;
  auVar33._0_8_ = (double)((ulonglong)dVar24 & 0xfffffffff8000000);
  auVar33._8_4_ = auVar16._8_4_ & 0xf8000000;
  auVar33._12_4_ = auVar16._12_4_;
  dVar15 = *(double *)(&DAT_14d2c1a00 + (int)(uVar35 << 3));
  dVar18 = auVar16._8_8_ * dVar15;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = uVar29;
  auVar6._0_12_ = auVar2 << 0x20;
  auVar6._12_4_ = ((int)(in_XMM0_Dd + 0xc0180200) >> 0x14) + 0x41380000;
  dVar32 = (auVar33._0_8_ * dVar28 - dVar24 * dVar28) + dVar28 * (dVar24 - auVar33._0_8_);
  dVar38 = (auVar33._8_8_ * dVar15 - dVar18) + dVar15 * (auVar16._8_8_ - auVar33._8_8_);
  dVar19 = *(double *)(&DAT_14d2c3a40 + iVar30) + ((double)((ulonglong)uVar29 << 0x20) - 1572864.0);
  dVar21 = *(double *)(&DAT_14d2c3a40 + iVar36) + (auVar6._8_8_ - 1572864.0);
  dVar22 = dVar24 * dVar28 + -1.442694902420044;
  dVar18 = dVar18 + -1.442694902420044;
  dVar28 = dVar22 + dVar19;
  dVar15 = dVar18 + dVar21;
  dVar24 = dVar32 + dVar28;
  dVar1 = dVar38 + dVar15;
  dVar23 = dVar22 + dVar32;
  dVar27 = dVar18 + dVar38;
  dVar19 = *(double *)(&UNK_14d2c3a48 + iVar30) +
           (dVar19 - dVar28) + dVar22 + (dVar28 - dVar24) + dVar32 +
           dVar23 * (((((dVar23 * -0.026667131649815552 + 0.04616704187202374) * dVar23 +
                       -0.08325619496072671) * dVar23 + 0.16015105075297303) * dVar23 +
                     -0.3465736568077919) * dVar23 + 9.597935033233511e-08);
  dVar15 = *(double *)(&UNK_14d2c3a48 + iVar36) +
           (dVar21 - dVar15) + dVar18 + (dVar15 - dVar1) + dVar38 +
           dVar27 * (((((dVar27 * -0.026667131649815552 + 0.04616704187202374) * dVar27 +
                       -0.08325619496072671) * dVar27 + 0.16015105075297303) * dVar27 +
                     -0.3465736568077919) * dVar27 + 9.597935033233511e-08);
  auVar34._8_4_ = SUB84(dVar1,0);
  auVar34._0_8_ = dVar24;
  auVar34._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar23 = dVar24 + dVar19;
  dVar32 = auVar34._8_8_ + dVar15;
  auVar25._8_4_ = SUB84(dVar32,0);
  auVar25._0_8_ = dVar23;
  uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
  auVar25._12_4_ = uVar39;
  dVar27 = dVar23 - (double)((ulonglong)dVar23 & 0xfffffffff8000000);
  dVar38 = dVar32 - (double)((ulonglong)dVar32 & 0xfffffffff8000000);
  auVar13._0_8_ = (double)((ulonglong)param_2 & 0xfffffffff8000000);
  auVar13._8_4_ = in_XMM1_Dc & 0xf8000000;
  auVar13._12_4_ = in_XMM1_Dd;
  auVar20._8_4_ = in_XMM1_Dc;
  auVar20._0_8_ = param_2;
  auVar20._12_4_ = in_XMM1_Dd;
  dVar28 = auVar13._8_8_;
  dVar18 = auVar20._8_8_ - dVar28;
  auVar26._0_8_ = (double)((ulonglong)dVar23 & 0xfffffffff8000000);
  auVar26._8_4_ = SUB84(dVar32,0) & 0xf8000000;
  auVar26._12_4_ = uVar39;
  auVar11._0_4_ = -(uint)((int)(uVar4 + 0x100000) < 0x200000);
  auVar11._4_4_ = -(uint)((int)(in_XMM0_Dd + 0x100000) < 0x200000);
  auVar11._8_4_ = -(uint)((longlong)param_1 < 0);
  auVar11._12_4_ = -(uint)((int)in_XMM0_Dd < 0);
  dVar21 = auVar26._0_8_ * auVar13._0_8_;
  dVar22 = auVar26._8_8_ * dVar28;
  uVar31 = SUB84(dVar21 + 52776558133248.0,0);
  uVar37 = SUB84(dVar22 + 52776558133248.0,0);
  uVar29 = (uint)((ulonglong)dVar21 >> 0x20) & 0x7fffffff;
  uVar35 = (uint)((ulonglong)dVar22 >> 0x20) & 0x7fffffff;
  uVar4 = (uint)((ulonglong)param_2 >> 0x20) & 0x7fffffff;
  dVar24 = (dVar21 - ((dVar21 + 52776558133248.0) - 52776558133248.0)) +
           dVar27 * (param_2 - auVar13._0_8_) + auVar13._0_8_ * dVar27 +
           (double)((ulonglong)dVar23 & 0xfffffffff8000000) * (param_2 - auVar13._0_8_) +
           (dVar19 - (dVar23 - dVar24)) * param_2;
  dVar28 = (dVar22 - ((dVar22 + 52776558133248.0) - 52776558133248.0)) +
           dVar38 * dVar18 + dVar28 * dVar38 +
           (double)((ulonglong)dVar32 & 0xfffffffff8000000) * dVar18 +
           (dVar15 - (auVar25._8_8_ - dVar1)) * (double)CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  auVar8._0_4_ = -(uint)(0x7f800000 < uVar4);
  auVar8._4_4_ = -(uint)(0x7f800000 < (in_XMM1_Dd & 0x7fffffff));
  auVar8._8_8_ = 0;
  auVar9._0_4_ = -(uint)(uVar4 == 0x7f800000);
  auVar9._4_4_ = -(uint)((in_XMM1_Dd & 0x7fffffff) == 0x7f800000);
  auVar9._8_4_ = 0xffffffff;
  auVar9._12_4_ = 0xffffffff;
  auVar17._0_4_ = -(uint)(uVar29 == 0x408f3fff);
  auVar17._4_4_ = -(uint)(uVar35 == 0x408f3fff);
  auVar17._8_4_ = 0xffffffff;
  auVar17._12_4_ = 0xffffffff;
  auVar10._0_4_ = -(uint)(0x408f3fff < uVar29);
  auVar10._4_4_ = -(uint)(0x408f3fff < uVar35);
  auVar10._8_8_ = 0;
  auVar12._8_4_ = SUB84(dVar28,0);
  auVar12._0_8_ = dVar24;
  auVar12._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  uVar4 = movmskps(iVar14,auVar11 | auVar8 | auVar9 | auVar10 | auVar17);
  uVar29 = uVar31 * 0x2000 + 0x3ff00000 & 0xfff00000;
  auVar3._4_8_ = 0;
  auVar3._0_4_ = uVar29;
  auVar7._0_12_ = auVar3 << 0x20;
  auVar7._12_4_ = uVar37 * 0x2000 + 0x3ff00000 & 0xfff00000;
  adStack_100[0] =
       (double)((ulonglong)uVar29 << 0x20) *
       *(double *)(&DAT_14d2c7a80 + (int)((uVar31 & 0x7f) * 0x10));
  adStack_100[1] = auVar7._8_8_ * *(double *)(&DAT_14d2c7a80 + (int)((uVar37 & 0x7f) << 4));
  adStack_100[0] =
       adStack_100[0] +
       dVar24 * adStack_100[0] *
       (dVar24 * (((dVar24 * 0.0013333558146428443 + 0.009618129107628477) * dVar24 +
                  0.055504108664821576) * dVar24 + 0.2402265069591007) + 0.6931471805599453);
  adStack_100[1] =
       adStack_100[1] +
       auVar12._8_8_ * adStack_100[1] *
       (dVar28 * (((dVar28 * 0.0013333558146428443 + 0.009618129107628477) * dVar28 +
                  0.055504108664821576) * dVar28 + 0.2402265069591007) + 0.6931471805599453);
  if ((uVar4 & 3) != 0) {
    uVar5 = 0;
    auStack_180[0] = param_1;
    do {
      if (((uVar4 & 3) >> ((uint)uVar5 & 0x1f) & 1) != 0) {
        FUN_1455fd340(auStack_180 + uVar5,auStack_140 + uVar5 * 2,adStack_100 + uVar5);
      }
      uVar29 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar29;
    } while ((int)uVar29 < 2);
  }
  return;
}



// FUNCTION 1453cf650 FUN_1453cf650 body=40968 status=ok
// SIG undefined FUN_1453cf650(void)

void FUN_1453cf650(undefined4 param_1,undefined4 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  double dVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    FUN_1453ce6b0(param_1,0x404c000000000000,param_4);
    FUN_1453cecd0(param_1,param_3 * 237.0,0x3fe8000000000000,0x4011333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 336.0,0x401b333333333333,0x4010666666666666,param_6);
    FUN_1453ceac0(param_1,param_3 * 595.0,0x402999999999999a,0x4021333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 868.0,0x402299999999999a,0xc01d333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 6000.0;
    break;
  case 1:
    FUN_1453ce6b0(param_1,0x4049000000000000,param_4);
    FUN_1453cecd0(param_1,0x4095180000000000,0x3fc0000000000000,0xc02f000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 990.0,&DAT_4030000000000000,0xc008000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1100.0,&DAT_4030000000000000,0x4014000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2500.0,&DAT_4030000000000000,0x3ff8000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 3000.0;
    uVar4 = 0x3fe8000000000000;
    break;
  case 2:
    FUN_1453ce6b0(param_1,0x4054000000000000,param_4);
    FUN_1453cecd0(param_1,0x4079000000000000,0x3fe5000000000000,0xc01a000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 625.0,0x4023666666666666,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1640.0,0x4025000000000000,0x4018cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 3590.0,0x401d99999999999a,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 1980.0;
    break;
  case 3:
    FUN_1453ce740(param_1,0x4052a66666666666,0x3ff6666666666666);
    FUN_1453cecd0(param_1,0x4063d9999999999a,0x3fe6000000000000,0x401d333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 224.9,0x4022666666666666,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 692.0,0x4024000000000000,0x4024000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1680.0,0x400599999999999a,0x4020cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 6180.0;
    break;
  case 4:
    FUN_1453ce740(param_1,param_3 * 169.0,0x3fe051eb851eb852);
    FUN_1453ceac0(param_1,0x4054000000000000,&DAT_4030000000000000,0xc029333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 250.0,0x4014000000000000,0x4018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x4014000000000000,0x4014000000000000,param_7);
    FUN_1453ceac0(param_1,0x408c200000000000,0x4010000000000000,0xc014000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 9710.0;
    uVar4 = 0x3fe3851eb851eb85;
    break;
  case 5:
    FUN_1453ce740(param_1,0x4058c00000000000,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 290.0,0x4014000000000000,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 780.0,0x4028000000000000,0xc008000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 999.0,0x4010000000000000,0x4012000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1650.0,&DAT_4030000000000000,0x402199999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fe3333333333333;
    param_3 = 8760.0;
    break;
  case 6:
    FUN_1453ce740(param_1,0x405a800000000000,0x3ff6666666666666);
    FUN_1453cecd0(param_1,0x4047c00000000000,0x3ff0000000000000,0xc02b333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 212.9,0x401999999999999a,0x4008000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 439.4,0x4016cccccccccccd,0x4011333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 1810.0,0x4027333333333333,0x4021333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fe199999999999a;
    param_3 = 8900.0;
    break;
  case 7:
    FUN_1453ce740(param_1,param_3 * 124.1,0x3fceb851eb851eb8);
    FUN_1453ceac0(param_1,param_3 * 192.3,0x401c000000000000,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,0x408479999999999a,0x401999999999999a,0x4022666666666666,param_6);
    FUN_1453ceac0(param_1,0x409fe00000000000,0x4016cccccccccccd,0x402199999999999a,param_7);
    FUN_1453ceac0(param_1,0x40ad9c0000000000,0x4027333333333333,0x4021333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 8800.0;
    uVar4 = 0x3fe3333333333333;
    break;
  case 8:
    FUN_1453ce740(param_1,0x4049000000000000,0x3fd0000000000000);
    FUN_1453ceac0(param_1,param_3 * 108.0,&DAT_4030000000000000,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 321.0,0x402e000000000000,0x4028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff4cccccccccccd,0x401b99999999999a,param_7);
    FUN_1453ceac0(param_1,param_3 * 4850.0,0x3ff999999999999a,0x4021333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40a9780000000000,param_10);
    return;
  case 9:
    FUN_1453ce6b0(param_1,param_3 * 34.8,param_4);
    FUN_1453ceac0(param_1,param_3 * 120.6,0x402099999999999a,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 265.2,0x402a666666666666,0xc02fcccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 503.9,&DAT_4030000000000000,0xc0304ccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 2190.0,0x4023000000000000,0xc02499999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 4670.0;
    goto LAB_1453d0080;
  case 10:
    FUN_1453ce740(param_1,0x40515147ae147ae1,0x3fd0000000000000);
    FUN_1453ceac0(param_1,param_3 * 81.0,&DAT_4030000000000000,0x4030b5c28f5c28f6,param_5);
    FUN_1453ceac0(param_1,param_3 * 243.0,&DAT_4030000000000000,0x4029b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 405.0,&DAT_4030000000000000,0x402947ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 567.0,&DAT_4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 729.0,&DAT_4030000000000000,0x4022000000000000,param_9);
    uVar4 = 0x3fe28f5c28f5c28f;
    param_3 = 1366.19;
    break;
  case 0xb:
    FUN_1453ce740(param_1,0x4046000000000000,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 80.4,0x4003333333333333,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 224.9,0x402a000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 353.1,&DAT_4030000000000000,0x4026cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 924.3,&DAT_4030000000000000,0xc02d99999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40b20c0000000000,param_10);
    return;
  case 0xc:
    FUN_1453ce740(param_1,param_3 * 26.4,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 484.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 925.0,&DAT_4030000000000000,0x402c000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1270.0,0x401ecccccccccccd,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1700.0,&DAT_4030000000000000,0x402c000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 7130.0;
    break;
  case 0xd:
    FUN_1453ce740(param_1,param_3 * 24.4,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 161.2,0x4000000000000000,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 633.8,0x3ffe666666666666,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 803.1,&DAT_4030000000000000,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1340.0,&DAT_4030000000000000,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff199999999999a;
    param_3 = 6890.0;
    break;
  case 0xe:
    FUN_1453ce740(param_1,param_3 * 24.4,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 156.8,0x4015333333333333,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 587.1,0x4020666666666666,0xc0304ccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 825.4,&DAT_4030000000000000,0x402ecccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 1040.0,&DAT_4030000000000000,0xc02d99999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 7380.0;
    break;
  case 0xf:
    FUN_1453ce740(param_1,param_3 * 22.5,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 170.0,0x4000000000000000,0x4026cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 498.1,0x4000000000000000,0xc018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 921.1,&DAT_4030000000000000,0x4023333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 1140.0,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 4260.0;
    break;
  case 0x10:
    FUN_1453ce740(param_1,param_3 * 80.0,0x3fd999999999999a);
    FUN_1453ceac0(param_1,param_3 * 120.0,0x4000000000000000,0x4004000000000000,param_5);
    FUN_1453ceac0(param_1,0x4076800000000000,0x4008000000000000,0xc00c000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 480.0,0x4014000000000000,0x3ff8000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1500.0,0x3ff0000000000000,0x3ff8000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 4000.0;
    uVar4 = 0x3fd999999999999a;
    break;
  case 0x11:
    FUN_1453ce740(param_1,param_3 * 80.0,0x3fe6666666666666);
    FUN_1453ceac0(param_1,param_3 * 120.0,0x4020000000000000,0,param_5);
    FUN_1453ceac0(param_1,param_3 * 240.0,0x4020000000000000,0,param_6);
    FUN_1453ceac0(param_1,param_3 * 360.0,0x4020000000000000,0,param_7);
    FUN_1453ceac0(param_1,param_3 * 480.0,0x4020000000000000,0,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 8000.0;
    uVar4 = 0x3fe6666666666666;
    break;
  case 0x12:
    FUN_1453ce740(param_1,0x4046800000000000,0x3fe999999999999a);
    FUN_1453ceac0(param_1,0x4056800000000000,0x3ff0000000000000,0xc032800000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 254.0,0x401c000000000000,0x401799999999999a,param_6);
    FUN_1453ceac0(param_1,param_3 * 760.0,0x4010cccccccccccd,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2190.0,0x401f333333333333,0x4031cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40ae000000000000,param_10);
    return;
  case 0x13:
    FUN_1453ce6b0(param_1,0x404bf33333333333,param_4);
    FUN_1453cecd0(param_1,0x4079000000000000,0x3f9999999999999a,0x4023333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 511.9,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 648.5,&DAT_4030000000000000,0x4026cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 2070.0,0x4007333333333333,0xc02499999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40add80000000000,param_10);
    return;
  case 0x14:
    FUN_1453ce6b0(param_1,param_3 * 20.0,param_4);
    FUN_1453ceac0(param_1,param_3 * 163.2,0x3ff8000000000000,0x402f333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 348.8,0x4023cccccccccccd,0xc030800000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 648.5,&DAT_4030000000000000,0x4026cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 1580.0,0x401999999999999a,0xc02499999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40add80000000000,param_10);
    return;
  case 0x15:
    FUN_1453ce740(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 43.43,0x40035c28f5c28f5c,0x4031ca3d70a3d70a,param_5);
    FUN_1453ceac0(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0,param_6);
    FUN_1453ceac0(param_1,param_3 * 2858.28,0x40227ae147ae147b,0,param_7);
    FUN_1453ceac0(param_1,param_3 * 6148.1,&DAT_4030000000000000,0,param_8);
    FUN_1453ced60(param_1,0x407bb40000000000,0x3ff0000000000000,0xc02a051eb851eb85,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 9521.35;
    break;
  case 0x16:
    FUN_1453ce740(param_1,param_3 * 63.76,0x3fe6b851eb851eb8);
    FUN_1453ceac0(param_1,0x406ec0a3d70a3d71,0x4012a3d70a3d70a4,0xc02edc28f5c28f5c,param_5);
    FUN_1453ceac0(param_1,0x4087295c28f5c28f,0x4028000000000000,0xc01128f5c28f5c29,param_6);
    FUN_1453ceac0(param_1,param_3 * 2539.58,0x401eeb851eb851ec,0x4029b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 4225.42,0x40260a3d70a3d70a,0x4028dc28f5c28f5c,param_8);
    FUN_1453ceac0(param_1,param_3 * 9729.61,0x4000000000000000,0,param_9);
    param_3 = param_3 * 7141.38;
    uVar4 = 0x3fe851eb851eb852;
    break;
  case 0x17:
    FUN_1453ce6b0(param_1,0x407b000000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 424.0,0x4010666666666666,0x4029cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 1310.0,0x4027000000000000,0x4028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 2920.0,0x402899999999999a,0x40304ccccccccccd,param_7);
    FUN_1453ced60(param_1,0x40c01d0000000000,0x3fb0000000000000,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40b7700000000000,param_10);
    return;
  case 0x18:
    FUN_1453ce740(param_1,0x404b800000000000,0x3fe0000000000000);
    FUN_1453cecd0(param_1,0x407a800000000000,0x3fd0666666666666,0xc02ccccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 474.0,0x401399999999999a,0x402d333333333333,param_6);
    FUN_1453ceac0(param_1,param_3 * 1360.0,0x4027666666666666,0x402d99999999999a,param_7);
    FUN_1453ceac0(param_1,param_3 * 2980.0,0x402e000000000000,0x4025cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fd0000000000000;
    param_3 = 2690.0;
    break;
  case 0x19:
    FUN_1453ce6b0(param_1,0x4074b00000000000,param_4);
    FUN_1453ceac0(param_1,0x405bf33333333333,0x400999999999999a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x400d99999999999a,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1750.0,&DAT_4030000000000000,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3200.0,&DAT_4030000000000000,0x4027333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40b6080000000000,param_10);
    return;
  case 0x1a:
    FUN_1453ce6b0(param_1,0x4044000000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 475.0,0x400ccccccccccccd,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1070.0,&DAT_4030000000000000,0x4018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1430.0,&DAT_4030000000000000,0x4020cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 5710.0,&DAT_4030000000000000,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fd0a3d70a3d70a4;
    param_3 = 3840.0;
    break;
  case 0x1b:
    FUN_1453ce740(param_1,param_3 * 81.74,0x3fd7ae147ae147ae);
    FUN_1453ceac0(param_1,param_3 * 285.39,0x400b851eb851eb85,0x4030b5c28f5c28f6,param_5);
    FUN_1453ceac0(param_1,0x407d5b3333333333,0x3ff23d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,0x4083aa8f5c28f5c3,0x4027051eb851eb85,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,0x4079000000000000,&DAT_4030000000000000,0x402947ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 1305.08,0x401c51eb851eb852,0x402bdc28f5c28f5c,param_9);
    param_3 = param_3 * 3738.69;
    uVar4 = 0x3fdae147ae147ae1;
    break;
  case 0x1c:
    FUN_1453ce740(param_1,0x40532ccccccccccd,0x3fd3333333333333);
    FUN_1453ceac0(param_1,param_3 * 200.9,0x400c000000000000,0x4020cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x400f333333333333,0xc012cccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 610.5,0x4024cccccccccccd,0x4024333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 1620.0,0x4004000000000000,0x401399999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fe999999999999a;
    param_3 = 5230.0;
    break;
  case 0x1d:
    FUN_1453ce6b0(param_1,0x405c79999999999a,param_4);
    FUN_1453ceac0(param_1,param_3 * 163.9,0x4016000000000000,0xc01c000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 298.0,0x4028000000000000,0xc02d333333333333,param_6);
    FUN_1453ceac0(param_1,param_3 * 554.7,0x4024000000000000,0x402a333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 861.8,0x4022000000000000,0x401ecccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3fe0cccccccccccd;
    param_3 = 3710.0;
    break;
  case 0x1e:
    FUN_1453ce740(param_1,param_3 * 307.56,0x3fe999999999999a);
    FUN_1453ce740(param_1,0x406388a3d70a3d71,0x3ff69fbe76c8b439,param_5);
    FUN_1453ceac0(param_1,param_3 * 346.32,0x401c70a3d70a3d71,0x402cb851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 626.35,0x4023cccccccccccd,0x402423d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 3831.73,0x400428f5c28f5c29,0x4024947ae147ae14,param_8);
    FUN_1453ceac0(param_1,param_3 * 2015.77,0x4011333333333333,0xc025000000000000,param_9);
    FUN_1453ce810(param_1,0x40a5e851eb851eb8,param_10);
    return;
  case 0x1f:
    FUN_1453ce6b0(param_1,0x4060000000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 169.0,0x400a666666666666,0xc014666666666666,param_5);
    FUN_1453ceac0(param_1,param_3 * 229.0,0x4014000000000000,0x402e333333333333,param_6);
    FUN_1453ceac0(param_1,param_3 * 1860.0,0x4012cccccccccccd,0xc018000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1320.0,&DAT_4030000000000000,0x4023333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 6210.0;
    break;
  case 0x20:
    FUN_1453ce6b0(param_1,0x4076633333333333,param_4);
    FUN_1453ceac0(param_1,param_3 * 258.3,0x402f666666666666,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 290.0,0x4028000000000000,0x4029cccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 439.4,&DAT_4030000000000000,0xc02d333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 3030.0,0x402f99999999999a,0xc022666666666666,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40b0540000000000,param_10);
    return;
  case 0x21:
    FUN_1453ce740(param_1,0x4047800000000000,0x3ff6666666666666);
    FUN_1453cecd0(param_1,0x407181999999999a,0x3f9999999999999a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 240.0,0x4018000000000000,0xc018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 946.7,&DAT_4030000000000000,0x4030666666666666,param_7);
    FUN_1453ceac0(param_1,param_3 * 3000.0,0x401ccccccccccccd,0x4030b33333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40a8740000000000,param_10);
    return;
  case 0x22:
    FUN_1453ce740(param_1,0x4063866666666666,0x3fd0000000000000);
    FUN_1453ceac0(param_1,param_3 * 308.8,0x4020cccccccccccd,0x401c000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 617.9,0x401a000000000000,0x402ccccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 896.2,&DAT_4030000000000000,0x4025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2730.0,0x4008000000000000,0x4020333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff7333333333333;
    param_3 = 10000.0;
    break;
  case 0x23:
    FUN_1453ce6b0(param_1,0x40728b3333333333,param_4);
    FUN_1453ceac0(param_1,param_3 * 440.0,0x4023333333333333,0x402b000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1910.0,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 3530.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,0x40caf40000000000,0x4028000000000000,0xc028000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 2630.0;
    uVar4 = 0x3fe4cccccccccccd;
    break;
  case 0x24:
    FUN_1453ce6b0(param_1,0x40728b3333333333,param_4);
    FUN_1453ceac0(param_1,param_3 * 922.0,0x4023333333333333,0xc023333333333333,param_5);
    FUN_1453ceac0(param_1,0x4099500000000000,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 3730.0,0x402699999999999a,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,0x40b7c00000000000,0x4028000000000000,0xc024cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = param_3 * 1870.0;
    uVar4 = 0x3fe4cccccccccccd;
    break;
  case 0x25:
    FUN_1453ce6b0(param_1,0x405d99999999999a,param_4);
    FUN_1453ceac0(param_1,param_3 * 116.5,0x4018000000000000,0xc033000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 218.9,&DAT_4030000000000000,0xc022000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 290.0,0x402f666666666666,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2135.0,0x4015333333333333,0x402fcccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff999999999999a;
    param_3 = 6020.0;
    break;
  case 0x26:
    FUN_1453ce740(param_1,0x40a4b1ae147ae148,0x3fe6147ae147ae14);
    FUN_1453ceac0(param_1,param_3 * 861.92,0x4028000000000000,0x4012000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 2188.54,&DAT_4030000000000000,0x400d1eb851eb851f,param_6);
    FUN_1453ceac0(param_1,param_3 * 3433.32,&DAT_4030000000000000,0x401d28f5c28f5c29,param_7);
    FUN_1453ceac0(param_1,param_3 * 5712.44,&DAT_4030000000000000,0xc02647ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 12115.28,0x401a000000000000,0x401a8f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 3237.88;
    break;
  case 0x27:
    FUN_1453ce6b0(param_1,0x40a0243d70a3d70a,param_4);
    FUN_1453ceac0(param_1,param_3 * 397.19,0x402c0f5c28f5c28f,0x402723d70a3d70a4,param_5);
    FUN_1453ceac0(param_1,param_3 * 1765.29,0x4022e66666666666,0x402a23d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 2085.01,&DAT_4030000000000000,0x40304a3d70a3d70a,param_7);
    FUN_1453ceac0(param_1,param_3 * 3684.22,&DAT_4030000000000000,0xc03011eb851eb852,param_8);
    FUN_1453ceac0(param_1,param_3 * 9653.49,&DAT_4030000000000000,0x402b6b851eb851ec,param_9);
    uVar4 = 0x3fe3333333333333;
    param_3 = 2103.23;
    break;
  case 0x28:
    FUN_1453ce6b0(param_1,0x4047000000000000,param_4);
    FUN_1453cecd0(param_1,0x405bcccccccccccd,0x3fc0000000000000,0xc02f333333333333,param_5);
    FUN_1453ceac0(param_1,param_3 * 272.0,0x401399999999999a,0x4017333333333333,param_6);
    FUN_1453ceac0(param_1,param_3 * 562.3,0x4016000000000000,0xc02a333333333333,param_7);
    FUN_1453ceac0(param_1,param_3 * 1810.0,0x401799999999999a,0xc023cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 3130.0;
    break;
  case 0x29:
    FUN_1453ce6b0(param_1,0x40be5d947ae147ae,param_4);
    FUN_1453ceac0(param_1,param_3 * 4000.0,&DAT_4030000000000000,0,param_5);
    FUN_1453ceac0(param_1,0x406e870a3d70a3d7,0x4012b851eb851eb8,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,0x409a4da3d70a3d71,0x3ffc7ae147ae147b,0xc025dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 4000.0,&DAT_4030000000000000,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 5108.97,&DAT_4030000000000000,0x402d23d70a3d70a4,param_9);
    param_3 = param_3 * 11813.7;
    uVar4 = 0x3feb333333333333;
    break;
  case 0x2a:
    FUN_1453ce740(param_1,param_3 * 145.96,0x3fd47ae147ae147b);
    FUN_1453ceac0(param_1,0x4073700000000000,0x402e9eb851eb851f,0x402a947ae147ae14,param_5);
    FUN_1453ceac0(param_1,0x407dfe6666666666,&DAT_4030000000000000,0x4025cccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 792.27,0x401f000000000000,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2040.0,0x402ac7ae147ae148,0x402b000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 4480.75,0x402ad70a3d70a3d7,0x402a23d70a3d70a4,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 5356.3;
    break;
  case 0x2b:
    FUN_1453ce740(param_1,0x404e400000000000,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 306.5,0x3fd999999999999a,0x4025cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 1770.0,0x400d99999999999a,0xc029333333333333,param_6);
    FUN_1453ceac0(param_1,param_3 * 6630.0,0x402199999999999a,0xc032000000000000,param_7);
    FUN_1453ce8a0(param_1,param_3 * 9060.0,0x3ff0000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    param_3 = 9080.0;
    uVar4 = 0x3ff0000000000000;
    break;
  case 0x2c:
    FUN_1453ce740(param_1,0x4035000000000000,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 80.0,0x401f99999999999a,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 160.0,0x402e000000000000,0x403019999999999a,param_6);
    FUN_1453ceac0(param_1,param_3 * 240.0,&DAT_4030000000000000,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1270.0,0x400ccccccccccccd,0x402a333333333333,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 6210.0;
    break;
  case 0x2d:
    FUN_1453ce6b0(param_1,0x4036800000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 42.1,0x400b333333333333,0x4030e66666666666,param_5);
    FUN_1453ceac0(param_1,param_3 * 175.7,0x402ecccccccccccd,0x40304ccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 179.4,0x401a666666666666,0x4023cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 1710.0,0x4002666666666666,0xc02499999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40b6a80000000000,param_10);
    return;
  case 0x2e:
    FUN_1453ce740(param_1,0x403c800000000000,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 130.0,0x4012666666666666,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 311.3,0x4008cccccccccccd,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 165.0,0x4028000000000000,0x4027cccccccccccd,param_7);
    FUN_1453ceac0(param_1,param_3 * 1190.0,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 7630.0;
    break;
  case 0x2f:
    FUN_1453ce740(param_1,0x404e333333333333,0x3ff6666666666666);
    FUN_1453ceac0(param_1,param_3 * 300.0,0x4026000000000000,0xc028666666666666,param_5);
    FUN_1453ceac0(param_1,param_3 * 727.0,0x3fd999999999999a,0xc028cccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 3890.0,0x4015333333333333,0x402a99999999999a,param_7);
    FUN_1453ceac0(param_1,param_3 * 8930.0,0x4025000000000000,0x401599999999999a,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff6666666666666;
    param_3 = 11800.0;
    break;
  case 0x30:
    FUN_1453ce740(param_1,0x40546f5c28f5c28f,0x3ff1c28f5c28f5c3);
    FUN_1453ceac0(param_1,param_3 * 4000.0,0x401a000000000000,0x4023b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 1133.55,0x401c8f5c28f5c28f,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1146.9,0x3ff7851eb851eb85,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4859.41,0x402351eb851eb852,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 8961.5,&DAT_4030000000000000,0xc0226b851eb851ec,param_9);
    uVar4 = 0x3fe3333333333333;
    param_3 = 8860.73;
    break;
  case 0x31:
    FUN_1453ce6b0(param_1,0x405eeb851eb851ec,param_4);
    FUN_1453ceac0(param_1,0x406defae147ae148,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1737.78,0x4021947ae147ae14,0x40315c28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 2993.58,0x402f4ccccccccccd,0x402d23d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 9323.87,0x401dae147ae147ae,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 3101.03,0x402b70a3d70a3d71,0x4029b851eb851eb8,param_9);
    FUN_1453ce810(param_1,0x408bbb70a3d70a3d,param_10);
    return;
  case 0x32:
    FUN_1453ce740(param_1,0x40524ccccccccccd,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 515.96,0x4003851eb851eb85,0xc031ca3d70a3d70a,param_5);
    FUN_1453ceac0(param_1,param_3 * 2878.74,0x4006147ae147ae14,0xc01b70a3d70a3d71,param_6);
    FUN_1453ceac0(param_1,param_3 * 5179.47,&DAT_4030000000000000,0xc0286b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 6202.06,&DAT_4030000000000000,0x401fb851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 9466.52,&DAT_4030000000000000,0xc019b851eb851eb8,param_9);
    FUN_1453ce810(param_1,0x40a94bc28f5c28f6,param_10);
    return;
  case 0x33:
    FUN_1453ce740(param_1,param_3 * 902.59,0x3feccccccccccccd);
    FUN_1453ceac0(param_1,param_3 * 831.3,0x4000000000000000,0x401570a3d70a3d71,param_5);
    FUN_1453ceac0(param_1,param_3 * 1230.71,0x4024c28f5c28f5c3,0xc022000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 3831.19,0x402923d70a3d70a4,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,0x40b6ef3333333333,0x402c3d70a3d70a3d,0x402a23d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,0x40a623c28f5c28f6,&DAT_4030000000000000,0x40256b851eb851ec,param_9);
    uVar4 = 0x3fe6b851eb851eb8;
    param_3 = 2609.6;
    break;
  case 0x34:
    FUN_1453ce740(param_1,param_3 * 572.37,0x3fe947ae147ae148);
    FUN_1453ceac0(param_1,0x40a7c1f0a3d70a3d,0x4026851eb851eb85,0x4020b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 935.64,0x400947ae147ae148,0x401647ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 1211.53,0x4000000000000000,0xc01128f5c28f5c29,param_7);
    FUN_1453ceac0(param_1,param_3 * 3535.81,&DAT_4030000000000000,0xc02fb851eb851eb8,param_8);
    FUN_1453ceac0(param_1,0x40b20835c28f5c29,&DAT_4030000000000000,0x402347ae147ae148,param_9);
    uVar4 = 0x3fe70a3d70a3d70a;
    param_3 = 2180.22;
    break;
  case 0x35:
    FUN_1453ce6b0(param_1,0x4034000000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 3212.34,0x401a99999999999a,0xc00651eb851eb852,param_5);
    FUN_1453ceac0(param_1,param_3 * 4352.1,0x4017d70a3d70a3d7,0x4024947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 7530.09,0x402f4ccccccccccd,0x4022000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 9448.32,&DAT_4030000000000000,0xc02123d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 10857.11,&DAT_4030000000000000,0x4027947ae147ae14,param_9);
    FUN_1453ce810(param_1,0x40c8cb3eb851eb85,param_10);
    return;
  case 0x36:
    FUN_1453ce740(param_1,0x408c34b851eb851f,0x3fe5c28f5c28f5c3);
    FUN_1453ce740(param_1,param_3 * 902.59,0x3fe5c28f5c28f5c3,param_5);
    FUN_1453ceac0(param_1,param_3 * 1622.29,0x401d0a3d70a3d70a,0x4024947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 4893.62,0x401b333333333333,0xc02f47ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 3930.09,0x402c0f5c28f5c28f,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2609.6,0x3fdd70a3d70a3d71,param_9);
    uVar4 = 0x3fdd70a3d70a3d71;
    param_3 = 2609.6;
    break;
  case 0x37:
    FUN_1453ce740(param_1,0x406b9a8f5c28f5c3,0x3fe0000000000000);
    FUN_1453ceac0(param_1,param_3 * 484.61,0x4017d70a3d70a3d7,0x402c47ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 1520.49,0x401170a3d70a3d71,0x402423d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 2600.86,0x401bcccccccccccd,0x402a947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 4325.49,0x40208f5c28f5c28f,0x4032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x40bdf9cf5c28f5c3,0x3fd0000000000000,param_9);
    param_3 = param_3 * 7673.81;
    goto LAB_1453d0080;
  case 0x38:
    FUN_1453ce6b0(param_1,0x406b9a8f5c28f5c3,param_4);
    FUN_1453ceac0(param_1,param_3 * 183.1,0x4020eb851eb851ec,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 627.52,0x4007333333333333,0x401728f5c28f5c29,param_6);
    FUN_1453ceac0(param_1,param_3 * 1761.36,&DAT_4030000000000000,0xc02d947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 4780.82,&DAT_4030000000000000,0x402723d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 6576.85,&DAT_4030000000000000,0x402947ae147ae148,param_9);
    uVar4 = 0x3fdb851eb851eb85;
    param_3 = 11813.7;
    break;
  case 0x39:
    FUN_1453ce6b0(param_1,0x4060cb851eb851ec,param_4);
    FUN_1453ceac0(param_1,param_3 * 60.0,0x40208f5c28f5c28f,0xc018d70a3d70a3d7,param_5);
    FUN_1453ceac0(param_1,param_3 * 209.21,0x400ca3d70a3d70a4,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 393.77,0x4010c28f5c28f5c3,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x4010c28f5c28f5c3,0x402e000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 4816.96,&DAT_4030000000000000,0x4032000000000000,param_9);
    uVar4 = 0x3fdb851eb851eb85;
    param_3 = 10231.23;
    break;
  case 0x3a:
    FUN_1453ce6b0(param_1,0x4063d1eb851eb852,param_4);
    FUN_1453ceac0(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 348.77,0x4001c28f5c28f5c3,0x4020b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 2231.77,0x4014e147ae147ae1,0x4027947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 4660.21,&DAT_4030000000000000,0xc01b70a3d70a3d71,param_8);
    uVar4 = 0x4028000000000000;
    puVar2 = &DAT_4030000000000000;
    param_3 = param_3 * 13257.41;
    goto LAB_1453d3065;
  case 0x3b:
    FUN_1453ce740(param_1,0x407338f5c28f5c29,0x3fe4cccccccccccd);
    FUN_1453ce6b0(param_1,param_3 * 307.56,param_5);
    FUN_1453ceac0(param_1,param_3 * 4300.0,&DAT_4030000000000000,0x402e000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 5526.33,&DAT_4030000000000000,0xc025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 9941.65,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 7673.81,0x3fef5c28f5c28f5c,param_9);
    uVar4 = 0x3fef5c28f5c28f5c;
    param_3 = 7673.81;
    break;
  case 0x3c:
    FUN_1453ce740(param_1,0x4076af5c28f5c28f,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x404c8f5c28f5c28f,0x3fd999999999999a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 223.18,0x400af5c28f5c28f6,0xc0226b851eb851ec,param_6);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3fd999999999999a,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5000.0,0x4020eb851eb851ec,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 8000.0,&DAT_4030000000000000,0xc032000000000000,param_9);
    uVar4 = 0x3ff5eb851eb851ec;
    param_3 = 4638.81;
    break;
  case 0x3d:
    FUN_1453ce740(param_1,param_3 * 58.69,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 57.12,0x400f5c28f5c28f5c,0,param_5);
    FUN_1453ceac0(param_1,param_3 * 113.36,0x3ff6e147ae147ae1,0x4026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 346.04,0x4009333333333333,0x402d23d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 5802.88,&DAT_4030000000000000,0x4012d70a3d70a3d7,param_8);
    param_3 = param_3 * 8860.73;
    FUN_1453ce8a0(param_1,param_3,0x3ff68f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    break;
  case 0x3e:
    FUN_1453ce740(param_1,0x405c766666666666,0x3fe70a3d70a3d70a);
    FUN_1453ceac0(param_1,param_3 * 339.34,0x40278a3d70a3d70a,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 697.48,0x40125c28f5c28f5c,0x4026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 2316.84,&DAT_4030000000000000,0xc0148f5c28f5c28f,param_7);
    FUN_1453ceac0(param_1,param_3 * 3720.43,0x40278a3d70a3d70a,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 9977.2,0x40278a3d70a3d70a,0xc032000000000000,param_9);
    goto LAB_1453d344c;
  case 0x3f:
    FUN_1453ce740(param_1,param_3 * 260.61,0x3fe7ae147ae147ae);
    FUN_1453ceac0(param_1,param_3 * 2651.48,0x4024c28f5c28f5c3,0x401c47ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 255.17,0x40150a3d70a3d70a,0x400b70a3d70a3d71,param_6);
    FUN_1453ceac0(param_1,0x408e67ae147ae148,0x3ff170a3d70a3d71,0xc028dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 4111.16,0x401e851eb851eb85,0x400ee147ae147ae1,param_8);
    FUN_1453ceac0(param_1,param_3 * 8961.5,0x40157ae147ae147b,0x4012000000000000,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 6411.18;
    break;
  case 0x40:
    FUN_1453ce740(param_1,0x406968f5c28f5c29,0x3fd0000000000000);
    FUN_1453cecd0(param_1,param_3 * 40.0,0x3fc0000000000000,0x401d28f5c28f5c29,param_5);
    FUN_1453ceac0(param_1,param_3 * 885.72,0x40113d70a3d70a3d,0xc013b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,0x408f400000000000,0x3fd999999999999a,0xc028000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2442.16,0x401a333333333333,0x4018000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 4079.0,0x4017d70a3d70a3d7,0x401647ae147ae148,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 12694.49;
    break;
  case 0x41:
    FUN_1453ce740(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_1453ce740(param_1,param_3 * 20.0,0x3ff68f5c28f5c28f,param_5);
    FUN_1453ceac0(param_1,param_3 * 120.69,0x402df5c28f5c28f6,0xc028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 582.53,0x402df5c28f5c28f6,0xc01647ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 4125.69,&DAT_4030000000000000,0x401128f5c28f5c29,param_8);
    FUN_1453ceac0(param_1,param_3 * 7057.47,0x401a99999999999a,0x400d1eb851eb851f,param_9);
    param_3 = 18187.0;
    uVar4 = 0x3ff68f5c28f5c28f;
    break;
  case 0x42:
    FUN_1453ce6b0(param_1,0x4084408f5c28f5c3,param_4);
    FUN_1453ceac0(param_1,param_3 * 91.75,0x4014e147ae147ae1,0x402047ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 348.77,0x401b5c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 275.73,0x40258f5c28f5c28f,0x4024947ae147ae14,param_7);
    FUN_1453ceac0(param_1,0x40989c3d70a3d70a,0x3ff599999999999a,0xc02947ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 8254.04,0x40204ccccccccccd,0x4022dc28f5c28f5c,param_9);
    FUN_1453ce810(param_1,0x40b4ec4ccccccccd,param_10);
    return;
  case 0x43:
    FUN_1453ce740(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x405d5ae147ae147b,0x3ff0f5c28f5c28f6,0xc01c47ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 259.49,0x401047ae147ae148,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,0x40733ae147ae147b,0x3fd999999999999a,0xc02bdc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 5407.7,&DAT_4030000000000000,0x3ff8000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 8254.04,&DAT_4030000000000000,0x4018000000000000,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 7141.38;
    break;
  case 0x44:
    FUN_1453ce740(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f);
    FUN_1453ce6b0(param_1,param_3 * 75.25,param_5);
    FUN_1453ceac0(param_1,param_3 * 84.51,0x402df5c28f5c28f6,0xc013b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 480.82,&DAT_4030000000000000,0xc022000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3187.21,&DAT_4030000000000000,0x401eeb851eb851ec,param_8);
    FUN_1453ceac0(param_1,param_3 * 4682.28,&DAT_4030000000000000,0x401570a3d70a3d71,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 14657.96;
    break;
  case 0x45:
    FUN_1453ce6b0(param_1,0x407338f5c28f5c29,param_4);
    FUN_1453ceac0(param_1,param_3 * 311.3,&DAT_4030000000000000,0x402e000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 500.0,&DAT_4030000000000000,0xc022000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 2700.0,&DAT_4030000000000000,0x4025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4328.96,0x4020333333333333,0x402cb851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 10000.0,&DAT_4030000000000000,0,param_9);
    FUN_1453ce810(param_1,0x40ab2e947ae147ae,param_10);
    return;
  case 0x46:
    FUN_1453ce6b0(param_1,0x4074e1c28f5c28f6,param_4);
    uVar4 = 0x4022000000000000;
    goto LAB_1453d9544;
  case 0x47:
    FUN_1453ce6b0(param_1,0x409b5b0000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 1387.96,0x4022147ae147ae14,0x4025000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 224.94,0x3ff599999999999a,0x4030ee147ae147ae,param_6);
    FUN_1453ceac0(param_1,param_3 * 291.26,0x3ffc000000000000,0x402b000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5161.48,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 7196.86,0x40242e147ae147ae,0x4032000000000000,param_9);
    FUN_1453ce810(param_1,0x40a94bc28f5c28f6,param_10);
    return;
  case 0x48:
    FUN_1453ce740(param_1,0x4060cb851eb851ec,0x3ff07ae147ae147b);
    FUN_1453ce6b0(param_1,param_3 * 134.36,param_5);
    FUN_1453ceac0(param_1,param_3 * 475.23,&DAT_4030000000000000,0xc028dc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 632.46,&DAT_4030000000000000,0xc02e6b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 2778.99,0x40138f5c28f5c28f,0xc020b851eb851eb8,param_8);
    FUN_1453ce8a0(param_1,param_3 * 12694.49,0x3fedc28f5c28f5c3,param_9);
    uVar4 = 0x3fedc28f5c28f5c3;
    param_3 = 12694.49;
    break;
  case 0x49:
    FUN_1453ce740(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 46.24,0x3ff199999999999a,0x400b70a3d70a3d71,param_5);
    FUN_1453ceac0(param_1,param_3 * 133.62,0x3ff70a3d70a3d70a,0x4018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_1453ce8a0(param_1,0x4076a1c28f5c28f6,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 66.66;
    FUN_1453ce8a0(param_1,param_3,0x3ff0000000000000,param_9);
    uVar4 = 0x3ff0000000000000;
    break;
  case 0x4a:
    FUN_1453ce740(param_1,param_3 * 505.5,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 106.68,0x401999999999999a,0x400651eb851eb852,param_5);
    FUN_1453ceac0(param_1,param_3 * 536.34,0x401a000000000000,0x4022dc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 221.43,0x401651eb851eb852,0x4027947ae147ae14,param_7);
    FUN_1453ceac0(param_1,0x409ab83d70a3d70a,0x4010c28f5c28f5c3,0xc02047ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x4022000000000000,param_9);
    FUN_1453ce810(param_1,0x40a5a58000000000,param_10);
    return;
  case 0x4b:
    FUN_1453ce740(param_1,0x404d5851eb851eb8,0x3fe5c28f5c28f5c3);
    FUN_1453ceac0(param_1,param_3 * 106.68,0x401999999999999a,0x4019b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 443.91,0x4000000000000000,0x401fb851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 221.43,0x401651eb851eb852,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1710.06,0x4010c28f5c28f5c3,0xc027947ae147ae14,param_8);
    FUN_1453ceac0(param_1,param_3 * 6275.08,0x400c51eb851eb852,0x401e000000000000,param_9);
    FUN_1453ce810(param_1,0x40a5a58000000000,param_10);
    return;
  case 0x4c:
    FUN_1453ce740(param_1,param_3 * 30.26,0x3febd70a3d70a3d7);
    FUN_1453ceac0(param_1,param_3 * 93.02,0x4006b851eb851eb8,0x4019b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 443.91,0x401b5c28f5c28f5c,0x401a8f5c28f5c28f,param_6);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_7);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_8);
    FUN_1453ce8a0(param_1,0x4066cdc28f5c28f6,0x3ff68f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 182.43;
    break;
  case 0x4d:
    FUN_1453ce740(param_1,0x4065880000000000,0x3fe3d70a3d70a3d7);
    FUN_1453ceac0(param_1,param_3 * 92.76,0x3ff87ae147ae147b,0x401728f5c28f5c29,param_5);
    FUN_1453ceac0(param_1,param_3 * 3816.47,0x3ffe666666666666,0x401728f5c28f5c29,param_6);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3fd999999999999a,0xc02b000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2188.54,0x401c99999999999a,0xc02d23d70a3d70a4,param_8);
    uVar4 = 0x4022d1eb851eb852;
    puVar2 = (undefined1 *)0x4018000000000000;
    param_3 = param_3 * 4565.87;
    goto LAB_1453d4215;
  case 0x4e:
    FUN_1453ce740(param_1,0x4059900000000000,0x3fe3d70a3d70a3d7);
    FUN_1453ceac0(param_1,0x40565147ae147ae1,0x3ffa8f5c28f5c28f,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 137.63,0x3ffd99999999999a,0xc032000000000000,param_6);
    FUN_1453ce8a0(param_1,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_7);
    FUN_1453ce8a0(param_1,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_1453ce8a0(param_1,param_3,0x3fd0000000000000,param_9);
    uVar4 = 0x3fd0000000000000;
    break;
  case 0x4f:
    FUN_1453ce6b0(param_1,0x4095566666666666,param_4);
    FUN_1453ceac0(param_1,0x4069e5c28f5c28f6,0x4015d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 4031.54,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 4811.66,&DAT_4030000000000000,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5521.95,0x4026000000000000,0xc021947ae147ae14,param_8);
    FUN_1453ce8a0(param_1,0x40a5e851eb851eb8,0x3fe147ae147ae148,param_9);
    param_3 = param_3 * 2804.16;
    uVar4 = 0x3fe147ae147ae148;
    break;
  case 0x50:
    FUN_1453ceac0(param_1,0x405e847ae147ae14,0x3ffbd70a3d70a3d7,0xc032000000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 188.6,0x4006147ae147ae14,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1437.78,0x3ff3333333333333,0x40304a3d70a3d70a,param_6);
    FUN_1453ceac0(param_1,param_3 * 1974.23,0x401dae147ae147ae,0x401647ae147ae148,param_7);
    FUN_1453ce8a0(param_1,param_3 * 894.75,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,0x40a5e851eb851eb8,0x3fe3d70a3d70a3d7,param_9);
    uVar4 = 0x3fe3d70a3d70a3d7;
    param_3 = 2804.16;
    break;
  case 0x51:
    FUN_1453ce740(param_1,param_3 * 745.52,0x3ff69fbe76c8b439);
    FUN_1453ceac0(param_1,0x4060d570a3d70a3d,0x40100a3d70a3d70a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 479.04,0x400f5c28f5c28f5c,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 765.39,0x40100a3d70a3d70a,0xc025000000000000,param_7);
    FUN_1453ce8a0(param_1,param_3 * 872.94,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,0x40a5e851eb851eb8,0x3fdc28f5c28f5c29,param_9);
    uVar4 = 0x3fdc28f5c28f5c29;
    param_3 = 2804.16;
    break;
  case 0x52:
    FUN_1453ce740(param_1,param_3 * 1919.43,0x3ff69fbe76c8b439);
    FUN_1453ceac0(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 630.11,0x3ffbd70a3d70a3d7,0x4018000000000000,param_6);
    FUN_1453ce8a0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_7);
    FUN_1453ce8a0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_1453ce8a0(param_1,param_3,0x3fdc28f5c28f5c29,param_9);
    uVar4 = 0x3fdc28f5c28f5c29;
    break;
  case 0x53:
    FUN_1453ce740(param_1,param_3 * 362.96,0x3fd70a3d70a3d70a);
    FUN_1453ce740(param_1,param_3 * 362.96,0x3fd70a3d70a3d70a,param_5);
    FUN_1453ceac0(param_1,param_3 * 620.21,0x40100a3d70a3d70a,0x4018d70a3d70a3d7,param_6);
    FUN_1453ceac0(param_1,0x40af400000000000,0x4020eb851eb851ec,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,0x40b5b5fae147ae14,0x4010666666666666,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3013.23,0x3fd0a3d70a3d70a4,param_9);
    uVar4 = 0x3fd0a3d70a3d70a4;
    param_3 = 3013.23;
    break;
  case 0x54:
    FUN_1453ce740(param_1,0x4099715c28f5c28f,0x3ff69fbe76c8b439);
    FUN_1453ceac0(param_1,param_3 * 306.49,0x40028f5c28f5c28f,0x4030b5c28f5c28f6,param_5);
    FUN_1453ceac0(param_1,param_3 * 667.45,0x3ffbd70a3d70a3d7,0x401c47ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 1974.23,0x400d5c28f5c28f5c,0x401647ae147ae148,param_7);
    FUN_1453ce8a0(param_1,0x40a05f8a3d70a3d7,0x3ff69fbe76c8b439,param_8);
    param_3 = param_3 * 2609.6;
    FUN_1453ce8a0(param_1,param_3,0x3fdc28f5c28f5c29,param_9);
    uVar4 = 0x3fdc28f5c28f5c29;
    break;
  case 0x55:
    FUN_1453ce740(param_1,0x407ac570a3d70a3d,0x3ff0cccccccccccd);
    FUN_1453ceac0(param_1,param_3 * 1060.0,0x401199999999999a,0xc020cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 4924.22,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 4234.48,&DAT_4030000000000000,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5802.88,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3237.88,0x3fd0000000000000,param_9);
    uVar4 = 0x3fd0000000000000;
    param_3 = 3237.88;
    break;
  case 0x56:
    FUN_1453ce740(param_1,0x408dd0f5c28f5c29,0x3ff69fbe76c8b439);
    FUN_1453ceac0(param_1,param_3 * 2627.82,0x4014000000000000,0x402f47ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 3146.15,0x4020333333333333,0x402e000000000000,param_6);
    FUN_1453ce8a0(param_1,param_3 * 2794.76,0x3ff69fbe76c8b439,param_7);
    FUN_1453ce8a0(param_1,0x40a5d5851eb851ec,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2609.6,0x3ff68f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 2609.6;
    break;
  case 0x57:
    FUN_1453ce740(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 141.15,0x4018851eb851eb85,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 2755.21,0x400c28f5c28f5c29,0x400ccccccccccccd,param_6);
    FUN_1453ced60(param_1,0x40bce4dc28f5c28f,0x3ff0000000000000,0xc032000000000000,param_7);
    FUN_1453ce8a0(param_1,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2609.6;
    uVar4 = 0x3fdd70a3d70a3d71;
    break;
  case 0x58:
    FUN_1453ce740(param_1,0x406b9a8f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 142.26,0x4009333333333333,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 2559.6,0x400d5c28f5c28f5c,0x402723d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 3863.23,&DAT_4030000000000000,0xc032000000000000,param_7);
    uVar4 = 0x40155c28f5c28f5c;
    dVar1 = param_3 * 5370.08;
    uVar3 = 0xc032000000000000;
    goto LAB_1453d4bdd;
  case 0x59:
    FUN_1453ce740(param_1,0x407d1547ae147ae1,0x3fea3d70a3d70a3d);
    FUN_1453ceac0(param_1,param_3 * 142.26,0x4009333333333333,0xc022dc28f5c28f5c,param_5);
    FUN_1453ceac0(param_1,param_3 * 1400.45,0x40185c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 3863.23,&DAT_4030000000000000,0xc032000000000000,param_7);
    uVar3 = 0xc02fb851eb851eb8;
    dVar1 = param_3 * 5672.71;
    uVar4 = 0x401c666666666666;
LAB_1453d4bdd:
    FUN_1453ceac0(param_1,dVar1,uVar4,uVar3,param_8);
    FUN_1453ce8a0(param_1,0x40a1a8147ae147ae,0x3fd0000000000000,param_9);
    param_3 = param_3 * 2260.04;
    goto LAB_1453d0080;
  case 0x5a:
    FUN_1453ce740(param_1,0x407d1547ae147ae1,0x3fd7ae147ae147ae);
    FUN_1453ce740(param_1,param_3 * 465.33,0x3fd7ae147ae147ae,param_5);
    FUN_1453ceac0(param_1,param_3 * 138.42,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 4172.44,0x4017d70a3d70a3d7,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5964.15,0x40051eb851eb851f,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3237.88,0x3fd3d70a3d70a3d7,param_9);
    uVar4 = 0x3fd3d70a3d70a3d7;
    param_3 = 3237.88;
    break;
  case 0x5b:
    FUN_1453ce740(param_1,0x4095566666666666,0x3fe199999999999a);
    FUN_1453ceac0(param_1,param_3 * 3786.61,&DAT_4030000000000000,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 4377.09,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 5224.07,0x40260a3d70a3d70a,0xc0286b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 6690.0,0x4026000000000000,0xc02edc28f5c28f5c,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2804.16,0x3fd0000000000000,param_9);
    FUN_1453ce810(param_1,0x40a5e851eb851eb8,param_10);
    return;
  case 0x5c:
    FUN_1453ce740(param_1,0x409214999999999a,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 110.29,&DAT_4030000000000000,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 733.09,0x3ff6666666666666,0x401eae147ae147ae,param_6);
    FUN_1453ced60(param_1,0x40bce4dc28f5c28f,0x3ff0000000000000,0xc032000000000000,param_7);
    FUN_1453ce8a0(param_1,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2609.6;
    uVar4 = 0x3feb851eb851eb85;
    break;
  case 0x5d:
    FUN_1453ce740(param_1,param_3 * 334.11,0x3fd47ae147ae147b);
    FUN_1453ce740(param_1,param_3 * 245.65,0x3ff69fbe76c8b439,param_5);
    FUN_1453ce740(param_1,param_3 * 245.65,0x3ff69fbe76c8b439,param_6);
    FUN_1453ceac0(param_1,0x407cac28f5c28f5c,0x3ffb851eb851eb85,0x401ed70a3d70a3d7,param_7);
    FUN_1453ce8a0(param_1,0x40a6017ae147ae14,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,0x40a6017ae147ae14,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2314.86;
    uVar4 = 0x3fe0f5c28f5c28f6;
    break;
  case 0x5e:
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_1453ceac0(param_1,0x4054000000000000,&DAT_4030000000000000,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 250.0,0x40100a3d70a3d70a,0x40226b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 5000.0,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3013.23,0x3fd0000000000000,param_9);
    uVar4 = 0x3fd0000000000000;
    param_3 = 3013.23;
    break;
  case 0x5f:
    FUN_1453ce6b0(param_1,0x4081293333333333,param_4);
    FUN_1453cecd0(param_1,0x4081d9eb851eb852,0x3ff0000000000000,0xc01570a3d70a3d71,param_5);
    FUN_1453ceac0(param_1,param_3 * 208.81,0x4009333333333333,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 980.63,0x3ffe666666666666,0x4024947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 3970.59,0x40260a3d70a3d70a,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 7063.64,0x40035c28f5c28f5c,0xc022000000000000,param_9);
    uVar4 = 0x3fd70a3d70a3d70a;
    param_3 = 2260.04;
    break;
  case 0x60:
    FUN_1453ce740(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f);
    FUN_1453cecd0(param_1,0x4069000000000000,0x3fe2147ae147ae14,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x400b70a3d70a3d71,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 180.0,&DAT_4030000000000000,0xc022000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4143.58,0x4014d70a3d70a3d7,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2428.54,0x3fd0000000000000,param_9);
    FUN_1453ce810(param_1,0x40a2f9147ae147ae,param_10);
    return;
  case 0x61:
    FUN_1453ce740(param_1,0x407338f5c28f5c29,0x3fd0000000000000);
    FUN_1453ceac0(param_1,param_3 * 2000.0,0x401f333333333333,0x402799999999999a,param_5);
    FUN_1453ceac0(param_1,param_3 * 4730.0,&DAT_4030000000000000,0x40271eb851eb851f,param_6);
    FUN_1453ceac0(param_1,0x40b3880000000000,&DAT_4030000000000000,0xc025dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 6399.01,&DAT_4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_1453ceac0(param_1,0x40c3880000000000,&DAT_4030000000000000,0xc024947ae147ae14,param_9);
    param_3 = param_3 * 12694.49;
    uVar4 = 0x3fdd70a3d70a3d71;
    break;
  case 0x62:
    FUN_1453ce740(param_1,param_3 * 195.03,0x3fd0000000000000);
    FUN_1453ce6b0(param_1,0x406860f5c28f5c29,param_5);
    FUN_1453ceac0(param_1,param_3 * 674.8,&DAT_4030000000000000,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1339.06,0x3ff2666666666666,0x402123d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 5029.73,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 8699.31,&DAT_4030000000000000,0,param_9);
    uVar4 = 0x3fd8f5c28f5c28f6;
    param_3 = 2804.16;
    break;
  case 99:
    FUN_1453ce740(param_1,param_3 * 362.96,0x3fe7ae147ae147ae);
    FUN_1453ce6b0(param_1,0x4076af5c28f5c28f,param_5);
    FUN_1453ceac0(param_1,param_3 * 616.67,0x401170a3d70a3d71,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1160.0,0x40214ccccccccccd,0x4022000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2180.0,0x401c666666666666,0x40304ccccccccccd,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3738.69,0x3fd0a3d70a3d70a4,param_9);
    uVar4 = 0x3fd0a3d70a3d70a4;
    param_3 = 3738.69;
    break;
  case 100:
    FUN_1453ce740(param_1,param_3 * 526.88,0x3fed70a3d70a3d71);
    FUN_1453ceac0(param_1,0x4074775c28f5c28f,0x4010666666666666,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 533.41,0x40035c28f5c28f5c,0x402947ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 883.95,0x4015d70a3d70a3d7,0x4020d70a3d70a3d7,param_7);
    FUN_1453ceac0(param_1,param_3 * 3076.77,0x401fae147ae147ae,0x402d947ae147ae14,param_8);
    FUN_1453ce8a0(param_1,param_3 * 1957.3,0x3fea8f5c28f5c28f,param_9);
    uVar4 = 0x3fea8f5c28f5c28f;
    param_3 = 1957.3;
    break;
  case 0x65:
    FUN_1453ce740(param_1,0x4080ecf5c28f5c29,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 494.0,0x401d0a3d70a3d70a,0x401928f5c28f5c29,param_5);
    FUN_1453ceac0(param_1,param_3 * 530.88,0x401251eb851eb852,0x4030800000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1418.2,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1606.77,0x40214ccccccccccd,0x40256b851eb851ec,param_8);
    FUN_1453ce8a0(param_1,param_3 * 1695.11,0x3fe3d70a3d70a3d7,param_9);
    uVar4 = 0x3fe3d70a3d70a3d7;
    param_3 = 1695.11;
    break;
  case 0x66:
    FUN_1453ce6b0(param_1,0x407d1547ae147ae1,param_4);
    FUN_1453ceac0(param_1,param_3 * 300.0,0x3ffdeb851eb851ec,0,param_5);
    FUN_1453ceac0(param_1,param_3 * 99.62,&DAT_4030000000000000,0xc03191eb851eb852,param_6);
    FUN_1453ceac0(param_1,param_3 * 627.51,0x400799999999999a,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3742.55,0x401fae147ae147ae,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2609.6,0x3fd7ae147ae147ae,param_9);
    uVar4 = 0x3fd7ae147ae147ae;
    param_3 = 2609.6;
    break;
  case 0x67:
    FUN_1453ce740(param_1,param_3 * 465.33,0x3fd28f5c28f5c28f);
    FUN_1453cecd0(param_1,0x406753d70a3d70a4,0x3fed4ccccccccccd,0xc0226b851eb851ec,param_5);
    FUN_1453ceac0(param_1,0x406bf6b851eb851f,0x401dae147ae147ae,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,0x40926b147ae147ae,0x3fe2e147ae147ae1,0xc02a947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 1835.03,0x4006147ae147ae14,0x402d23d70a3d70a4,param_8);
    param_3 = param_3 * 1271.4;
    FUN_1453ce8a0(param_1,param_3,0x3ff68f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    break;
  case 0x68:
    FUN_1453ce6b0(param_1,0x4076af5c28f5c28f,param_4);
    FUN_1453cecd0(param_1,0x4068e9eb851eb852,0x3f9999999999999a,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 312.55,0x4022147ae147ae14,0x402d23d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 594.03,0x400bae147ae147ae,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2673.38,0x4010c28f5c28f5c3,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 4503.72,0x3ff0cccccccccccd,0xc032000000000000,param_9);
    param_3 = param_3 * 1715.55;
    uVar4 = 0x3fe6147ae147ae14;
    break;
  case 0x69:
    FUN_1453ce740(param_1,param_3 * 549.15,0x3fe23d70a3d70a3d);
    FUN_1453ceac0(param_1,0x40701fae147ae148,0x40242e147ae147ae,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,0x4096ef3333333333,0x40133d70a3d70a3d,0xc02edc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 1757.59,0x40278a3d70a3d70a,0x400d1eb851eb851f,param_7);
    FUN_1453ceac0(param_1,param_3 * 2735.68,0x40278a3d70a3d70a,0x402e000000000000,param_8);
    FUN_1453ce8a0(param_1,0x409e37eb851eb852,0x3fe3333333333333,param_9);
    param_3 = param_3 * 1933.98;
    uVar4 = 0x3fe3333333333333;
    break;
  case 0x6a:
    FUN_1453ce740(param_1,param_3 * 428.34,0x3fd1eb851eb851ec);
    FUN_1453ceac0(param_1,0x40643c28f5c28f5c,0x40208f5c28f5c28f,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,0x406060f5c28f5c29,&DAT_4030000000000000,0xc01ed70a3d70a3d7,param_6);
    FUN_1453ceac0(param_1,param_3 * 650.03,0x401251eb851eb852,0x4020b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 5365.39,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x40a94bc28f5c28f6,0x3fe8f5c28f5c28f6,param_9);
    param_3 = param_3 * 3237.88;
    uVar4 = 0x3fe8f5c28f5c28f6;
    break;
  case 0x6b:
    FUN_1453ce6b0(param_1,0x4086003d70a3d70a,param_4);
    FUN_1453ceac0(param_1,param_3 * 246.14,&DAT_4030000000000000,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 695.88,0x4008cccccccccccd,0x40287ae147ae147b,param_6);
    FUN_1453ceac0(param_1,param_3 * 1878.49,0x40242e147ae147ae,0x401c47ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 2275.01,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x40a425051eb851ec,0x3fe0a3d70a3d70a4,param_9);
    param_3 = param_3 * 2578.51;
    uVar4 = 0x3fe0a3d70a3d70a4;
    break;
  case 0x6c:
    FUN_1453ce740(param_1,0x407338f5c28f5c29,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x4072c00000000000,0x400028f5c28f5c29,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 661.58,0x401f8f5c28f5c28f,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 830.2,0x4011eb851eb851ec,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3977.22,0x4022e66666666666,0x4032000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 6238.46,&DAT_4030000000000000,0,param_9);
    param_3 = param_3 * 6645.88;
    uVar4 = 0x3fd0000000000000;
    break;
  case 0x6d:
    FUN_1453ce740(param_1,0x4082a48f5c28f5c3,0x3fe947ae147ae148);
    FUN_1453ce740(param_1,param_3 * 596.57,0x3fe947ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 782.94,0x4018000000000000,0x401e000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1131.28,0x3ff5eb851eb851ec,0x402647ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 2428.81,0x401f333333333333,0x402e000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 2888.78,0x401c99999999999a,0x402e6b851eb851ec,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 1271.4;
    break;
  case 0x6e:
    FUN_1453ce740(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x4069000000000000,0x401599999999999a,0xc0300f5c28f5c28f,param_5);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x4007d70a3d70a3d7,0x4026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 2560.0,0x40236b851eb851ec,0x402af0a3d70a3d71,param_7);
    FUN_1453ceac0(param_1,param_3 * 3971.27,&DAT_4030000000000000,0xc02947ae147ae148,param_8);
    FUN_1453ceac0(param_1,0x40c43b799999999a,0x401bcccccccccccd,0xc032000000000000,param_9);
    param_3 = param_3 * 6184.77;
    uVar4 = 0x3fe6b851eb851eb8;
    break;
  case 0x6f:
    FUN_1453ce740(param_1,0x4095566666666666,0x3fea8f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 437.71,0x3ff91eb851eb851f,0,param_5);
    FUN_1453ceac0(param_1,param_3 * 1730.44,0x4020eb851eb851ec,0x4019b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 1506.52,&DAT_4030000000000000,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 2640.6,0x4023851eb851eb85,0x4030b5c28f5c28f6,param_8);
    FUN_1453ce8a0(param_1,0x40992b70a3d70a3d,0x3ff69fbe76c8b439,param_9);
    uVar4 = 0x3fe70a3d70a3d70a;
    param_3 = 1695.11;
    break;
  case 0x70:
    FUN_1453ce6b0(param_1,0x40992e6666666666,param_4);
    FUN_1453ceac0(param_1,0x406095c28f5c28f6,0x3ff1eb851eb851ec,0xc02423d70a3d70a4,param_5);
    FUN_1453ceac0(param_1,param_3 * 346.48,0x4020eb851eb851ec,0x402d23d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 1162.89,0x400347ae147ae148,0x4025dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 2224.84,0x401dae147ae147ae,0x4009ae147ae147ae,param_8);
    FUN_1453ceac0(param_1,param_3 * 4127.02,0x40071eb851eb851f,0x401fb851eb851eb8,param_9);
    uVar4 = 0x3fe3851eb851eb85;
    param_3 = 2428.54;
    break;
  case 0x71:
    FUN_1453ce740(param_1,param_3 * 902.59,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 353.03,0x40195c28f5c28f5c,0x4030ee147ae147ae,param_5);
    FUN_1453ceac0(param_1,0x408a1a0000000000,0x3ff3333333333333,0xc026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 3035.32,0x40208f5c28f5c28f,0x4025dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,0x40b8e66b851eb852,&DAT_4030000000000000,0xc020b851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 4605.28,&DAT_4030000000000000,0x401c47ae147ae148,param_9);
    param_3 = param_3 * 1957.3;
    uVar4 = 0x3fe47ae147ae147b;
    break;
  case 0x72:
    FUN_1453ce6b0(param_1,0x406dfccccccccccd,param_4);
    FUN_1453ceac0(param_1,0x40565147ae147ae1,0x40068f5c28f5c28f,0xc028dc28f5c28f5c,param_5);
    FUN_1453ceac0(param_1,param_3 * 344.39,0x4016cccccccccccd,0x4032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 446.35,0x401251eb851eb852,0x402b6b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 1433.84,0x4011eb851eb851ec,0x402347ae147ae148,param_8);
    FUN_1453ce8a0(param_1,param_3 * 4017.43,0x3fe851eb851eb852,param_9);
    uVar4 = 0x3fe851eb851eb852;
    param_3 = 4017.43;
    break;
  case 0x73:
    FUN_1453ce740(param_1,0x40623eb851eb851f,0x3fe6b851eb851eb8);
    FUN_1453ceac0(param_1,param_3 * 231.71,0x401451eb851eb852,0xc0286b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 367.01,0x402a5c28f5c28f5c,0x402347ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 1957.62,0x40214ccccccccccd,0xc020b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 2442.16,0x401a99999999999a,0x4018d70a3d70a3d7,param_8);
    FUN_1453ce8a0(param_1,param_3 * 3237.88,0x3ff2666666666666,param_9);
    uVar4 = 0x3ff2666666666666;
    param_3 = 3237.88;
    break;
  case 0x74:
    FUN_1453ceac0(param_1,0x408f400000000000,&DAT_4030000000000000,0,param_4);
    FUN_1453ceac0(param_1,param_3 * 321.23,0x4007333333333333,0x40315c28f5c28f5c,param_5);
    FUN_1453ceac0(param_1,param_3 * 471.51,0x40262e147ae147ae,0x4030ee147ae147ae,param_6);
    FUN_1453ceac0(param_1,0x405e000000000000,0x3fd999999999999a,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4715.07,0x401ac28f5c28f5c3,0x402647ae147ae148,param_8);
    uVar4 = 0x402e000000000000;
    puVar2 = (undefined1 *)0x401128f5c28f5c29;
    param_3 = param_3 * 10857.11;
LAB_1453d3065:
    FUN_1453ceac0(param_1,param_3,puVar2,uVar4,param_9);
    FUN_1453ce810(param_1,0x40a4633333333333,param_10);
    return;
  case 0x75:
    FUN_1453ce740(param_1,param_3 * 307.56,0x3ff68f5c28f5c28f);
    FUN_1453ce740(param_1,0x406b247ae147ae14,0x3ff69fbe76c8b439,param_5);
    FUN_1453ceac0(param_1,param_3 * 320.0,0x400147ae147ae148,0x4028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 640.0,0x40227ae147ae147b,0x403191eb851eb852,param_7);
    FUN_1453ceac0(param_1,param_3 * 2800.9,0x40242e147ae147ae,0x4030ee147ae147ae,param_8);
    FUN_1453ce8a0(param_1,0x40a1a8147ae147ae,0x3fe3851eb851eb85,param_9);
    param_3 = param_3 * 2260.04;
    uVar4 = 0x3fe3851eb851eb85;
    break;
  case 0x76:
    FUN_1453ce6b0(param_1,0x4065880000000000,param_4);
    FUN_1453ceac0(param_1,param_3 * 751.4,0x401970a3d70a3d71,0xc02edc28f5c28f5c,param_5);
    FUN_1453ceac0(param_1,param_3 * 1206.87,0x401970a3d70a3d71,0xc01b70a3d70a3d71,param_6);
    FUN_1453ceac0(param_1,param_3 * 2295.44,&DAT_4030000000000000,0xc012000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4684.51,0x4026000000000000,0x402047ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 7259.95,&DAT_4030000000000000,0x4019b851eb851eb8,param_9);
    FUN_1453ce810(param_1,0x40b828c51eb851ec,param_10);
    return;
  case 0x77:
    FUN_1453ce6b0(param_1,0x406968f5c28f5c29,param_4);
    FUN_1453ceac0(param_1,param_3 * 163.2,0x4014666666666666,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 642.47,0x40003d70a3d70a3d,0x402947ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 2045.81,&DAT_4030000000000000,0xc009ae147ae147ae,param_7);
    FUN_1453ceac0(param_1,param_3 * 4411.6,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x40a78a75c28f5c29,0x3fe4cccccccccccd,param_9);
LAB_1453d344c:
    uVar4 = 0x3fe4cccccccccccd;
    param_3 = 3013.23;
    break;
  case 0x78:
    FUN_1453ce6b0(param_1,0x4056333333333333,param_4);
    FUN_1453cecd0(param_1,param_3 * 190.82,0x3ff0000000000000,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 80.0,0x3ff87ae147ae147b,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 4059.62,&DAT_4030000000000000,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5645.98,0x401128f5c28f5c29,0xc02a23d70a3d70a4,param_8);
    FUN_1453ce8a0(param_1,0x40a1a8147ae147ae,0x3fdd70a3d70a3d71,param_9);
    uVar4 = 0x3fdd70a3d70a3d71;
    param_3 = 2260.04;
    break;
  case 0x79:
    FUN_1453ce740(param_1,0x40581e147ae147ae,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 471.51,0x40071eb851eb851f,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 4031.54,0x401a99999999999a,0x402edc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 7419.76,&DAT_4030000000000000,0x401728f5c28f5c29,param_7);
    FUN_1453ceac0(param_1,param_3 * 10040.12,0x4025147ae147ae14,0x4023b851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 16966.86,&DAT_4030000000000000,0xc032000000000000,param_9);
    uVar4 = 0x3fd0000000000000;
    param_3 = 19542.95;
    break;
  case 0x7a:
    FUN_1453ce740(param_1,0x4086003d70a3d70a,0x3fe851eb851eb852);
    FUN_1453ce740(param_1,param_3 * 704.03,0x3fe851eb851eb852,param_5);
    FUN_1453ceac0(param_1,0x4093d80000000000,0x4021000000000000,0xc02e666666666666,param_6);
    FUN_1453ceac0(param_1,param_3 * 8325.11,&DAT_4030000000000000,0x402347ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 10650.3,&DAT_4030000000000000,0x402947ae147ae148,param_8);
    FUN_1453ceac0(param_1,0x40cceb55c28f5c29,&DAT_4030000000000000,0xc032000000000000,param_9);
    param_3 = param_3 * 4017.43;
    uVar4 = 0x3fd70a3d70a3d70a;
    break;
  case 0x7b:
    FUN_1453ce740(param_1,0x407338f5c28f5c29,0x3ff0000000000000);
    FUN_1453ceac0(param_1,param_3 * 4000.0,0x400c3d70a3d70a3d,0x4026b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 882.32,0x3ff30a3d70a3d70a,0xc027947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 3577.94,0x401847ae147ae148,0x4027947ae147ae14,param_7);
    FUN_1453ceac0(param_1,param_3 * 5059.64,0x402351eb851eb852,0x403123d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 6225.99,0x402cb33333333333,0xc02edc28f5c28f5c,param_9);
    uVar4 = 0x3fe6b851eb851eb8;
    param_3 = 11813.7;
    break;
  case 0x7c:
    FUN_1453ce6b0(param_1,0x4071b1c28f5c28f6,param_4);
    FUN_1453ceac0(param_1,param_3 * 4000.0,&DAT_4030000000000000,0x4026b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 1663.82,0x402370a3d70a3d71,0x402723d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 631.84,0x401d0a3d70a3d70a,0x4025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 315.13,0x4022e66666666666,0x4030b5c28f5c28f6,param_8);
    FUN_1453ceac0(param_1,param_3 * 9210.55,0x402923d70a3d70a4,0x401b70a3d70a3d71,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 3237.88;
    break;
  case 0x7d:
    FUN_1453ce740(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 536.97,0x40117ae147ae147b,0x402e6b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 2180.13,&DAT_4030000000000000,0xc02a23d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 3396.36,0x402675c28f5c28f6,0x4028dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 7937.41,&DAT_4030000000000000,0x402b000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 10480.9,&DAT_4030000000000000,0x40256b851eb851ec,param_9);
    uVar4 = 0x3fe3d70a3d70a3d7;
    param_3 = 2260.04;
    break;
  case 0x7e:
    FUN_1453ce6b0(param_1,0x403e428f5c28f5c3,param_4);
    FUN_1453ceac0(param_1,param_3 * 392.35,0x401fae147ae147ae,0xc02d947ae147ae14,param_5);
    FUN_1453ceac0(param_1,param_3 * 716.92,0x400a51eb851eb852,0xc027947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 3843.05,0x4022147ae147ae14,0x4025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401570a3d70a3d71,param_8);
    FUN_1453ceac0(param_1,param_3 * 9283.18,&DAT_4030000000000000,0xc02e000000000000,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 8860.73;
    break;
  case 0x7f:
    FUN_1453ce6b0(param_1,0x408c34b851eb851f,param_4);
    FUN_1453ceac0(param_1,param_3 * 392.2,0x402c0f5c28f5c28f,0x402347ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 996.16,0x4022e66666666666,0x4024947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 3949.85,&DAT_4030000000000000,0x40226b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 10040.12,&DAT_4030000000000000,0x402647ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 6866.64,&DAT_4030000000000000,0x4023b851eb851eb8,param_9);
    goto LAB_1453d7171;
  case 0x80:
    FUN_1453ce6b0(param_1,0x4071b1c28f5c28f6,param_4);
    FUN_1453ceac0(param_1,param_3 * 304.1,0x400d5c28f5c28f5c,0x402e000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1174.24,0x4011eb851eb851ec,0xc02edc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 2858.28,0x40227ae147ae147b,0x40226b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 6148.1,&DAT_4030000000000000,0x4028000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 10656.15,&DAT_4030000000000000,0xc026b851eb851eb8,param_9);
    FUN_1453ce810(param_1,0x40b67ba666666666,param_10);
    return;
  case 0x81:
    FUN_1453ce6b0(param_1,0x403bd9999999999a,param_4);
    FUN_1453ceac0(param_1,param_3 * 446.35,0x40138f5c28f5c28f,0x402947ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 822.23,0x401970a3d70a3d71,0xc029cccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 5667.75,0x401470a3d70a3d71,0x4031ca3d70a3d70a,param_7);
    FUN_1453ceac0(param_1,param_3 * 8554.38,&DAT_4030000000000000,0x402423d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 10952.29,&DAT_4030000000000000,0x40226b851eb851ec,param_9);
    uVar4 = 0x3fe147ae147ae148;
    param_3 = 17544.72;
    break;
  case 0x82:
    FUN_1453ce740(param_1,param_3 * 63.76,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x408a68a3d70a3d71,0x4014e147ae147ae1,0x4018d70a3d70a3d7,param_5);
    FUN_1453ceac0(param_1,0x4079000000000000,0x3ff028f5c28f5c29,0xc0148f5c28f5c28f,param_6);
    FUN_1453ceac0(param_1,0x40b0b328f5c28f5c,0x4000000000000000,0x4018000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 8617.74,0x4025b33333333333,0x402423d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,0x40c666799999999a,0x401a333333333333,0x402647ae147ae148,param_9);
    param_3 = param_3 * 16925.12;
    goto LAB_1453d0080;
  case 0x83:
    FUN_1453ce6b0(param_1,0x405eeb851eb851ec,param_4);
    FUN_1453ceac0(param_1,param_3 * 312.55,0x4003c28f5c28f5c3,0xc0256b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 892.71,&DAT_4030000000000000,0x4026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 1440.41,0x4022e66666666666,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4684.51,0x4022147ae147ae14,0x402e000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 6506.01,&DAT_4030000000000000,0x40148f5c28f5c28f,param_9);
    FUN_1453ce810(param_1,0x40b828c51eb851ec,param_10);
    return;
  case 0x84:
    FUN_1453ce6b0(param_1,param_3 * 134.36,param_4);
    FUN_1453cecd0(param_1,param_3 * 1111.87,0x3fc0a3d70a3d70a4,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,0x40a050428f5c28f6,0x4020eb851eb851ec,0x4009ae147ae147ae,param_6);
    FUN_1453ceac0(param_1,0x40b13791eb851eb8,&DAT_4030000000000000,0xc012d70a3d70a3d7,param_7);
    FUN_1453ceac0(param_1,0x40b89c4000000000,0x401dae147ae147ae,0x401128f5c28f5c29,param_8);
    FUN_1453ceac0(param_1,0x40c693b1eb851eb8,&DAT_4030000000000000,0x3ffee147ae147ae1,param_9);
    param_3 = param_3 * 8245.94;
    goto LAB_1453d0080;
  case 0x85:
    FUN_1453ce740(param_1,0x4035bae147ae147b,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 903.95,0x4015c28f5c28f5c3,0x40148f5c28f5c28f,param_5);
    FUN_1453ceac0(param_1,param_3 * 823.88,0x40161eb851eb851f,0x4028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 1156.53,0x40258f5c28f5c28f,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3487.68,0x4018d70a3d70a3d7,0x402e6b851eb851ec,param_8);
    FUN_1453ceac0(param_1,param_3 * 5579.42,0x4023428f5c28f5c3,0x401ed70a3d70a3d7,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 8245.94;
    break;
  case 0x86:
    FUN_1453ce6b0(param_1,0x4035bae147ae147b,param_4);
    FUN_1453ceac0(param_1,param_3 * 267.2,0x4020eb851eb851ec,0x402f47ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 414.36,0x401651eb851eb852,0xc022000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 2618.24,&DAT_4030000000000000,0x402e000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 6655.3,0x402cae147ae147ae,0x401a8f5c28f5c28f,param_8);
    FUN_1453ceac0(param_1,param_3 * 8550.32,&DAT_4030000000000000,0xc02e000000000000,param_9);
    uVar4 = 0x3fec7ae147ae147b;
    param_3 = 11813.7;
    break;
  case 0x87:
    FUN_1453ce6b0(param_1,0x405a333333333333,param_4);
    FUN_1453ceac0(param_1,param_3 * 560.1,0x40100a3d70a3d70a,0x402647ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 1771.45,0x4009c28f5c28f5c3,0x402b6b851eb851ec,param_6);
    FUN_1453ceac0(param_1,param_3 * 5339.89,&DAT_4030000000000000,0x4025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 7426.54,&DAT_4030000000000000,0x401ed70a3d70a3d7,param_8);
    FUN_1453ceac0(param_1,param_3 * 9806.32,&DAT_4030000000000000,0x401728f5c28f5c29,param_9);
    FUN_1453ce810(param_1,0x40a2f9147ae147ae,param_10);
    return;
  case 0x88:
    FUN_1453ce6b0(param_1,0x4060cb851eb851ec,param_4);
    FUN_1453cecd0(param_1,0x40727deb851eb852,0x3fc71eb851eb851f,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 295.9,0x40028f5c28f5c28f,0xc02bdc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 1215.28,0x3ff5eb851eb851ec,0x4023b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 5802.88,&DAT_4030000000000000,0x4019b851eb851eb8,param_8);
    FUN_1453ce8a0(param_1,0x40af62dc28f5c28f,0x3fdd70a3d70a3d71,param_9);
    param_3 = param_3 * 4017.43;
LAB_1453d0080:
    FUN_1453ce810(param_1,param_3,param_10);
    return;
  case 0x89:
    FUN_1453ce6b0(param_1,0x4056333333333333,param_4);
    FUN_1453ceac0(param_1,param_3 * 1663.82,&DAT_4030000000000000,0x4020b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 2394.86,&DAT_4030000000000000,0xc026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 5224.07,&DAT_4030000000000000,0x4018000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 8321.83,&DAT_4030000000000000,0xc01ed70a3d70a3d7,param_8);
    FUN_1453ceac0(param_1,param_3 * 14406.3,&DAT_4030000000000000,0xc0148f5c28f5c28f,param_9);
    FUN_1453ce810(param_1,0x40c14e5d70a3d70a,param_10);
    return;
  case 0x8a:
    FUN_1453ce6b0(param_1,0x406968f5c28f5c29,param_4);
    FUN_1453ceac0(param_1,param_3 * 625.25,0x4000a3d70a3d70a4,0xc026b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 2088.13,0x401651eb851eb852,0x401728f5c28f5c29,param_6);
    FUN_1453ceac0(param_1,param_3 * 3638.03,0x401d0a3d70a3d70a,0x402047ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 6475.34,&DAT_4030000000000000,0xc0315c28f5c28f5c,param_8);
    FUN_1453ceac0(param_1,param_3 * 11246.83,&DAT_4030000000000000,0xc0226b851eb851ec,param_9);
    uVar4 = 0x3fe0000000000000;
    param_3 = 8245.94;
    break;
  case 0x8b:
    FUN_1453ce6b0(param_1,0x40546f5c28f5c28f,param_4);
    FUN_1453ceac0(param_1,param_3 * 3463.2,0x4022e66666666666,0x4019b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 8000.0,&DAT_4030000000000000,0xc01a8f5c28f5c28f,param_6);
    FUN_1453ceac0(param_1,0x4072f87ae147ae14,0x3fe947ae147ae148,0xc025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1856.64,0x40173d70a3d70a3d,0x402b6b851eb851ec,param_8);
    FUN_1453ceac0(param_1,param_3 * 4668.83,0x401bb851eb851eb8,0x4018d70a3d70a3d7,param_9);
    FUN_1453ce810(param_1,0x40bbe56147ae147b,param_10);
    return;
  case 0x8c:
    FUN_1453ce740(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,0x405cec28f5c28f5c,0x3ff1eb851eb851ec,0xc0011eb851eb851f,param_5);
    FUN_1453ceac0(param_1,param_3 * 1657.43,0x3ff1eb851eb851ec,0xc025dc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 3119.67,0x400ae147ae147ae1,0x402647ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 7722.79,&DAT_4030000000000000,0x402b000000000000,param_8);
    uVar3 = 0x400ee147ae147ae1;
    uVar4 = 0x3ff8f5c28f5c28f6;
    param_3 = param_3 * 5000.0;
    goto LAB_1453d7e4a;
  case 0x8d:
    FUN_1453ce6b0(param_1,param_3 * 1483.51,param_4);
    FUN_1453ceac0(param_1,param_3 * 2753.67,0x40161eb851eb851f,0x40286147ae147ae1,param_5);
    FUN_1453ceac0(param_1,param_3 * 420.92,0x3fe6147ae147ae14,0xc02a947ae147ae14,param_6);
    FUN_1453ceac0(param_1,0x40b645d1eb851eb8,0x402b9eb851eb851f,0x403123d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 4587.58,0x40117ae147ae147b,0xc02bdc28f5c28f5c,param_8);
    FUN_1453ceac0(param_1,0x40c009f99999999a,&DAT_4030000000000000,0x4029b851eb851eb8,param_9);
    param_3 = param_3 * 3237.88;
    uVar4 = 0x3ff68f5c28f5c28f;
    break;
  case 0x8e:
    FUN_1453ce740(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 2571.77,0x402370a3d70a3d71,0x4021947ae147ae14,param_5);
    FUN_1453ceac0(param_1,param_3 * 2442.16,0x4000000000000000,0x402a947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 3433.32,0x402923d70a3d70a4,0xc02b000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4587.58,0x40148f5c28f5c28f,0x4009ae147ae147ae,param_8);
    FUN_1453ceac0(param_1,param_3 * 8530.07,0x4029b33333333333,0x40286b851eb851ec,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 13640.94;
    break;
  case 0x8f:
    FUN_1453ce740(param_1,0x4034000000000000,0x3ff68f5c28f5c28f);
    FUN_1453ceac0(param_1,param_3 * 2242.38,0x40278a3d70a3d70a,0x40286b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 2725.17,0x4000000000000000,0x4020b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 4903.16,0x40100a3d70a3d70a,0xc02b000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4980.79,&DAT_4030000000000000,0x4029b851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 7856.66,0x402a428f5c28f5c3,0x402c47ae147ae148,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 10231.23;
    break;
  case 0x90:
    FUN_1453ce6b0(param_1,0x405eeb851eb851ec,param_4);
    FUN_1453ceac0(param_1,param_3 * 378.66,0x4021ae147ae147ae,0x4030800000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1111.6,0x40043d70a3d70a3d,0xc030b5c28f5c28f6,param_6);
    FUN_1453ceac0(param_1,param_3 * 3278.14,&DAT_4030000000000000,0x403011eb851eb852,param_7);
    FUN_1453ceac0(param_1,param_3 * 4084.51,0x4022147ae147ae14,0xc023b851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 7461.71,&DAT_4030000000000000,0x4028000000000000,param_9);
    FUN_1453ce810(param_1,0x40bdf9cf5c28f5c3,param_10);
    return;
  case 0x91:
    FUN_1453ce740(param_1,0x405a333333333333,0x3ff23d70a3d70a3d);
    FUN_1453ceac0(param_1,param_3 * 711.31,0x401a000000000000,0xc031ca3d70a3d70a,param_5);
    FUN_1453ceac0(param_1,param_3 * 2088.13,0x40227ae147ae147b,0xc02d23d70a3d70a4,param_6);
    FUN_1453ceac0(param_1,param_3 * 7023.93,0x401dae147ae147ae,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 10605.93,&DAT_4030000000000000,0x402d947ae147ae14,param_8);
    FUN_1453ceac0(param_1,param_3 * 14793.73,&DAT_4030000000000000,0x402cb851eb851eb8,param_9);
    FUN_1453ce810(param_1,0x40a1a8147ae147ae,param_10);
    return;
  case 0x92:
    FUN_1453ce740(param_1,0x408c34b851eb851f,0x3fe851eb851eb852);
    FUN_1453ceac0(param_1,param_3 * 426.53,0x401547ae147ae148,0x4027947ae147ae14,param_5);
    FUN_1453ceac0(param_1,param_3 * 569.05,0x402675c28f5c28f6,0x4022000000000000,param_6);
    FUN_1453ceac0(param_1,0x4096037ae147ae14,0x3ff4000000000000,0xc02e6b851eb851ec,param_7);
    FUN_1453ceac0(param_1,param_3 * 1757.59,0x4019eb851eb851ec,0x4022000000000000,param_8);
    FUN_1453ceac0(param_1,param_3 * 4070.84,0x401bcccccccccccd,0x402a947ae147ae14,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 4638.81;
    break;
  case 0x93:
    FUN_1453ce740(param_1,0x4058cae147ae147b,0x3fe0f5c28f5c28f6);
    FUN_1453ceac0(param_1,param_3 * 130.72,0x3ffc7ae147ae147b,0x4019b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 1839.72,0x40117ae147ae147b,0x4022000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 9376.45,0x4028947ae147ae14,0x402723d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 12163.89,0x4017c28f5c28f5c3,0x402fb851eb851eb8,param_8);
    FUN_1453ceac0(param_1,param_3 * 5825.27,0x4023bd70a3d70a3d,0x40304a3d70a3d70a,param_9);
    FUN_1453ce810(param_1,0x409a7c70a3d70a3d,param_10);
    return;
  case 0x94:
    FUN_1453ceac0(param_1,param_3 * 368.42,&DAT_4030000000000000,0xc01d28f5c28f5c29,param_4);
    FUN_1453ceac0(param_1,param_3 * 144.62,0x3fee147ae147ae14,0x402947ae147ae148,param_5);
    FUN_1453ceac0(param_1,param_3 * 1373.33,0x402299999999999a,0xc02bdc28f5c28f5c,param_6);
    FUN_1453ceac0(param_1,param_3 * 2275.85,0x40138f5c28f5c28f,0x402047ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 6034.36,&DAT_4030000000000000,0xc01e000000000000,param_8);
    uVar3 = 0x402c47ae147ae148;
    uVar4 = 0x4014e147ae147ae1;
    param_3 = param_3 * 9518.56;
LAB_1453d7e4a:
    FUN_1453ceac0(param_1,param_3,uVar4,uVar3,param_9);
    FUN_1453ce810(param_1,0x40b21ecf5c28f5c3,param_10);
    return;
  case 0x95:
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
    FUN_1453ceac0(param_1,param_3 * 108.18,0x4016cccccccccccd,0x4025000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 1502.79,0x4009333333333333,0xc030800000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 3443.95,&DAT_4030000000000000,0xc028dc28f5c28f5c,param_7);
    FUN_1453ceac0(param_1,param_3 * 8287.16,&DAT_4030000000000000,0xc02a947ae147ae14,param_8);
    FUN_1453ceac0(param_1,param_3 * 16061.71,&DAT_4030000000000000,0xc032000000000000,param_9);
    uVar4 = 0x3fe147ae147ae148;
    param_3 = 10231.23;
    break;
  case 0x96:
    FUN_1453ce740(param_1,0x404511eb851eb852,0x3ff2e147ae147ae1);
    FUN_1453cecd0(param_1,param_3 * 446.35,0x3fd38f5c28f5c28f,0x4026b851eb851eb8,param_5);
    FUN_1453ceac0(param_1,param_3 * 969.22,0x40280f5c28f5c28f,0x402047ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 1792.3,&DAT_4030000000000000,0xc02c47ae147ae148,param_7);
    FUN_1453ceac0(param_1,param_3 * 7879.06,&DAT_4030000000000000,0x4018d70a3d70a3d7,param_8);
    uVar4 = 0x401728f5c28f5c29;
    puVar2 = &DAT_4030000000000000;
    param_3 = param_3 * 13269.0;
LAB_1453d4215:
    FUN_1453ceac0(param_1,param_3,puVar2,uVar4,param_9);
    FUN_1453ce810(param_1,0x40b378ab851eb852,param_10);
    return;
  case 0x97:
    FUN_1453ce740(param_1,0x40546f5c28f5c28f,0x3fd0000000000000);
    FUN_1453cecd0(param_1,param_3 * 446.35,0x3fd38f5c28f5c28f,0x402423d70a3d70a4,param_5);
    FUN_1453ceac0(param_1,param_3 * 969.22,0x4015d70a3d70a3d7,0x402047ae147ae148,param_6);
    FUN_1453ceac0(param_1,param_3 * 8100.0,&DAT_4030000000000000,0xc025000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 12200.0,&DAT_4030000000000000,0xc01a666666666666,param_8);
    FUN_1453ced60(param_1,param_3 * 4082.57,0x3ff0000000000000,0xc018d70a3d70a3d7,param_9);
    uVar4 = 0x3fef5c28f5c28f5c;
    param_3 = 13640.94;
    break;
  case 0x98:
    FUN_1453ce6b0(param_1,0x4060066666666666,param_4);
    FUN_1453ceac0(param_1,param_3 * 300.0,0x4018000000000000,0x4020000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 933.0,0x401999999999999a,0x402ccccccccccccd,param_6);
    FUN_1453ceac0(param_1,param_3 * 1230.0,0x4016cccccccccccd,0xc033000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 3300.0,0x4028000000000000,0x4018cccccccccccd,param_8);
    FUN_1453ceac0(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_9);
    uVar4 = 0x3ff8000000000000;
    param_3 = 4410.0;
    break;
  case 0x99:
    FUN_1453ce6b0(param_1,0x40623eb851eb851f,param_4);
    FUN_1453ceac0(param_1,param_3 * 131.06,0x4017d70a3d70a3d7,0xc032000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 131.03,0x3fee147ae147ae14,0xc032000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 923.91,0x40028f5c28f5c28f,0x4032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 4922.83,0x40258f5c28f5c28f,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x40a4633333333333,0x3febd70a3d70a3d7,param_9);
    uVar4 = 0x3febd70a3d70a3d7;
    param_3 = 2609.6;
    break;
  case 0x9a:
    FUN_1453ce6b0(param_1,0x407d1547ae147ae1,param_4);
    FUN_1453cecd0(param_1,param_3 * 163.2,0x3ff0000000000000,0xc02e000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 80.0,0x400799999999999a,0xc031ca3d70a3d70a,param_6);
    FUN_1453ceac0(param_1,param_3 * 3172.07,&DAT_4030000000000000,0x4023b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 4411.6,&DAT_4030000000000000,0xc032000000000000,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2103.23,0x3fe051eb851eb852,param_9);
    uVar4 = 0x3fe051eb851eb852;
    param_3 = 2103.23;
    break;
  case 0x9b:
    FUN_1453ce740(param_1,0x406dfccccccccccd,0x3ff30a3d70a3d70a);
    FUN_1453cecd0(param_1,param_3 * 177.14,0x4000000000000000,0xc025000000000000,param_5);
    FUN_1453ceac0(param_1,param_3 * 400.0,0x4008f5c28f5c28f6,0x4028000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 2762.78,&DAT_4030000000000000,0x4030ee147ae147ae,param_7);
    FUN_1453ceac0(param_1,param_3 * 1904.42,0x402199999999999a,0x401d28f5c28f5c29,param_8);
    FUN_1453ce8a0(param_1,0x40a1a8147ae147ae,0x3fe5c28f5c28f5c3,param_9);
    param_3 = 2260.04;
    goto LAB_1453d9621;
  case 0x9c:
    FUN_1453ce740(param_1,param_3 * 307.56,0x3fd0000000000000);
    FUN_1453ce740(param_1,param_3 * 648.07,0x3ff68f5c28f5c28f,param_5);
    FUN_1453ceac0(param_1,param_3 * 263.29,0x4015c28f5c28f5c3,0x402e6b851eb851ec,param_6);
    FUN_1453ceac0(param_1,param_3 * 482.75,0x400e147ae147ae14,0xc030ee147ae147ae,param_7);
    FUN_1453ceac0(param_1,param_3 * 1803.07,0x40208f5c28f5c28f,0x402047ae147ae148,param_8);
    FUN_1453ce8a0(param_1,0x40a867147ae147ae,0x3fd0000000000000,param_9);
    param_3 = param_3 * 1957.3;
    uVar4 = 0x3ff30a3d70a3d70a;
    break;
  case 0x9d:
    FUN_1453ce740(param_1,0x4074e1c28f5c28f6,0x3fe4cccccccccccd);
    FUN_1453ce740(param_1,param_3 * 334.11,0x3fe4cccccccccccd,param_5);
    FUN_1453ceac0(param_1,param_3 * 338.03,0x4001ae147ae147ae,0x4018000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 3584.6,0x4002e147ae147ae1,0x402a947ae147ae14,param_7);
    FUN_1453ce8a0(param_1,param_3 * 2524.99,0x3ff69fbe76c8b439,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2804.16,0x3fd6666666666666,param_9);
LAB_1453d7171:
    uVar4 = 0x3fd6666666666666;
    param_3 = 2804.16;
    break;
  case 0x9e:
    FUN_1453ce740(param_1,0x408c34b851eb851f,0x3fd3d70a3d70a3d7);
    FUN_1453ce740(param_1,param_3 * 1035.89,0x3ff69fbe76c8b439,param_5);
    FUN_1453ceac0(param_1,param_3 * 385.99,0x401bc28f5c28f5c3,0x4031ca3d70a3d70a,param_6);
    FUN_1453ceac0(param_1,param_3 * 1352.12,0x40051eb851eb851f,0x4023b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 3269.24,0x401151eb851eb852,0x4032000000000000,param_8);
    FUN_1453ce8a0(param_1,0x408bf60000000000,0x3ff69fbe76c8b439,param_9);
    param_3 = param_3 * 2804.16;
    uVar4 = 0x3fd0000000000000;
    break;
  case 0x9f:
    FUN_1453ce740(param_1,0x407338f5c28f5c29,0x3fec7ae147ae147b);
    FUN_1453ceac0(param_1,param_3 * 142.26,0x40113d70a3d70a3d,0x4030b5c28f5c28f6,param_5);
    FUN_1453ceac0(param_1,param_3 * 458.76,0x4020a8f5c28f5c29,0xc02b000000000000,param_6);
    FUN_1453ceac0(param_1,param_3 * 307.68,0x4021c28f5c28f5c3,0x402b000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 1149.19,0x4017d70a3d70a3d7,0x401047ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 4442.41,0x4023bd70a3d70a3d,0x401a8f5c28f5c28f,param_9);
    FUN_1453ce810(param_1,0x4098a60000000000,param_10);
    return;
  case 0xa0:
    FUN_1453ce740(param_1,0x40515147ae147ae1,0x3fdc28f5c28f5c29);
    FUN_1453ceac0(param_1,param_3 * 172.35,0x4022147ae147ae14,0x40256b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 1856.64,0x401a333333333333,0x4021947ae147ae14,param_6);
    FUN_1453ceac0(param_1,param_3 * 3831.19,0x40141eb851eb851f,0x4020b851eb851eb8,param_7);
    FUN_1453ceac0(param_1,param_3 * 5712.44,0x4000000000000000,0xc01d28f5c28f5c29,param_8);
    FUN_1453ceac0(param_1,param_3 * 10738.72,&DAT_4030000000000000,0x402b000000000000,param_9);
    uVar4 = 0x3febd70a3d70a3d7;
    param_3 = 7673.81;
    break;
  case 0xa1:
    FUN_1453ce740(param_1,0x40581e147ae147ae,0x3fe47ae147ae147b);
    FUN_1453ceac0(param_1,param_3 * 84.51,0x4000000000000000,0x401ed70a3d70a3d7,param_5);
    FUN_1453ceac0(param_1,param_3 * 201.58,0x4000000000000000,0xc002e147ae147ae1,param_6);
    FUN_1453ceac0(param_1,param_3 * 464.16,0x4000000000000000,0x401e000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5407.7,0x4021cccccccccccd,0x402123d70a3d70a4,param_8);
    FUN_1453ceac0(param_1,param_3 * 1211.53,0x40227ae147ae147b,0x40148f5c28f5c28f,param_9);
    uVar4 = 0x3ff68f5c28f5c28f;
    param_3 = 7141.38;
    break;
  case 0xa2:
    FUN_1453ce740(param_1,0x4068b7ae147ae148,0x3fdc28f5c28f5c29);
    FUN_1453ceac0(param_1,param_3 * 368.42,0x4020333333333333,0x402b6b851eb851ec,param_5);
    FUN_1453ceac0(param_1,param_3 * 3922.53,&DAT_4030000000000000,0x403011eb851eb852,param_6);
    FUN_1453ceac0(param_1,param_3 * 5640.82,0x40260a3d70a3d70a,0x402d23d70a3d70a4,param_7);
    FUN_1453ceac0(param_1,param_3 * 5645.98,0x4027051eb851eb85,0x402d23d70a3d70a4,param_8);
    FUN_1453ce8a0(param_1,param_3 * 2260.04,0x3fe47ae147ae147b,param_9);
    uVar4 = 0x3fe47ae147ae147b;
    param_3 = 2260.04;
    break;
  case 0xa3:
    FUN_1453ce6b0(param_1,0x4074e1c28f5c28f6,param_4);
    uVar4 = 0x4032000000000000;
LAB_1453d9544:
    FUN_1453ceac0(param_1,param_3 * 145.07,0x3ff5eb851eb851ec,uVar4,param_5);
    FUN_1453ceac0(param_1,param_3 * 719.63,0x40227ae147ae147b,0x4026b851eb851eb8,param_6);
    FUN_1453ceac0(param_1,param_3 * 556.99,0x3feeb851eb851eb8,0xc032000000000000,param_7);
    FUN_1453ceac0(param_1,param_3 * 5183.97,0x3fd999999999999a,0xc02947ae147ae148,param_8);
    FUN_1453ceac0(param_1,param_3 * 4275.16,0x4020333333333333,0x4032000000000000,param_9);
    param_3 = 6807.11;
LAB_1453d9621:
    uVar4 = 0x3fe5c28f5c28f5c3;
    break;
  default:
    goto switchD_1453cf699_default;
  }
  FUN_1453ce8a0(param_1,param_3,uVar4,param_10);
switchD_1453cf699_default:
  return;
}



// FUNCTION 1453d98f0 FUN_1453d98f0 body=781 status=ok
// SIG undefined FUN_1453d98f0(void)

undefined8 FUN_1453d98f0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0xbfeccccccccccccd;
  default:
    return 0x3ff0000000000000;
  case 2:
    return 0xc01ccccccccccccd;
  case 3:
  case 0x11:
  case 0x52:
  case 0x80:
  case 0x96:
    return 0xc01399999999999a;
  case 4:
  case 8:
  case 0x10:
  case 0x58:
  case 0x8b:
    return 0xc01a666666666666;
  case 5:
    return 0xc021666666666666;
  case 6:
  case 0xc:
  case 0x3d:
  case 0x45:
  case 0x9e:
    return 0xc01c000000000000;
  case 7:
  case 0x2a:
    return 0xc024000000000000;
  case 9:
  case 0x3f:
  case 0x42:
    return 0xbfe999999999999a;
  case 10:
  case 0x1c:
  case 0x5d:
  case 0x8a:
    return 0xc014000000000000;
  case 0xb:
    return 0xc004000000000000;
  case 0xd:
  case 0xe:
  case 0x14:
    return 0xc010000000000000;
  case 0xf:
  case 0x92:
    return 0xbfd999999999999a;
  case 0x12:
  case 0x85:
    return 0xc02699999999999a;
  case 0x13:
  case 0x4a:
    return 0xbff8000000000000;
  case 0x16:
  case 0x27:
    return 0xc026cccccccccccd;
  case 0x17:
  case 0x22:
  case 0x3b:
    return 0xc020666666666666;
  case 0x18:
    return 0xc02b000000000000;
  case 0x19:
    return 0xc021cccccccccccd;
  case 0x1a:
    return 0xc02a333333333333;
  case 0x1b:
  case 0x1d:
  case 0x7c:
  case 0x7e:
    return 0xc01599999999999a;
  case 0x1e:
  case 0x8c:
  case 0x9a:
    return 0xc018000000000000;
  case 0x1f:
  case 0x69:
  case 0x95:
    return 0xc002666666666666;
  case 0x21:
  case 0x35:
    return 0xc022666666666666;
  case 0x23:
    return 0xbffccccccccccccd;
  case 0x25:
    return 0xc022000000000000;
  case 0x26:
    return 0xbff6666666666666;
  case 0x29:
  case 0x87:
  case 0x94:
    return 0xc01e000000000000;
  case 0x2b:
  case 0x41:
  case 0x7d:
    return 0xc011333333333333;
  case 0x2c:
  case 0x88:
    return 0xc020000000000000;
  case 0x2d:
  case 0x48:
    return 0xc014666666666666;
  case 0x2e:
    return 0xc00c000000000000;
  case 0x2f:
  case 0x4e:
  case 0x5a:
    return 0xc01799999999999a;
  case 0x31:
  case 0x89:
    return 0xc004cccccccccccd;
  case 0x33:
    return 0xc00e666666666666;
  case 0x34:
    return 0xbffb333333333333;
  case 0x36:
  case 0x9b:
    return 0xc02799999999999a;
  case 0x37:
    return 0xc0314ccccccccccd;
  case 0x38:
    return 0xc028cccccccccccd;
  case 0x39:
    return 0xc030b33333333333;
  case 0x3a:
  case 0x57:
    return 0xc012000000000000;
  case 0x3c:
    return 0xc02899999999999a;
  case 0x3e:
  case 0x74:
  case 0xa1:
    return 0xc015333333333333;
  case 0x44:
    return 0xc01199999999999a;
  case 0x47:
  case 0x6a:
  case 0x78:
  case 0x7f:
  case 0x93:
    return 0xc01999999999999a;
  case 0x4f:
  case 0x5b:
    return 0xc00a666666666666;
  case 0x50:
  case 0x5f:
    return 0xc01acccccccccccd;
  case 0x53:
    return 0xc020cccccccccccd;
  case 0x54:
    return 0xc02099999999999a;
  case 0x55:
    return 0xc026333333333333;
  case 0x56:
  case 0x90:
    return 0xc016666666666666;
  case 0x59:
  case 0x6b:
    return 0xc016000000000000;
  case 0x5c:
    return 0xc007333333333333;
  case 0x5e:
    return 0xc030cccccccccccd;
  case 0x60:
    return 0xc013333333333333;
  case 0x61:
    return 0xc022cccccccccccd;
  case 0x62:
    return 0xc021333333333333;
  case 99:
  case 0x81:
    return 0xc032000000000000;
  case 100:
    return 0xc01c666666666666;
  case 0x66:
    return 0xc025cccccccccccd;
  case 0x68:
    return 0xc012cccccccccccd;
  case 0x6c:
    return 0xc031e66666666666;
  case 0x6d:
    return 0xc02999999999999a;
  case 0x6e:
    return 0xc018666666666666;
  case 0x6f:
    return 0xc02a99999999999a;
  case 0x70:
  case 0x7a:
  case 0xa2:
    return 0xc01b99999999999a;
  case 0x72:
    return 0xc027666666666666;
  case 0x73:
    return 0xbfe0000000000000;
  case 0x75:
    return 0xc02b666666666666;
  case 0x76:
  case 0x84:
    return 0xc008000000000000;
  case 0x77:
    return 0xc019333333333333;
  case 0x79:
    return 0xc028000000000000;
  case 0x7b:
    return 0xc032333333333333;
  case 0x82:
    return 0xc02bcccccccccccd;
  case 0x83:
  case 0x86:
    return 0xc01ecccccccccccd;
  case 0x8e:
    return 0xc02d000000000000;
  case 0x8f:
    return 0xc024666666666666;
  case 0x91:
    return 0xc01b333333333333;
  case 0x97:
  case 0xa0:
    return 0xc018cccccccccccd;
  case 0x99:
    return 0xc021000000000000;
  case 0x9c:
    return 0xc008cccccccccccd;
  case 0x9d:
    return 0xc03219999999999a;
  case 0x9f:
    return 0xbff0000000000000;
  }
}



// FUNCTION 1453d9e90 thunk_FUN_1453cede0 body=5 status=ok
// SIG undefined thunk_FUN_1453cede0(void)

float thunk_FUN_1453cede0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10) * 4.0;
  fVar1 = fVar2 * fVar2 - fVar4;
  if (fVar1 < 0.0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (double)fVar4;
    auVar3 = sqrtpd(ZEXT416((uint)fVar1),auVar3);
    return 1.0 / (1.0 - (float)(auVar3._0_8_ * 0.5));
  }
  fVar4 = ABS(-fVar2 - SQRT(fVar1));
  fVar2 = ABS(SQRT(fVar1) - fVar2);
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  return 1.0 / (1.0 - fVar4 * 0.5);
}



// FUNCTION 1453d9ea0 FUN_1453d9ea0 body=70 status=ok
// SIG undefined FUN_1453d9ea0(void)

undefined8 * FUN_1453d9ea0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xcf000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 1453d9ef0 FUN_1453d9ef0 body=3 status=ok
// SIG undefined FUN_1453d9ef0(void)

void FUN_1453d9ef0(void)

{
  return;
}



// FUNCTION 1453d9f00 FUN_1453d9f00 body=378 status=ok
// SIG undefined FUN_1453d9f00(void)

void FUN_1453d9f00(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = param_2 * 4;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = (*(code *)*param_3)(lVar1,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x20),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x28),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x30),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x38),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x40),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x48),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x50),param_2,local_res8);
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_1 + 0x58),param_2,local_res8);
  return;
}



// FUNCTION 1453da080 FUN_1453da080 body=175 status=ok
// SIG undefined FUN_1453da080(void)

void FUN_1453da080(longlong param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x20) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x28) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x38) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x40) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x48),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x48) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x50),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(param_3 + 8))(*(undefined8 *)(param_1 + 0x58),0,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1453da130 FUN_1453da130 body=747 status=ok
// SIG undefined FUN_1453da130(void)

void FUN_1453da130(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_b8 [2];
  longlong *local_b0;
  ulonglong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)local_b8;
  lVar5 = *param_1;
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
    LOCK();
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    UNLOCK();
  }
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + 0x18))) {
    LOCK();
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    UNLOCK();
  }
  puVar9 = (undefined4 *)param_1[4];
  uVar4 = 0;
  iVar10 = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xcf000000;
  *(undefined4 *)(param_1 + 0xc) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  local_a8 = param_3;
  if (param_2 != 0) {
    local_b0 = *(longlong **)(param_2 + 0x20);
    param_1[1] = *(longlong *)(*local_b0 + 0x10);
    lVar5 = *local_b0;
    local_b8[0] = *(uint *)(lVar5 + 0x20);
    uVar8 = (ulonglong)(int)local_b8[0];
    uVar1 = *(undefined4 *)(lVar5 + 0x24);
    uVar2 = *(undefined4 *)(lVar5 + (uVar8 + 2) * 0xc);
    uVar7 = local_b8[0];
    if (param_3 != 0) {
      lVar14 = param_1[5] - (longlong)puVar9;
      lVar15 = param_1[6] - (longlong)puVar9;
      lVar6 = param_1[7] - (longlong)puVar9;
      lVar12 = param_1[8] - (longlong)puVar9;
      lVar5 = param_1[9] - (longlong)puVar9;
      lVar13 = param_1[10] - (longlong)puVar9;
      do {
        iVar10 = (int)param_1[2];
        lVar11 = (longlong)iVar10;
        if (iVar10 < (int)uVar8) {
          local_90 = *(undefined4 *)(*local_b0 + 0x2c + lVar11 * 0xc);
          local_98 = *(undefined8 *)(*local_b0 + 0x24 + lVar11 * 0xc);
          if ((longlong)(short)((uint)local_90 >> 0x10) == uVar4) {
            *(int *)(param_1 + 2) = iVar10 + 1;
            *puVar9 = (undefined4)local_98;
            local_88 = *(undefined8 *)(*local_b0 + 0x30 + lVar11 * 0xc);
            local_80 = *(undefined4 *)(*local_b0 + 0x38 + lVar11 * 0xc);
            *(int *)(param_1 + 2) = iVar10 + 2;
            *(int *)(lVar6 + (longlong)puVar9) = (int)local_88;
            fVar16 = (float)(int)(short)local_80 * 0.00390625;
            fVar20 = (float)(int)(short)((ulonglong)local_98 >> 0x20) * 0.00390625;
            fVar17 = (float)(int)(short)((ulonglong)local_88 >> 0x30) * 0.00390625;
            fVar18 = (float)(int)(short)((ulonglong)local_88 >> 0x20) * 0.00390625;
            fVar19 = (float)(int)(short)local_90 * 0.00390625;
          }
          else {
            *puVar9 = uVar1;
            fVar16 = 0.0;
            *(undefined4 *)(lVar6 + (longlong)puVar9) = uVar2;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar20 = 0.0;
          }
          uVar8 = (ulonglong)local_b8[0];
          *(float *)(lVar14 + (longlong)puVar9) = fVar20;
          *(float *)(lVar15 + (longlong)puVar9) = fVar19;
          *(float *)(lVar12 + (longlong)puVar9) = fVar18;
          *(float *)((longlong)puVar9 + lVar5) = fVar17;
          *(float *)((longlong)puVar9 + lVar13) = fVar16;
          iVar10 = (int)param_1[2];
        }
        else {
          *puVar9 = uVar1;
          *(undefined4 *)(lVar6 + (longlong)puVar9) = uVar2;
          *(undefined4 *)(lVar14 + (longlong)puVar9) = 0;
          *(undefined4 *)(lVar15 + (longlong)puVar9) = 0;
          *(undefined4 *)(lVar12 + (longlong)puVar9) = 0;
          *(undefined4 *)((longlong)puVar9 + lVar5) = 0;
          *(undefined4 *)((longlong)puVar9 + lVar13) = 0;
        }
        uVar7 = (uint)uVar8;
        uVar4 = uVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar4 < param_3);
    }
    if (iVar10 < (int)uVar7) {
      iVar3 = *(int *)(*local_b0 + 8 + ((longlong)iVar10 + 3) * 0xc);
      local_a8 = *(ulonglong *)(*local_b0 + ((longlong)iVar10 + 3) * 0xc);
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0xc) = (undefined4)local_a8;
        *(int *)(param_1 + 2) = iVar10 + 1;
        *(short *)((longlong)param_1 + 100) = (short)((uint)iVar3 >> 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78 ^ (ulonglong)local_b8);
}



// FUNCTION 1453da430 FUN_1453da430 body=2290 status=ok
// SIG undefined FUN_1453da430(void)

void FUN_1453da430(longlong *param_1,float param_2,ulonglong param_3,longlong param_4,code *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  float *pfVar10;
  bool bVar11;
  float *pfVar12;
  char cVar13;
  short sVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
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
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  float fVar38;
  float fVar39;
  undefined1 auStack_138 [32];
  char local_118;
  ulonglong local_110;
  longlong local_108;
  code *local_100;
  void *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  void *local_c0;
  undefined8 local_b8;
  int local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar16 = 0;
  local_100 = param_5;
  lVar18 = *param_1;
  fVar39 = 0.0;
  local_108 = param_4;
  if (lVar18 != 0) {
    plVar9 = *(longlong **)(lVar18 + 0x20);
    lVar15 = *plVar9;
    local_d8 = (ulonglong)*(uint *)(lVar15 + 0x20);
    fVar39 = *(float *)(param_1 + 3);
    if (*(float *)(param_1 + 3) == -2.1474836e+09) {
      *(float *)(param_1 + 3) = param_2;
      lVar15 = *plVar9;
      fVar39 = param_2;
    }
    local_b8 = *(undefined8 *)(lVar15 + 0x24);
    local_b0 = *(int *)(lVar15 + 0x2c);
    *(longlong *)(param_4 + 0x10) = lVar18;
    fVar39 = (param_2 - fVar39) + (float)local_b8;
    *(float *)(param_4 + 0x20) = fVar39;
    if ((0.0 <= fVar39) && (*(char *)((longlong)param_1 + 0x66) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x66) = 1;
    }
    local_e8 = param_1[5];
    bVar11 = false;
    local_e0 = param_1[10];
    local_f0 = param_1[4];
    local_f8 = (void *)param_1[8];
    pfVar10 = (float *)param_1[7];
    local_d0 = param_1[6];
    local_c8 = param_1[9];
    local_c0 = (void *)param_1[0xb];
    local_118 = '\0';
    if (*(float *)(param_1 + 0xc) <= fVar39) {
      sVar14 = *(short *)((longlong)param_1 + 100);
      *(float *)(param_4 + 0x24) = *(float *)(param_1 + 0xc);
      uVar17 = (ulonglong)((uint)((longlong)sVar14 >> 0xc) & 7);
      if (uVar17 != 0) {
        lVar18 = (ulonglong)((int)sVar14 & 0xfff) * 2;
        do {
          (*local_100)(local_108,(ulonglong)*(ushort *)(plVar9[2] + lVar18) + plVar9[3]);
          if ((*param_1 == 0) || (*(float *)(param_1 + 3) == -2.1474836e+09)) goto LAB_1453dad10;
          uVar16 = uVar16 + 1;
          lVar18 = lVar18 + 2;
        } while (uVar16 < uVar17);
      }
      bVar11 = true;
    }
    uVar16 = 0;
    cVar13 = '\0';
    local_110 = 0;
    lVar18 = local_108;
    if (param_3 == 0) goto LAB_1453da647;
    do {
      if (pfVar10[uVar16] <= fVar39 && fVar39 != pfVar10[uVar16]) goto LAB_1453da63c;
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_3);
LAB_1453da64b:
    if (bVar11) {
LAB_1453da654:
      uVar17 = 0;
      iVar7 = (int)param_1[2];
      uVar16 = (ulonglong)iVar7;
      if (uVar16 < local_d8) {
        local_b0 = *(int *)(*plVar9 + 0x2c + uVar16 * 0xc);
        local_b8 = *(undefined8 *)(*plVar9 + 0x24 + uVar16 * 0xc);
        sVar14 = (short)((uint)local_b0 >> 0x10);
        uVar16 = local_110;
        if (local_b0 < 0) {
          bVar11 = false;
          *(float *)(param_1 + 0xc) = (float)local_b8;
          *(short *)((longlong)param_1 + 100) = sVar14;
          *(int *)(param_1 + 2) = iVar7 + 1;
          if ((float)local_b8 <= fVar39) {
            *(float *)(lVar18 + 0x24) = (float)local_b8;
            uVar16 = (ulonglong)((uint)((longlong)sVar14 >> 0xc) & 7);
            if (uVar16 != 0) {
              lVar15 = (ulonglong)((int)sVar14 & 0xfff) * 2;
              do {
                (*local_100)(lVar18,(ulonglong)*(ushort *)(plVar9[2] + lVar15) + plVar9[3]);
                if ((*param_1 == 0) || (*(float *)(param_1 + 3) == -2.1474836e+09))
                goto LAB_1453dad10;
                uVar17 = uVar17 + 1;
                lVar15 = lVar15 + 2;
                lVar18 = local_108;
              } while (uVar17 < uVar16);
            }
            bVar11 = true;
            uVar16 = local_110;
          }
        }
        else {
          lVar15 = (longlong)sVar14;
          *(float *)(local_f0 + lVar15 * 4) = pfVar10[lVar15];
          *(undefined4 *)(local_e8 + lVar15 * 4) = *(undefined4 *)((longlong)local_f8 + lVar15 * 4);
          uVar8 = *(undefined4 *)(local_e0 + lVar15 * 4);
          pfVar10[lVar15] = (float)local_b8;
          *(undefined4 *)(local_d0 + lVar15 * 4) = uVar8;
          local_118 = '\0';
          *(float *)((longlong)local_f8 + lVar15 * 4) =
               (float)(int)(short)((ulonglong)local_b8 >> 0x20) * 0.00390625;
          *(float *)(local_c8 + lVar15 * 4) =
               (float)(int)(short)((ulonglong)local_b8 >> 0x30) * 0.00390625;
          *(int *)(param_1 + 2) = iVar7 + 1;
          *(float *)(local_e0 + lVar15 * 4) = (float)(int)(short)local_b0 * 0.00390625;
        }
        for (; cVar13 = local_118, uVar16 < param_3; uVar16 = uVar16 + 1) {
          if (pfVar10[uVar16] <= fVar39 && fVar39 != pfVar10[uVar16]) goto LAB_1453da63c;
        }
        goto LAB_1453da647;
      }
      if (cVar13 == '\0') goto LAB_1453da805;
      if (param_3 != 0) {
        memcpy(local_c0,local_f8,param_3 << 2);
      }
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      goto LAB_1453dad0a;
    }
LAB_1453da805:
    uVar16 = 0;
    if (param_3 != 0) {
      if (3 < param_3) {
        local_e0 = local_d0 - (longlong)pfVar10;
        local_110 = local_c8 - (longlong)pfVar10;
        local_108 = (longlong)local_c0 - (longlong)pfVar10;
        pfVar12 = pfVar10;
        do {
          pfVar1 = (float *)((local_f0 - (longlong)pfVar10) + (longlong)pfVar12);
          uVar16 = uVar16 + 4;
          pfVar2 = (float *)((local_e8 - (longlong)pfVar10) + (longlong)pfVar12);
          fVar5 = *pfVar2;
          fVar6 = pfVar2[1];
          fVar23 = pfVar2[2];
          fVar28 = pfVar2[3];
          pfVar2 = (float *)(((longlong)local_f8 - (longlong)pfVar10) + (longlong)pfVar12);
          fVar25 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar26 = pfVar2[3];
          pfVar3 = (float *)(local_e0 + (longlong)pfVar12);
          pfVar4 = (float *)((longlong)pfVar12 + local_110);
          fVar27 = pfVar4[1];
          fVar33 = pfVar4[2];
          fVar34 = pfVar4[3];
          auVar21._0_4_ = *pfVar12 - *pfVar1;
          auVar21._4_4_ = pfVar12[1] - pfVar1[1];
          auVar21._8_4_ = pfVar12[2] - pfVar1[2];
          auVar21._12_4_ = pfVar12[3] - pfVar1[3];
          auVar35._0_4_ = fVar39 - *pfVar1;
          auVar35._4_4_ = fVar39 - pfVar1[1];
          auVar35._8_4_ = fVar39 - pfVar1[2];
          auVar35._12_4_ = fVar39 - pfVar1[3];
          auVar35 = divps(auVar35,auVar21);
          fVar24 = *pfVar3 * auVar21._0_4_;
          fVar29 = pfVar3[1] * auVar21._4_4_;
          fVar30 = pfVar3[2] * auVar21._8_4_;
          fVar31 = pfVar3[3] * auVar21._12_4_;
          fVar32 = auVar35._0_4_;
          fVar36 = auVar35._4_4_;
          fVar37 = auVar35._8_4_;
          fVar38 = auVar35._12_4_;
          pfVar1 = (float *)(local_108 + (longlong)pfVar12);
          *pfVar1 = ((((fVar5 * 2.0 - *pfVar2 * 2.0) + fVar24 + *pfVar4 * auVar21._0_4_) * fVar32 +
                     (((*pfVar2 * 3.0 - fVar5 * 3.0) - fVar24 * 2.0) - *pfVar4 * auVar21._0_4_)) *
                     fVar32 + fVar24) * fVar32 + fVar5;
          pfVar1[1] = ((((fVar6 * 2.0 - fVar25 * 2.0) + fVar29 + fVar27 * auVar21._4_4_) * fVar36 +
                       (((fVar25 * 3.0 - fVar6 * 3.0) - fVar29 * 2.0) - fVar27 * auVar21._4_4_)) *
                       fVar36 + fVar29) * fVar36 + fVar6;
          pfVar1[2] = ((((fVar23 * 2.0 - fVar22 * 2.0) + fVar30 + fVar33 * auVar21._8_4_) * fVar37 +
                       (((fVar22 * 3.0 - fVar23 * 3.0) - fVar30 * 2.0) - fVar33 * auVar21._8_4_)) *
                       fVar37 + fVar30) * fVar37 + fVar23;
          pfVar1[3] = ((((fVar28 * 2.0 - fVar26 * 2.0) + fVar31 + fVar34 * auVar21._12_4_) * fVar38
                       + (((fVar26 * 3.0 - fVar28 * 3.0) - fVar31 * 2.0) - fVar34 * auVar21._12_4_))
                       * fVar38 + fVar31) * fVar38 + fVar28;
          pfVar12 = pfVar12 + 4;
        } while (uVar16 < (param_3 & 0xfffffffffffffffc));
        if (param_3 <= uVar16) goto LAB_1453dad0a;
      }
      if (3 < param_3 - uVar16) {
        pfVar12 = pfVar10 + uVar16 + 1;
        local_e0 = local_d0 - (longlong)pfVar10;
        lVar19 = local_f0 - (longlong)pfVar10;
        lVar15 = local_e8 - (longlong)pfVar10;
        local_110 = local_c8 - (longlong)pfVar10;
        lVar20 = (longlong)local_f8 - (longlong)pfVar10;
        local_108 = (longlong)local_c0 - (longlong)pfVar10;
        lVar18 = ((param_3 - uVar16) - 4 >> 2) + 1;
        uVar16 = uVar16 + lVar18 * 4;
        do {
          fVar5 = *(float *)(lVar15 + -4 + (longlong)pfVar12);
          fVar6 = *(float *)(lVar20 + -4 + (longlong)pfVar12);
          fVar25 = pfVar12[-1] - *(float *)(lVar19 + -4 + (longlong)pfVar12);
          fVar33 = (fVar39 - *(float *)(lVar19 + -4 + (longlong)pfVar12)) / fVar25;
          fVar26 = fVar25 * *(float *)((local_110 - 4) + (longlong)pfVar12);
          fVar25 = fVar25 * *(float *)((longlong)pfVar12 + local_e0 + -4);
          fVar27 = *pfVar12 - *(float *)(lVar19 + (longlong)pfVar12);
          fVar23 = *(float *)(lVar20 + (longlong)pfVar12);
          fVar22 = fVar27 * *(float *)((longlong)pfVar12 + local_e0);
          fVar28 = *(float *)(lVar15 + (longlong)pfVar12);
          fVar34 = (fVar39 - *(float *)(lVar19 + (longlong)pfVar12)) / fVar27;
          fVar27 = fVar27 * *(float *)(local_110 + (longlong)pfVar12);
          *(float *)((longlong)pfVar12 + local_108 + -4) =
               (((((fVar5 + fVar5) - (fVar6 + fVar6)) + fVar25 + fVar26) * fVar33 +
                (((fVar6 * 3.0 - fVar5 * 3.0) - (fVar25 + fVar25)) - fVar26)) * fVar33 + fVar25) *
               fVar33 + fVar5;
          fVar26 = pfVar12[1] - *(float *)(lVar19 + 4 + (longlong)pfVar12);
          fVar5 = *(float *)(lVar20 + 4 + (longlong)pfVar12);
          fVar25 = fVar26 * *(float *)((longlong)pfVar12 + local_e0 + 4);
          fVar6 = *(float *)(lVar15 + 4 + (longlong)pfVar12);
          fVar33 = (fVar39 - *(float *)(lVar19 + 4 + (longlong)pfVar12)) / fVar26;
          fVar26 = fVar26 * *(float *)(local_110 + 4 + (longlong)pfVar12);
          *(float *)((longlong)pfVar12 + local_108) =
               (((((fVar28 + fVar28) - (fVar23 + fVar23)) + fVar22 + fVar27) * fVar34 +
                (((fVar23 * 3.0 - fVar28 * 3.0) - (fVar22 + fVar22)) - fVar27)) * fVar34 + fVar22) *
               fVar34 + fVar28;
          fVar27 = pfVar12[2] - *(float *)(lVar19 + 8 + (longlong)pfVar12);
          fVar23 = *(float *)(lVar20 + 8 + (longlong)pfVar12);
          fVar22 = fVar27 * *(float *)((longlong)pfVar12 + local_e0 + 8);
          fVar28 = *(float *)(lVar15 + 8 + (longlong)pfVar12);
          fVar34 = (fVar39 - *(float *)(lVar19 + 8 + (longlong)pfVar12)) / fVar27;
          fVar27 = fVar27 * *(float *)(local_110 + 8 + (longlong)pfVar12);
          *(float *)((longlong)pfVar12 + local_108 + 4) =
               (((((fVar6 + fVar6) - (fVar5 + fVar5)) + fVar25 + fVar26) * fVar33 +
                (((fVar5 * 3.0 - fVar6 * 3.0) - (fVar25 + fVar25)) - fVar26)) * fVar33 + fVar25) *
               fVar33 + fVar6;
          *(float *)((longlong)pfVar12 + local_108 + 8) =
               (((((fVar28 + fVar28) - (fVar23 + fVar23)) + fVar22 + fVar27) * fVar34 +
                (((fVar23 * 3.0 - fVar28 * 3.0) - (fVar22 + fVar22)) - fVar27)) * fVar34 + fVar22) *
               fVar34 + fVar28;
          pfVar12 = pfVar12 + 4;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        if (param_3 <= uVar16) goto LAB_1453dad0a;
      }
      pfVar12 = pfVar10 + uVar16;
      lVar18 = param_3 - uVar16;
      do {
        fVar5 = *(float *)((local_e8 - (longlong)pfVar10) + (longlong)pfVar12);
        fVar6 = *(float *)((longlong)pfVar12 + ((longlong)local_f8 - (longlong)pfVar10));
        fVar28 = *pfVar12 - *(float *)((longlong)pfVar12 + (local_f0 - (longlong)pfVar10));
        fVar23 = fVar28 * *(float *)((local_d0 - (longlong)pfVar10) + (longlong)pfVar12);
        fVar25 = (fVar39 - *(float *)((longlong)pfVar12 + (local_f0 - (longlong)pfVar10))) / fVar28;
        fVar28 = fVar28 * *(float *)((local_c8 - (longlong)pfVar10) + (longlong)pfVar12);
        *(float *)(((longlong)local_c0 - (longlong)pfVar10) + (longlong)pfVar12) =
             (((((fVar5 + fVar5) - (fVar6 + fVar6)) + fVar23 + fVar28) * fVar25 +
              (((fVar6 * 3.0 - fVar5 * 3.0) - (fVar23 + fVar23)) - fVar28)) * fVar25 + fVar23) *
             fVar25 + fVar5;
        pfVar12 = pfVar12 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
LAB_1453dad0a:
  *(float *)((longlong)param_1 + 0x14) = fVar39;
LAB_1453dad10:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a8 ^ (ulonglong)auStack_138);
LAB_1453da63c:
  cVar13 = '\x01';
  local_118 = '\x01';
  local_110 = uVar16;
LAB_1453da647:
  if (cVar13 == '\0') goto LAB_1453da64b;
  goto LAB_1453da654;
}



// FUNCTION 1453dad60 FUN_1453dad60 body=26 status=ok
// SIG undefined FUN_1453dad60(void)

void FUN_1453dad60(longlong param_1,float param_2)

{
  if (*(float *)(param_1 + 0x18) != -2.1474836e+09) {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + param_2;
  }
  return;
}



// FUNCTION 1453dad80 FUN_1453dad80 body=303 status=ok
// SIG undefined FUN_1453dad80(void)

void FUN_1453dad80(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  lVar5 = *(longlong *)(param_1 + 0x58);
  uVar15 = 0;
  if (param_3 != 0) {
    if (0xf < param_3) {
      pfVar12 = (float *)(param_2 + 0x10);
      lVar13 = lVar5 - param_2;
      do {
        uVar15 = uVar15 + 0x10;
        pfVar2 = (float *)(lVar13 + -0x10 + (longlong)pfVar12);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar6 = pfVar2[3];
        pfVar1 = (float *)(lVar13 + (longlong)pfVar12);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar12[-4] = *pfVar2 + pfVar12[-4];
        pfVar12[-3] = fVar3 + pfVar12[-3];
        pfVar12[-2] = fVar4 + pfVar12[-2];
        pfVar12[-1] = fVar6 + pfVar12[-1];
        pfVar1 = (float *)(lVar13 + 0x10 + (longlong)pfVar12);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar11 = pfVar1[3];
        *pfVar12 = fVar7 + *pfVar12;
        pfVar12[1] = fVar8 + pfVar12[1];
        pfVar12[2] = fVar9 + pfVar12[2];
        pfVar12[3] = fVar10 + pfVar12[3];
        pfVar12[4] = fVar3 + pfVar12[4];
        pfVar12[5] = fVar4 + pfVar12[5];
        pfVar12[6] = fVar6 + pfVar12[6];
        pfVar12[7] = fVar11 + pfVar12[7];
        pfVar1 = (float *)(lVar13 + 0x20 + (longlong)pfVar12);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar12[8] = *pfVar1 + pfVar12[8];
        pfVar12[9] = fVar3 + pfVar12[9];
        pfVar12[10] = fVar4 + pfVar12[10];
        pfVar12[0xb] = fVar6 + pfVar12[0xb];
        pfVar12 = pfVar12 + 0x10;
      } while (uVar15 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar15) {
        return;
      }
    }
    if (3 < param_3 - uVar15) {
      pfVar12 = (float *)(param_2 + 4 + uVar15 * 4);
      lVar13 = lVar5 - param_2;
      lVar14 = ((param_3 - uVar15) - 4 >> 2) + 1;
      uVar15 = uVar15 + lVar14 * 4;
      do {
        fVar3 = *(float *)(lVar13 + (longlong)pfVar12);
        pfVar12[-1] = *(float *)(lVar13 + -4 + (longlong)pfVar12) + pfVar12[-1];
        fVar4 = *(float *)(lVar13 + 4 + (longlong)pfVar12);
        *pfVar12 = fVar3 + *pfVar12;
        fVar3 = *(float *)(lVar13 + 8 + (longlong)pfVar12);
        pfVar12[1] = fVar4 + pfVar12[1];
        pfVar12[2] = fVar3 + pfVar12[2];
        pfVar12 = pfVar12 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (param_3 <= uVar15) {
        return;
      }
    }
    pfVar12 = (float *)(param_2 + uVar15 * 4);
    lVar13 = param_3 - uVar15;
    do {
      *pfVar12 = *(float *)((lVar5 - param_2) + (longlong)pfVar12) + *pfVar12;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1453daeb0 FUN_1453daeb0 body=321 status=ok
// SIG undefined FUN_1453daeb0(void)

void FUN_1453daeb0(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  lVar5 = *(longlong *)(param_1 + 0x58);
  uVar15 = 0;
  if (param_3 != 0) {
    if (0xf < param_3) {
      pfVar12 = (float *)(param_2 + 0x10);
      lVar13 = lVar5 - param_2;
      do {
        uVar15 = uVar15 + 0x10;
        pfVar2 = (float *)(lVar13 + -0x10 + (longlong)pfVar12);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar6 = pfVar2[3];
        pfVar1 = (float *)(lVar13 + (longlong)pfVar12);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar12[-4] = *pfVar2 * param_4 + pfVar12[-4];
        pfVar12[-3] = fVar3 * param_4 + pfVar12[-3];
        pfVar12[-2] = fVar4 * param_4 + pfVar12[-2];
        pfVar12[-1] = fVar6 * param_4 + pfVar12[-1];
        pfVar1 = (float *)(lVar13 + 0x10 + (longlong)pfVar12);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar11 = pfVar1[3];
        *pfVar12 = fVar7 * param_4 + *pfVar12;
        pfVar12[1] = fVar8 * param_4 + pfVar12[1];
        pfVar12[2] = fVar9 * param_4 + pfVar12[2];
        pfVar12[3] = fVar10 * param_4 + pfVar12[3];
        pfVar12[4] = fVar3 * param_4 + pfVar12[4];
        pfVar12[5] = fVar4 * param_4 + pfVar12[5];
        pfVar12[6] = fVar6 * param_4 + pfVar12[6];
        pfVar12[7] = fVar11 * param_4 + pfVar12[7];
        pfVar1 = (float *)(lVar13 + 0x20 + (longlong)pfVar12);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar12[8] = *pfVar1 * param_4 + pfVar12[8];
        pfVar12[9] = fVar3 * param_4 + pfVar12[9];
        pfVar12[10] = fVar4 * param_4 + pfVar12[10];
        pfVar12[0xb] = fVar6 * param_4 + pfVar12[0xb];
        pfVar12 = pfVar12 + 0x10;
      } while (uVar15 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar15) {
        return;
      }
    }
    if (3 < param_3 - uVar15) {
      pfVar12 = (float *)(param_2 + 4 + uVar15 * 4);
      lVar14 = lVar5 - param_2;
      lVar13 = ((param_3 - uVar15) - 4 >> 2) + 1;
      uVar15 = uVar15 + lVar13 * 4;
      do {
        fVar3 = *(float *)(lVar14 + (longlong)pfVar12);
        pfVar12[-1] = param_4 * *(float *)(lVar14 + -4 + (longlong)pfVar12) + pfVar12[-1];
        fVar4 = *(float *)(lVar14 + 4 + (longlong)pfVar12);
        *pfVar12 = param_4 * fVar3 + *pfVar12;
        fVar3 = *(float *)(lVar14 + 8 + (longlong)pfVar12);
        pfVar12[1] = param_4 * fVar4 + pfVar12[1];
        pfVar12[2] = param_4 * fVar3 + pfVar12[2];
        pfVar12 = pfVar12 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      if (param_3 <= uVar15) {
        return;
      }
    }
    pfVar12 = (float *)(param_2 + uVar15 * 4);
    lVar13 = param_3 - uVar15;
    do {
      *pfVar12 = param_4 * *(float *)((lVar5 - param_2) + (longlong)pfVar12) + *pfVar12;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1453db020 thunk_FUN_1453de540 body=5 status=ok
// SIG undefined thunk_FUN_1453de540(void)

void thunk_FUN_1453de540(void)

{
  FUN_1453de540();
  return;
}



// FUNCTION 1453db030 FUN_1453db030 body=12 status=ok
// SIG undefined FUN_1453db030(void)

void FUN_1453db030(undefined8 param_1,int param_2)

{
  FUN_145156190(param_1,-(param_2 != 0) & 2);
  return;
}



// FUNCTION 1453db040 thunk_FUN_145156470 body=5 status=ok
// SIG undefined thunk_FUN_145156470(void)

void thunk_FUN_145156470(void)

{
  FUN_145156470();
  return;
}



// FUNCTION 1453db050 thunk_FUN_1451562f0 body=5 status=ok
// SIG undefined thunk_FUN_1451562f0(void)

void thunk_FUN_1451562f0(void)

{
  FUN_1451562f0();
  return;
}



// FUNCTION 1453db060 thunk_FUN_1451563e0 body=5 status=ok
// SIG undefined thunk_FUN_1451563e0(void)

void thunk_FUN_1451563e0(void)

{
  FUN_1451563e0();
  return;
}



// FUNCTION 1453db070 thunk_FUN_145156340 body=5 status=ok
// SIG undefined thunk_FUN_145156340(void)

void thunk_FUN_145156340(void)

{
  FUN_145156340();
  return;
}



// FUNCTION 1453db080 FUN_1453db080 body=464 status=ok
// SIG undefined FUN_1453db080(void)

code * FUN_1453db080(longlong *param_1,longlong *param_2)

{
  longlong *local_res8;
  longlong *local_res18;
  
  if (DAT_14c7fe168 != 0) {
    if (DAT_14c7fe158 != (longlong *)0x0) {
      (**(code **)(*DAT_14c7fe160 + 0x90))();
      (**(code **)(*DAT_14c7fe158 + 0x10))();
      DAT_14c7fe158 = (longlong *)0x0;
      DAT_14c7fe160 = (longlong *)0x0;
    }
    DAT_14c7fe168 = 0;
  }
  if (((longlong)param_1 + 2U & 0xfffffffffffffffd) != 0) {
    if (param_1 == (longlong *)0xffffffffffffffff) {
      return (code *)0x0;
    }
    DAT_14c7fe158 = param_1;
    DAT_14c7fe160 = param_2;
    DAT_14c7fe168 = 0;
    return FUN_1453db9b0;
  }
  local_res8 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  if (DAT_14c7fe170 == (HMODULE)0x0) {
    CoInitializeEx((LPVOID)0x0,0);
    DAT_14c7fe170 = LoadLibraryA("xaudio2_9redist.dll");
    if ((DAT_14c7fe170 != (HMODULE)0x0) ||
       (DAT_14c7fe170 = LoadLibraryA("xaudio2_9.dll"), DAT_14c7fe170 != (HMODULE)0x0))
    goto LAB_1453db175;
  }
  else {
LAB_1453db175:
    if (DAT_14c7fe178 != (FARPROC)0x0) goto LAB_1453db1a0;
    DAT_14c7fe178 = GetProcAddress(DAT_14c7fe170,"XAudio2Create");
  }
  if (DAT_14c7fe178 == (FARPROC)0x0) {
    return (code *)0x0;
  }
LAB_1453db1a0:
  (*DAT_14c7fe178)(&local_res8,0,1);
  DAT_14c7921a0 = FUN_1453dbb30;
  if (local_res8 != (longlong *)0x0) {
    if (param_1 != (longlong *)0xfffffffffffffffe) {
      param_2 = (longlong *)0x0;
    }
    (**(code **)(*local_res8 + 0x38))(local_res8,&local_res18,0,0,0,param_2,0,6);
    if (local_res18 != (longlong *)0x0) {
      DAT_14c7fe158 = local_res8;
      DAT_14c7fe160 = local_res18;
      DAT_14c7fe168 = 1;
      return FUN_1453db9b0;
    }
    (**(code **)(*local_res8 + 0x10))();
  }
  return (code *)0x0;
}



// FUNCTION 1453db250 FUN_1453db250 body=86 status=ok
// SIG undefined FUN_1453db250(void)

void FUN_1453db250(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = param_1 + 0x73U & 0xfffffffffffffff8;
  plVar1 = *(longlong **)(uVar2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_30 = (ulonglong)(uint)(param_2 * *(int *)(uVar2 + 0x2c)) + *(longlong *)(uVar2 + 0x40);
    local_10 = 0;
    local_38 = (ulonglong)param_3 << 0x20;
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38,0);
  }
  return;
}



// FUNCTION 1453db2b0 FUN_1453db2b0 body=375 status=ok
// SIG undefined FUN_1453db2b0(void)

void FUN_1453db2b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  ushort local_36;
  int local_34;
  int local_30;
  short local_2c;
  undefined4 local_2a;
  ulonglong local_20;
  
  plVar5 = DAT_14c7fe158;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c7fe158 != (longlong *)0x0) {
    uVar4 = param_1 + 0x73U & 0xfffffffffffffff8;
    uVar3 = (*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x34) & 0xfffffffU) * 2000;
    *(uint *)(uVar4 + 0x2c) = uVar3 / 16000 + 0x1f & 0xffffffe0;
    uVar3 = uVar3 / 2000 + 0x1f & 0xffffffe0;
    *(uint *)(uVar4 + 0x24) = uVar3;
    if (*(uint *)(uVar4 + 0x28) < uVar3) {
      *(uint *)(uVar4 + 0x24) = *(uint *)(uVar4 + 0x28);
    }
    *(undefined4 *)(uVar4 + 0x10) = 0;
    *(undefined4 *)(uVar4 + 0x20) = 0;
    *(undefined8 *)(uVar4 + 0x18) = 0xffffffffffffffff;
    if (*(longlong *)(uVar4 + 0x40) == 0) {
      lVar2 = FUN_1451570f0(*(int *)(uVar4 + 0x2c) << 4);
      *(longlong *)(uVar4 + 0x40) = lVar2;
      plVar5 = DAT_14c7fe158;
      if (lVar2 == 0) goto LAB_1453db41a;
    }
    memset(*(void **)(uVar4 + 0x40),0,(ulonglong)(uint)(*(int *)(uVar4 + 0x2c) << 4));
    local_34 = *(int *)(param_1 + 0x34);
    local_36 = (ushort)*(byte *)(param_1 + 0x38);
    local_2c = local_36 * 2;
    local_40 = 0;
    local_38 = 1;
    local_30 = (uint)*(byte *)(param_1 + 0x38) * local_34 * 2;
    local_2a = 0x10;
    *(undefined8 *)(uVar4 + 0x38) = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0x3f800000;
    iVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,(undefined8 *)(uVar4 + 0x38),&local_38,2);
    if (iVar1 != 0) {
      FUN_1451571c0(*(undefined8 *)(uVar4 + 0x40));
    }
  }
LAB_1453db41a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1453db430 FUN_1453db430 body=216 status=ok
// SIG undefined FUN_1453db430(void)

void FUN_1453db430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  float local_res8;
  float local_resc;
  
  if (*(int *)(param_1 + 0x38) < 2) {
    uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
    plVar2 = *(longlong **)(uVar3 + 0x38);
    local_res8 = (float)*(int *)(uVar3 + 8) * 3.0517578e-05;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,1,&local_res8,0);
    }
  }
  else {
    uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
    iVar1 = *(int *)(uVar3 + 0xc);
    local_resc = (float)*(int *)(uVar3 + 8) * 3.0517578e-05;
    if (iVar1 < 0x8000) {
      local_res8 = local_resc;
      local_resc = (float)iVar1 * 3.0517578e-05 * local_resc;
    }
    else {
      local_res8 = (float)(0x10000 - iVar1) * 3.0517578e-05 * local_resc;
    }
    plVar2 = *(longlong **)(uVar3 + 0x38);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,2,&local_res8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1453db510 FUN_1453db510 body=173 status=ok
// SIG undefined FUN_1453db510(void)

undefined8 FUN_1453db510(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_28 [8];
  int local_20;
  
  uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
  if (((*(int *)(uVar3 + 0x14) != 0) || (*(int *)(param_1 + 0x44) == 0)) ||
     (plVar1 = *(longlong **)(uVar3 + 0x38), plVar1 == (longlong *)0x0)) {
    return 0;
  }
  if (*(int *)(uVar3 + 0x10) != 0) {
    local_20 = 0x10;
    (**(code **)(*plVar1 + 200))(plVar1,local_28,0);
    if (local_20 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(uVar3 + 0x10) = 0;
      *(undefined4 *)(uVar3 + 0x20) = 0;
      *(undefined8 *)(uVar3 + 0x18) = 0xffffffffffffffff;
      return 0;
    }
    if (local_20 == 0x10) {
      return 0;
    }
  }
  uVar2 = *(int *)(uVar3 + 0x1c) + 1U & 0x8000000f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
  }
  *(uint *)(uVar3 + 0x18) = uVar2;
  return 1;
}



// FUNCTION 1453db5f0 FUN_1453db5f0 body=311 status=ok
// SIG undefined FUN_1453db5f0(void)

undefined8 FUN_1453db5f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar3 = (longlong *)(param_1 + 0x73U & 0xfffffffffffffff8);
  if ((int)plVar3[3] == -1) {
    return 0;
  }
  *(int *)((longlong)plVar3 + 0x1c) = (int)plVar3[3];
  *(undefined4 *)(plVar3 + 3) = 0xffffffff;
  *(int *)(plVar3 + 4) = (int)plVar3[4] + param_2;
  if ((int)plVar3[2] == 0) {
    if (*(uint *)((longlong)plVar3 + 0x24) <= *(uint *)(plVar3 + 4)) {
      iVar5 = 0;
      *(undefined4 *)(plVar3 + 2) = 1;
      if (-1 < *(int *)((longlong)plVar3 + 0x1c)) {
        do {
          plVar1 = (longlong *)plVar3[7];
          if (plVar1 != (longlong *)0x0) {
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            local_10 = 0;
            local_38 = (ulonglong)*(uint *)((longlong)plVar3 + 0x2c) << 0x20;
            local_30 = (ulonglong)(*(uint *)((longlong)plVar3 + 0x2c) * iVar5) + plVar3[8];
            (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= *(int *)((longlong)plVar3 + 0x1c));
      }
      if ((plVar3[7] != 0) &&
         (lVar2 = *(longlong *)(*plVar3 + 0x1b8),
         param_1 == (ulonglong)(*(int *)(*plVar3 + 300) - 1) * 0x1c0 + lVar2)) {
        uVar4 = lVar2 + 0x73;
        for (iVar5 = *(int *)(*(longlong *)(uVar4 & 0xfffffffffffffff8) + 300); iVar5 != 0;
            iVar5 = iVar5 + -1) {
          plVar3 = *(longlong **)((uVar4 & 0xfffffffffffffff8) + 0x38);
          (**(code **)(*plVar3 + 0x98))(plVar3,0,0);
          uVar4 = uVar4 + 0x1c0;
        }
      }
    }
  }
  else {
    FUN_1453db250(param_1,*(undefined4 *)((longlong)plVar3 + 0x1c),param_2);
  }
  return 1;
}



// FUNCTION 1453db780 FUN_1453db780 body=196 status=ok
// SIG undefined FUN_1453db780(void)

undefined4 FUN_1453db780(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar2 = FUN_1453db2b0();
      if (iVar2 != 0) {
        FUN_1453db430(param_1);
        uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
        if ((*(int *)(uVar3 + 0x48) != 0) &&
           (plVar1 = *(longlong **)(uVar3 + 0x38), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x80))
                    (plVar1,0,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(uVar3 + 0x30),
                     uVar3 + 0x4c,0);
        }
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
      return *(undefined4 *)(param_1 + 0x44);
    }
  }
  else if ((param_2 == 0) && (*(int *)(param_1 + 0x44) == 1)) {
    uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
    plVar1 = *(longlong **)(uVar3 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x90))();
      *(undefined8 *)(uVar3 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    return *(undefined4 *)(param_1 + 0x44);
  }
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 1453db850 FUN_1453db850 body=92 status=ok
// SIG undefined FUN_1453db850(void)

undefined4 FUN_1453db850(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 + 0x73U & 0xfffffffffffffff8;
  plVar1 = *(longlong **)(uVar2 + 0x38);
  if (param_2 != 0) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xa0))(plVar1,0,0);
    }
    *(undefined4 *)(uVar2 + 0x14) = 1;
    return *(undefined4 *)(uVar2 + 0x14);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
  }
  *(undefined4 *)(uVar2 + 0x14) = 0;
  return *(undefined4 *)(uVar2 + 0x14);
}



// FUNCTION 1453db8b0 FUN_1453db8b0 body=173 status=ok
// SIG undefined FUN_1453db8b0(void)

void FUN_1453db8b0(longlong param_1,void *param_2,uint param_3)

{
  undefined8 *_Dst;
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 8;
  if (param_3 < 9) {
    uVar2 = param_3;
  }
  uVar3 = param_1 + 0x73U & 0xfffffffffffffff8;
  _Dst = (undefined8 *)(uVar3 + 0x4c);
  *(undefined4 *)(uVar3 + 0x48) = 1;
  *_Dst = 0;
  *(undefined8 *)(uVar3 + 0x54) = 0;
  *(undefined8 *)(uVar3 + 0x5c) = 0;
  *(undefined8 *)(uVar3 + 100) = 0;
  *(undefined8 *)(uVar3 + 0x6c) = 0;
  *(undefined8 *)(uVar3 + 0x74) = 0;
  *(undefined8 *)(uVar3 + 0x7c) = 0;
  *(undefined8 *)(uVar3 + 0x84) = 0;
  memcpy(_Dst,param_2,(ulonglong)(uVar2 * 8));
  if (*(uint *)(uVar3 + 0x30) < uVar2) {
    *(uint *)(uVar3 + 0x30) = uVar2;
  }
  plVar1 = *(longlong **)(uVar3 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x80))
              (plVar1,0,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(uVar3 + 0x30),_Dst,0);
  }
  return;
}



// FUNCTION 1453db960 FUN_1453db960 body=68 status=ok
// SIG undefined FUN_1453db960(void)

void FUN_1453db960(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1 + 0x73U & 0xfffffffffffffff8;
  if (*(longlong **)(uVar1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(uVar1 + 0x38) + 0x90))();
    *(undefined8 *)(uVar1 + 0x38) = 0;
  }
  if (*(longlong *)(uVar1 + 0x40) != 0) {
    FUN_1451571c0();
    *(undefined8 *)(uVar1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1453db9b0 FUN_1453db9b0 body=363 status=ok
// SIG undefined FUN_1453db9b0(void)

void FUN_1453db9b0(void *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  memset(param_1,0,0x1c0);
  puVar3 = DAT_14c7fe160;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x38) = param_3;
  (**(code **)*puVar3)(puVar3,local_28);
  plVar7 = (longlong *)((longlong)param_1 + 0x73U & 0xfffffffffffffff8);
  *(undefined4 *)(plVar7 + 6) = local_20;
  uVar1 = *(uint *)(param_5 + 0x14);
  *(undefined4 *)(param_5 + 0x638) = local_20;
  uVar2 = *(int *)((longlong)param_1 + 0x34) * *(int *)((longlong)param_1 + 0x38) * 2;
  uVar6 = (ulonglong)uVar2;
  if ((uVar1 == 0) || (*(uint *)(param_5 + 0x18) == 0)) {
    *(uint *)(plVar7 + 5) = uVar2;
  }
  else {
    uVar5 = (ulonglong)*(uint *)(param_5 + 8) * (ulonglong)*(uint *)(param_5 + 0x18) * uVar6;
    uVar6 = uVar5 % (ulonglong)uVar1;
    *(int *)(plVar7 + 5) = (int)(uVar5 / uVar1);
  }
  *plVar7 = param_5;
  *(undefined4 *)(plVar7 + 1) = 0x7fff;
  *(undefined4 *)((longlong)plVar7 + 0xc) = 0x7fff;
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
  *(code **)((longlong)param_1 + 0x170) = FUN_1453db510;
  *(undefined1 **)((longlong)param_1 + 0x178) = &LAB_1453db5c0;
  *(code **)((longlong)param_1 + 0x180) = FUN_1453db5f0;
  *(undefined1 **)((longlong)param_1 + 0x188) = &LAB_1453db730;
  *(undefined1 **)((longlong)param_1 + 400) = &LAB_1453db760;
  *(code **)((longlong)param_1 + 0x198) = FUN_1453db850;
  *(code **)((longlong)param_1 + 0x1a0) = FUN_1453db780;
  *(code **)((longlong)param_1 + 0x1a8) = FUN_1453db960;
  *(code **)((longlong)param_1 + 0x1b0) = FUN_1453db8b0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  iVar4 = FUN_1453db2b0(param_1,uVar6);
  if (iVar4 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)plVar7 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1453dbb30 FUN_1453dbb30 body=120 status=ok
// SIG undefined FUN_1453dbb30(void)

void FUN_1453dbb30(void)

{
  if (DAT_14c7fe168 != 0) {
    if (DAT_14c7fe158 != (longlong *)0x0) {
      (**(code **)(*DAT_14c7fe160 + 0x90))();
      (**(code **)(*DAT_14c7fe158 + 0x10))();
      DAT_14c7fe158 = (longlong *)0x0;
      DAT_14c7fe160 = (longlong *)0x0;
    }
    DAT_14c7fe168 = 0;
  }
  FreeLibrary(DAT_14c7fe170);
  DAT_14c7fe170 = (HMODULE)0x0;
  DAT_14c7fe178 = 0;
  CoUninitialize();
  DAT_14c7921a0 = 0;
  return;
}



// FUNCTION 1453dbbb0 FUN_1453dbbb0 body=247 status=ok
// SIG undefined FUN_1453dbbb0(void)

void FUN_1453dbbb0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_3 < 2) {
    FUN_1453dcf00(param_1,param_3);
    return;
  }
  pfVar6 = (float *)(param_1 + 0x10);
  pfVar1 = (float *)(param_1 + param_2 * 8);
  pfVar7 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1453dcf00(param_1,2);
  if (pfVar6 < pfVar1) {
    puVar8 = &DAT_14c73e960 + (param_3 * 8 - (longlong)pfVar6);
    do {
      fVar10 = *(float *)(puVar8 + (longlong)pfVar6);
      fVar12 = *(float *)((longlong)(puVar8 + (longlong)pfVar6) + 8);
      fVar13 = ((float)*(undefined8 *)(pfVar7 + 2) - *pfVar6) * 0.5;
      fVar14 = ((float)((ulonglong)*(undefined8 *)(pfVar7 + 2) >> 0x20) + pfVar6[1]) * -0.5;
      fVar15 = (*pfVar7 - pfVar6[2]) * 0.5;
      fVar16 = (pfVar7[1] + pfVar6[3]) * -0.5;
      fVar2 = *pfVar6;
      fVar3 = pfVar6[1];
      fVar4 = pfVar6[2];
      fVar5 = pfVar6[3];
      fVar9 = fVar14 * fVar10 - *(float *)((longlong)pfVar6 + (longlong)(puVar8 + 4)) * fVar13;
      fVar10 = fVar13 * fVar10 + *(float *)((longlong)pfVar6 + (longlong)(puVar8 + 4)) * fVar14;
      fVar11 = fVar16 * fVar12 - *(float *)((longlong)pfVar6 + (longlong)(puVar8 + 0xc)) * fVar15;
      fVar12 = fVar15 * fVar12 + *(float *)((longlong)pfVar6 + (longlong)(puVar8 + 0xc)) * fVar16;
      *pfVar6 = (fVar13 + fVar2) - fVar9;
      pfVar6[1] = fVar14 + fVar3 + fVar10;
      pfVar6[2] = (fVar15 + fVar4) - fVar11;
      pfVar6[3] = fVar16 + fVar5 + fVar12;
      pfVar6 = pfVar6 + 4;
      *pfVar7 = fVar15 + fVar4 + fVar11;
      pfVar7[1] = -(fVar16 + fVar5) + fVar12;
      pfVar7[2] = fVar13 + fVar2 + fVar9;
      pfVar7[3] = -(fVar14 + fVar3) + fVar10;
      pfVar7 = pfVar7 + -4;
    } while (pfVar6 < pfVar1);
  }
  return;
}



// FUNCTION 1453dbcb0 FUN_1453dbcb0 body=246 status=ok
// SIG undefined FUN_1453dbcb0(void)

void FUN_1453dbcb0(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined *puVar4;
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
    FUN_1453dcf00(param_1,param_3);
    return;
  }
  pfVar2 = (float *)(param_1 + 0x10);
  pfVar1 = (float *)(param_1 + param_2 * 8);
  pfVar3 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1453dd260(param_1,2);
  if (pfVar2 < pfVar1) {
    puVar4 = &DAT_14c73e960 + (param_3 * 8 - (longlong)pfVar2);
    do {
      fVar6 = *(float *)(puVar4 + (longlong)pfVar2);
      fVar7 = *(float *)((longlong)(puVar4 + (longlong)pfVar2) + 8);
      fVar8 = ((float)*(undefined8 *)(pfVar3 + 2) - *pfVar2) * -0.5;
      fVar9 = ((float)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20) + pfVar2[1]) * 0.5;
      fVar10 = (*pfVar3 - pfVar2[2]) * -0.5;
      fVar11 = (pfVar3[1] + pfVar2[3]) * 0.5;
      fVar12 = *pfVar2 - fVar8;
      fVar13 = pfVar2[1] - fVar9;
      fVar14 = pfVar2[2] - fVar10;
      fVar15 = pfVar2[3] - fVar11;
      fVar5 = *(float *)((longlong)pfVar2 + (longlong)(puVar4 + 4)) * fVar8 + fVar9 * fVar6;
      fVar6 = -*(float *)((longlong)pfVar2 + (longlong)(puVar4 + 4)) * fVar9 + fVar8 * fVar6;
      fVar8 = *(float *)((longlong)pfVar2 + (longlong)(puVar4 + 0xc)) * fVar10 + fVar11 * fVar7;
      fVar7 = -*(float *)((longlong)pfVar2 + (longlong)(puVar4 + 0xc)) * fVar11 + fVar10 * fVar7;
      *pfVar2 = fVar12 - fVar5;
      pfVar2[1] = fVar13 + fVar6;
      pfVar2[2] = fVar14 - fVar8;
      pfVar2[3] = fVar15 + fVar7;
      pfVar2 = pfVar2 + 4;
      *pfVar3 = fVar14 + fVar8;
      pfVar3[1] = -fVar15 + fVar7;
      pfVar3[2] = fVar12 + fVar5;
      pfVar3[3] = -fVar13 + fVar6;
      pfVar3 = pfVar3 + -4;
    } while (pfVar2 < pfVar1);
  }
  return;
}



// FUNCTION 1453dbdb0 FUN_1453dbdb0 body=307 status=ok
// SIG undefined FUN_1453dbdb0(void)

void FUN_1453dbdb0(longlong param_1,longlong param_2,ulonglong param_3)

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
  ushort *puVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
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
  
  puVar12 = (ushort *)(param_2 + -4);
  do {
    uVar14 = (ulonglong)puVar12[3];
    pfVar13 = (float *)(param_1 + (ulonglong)puVar12[2] * 8);
    pfVar2 = pfVar13 + uVar14 * 2;
    pfVar16 = (float *)(&DAT_14c73e950 + uVar14 * 8);
    pfVar15 = pfVar13 + uVar14 * 6;
    do {
      fVar4 = *pfVar16;
      fVar5 = pfVar16[2];
      pfVar3 = pfVar15 + uVar14 * -2;
      fVar6 = pfVar16[1];
      fVar7 = pfVar16[3];
      pfVar16 = pfVar16 + 4;
      fVar25 = fVar4 * *pfVar3 - pfVar3[1] * fVar6;
      fVar26 = fVar4 * pfVar3[1] + *pfVar3 * fVar6;
      fVar27 = fVar5 * pfVar3[2] - pfVar3[3] * fVar7;
      fVar28 = fVar5 * pfVar3[3] + pfVar3[2] * fVar7;
      fVar8 = *pfVar13;
      fVar9 = pfVar13[1];
      fVar10 = pfVar13[2];
      fVar11 = pfVar13[3];
      fVar17 = pfVar15[1] * fVar4 - fVar6 * *pfVar15;
      fVar18 = *pfVar15 * fVar4 + fVar6 * pfVar15[1];
      fVar19 = pfVar15[3] * fVar5 - fVar7 * pfVar15[2];
      fVar20 = pfVar15[2] * fVar5 + fVar7 * pfVar15[3];
      pfVar3 = pfVar15 + uVar14 * -4;
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
      *pfVar13 = fVar8 + fVar21;
      pfVar13[1] = fVar9 + fVar22;
      pfVar13[2] = fVar10 + fVar23;
      pfVar13[3] = fVar11 + fVar24;
      pfVar13 = pfVar13 + 4;
      pfVar3 = pfVar15 + uVar14 * -4;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      pfVar3 = pfVar15 + uVar14 * -2;
      *pfVar3 = fVar8 - fVar21;
      pfVar3[1] = fVar9 - fVar22;
      pfVar3[2] = fVar10 - fVar23;
      pfVar3[3] = fVar11 - fVar24;
      *pfVar15 = fVar4 - fVar26;
      pfVar15[1] = fVar5 + fVar25;
      pfVar15[2] = fVar6 - fVar28;
      pfVar15[3] = fVar7 + fVar27;
      pfVar15 = pfVar15 + 4;
    } while (pfVar13 < pfVar2);
    puVar1 = puVar12 + 3;
    puVar12 = puVar12 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1453dbef0 FUN_1453dbef0 body=307 status=ok
// SIG undefined FUN_1453dbef0(void)

void FUN_1453dbef0(longlong param_1,longlong param_2,ulonglong param_3)

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
  ushort *puVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
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
  
  puVar12 = (ushort *)(param_2 + -4);
  do {
    uVar14 = (ulonglong)puVar12[3];
    pfVar13 = (float *)(param_1 + (ulonglong)puVar12[2] * 8);
    pfVar2 = pfVar13 + uVar14 * 2;
    pfVar16 = (float *)(&DAT_14c73e950 + uVar14 * 8);
    pfVar15 = pfVar13 + uVar14 * 6;
    do {
      pfVar3 = pfVar15 + uVar14 * -2;
      fVar4 = *pfVar16;
      fVar5 = pfVar16[2];
      fVar6 = pfVar16[1];
      fVar7 = pfVar16[3];
      pfVar16 = pfVar16 + 4;
      fVar8 = *pfVar13;
      fVar9 = pfVar13[1];
      fVar10 = pfVar13[2];
      fVar11 = pfVar13[3];
      fVar25 = fVar4 * *pfVar15 - pfVar15[1] * fVar6;
      fVar26 = fVar4 * pfVar15[1] + *pfVar15 * fVar6;
      fVar27 = fVar5 * pfVar15[2] - pfVar15[3] * fVar7;
      fVar28 = fVar5 * pfVar15[3] + pfVar15[2] * fVar7;
      fVar17 = pfVar3[1] * fVar4 - fVar6 * *pfVar3;
      fVar18 = *pfVar3 * fVar4 + fVar6 * pfVar3[1];
      fVar19 = pfVar3[3] * fVar5 - fVar7 * pfVar3[2];
      fVar20 = pfVar3[2] * fVar5 + fVar7 * pfVar3[3];
      pfVar3 = pfVar15 + uVar14 * -4;
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
      *pfVar13 = fVar8 + fVar21;
      pfVar13[1] = fVar9 + fVar22;
      pfVar13[2] = fVar10 + fVar23;
      pfVar13[3] = fVar11 + fVar24;
      pfVar13 = pfVar13 + 4;
      pfVar3 = pfVar15 + uVar14 * -4;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      pfVar3 = pfVar15 + uVar14 * -2;
      *pfVar3 = fVar8 - fVar21;
      pfVar3[1] = fVar9 - fVar22;
      pfVar3[2] = fVar10 - fVar23;
      pfVar3[3] = fVar11 - fVar24;
      *pfVar15 = fVar4 - fVar26;
      pfVar15[1] = fVar5 + fVar25;
      pfVar15[2] = fVar6 - fVar28;
      pfVar15[3] = fVar7 + fVar27;
      pfVar15 = pfVar15 + 4;
    } while (pfVar13 < pfVar2);
    puVar1 = puVar12 + 3;
    puVar12 = puVar12 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1453dc030 FUN_1453dc030 body=227 status=ok
// SIG undefined FUN_1453dc030(void)

void FUN_1453dc030(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
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
    FUN_1453ddf00(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_1453ddf00(param_1,param_2,param_3,4,param_5);
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



// FUNCTION 1453dc120 FUN_1453dc120 body=271 status=ok
// SIG undefined FUN_1453dc120(void)

void FUN_1453dc120(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (1 < param_3) {
    pfVar8 = (float *)(param_1 + 0x10);
    pfVar1 = (float *)(param_1 + param_2 * 8);
    pfVar9 = (float *)(param_1 + -0x18 + param_3 * 0x10);
    FUN_1453dcf00(param_1,2);
    if (pfVar8 < pfVar1) {
      lVar7 = param_3 * 8 - (longlong)pfVar8;
      do {
        pfVar2 = (float *)(&DAT_14c73e960 + lVar7 + (longlong)pfVar8);
        fVar14 = ((float)*(undefined8 *)(pfVar9 + 2) + -*pfVar8) * 0.5;
        fVar15 = ((float)((ulonglong)*(undefined8 *)(pfVar9 + 2) >> 0x20) + pfVar8[1]) * -0.5;
        fVar16 = (*pfVar9 + -pfVar8[2]) * 0.5;
        fVar17 = (pfVar9[1] + pfVar8[3]) * -0.5;
        fVar3 = *pfVar8;
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar10 = -(pfVar2[1] * fVar14) + fVar15 * *pfVar2;
        fVar11 = pfVar2[1] * fVar15 + fVar14 * *pfVar2;
        fVar12 = -(pfVar2[3] * fVar16) + fVar17 * pfVar2[2];
        fVar13 = pfVar2[3] * fVar17 + fVar16 * pfVar2[2];
        *pfVar8 = -fVar10 + fVar14 + fVar3;
        pfVar8[1] = fVar11 + fVar15 + fVar4;
        pfVar8[2] = -fVar12 + fVar16 + fVar5;
        pfVar8[3] = fVar13 + fVar17 + fVar6;
        pfVar8 = pfVar8 + 4;
        *pfVar9 = fVar16 + fVar5 + fVar12;
        pfVar9[1] = -(fVar17 + fVar6) + fVar13;
        pfVar9[2] = fVar14 + fVar3 + fVar10;
        pfVar9[3] = -(fVar15 + fVar4) + fVar11;
        pfVar9 = pfVar9 + -4;
      } while (pfVar8 < pfVar1);
    }
    return;
  }
  FUN_1453dcf00(param_1,param_3);
  return;
}



// FUNCTION 1453dc230 FUN_1453dc230 body=261 status=ok
// SIG undefined FUN_1453dc230(void)

void FUN_1453dc230(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_3 < 2) {
    FUN_1453dcf00(param_1,param_3);
    return;
  }
  pfVar4 = (float *)(param_1 + 0x10);
  pfVar1 = (float *)(param_1 + param_2 * 8);
  pfVar5 = (float *)(param_1 + -0x18 + param_3 * 0x10);
  FUN_1453dd260(param_1,2);
  if (pfVar4 < pfVar1) {
    lVar3 = param_3 * 8 - (longlong)pfVar4;
    do {
      pfVar2 = (float *)(&DAT_14c73e960 + lVar3 + (longlong)pfVar4);
      fVar7 = ((float)*(undefined8 *)(pfVar5 + 2) + -*pfVar4) * -0.5;
      fVar8 = ((float)((ulonglong)*(undefined8 *)(pfVar5 + 2) >> 0x20) + pfVar4[1]) * 0.5;
      fVar9 = (*pfVar5 + -pfVar4[2]) * -0.5;
      fVar10 = (pfVar5[1] + pfVar4[3]) * 0.5;
      fVar11 = *pfVar4 - fVar7;
      fVar12 = pfVar4[1] - fVar8;
      fVar13 = pfVar4[2] - fVar9;
      fVar14 = pfVar4[3] - fVar10;
      fVar6 = pfVar2[1] * fVar7 + fVar8 * *pfVar2;
      fVar7 = -pfVar2[1] * fVar8 + fVar7 * *pfVar2;
      fVar8 = pfVar2[3] * fVar9 + fVar10 * pfVar2[2];
      fVar9 = -pfVar2[3] * fVar10 + fVar9 * pfVar2[2];
      *pfVar4 = -fVar6 + fVar11;
      pfVar4[1] = fVar7 + fVar12;
      pfVar4[2] = -fVar8 + fVar13;
      pfVar4[3] = fVar9 + fVar14;
      pfVar4 = pfVar4 + 4;
      *pfVar5 = fVar13 + fVar8;
      pfVar5[1] = -fVar14 + fVar9;
      pfVar5[2] = fVar11 + fVar6;
      pfVar5[3] = -fVar12 + fVar7;
      pfVar5 = pfVar5 + -4;
    } while (pfVar4 < pfVar1);
  }
  return;
}



// FUNCTION 1453dc340 FUN_1453dc340 body=330 status=ok
// SIG undefined FUN_1453dc340(void)

void FUN_1453dc340(longlong param_1,longlong param_2,ulonglong param_3)

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
  ulonglong uVar12;
  float *pfVar13;
  ushort *puVar14;
  float *pfVar15;
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
    uVar12 = (ulonglong)puVar14[3];
    pfVar15 = (float *)(param_1 + (ulonglong)puVar14[2] * 8);
    pfVar2 = pfVar15 + uVar12 * 2;
    pfVar16 = (float *)(&DAT_14c73e950 + uVar12 * 8);
    pfVar13 = pfVar15 + uVar12 * 6;
    do {
      pfVar3 = pfVar13 + uVar12 * -2;
      fVar18 = *pfVar16;
      fVar19 = pfVar16[1];
      fVar20 = pfVar16[2];
      fVar21 = pfVar16[3];
      pfVar16 = pfVar16 + 4;
      fVar25 = -(pfVar3[1] * fVar19) + fVar18 * *pfVar3;
      fVar26 = *pfVar3 * fVar19 + fVar18 * pfVar3[1];
      fVar27 = -(pfVar3[3] * fVar21) + fVar20 * pfVar3[2];
      fVar28 = pfVar3[2] * fVar21 + fVar20 * pfVar3[3];
      pfVar3 = pfVar13 + uVar12 * -4;
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = pfVar3[3];
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      fVar11 = pfVar15[3];
      fVar17 = pfVar13[1] * fVar18 + -(fVar19 * *pfVar13);
      fVar18 = *pfVar13 * fVar18 + fVar19 * pfVar13[1];
      fVar19 = pfVar13[3] * fVar20 + -(fVar21 * pfVar13[2]);
      fVar20 = pfVar13[2] * fVar20 + fVar21 * pfVar13[3];
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
      pfVar3 = pfVar13 + uVar12 * -4;
      *pfVar3 = fVar26 + fVar4;
      pfVar3[1] = -fVar25 + fVar5;
      pfVar3[2] = fVar28 + fVar6;
      pfVar3[3] = -fVar27 + fVar7;
      pfVar3 = pfVar13 + uVar12 * -2;
      *pfVar3 = fVar8 - fVar21;
      pfVar3[1] = fVar9 - fVar22;
      pfVar3[2] = fVar10 - fVar23;
      pfVar3[3] = fVar11 - fVar24;
      *pfVar13 = -fVar26 + fVar4;
      pfVar13[1] = fVar25 + fVar5;
      pfVar13[2] = -fVar28 + fVar6;
      pfVar13[3] = fVar27 + fVar7;
      pfVar13 = pfVar13 + 4;
    } while (pfVar15 < pfVar2);
    puVar1 = puVar14 + 3;
    puVar14 = puVar14 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1453dc490 FUN_1453dc490 body=330 status=ok
// SIG undefined FUN_1453dc490(void)

void FUN_1453dc490(longlong param_1,longlong param_2,ulonglong param_3)

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
  ulonglong uVar13;
  float *pfVar14;
  ushort *puVar15;
  float *pfVar16;
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
    uVar13 = (ulonglong)puVar15[3];
    pfVar16 = (float *)(param_1 + (ulonglong)puVar15[2] * 8);
    pfVar2 = pfVar16 + uVar13 * 2;
    pfVar17 = (float *)(&DAT_14c73e950 + uVar13 * 8);
    pfVar14 = pfVar16 + uVar13 * 6;
    do {
      pfVar3 = pfVar14 + uVar13 * -2;
      fVar19 = *pfVar17;
      fVar20 = pfVar17[1];
      fVar21 = pfVar17[2];
      fVar22 = pfVar17[3];
      pfVar17 = pfVar17 + 4;
      fVar26 = -(pfVar14[1] * fVar20) + fVar19 * *pfVar14;
      fVar27 = *pfVar14 * fVar20 + fVar19 * pfVar14[1];
      fVar28 = -(pfVar14[3] * fVar22) + fVar21 * pfVar14[2];
      fVar29 = pfVar14[2] * fVar22 + fVar21 * pfVar14[3];
      pfVar4 = pfVar14 + uVar13 * -4;
      fVar5 = *pfVar4;
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
      fVar8 = pfVar4[3];
      fVar9 = *pfVar16;
      fVar10 = pfVar16[1];
      fVar11 = pfVar16[2];
      fVar12 = pfVar16[3];
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
      *pfVar16 = fVar9 + fVar22;
      pfVar16[1] = fVar10 + fVar23;
      pfVar16[2] = fVar11 + fVar24;
      pfVar16[3] = fVar12 + fVar25;
      pfVar16 = pfVar16 + 4;
      pfVar3 = pfVar14 + uVar13 * -4;
      *pfVar3 = fVar27 + fVar5;
      pfVar3[1] = -fVar26 + fVar6;
      pfVar3[2] = fVar29 + fVar7;
      pfVar3[3] = -fVar28 + fVar8;
      pfVar3 = pfVar14 + uVar13 * -2;
      *pfVar3 = fVar9 - fVar22;
      pfVar3[1] = fVar10 - fVar23;
      pfVar3[2] = fVar11 - fVar24;
      pfVar3[3] = fVar12 - fVar25;
      *pfVar14 = -fVar27 + fVar5;
      pfVar14[1] = fVar26 + fVar6;
      pfVar14[2] = -fVar29 + fVar7;
      pfVar14[3] = fVar28 + fVar8;
      pfVar14 = pfVar14 + 4;
    } while (pfVar16 < pfVar2);
    puVar1 = puVar15 + 3;
    puVar15 = puVar15 + 2;
  } while (*puVar1 < param_3);
  return;
}



// FUNCTION 1453dc5e0 FUN_1453dc5e0 body=232 status=ok
// SIG undefined FUN_1453dc5e0(void)

void FUN_1453dc5e0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
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
    FUN_1453ddf00(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_1453ddf00(param_1,param_2,param_3,4,param_5);
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



// FUNCTION 1453dc6d0 FUN_1453dc6d0 body=335 status=ok
// SIG undefined FUN_1453dc6d0(void)

void FUN_1453dc6d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
      FUN_1453ddaf0(param_1,param_2,param_3,param_4,param_5,param_6,uVar27,param_8);
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
      FUN_1453ddaf0(param_1,param_2,param_3,param_4,param_5,param_7 & 0xfffffffffffffffe,param_7,
                    param_8);
    }
  }
  return;
}



// FUNCTION 1453dc820 FUN_1453dc820 body=381 status=ok
// SIG undefined FUN_1453dc820(void)

void FUN_1453dc820(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
      FUN_1453dd5c0(param_1,param_2,param_3,param_4,param_5,param_6,uVar8,param_8);
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
      FUN_1453dd5c0(param_1,param_2,param_3,param_4,param_5,uVar7,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 1453dcb10 FUN_1453dcb10 body=223 status=ok
// SIG undefined FUN_1453dcb10(void)

void FUN_1453dcb10(longlong param_1,float *param_2,longlong param_3,ulonglong param_4,
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
  longlong lVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  
  if (((param_4 & 3) == 0) && (3 < param_4)) {
    FUN_1453de110(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      param_5 = param_5 - param_1;
      lVar22 = (param_4 - 5 >> 2) + 1;
      pfVar23 = (float *)(param_1 + 0x30);
      pfVar25 = param_2 + param_3 + -7;
      do {
        pfVar24 = param_2 + 4;
        pfVar1 = (float *)(param_5 + -0x10 + (longlong)pfVar23);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = *pfVar25;
        fVar12 = pfVar25[1];
        fVar13 = pfVar25[2];
        fVar14 = pfVar25[3];
        pfVar25 = pfVar25 + -4;
        fVar3 = *(float *)((longlong)pfVar23 + param_5 + 4);
        fVar5 = *(float *)((longlong)pfVar23 + param_5 + 0xc);
        fVar2 = *(float *)(param_5 + (longlong)pfVar23);
        fVar4 = ((float *)(param_5 + (longlong)pfVar23))[2];
        fVar15 = *pfVar24;
        fVar16 = param_2[5];
        fVar17 = param_2[6];
        fVar18 = param_2[7];
        fVar19 = param_2[5];
        fVar20 = param_2[6];
        fVar21 = param_2[7];
        pfVar23[-4] = fVar7 * *pfVar24 - fVar8 * fVar14;
        pfVar23[-3] = fVar7 * fVar14 + fVar8 * fVar15;
        pfVar23[-2] = fVar9 * fVar19 - fVar10 * fVar13;
        pfVar23[-1] = fVar9 * fVar13 + fVar10 * fVar16;
        *pfVar23 = fVar2 * fVar20 - fVar3 * fVar12;
        pfVar23[1] = fVar2 * fVar12 + fVar3 * fVar17;
        pfVar23[2] = fVar4 * fVar21 - fVar5 * fVar11;
        pfVar23[3] = fVar4 * fVar11 + fVar5 * fVar18;
        pfVar23 = pfVar23 + 8;
        lVar22 = lVar22 + -1;
        param_2 = pfVar24;
      } while (lVar22 != 0);
    }
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



// FUNCTION 1453dcbf0 FUN_1453dcbf0 body=75 status=ok
// SIG undefined FUN_1453dcbf0(void)

/* WARNING: Removing unreachable block (ram,0x0001453dcc13) */

void FUN_1453dcbf0(void)

{
  longlong lVar1;
  
  if (DAT_14c7fe188 == 0) {
    DAT_14c7fe188 = 1;
    lVar1 = cpuid_Version_info(1);
    DAT_14c7fe180 = &PTR_FUN_149d4ab50;
    if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
      DAT_14c7fe180 = &PTR_FUN_149d4aaf0;
    }
  }
  return;
}



// FUNCTION 1453dcc40 FUN_1453dcc40 body=247 status=ok
// SIG undefined FUN_1453dcc40(void)

void FUN_1453dcc40(undefined8 param_1,float *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  float local_res10;
  float fStackX_14;
  
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || (0x7fe < param_3 - 2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fStackX_14 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  local_res10 = (float)*(undefined8 *)param_2;
  uVar2 = param_3 >> 2;
  *param_2 = (fStackX_14 + local_res10) * 0.5;
  param_2[1] = (local_res10 - fStackX_14) * 0.5;
  if (uVar2 != 0) {
    (**(code **)(DAT_14c7fe180 + 8))(param_2,uVar2,uVar2);
  }
  param_3 = param_3 >> 1;
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 < 0x801)) {
    FUN_1453de3c0(param_1,param_2,param_3,0,*(undefined8 *)(DAT_14c7fe180 + 0x20),
                  *(undefined8 *)(DAT_14c7fe180 + 0x28));
    if (7 < param_3) {
      FUN_1453de320(param_1,param_3,*(undefined8 *)(DAT_14c7fe180 + 0x10));
    }
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1453dcd40 FUN_1453dcd40 body=211 status=ok
// SIG undefined FUN_1453dcd40(void)

void FUN_1453dcd40(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  code *pcVar1;
  longlong lVar2;
  
  if (((param_5 != 0) && ((param_5 & param_5 - 1) == 0)) && (param_5 - 2 < 0x7ff)) {
    if (param_5 * 4 < 0x801) {
      lVar2 = param_5 * 8 + 0xc73e950;
    }
    else {
      lVar2 = (param_5 >> 1) * 8 + 0xc73f950;
    }
    (**(code **)(DAT_14c7fe180 + 0x58))
              (param_3,param_4,param_5,param_5 >> 1,IMAGE_DOS_HEADER_140000000.e_magic + lVar2);
    FUN_1453dcc40(param_4,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001453dce0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14c7fe180 + 0x40))(param_1,param_2,param_4,param_5);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1453dce20 FUN_1453dce20 body=224 status=ok
// SIG undefined FUN_1453dce20(void)

void FUN_1453dce20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  code *pcVar1;
  longlong lVar2;
  
  if (((param_6 != 0) && ((param_6 & param_6 - 1) == 0)) && (param_6 - 2 < 0x7ff)) {
    if (param_6 * 4 < 0x801) {
      lVar2 = param_6 * 8 + 0xc73e950;
    }
    else {
      lVar2 = (param_6 >> 1) * 8 + 0xc73f950;
    }
    (**(code **)(DAT_14c7fe180 + 0x58))
              (param_4,param_5,param_6,param_6 >> 1,IMAGE_DOS_HEADER_140000000.e_magic + lVar2);
    FUN_1453dcc40(param_5,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x0001453dcefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14c7fe180 + 0x48))(param_1,param_2,param_3,param_5);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1453dcf00 FUN_1453dcf00 body=860 status=ok
// SIG undefined FUN_1453dcf00(void)

void FUN_1453dcf00(longlong param_1,ulonglong param_2,longlong param_3)

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
  float fVar14;
  
  lVar3 = param_3 * 8;
  pfVar7 = (float *)(param_1 + 8);
  pfVar8 = (float *)(param_1 + -8 + param_3 * 0x10);
  uVar5 = 1;
  if (1 < param_2) {
    if (3 < param_2 - 1) {
      pfVar6 = (float *)(&DAT_14c73e96c + lVar3);
      lVar4 = (param_2 - 5 >> 2) + 1;
      uVar5 = lVar4 * 4 + 1;
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
    }
    for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
      fVar9 = *(float *)(lVar3 + 0x14c73e954 + uVar5 * 8);
      fVar10 = (pfVar7[1] + pfVar8[1]) * 0.5;
      fVar12 = (*pfVar8 - *pfVar7) * 0.5;
      fVar13 = pfVar7[1] - fVar10;
      fVar14 = *pfVar7 + fVar12;
      fVar11 = *(float *)(&DAT_14c73e950 + uVar5 * 8 + lVar3) * fVar12 - fVar9 * fVar10;
      fVar9 = fVar9 * fVar12 + *(float *)(&DAT_14c73e950 + uVar5 * 8 + lVar3) * fVar10;
      pfVar7[1] = fVar11 + fVar13;
      *pfVar7 = fVar9 + fVar14;
      pfVar7 = pfVar7 + 2;
      *pfVar8 = fVar14 - fVar9;
      pfVar8[1] = fVar11 - fVar13;
      pfVar8 = pfVar8 + -2;
    }
  }
  return;
}



// FUNCTION 1453dd260 FUN_1453dd260 body=855 status=ok
// SIG undefined FUN_1453dd260(void)

void FUN_1453dd260(longlong param_1,ulonglong param_2,longlong param_3)

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
  float fVar14;
  
  lVar3 = param_3 * 8;
  pfVar7 = (float *)(param_1 + 8);
  pfVar8 = (float *)(param_1 + -8 + param_3 * 0x10);
  uVar5 = 1;
  if (1 < param_2) {
    if (3 < param_2 - 1) {
      pfVar6 = (float *)(&DAT_14c73e96c + lVar3);
      lVar4 = (param_2 - 5 >> 2) + 1;
      uVar5 = lVar4 * 4 + 1;
      do {
        fVar11 = (*pfVar7 - *pfVar8) * 0.5;
        fVar9 = (pfVar7[1] + pfVar8[1]) * 0.5;
        fVar13 = *pfVar7 - fVar11;
        fVar12 = pfVar7[1] - fVar9;
        fVar10 = pfVar6[-5] * fVar11 - pfVar6[-4] * fVar9;
        fVar9 = pfVar6[-5] * fVar9 + pfVar6[-4] * fVar11;
        pfVar7[1] = fVar10 + fVar12;
        *pfVar7 = fVar13 - fVar9;
        *pfVar8 = fVar9 + fVar13;
        pfVar8[1] = fVar10 - fVar12;
        fVar11 = (pfVar7[2] - pfVar8[-2]) * 0.5;
        fVar9 = (pfVar7[3] + pfVar8[-1]) * 0.5;
        fVar13 = pfVar7[2] - fVar11;
        fVar12 = pfVar7[3] - fVar9;
        fVar10 = pfVar6[-3] * fVar11 - pfVar6[-2] * fVar9;
        fVar9 = pfVar6[-3] * fVar9 + pfVar6[-2] * fVar11;
        pfVar7[3] = fVar10 + fVar12;
        pfVar7[2] = fVar13 - fVar9;
        pfVar8[-2] = fVar9 + fVar13;
        pfVar8[-1] = fVar10 - fVar12;
        fVar11 = (pfVar7[4] - pfVar8[-4]) * 0.5;
        fVar10 = (pfVar7[5] + pfVar8[-3]) * 0.5;
        fVar13 = pfVar7[4] - fVar11;
        fVar12 = pfVar7[5] - fVar10;
        fVar9 = pfVar6[-1] * fVar10 + *pfVar6 * fVar11;
        fVar10 = pfVar6[-1] * fVar11 - *pfVar6 * fVar10;
        pfVar7[4] = fVar13 - fVar9;
        pfVar7[5] = fVar10 + fVar12;
        pfVar8[-4] = fVar9 + fVar13;
        pfVar8[-3] = fVar10 - fVar12;
        pfVar1 = pfVar6 + 2;
        pfVar2 = pfVar6 + 1;
        pfVar6 = pfVar6 + 8;
        fVar11 = (pfVar7[6] - pfVar8[-6]) * 0.5;
        fVar9 = (pfVar7[7] + pfVar8[-5]) * 0.5;
        fVar13 = pfVar7[6] - fVar11;
        fVar12 = pfVar7[7] - fVar9;
        fVar10 = *pfVar2 * fVar11 - *pfVar1 * fVar9;
        fVar9 = *pfVar2 * fVar9 + *pfVar1 * fVar11;
        pfVar7[7] = fVar10 + fVar12;
        pfVar7[6] = fVar13 - fVar9;
        pfVar7 = pfVar7 + 8;
        pfVar8[-6] = fVar9 + fVar13;
        pfVar8[-5] = fVar10 - fVar12;
        pfVar8 = pfVar8 + -8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
      fVar9 = *(float *)(lVar3 + 0x14c73e954 + uVar5 * 8);
      fVar12 = (*pfVar7 - *pfVar8) * 0.5;
      fVar10 = (pfVar7[1] + pfVar8[1]) * 0.5;
      fVar14 = *pfVar7 - fVar12;
      fVar13 = pfVar7[1] - fVar10;
      fVar11 = *(float *)(&DAT_14c73e950 + uVar5 * 8 + lVar3) * fVar12 - fVar9 * fVar10;
      fVar9 = fVar9 * fVar12 + *(float *)(&DAT_14c73e950 + uVar5 * 8 + lVar3) * fVar10;
      pfVar7[1] = fVar11 + fVar13;
      *pfVar7 = fVar14 - fVar9;
      pfVar7 = pfVar7 + 2;
      *pfVar8 = fVar9 + fVar14;
      pfVar8[1] = fVar11 - fVar13;
      pfVar8 = pfVar8 + -2;
    }
  }
  return;
}



// FUNCTION 1453dd5c0 FUN_1453dd5c0 body=1321 status=ok
// SIG undefined FUN_1453dd5c0(void)

void FUN_1453dd5c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  float fVar16;
  
  if (param_6 < param_7) {
    if (3 < param_7 - param_6) {
      puVar5 = (ushort *)(param_8 + (param_6 + 2) * 2);
      lVar7 = param_3 - param_4;
      pfVar3 = (float *)(param_6 * 8 + 0xc + param_4);
      lVar6 = param_2 - param_4;
      lVar4 = param_5 - param_4;
      lVar2 = ((param_7 - param_6) - 4 >> 2) + 1;
      param_6 = param_6 + lVar2 * 4;
      do {
        fVar14 = *(float *)(lVar4 + -0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar7 + -8 + (longlong)pfVar3);
        fVar9 = fVar14 + *(float *)(lVar7 + -0xc + (longlong)pfVar3);
        fVar14 = fVar14 - *(float *)(lVar7 + -0xc + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + -8 + (longlong)pfVar3);
        fVar12 = pfVar3[-2] + fVar15;
        fVar16 = *(float *)(lVar6 + -0xc + (longlong)pfVar3);
        fVar15 = fVar15 - pfVar3[-2];
        fVar11 = *(float *)(lVar4 + -8 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-2];
        fVar13 = pfVar3[-3] + fVar16;
        fVar16 = fVar16 - pfVar3[-3];
        fVar8 = fVar11 + fVar10;
        fVar10 = fVar10 - fVar11;
        *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar13;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar12;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar13 - fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar12 - fVar8;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar16;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar14 + fVar15;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar16 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar15 - fVar14;
        fVar14 = *(float *)(lVar4 + -4 + (longlong)pfVar3);
        fVar15 = *(float *)(lVar4 + (longlong)pfVar3) + *(float *)(lVar7 + (longlong)pfVar3);
        fVar16 = fVar14 + *(float *)(lVar7 + -4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar6 + -4 + (longlong)pfVar3);
        fVar11 = *(float *)(lVar7 + (longlong)pfVar3) - *(float *)(lVar4 + (longlong)pfVar3);
        fVar14 = fVar14 - *(float *)(lVar7 + -4 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-1];
        fVar9 = pfVar3[-1] + fVar10;
        fVar10 = fVar10 - pfVar3[-1];
        fVar8 = *(float *)(lVar6 + (longlong)pfVar3) + *pfVar3;
        fVar12 = *(float *)(lVar6 + (longlong)pfVar3) - *pfVar3;
        *(float *)(param_1 + uVar1 * 8) = fVar16 + fVar9;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar15 + fVar8;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar9 - fVar16;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar8 - fVar15;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar11 + fVar10;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar14 + fVar12;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar10 - fVar11;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar12 - fVar14;
        uVar1 = (ulonglong)*puVar5;
        fVar14 = *(float *)(lVar4 + 4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar7 + 8 + (longlong)pfVar3);
        fVar9 = fVar14 + *(float *)(lVar7 + 4 + (longlong)pfVar3);
        fVar14 = fVar14 - *(float *)(lVar7 + 4 + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + 8 + (longlong)pfVar3);
        fVar16 = *(float *)(lVar6 + 4 + (longlong)pfVar3);
        fVar12 = pfVar3[2] + fVar15;
        fVar15 = fVar15 - pfVar3[2];
        fVar11 = *(float *)(lVar4 + 8 + (longlong)pfVar3);
        fVar13 = pfVar3[1] + fVar16;
        fVar16 = fVar16 - pfVar3[1];
        fVar8 = fVar11 + fVar10;
        fVar10 = fVar10 - fVar11;
        *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar13;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar12;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar13 - fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar12 - fVar8;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar16;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar14 + fVar15;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar16 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar15 - fVar14;
        fVar14 = *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + 0x10 + (longlong)pfVar3);
        fVar16 = *(float *)(lVar6 + 0xc + (longlong)pfVar3);
        fVar12 = pfVar3[4] + fVar15;
        fVar9 = fVar14 + *(float *)(lVar7 + 0xc + (longlong)pfVar3);
        fVar14 = fVar14 - *(float *)(lVar7 + 0xc + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[1];
        fVar15 = fVar15 - pfVar3[4];
        fVar11 = *(float *)(lVar4 + 0x10 + (longlong)pfVar3);
        fVar13 = pfVar3[3] + fVar16;
        fVar16 = fVar16 - pfVar3[3];
        fVar8 = fVar11 + fVar10;
        pfVar3 = pfVar3 + 8;
        fVar10 = fVar10 - fVar11;
        puVar5 = puVar5 + 4;
        lVar2 = lVar2 + -1;
        *(float *)(param_1 + uVar1 * 8) = fVar9 + fVar13;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar8 + fVar12;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar13 - fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar12 - fVar8;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar16;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar14 + fVar15;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar16 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar15 - fVar14;
      } while (lVar2 != 0);
    }
    if (param_6 < param_7) {
      param_3 = param_3 - param_4;
      pfVar3 = (float *)(param_4 + 4 + param_6 * 8);
      do {
        fVar14 = *(float *)((param_5 - param_4) + -4 + (longlong)pfVar3);
        fVar10 = *(float *)((longlong)pfVar3 + (param_5 - param_4));
        fVar15 = *(float *)((longlong)pfVar3 + (param_2 - param_4));
        fVar11 = fVar10 + *(float *)((longlong)pfVar3 + param_3);
        fVar8 = fVar14 + *(float *)(param_3 + -4 + (longlong)pfVar3);
        fVar16 = *(float *)((param_2 - param_4) + -4 + (longlong)pfVar3);
        fVar10 = *(float *)((longlong)pfVar3 + param_3) - fVar10;
        fVar14 = fVar14 - *(float *)(param_3 + -4 + (longlong)pfVar3);
        uVar1 = (ulonglong)*(ushort *)(param_8 + param_6 * 2);
        fVar12 = pfVar3[-1] + fVar16;
        fVar16 = fVar16 - pfVar3[-1];
        fVar9 = fVar15 + *pfVar3;
        fVar15 = fVar15 - *pfVar3;
        param_6 = param_6 + 1;
        pfVar3 = pfVar3 + 2;
        *(float *)(param_1 + uVar1 * 8) = fVar8 + fVar12;
        *(float *)(param_1 + 0x10 + uVar1 * 8) = fVar12 - fVar8;
        *(float *)(param_1 + 4 + uVar1 * 8) = fVar11 + fVar9;
        *(float *)(param_1 + 0x14 + uVar1 * 8) = fVar9 - fVar11;
        *(float *)(param_1 + 8 + uVar1 * 8) = fVar10 + fVar16;
        *(float *)(param_1 + 0xc + uVar1 * 8) = fVar14 + fVar15;
        *(float *)(param_1 + 0x18 + uVar1 * 8) = fVar16 - fVar10;
        *(float *)(param_1 + 0x1c + uVar1 * 8) = fVar15 - fVar14;
      } while (param_6 < param_7);
    }
  }
  return;
}



// FUNCTION 1453ddaf0 FUN_1453ddaf0 body=1036 status=ok
// SIG undefined FUN_1453ddaf0(void)

void FUN_1453ddaf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
    }
    if (param_6 < param_7) {
      param_2 = param_2 - param_4;
      param_5 = param_5 - param_4;
      pfVar4 = (float *)(param_4 + 4 + param_6 * 8);
      param_3 = param_3 - param_4;
      do {
        uVar3 = (ulonglong)*(ushort *)(param_8 + param_6 * 2);
        param_6 = param_6 + 1;
        *(float *)(param_1 + uVar3 * 8) = pfVar4[-1] + *(float *)(param_2 + -4 + (longlong)pfVar4);
        *(float *)(param_1 + 4 + uVar3 * 8) = *pfVar4 + *(float *)((longlong)pfVar4 + param_2);
        *(float *)(param_1 + 8 + uVar3 * 8) =
             *(float *)(param_2 + -4 + (longlong)pfVar4) - pfVar4[-1];
        *(float *)(param_1 + 0xc + uVar3 * 8) = *(float *)((longlong)pfVar4 + param_2) - *pfVar4;
        *(float *)(param_1 + 0x10 + uVar3 * 8) =
             *(float *)(param_3 + -4 + (longlong)pfVar4) +
             *(float *)(param_5 + -4 + (longlong)pfVar4);
        *(float *)(param_1 + 0x14 + uVar3 * 8) =
             *(float *)((longlong)pfVar4 + param_3) + *(float *)((longlong)pfVar4 + param_5);
        *(float *)(param_1 + 0x18 + uVar3 * 8) =
             *(float *)(param_5 + -4 + (longlong)pfVar4) -
             *(float *)(param_3 + -4 + (longlong)pfVar4);
        pfVar1 = (float *)((longlong)pfVar4 + param_5);
        pfVar2 = (float *)((longlong)pfVar4 + param_3);
        pfVar4 = pfVar4 + 2;
        *(float *)(param_1 + 0x1c + uVar3 * 8) = *pfVar1 - *pfVar2;
      } while (param_6 < param_7);
    }
  }
  return;
}



// FUNCTION 1453ddf00 FUN_1453ddf00 body=520 status=ok
// SIG undefined FUN_1453ddf00(void)

void FUN_1453ddf00(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,ulonglong param_4,
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
  
  uVar10 = 1;
  *param_1 = *param_2;
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
    }
    if (uVar10 < param_4) {
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
  }
  return;
}



// FUNCTION 1453de110 FUN_1453de110 body=527 status=ok
// SIG undefined FUN_1453de110(void)

void FUN_1453de110(float *param_1,float *param_2,ulonglong param_3,ulonglong param_4,
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
    }
    if (uVar10 < param_4) {
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
  }
  return;
}



// FUNCTION 1453de320 FUN_1453de320 body=147 status=ok
// SIG undefined FUN_1453de320(void)

void FUN_1453de320(longlong param_1,ulonglong param_2,code *param_3)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined2 local_res10;
  undefined2 local_res12;
  
  puVar2 = (undefined2 *)&DAT_14c73e8a0;
  uVar1 = param_2 >> 2;
  if (0x100 < param_2) {
    local_res12 = (undefined2)uVar1;
    local_res10 = 0;
    puVar2 = &local_res10;
    FUN_1453de320(param_1,uVar1 * 2);
    FUN_1453de320(uVar1 * 0x10 + param_1,uVar1,param_3);
    FUN_1453de320(param_1 + uVar1 * 0x18,uVar1,param_3);
  }
  (*param_3)(param_1,puVar2,uVar1);
  return;
}



// FUNCTION 1453de3c0 FUN_1453de3c0 body=384 status=ok
// SIG undefined FUN_1453de3c0(void)

void FUN_1453de3c0(undefined8 param_1,longlong param_2,ulonglong param_3,char param_4,code *param_5,
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
  puVar1 = &DAT_14c743950 + param_3 * 2;
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



// FUNCTION 1453de540 FUN_1453de540 body=20 status=ok
// SIG undefined FUN_1453de540(void)

undefined4 FUN_1453de540(void)

{
  FUN_1453de5e0();
  return DAT_14c744154;
}



// FUNCTION 1453de560 FUN_1453de560 body=77 status=ok
// SIG undefined FUN_1453de560(void)

int FUN_1453de560(void)

{
  undefined8 uVar1;
  
  if (DAT_14c744150 == -1) {
    FUN_145155ed0(&DAT_14c744150,1);
    FUN_1453de5e0();
    uVar1 = 1;
    if (DAT_14c744154 != 1) {
      uVar1 = 500;
    }
    FUN_145155ed0(&DAT_14c744150,uVar1);
  }
  return DAT_14c744150;
}



// FUNCTION 1453de5b0 FUN_1453de5b0 body=40 status=ok
// SIG undefined FUN_1453de5b0(void)

int FUN_1453de5b0(uint param_1)

{
  FUN_1453de5e0();
  return (int)(char)(&DAT_14c7fe190)[(ulonglong)param_1 % (ulonglong)DAT_14c744154];
}



// FUNCTION 1453de5e0 FUN_1453de5e0 body=988 status=ok
// SIG undefined FUN_1453de5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001453de8b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453de5e0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  INT_PTR IVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  int iVar22;
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [32];
  ulonglong local_488 [3];
  _SYSTEM_INFO local_470;
  ulonglong local_438 [64];
  ulonglong local_238 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_488;
  puVar14 = auStack_4a8;
  if (DAT_14c7fe1d0 != 0) goto LAB_1453de9a8;
  uVar11 = 0;
  DAT_14c7fe1d0 = 1;
  local_470.dwNumberOfProcessors = 0;
  puVar21 = local_438;
  puVar6 = local_238;
  uStack_4b0 = 0x1453de64f;
  GetSystemInfo(&local_470);
  if (local_470.dwNumberOfProcessors != 0) {
    DAT_14c744154 = local_470.dwNumberOfProcessors;
  }
  if (0x40 < DAT_14c744154) {
    DAT_14c744154 = 0x40;
  }
  uStack_4b0 = 0x1453de67d;
  hModule = GetModuleHandleA("KERNEL32");
  pbVar15 = &DAT_14c7fe190;
  puVar14 = auStack_4a8;
  if (hModule == (HMODULE)0x0) {
LAB_1453de8a7:
    uVar8 = (ulonglong)DAT_14c744154;
  }
  else {
    uStack_4b0 = 0x1453de69d;
    pFVar4 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
    puVar14 = auStack_4a8;
    if (pFVar4 == (FARPROC)0x0) goto LAB_1453de8a7;
    local_488[0]._0_4_ = 0;
    uStack_4b0 = 0x1453de6b5;
    (*pFVar4)(0,local_488);
    puVar14 = auStack_4a8;
    if ((uint)local_488[0] == 0) goto LAB_1453de8a7;
    uVar8 = (ulonglong)(uint)local_488[0] + 0xf;
    if (uVar8 <= (uint)local_488[0]) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_4b0 = 0x1453de6df;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    puVar12 = (ulonglong *)((longlong)local_488 + lVar2);
    puVar14 = auStack_4a8 + lVar2;
    if (puVar12 == (ulonglong *)0x0) goto LAB_1453de8a7;
    *(undefined8 *)(auStack_4a8 + lVar2 + -8) = 0x1453de6f9;
    IVar5 = (*pFVar4)(puVar12,local_488);
    puVar14 = auStack_4a8 + lVar2;
    if ((int)IVar5 == 0) goto LAB_1453de8a7;
    uVar8 = (ulonglong)DAT_14c744154;
    if (0x1f < (uint)local_488[0]) {
      do {
        if ((int)puVar12[1] == 0) {
          if ((uint)((longlong)puVar21 - (longlong)local_438 >> 3) < DAT_14c744154) {
            *puVar21 = *puVar12;
            puVar21 = puVar21 + 1;
          }
        }
        else if (((int)puVar12[1] == 3) &&
                ((uint)((longlong)puVar6 - (longlong)local_238 >> 3) < DAT_14c744154)) {
          *puVar6 = *puVar12;
          puVar6 = puVar6 + 1;
        }
        local_488[0]._0_4_ = (uint)local_488[0] - 0x20;
        puVar12 = puVar12 + 4;
      } while (0x1f < (uint)local_488[0]);
    }
    pbVar13 = &DAT_14c7fe18f + uVar8;
    lVar20 = ((longlong)puVar6 - (longlong)local_238 >> 3) + -1;
    if (-1 < lVar20) {
LAB_1453de7d3:
      puVar6 = local_238 + lVar20;
      uVar8 = uVar11;
      uVar10 = uVar11;
LAB_1453de7e4:
      uVar18 = *puVar6;
      if (uVar18 != 0) {
        uVar7 = 1L << ((byte)uVar8 & 0x3f);
        if ((uVar7 & uVar18) != 0) {
          if (pbVar15 <= pbVar13) {
            *pbVar15 = (byte)uVar8;
            pbVar15 = pbVar15 + 1;
          }
          uVar18 = uVar18 & ~(1L << (uVar8 & 0x3f));
          *puVar6 = uVar18;
          for (puVar12 = local_438; puVar12 < puVar21; puVar12 = puVar12 + 1) {
            if ((*puVar12 & uVar7) != 0) {
              *puVar12 = *puVar12 & ~(1L << (uVar8 & 0x3f));
              uVar7 = 0x3f;
              if (uVar8 < 0x3f) goto LAB_1453de844;
              break;
            }
          }
        }
        goto LAB_1453de875;
      }
      goto LAB_1453de881;
    }
    puVar14 = auStack_4a8 + lVar2;
    if (puVar21 != local_438) {
      local_238[0] = 0;
      lVar20 = 1;
      puVar6 = local_438;
      uVar8 = uVar11;
      if (local_438 < puVar21) {
        do {
          uVar8 = uVar8 | *puVar6;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar21);
        local_238[0] = uVar8;
      }
      goto LAB_1453de7d3;
    }
  }
  lVar2 = cpuid_Version_info(1);
  pcVar9 = (char *)(ulonglong)*(uint *)(lVar2 + 0xc);
  uVar16 = (uint)uVar8;
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
    if (uVar16 != 0) {
      pcVar9 = &DAT_14c7fe190;
      do {
        cVar3 = (char)uVar11;
        uVar19 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar19;
        *pcVar9 = cVar3 + '\x01';
        pcVar9 = pcVar9 + 1;
      } while (uVar19 < uVar16);
    }
    if (0x3f < uVar16 - 1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar14 + -8) = &UNK_1453de9e2;
      FUN_144e2bb84(pcVar9);
    }
    (&DAT_14c7fe190)[uVar16 - 1] = 0;
  }
  else {
    _DAT_14c7fe1d4 = (uint)(uVar8 >> 1);
    if ((uVar8 & 1) != 0) {
      uVar8 = (ulonglong)(uVar16 - 1);
      pbVar15 = &DAT_14c7fe191;
      DAT_14c7fe190 = (undefined1)(uVar16 - 1);
    }
    uVar16 = (uint)(uVar8 >> 1);
    if ((uVar8 & 3) == 0) {
      uVar19 = uVar16 >> 1;
      uVar10 = uVar11;
      pbVar13 = pbVar15;
      if (uVar19 != 0) {
        do {
          *pbVar13 = (char)uVar10 * '\x02' + 1;
          uVar17 = (int)uVar10 + 1;
          pbVar15[(int)uVar10 + uVar19] = (char)uVar10 * '\x02';
          uVar10 = (ulonglong)uVar17;
          pbVar13 = pbVar13 + 1;
        } while (uVar17 < uVar19);
      }
    }
    else {
      uVar10 = uVar11;
      pbVar13 = pbVar15;
      if (uVar16 != 0) {
        do {
          uVar19 = (int)uVar10 + 1;
          *pbVar13 = (char)uVar10 + 1;
          uVar10 = (ulonglong)uVar19;
          pbVar13 = pbVar13 + 1;
        } while (uVar19 < uVar16);
      }
      pbVar15[uVar16 - 1] = 0;
    }
    if (uVar16 != 0) {
      do {
        iVar22 = (int)uVar11;
        uVar11 = (ulonglong)(iVar22 + 1U);
        pbVar15[iVar22 + uVar16] = pbVar15[(uVar16 - iVar22) - 1] + (char)(uVar8 >> 1);
      } while (iVar22 + 1U < uVar16);
    }
  }
LAB_1453de9a8:
  uVar11 = local_38 ^ (ulonglong)local_488;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_1453de9b7;
  FUN_144d8e3a0(uVar11);
  while( true ) {
    if ((uVar1 >> (uVar7 & 0x3f) & 1) != 0) {
      if (pbVar15 <= pbVar13) {
        *pbVar13 = (byte)uVar7;
        pbVar13 = pbVar13 + -1;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar18 = uVar18 & ~(1L << (uVar7 & 0x3f));
      *puVar12 = uVar1 & ~(1L << (uVar7 & 0x3f));
      *puVar6 = uVar18;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 <= uVar8) break;
LAB_1453de844:
    uVar1 = *puVar12;
    if (uVar1 == 0) break;
  }
LAB_1453de875:
  uVar8 = uVar8 + 1;
  if (uVar8 < 0x40) goto LAB_1453de7e4;
LAB_1453de881:
  puVar6 = puVar6 + -1;
  lVar20 = lVar20 + -1;
  uVar8 = uVar11;
  if (lVar20 < 0) goto code_r0x0001453de88f;
  goto LAB_1453de7e4;
code_r0x0001453de88f:
  _DAT_14c7fe1d4 = (uint)uVar10;
  puVar14 = auStack_4a8 + lVar2;
  if (0x40 < _DAT_14c7fe1d4) {
    _DAT_14c7fe1d4 = 0x40;
    puVar14 = auStack_4a8 + lVar2;
  }
  goto LAB_1453de9a8;
}



// FUNCTION 1453de9f0 FUN_1453de9f0 body=54 status=ok
// SIG undefined FUN_1453de9f0(void)

void FUN_1453de9f0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 0xd) = 0;
    *(undefined8 *)(param_1 + 0xf) = 0;
    *(undefined8 *)(param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 0x13) = 0;
    *(undefined8 *)(param_1 + 0x15) = 0;
    *(undefined8 *)(param_1 + 0x17) = 0;
    *(undefined8 *)(param_1 + 0x19) = 0;
    *(undefined8 *)(param_1 + 0x1b) = 0;
    *(undefined8 *)(param_1 + 0x1d) = 0;
    *(undefined8 *)(param_1 + 0x1f) = 0;
    *(undefined8 *)(param_1 + 0x21) = 0;
    *(undefined8 *)(param_1 + 0x23) = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1453dea30 FUN_1453dea30 body=450 status=ok
// SIG undefined FUN_1453dea30(void)

void FUN_1453dea30(undefined4 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_2[6] != 0) && (param_2[7] != 0)) {
    param_1[7] = 3;
    param_1[4] = (float)(int)*param_2;
    param_1[5] = (float)(int)param_2[1];
    param_1[6] = (float)(int)param_2[2];
    fVar6 = ABS((float)((int)param_2[3] - (int)*param_2)) / (float)(int)param_2[6];
    param_1[1] = fVar6;
    fVar5 = ABS((float)((int)param_2[4] - (int)param_2[1])) / (float)(int)param_2[6];
    param_1[2] = fVar5;
    sVar1 = param_2[2];
    sVar2 = param_2[5];
    sVar3 = param_2[6];
    *(undefined2 *)(param_1 + 0x24) = 0xfa;
    param_1[0x1a] = 0x3f800000;
    param_1[0xe] = 0x40400000;
    fVar4 = ABS((float)((int)sVar2 - (int)sVar1)) / (float)(int)sVar3;
    param_1[0x14] = fVar6 * 6.0;
    param_1[0x16] = fVar4 * 6.0;
    param_1[0x15] = fVar5 * 6.0;
    param_1[8] = fVar6 * 0.5;
    param_1[10] = fVar4 * 0.5;
    param_1[9] = fVar5 * 0.5;
    param_1[3] = fVar4;
    param_1[0x18] = fVar5 * fVar5 + fVar5 * fVar5;
    param_1[0x17] = fVar6 * fVar6 + fVar6 * fVar6;
    *param_1 = 1;
    fVar7 = fVar6 * 3.0 * fVar6 * 3.0;
    fVar6 = fVar5 * 3.0 * fVar5 * 3.0;
    fVar5 = fVar4 * 3.0 * fVar4 * 3.0;
    param_1[0x19] = fVar4 * fVar4 + fVar4 * fVar4;
    param_1[0xb] = fVar7 + fVar7;
    param_1[0xc] = fVar6 + fVar6;
    param_1[0xd] = fVar5 + fVar5;
  }
  return;
}



// FUNCTION 1453dec00 FUN_1453dec00 body=1090 status=ok
// SIG undefined FUN_1453dec00(void)

undefined4
FUN_1453dec00(int *param_1,short param_2,short param_3,short param_4,float *param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  uVar4 = *(short *)((longlong)param_1 + 0x92) + 1;
  *(ushort *)((longlong)param_1 + 0x92) = uVar4;
  iVar1 = (int)param_2;
  iVar10 = param_1[0x21] + iVar1;
  iVar5 = (int)param_3;
  param_1[0x21] = iVar10;
  iVar7 = (int)param_4;
  param_1[0x23] = param_1[0x23] + iVar7;
  param_1[0x22] = param_1[0x22] + iVar5;
  if (uVar4 == 1) {
    param_1[0x1b] = iVar1;
    param_1[0x1c] = iVar5;
    param_1[0x1d] = iVar7;
    param_1[0x1e] = iVar1;
    param_1[0x1f] = iVar5;
    iVar2 = iVar1;
    iVar6 = iVar5;
    iVar3 = iVar7;
LAB_1453ded00:
    param_1[0x20] = iVar7;
    iVar9 = iVar7;
  }
  else {
    iVar2 = param_1[0x1b];
    if (param_1[0x1b] < iVar1) {
      param_1[0x1b] = iVar1;
      iVar2 = iVar1;
    }
    iVar6 = param_1[0x1e];
    if (iVar1 < param_1[0x1e]) {
      param_1[0x1e] = iVar1;
      iVar6 = iVar1;
    }
    iVar1 = iVar6;
    iVar6 = param_1[0x1c];
    if (param_1[0x1c] < iVar5) {
      param_1[0x1c] = iVar5;
      iVar6 = iVar5;
    }
    iVar3 = param_1[0x1f];
    if (iVar5 < param_1[0x1f]) {
      param_1[0x1f] = iVar5;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    iVar3 = param_1[0x1d];
    if (param_1[0x1d] < iVar7) {
      param_1[0x1d] = iVar7;
      iVar3 = iVar7;
    }
    iVar9 = param_1[0x20];
    if (iVar7 < iVar9) goto LAB_1453ded00;
  }
  if (uVar4 != *(ushort *)(param_1 + 0x24)) {
    return 0;
  }
  iVar7 = param_1[0x13];
  param_1[0x13] = iVar7 + 1;
  fVar11 = (float)*(ushort *)(param_1 + 0x24);
  fVar15 = (float)param_1[0x22] / fVar11;
  fVar16 = (float)param_1[0x23] / fVar11;
  fVar11 = (float)iVar10 / fVar11;
  fVar14 = (fVar11 - (float)iVar1) * (fVar11 - (float)iVar1) +
           ((float)iVar2 - fVar11) * ((float)iVar2 - fVar11);
  fVar12 = (fVar15 - (float)iVar5) * (fVar15 - (float)iVar5) +
           ((float)iVar6 - fVar15) * ((float)iVar6 - fVar15);
  fVar13 = (fVar16 - (float)iVar9) * (fVar16 - (float)iVar9) +
           ((float)iVar3 - fVar16) * ((float)iVar3 - fVar16);
  if (((((float)param_1[0x17] <= fVar14) || ((float)param_1[0x18] <= fVar12)) ||
      ((float)param_1[0x19] <= fVar13)) || ((*(byte *)(param_1 + 7) & 1) == 0)) {
    if (((fVar14 < (float)param_1[0xb]) && (fVar12 < (float)param_1[0xc])) &&
       ((fVar13 < (float)param_1[0xd] && ((*(byte *)(param_1 + 7) & 2) != 0)))) {
      param_1[0x10] = param_1[0x10] + param_1[0x22];
      param_1[0x11] = param_1[0x11] + param_1[0x23];
      param_1[0xf] = param_1[0xf] + iVar10;
      param_1[0x12] = param_1[0x12] + 1;
    }
    if (iVar7 + 1 != 6) goto LAB_1453defea;
    if (3 < (uint)param_1[0x12]) {
      iVar1 = param_1[0x10];
      iVar5 = param_1[0x11];
      fVar16 = (float)((uint)*(ushort *)(param_1 + 0x24) * param_1[0x12]);
      fVar12 = (float)param_1[4] - (float)param_1[0xf] / fVar16;
      fVar11 = (float)param_1[8];
      fVar15 = fVar11;
      if ((fVar12 <= fVar11) && (fVar15 = -fVar11, -fVar11 <= fVar12)) {
        fVar15 = fVar12;
      }
      *param_5 = (float)param_1[4] - fVar15;
      fVar11 = (float)param_1[9];
      fVar12 = (float)param_1[5] - (float)iVar1 / fVar16;
      fVar15 = fVar11;
      if ((fVar12 <= fVar11) && (fVar15 = -fVar11, -fVar11 <= fVar12)) {
        fVar15 = fVar12;
      }
      param_5[1] = (float)param_1[5] - fVar15;
      fVar11 = (float)param_1[6];
      fVar15 = (float)param_1[10];
      fVar16 = fVar11 - (float)iVar5 / fVar16;
      if (fVar16 <= fVar15) goto LAB_1453defa5;
      goto LAB_1453defa9;
    }
  }
  else {
    fVar12 = (float)param_1[0x14];
    fVar11 = (float)param_1[4] - fVar11;
    fVar13 = fVar12;
    if ((fVar11 <= fVar12) && (fVar13 = -fVar12, -fVar12 <= fVar11)) {
      fVar13 = fVar11;
    }
    *param_5 = (float)param_1[4] - fVar13;
    fVar11 = (float)param_1[0x15];
    fVar15 = (float)param_1[5] - fVar15;
    fVar12 = fVar11;
    if ((fVar15 <= fVar11) && (fVar12 = -fVar11, -fVar11 <= fVar15)) {
      fVar12 = fVar15;
    }
    param_5[1] = (float)param_1[5] - fVar12;
    fVar11 = (float)param_1[6];
    fVar15 = (float)param_1[0x16];
    fVar16 = fVar11 - fVar16;
    if (fVar16 <= fVar15) {
LAB_1453defa5:
      fVar15 = -fVar15;
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
    }
LAB_1453defa9:
    param_5[2] = fVar11 - fVar15;
    FUN_1453df050(param_1,param_5,param_6);
    uVar8 = 1;
    param_1[4] = (int)*param_5;
    param_1[5] = (int)param_5[1];
    param_1[6] = (int)param_5[2];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
LAB_1453defea:
  *(undefined2 *)((longlong)param_1 + 0x92) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return uVar8;
}



// FUNCTION 1453df050 FUN_1453df050 body=120 status=ok
// SIG undefined FUN_1453df050(void)

void FUN_1453df050(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *param_2;
  if (fVar1 <= fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = -(fVar1 - fVar2);
  }
  *param_3 = fVar2;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = param_2[1];
  if (fVar1 <= fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = -(fVar1 - fVar2);
  }
  param_3[1] = fVar2;
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = param_2[2];
  if (fVar2 < fVar1) {
    param_3[2] = -(fVar1 - fVar2);
    return;
  }
  param_3[2] = fVar2 - fVar1;
  return;
}



// FUNCTION 1453df0d0 FUN_1453df0d0 body=58 status=ok
// SIG undefined FUN_1453df0d0(void)

longlong * FUN_1453df0d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453df110 FUN_1453df110 body=49 status=ok
// SIG undefined FUN_1453df110(void)

int FUN_1453df110(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453df150 FUN_1453df150 body=77 status=ok
// SIG undefined FUN_1453df150(void)

undefined8 FUN_1453df150(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453df200 FUN_1453df200 body=42 status=ok
// SIG undefined FUN_1453df200(void)

undefined1 FUN_1453df200(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453df230 FUN_1453df230 body=42 status=ok
// SIG undefined FUN_1453df230(void)

undefined1 FUN_1453df230(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453df260 FUN_1453df260 body=42 status=ok
// SIG undefined FUN_1453df260(void)

undefined1 FUN_1453df260(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453df290 FUN_1453df290 body=43 status=ok
// SIG undefined FUN_1453df290(void)

undefined8 * FUN_1453df290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453df2c0 FUN_1453df2c0 body=140 status=ok
// SIG undefined FUN_1453df2c0(void)

undefined8 * FUN_1453df2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4abd0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c744158;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453df1e0;
  param_1[6] = FUN_1453df200;
  param_1[7] = FUN_1453df230;
  param_1[8] = FUN_1453df260;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4abf8;
  param_1[9] = FUN_1453df380;
  param_1[10] = FUN_1453df3e0;
  param_1[0xb] = FUN_1453df460;
  param_1[0xc] = FUN_1453df4c0;
  return param_1;
}



// FUNCTION 1453df350 FUN_1453df350 body=43 status=ok
// SIG undefined FUN_1453df350(void)

undefined8 * FUN_1453df350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453df380 FUN_1453df380 body=86 status=ok
// SIG undefined FUN_1453df380(void)

void FUN_1453df380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_1453df0d0(&local_res8,param_1,param_3,param_4,0xfffffffffffffffe);
    (*(code *)**(undefined8 **)*puVar2)();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453df3e0 FUN_1453df3e0 body=128 status=ok
// SIG undefined FUN_1453df3e0(void)

void FUN_1453df3e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_1453df0d0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_145169c00(local_res8,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}


