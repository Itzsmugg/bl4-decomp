// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ee056c FUN_145ee056c body=138 status=ok
// SIG undefined FUN_145ee056c(void)

undefined1 * FUN_145ee056c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ee0568;
}



// FUNCTION 145ee05f6 FUN_145ee05f6 body=153 status=ok
// SIG undefined FUN_145ee05f6(void)

void FUN_145ee05f6(longlong *param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[0x24];
  _Src = (void *)param_1[0x23];
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x94) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_140a3dae8(param_1 + 0x11,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x9c) = *(undefined1 *)((longlong)param_1 + 300);
  *(int *)(param_1 + 0x13) = (int)param_1[0x25];
                    /* WARNING: Could not recover jumptable at 0x000145ee066c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 145ee068f FUN_145ee068f body=35 status=ok
// SIG undefined FUN_145ee068f(void)

void FUN_145ee068f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14158728a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b87f550;
  return;
}



// FUNCTION 145ee06b2 FUN_145ee06b2 body=290 status=ok
// SIG undefined FUN_145ee06b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee06b2(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb760) {
    FUN_144b3d300(&DAT_14cbfb760);
    if (DAT_14cbfb760 == -1) {
      uVar1 = FUN_145ee091e();
      FUN_145ee07d4();
      FUN_140db5666(&DAT_14cbfb6b8,0,&DAT_14cbfb650,L"FClearAABBCS",
                    L"/Engine/Private/HairStrands/HairStrandsClusterCulling.usf",L"MainClearAABBCS",
                    5,1,FUN_14909abc0,FUN_14909ab66,&LAB_14667c8e2,&LAB_14909ab62,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cbfb6b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144441691);
      _Init_thread_footer(&DAT_14cbfb760);
    }
  }
  return &DAT_14cbfb6b8;
}



// FUNCTION 145ee07d4 FUN_145ee07d4 body=206 status=ok
// SIG undefined FUN_145ee07d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee07d4(void)

{
  if ((DAT_14cbfb6b7 & 2) == 0) {
    DAT_14cbfb6b7 = DAT_14cbfb6b7 | 2;
    _DAT_14cbfb658 = L"FClearAABBCS";
    _DAT_14cbfb670 = FUN_146826540;
    _DAT_14cbfb678 = FUN_146825d77;
    _DAT_14cbfb680 = FUN_146825fd6;
    _DAT_14cbfb688 = FUN_1407e02ea;
    _DAT_14cbfb690 = FUN_146826273;
    _DAT_14cbfb668 = FUN_14909ab34;
    _DAT_14cbfb6a8 = 0xffffffff000000e0;
    _DAT_14cbfb6b0 = 8;
    DAT_14cbfb6b4 = 0;
    _DAT_14cbfb698 = &LAB_14909ab5e;
    FUN_145ee08a2();
    FUN_1407e00cc(&DAT_14cbfb650);
  }
  return &DAT_14cbfb650;
}



// FUNCTION 145ee08a2 FUN_145ee08a2 body=123 status=ok
// SIG undefined FUN_145ee08a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee08a2(void)

{
  _DAT_14cbfd768 = L"BASE";
  DAT_14cbfd792 = 4;
  _DAT_14cbfd770 = FUN_140b35ae4();
  _DAT_14cbfd778 = DAT_14cbfb660;
  _DAT_14cbfd780 = &LAB_14682652b;
  DAT_14cbfb660 = &DAT_14cbfd768;
  DAT_14cbfb6b5 = DAT_14cbfb6b5 + '\x01';
  _DAT_14cbfd788 = 0x100000000;
  if (*(char *)(_DAT_14cbfd770 + 100) != '\0') {
    DAT_14cbfb6b6 = DAT_14cbfb6b6 + '\x01';
  }
  return;
}



// FUNCTION 145ee091e FUN_145ee091e body=268 status=ok
// SIG undefined FUN_145ee091e(void)

undefined * FUN_145ee091e(void)

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
              0x110) < DAT_14cbfceb0) {
    FUN_144b3d300(&DAT_14cbfceb0);
    if (DAT_14cbfceb0 == -1) {
      FUN_145ee0a2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x51a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfce30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444948a);
      _Init_thread_footer(&DAT_14cbfceb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfce30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee0a2c FUN_145ee0a2c body=226 status=ok
// SIG undefined FUN_145ee0a2c(void)

longlong * FUN_145ee0a2c(longlong *param_1)

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
  pcVar13 = FUN_14667db6e;
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



// FUNCTION 145ee0b14 FUN_145ee0b14 body=132 status=ok
// SIG undefined FUN_145ee0b14(void)

undefined1 * FUN_145ee0b14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x51b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ee0b10;
}



// FUNCTION 145ee0b98 FUN_145ee0b98 body=2301 status=ok
// SIG undefined FUN_145ee0b98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee0b98(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  undefined4 *puVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined8 local_194;
  undefined4 local_18c;
  undefined4 *local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  _DAT_14ca6ba80 = 0xffffffff;
  _DAT_14ca6ba84 = 0x105;
  DAT_14ca6ba86 = 0;
  DAT_14ca6ba78 = &PTR_FUN_14a3337d0;
  FUN_1415eaa34(&DAT_14ca6ba88);
  FUN_1415ea9c8(&DAT_14ca6bb10);
  FUN_1415ea9fe(&DAT_14ca6bb50);
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  local_194 = 0;
  local_18c = 0;
  FUN_1415874d8(&local_178,&local_194);
  uStack_180._0_4_ = 1;
  FUN_140d35044(&local_188,0);
  pdVar14 = &local_178;
  puVar15 = local_188;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  local_194 = 0;
  local_18c = 0;
  FUN_1415874d8(&local_178,&local_194);
  iVar7 = (uint)uStack_180;
  lVar9 = (longlong)(int)(uint)uStack_180;
  uStack_180._0_4_ = (uint)uStack_180 + 1;
  if (uStack_180._4_4_ < (uint)uStack_180) {
    FUN_140d35044(&local_188,iVar7);
  }
  pdVar14 = &local_178;
  puVar15 = local_188 + lVar9 * 0x16;
  for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  local_194 = 0;
  local_18c = 0;
  FUN_1415874d8(&local_178);
  uVar12 = (uint)uStack_180;
  lVar9 = (longlong)(int)(uint)uStack_180;
  uStack_180._0_4_ = (uint)uStack_180 + 1;
  if (uStack_180._4_4_ < (uint)uStack_180) {
    FUN_140d35044(&local_188,uVar12);
  }
  pdVar14 = &local_178;
  puVar15 = local_188 + lVar9 * 0x16;
  for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  local_194 = 0;
  local_18c = 0;
  FUN_1415874d8(&local_178);
  uVar4 = (uint)uStack_180;
  lVar9 = (longlong)(int)(uint)uStack_180;
  uVar12 = (uint)uStack_180 + 1;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
  if (uStack_180._4_4_ < uVar12) {
    FUN_140d35044(&local_188,uVar4);
    uVar12 = (uint)uStack_180;
  }
  pdVar14 = &local_178;
  puVar15 = local_188 + lVar9 * 0x16;
  for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *(undefined4 *)pdVar14;
    pdVar14 = (double *)((longlong)pdVar14 + 4);
    puVar15 = puVar15 + 1;
  }
  FUN_1408e3634(&DAT_14ca6bb10,uVar12,1);
  auVar16._0_8_ = (double)FUN_1408e36f6(&DAT_14ca6ba88,uStack_180 & 0xffffffff,1,1);
  auVar16._8_8_ = extraout_XMM0_Qb;
  if (0 < (int)(uint)uStack_180) {
    lVar9 = 0;
    do {
      puVar15 = local_188;
      lVar10 = DAT_14ca6bb38;
      uVar11 = (ulonglong)(uint)(DAT_14ca6bb40 * (int)lVar9);
      *(undefined4 *)(DAT_14ca6bb38 + 8 + uVar11) = local_188[lVar9 * 0x16 + 2];
      *(undefined8 *)(lVar10 + uVar11) = *(undefined8 *)(local_188 + lVar9 * 0x16);
      lVar10 = DAT_14ca6bae8;
      auVar16 = pmovsxbd(auVar16,local_188[lVar9 * 0x16 + 0x14]);
      fVar25 = (float)auVar16._0_4_ * 0.007874016;
      fVar26 = (float)auVar16._4_4_ * 0.007874016;
      fVar27 = (float)auVar16._8_4_ * 0.007874016;
      auVar17 = pmovsxbd(auVar16,local_188[lVar9 * 0x16 + 0x13]);
      fVar18 = (float)auVar17._0_4_ * 0.007874016;
      fVar19 = (float)auVar17._4_4_ * 0.007874016;
      fVar20 = (float)auVar17._8_4_ * 0.007874016;
      local_168 = (double)fVar20;
      local_170 = (double)fVar19;
      local_178 = (double)fVar18;
      dVar3 = (double)((float)auVar16._0_4_ * 0.007874016);
      dVar22 = (double)((float)auVar16._12_4_ * 0.007874016);
      dVar2 = (double)((float)auVar16._8_4_ * 0.007874016);
      dVar1 = (double)((float)auVar16._4_4_ * 0.007874016);
      fVar24 = (float)((dVar3 * local_170 - dVar1 * local_178) * dVar22);
      fVar23 = (float)((dVar2 * local_178 - dVar3 * local_168) * dVar22);
      fVar21 = (float)((dVar1 * local_168 - dVar2 * local_170) * dVar22);
      if (DAT_14ca6bb09 == '\x01') {
        local_1a0 = lVar9 * 0x10;
        iVar7 = (int)ROUND(fVar18 * 32767.0 + fVar18 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(DAT_14ca6bae8 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar19 * 32767.0 + fVar19 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 2 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar20 * 32767.0 + fVar20 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        if (iVar7 < -0x7fff) {
          iVar7 = -0x8000;
        }
        *(short *)(lVar10 + 4 + local_1a0) = (short)iVar7;
        *(undefined2 *)(lVar10 + 6 + local_1a0) = 0x7fff;
        local_128 = (double)fVar27;
        local_130 = (double)fVar26;
        local_138 = (double)fVar25;
        local_148 = (double)fVar24;
        local_150 = (double)fVar23;
        local_158 = (double)fVar21;
        local_160 = 0;
        local_140 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0x3ff0000000000000;
        auVar16._0_8_ = (double)FUN_144a91046();
        auVar16._8_8_ = extraout_XMM0_Qb_01;
        iVar7 = (int)ROUND(fVar25 * 32767.0 + fVar25 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 8 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar26 * 32767.0 + fVar26 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 10 + local_1a0) = uVar6;
        iVar7 = (int)ROUND(fVar27 * 32767.0 + fVar27 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 0xc + local_1a0) = uVar6;
        iVar7 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(auVar16._0_8_ < 0.0) * 4)) >> 1;
        if (0x7ffe < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar6 = (undefined2)iVar7;
        if (iVar7 < -0x7fff) {
          uVar6 = 0x8000;
        }
        *(undefined2 *)(lVar10 + 0xe + local_1a0) = uVar6;
      }
      else {
        iVar7 = (int)ROUND(fVar18 * 127.0 + fVar18 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        iVar7 = (int)ROUND(fVar19 * 127.0 + fVar19 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        if (iVar7 < -0x7f) {
          iVar7 = -0x80;
        }
        *(undefined1 *)(DAT_14ca6bae8 + lVar9 * 8) = uVar5;
        *(char *)(lVar10 + 1 + lVar9 * 8) = (char)iVar7;
        iVar7 = (int)ROUND(fVar20 * 127.0 + fVar20 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 2 + lVar9 * 8) = uVar5;
        *(undefined1 *)(lVar10 + 3 + lVar9 * 8) = 0x7f;
        local_128 = (double)fVar27;
        local_130 = (double)fVar26;
        local_138 = (double)fVar25;
        local_148 = (double)fVar24;
        local_150 = (double)fVar23;
        local_158 = (double)fVar21;
        local_160 = 0;
        local_140 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_100 = 0x3ff0000000000000;
        auVar16._0_8_ = (double)FUN_144a91046(&local_178);
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        iVar7 = (int)ROUND(fVar25 * 127.0 + fVar25 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 4 + lVar9 * 8) = uVar5;
        iVar7 = (int)ROUND(fVar26 * 127.0 + fVar26 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        if (iVar7 < -0x7f) {
          iVar7 = -0x80;
        }
        iVar13 = (int)ROUND(fVar27 * 127.0 + fVar27 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar13) {
          iVar13 = 0x7f;
        }
        *(char *)(lVar10 + 5 + lVar9 * 8) = (char)iVar7;
        if (iVar13 < -0x7f) {
          iVar13 = -0x80;
        }
        *(char *)(lVar10 + 6 + lVar9 * 8) = (char)iVar13;
        iVar7 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(auVar16._0_8_ < 0.0) * 4)) >> 1;
        if (0x7e < iVar7) {
          iVar7 = 0x7f;
        }
        uVar5 = (undefined1)iVar7;
        if (iVar7 < -0x7f) {
          uVar5 = 0x80;
        }
        *(undefined1 *)(lVar10 + 7 + lVar9 * 8) = uVar5;
      }
      lVar10 = DAT_14ca6baf0;
      if (DAT_14ca6bb08 == '\x01') {
        *(undefined8 *)(DAT_14ca6baf0 + (ulonglong)DAT_14ca6bb00 * lVar9 * 8) =
             *(undefined8 *)(puVar15 + lVar9 * 0x16 + 3);
      }
      else {
        fVar18 = ABS((float)puVar15[lVar9 * 0x16 + 3]);
        if ((uint)fVar18 < 0x47800000) {
          if ((uint)fVar18 < 0x38800000) {
            fVar19 = fVar18 + 0.5;
          }
          else {
            fVar18 = (float)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar19 = fVar18;
          }
        }
        else {
          fVar19 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
        }
        lVar8 = (ulonglong)DAT_14ca6bb00 * lVar9 * 4;
        iVar7 = movmskps(fVar18,ZEXT416((uint)puVar15[lVar9 * 0x16 + 3]));
        *(ushort *)(DAT_14ca6baf0 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar19,0);
        auVar16 = ZEXT416((uint)puVar15[lVar9 * 0x16 + 4]);
        fVar18 = ABS((float)puVar15[lVar9 * 0x16 + 4]);
        if ((uint)fVar18 < 0x47800000) {
          if ((uint)fVar18 < 0x38800000) {
            fVar19 = fVar18 + 0.5;
          }
          else {
            fVar18 = (float)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar19 = fVar18;
          }
        }
        else {
          fVar19 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
        }
        iVar7 = movmskps(fVar18,auVar16);
        *(ushort *)(lVar10 + 2 + lVar8) = (ushort)(iVar7 << 0xf) | SUB42(fVar19,0);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)(uint)uStack_180);
  }
  if (local_188 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee1496 FUN_145ee1496 body=226 status=ok
// SIG undefined FUN_145ee1496(void)

longlong * FUN_145ee1496(longlong *param_1)

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
  pcVar13 = FUN_146316888;
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



// FUNCTION 145ee157e FUN_145ee157e body=136 status=ok
// SIG undefined FUN_145ee157e(void)

undefined1 * FUN_145ee157e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ee157a;
}



// FUNCTION 145ee1606 FUN_145ee1606 body=146 status=ok
// SIG undefined FUN_145ee1606(void)

code * FUN_145ee1606(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141587564();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVoxelizeVolumePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6b9e0;
  return FUN_1463169a0;
}



// FUNCTION 145ee1698 FUN_145ee1698 body=226 status=ok
// SIG undefined FUN_145ee1698(void)

longlong * FUN_145ee1698(longlong *param_1)

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
  pcVar13 = FUN_146315c82;
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



// FUNCTION 145ee1780 FUN_145ee1780 body=138 status=ok
// SIG undefined FUN_145ee1780(void)

code * FUN_145ee1780(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToVolumeClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000000b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146315d0a;
}



// FUNCTION 145ee180a FUN_145ee180a body=144 status=ok
// SIG undefined FUN_145ee180a(void)

code * FUN_145ee180a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403d783a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricFog";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricFogGlobalData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6af08;
  return FUN_14733b3d0;
}



// FUNCTION 145ee189a FUN_145ee189a body=284 status=ok
// SIG undefined FUN_145ee189a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee189a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97e38) {
    FUN_144b3d300(&DAT_14ca97e38);
    if (DAT_14ca97e38 == -1) {
      FUN_145ee19b6();
      FUN_140db5666(&DAT_14ca97d90,0,&DAT_14ca97d28,L"FResolveVS",
                    L"/Engine/Private/ResolveVertexShader.usf",L"Main",0,1,FUN_147431d9e,
                    FUN_147431d76,&LAB_147431d72,&LAB_147431d6e,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14ca97d90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e77);
      _Init_thread_footer(&DAT_14ca97e38);
    }
  }
  return &DAT_14ca97d90;
}



// FUNCTION 145ee19b6 FUN_145ee19b6 body=211 status=ok
// SIG undefined FUN_145ee19b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee19b6(void)

{
  if ((DAT_14ca97d8f & 2) == 0) {
    DAT_14ca97d8f = DAT_14ca97d8f | 2;
    _DAT_14ca97d30 = L"FResolveVS";
    _DAT_14ca97d48 = FUN_146826540;
    _DAT_14ca97d50 = FUN_146825d77;
    _DAT_14ca97d58 = FUN_146825fd6;
    _DAT_14ca97d60 = FUN_1407e02ea;
    _DAT_14ca97d68 = FUN_146826273;
    _DAT_14ca97d40 = FUN_147431d3e;
    _DAT_14ca97d80 = 0xffffffff000000f0;
    _DAT_14ca97d88 = 8;
    DAT_14ca97d8c = 0;
    _DAT_14ca97d70 = &LAB_147431d6a;
    FUN_145ee1b06();
    FUN_145ee1a8a();
    FUN_1407e00cc(&DAT_14ca97d28);
  }
  return &DAT_14ca97d28;
}



// FUNCTION 145ee1a8a FUN_145ee1a8a body=123 status=ok
// SIG undefined FUN_145ee1a8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee1a8a(void)

{
  _DAT_14ca9a1b8 = L"BASE";
  DAT_14ca9a1e2 = 4;
  _DAT_14ca9a1c0 = FUN_140b35ae4();
  _DAT_14ca9a1c8 = DAT_14ca97d38;
  _DAT_14ca9a1d0 = &LAB_14682652b;
  DAT_14ca97d38 = &DAT_14ca9a1b8;
  DAT_14ca97d8d = DAT_14ca97d8d + '\x01';
  _DAT_14ca9a1d8 = 0x100000000;
  if (*(char *)(_DAT_14ca9a1c0 + 100) != '\0') {
    DAT_14ca97d8e = DAT_14ca97d8e + '\x01';
  }
  return;
}



// FUNCTION 145ee1b06 FUN_145ee1b06 body=216 status=ok
// SIG undefined FUN_145ee1b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee1b06(void)

{
  _DAT_14ca98b88 = L"UVMinMax";
  DAT_14ca98bb2 = FUN_140850cc5();
  _DAT_14ca98b90 = FUN_140ec6960();
  _DAT_14ca98ba0 = &LAB_14682652b;
  _DAT_14ca98ba8 = 0x1000000e6;
  _DAT_14ca98bb0 = 0;
  _DAT_14ca98b98 = DAT_14ca97d38;
  DAT_14ca97d38 = &DAT_14ca98b88;
  _DAT_14ca98b58 = L"PositionMinMax";
  DAT_14ca98b82 = FUN_140850cc5();
  _DAT_14ca98b60 = FUN_140ec6960();
  _DAT_14ca98b70 = &LAB_14682652b;
  _DAT_14ca98b78 = 0x1000000e0;
  _DAT_14ca98b80 = 0;
  _DAT_14ca98b68 = DAT_14ca97d38;
  DAT_14ca97d38 = &DAT_14ca98b58;
  return;
}



// FUNCTION 145ee1bde FUN_145ee1bde body=209 status=ok
// SIG undefined FUN_145ee1bde(void)

undefined8 * FUN_145ee1bde(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14aaf7690;
  param_1[2] = 0;
  FUN_141247186(param_2);
  FUN_140056680(local_30,param_2);
  FUN_14124722a(local_30,1);
  lVar1 = FUN_141587717(local_30,0);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(param_2);
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[2] = lVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee1cb0 FUN_145ee1cb0 body=292 status=ok
// SIG undefined FUN_145ee1cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee1cb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25b78) {
    FUN_144b3d300(&DAT_14ca25b78);
    if (DAT_14ca25b78 == -1) {
      FUN_145ee1f1e();
      FUN_145ee1dd4();
      FUN_140db5666(&DAT_14ca25ad0,0,&DAT_14ca25a68,L"FGTAOMobile_HorizonSearchIntegralCS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",
                    L"GTAOHorizonSearchIntegralCS",5,9,FUN_14728a03a,FUN_147289fda,FUN_14177424a,
                    &LAB_147289fd6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca28228);
      _DAT_14ca25ad0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb35f7);
      _Init_thread_footer(&DAT_14ca25b78);
    }
  }
  return &DAT_14ca25ad0;
}



// FUNCTION 145ee1dd4 FUN_145ee1dd4 body=205 status=ok
// SIG undefined FUN_145ee1dd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee1dd4(void)

{
  if ((DAT_14ca25acf & 2) == 0) {
    DAT_14ca25acf = DAT_14ca25acf | 2;
    _DAT_14ca25a70 = L"FGTAOMobile_HorizonSearchIntegralCS";
    _DAT_14ca25a88 = FUN_146826540;
    _DAT_14ca25a90 = FUN_146825d77;
    _DAT_14ca25a98 = FUN_146825fd6;
    _DAT_14ca25aa0 = FUN_1407e02ea;
    _DAT_14ca25aa8 = FUN_146826273;
    _DAT_14ca25a80 = FUN_147289fa6;
    _DAT_14ca25ac0 = 0xffffffff000000e0;
    _DAT_14ca25ac8 = 8;
    DAT_14ca25acc = 0;
    _DAT_14ca25ab0 = &LAB_147289fd2;
    FUN_145ee1ea2();
    FUN_1407e00cc(&DAT_14ca25a68);
    return;
  }
  return;
}



// FUNCTION 145ee1ea2 FUN_145ee1ea2 body=123 status=ok
// SIG undefined FUN_145ee1ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee1ea2(void)

{
  _DAT_14ca2be80 = L"BASE";
  DAT_14ca2beaa = 4;
  _DAT_14ca2be88 = FUN_140b35ae4();
  _DAT_14ca2be90 = DAT_14ca25a78;
  _DAT_14ca2be98 = &LAB_14682652b;
  DAT_14ca25a78 = &DAT_14ca2be80;
  DAT_14ca25acd = DAT_14ca25acd + '\x01';
  _DAT_14ca2bea0 = 0x100000000;
  if (*(char *)(_DAT_14ca2be88 + 100) != '\0') {
    DAT_14ca25ace = DAT_14ca25ace + '\x01';
  }
  return;
}



// FUNCTION 145ee1f1e FUN_145ee1f1e body=261 status=ok
// SIG undefined FUN_145ee1f1e(void)

void FUN_145ee1f1e(void)

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
              0x110) < DAT_14ca282a8) {
    FUN_144b3d300(&DAT_14ca282a8);
    if (DAT_14ca282a8 == -1) {
      FUN_145ee2024(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0xfb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28228,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bc0);
      _Init_thread_footer(&DAT_14ca282a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee2024 FUN_145ee2024 body=226 status=ok
// SIG undefined FUN_145ee2024(void)

longlong * FUN_145ee2024(longlong *param_1)

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
  pcVar13 = FUN_1462f8ba8;
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



// FUNCTION 145ee210c FUN_145ee210c body=140 status=ok
// SIG undefined FUN_145ee210c(void)

undefined1 * FUN_145ee210c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da021a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOMobile_HorizonSearchIntegral::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca281a0;
  return &LAB_145ee2108;
}



// FUNCTION 145ee2198 FUN_145ee2198 body=292 status=ok
// SIG undefined FUN_145ee2198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee2198(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25dd0) {
    FUN_144b3d300(&DAT_14ca25dd0);
    if (DAT_14ca25dd0 == -1) {
      FUN_145ee2406();
      FUN_145ee22bc();
      FUN_140db5666(&DAT_14ca25d28,0,&DAT_14ca25cc0,L"FGTAOMobile_HorizonSearchIntegralPS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",
                    L"GTAOHorizonSearchIntegralPS",3,9,FUN_14728a2b2,FUN_14728a252,FUN_1462f84b2,
                    &LAB_14728a24e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca283c0);
      _DAT_14ca25d28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb360f);
      _Init_thread_footer(&DAT_14ca25dd0);
    }
  }
  return &DAT_14ca25d28;
}



// FUNCTION 145ee22bc FUN_145ee22bc body=205 status=ok
// SIG undefined FUN_145ee22bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee22bc(void)

{
  if ((DAT_14ca25d27 & 2) == 0) {
    DAT_14ca25d27 = DAT_14ca25d27 | 2;
    _DAT_14ca25cc8 = L"FGTAOMobile_HorizonSearchIntegralPS";
    _DAT_14ca25ce0 = FUN_146826540;
    _DAT_14ca25ce8 = FUN_146825d77;
    _DAT_14ca25cf0 = FUN_146825fd6;
    _DAT_14ca25cf8 = FUN_1407e02ea;
    _DAT_14ca25d00 = FUN_146826273;
    _DAT_14ca25cd8 = FUN_14728a21e;
    _DAT_14ca25d18 = 0xffffffff000000e0;
    _DAT_14ca25d20 = 8;
    DAT_14ca25d24 = 0;
    _DAT_14ca25d08 = &LAB_14728a24a;
    FUN_145ee238a();
    FUN_1407e00cc(&DAT_14ca25cc0);
    return;
  }
  return;
}



// FUNCTION 145ee238a FUN_145ee238a body=123 status=ok
// SIG undefined FUN_145ee238a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee238a(void)

{
  _DAT_14ca2bee0 = L"BASE";
  DAT_14ca2bf0a = 4;
  _DAT_14ca2bee8 = FUN_140b35ae4();
  _DAT_14ca2bef0 = DAT_14ca25cd0;
  _DAT_14ca2bef8 = &LAB_14682652b;
  DAT_14ca25cd0 = &DAT_14ca2bee0;
  DAT_14ca25d25 = DAT_14ca25d25 + '\x01';
  _DAT_14ca2bf00 = 0x100000000;
  if (*(char *)(_DAT_14ca2bee8 + 100) != '\0') {
    DAT_14ca25d26 = DAT_14ca25d26 + '\x01';
  }
  return;
}



// FUNCTION 145ee2406 FUN_145ee2406 body=261 status=ok
// SIG undefined FUN_145ee2406(void)

void FUN_145ee2406(void)

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
              0x110) < DAT_14ca28440) {
    FUN_144b3d300(&DAT_14ca28440);
    if (DAT_14ca28440 == -1) {
      FUN_145ee250c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x17b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca283c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6be4);
      _Init_thread_footer(&DAT_14ca28440);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee250c FUN_145ee250c body=226 status=ok
// SIG undefined FUN_145ee250c(void)

longlong * FUN_145ee250c(longlong *param_1)

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
  pcVar13 = FUN_1462f8dc8;
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



// FUNCTION 145ee25f4 FUN_145ee25f4 body=140 status=ok
// SIG undefined FUN_145ee25f4(void)

undefined1 * FUN_145ee25f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da021a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOMobile_HorizonSearchIntegral::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca281a0;
  return &LAB_145ee25f0;
}



// FUNCTION 145ee2680 FUN_145ee2680 body=292 status=ok
// SIG undefined FUN_145ee2680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee2680(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25ef8) {
    FUN_144b3d300(&DAT_14ca25ef8);
    if (DAT_14ca25ef8 == -1) {
      FUN_145ee28ee();
      FUN_145ee27a4();
      FUN_140db5666(&DAT_14ca25e50,0,&DAT_14ca25de8,L"FGTAOMobile_SpatialFilterPS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",L"GTAOSpatialFilterPS",
                    3,1,FUN_14728a40c,FUN_14728a3ac,&LAB_14728a370,&LAB_14728a36c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca28448);
      _DAT_14ca25e50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb361b);
      _Init_thread_footer(&DAT_14ca25ef8);
    }
  }
  return &DAT_14ca25e50;
}



// FUNCTION 145ee27a4 FUN_145ee27a4 body=205 status=ok
// SIG undefined FUN_145ee27a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee27a4(void)

{
  if ((DAT_14ca25e4f & 2) == 0) {
    DAT_14ca25e4f = DAT_14ca25e4f | 2;
    _DAT_14ca25df0 = L"FGTAOMobile_SpatialFilterPS";
    _DAT_14ca25e08 = FUN_146826540;
    _DAT_14ca25e10 = FUN_146825d77;
    _DAT_14ca25e18 = FUN_146825fd6;
    _DAT_14ca25e20 = FUN_1407e02ea;
    _DAT_14ca25e28 = FUN_146826273;
    _DAT_14ca25e00 = FUN_14728a33c;
    _DAT_14ca25e40 = 0xffffffff000000e0;
    _DAT_14ca25e48 = 8;
    DAT_14ca25e4c = 0;
    _DAT_14ca25e30 = &LAB_14728a368;
    FUN_145ee2872();
    FUN_1407e00cc(&DAT_14ca25de8);
    return;
  }
  return;
}



// FUNCTION 145ee2872 FUN_145ee2872 body=123 status=ok
// SIG undefined FUN_145ee2872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee2872(void)

{
  _DAT_14ca2bf10 = L"BASE";
  DAT_14ca2bf3a = 4;
  _DAT_14ca2bf18 = FUN_140b35ae4();
  _DAT_14ca2bf20 = DAT_14ca25df8;
  _DAT_14ca2bf28 = &LAB_14682652b;
  DAT_14ca25df8 = &DAT_14ca2bf10;
  DAT_14ca25e4d = DAT_14ca25e4d + '\x01';
  _DAT_14ca2bf30 = 0x100000000;
  if (*(char *)(_DAT_14ca2bf18 + 100) != '\0') {
    DAT_14ca25e4e = DAT_14ca25e4e + '\x01';
  }
  return;
}



// FUNCTION 145ee28ee FUN_145ee28ee body=261 status=ok
// SIG undefined FUN_145ee28ee(void)

void FUN_145ee28ee(void)

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
              0x110) < DAT_14ca284c8) {
    FUN_144b3d300(&DAT_14ca284c8);
    if (DAT_14ca284c8 == -1) {
      FUN_145ee29f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x1a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28448,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bf0);
      _Init_thread_footer(&DAT_14ca284c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee29f4 FUN_145ee29f4 body=226 status=ok
// SIG undefined FUN_145ee29f4(void)

longlong * FUN_145ee29f4(longlong *param_1)

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
  pcVar13 = FUN_1462f8e50;
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



// FUNCTION 145ee2adc FUN_145ee2adc body=140 status=ok
// SIG undefined FUN_145ee2adc(void)

undefined1 * FUN_145ee2adc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145db55d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOMobile_SpatialFilter::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28338;
  return &LAB_145ee2ad8;
}



// FUNCTION 145ee2b68 FUN_145ee2b68 body=292 status=ok
// SIG undefined FUN_145ee2b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee2b68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26d90) {
    FUN_144b3d300(&DAT_14ca26d90);
    if (DAT_14ca26d90 == -1) {
      FUN_145ee2dd6();
      FUN_145ee2c8c();
      FUN_140db5666(&DAT_14ca26ce8,0,&DAT_14ca26c80,L"FDeviceEncodingOnlyCS",
                    L"/Engine/Private/PostProcessDeviceEncodingOnly.usf",L"MainCS",5,2,FUN_14728b126
                    ,FUN_14728b0c6,&LAB_14728b0ae,&LAB_14728b0aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca29998);
      _DAT_14ca26ce8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb8bb8);
      _Init_thread_footer(&DAT_14ca26d90);
    }
  }
  return &DAT_14ca26ce8;
}



// FUNCTION 145ee2c8c FUN_145ee2c8c body=205 status=ok
// SIG undefined FUN_145ee2c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee2c8c(void)

{
  if ((DAT_14ca26ce7 & 2) == 0) {
    DAT_14ca26ce7 = DAT_14ca26ce7 | 2;
    _DAT_14ca26c88 = L"FDeviceEncodingOnlyCS";
    _DAT_14ca26ca0 = FUN_146826540;
    _DAT_14ca26ca8 = FUN_146825d77;
    _DAT_14ca26cb0 = FUN_146825fd6;
    _DAT_14ca26cb8 = FUN_1407e02ea;
    _DAT_14ca26cc0 = FUN_146826273;
    _DAT_14ca26c98 = FUN_14728b07a;
    _DAT_14ca26cd8 = 0xffffffff000000e0;
    _DAT_14ca26ce0 = 8;
    DAT_14ca26ce4 = 0;
    _DAT_14ca26cc8 = &LAB_14728b0a6;
    FUN_145ee2d5a();
    FUN_1407e00cc(&DAT_14ca26c80);
    return;
  }
  return;
}



// FUNCTION 145ee2d5a FUN_145ee2d5a body=123 status=ok
// SIG undefined FUN_145ee2d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee2d5a(void)

{
  _DAT_14ca2c090 = L"BASE";
  DAT_14ca2c0ba = 4;
  _DAT_14ca2c098 = FUN_140b35ae4();
  _DAT_14ca2c0a0 = DAT_14ca26c90;
  _DAT_14ca2c0a8 = &LAB_14682652b;
  DAT_14ca26c90 = &DAT_14ca2c090;
  DAT_14ca26ce5 = DAT_14ca26ce5 + '\x01';
  _DAT_14ca2c0b0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c098 + 100) != '\0') {
    DAT_14ca26ce6 = DAT_14ca26ce6 + '\x01';
  }
  return;
}



// FUNCTION 145ee2dd6 FUN_145ee2dd6 body=261 status=ok
// SIG undefined FUN_145ee2dd6(void)

void FUN_145ee2dd6(void)

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
              0x110) < DAT_14ca29a18) {
    FUN_144b3d300(&DAT_14ca29a18);
    if (DAT_14ca29a18 == -1) {
      FUN_145ee2edc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x87;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29998,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc0f6);
      _Init_thread_footer(&DAT_14ca29a18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee2edc FUN_145ee2edc body=226 status=ok
// SIG undefined FUN_145ee2edc(void)

longlong * FUN_145ee2edc(longlong *param_1)

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
  pcVar13 = FUN_1462fa092;
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



// FUNCTION 145ee2fc4 FUN_145ee2fc4 body=140 status=ok
// SIG undefined FUN_145ee2fc4(void)

undefined1 * FUN_145ee2fc4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd0510();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeviceEncoding";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeviceEncodingOnlyParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29800;
  return &LAB_145ee2fc0;
}



// FUNCTION 145ee3050 FUN_145ee3050 body=292 status=ok
// SIG undefined FUN_145ee3050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee3050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3adb8) {
    FUN_144b3d300(&DAT_14ca3adb8);
    if (DAT_14ca3adb8 == -1) {
      FUN_145ee32be();
      FUN_145ee3174();
      FUN_140db5666(&DAT_14ca3ad10,0,&DAT_14ca3aca8,L"FRayTracingLightingMS",
                    L"/Engine/Private/RayTracing/RayTracingLightingMS.usf",L"RayTracingLightingMS",7
                    ,1,FUN_1472b60b0,FUN_1472b606c,&LAB_146300e4e,&LAB_1472b6068,&LAB_1472b6062,
                    &LAB_1472b6042,0xe0,&DAT_14ca3f230);
      _DAT_14ca3ad10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f6a6d1);
      _Init_thread_footer(&DAT_14ca3adb8);
    }
  }
  return &DAT_14ca3ad10;
}



// FUNCTION 145ee3174 FUN_145ee3174 body=205 status=ok
// SIG undefined FUN_145ee3174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee3174(void)

{
  if ((DAT_14ca3ad0f & 2) == 0) {
    DAT_14ca3ad0f = DAT_14ca3ad0f | 2;
    _DAT_14ca3acb0 = L"FRayTracingLightingMS";
    _DAT_14ca3acc8 = FUN_146826540;
    _DAT_14ca3acd0 = FUN_146825d77;
    _DAT_14ca3acd8 = FUN_146825fd6;
    _DAT_14ca3ace0 = FUN_1407e02ea;
    _DAT_14ca3ace8 = FUN_146826273;
    _DAT_14ca3acc0 = FUN_1472b6014;
    _DAT_14ca3ad00 = 0xffffffff000000e0;
    _DAT_14ca3ad08 = 8;
    DAT_14ca3ad0c = 0;
    _DAT_14ca3acf0 = &LAB_1472b603e;
    FUN_145ee3242();
    FUN_1407e00cc(&DAT_14ca3aca8);
    return;
  }
  return;
}



// FUNCTION 145ee3242 FUN_145ee3242 body=123 status=ok
// SIG undefined FUN_145ee3242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee3242(void)

{
  _DAT_14ca3f9a8 = L"BASE";
  DAT_14ca3f9d2 = 4;
  _DAT_14ca3f9b0 = FUN_140b35ae4();
  _DAT_14ca3f9b8 = DAT_14ca3acb8;
  _DAT_14ca3f9c0 = &LAB_14682652b;
  DAT_14ca3acb8 = &DAT_14ca3f9a8;
  DAT_14ca3ad0d = DAT_14ca3ad0d + '\x01';
  _DAT_14ca3f9c8 = 0x100000000;
  if (*(char *)(_DAT_14ca3f9b0 + 100) != '\0') {
    DAT_14ca3ad0e = DAT_14ca3ad0e + '\x01';
  }
  return;
}



// FUNCTION 145ee32be FUN_145ee32be body=261 status=ok
// SIG undefined FUN_145ee32be(void)

void FUN_145ee32be(void)

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
              0x110) < DAT_14ca3f2b0) {
    FUN_144b3d300(&DAT_14ca3f2b0);
    if (DAT_14ca3f2b0 == -1) {
      FUN_145ee33c4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x18b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3f230,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6fc43);
      _Init_thread_footer(&DAT_14ca3f2b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee33c4 FUN_145ee33c4 body=226 status=ok
// SIG undefined FUN_145ee33c4(void)

longlong * FUN_145ee33c4(longlong *param_1)

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
  pcVar13 = FUN_146302506;
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



// FUNCTION 145ee34ac FUN_145ee34ac body=140 status=ok
// SIG undefined FUN_145ee34ac(void)

undefined1 * FUN_145ee34ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ce4a14();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRayTracingLightGrid";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca3aae8;
  return &LAB_145ee34a8;
}



// FUNCTION 145ee3538 FUN_145ee3538 body=292 status=ok
// SIG undefined FUN_145ee3538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee3538(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4d570) {
    FUN_144b3d300(&DAT_14ca4d570);
    if (DAT_14ca4d570 == -1) {
      FUN_145ee37a6();
      FUN_145ee365c();
      FUN_140db5666(&DAT_14ca4d4c8,0,&DAT_14ca4d460,L"FShaderPrintCopyCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"CopyCS",5,1,FUN_1472ea982,FUN_1472ea922
                    ,&LAB_1472ea8f8,&LAB_1472ea8f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca55da8
                   );
      _DAT_14ca4d4c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e97a);
      _Init_thread_footer(&DAT_14ca4d570);
    }
  }
  return &DAT_14ca4d4c8;
}



// FUNCTION 145ee365c FUN_145ee365c body=205 status=ok
// SIG undefined FUN_145ee365c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee365c(void)

{
  if ((DAT_14ca4d4c7 & 2) == 0) {
    DAT_14ca4d4c7 = DAT_14ca4d4c7 | 2;
    _DAT_14ca4d468 = L"FShaderPrintCopyCS";
    _DAT_14ca4d480 = FUN_146826540;
    _DAT_14ca4d488 = FUN_146825d77;
    _DAT_14ca4d490 = FUN_146825fd6;
    _DAT_14ca4d498 = FUN_1407e02ea;
    _DAT_14ca4d4a0 = FUN_146826273;
    _DAT_14ca4d478 = FUN_1472ea8c4;
    _DAT_14ca4d4b8 = 0xffffffff000000e0;
    _DAT_14ca4d4c0 = 8;
    DAT_14ca4d4c4 = 0;
    _DAT_14ca4d4a8 = &LAB_1472ea8f0;
    FUN_145ee372a();
    FUN_1407e00cc(&DAT_14ca4d460);
    return;
  }
  return;
}



// FUNCTION 145ee372a FUN_145ee372a body=123 status=ok
// SIG undefined FUN_145ee372a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee372a(void)

{
  _DAT_14ca568e8 = L"BASE";
  DAT_14ca56912 = 4;
  _DAT_14ca568f0 = FUN_140b35ae4();
  _DAT_14ca568f8 = DAT_14ca4d470;
  _DAT_14ca56900 = &LAB_14682652b;
  DAT_14ca4d470 = &DAT_14ca568e8;
  DAT_14ca4d4c5 = DAT_14ca4d4c5 + '\x01';
  _DAT_14ca56908 = 0x100000000;
  if (*(char *)(_DAT_14ca568f0 + 100) != '\0') {
    DAT_14ca4d4c6 = DAT_14ca4d4c6 + '\x01';
  }
  return;
}



// FUNCTION 145ee37a6 FUN_145ee37a6 body=261 status=ok
// SIG undefined FUN_145ee37a6(void)

void FUN_145ee37a6(void)

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
              0x110) < DAT_14ca55e28) {
    FUN_144b3d300(&DAT_14ca55e28);
    if (DAT_14ca55e28 == -1) {
      FUN_145ee38ac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x19c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55da8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7b1);
      _Init_thread_footer(&DAT_14ca55e28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee38ac FUN_145ee38ac body=226 status=ok
// SIG undefined FUN_145ee38ac(void)

longlong * FUN_145ee38ac(longlong *param_1)

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
  pcVar13 = FUN_146307990;
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



// FUNCTION 145ee3994 FUN_145ee3994 body=140 status=ok
// SIG undefined FUN_145ee3994(void)

undefined1 * FUN_145ee3994(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405f00c8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderPrintCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4d288;
  return &LAB_145ee3990;
}



// FUNCTION 145ee3a20 FUN_145ee3a20 body=292 status=ok
// SIG undefined FUN_145ee3a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee3a20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca694d8) {
    FUN_144b3d300(&DAT_14ca694d8);
    if (DAT_14ca694d8 == -1) {
      FUN_145ee3c8e();
      FUN_145ee3b44();
      FUN_140db5666(&DAT_14ca69430,0,&DAT_14ca693c8,L"FVisualizeVolumetricLightmapPS",
                    L"/Engine/Private/VisualizeVolumetricLightmap.usf",
                    L"VisualizeVolumetricLightmapPS",3,1,FUN_147333be8,FUN_147333b88,&LAB_147333b70,
                    &LAB_147333b6c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca6c660);
      _DAT_14ca69430 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430f5a8d);
      _Init_thread_footer(&DAT_14ca694d8);
    }
  }
  return &DAT_14ca69430;
}



// FUNCTION 145ee3b44 FUN_145ee3b44 body=205 status=ok
// SIG undefined FUN_145ee3b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee3b44(void)

{
  if ((DAT_14ca6942f & 2) == 0) {
    DAT_14ca6942f = DAT_14ca6942f | 2;
    _DAT_14ca693d0 = L"FVisualizeVolumetricLightmapPS";
    _DAT_14ca693e8 = FUN_146826540;
    _DAT_14ca693f0 = FUN_146825d77;
    _DAT_14ca693f8 = FUN_146825fd6;
    _DAT_14ca69400 = FUN_1407e02ea;
    _DAT_14ca69408 = FUN_146826273;
    _DAT_14ca693e0 = FUN_147333b3e;
    _DAT_14ca69420 = 0xffffffff000000e0;
    _DAT_14ca69428 = 8;
    DAT_14ca6942c = 0;
    _DAT_14ca69410 = &LAB_147333b68;
    FUN_145ee3c12();
    FUN_1407e00cc(&DAT_14ca693c8);
    return;
  }
  return;
}



// FUNCTION 145ee3c12 FUN_145ee3c12 body=123 status=ok
// SIG undefined FUN_145ee3c12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee3c12(void)

{
  _DAT_14ca6d160 = L"BASE";
  DAT_14ca6d18a = 4;
  _DAT_14ca6d168 = FUN_140b35ae4();
  _DAT_14ca6d170 = DAT_14ca693d8;
  _DAT_14ca6d178 = &LAB_14682652b;
  DAT_14ca693d8 = &DAT_14ca6d160;
  DAT_14ca6942d = DAT_14ca6942d + '\x01';
  _DAT_14ca6d180 = 0x100000000;
  if (*(char *)(_DAT_14ca6d168 + 100) != '\0') {
    DAT_14ca6942e = DAT_14ca6942e + '\x01';
  }
  return;
}



// FUNCTION 145ee3c8e FUN_145ee3c8e body=261 status=ok
// SIG undefined FUN_145ee3c8e(void)

void FUN_145ee3c8e(void)

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
              0x110) < DAT_14ca6c6e0) {
    FUN_144b3d300(&DAT_14ca6c6e0);
    if (DAT_14ca6c6e0 == -1) {
      FUN_145ee3d94(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x54;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c660,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d427);
      _Init_thread_footer(&DAT_14ca6c6e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee3d94 FUN_145ee3d94 body=226 status=ok
// SIG undefined FUN_145ee3d94(void)

longlong * FUN_145ee3d94(longlong *param_1)

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
  pcVar13 = FUN_146313e76;
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



// FUNCTION 145ee3e7c FUN_145ee3e7c body=140 status=ok
// SIG undefined FUN_145ee3e7c(void)

undefined1 * FUN_145ee3e7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd5580();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVisualizeVolumetricLightmapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6c5d8;
  return &LAB_145ee3e78;
}



// FUNCTION 145ee3f08 FUN_145ee3f08 body=287 status=ok
// SIG undefined FUN_145ee3f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee3f08(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90ae0) {
    FUN_144b3d300(&DAT_14ca90ae0);
    if (DAT_14ca90ae0 == -1) {
      uVar1 = FUN_141472624();
      FUN_145ee4028();
      FUN_140db5666(&DAT_14ca90a38,0,&DAT_14ca909d0,L"FOneColorPS",
                    L"/Engine/Private/OneColorShader.usf",L"MainPixelShader",3,1,FUN_147421b8a,
                    FUN_147421b30,&LAB_147421b2c,&LAB_147421b28,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    uVar1);
      _DAT_14ca90a38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f8222);
      _Init_thread_footer(&DAT_14ca90ae0);
    }
  }
  return &DAT_14ca90a38;
}



// FUNCTION 145ee4028 FUN_145ee4028 body=206 status=ok
// SIG undefined FUN_145ee4028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee4028(void)

{
  if ((DAT_14ca90a37 & 2) == 0) {
    DAT_14ca90a37 = DAT_14ca90a37 | 2;
    _DAT_14ca909d8 = L"FOneColorPS";
    _DAT_14ca909f0 = FUN_146826540;
    _DAT_14ca909f8 = FUN_146825d77;
    _DAT_14ca90a00 = FUN_146825fd6;
    _DAT_14ca90a08 = FUN_1407e02ea;
    _DAT_14ca90a10 = FUN_146826273;
    _DAT_14ca909e8 = FUN_147421af8;
    _DAT_14ca90a28 = 0xffffffff000000e0;
    _DAT_14ca90a30 = 8;
    DAT_14ca90a34 = 0;
    _DAT_14ca90a18 = &LAB_147421b24;
    FUN_145ee40f6();
    FUN_1407e00cc(&DAT_14ca909d0);
  }
  return &DAT_14ca909d0;
}



// FUNCTION 145ee40f6 FUN_145ee40f6 body=133 status=ok
// SIG undefined FUN_145ee40f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee40f6(void)

{
  _DAT_14ca94cc8 = L"BASE";
  DAT_14ca94cf2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94cd8 = DAT_14ca909e0;
  _DAT_14ca94cd0 = &DAT_14ca8c6c8;
  _DAT_14ca94ce0 = &LAB_14682652b;
  DAT_14ca909e0 = &DAT_14ca94cc8;
  DAT_14ca90a35 = DAT_14ca90a35 + '\x01';
  _DAT_14ca94ce8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca90a36 = DAT_14ca90a36 + '\x01';
  }
  return;
}



// FUNCTION 145ee4182 FUN_145ee4182 body=134 status=ok
// SIG undefined FUN_145ee4182(void)

void FUN_145ee4182(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x180))();
  lVar2 = FUN_145ee420a(uVar1);
  if (lVar2 != 0) {
    local_40 = &LAB_143f2cbf6;
    local_38 = 0;
    FUN_1415877e6(local_30,param_1);
    FUN_141587968(lVar2,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee420a FUN_145ee420a body=44 status=ok
// SIG undefined FUN_145ee420a(void)

undefined8 FUN_145ee420a(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_145ee4236(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 145ee4236 FUN_145ee4236 body=105 status=ok
// SIG undefined FUN_145ee4236(void)

void FUN_145ee4236(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459f1826();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145ee42a0(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee42a0 FUN_145ee42a0 body=76 status=ok
// SIG undefined FUN_145ee42a0(void)

void FUN_145ee42a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459f1826();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145ee42dd;
    }
  }
  lVar2 = 0;
LAB_145ee42dd:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145ee42ec FUN_145ee42ec body=292 status=ok
// SIG undefined FUN_145ee42ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee42ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27968) {
    FUN_144b3d300(&DAT_14cc27968);
    if (DAT_14cc27968 == -1) {
      FUN_145ee455a();
      FUN_145ee4410();
      FUN_140db5666(&DAT_14cc278c0,0,&DAT_14cc27858,L"FFSRPS",
                    L"/Plugin/FSR/Private/PostProcessFFX_FSR.usf",L"MainPS",3,0x40,FUN_149805186,
                    FUN_149805126,&LAB_14463c8d2,&LAB_149805122,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cc28038);
      _DAT_14cc278c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463c948);
      _Init_thread_footer(&DAT_14cc27968);
    }
  }
  return &DAT_14cc278c0;
}



// FUNCTION 145ee4410 FUN_145ee4410 body=205 status=ok
// SIG undefined FUN_145ee4410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee4410(void)

{
  if ((DAT_14cc278bf & 2) == 0) {
    DAT_14cc278bf = DAT_14cc278bf | 2;
    _DAT_14cc27860 = L"FFSRPS";
    _DAT_14cc27878 = FUN_146826540;
    _DAT_14cc27880 = FUN_146825d77;
    _DAT_14cc27888 = FUN_146825fd6;
    _DAT_14cc27890 = FUN_1407e02ea;
    _DAT_14cc27898 = FUN_146826273;
    _DAT_14cc27870 = FUN_1498050f4;
    _DAT_14cc278b0 = 0xffffffff000000e0;
    _DAT_14cc278b8 = 8;
    DAT_14cc278bc = 0;
    _DAT_14cc278a0 = &LAB_14980511e;
    FUN_145ee44de();
    FUN_1407e00cc(&DAT_14cc27858);
    return;
  }
  return;
}



// FUNCTION 145ee44de FUN_145ee44de body=123 status=ok
// SIG undefined FUN_145ee44de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee44de(void)

{
  _DAT_14cc28370 = L"BASE";
  DAT_14cc2839a = 4;
  _DAT_14cc28378 = FUN_140b35ae4();
  _DAT_14cc28380 = DAT_14cc27868;
  _DAT_14cc28388 = &LAB_14682652b;
  DAT_14cc27868 = &DAT_14cc28370;
  DAT_14cc278bd = DAT_14cc278bd + '\x01';
  _DAT_14cc28390 = 0x100000000;
  if (*(char *)(_DAT_14cc28378 + 100) != '\0') {
    DAT_14cc278be = DAT_14cc278be + '\x01';
  }
  return;
}



// FUNCTION 145ee455a FUN_145ee455a body=261 status=ok
// SIG undefined FUN_145ee455a(void)

void FUN_145ee455a(void)

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
              0x110) < DAT_14cc280b8) {
    FUN_144b3d300(&DAT_14cc280b8);
    if (DAT_14cc280b8 == -1) {
      FUN_145ee4660(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x72;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc28038,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e53e);
      _Init_thread_footer(&DAT_14cc280b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee4660 FUN_145ee4660 body=226 status=ok
// SIG undefined FUN_145ee4660(void)

longlong * FUN_145ee4660(longlong *param_1)

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
  pcVar13 = FUN_14675f07a;
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



// FUNCTION 145ee4748 FUN_145ee4748 body=140 status=ok
// SIG undefined FUN_145ee4748(void)

undefined1 * FUN_145ee4748(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dbf45a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14b40a1d2;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFSRPassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc27fb0;
  return &LAB_145ee4744;
}



// FUNCTION 145ee47d4 FUN_145ee47d4 body=292 status=ok
// SIG undefined FUN_145ee47d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee47d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27d48) {
    FUN_144b3d300(&DAT_14cc27d48);
    if (DAT_14cc27d48 == -1) {
      FUN_145ee4a42();
      FUN_145ee48f8();
      FUN_140db5666(&DAT_14cc27ca0,0,&DAT_14cc27c38,L"FRCASPS",
                    L"/Plugin/FSR/Private/PostProcessFFX_RCAS.usf",L"MainPS",3,0x80,FUN_149805d94,
                    FUN_149805d34,&LAB_14463db24,&LAB_149805d30,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cc28258);
      _DAT_14cc27ca0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463db9a);
      _Init_thread_footer(&DAT_14cc27d48);
    }
  }
  return &DAT_14cc27ca0;
}



// FUNCTION 145ee48f8 FUN_145ee48f8 body=205 status=ok
// SIG undefined FUN_145ee48f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee48f8(void)

{
  if ((DAT_14cc27c9f & 2) == 0) {
    DAT_14cc27c9f = DAT_14cc27c9f | 2;
    _DAT_14cc27c40 = L"FRCASPS";
    _DAT_14cc27c58 = FUN_146826540;
    _DAT_14cc27c60 = FUN_146825d77;
    _DAT_14cc27c68 = FUN_146825fd6;
    _DAT_14cc27c70 = FUN_1407e02ea;
    _DAT_14cc27c78 = FUN_146826273;
    _DAT_14cc27c50 = FUN_149805d02;
    _DAT_14cc27c90 = 0xffffffff000000e0;
    _DAT_14cc27c98 = 8;
    DAT_14cc27c9c = 0;
    _DAT_14cc27c80 = &LAB_149805d2c;
    FUN_145ee49c6();
    FUN_1407e00cc(&DAT_14cc27c38);
    return;
  }
  return;
}



// FUNCTION 145ee49c6 FUN_145ee49c6 body=123 status=ok
// SIG undefined FUN_145ee49c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee49c6(void)

{
  _DAT_14cc28400 = L"BASE";
  DAT_14cc2842a = 4;
  _DAT_14cc28408 = FUN_140b35ae4();
  _DAT_14cc28410 = DAT_14cc27c48;
  _DAT_14cc28418 = &LAB_14682652b;
  DAT_14cc27c48 = &DAT_14cc28400;
  DAT_14cc27c9d = DAT_14cc27c9d + '\x01';
  _DAT_14cc28420 = 0x100000000;
  if (*(char *)(_DAT_14cc28408 + 100) != '\0') {
    DAT_14cc27c9e = DAT_14cc27c9e + '\x01';
  }
  return;
}



// FUNCTION 145ee4a42 FUN_145ee4a42 body=261 status=ok
// SIG undefined FUN_145ee4a42(void)

void FUN_145ee4a42(void)

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
              0x110) < DAT_14cc282d8) {
    FUN_144b3d300(&DAT_14cc282d8);
    if (DAT_14cc282d8 == -1) {
      FUN_145ee4b48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x68;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc28258,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e56e);
      _Init_thread_footer(&DAT_14cc282d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee4b48 FUN_145ee4b48 body=226 status=ok
// SIG undefined FUN_145ee4b48(void)

longlong * FUN_145ee4b48(longlong *param_1)

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
  pcVar13 = FUN_14675f3bc;
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



// FUNCTION 145ee4c30 FUN_145ee4c30 body=140 status=ok
// SIG undefined FUN_145ee4c30(void)

undefined1 * FUN_145ee4c30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145db5db4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RCAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRCASPassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x69;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc281d0;
  return &LAB_145ee4c2c;
}



// FUNCTION 145ee4cbc FUN_145ee4cbc body=142 status=ok
// SIG undefined FUN_145ee4cbc(void)

code * FUN_145ee4cbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ee4d4a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SpawnParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSpawnInfoShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_148057c58;
}



// FUNCTION 145ee4d4a FUN_145ee4d4a body=268 status=ok
// SIG undefined FUN_145ee4d4a(void)

undefined * FUN_145ee4d4a(void)

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
              0x110) < DAT_14cb350f8) {
    FUN_144b3d300(&DAT_14cb350f8);
    if (DAT_14cb350f8 == -1) {
      FUN_145ee4e58(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSpawnInfoShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb35078,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb96c);
      _Init_thread_footer(&DAT_14cb350f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb35078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee4e58 FUN_145ee4e58 body=226 status=ok
// SIG undefined FUN_145ee4e58(void)

longlong * FUN_145ee4e58(longlong *param_1)

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
  pcVar13 = FUN_1464632cc;
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



// FUNCTION 145ee4f3c FUN_145ee4f3c body=130 status=ok
// SIG undefined FUN_145ee4f3c(void)

undefined1 * FUN_145ee4f3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpawnInfo_NumActive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148057d6c;
}



// FUNCTION 145ee4fbe FUN_145ee4fbe body=138 status=ok
// SIG undefined FUN_145ee4fbe(void)

code * FUN_145ee4fbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpawnInfo_ParticleOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee4f3c;
}



// FUNCTION 145ee5048 FUN_145ee5048 body=138 status=ok
// SIG undefined FUN_145ee5048(void)

code * FUN_145ee5048(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpawnInfo_Time";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148057ce2;
}



// FUNCTION 145ee50d2 FUN_145ee50d2 body=205 status=ok
// SIG undefined FUN_145ee50d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee50d2(void)

{
  if ((DAT_14c9edfef & 2) == 0) {
    DAT_14c9edfef = DAT_14c9edfef | 2;
    _DAT_14c9edf90 = L"FMeshSDFObjectCullPS";
    _DAT_14c9edfa8 = FUN_146826540;
    _DAT_14c9edfb0 = FUN_146825d77;
    _DAT_14c9edfb8 = FUN_146825fd6;
    _DAT_14c9edfc0 = FUN_1407e02ea;
    _DAT_14c9edfc8 = FUN_146826273;
    _DAT_14c9edfa0 = FUN_1471decb2;
    _DAT_14c9edfe0 = 0xffffffff000000e0;
    _DAT_14c9edfe8 = 8;
    DAT_14c9edfec = 0;
    _DAT_14c9edfd0 = &LAB_1471decdc;
    FUN_145ee51a0();
    FUN_1407e00cc(&DAT_14c9edf88);
    return;
  }
  return;
}



// FUNCTION 145ee51a0 FUN_145ee51a0 body=123 status=ok
// SIG undefined FUN_145ee51a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee51a0(void)

{
  _DAT_14c9f19d8 = L"BASE";
  DAT_14c9f1a02 = 4;
  _DAT_14c9f19e0 = FUN_140b35ae4();
  _DAT_14c9f19e8 = DAT_14c9edf98;
  _DAT_14c9f19f0 = &LAB_14682652b;
  DAT_14c9edf98 = &DAT_14c9f19d8;
  DAT_14c9edfed = DAT_14c9edfed + '\x01';
  _DAT_14c9f19f8 = 0x100000000;
  if (*(char *)(_DAT_14c9f19e0 + 100) != '\0') {
    DAT_14c9edfee = DAT_14c9edfee + '\x01';
  }
  return;
}



// FUNCTION 145ee521c FUN_145ee521c body=136 status=ok
// SIG undefined FUN_145ee521c(void)

code * FUN_145ee521c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClosestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x178000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee52a4;
}



// FUNCTION 145ee52a4 FUN_145ee52a4 body=138 status=ok
// SIG undefined FUN_145ee52a4(void)

code * FUN_145ee52a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNumberOfCulledObjects";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x170000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e1c34;
}



// FUNCTION 145ee532e FUN_145ee532e body=138 status=ok
// SIG undefined FUN_145ee532e(void)

code * FUN_145ee532e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumGridCulledHeightfieldObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e2084;
}



// FUNCTION 145ee53b8 FUN_145ee53b8 body=197 status=ok
// SIG undefined FUN_145ee53b8(void)

undefined8 FUN_145ee53b8(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),0xffffffff,0);
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)0x0;
      while( true ) {
        cVar2 = FUN_144a91224(param_1 + 0x10,local_78);
        pcVar1 = local_78[0];
        if (cVar2 == '\0') break;
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = local_58;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3);
      }
      if (local_78[0] != (code *)0x0) {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = local_58;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    } while ((*(byte *)(param_1 + 0x28) & 1) == 0);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee547e FUN_145ee547e body=140 status=ok
// SIG undefined FUN_145ee547e(void)

void FUN_145ee547e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2e7050;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] == 0) goto LAB_145ee54b7;
  while( true ) {
    FUN_1400020a8();
LAB_145ee54b7:
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) break;
    param_1[9] = *(undefined8 *)param_1[9];
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145ee550a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145ee550a FUN_145ee550a body=69 status=ok
// SIG undefined FUN_145ee550a(void)

void FUN_145ee550a(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ee5550 FUN_145ee5550 body=115 status=ok
// SIG undefined FUN_145ee5550(void)

void FUN_145ee5550(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(*param_2 + 0x38) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(*param_2 + 0x38) + 0x100))();
    FUN_145ee55c4(uVar1,&local_28,param_1,*param_2 + 0x30);
    *(undefined8 *)(*param_2 + 0x40) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee55c4 FUN_145ee55c4 body=258 status=ok
// SIG undefined FUN_145ee55c4(void)

undefined8
FUN_145ee55c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b4f6bc0;
  *(undefined4 *)(local_40 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b4f6b50;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_148aaba42;
  FUN_145ee56c8(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee56c8 FUN_145ee56c8 body=216 status=ok
// SIG undefined FUN_145ee56c8(void)

undefined8 * FUN_145ee56c8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee57ae FUN_145ee57ae body=24 status=ok
// SIG undefined FUN_145ee57ae(void)

bool FUN_145ee57ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ee57ce FUN_145ee57ce body=201 status=ok
// SIG undefined FUN_145ee57ce(void)

undefined8 * FUN_145ee57ce(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b65d7c0;
  param_1[6] = &PTR_FUN_14b65dab0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x461c4000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0x42480000c61c4000;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x461c4000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x4248000043fa0000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x461c4000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x42480000c61c4000;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  param_1[0x1e] = 0x461c4000;
  param_1[0x1f] = 0x4248000043fa0000;
  param_1[0x20] = 0x4248000000000000;
  return param_1;
}



// FUNCTION 145ee5898 FUN_145ee5898 body=53 status=ok
// SIG undefined FUN_145ee5898(void)

void FUN_145ee5898(longlong *param_1)

{
  FUN_145ee58ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ee58ce FUN_145ee58ce body=364 status=ok
// SIG undefined FUN_145ee58ce(void)

void FUN_145ee58ce(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_145a0ce7a(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ee5a44 FUN_145ee5a44 body=201 status=ok
// SIG undefined FUN_145ee5a44(void)

undefined8 * FUN_145ee5a44(undefined8 *param_1)

{
  FUN_1457edf72();
  *param_1 = &PTR_FUN_14bc6af90;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"ProjectionMode");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"Width");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"NearClip");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"FarClipPlane");
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"AspectRatio");
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_14020fad6(param_1 + 0x44,L"FieldOfView");
  return param_1;
}



// FUNCTION 145ee5b0e FUN_145ee5b0e body=151 status=ok
// SIG undefined FUN_145ee5b0e(void)

bool FUN_145ee5b0e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee5ba6 FUN_145ee5ba6 body=132 status=ok
// SIG undefined FUN_145ee5ba6(void)

void FUN_145ee5ba6(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"FFYL_Start");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ee5c2c FUN_145ee5c2c body=132 status=ok
// SIG undefined FUN_145ee5c2c(void)

void FUN_145ee5c2c(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"Respawn_Stop");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ee5cb2 FUN_145ee5cb2 body=99 status=ok
// SIG undefined FUN_145ee5cb2(void)

void FUN_145ee5cb2(longlong param_1)

{
  longlong lVar1;
  
  FUN_1405f1eac();
  if (*(char *)(param_1 + 0x178) != '\x03') {
    lVar1 = FUN_1447210f0(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_140115352(lVar1);
      if (lVar1 != 0) {
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        *(longlong *)(lVar1 + 0x178) = param_1;
      }
    }
  }
  FUN_145ee5d16(param_1);
  return;
}



// FUNCTION 145ee5d16 FUN_145ee5d16 body=266 status=ok
// SIG undefined FUN_145ee5d16(void)

void FUN_145ee5d16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x398) == 0) {
    uVar4 = FUN_1447210f0();
    local_48 = 0;
    local_40 = 0xaaad1010;
    local_38 = 0;
    local_58 = 1;
    FUN_14078bff4(&local_30,&local_48,param_1 + 0x390,uVar4);
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0x398) != &local_30) {
      *(undefined8 *)(param_1 + 0x398) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x3a0);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x3a0) = plVar1;
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
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee5e22 FUN_145ee5e22 body=144 status=ok
// SIG undefined FUN_145ee5e22(void)

code * FUN_145ee5e22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ee5eb2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"OnePassPointShadowProjection";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FOnePassPointShadowProjection";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471a87f2;
}



// FUNCTION 145ee5eb2 FUN_145ee5eb2 body=268 status=ok
// SIG undefined FUN_145ee5eb2(void)

undefined * FUN_145ee5eb2(void)

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
              0x110) < DAT_14c9e1ea8) {
    FUN_144b3d300(&DAT_14c9e1ea8);
    if (DAT_14c9e1ea8 == -1) {
      FUN_145ee5fc0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FOnePassPointShadowProjection";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x5c8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1e28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0ea5);
      _Init_thread_footer(&DAT_14c9e1ea8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e1e28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee5fc0 FUN_145ee5fc0 body=226 status=ok
// SIG undefined FUN_145ee5fc0(void)

longlong * FUN_145ee5fc0(longlong *param_1)

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
  pcVar13 = FUN_1462cf90c;
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



// FUNCTION 145ee60a4 FUN_145ee60a4 body=130 status=ok
// SIG undefined FUN_145ee60a4(void)

undefined1 * FUN_145ee60a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthCubeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a8906;
}



// FUNCTION 145ee6126 FUN_145ee6126 body=138 status=ok
// SIG undefined FUN_145ee6126(void)

code * FUN_145ee6126(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthCubeTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerComparisonState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000005cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee61b0;
}



// FUNCTION 145ee61b0 FUN_145ee61b0 body=138 status=ok
// SIG undefined FUN_145ee61b0(void)

code * FUN_145ee61b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthCubeTexture2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000005ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee60a4;
}



// FUNCTION 145ee623a FUN_145ee623a body=152 status=ok
// SIG undefined FUN_145ee623a(void)

void FUN_145ee623a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_145afdfc4();
  if (lVar1 != 0) {
    local_48 = &DAT_148dfe45e;
    local_40 = 0;
    FUN_145ee63d6(local_38,param_1);
    FUN_145ee62d4(lVar1 + 0x6868,&local_48,local_38);
    FUN_1449db362(local_38);
    *(undefined **)(param_1 + 0x68) = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee62d4 FUN_145ee62d4 body=216 status=ok
// SIG undefined FUN_145ee62d4(void)

undefined8 * FUN_145ee62d4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee63d6 FUN_145ee63d6 body=428 status=ok
// SIG undefined FUN_145ee63d6(void)

longlong * FUN_145ee63d6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145ee64b6:
    *puVar5 = &PTR_LAB_14b9a05a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ee64b6;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9a05a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0530;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ee6582 FUN_145ee6582 body=98 status=ok
// SIG undefined FUN_145ee6582(void)

void FUN_145ee6582(longlong param_1)

{
  FUN_140259cf4();
  if (DAT_14cb99a50 != (undefined8 *)0x0 && DAT_14cb99a58 != 0) {
    (**(code **)*DAT_14cb99a50)(DAT_14cb99a50,0);
    FUN_1446efa72(&DAT_14cb99a50,0,0,0x10);
    DAT_14cb99a58 = 0;
  }
  FUN_145ee6604();
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 145ee65e4 FUN_145ee65e4 body=31 status=ok
// SIG undefined FUN_145ee65e4(void)

undefined8 FUN_145ee65e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ee6604 FUN_145ee6604 body=185 status=ok
// SIG undefined FUN_145ee6604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee6604(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = DAT_14cb99a60;
  if (DAT_14cb99a60 != (longlong *)0x0) {
    if (DAT_14cb99a60[0x1c] == 0) {
      lVar4 = (**(code **)(*DAT_14cb99a60 + 0x30))();
      plVar3[0x1c] = lVar4;
    }
    lVar1 = plVar3[0xe];
    lVar4 = plVar3[0xd];
    for (lVar5 = lVar4; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
      plVar2 = *(longlong **)(lVar5 + 0x40);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,(longlong *)(lVar5 + 8) != plVar2);
        *(undefined8 *)(lVar5 + 0x40) = 0;
      }
    }
    plVar3[0xe] = lVar4;
    plVar3 = DAT_14cb99a60;
    _DAT_14cb99a68 = 0xffffffff;
    if (DAT_14cb99a60 != (longlong *)0x0) {
      FUN_1458637b8(DAT_14cb99a60);
      FUN_1400020a8(plVar3);
    }
    DAT_14cb99a60 = (longlong *)0x0;
    DAT_14cb99a48 = 0;
  }
  return;
}



// FUNCTION 145ee66be FUN_145ee66be body=24 status=ok
// SIG undefined FUN_145ee66be(void)

void FUN_145ee66be(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee66d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145ee66d6 FUN_145ee66d6 body=38 status=ok
// SIG undefined FUN_145ee66d6(void)

undefined8 FUN_145ee66d6(undefined8 param_1,int param_2)

{
  FUN_145ee66fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ee66fc FUN_145ee66fc body=230 status=ok
// SIG undefined FUN_145ee66fc(void)

void FUN_145ee66fc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b962bd0;
  FUN_140457ffc(&DAT_14cb896c8,param_1);
  FUN_140457ffc(&DAT_14cb896e0,param_1);
  iVar2 = *(int *)(param_1 + 5);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[4];
    lVar5 = 0;
    do {
      local_38 = *(undefined8 *)(lVar3 + lVar5);
      uVar4 = FUN_14479d2ce(&local_38);
      FUN_1459a0636(param_1,uVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ee67f8 FUN_145ee67f8 body=144 status=ok
// SIG undefined FUN_145ee67f8(void)

code * FUN_145ee67f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee6888();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthParamsStruct";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDigistructDepthParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c00000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b7ce8;
  return FUN_147135b32;
}



// FUNCTION 145ee6888 FUN_145ee6888 body=261 status=ok
// SIG undefined FUN_145ee6888(void)

void FUN_145ee6888(void)

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
              0x110) < DAT_14c9b7d68) {
    FUN_144b3d300(&DAT_14c9b7d68);
    if (DAT_14c9b7d68 == -1) {
      FUN_145ee698e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDigistructDepthParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7ce8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df37);
      _Init_thread_footer(&DAT_14c9b7d68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee698e FUN_145ee698e body=226 status=ok
// SIG undefined FUN_145ee698e(void)

longlong * FUN_145ee698e(longlong *param_1)

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
  pcVar13 = FUN_1462b6176;
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



// FUNCTION 145ee6a72 FUN_145ee6a72 body=138 status=ok
// SIG undefined FUN_145ee6a72(void)

code * FUN_145ee6a72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee6afc;
}



// FUNCTION 145ee6afc FUN_145ee6afc body=138 status=ok
// SIG undefined FUN_145ee6afc(void)

code * FUN_145ee6afc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b61fe;
}



// FUNCTION 145ee6b86 FUN_145ee6b86 body=138 status=ok
// SIG undefined FUN_145ee6b86(void)

code * FUN_145ee6b86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOverrideOpacityMaskRef";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee6a72;
}



// FUNCTION 145ee6c10 FUN_145ee6c10 body=144 status=ok
// SIG undefined FUN_145ee6c10(void)

code * FUN_145ee6c10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee6ca0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SSRParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMobileScreenSpaceReflectionParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcd000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e6d0;
  return FUN_1462edc92;
}



// FUNCTION 145ee6ca0 FUN_145ee6ca0 body=261 status=ok
// SIG undefined FUN_145ee6ca0(void)

void FUN_145ee6ca0(void)

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
              0x110) < DAT_14ca0e750) {
    FUN_144b3d300(&DAT_14ca0e750);
    if (DAT_14ca0e750 == -1) {
      FUN_145ee6da6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileScreenSpaceReflectionParams";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e6d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142def7d5);
      _Init_thread_footer(&DAT_14ca0e750);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee6da6 FUN_145ee6da6 body=226 status=ok
// SIG undefined FUN_145ee6da6(void)

longlong * FUN_145ee6da6(longlong *param_1)

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
  pcVar13 = FUN_1462edd22;
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



// FUNCTION 145ee6e8a FUN_145ee6e8a body=138 status=ok
// SIG undefined FUN_145ee6e8a(void)

code * FUN_145ee6e8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472447f8;
}



// FUNCTION 145ee6f14 FUN_145ee6f14 body=138 status=ok
// SIG undefined FUN_145ee6f14(void)

code * FUN_145ee6f14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevScreenPositionScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462eddaa;
}



// FUNCTION 145ee6f9e FUN_145ee6f9e body=138 status=ok
// SIG undefined FUN_145ee6f9e(void)

code * FUN_145ee6f9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevSceneColorBilinearUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee6f14;
}



// FUNCTION 145ee7028 FUN_145ee7028 body=144 status=ok
// SIG undefined FUN_145ee7028(void)

code * FUN_145ee7028(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee70b8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OwnerParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FOwnerParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000000cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb35960;
  return FUN_145ee98a8;
}



// FUNCTION 145ee70b8 FUN_145ee70b8 body=261 status=ok
// SIG undefined FUN_145ee70b8(void)

void FUN_145ee70b8(void)

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
              0x110) < DAT_14cb359e0) {
    FUN_144b3d300(&DAT_14cb359e0);
    if (DAT_14cb359e0 == -1) {
      FUN_141587e66(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FOwnerParameters";
      local_38 = 0;
      local_50 = 0x400;
      local_58 = 0x60;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb35960,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fc414);
      _Init_thread_footer(&DAT_14cb359e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee71be FUN_145ee71be body=138 status=ok
// SIG undefined FUN_145ee71be(void)

code * FUN_145ee71be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_Pad3";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3cc00000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148059d68;
}



// FUNCTION 145ee7248 FUN_145ee7248 body=138 status=ok
// SIG undefined FUN_145ee7248(void)

code * FUN_145ee7248(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_SystemWorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805a356;
}



// FUNCTION 145ee72d2 FUN_145ee72d2 body=138 status=ok
// SIG undefined FUN_145ee72d2(void)

code * FUN_145ee72d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_Pad1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3ac00000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148059f06;
}



// FUNCTION 145ee735c FUN_145ee735c body=146 status=ok
// SIG undefined FUN_145ee735c(void)

code * FUN_145ee735c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee73ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGlobalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb35a70;
  return FUN_14805bc1e;
}



// FUNCTION 145ee73ee FUN_145ee73ee body=261 status=ok
// SIG undefined FUN_145ee73ee(void)

void FUN_145ee73ee(void)

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
              0x110) < DAT_14cb35af0) {
    FUN_144b3d300(&DAT_14cb35af0);
    if (DAT_14cb35af0 == -1) {
      FUN_141587f4a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGlobalParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb35a70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fc42c);
      _Init_thread_footer(&DAT_14cb35af0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee74f4 FUN_145ee74f4 body=136 status=ok
// SIG undefined FUN_145ee74f4(void)

code * FUN_145ee74f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Time";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805be46;
}



// FUNCTION 145ee757c FUN_145ee757c body=138 status=ok
// SIG undefined FUN_145ee757c(void)

code * FUN_145ee757c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Engine_RealTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805c0f8;
}



// FUNCTION 145ee7606 FUN_145ee7606 body=138 status=ok
// SIG undefined FUN_145ee7606(void)

code * FUN_145ee7606(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Engine_Pad0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805c06e;
}



// FUNCTION 145ee7690 FUN_145ee7690 body=40 status=ok
// SIG undefined FUN_145ee7690(void)

undefined8 FUN_145ee7690(undefined8 param_1,int param_2)

{
  FUN_145ee76b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ee76b8 FUN_145ee76b8 body=330 status=ok
// SIG undefined FUN_145ee76b8(void)

void FUN_145ee76b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd154a0;
  plVar3 = (longlong *)param_1[0x32];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145975de4(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145975dac(param_1 + 10);
  FUN_145ee7802(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ee7802 FUN_145ee7802 body=49 status=ok
// SIG undefined FUN_145ee7802(void)

void FUN_145ee7802(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ee7834 FUN_145ee7834 body=41 status=ok
// SIG undefined FUN_145ee7834(void)

void FUN_145ee7834(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_14158802e(param_1,0,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 145ee785e FUN_145ee785e body=144 status=ok
// SIG undefined FUN_145ee785e(void)

code * FUN_145ee785e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ee78ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FrontLayerTranslucencyReflectionParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenFrontLayerTranslucencyReflectionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x17000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145de10d2;
}



// FUNCTION 145ee78ee FUN_145ee78ee body=268 status=ok
// SIG undefined FUN_145ee78ee(void)

undefined * FUN_145ee78ee(void)

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
              0x110) < DAT_14c9b7f00) {
    FUN_144b3d300(&DAT_14c9b7f00);
    if (DAT_14c9b7f00 == -1) {
      FUN_145ee79fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenFrontLayerTranslucencyReflectionParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7e80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df97);
      _Init_thread_footer(&DAT_14c9b7f00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9b7e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee79fc FUN_145ee79fc body=226 status=ok
// SIG undefined FUN_145ee79fc(void)

longlong * FUN_145ee79fc(longlong *param_1)

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
  pcVar13 = FUN_1462b6ba0;
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



// FUNCTION 145ee7ae0 FUN_145ee7ae0 body=132 status=ok
// SIG undefined FUN_145ee7ae0(void)

undefined1 * FUN_145ee7ae0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Radiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147136bf4;
}



// FUNCTION 145ee7b64 FUN_145ee7b64 body=138 status=ok
// SIG undefined FUN_145ee7b64(void)

code * FUN_145ee7b64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeDepthThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee7bee;
}



// FUNCTION 145ee7bee FUN_145ee7bee body=138 status=ok
// SIG undefined FUN_145ee7bee(void)

code * FUN_145ee7bee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Enabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b6c28;
}



// FUNCTION 145ee7c78 FUN_145ee7c78 body=144 status=ok
// SIG undefined FUN_145ee7c78(void)

code * FUN_145ee7c78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ee7d08();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam35";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDynamicMaterialParametersModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x28000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f01332;
}



// FUNCTION 145ee7d08 FUN_145ee7d08 body=268 status=ok
// SIG undefined FUN_145ee7d08(void)

undefined * FUN_145ee7d08(void)

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
              0x110) < DAT_14cb34d40) {
    FUN_144b3d300(&DAT_14cb34d40);
    if (DAT_14cb34d40 == -1) {
      FUN_1415882ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDynamicMaterialParametersModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x30;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34cc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb918);
      _Init_thread_footer(&DAT_14cb34d40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34cc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee7e16 FUN_145ee7e16 body=132 status=ok
// SIG undefined FUN_145ee7e16(void)

undefined1 * FUN_145ee7e16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicMaterialParameters_ChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148056b18;
}



// FUNCTION 145ee7e9a FUN_145ee7e9a body=138 status=ok
// SIG undefined FUN_145ee7e9a(void)

code * FUN_145ee7e9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicMaterialParameters_Parameter3X";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146462e0a;
}



// FUNCTION 145ee7f24 FUN_145ee7f24 body=138 status=ok
// SIG undefined FUN_145ee7f24(void)

code * FUN_145ee7f24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicMaterialParameters_Parameter1X";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480568f0;
}



// FUNCTION 145ee7fae FUN_145ee7fae body=139 status=ok
// SIG undefined FUN_145ee7fae(void)

undefined8 FUN_145ee7fae(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  InitializeCriticalSection(&local_58);
  SetCriticalSectionSpinCount(&local_58,4000);
  local_30 = 0;
  local_28 = 0;
  FUN_145ee803a(&local_58,param_2);
  FUN_14126834e(&DAT_14cb10a38,param_1,&local_58);
  FUN_1401cb1ee(&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee803a FUN_145ee803a body=177 status=ok
// SIG undefined FUN_145ee803a(void)

void FUN_145ee803a(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != param_1) {
    InitializeCriticalSection(&local_58);
    SetCriticalSectionSpinCount(&local_58,4000);
    local_30 = 0;
    local_28 = 0;
    EnterCriticalSection(param_2);
    if ((param_2[1].LockCount != 0) &&
       (p_Var1 = param_2[1].DebugInfo, p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (**(code **)(*(longlong *)p_Var1 + 0x50))(p_Var1,&local_58);
    }
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    FUN_145ee8172(param_1,&local_58);
    FUN_1401cb1ee(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee80ec FUN_145ee80ec body=134 status=ok
// SIG undefined FUN_145ee80ec(void)

void FUN_145ee80ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b527f20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee8163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 145ee8172 FUN_145ee8172 body=177 status=ok
// SIG undefined FUN_145ee8172(void)

void FUN_145ee8172(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  LONG LVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  
  EnterCriticalSection(param_2);
  p_Var2 = param_2[1].DebugInfo;
  param_2[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  LVar1 = param_2[1].LockCount;
  param_2[1].LockCount = 0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var3 = param_1[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var3)(p_Var3,0);
    FUN_1446efa72(param_1 + 1,0,0,0x10);
    param_1[1].LockCount = 0;
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  param_1[1].DebugInfo = p_Var2;
  param_1[1].LockCount = LVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee81dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 145ee8224 FUN_145ee8224 body=67 status=ok
// SIG undefined FUN_145ee8224(void)

void FUN_145ee8224(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a0ceb2(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141588392(param_1);
    return;
  }
  FUN_148d01896(param_1);
  FUN_145a0ceb2(param_1,0);
  return;
}



// FUNCTION 145ee8268 FUN_145ee8268 body=205 status=ok
// SIG undefined FUN_145ee8268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee8268(void)

{
  if ((DAT_14c9c6dcf & 2) == 0) {
    DAT_14c9c6dcf = DAT_14c9c6dcf | 2;
    _DAT_14c9c6d70 = L"FShadowObjectCullVS";
    _DAT_14c9c6d88 = FUN_146826540;
    _DAT_14c9c6d90 = FUN_146825d77;
    _DAT_14c9c6d98 = FUN_146825fd6;
    _DAT_14c9c6da0 = FUN_1407e02ea;
    _DAT_14c9c6da8 = FUN_146826273;
    _DAT_14c9c6d80 = FUN_14714f310;
    _DAT_14c9c6dc0 = 0xffffffff000000e0;
    _DAT_14c9c6dc8 = 8;
    DAT_14c9c6dcc = 0;
    _DAT_14c9c6db0 = &LAB_14714f33a;
    FUN_145ee8336();
    FUN_1407e00cc(&DAT_14c9c6d68);
    return;
  }
  return;
}



// FUNCTION 145ee8336 FUN_145ee8336 body=123 status=ok
// SIG undefined FUN_145ee8336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee8336(void)

{
  _DAT_14c9c96e8 = L"BASE";
  DAT_14c9c9712 = 4;
  _DAT_14c9c96f0 = FUN_140b35ae4();
  _DAT_14c9c96f8 = DAT_14c9c6d78;
  _DAT_14c9c9700 = &LAB_14682652b;
  DAT_14c9c6d78 = &DAT_14c9c96e8;
  DAT_14c9c6dcd = DAT_14c9c6dcd + '\x01';
  _DAT_14c9c9708 = 0x100000000;
  if (*(char *)(_DAT_14c9c96f0 + 100) != '\0') {
    DAT_14c9c6dce = DAT_14c9c6dce + '\x01';
  }
  return;
}



// FUNCTION 145ee83b2 FUN_145ee83b2 body=226 status=ok
// SIG undefined FUN_145ee83b2(void)

longlong * FUN_145ee83b2(longlong *param_1)

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
  pcVar13 = FUN_1462c0764;
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



// FUNCTION 145ee8496 FUN_145ee8496 body=136 status=ok
// SIG undefined FUN_145ee8496(void)

undefined1 * FUN_145ee8496(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xcf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14715311e;
}



// FUNCTION 145ee851e FUN_145ee851e body=138 status=ok
// SIG undefined FUN_145ee851e(void)

code * FUN_145ee851e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c07ec;
}



// FUNCTION 145ee85a8 FUN_145ee85a8 body=144 status=ok
// SIG undefined FUN_145ee85a8(void)

code * FUN_145ee85a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1401ab454();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ObjectBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ee8496;
}



// FUNCTION 145ee8638 FUN_145ee8638 body=205 status=ok
// SIG undefined FUN_145ee8638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee8638(void)

{
  if ((DAT_14c9c7147 & 2) == 0) {
    DAT_14c9c7147 = DAT_14c9c7147 | 2;
    _DAT_14c9c70e8 = L"FDistanceFieldShadowingUpsamplePS";
    _DAT_14c9c7100 = FUN_146826540;
    _DAT_14c9c7108 = FUN_146825d77;
    _DAT_14c9c7110 = FUN_146825fd6;
    _DAT_14c9c7118 = FUN_1407e02ea;
    _DAT_14c9c7120 = FUN_146826273;
    _DAT_14c9c70f8 = FUN_14714f5c6;
    _DAT_14c9c7138 = 0xffffffff000000e0;
    _DAT_14c9c7140 = 8;
    DAT_14c9c7144 = 0;
    _DAT_14c9c7128 = &LAB_14714f5f0;
    FUN_145ee8706();
    FUN_1407e00cc(&DAT_14c9c70e0);
    return;
  }
  return;
}



// FUNCTION 145ee8706 FUN_145ee8706 body=123 status=ok
// SIG undefined FUN_145ee8706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee8706(void)

{
  _DAT_14c9c9778 = L"BASE";
  DAT_14c9c97a2 = 4;
  _DAT_14c9c9780 = FUN_140b35ae4();
  _DAT_14c9c9788 = DAT_14c9c70f0;
  _DAT_14c9c9790 = &LAB_14682652b;
  DAT_14c9c70f0 = &DAT_14c9c9778;
  DAT_14c9c7145 = DAT_14c9c7145 + '\x01';
  _DAT_14c9c9798 = 0x100000000;
  if (*(char *)(_DAT_14c9c9780 + 100) != '\0') {
    DAT_14c9c7146 = DAT_14c9c7146 + '\x01';
  }
  return;
}



// FUNCTION 145ee8782 FUN_145ee8782 body=226 status=ok
// SIG undefined FUN_145ee8782(void)

longlong * FUN_145ee8782(longlong *param_1)

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
  pcVar13 = FUN_1462c102c;
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



// FUNCTION 145ee8866 FUN_145ee8866 body=136 status=ok
// SIG undefined FUN_145ee8866(void)

code * FUN_145ee8866(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NearFadePlaneOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000193;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153e9e;
}



// FUNCTION 145ee88ee FUN_145ee88ee body=138 status=ok
// SIG undefined FUN_145ee88ee(void)

code * FUN_145ee88ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000018e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471540c6;
}



// FUNCTION 145ee8978 FUN_145ee8978 body=144 status=ok
// SIG undefined FUN_145ee8978(void)

code * FUN_145ee8978(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000018c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c10b4;
}



// FUNCTION 145ee8a08 FUN_145ee8a08 body=146 status=ok
// SIG undefined FUN_145ee8a08(void)

code * FUN_145ee8a08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee8a9a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1f4f8a;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FOITBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb1000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b7f08;
  return FUN_145c17dbe;
}



// FUNCTION 145ee8a9a FUN_145ee8a9a body=261 status=ok
// SIG undefined FUN_145ee8a9a(void)

void FUN_145ee8a9a(void)

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
              0x110) < DAT_14c9b7f88) {
    FUN_144b3d300(&DAT_14c9b7f88);
    if (DAT_14c9b7f88 == -1) {
      FUN_145ee8ba0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FOITBasePassUniformParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7f08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfc7);
      _Init_thread_footer(&DAT_14c9b7f88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee8ba0 FUN_145ee8ba0 body=226 status=ok
// SIG undefined FUN_145ee8ba0(void)

longlong * FUN_145ee8ba0(longlong *param_1)

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
  pcVar13 = FUN_1462b6fe0;
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



// FUNCTION 145ee8c84 FUN_145ee8c84 body=138 status=ok
// SIG undefined FUN_145ee8c84(void)

code * FUN_145ee8c84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OITMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147137ff6;
}



// FUNCTION 145ee8d0e FUN_145ee8d0e body=138 status=ok
// SIG undefined FUN_145ee8d0e(void)

code * FUN_145ee8d0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutOITSampleCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RasterizerOrderedTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147137f6c;
}



// FUNCTION 145ee8d98 FUN_145ee8d98 body=138 status=ok
// SIG undefined FUN_145ee8d98(void)

code * FUN_145ee8d98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSamplePerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b7068;
}



// FUNCTION 145ee8e22 FUN_145ee8e22 body=140 status=ok
// SIG undefined FUN_145ee8e22(void)

undefined1 * FUN_145ee8e22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee8eae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FNodeAndClusterCullSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x405;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17ce8;
  return &LAB_147258682;
}



// FUNCTION 145ee8eae FUN_145ee8eae body=261 status=ok
// SIG undefined FUN_145ee8eae(void)

void FUN_145ee8eae(void)

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
              0x110) < DAT_14ca17d68) {
    FUN_144b3d300(&DAT_14ca17d68);
    if (DAT_14ca17d68 == -1) {
      FUN_141588a7a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNodeAndClusterCullSharedParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x3db;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17ce8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2767b);
      _Init_thread_footer(&DAT_14ca17d68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee8fb4 FUN_145ee8fb4 body=138 status=ok
// SIG undefined FUN_145ee8fb4(void)

code * FUN_145ee8fb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutStreamingRequests";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FStreamingRequest>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000003eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee903e;
}



// FUNCTION 145ee903e FUN_145ee903e body=138 status=ok
// SIG undefined FUN_145ee903e(void)

code * FUN_145ee903e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisibleClustersSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000003ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472588ae;
}



// FUNCTION 145ee90c8 FUN_145ee90c8 body=144 status=ok
// SIG undefined FUN_145ee90c8(void)

code * FUN_145ee90c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000003df;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f15ea;
}



// FUNCTION 145ee9158 FUN_145ee9158 body=146 status=ok
// SIG undefined FUN_145ee9158(void)

code * FUN_145ee9158(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee91ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrain";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFilmGrainParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000127;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca34090;
  return FUN_1462ff26c;
}



// FUNCTION 145ee91ea FUN_145ee91ea body=261 status=ok
// SIG undefined FUN_145ee91ea(void)

void FUN_145ee91ea(void)

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
              0x110) < DAT_14ca34110) {
    FUN_144b3d300(&DAT_14ca34110);
    if (DAT_14ca34110 == -1) {
      FUN_145ee92f0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FFilmGrainParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x117;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34090,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14129);
      _Init_thread_footer(&DAT_14ca34110);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee92f0 FUN_145ee92f0 body=226 status=ok
// SIG undefined FUN_145ee92f0(void)

longlong * FUN_145ee92f0(longlong *param_1)

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
  pcVar13 = FUN_1462ff2f6;
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



// FUNCTION 145ee93d4 FUN_145ee93d4 body=138 status=ok
// SIG undefined FUN_145ee93d4(void)

code * FUN_145ee93d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrainIntensityMidtones";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000011a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a1f5c;
}



// FUNCTION 145ee945e FUN_145ee945e body=138 status=ok
// SIG undefined FUN_145ee945e(void)

code * FUN_145ee945e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrainShadowsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a1ed2;
}



// FUNCTION 145ee94e8 FUN_145ee94e8 body=138 status=ok
// SIG undefined FUN_145ee94e8(void)

code * FUN_145ee94e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrainHighlightsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee945e;
}



// FUNCTION 145ee9572 FUN_145ee9572 body=146 status=ok
// SIG undefined FUN_145ee9572(void)

code * FUN_145ee9572(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee9604();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EmitterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FEmitterParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x640000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb358d8;
  return FUN_145ee7028;
}



// FUNCTION 145ee9604 FUN_145ee9604 body=261 status=ok
// SIG undefined FUN_145ee9604(void)

void FUN_145ee9604(void)

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
              0x110) < DAT_14cb35958) {
    FUN_144b3d300(&DAT_14cb35958);
    if (DAT_14cb35958 == -1) {
      FUN_141588b5e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEmitterParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x8d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb358d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fc408);
      _Init_thread_footer(&DAT_14cb35958);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee970a FUN_145ee970a body=138 status=ok
// SIG undefined FUN_145ee970a(void)

code * FUN_145ee970a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Emitter_TotalSpawnedParticles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805977c;
}



// FUNCTION 145ee9794 FUN_145ee9794 body=138 status=ok
// SIG undefined FUN_145ee9794(void)

code * FUN_145ee9794(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Emitter_RandomSeed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146463b38;
}



// FUNCTION 145ee981e FUN_145ee981e body=138 status=ok
// SIG undefined FUN_145ee981e(void)

code * FUN_145ee981e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Emitter_Age";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148059a2e;
}



// FUNCTION 145ee98a8 FUN_145ee98a8 body=146 status=ok
// SIG undefined FUN_145ee98a8(void)

code * FUN_145ee98a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee993a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSystemParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb359e8;
  return FUN_145ee735c;
}



// FUNCTION 145ee993a FUN_145ee993a body=261 status=ok
// SIG undefined FUN_145ee993a(void)

void FUN_145ee993a(void)

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
              0x110) < DAT_14cb35a68) {
    FUN_144b3d300(&DAT_14cb35a68);
    if (DAT_14cb35a68 == -1) {
      FUN_141588c42(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSystemParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x3b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb359e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fc420);
      _Init_thread_footer(&DAT_14cb35a68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee9a40 FUN_145ee9a40 body=138 status=ok
// SIG undefined FUN_145ee9a40(void)

code * FUN_145ee9a40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_LODDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x440000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805b380;
}



// FUNCTION 145ee9aca FUN_145ee9aca body=138 status=ok
// SIG undefined FUN_145ee9aca(void)

code * FUN_145ee9aca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_CurrentTimeStep";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805af30;
}



// FUNCTION 145ee9b54 FUN_145ee9b54 body=138 status=ok
// SIG undefined FUN_145ee9b54(void)

code * FUN_145ee9b54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_System_NumParticles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805aea6;
}



// FUNCTION 145ee9bde FUN_145ee9bde body=77 status=ok
// SIG undefined FUN_145ee9bde(void)

void FUN_145ee9bde(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ee9c2c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147129160();
      return;
    }
  }
  return;
}



// FUNCTION 145ee9c2c FUN_145ee9c2c body=132 status=ok
// SIG undefined FUN_145ee9c2c(void)

void FUN_145ee9c2c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ee9cbc FUN_145ee9cbc body=199 status=ok
// SIG undefined FUN_145ee9cbc(void)

undefined8 * FUN_145ee9cbc(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a4f8920;
  param_1[0x57] = 0;
  param_1[0x58] = 0x2000000000;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x2000000000;
  param_1[0x5c] = 0xffffffff;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0x800000000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0x2000000000;
  param_1[0x80] = 0xffffffff;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0x2000000000;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0x800000000;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0x2000000000;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0x800000000;
  return param_1;
}



// FUNCTION 145ee9d9e FUN_145ee9d9e body=79 status=ok
// SIG undefined FUN_145ee9d9e(void)

void FUN_145ee9d9e(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x3b8) == '\x01') && (*(char *)(param_1 + 0x178) != '\x03')) {
    plVar1 = (longlong *)FUN_14093f908(param_1);
    (**(code **)(*plVar1 + 0x680))(plVar1);
    plVar1 = (longlong *)FUN_14093f908(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ee9ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x688))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145ee9dee FUN_145ee9dee body=64 status=ok
// SIG undefined FUN_145ee9dee(void)

void FUN_145ee9dee(longlong *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_145ee9e2e();
  if ((cVar1 != '\0') && (0 < *(int *)(*param_1 + 0x10))) {
    piVar2 = (int *)(*param_1 + 0x10);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee9e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      SetWindowDisplayAffinity(*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 145ee9e2e FUN_145ee9e2e body=141 status=ok
// SIG undefined FUN_145ee9e2e(void)

bool FUN_145ee9e2e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ee9ebc(&local_20);
  plVar1 = (longlong *)*param_1;
  if (local_20 == (longlong *)0x0) {
    if (plVar1 == (longlong *)0x0) goto LAB_145ee9e73;
    *param_1 = 0;
    plVar2 = plVar1;
  }
  else {
    if (plVar1 == (longlong *)0x0) {
LAB_145ee9eb7:
      *param_1 = (longlong)local_20;
      goto LAB_145ee9e73;
    }
    plVar2 = local_20;
    if (*plVar1 != *local_20) {
      *param_1 = 0;
      FUN_1400020a8();
      if (*param_1 == 0) goto LAB_145ee9eb7;
    }
  }
  FUN_1400020a8(plVar2);
LAB_145ee9e73:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_20 != (longlong *)0x0;
}



// FUNCTION 145ee9ebc FUN_145ee9ebc body=131 status=ok
// SIG undefined FUN_145ee9ebc(void)

undefined8 * FUN_145ee9ebc(undefined8 *param_1)

{
  BOOL *pfEnabled;
  HRESULT HVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  HWND hWnd;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  pfEnabled = (BOOL *)((longlong)puVar3 + 0xc);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  HVar1 = DwmIsCompositionEnabled(pfEnabled);
  if ((HVar1 == 0) && (*pfEnabled != 0)) {
    hWnd = (HWND)FUN_145ee9f40();
    *puVar3 = hWnd;
    if (hWnd != (HWND)0x0) {
      BVar2 = GetWindowDisplayAffinity(hWnd,(DWORD *)(puVar3 + 1));
      *pfEnabled = BVar2;
      if (BVar2 != 0) {
        *param_1 = puVar3;
        return param_1;
      }
    }
  }
  *param_1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  return param_1;
}



// FUNCTION 145ee9f40 FUN_145ee9f40 body=292 status=ok
// SIG undefined FUN_145ee9f40(void)

longlong ** FUN_145ee9f40(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong **pplVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    pplVar7 = *(longlong ***)(DAT_14cb0d2b0 + 0xc20);
    if ((pplVar7 != (longlong **)0x0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(pplVar7);
    }
    else if (pplVar7 == (longlong **)0x0) goto LAB_145eea01b;
    plVar4 = pplVar7[0x23];
    if (plVar4 != (longlong *)0x0) {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_145eea01b;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
      pplVar3 = pplVar7 + 0x22;
      if (*pplVar3 == (longlong *)0x0) {
        bVar8 = true;
      }
      else {
        pplVar7 = &local_38;
        FUN_14151e938(*pplVar3,pplVar7);
        bVar8 = local_38 == (longlong *)0x0;
        if (!bVar8) {
          pplVar7 = (longlong **)(**(code **)(*local_38 + 0xc0))();
        }
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
      }
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
      if (!bVar8) goto LAB_145ee9ff8;
    }
  }
LAB_145eea01b:
  pplVar7 = (longlong **)0x0;
LAB_145ee9ff8:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pplVar7;
}



// FUNCTION 145eea070 FUN_145eea070 body=308 status=ok
// SIG undefined FUN_145eea070(void)

undefined8 * FUN_145eea070(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14ac1a660;
  param_1[5] = &PTR_FUN_14ac1ab00;
  param_1[6] = &PTR_LAB_14ac1ab40;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0xff;
  FUN_1446f470e((longlong)param_1 + 300,L"Invalid",1);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_145eea1a4((longlong)param_1 + 0x144);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xfd;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  lVar1 = FUN_1413f6fa8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe | (uint)*(byte *)(lVar2 + 0xd1)
  ;
  return param_1;
}



// FUNCTION 145eea1a4 FUN_145eea1a4 body=101 status=ok
// SIG undefined FUN_145eea1a4(void)

undefined4 * FUN_145eea1a4(undefined4 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20bd8) {
    FUN_144b3d300(&DAT_14cb20bd8);
    if (DAT_14cb20bd8 == -1) {
      DAT_14cb20bd4 = 0xffffffff;
      _Init_thread_footer(&DAT_14cb20bd8);
    }
  }
  *param_1 = DAT_14cb20bd4;
  return param_1;
}



// FUNCTION 145eea212 FUN_145eea212 body=201 status=ok
// SIG undefined FUN_145eea212(void)

undefined8 * FUN_145eea212(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad70290;
  local_2c = 0;
  local_24 = 0xc4750000;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6b060;
  param_1[9] = DAT_14c846330;
  *(undefined4 *)(param_1 + 10) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x54) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x5c) = DAT_14c846338;
  FUN_1459ac994(param_1 + 6,&local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eea2dc FUN_145eea2dc body=70 status=ok
// SIG undefined FUN_145eea2dc(void)

void FUN_145eea2dc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  uVar1 = DAT_14cb81c90;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    lVar2 = (longlong)(int)DAT_14cb81c90;
    DAT_14cb81c90 = DAT_14cb81c90 + 1;
    if (DAT_14cb81c94 < DAT_14cb81c90) {
      FUN_145eea322(uVar1);
    }
    *(longlong *)(DAT_14cb81c88 + lVar2 * 8) = param_1;
  }
  return;
}



// FUNCTION 145eea322 FUN_145eea322 body=140 status=ok
// SIG undefined FUN_145eea322(void)

void FUN_145eea322(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb81c90;
  if (param_1 <= (int)DAT_14cb81c90) {
    if (DAT_14cb81c94 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb81c90) {
        uVar2 = DAT_14cb81c90;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb81c90 + ((ulonglong)((longlong)(int)DAT_14cb81c90 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb81c94 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb81c88,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145eea3ba FUN_145eea3ba body=93 status=ok
// SIG undefined FUN_145eea3ba(void)

undefined8 * FUN_145eea3ba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14127b1cd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1413eadba(param_1,iVar1);
      FUN_1413ead8c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145eea420 FUN_145eea420 body=202 status=ok
// SIG undefined FUN_145eea420(void)

undefined8 * FUN_145eea420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14bc1e8a0;
  param_1[5] = &PTR_FUN_14bc1ed20;
  param_1[6] = &PTR_LAB_14bc1ed60;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x19d) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 6;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  return param_1;
}



// FUNCTION 145eea4f2 FUN_145eea4f2 body=202 status=ok
// SIG undefined FUN_145eea4f2(void)

undefined8 * FUN_145eea4f2(undefined8 *param_1)

{
  FUN_14589b202();
  *param_1 = &PTR_FUN_14bd77780;
  param_1[5] = &PTR_FUN_14bd77b40;
  param_1[0x13] = &PTR_FUN_14bd77b60;
  param_1[0x17] = &PTR_FUN_14bd77b90;
  param_1[0x18] = &PTR_FUN_14bd77ba0;
  param_1[0x35] = &PTR_FUN_14bd77bb8;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 145eea5bc FUN_145eea5bc body=153 status=ok
// SIG undefined FUN_145eea5bc(void)

bool FUN_145eea5bc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eea656 FUN_145eea656 body=132 status=ok
// SIG undefined FUN_145eea656(void)

void FUN_145eea656(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"Grapple_Start");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eea6dc FUN_145eea6dc body=132 status=ok
// SIG undefined FUN_145eea6dc(void)

void FUN_145eea6dc(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"Grapple_Stop");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eea762 FUN_145eea762 body=49 status=ok
// SIG undefined FUN_145eea762(void)

void FUN_145eea762(longlong param_1)

{
  if (*(char *)(param_1 + 0x3d4) == '\x01') {
    do {
      FUN_148e9361c(param_1);
    } while (*(char *)(param_1 + 0x3d4) != '\0');
  }
  FUN_145eea794(param_1);
  return;
}



// FUNCTION 145eea794 FUN_145eea794 body=38 status=ok
// SIG undefined FUN_145eea794(void)

void FUN_145eea794(longlong *param_1)

{
  (**(code **)(*param_1 + 0x188))();
  FUN_145eea7ba(param_1);
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 145eea7ba FUN_145eea7ba body=56 status=ok
// SIG undefined FUN_145eea7ba(void)

void FUN_145eea7ba(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_141588d26(lVar1 + 0x4e0);
    return;
  }
  return;
}



// FUNCTION 145eea7f2 FUN_145eea7f2 body=95 status=ok
// SIG undefined FUN_145eea7f2(void)

void FUN_145eea7f2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x170))();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
  FUN_145eea852(lVar1,&DAT_14cbe5a88);
  FUN_145eea852(lVar1,&DAT_14cbe5a90);
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000145eea84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
  return;
}



// FUNCTION 145eea852 FUN_145eea852 body=220 status=ok
// SIG undefined FUN_145eea852(void)

void FUN_145eea852(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  lVar1 = *param_2;
  uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
  uVar6 = (uint)lVar1 & 0xffff;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar4 = *(int *)((longlong)plVar5 +
                  (ulonglong)
                  ((int)param_1[9] - 1U &
                  (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
  if (iVar4 == -1) {
    return;
  }
  lVar2 = *param_1;
  iVar7 = iVar4;
  while (*(longlong *)(lVar2 + (longlong)iVar7 * 0x28) != lVar1) {
    iVar7 = *(int *)(lVar2 + (longlong)iVar7 * 0x28 + 0x20);
    if (iVar7 == -1) {
      return;
    }
  }
  do {
    plVar5 = (longlong *)(lVar2 + (longlong)iVar4 * 0x28);
    if (*plVar5 == lVar1) goto LAB_145eea8eb;
    iVar4 = (int)plVar5[4];
  } while (iVar4 != -1);
  plVar5 = (longlong *)0x0;
LAB_145eea8eb:
  iVar4 = *(int *)((longlong)plVar5 + 0x14);
  FUN_140989cc7(plVar5[1],(int)plVar5[2]);
  *(undefined4 *)(plVar5 + 2) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)plVar5 + 0x14) != 0)) {
    FUN_140989f18(plVar5 + 1,0);
  }
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  return;
}



// FUNCTION 145eea92e FUN_145eea92e body=48 status=ok
// SIG undefined FUN_145eea92e(void)

void FUN_145eea92e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 145eea95e FUN_145eea95e body=123 status=ok
// SIG undefined FUN_145eea95e(void)

void FUN_145eea95e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0xb) {
      iVar5 = 10;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x14c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_145eea9da(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145eea9da FUN_145eea9da body=140 status=ok
// SIG undefined FUN_145eea9da(void)

void FUN_145eea9da(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x20);
  return;
}



// FUNCTION 145eeaa66 FUN_145eeaa66 body=238 status=ok
// SIG undefined FUN_145eeaa66(void)

void FUN_145eeaa66(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x970))(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eeab56 FUN_145eeab56 body=130 status=ok
// SIG undefined FUN_145eeab56(void)

void FUN_145eeab56(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 0x20 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (lVar2 != 0) {
        lVar3 = FUN_14018fcd2();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1457c7c16(lVar2,param_3,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145eeabec FUN_145eeabec body=38 status=ok
// SIG undefined FUN_145eeabec(void)

undefined8 FUN_145eeabec(undefined8 param_1,int param_2)

{
  FUN_145eeac12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eeac12 FUN_145eeac12 body=363 status=ok
// SIG undefined FUN_145eeac12(void)

void FUN_145eeac12(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  *param_1 = &PTR_LAB_149e138a0;
  if ((param_1[9] != 0) && (*(char *)(param_1[9] + 0x10) == '\x01')) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c83f438;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c83f450 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c83f450;
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_78 = &DAT_14c83f428;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c83f438)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        FUN_1467be528(*(undefined8 *)(*local_78 + 8 + (longlong)iVar3 * 0x18),param_1);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != &DAT_14c83f428 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c83f438 ||
               local_60._4_4_ != iVar4));
    }
    local_60 = uVar2;
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      FUN_1467c0ac0(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  FUN_14591f8bc(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eead92 FUN_145eead92 body=38 status=ok
// SIG undefined FUN_145eead92(void)

undefined8 FUN_145eead92(undefined8 param_1,int param_2)

{
  FUN_145eeadb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eeadb8 FUN_145eeadb8 body=363 status=ok
// SIG undefined FUN_145eeadb8(void)

void FUN_145eeadb8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  *param_1 = &PTR_LAB_149e12180;
  if ((param_1[9] != 0) && (*(char *)(param_1[9] + 0x10) == '\x01')) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c83f438;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c83f450 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c83f450;
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_78 = &DAT_14c83f428;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c83f438)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        FUN_1467be528(*(undefined8 *)(*local_78 + 8 + (longlong)iVar3 * 0x18),param_1);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != &DAT_14c83f428 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c83f438 ||
               local_60._4_4_ != iVar4));
    }
    local_60 = uVar2;
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      FUN_1467be678(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  FUN_14591f8bc(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eeaf30 FUN_145eeaf30 body=200 status=ok
// SIG undefined FUN_145eeaf30(void)

undefined8 * FUN_145eeaf30(undefined8 *param_1)

{
  FUN_1459dc438();
  *param_1 = &PTR_FUN_14a576620;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f63d70a3be56042;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3fbeb8523dcccccd;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f59999a3f59999a;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f547ae13f7e76c9;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3fa147ae;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f63d70a3be56042;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3fbeb8523dcccccd;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f59999a3f59999a;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3f547ae13f7e76c9;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3fa147ae;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  return param_1;
}



// FUNCTION 145eeaff8 FUN_145eeaff8 body=103 status=ok
// SIG undefined FUN_145eeaff8(void)

undefined1 * FUN_145eeaff8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 2;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 2;
  return param_1;
}



// FUNCTION 145eeb06a FUN_145eeb06a body=200 status=ok
// SIG undefined FUN_145eeb06a(void)

longlong * FUN_145eeb06a(longlong *param_1)

{
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a843350;
  param_1[5] = (longlong)&PTR_FUN_14a843d50;
  param_1[6] = (longlong)&PTR_LAB_14a843d90;
  param_1[0x55] = (longlong)&PTR_FUN_14a843de0;
  param_1[0x56] = (longlong)&PTR_FUN_14a843e60;
  param_1[0x57] = (longlong)&PTR_FUN_14a843e70;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  param_1[199] = 0;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0xffff00ff;
  *(undefined4 *)(param_1 + 0xc5) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0x3faaaaa8;
  *(undefined4 *)(param_1 + 0xc6) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0x447a0000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  return param_1;
}



// FUNCTION 145eeb13e FUN_145eeb13e body=200 status=ok
// SIG undefined FUN_145eeb13e(void)

undefined8 * FUN_145eeb13e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR_FUN_14abd74c0;
  param_1[0x12] = 0;
  uVar1 = DAT_14cb1e7b8;
  param_1[0x13] = DAT_14cb1e7b0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14cb1e7c0;
  *(undefined4 *)(param_1 + 0x16) = 0x41f00000;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff81 | 0x2e;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff53 | 0x2c;
  return param_1;
}



// FUNCTION 145eeb20e FUN_145eeb20e body=202 status=ok
// SIG undefined FUN_145eeb20e(void)

void FUN_145eeb20e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcb2b0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eeb2da FUN_145eeb2da body=26 status=ok
// SIG undefined FUN_145eeb2da(void)

void FUN_145eeb2da(undefined8 param_1)

{
  FUN_145eeb2f4();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145eeb2f4 FUN_145eeb2f4 body=184 status=ok
// SIG undefined FUN_145eeb2f4(void)

void FUN_145eeb2f4(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x60) == '\0') {
    local_30 = (longlong *)0x0;
    cVar2 = FUN_140a68212();
    if (cVar2 != '\0') {
      local_20 = 0;
      plVar3 = (longlong *)FUN_1401e3228();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_30);
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x68))(local_30,param_1 + 0x58);
        }
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_28 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eeb3ae FUN_145eeb3ae body=55 status=ok
// SIG undefined FUN_145eeb3ae(void)

void FUN_145eeb3ae(longlong *param_1)

{
  FUN_145eeb3e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eeb3e6 FUN_145eeb3e6 body=365 status=ok
// SIG undefined FUN_145eeb3e6(void)

void FUN_145eeb3e6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145eeb55e FUN_145eeb55e body=203 status=ok
// SIG undefined FUN_145eeb55e(void)

undefined8 * FUN_145eeb55e(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee31c0;
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
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1446f8bcc(param_1 + 0x16,0);
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 145eeb62a FUN_145eeb62a body=142 status=ok
// SIG undefined FUN_145eeb62a(void)

code * FUN_145eeb62a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145eeb6b8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TranslucentSelfShadow";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FTranslucentSelfShadowUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe0000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e9f9fa;
}



// FUNCTION 145eeb6b8 FUN_145eeb6b8 body=278 status=ok
// SIG undefined FUN_145eeb6b8(void)

undefined * FUN_145eeb6b8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca546a8) {
    FUN_144b3d300(&DAT_14ca546a8);
    if (DAT_14ca546a8 == -1) {
      FUN_145eeb7d0(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"TranslucentSelfShadow";
      local_78 = L"FTranslucentSelfShadowUniformParameters";
      local_50 = 0x90;
      local_58 = 0x585;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca54628,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430594ab);
      _Init_thread_footer(&DAT_14ca546a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca54628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


