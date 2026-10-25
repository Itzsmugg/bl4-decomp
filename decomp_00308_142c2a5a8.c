// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c2a5a8 FUN_142c2a5a8 body=576 status=ok
// SIG undefined FUN_142c2a5a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c2a5a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2fd0) {
    FUN_144b3d300(&DAT_14c9d2fd0);
    if (DAT_14c9d2fd0 == -1) {
      FUN_142c4145c();
      if ((DAT_14c9d30c7 & 2) == 0) {
        DAT_14c9d30c7 = DAT_14c9d30c7 | 2;
        _DAT_14c9d3068 = L"FCopyWindowCS";
        _DAT_14c9d3080 = FUN_146826540;
        _DAT_14c9d3088 = FUN_146825d77;
        _DAT_14c9d3090 = FUN_146825fd6;
        _DAT_14c9d3098 = FUN_1407e02ea;
        _DAT_14c9d30a0 = FUN_146826273;
        _DAT_14c9d3078 = FUN_142c418cc;
        _DAT_14c9d30b8 = 0xffffffff000000e0;
        _DAT_14c9d30c0 = 8;
        DAT_14c9d30c4 = 0;
        _DAT_14c9d30a8 = &LAB_142c418f8;
        _DAT_14c9d30c8 = L"BASE";
        DAT_14c9d30f2 = 4;
        _DAT_14c9d30d0 = FUN_140b35ae4();
        _DAT_14c9d30d8 = DAT_14c9d3070;
        _DAT_14c9d30e0 = &LAB_14682652b;
        DAT_14c9d3070 = &DAT_14c9d30c8;
        DAT_14c9d30c5 = DAT_14c9d30c5 + '\x01';
        _DAT_14c9d30e8 = 0x100000000;
        if (*(char *)(_DAT_14c9d30d0 + 100) != '\0') {
          DAT_14c9d30c6 = DAT_14c9d30c6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14c9d3060);
      }
      FUN_140db5666(&DAT_14c9d2f28,0,&DAT_14c9d3060,L"FCopyWindowCS",
                    L"/Engine/Private/GPUFastFourierTransform.usf",L"CopyWindowCS",5,1,FUN_142c413c6
                    ,FUN_142c41366,&LAB_142c41344,&LAB_142c41340,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d2fd8);
      _DAT_14c9d2f28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c41450);
      _Init_thread_footer(&DAT_14c9d2fd0);
    }
  }
  return &DAT_14c9d2f28;
}



// FUNCTION 142c2a7e8 FUN_142c2a7e8 body=576 status=ok
// SIG undefined FUN_142c2a7e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c2a7e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d31a0) {
    FUN_144b3d300(&DAT_14c9d31a0);
    if (DAT_14c9d31a0 == -1) {
      FUN_142c41a18();
      if ((DAT_14c9d3297 & 2) == 0) {
        DAT_14c9d3297 = DAT_14c9d3297 | 2;
        _DAT_14c9d3238 = L"FComplexMultiplyImagesCS";
        _DAT_14c9d3250 = FUN_146826540;
        _DAT_14c9d3258 = FUN_146825d77;
        _DAT_14c9d3260 = FUN_146825fd6;
        _DAT_14c9d3268 = FUN_1407e02ea;
        _DAT_14c9d3270 = FUN_146826273;
        _DAT_14c9d3248 = FUN_142c41e88;
        _DAT_14c9d3288 = 0xffffffff000000e0;
        _DAT_14c9d3290 = 8;
        DAT_14c9d3294 = 0;
        _DAT_14c9d3278 = &LAB_142c41eb4;
        _DAT_14c9d3298 = L"BASE";
        DAT_14c9d32c2 = 4;
        _DAT_14c9d32a0 = FUN_140b35ae4();
        _DAT_14c9d32a8 = DAT_14c9d3240;
        _DAT_14c9d32b0 = &LAB_14682652b;
        DAT_14c9d3240 = &DAT_14c9d3298;
        DAT_14c9d3295 = DAT_14c9d3295 + '\x01';
        _DAT_14c9d32b8 = 0x100000000;
        if (*(char *)(_DAT_14c9d32a0 + 100) != '\0') {
          DAT_14c9d3296 = DAT_14c9d3296 + '\x01';
        }
        FUN_1407e00cc(&DAT_14c9d3230);
      }
      FUN_140db5666(&DAT_14c9d30f8,0,&DAT_14c9d3230,L"FComplexMultiplyImagesCS",
                    L"/Engine/Private/GPUFastFourierTransform.usf",L"ComplexMultiplyImagesCS",5,1,
                    FUN_142c41982,FUN_142c41922,&LAB_142c41900,&LAB_142c418fc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d31a8);
      _DAT_14c9d30f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c41a0c);
      _Init_thread_footer(&DAT_14c9d31a0);
    }
  }
  return &DAT_14c9d30f8;
}



// FUNCTION 142c2aa28 FUN_142c2aa28 body=576 status=ok
// SIG undefined FUN_142c2aa28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c2aa28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3370) {
    FUN_144b3d300(&DAT_14c9d3370);
    if (DAT_14c9d3370 == -1) {
      FUN_142c41fc8();
      if ((DAT_14c9d3467 & 2) == 0) {
        DAT_14c9d3467 = DAT_14c9d3467 | 2;
        _DAT_14c9d3408 = L"FGSComplexTransformCS";
        _DAT_14c9d3420 = FUN_146826540;
        _DAT_14c9d3428 = FUN_146825d77;
        _DAT_14c9d3430 = FUN_146825fd6;
        _DAT_14c9d3438 = FUN_1407e02ea;
        _DAT_14c9d3440 = FUN_146826273;
        _DAT_14c9d3418 = FUN_142c425d0;
        _DAT_14c9d3458 = 0xffffffff000000e0;
        _DAT_14c9d3460 = 8;
        DAT_14c9d3464 = 0;
        _DAT_14c9d3448 = &LAB_142c425fc;
        _DAT_14c9d3468 = L"BASE";
        DAT_14c9d3492 = 4;
        _DAT_14c9d3470 = FUN_140b35ae4();
        _DAT_14c9d3478 = DAT_14c9d3410;
        _DAT_14c9d3480 = &LAB_14682652b;
        DAT_14c9d3410 = &DAT_14c9d3468;
        DAT_14c9d3465 = DAT_14c9d3465 + '\x01';
        _DAT_14c9d3488 = 0x100000000;
        if (*(char *)(_DAT_14c9d3470 + 100) != '\0') {
          DAT_14c9d3466 = DAT_14c9d3466 + '\x01';
        }
        FUN_1407e00cc(&DAT_14c9d3400);
      }
      FUN_140db5666(&DAT_14c9d32c8,0,&DAT_14c9d3400,L"FGSComplexTransformCS",
                    L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,0xc,
                    FUN_142c41f32,FUN_142c41ed2,&LAB_142c41ebc,&LAB_142c41eb8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3378);
      _DAT_14c9d32c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c41fbc);
      _Init_thread_footer(&DAT_14c9d3370);
    }
  }
  return &DAT_14c9d32c8;
}



// FUNCTION 142c2ac68 FUN_142c2ac68 body=576 status=ok
// SIG undefined FUN_142c2ac68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c2ac68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3540) {
    FUN_144b3d300(&DAT_14c9d3540);
    if (DAT_14c9d3540 == -1) {
      FUN_142c42710();
      if ((DAT_14c9d3637 & 2) == 0) {
        DAT_14c9d3637 = DAT_14c9d3637 | 2;
        _DAT_14c9d35d8 = L"FGSTwoForOneTransformCS";
        _DAT_14c9d35f0 = FUN_146826540;
        _DAT_14c9d35f8 = FUN_146825d77;
        _DAT_14c9d3600 = FUN_146825fd6;
        _DAT_14c9d3608 = FUN_1407e02ea;
        _DAT_14c9d3610 = FUN_146826273;
        _DAT_14c9d35e8 = FUN_142c42da0;
        _DAT_14c9d3628 = 0xffffffff000000e0;
        _DAT_14c9d3630 = 8;
        DAT_14c9d3634 = 0;
        _DAT_14c9d3618 = &LAB_142c42dcc;
        _DAT_14c9d3638 = L"BASE";
        DAT_14c9d3662 = 4;
        _DAT_14c9d3640 = FUN_140b35ae4();
        _DAT_14c9d3648 = DAT_14c9d35e0;
        _DAT_14c9d3650 = &LAB_14682652b;
        DAT_14c9d35e0 = &DAT_14c9d3638;
        DAT_14c9d3635 = DAT_14c9d3635 + '\x01';
        _DAT_14c9d3658 = 0x100000000;
        if (*(char *)(_DAT_14c9d3640 + 100) != '\0') {
          DAT_14c9d3636 = DAT_14c9d3636 + '\x01';
        }
        FUN_1407e00cc(&DAT_14c9d35d0);
      }
      FUN_140db5666(&DAT_14c9d3498,0,&DAT_14c9d35d0,L"FGSTwoForOneTransformCS",
                    L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,
                    0xc,FUN_142c4267a,FUN_142c4261a,&LAB_142c42604,&LAB_142c42600,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3548);
      _DAT_14c9d3498 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c42704);
      _Init_thread_footer(&DAT_14c9d3540);
    }
  }
  return &DAT_14c9d3498;
}



// FUNCTION 142c2aea8 FUN_142c2aea8 body=576 status=ok
// SIG undefined FUN_142c2aea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c2aea8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3710) {
    FUN_144b3d300(&DAT_14c9d3710);
    if (DAT_14c9d3710 == -1) {
      FUN_142c42ee0();
      if ((DAT_14c9d3807 & 2) == 0) {
        DAT_14c9d3807 = DAT_14c9d3807 | 2;
        _DAT_14c9d37a8 = L"FGSConvolutionWithTextureCS";
        _DAT_14c9d37c0 = FUN_146826540;
        _DAT_14c9d37c8 = FUN_146825d77;
        _DAT_14c9d37d0 = FUN_146825fd6;
        _DAT_14c9d37d8 = FUN_1407e02ea;
        _DAT_14c9d37e0 = FUN_146826273;
        _DAT_14c9d37b8 = FUN_142c43460;
        _DAT_14c9d37f8 = 0xffffffff000000e0;
        _DAT_14c9d3800 = 8;
        DAT_14c9d3804 = 0;
        _DAT_14c9d37e8 = &LAB_142c4348c;
        _DAT_14c9d3808 = L"BASE";
        DAT_14c9d3832 = 4;
        _DAT_14c9d3810 = FUN_140b35ae4();
        _DAT_14c9d3818 = DAT_14c9d37b0;
        _DAT_14c9d3820 = &LAB_14682652b;
        DAT_14c9d37b0 = &DAT_14c9d3808;
        DAT_14c9d3805 = DAT_14c9d3805 + '\x01';
        _DAT_14c9d3828 = 0x100000000;
        if (*(char *)(_DAT_14c9d3810 + 100) != '\0') {
          DAT_14c9d3806 = DAT_14c9d3806 + '\x01';
        }
        FUN_1407e00cc(&DAT_14c9d37a0);
      }
      FUN_140db5666(&DAT_14c9d3668,0,&DAT_14c9d37a0,L"FGSConvolutionWithTextureCS",
                    L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,
                    0xc,FUN_142c42e4a,FUN_142c42dea,&LAB_142c42dd4,&LAB_142c42dd0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3718);
      _DAT_14c9d3668 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c42ed4);
      _Init_thread_footer(&DAT_14c9d3710);
    }
  }
  return &DAT_14c9d3668;
}



// FUNCTION 142c2b0e8 FUN_142c2b0e8 body=8017 status=ok
// SIG undefined FUN_142c2b0e8(void)

void FUN_142c2b0e8(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5,ulonglong param_6,longlong param_7)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ushort uVar21;
  undefined2 uVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 **local_190;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  ulonglong *local_180;
  undefined8 *local_178;
  uint *local_170;
  undefined2 local_164;
  undefined2 local_162;
  ulonglong local_160;
  ulonglong local_158;
  uint local_14c;
  longlong local_148;
  longlong local_140;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined1 local_e9;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar17 = *param_3;
  local_14c = param_3[1];
  uVar18 = param_3[2];
  uVar10 = local_14c;
  if ((uVar17 & 0xfffffffd) != 0) {
    uVar18 = local_14c;
    uVar10 = param_3[2];
  }
  local_170 = param_3;
  local_120 = param_2;
  if (local_14c < 0x1001) {
    bVar28 = (uVar17 & 0xfffffffd) == 0;
    piVar12 = (int *)(param_5 + 1);
    if (bVar28) {
      piVar12 = (int *)((longlong)param_5 + 0xc);
    }
    iVar23 = *piVar12 - *(int *)((longlong)param_5 + (ulonglong)bVar28 * 4);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar19 + 0xc;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(puVar1,0x70);
      puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar14 = puVar19 + 0xc;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    *puVar19 = &PTR_FUN_14a21c128;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[10] = 0;
    puVar19[0xb] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      local_178 = param_4;
      FUN_1448cfae8(param_1 + 0x98,iVar5);
      param_4 = local_178;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar19;
    puVar19[2] = *param_5;
    puVar19[3] = param_5[1];
    puVar19[4] = CONCAT44(uVar18,uVar10);
    puVar19[6] = 0;
    puVar19[7] = CONCAT44(uVar18,uVar10);
    puVar19[8] = 0xff7fffff7f7fffff;
    *(undefined4 *)(puVar19 + 9) = 0;
    bVar28 = (*local_170 & 0xfffffffd) == 0;
    uVar17 = bVar28 + 2;
    if (1 < *local_170) {
      uVar17 = (uint)bVar28;
    }
    *(uint *)((longlong)puVar19 + 0x4c) = uVar17;
    puVar19[10] = param_4;
    uVar3 = *(undefined1 *)(param_6 + 0x94);
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar25 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(puVar1,0x50);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar25 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar25[1] = *(undefined8 *)(param_6 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar25 + 6) = uVar3;
    *(undefined1 *)(puVar25 + 7) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
    puVar25[8] = param_6;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar19[0xb] = puVar25;
    puVar19 = puVar19 + 2;
    if (local_14c == 2) {
      uVar11 = 0xb;
    }
    else if (local_14c == 4) {
      uVar11 = 10;
    }
    else if (local_14c == 8) {
      uVar11 = 9;
    }
    else {
      uVar11 = FUN_14716e2a4();
    }
    FUN_142c2aa28();
    FUN_1448e935e(local_120,&local_e8,&DAT_14c9d32c8,uVar11);
    FUN_142c2aa28();
    puVar14 = local_e8;
    local_158 = (ulonglong)uStack_e0;
    uVar21 = (ushort)local_170[3];
    FUN_142c41fc8();
    local_e8 = (undefined8 *)0x0;
    uStack_e0 = (undefined8 *)0x0;
    FUN_1448f70da(puVar14,&DAT_14c9d3378,puVar19,&local_e8);
    FUN_140069376(param_1);
    if ((uVar21 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar21 & 2) != 0)))))) {
        uVar21 = uVar21 & 0xfff9 | 4;
      }
      puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar26 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(puVar1,0x1f0);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar26 + 0x3d;
      }
      *puVar1 = (ulonglong)puVar25;
      uStack_e0 = DAT_14c9d33c0;
      if (DAT_14c9d33c0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d33c0 + 1) = *(int *)(DAT_14c9d33c0 + 1) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d3378;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar19;
      FUN_140068f1a(puVar26,&local_e9,&local_e8,uVar21);
      *puVar26 = &PTR_FUN_14a21c150;
      puVar26[0x37] = &DAT_14c9d3378;
      puVar26[0x38] = puVar19;
      puVar26[0x39] = puVar14;
      puVar26[0x3a] = local_158;
      puVar26[0x3b] = &DAT_100000001;
      *(int *)(puVar26 + 0x3c) = iVar23;
    }
    else {
      if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
         ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
        uVar21 = uVar21 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar21 & 2) != 0) {
        uVar21 = uVar21 & 0xfffd;
      }
      puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar26 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(puVar1,0x1f8);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar26 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar25;
      uVar11 = *(undefined4 *)(param_1 + 0x660);
      uStack_e0 = DAT_14c9d33c0;
      if (DAT_14c9d33c0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d33c0 + 1) = *(int *)(DAT_14c9d33c0 + 1) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d3378;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar19;
      FUN_140068f1a(puVar26,&local_e9,&local_e8,uVar21);
      puVar26[0x37] = &DAT_14c9d3378;
      puVar26[0x38] = puVar19;
      puVar26[0x39] = puVar14;
      puVar26[0x3a] = local_158;
      puVar26[0x3b] = &DAT_100000001;
      *(int *)(puVar26 + 0x3c) = iVar23;
      *puVar26 = &PTR_FUN_14a21c130;
      *(undefined4 *)(puVar26 + 0x3d) = uVar11;
    }
    iVar23 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar26);
  }
  else {
    local_158 = CONCAT44(local_158._4_4_,uVar10);
    uVar15 = param_6;
    if (1 < uVar17) {
      uVar15 = param_4[7];
    }
    local_181 = *(undefined1 *)(uVar15 + 0x92);
    local_f8 = *(undefined8 **)(uVar15 + 0x60);
    local_182 = *(undefined1 *)(uVar15 + 0x93);
    local_183 = *(undefined1 *)(uVar15 + 0x94);
    local_100 = *(ulonglong *)(uVar15 + 0x84);
    local_162 = *(undefined2 *)(uVar15 + 0x8c);
    local_164 = *(undefined2 *)(uVar15 + 0x8e);
    local_184 = *(undefined1 *)(uVar15 + 0x90);
    local_185 = *(undefined1 *)(uVar15 + 0x91);
    local_12c = *(undefined4 *)(uVar15 + 0x68);
    uVar11 = *(undefined4 *)(uVar15 + 0x6c);
    uStack_e0 = *(undefined8 **)(uVar15 + 0x68);
    puVar14 = (undefined8 *)(uVar15 + 0x70);
    puVar9 = (undefined *)*puVar14;
    uVar8 = *puVar14;
    local_d8 = (undefined *)*puVar14;
    uVar2 = *(undefined4 *)(uVar15 + 0x78);
    local_130 = *(undefined4 *)(uVar15 + 0x80);
    local_186 = *(undefined1 *)(uVar15 + 0x95);
    local_134 = *(undefined4 *)(uVar15 + 0x7c);
    local_c4 = DAT_14ca84e40;
    if ((int)local_100 < DAT_14ca84e40) {
      local_c4 = (int)local_100;
    }
    if (local_c4 < 2) {
      local_c4 = 1;
    }
    local_108 = local_100 >> 0x20;
    iVar23 = (int)(local_100 >> 0x20);
    local_c0 = DAT_14ca84e40;
    if (iVar23 < DAT_14ca84e40) {
      local_c0 = iVar23;
    }
    if (local_c0 < 2) {
      local_c0 = 1;
    }
    puVar1 = (ulonglong *)(param_1 + 0x70);
    uVar20 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar15 = uVar20 + 0x120;
    local_180 = puVar1;
    local_178 = param_4;
    local_160 = (ulonglong)uVar18;
    local_e8 = local_f8;
    local_d0 = uVar2;
    local_cc = local_134;
    local_c8 = local_130;
    local_bc = local_162;
    local_ba = local_164;
    local_b8 = local_184;
    local_b7 = local_185;
    local_b6 = local_181;
    local_b5 = local_182;
    local_b4 = local_183;
    local_b3 = local_186;
    if (*(ulonglong *)(param_1 + 0x78) < uVar15) {
      FUN_140023dd8(puVar1,0x128);
      uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar15 = uVar20 + 0x120;
    }
    local_118 = param_1 + 0x178;
    *(ulonglong *)(param_1 + 0x70) = uVar15;
    FUN_1456bbb8c(uVar20,L"FFT.Spectral",&local_e8,0);
    uVar15 = local_160;
    iVar23 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar23 + 1U) {
      FUN_14472c0f6(local_118,iVar23);
    }
    puVar19 = local_178;
    puVar1 = local_180;
    local_128 = uVar15 << 0x20;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar23 * 8) = uVar20;
    *(int *)(uVar20 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    uVar17 = local_170[1];
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar25 + 10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_180,0x60);
      puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar14 = puVar25 + 10;
    }
    local_128 = local_128 + (ulonglong)uVar10;
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    *puVar25 = &PTR_FUN_14a21c168;
    local_110 = param_1 + 0x98;
    puVar25[2] = 0;
    puVar25[3] = 0;
    puVar25[4] = 0;
    puVar25[5] = 0;
    puVar25[8] = 0;
    puVar25[9] = 0;
    iVar23 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
      FUN_1448cfae8(local_110,iVar23);
    }
    puVar1 = local_180;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar23 * 8) = puVar25;
    puVar25[2] = *param_5;
    puVar25[3] = param_5[1];
    puVar25[4] = 0;
    puVar25[5] = local_128;
    bVar28 = (*local_170 & 0xfffffffd) == 0;
    uVar18 = bVar28 + 2;
    if (1 < *local_170) {
      uVar18 = (uint)bVar28;
    }
    *(uint *)(puVar25 + 6) = uVar18;
    uVar24 = local_170[1] >> 1;
    uVar10 = 0x20;
    uVar18 = 0x20;
    if (uVar24 != 0) {
      uVar18 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> uVar18 == 0; uVar18 = uVar18 - 1) {
        }
      }
      uVar18 = uVar18 ^ 0x1f;
    }
    *(uint *)((longlong)puVar25 + 0x34) = -(uint)(local_170[1] == 0) | 0x20 - uVar18;
    if (uVar17 >> 0xc != 0) {
      uVar10 = 0x1f;
      if (uVar17 >> 0xc != 0) {
        for (; (uVar17 >> 0xc) >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
      uVar10 = uVar10 ^ 0x1f;
    }
    iVar23 = -1;
    if (0x7ff < uVar17) {
      iVar23 = 0x20 - uVar10;
    }
    *(int *)(puVar25 + 7) = iVar23;
    puVar25[8] = puVar19;
    uVar3 = *(undefined1 *)(uVar20 + 0x94);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar19 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_180,0x50);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar19 + 9;
    }
    puVar26 = puVar25 + 2;
    local_148 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar19[1] = *(undefined8 *)(uVar20 + 8);
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0;
    *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar19 + 5) = 0;
    *puVar19 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar19 + 6) = uVar3;
    *(undefined1 *)(puVar19 + 7) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
    puVar19[8] = uVar20;
    iVar23 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(local_148,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar25[9] = puVar19;
    FUN_142c29ca8();
    FUN_1448e935e(local_120,&local_e8,&DAT_14c9d27e8,0);
    FUN_142c29ca8();
    puVar14 = local_e8;
    local_140 = (longlong)uStack_e0;
    uVar21 = (ushort)local_170[3];
    FUN_142c3fac4();
    local_e8 = (undefined8 *)0x0;
    uStack_e0 = (undefined8 *)0x0;
    local_178 = puVar14;
    FUN_1448f70da(puVar14,&DAT_14c9d2898,puVar26,&local_e8);
    FUN_140069376(param_1);
    puVar1 = local_180;
    if ((uVar21 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar21 & 2) != 0)))))) {
        uVar21 = uVar21 & 0xfff9 | 4;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x1f0);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 0x3d;
      }
      *local_180 = (ulonglong)puVar14;
      uStack_e0 = (undefined8 *)DAT_14c9d28e0;
      if (DAT_14c9d28e0 != 0) {
        LOCK();
        *(int *)(DAT_14c9d28e0 + 8) = *(int *)(DAT_14c9d28e0 + 8) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d2898;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar26;
      FUN_140068f1a(puVar19,&local_e9,&local_e8,uVar21);
      *puVar19 = &PTR_FUN_14a21c190;
      puVar19[0x37] = &DAT_14c9d2898;
      puVar19[0x38] = puVar26;
      puVar19[0x39] = local_178;
      puVar19[0x3a] = local_140;
      puVar19[0x3b] = &DAT_100000001;
      *(uint *)(puVar19 + 0x3c) = uVar17 >> 1;
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar21 = uVar21 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar21 & 2) != 0) {
        uVar21 = uVar21 & 0xfffd;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x1f8);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      uVar7 = *(undefined4 *)(param_1 + 0x660);
      uStack_e0 = (undefined8 *)DAT_14c9d28e0;
      if (DAT_14c9d28e0 != 0) {
        LOCK();
        *(int *)(DAT_14c9d28e0 + 8) = *(int *)(DAT_14c9d28e0 + 8) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d2898;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar26;
      FUN_140068f1a(puVar19,&local_e9,&local_e8,uVar21);
      puVar19[0x37] = &DAT_14c9d2898;
      puVar19[0x38] = puVar26;
      puVar19[0x39] = local_178;
      puVar19[0x3a] = local_140;
      puVar19[0x3b] = &DAT_100000001;
      *(uint *)(puVar19 + 0x3c) = uVar17 >> 1;
      *puVar19 = &PTR_FUN_14a21c170;
      *(undefined4 *)(puVar19 + 0x3d) = uVar7;
    }
    uVar7 = (uint)local_158;
    local_140 = param_1 + 0x168;
    iVar23 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
      FUN_14470e57a(local_140,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar19);
    puVar1 = local_180;
    local_b6 = local_181;
    local_e8 = local_f8;
    local_b5 = local_182;
    local_b4 = local_183;
    local_bc = local_162;
    local_ba = local_164;
    local_b8 = local_184;
    local_b7 = local_185;
    uStack_e0 = (undefined8 *)CONCAT44(uVar11,local_12c);
    local_c8 = local_130;
    local_c4 = DAT_14ca84e40;
    if ((int)local_100 < DAT_14ca84e40) {
      local_c4 = (int)local_100;
    }
    if (local_c4 < 2) {
      local_c4 = 1;
    }
    local_b3 = local_186;
    local_c0 = DAT_14ca84e40;
    if ((int)local_108 < DAT_14ca84e40) {
      local_c0 = (int)local_108;
    }
    local_cc = local_134;
    if (local_c0 < 2) {
      local_c0 = 1;
    }
    uVar27 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar15 = uVar27 + 0x120;
    local_d8 = (undefined *)uVar8;
    local_d0 = uVar2;
    if (*(ulonglong *)(param_1 + 0x78) < uVar15) {
      FUN_140023dd8(local_180,0x128);
      uVar27 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar15 = uVar27 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar15;
    FUN_1456bbb8c(uVar27,L"FFT.Spectral",&local_e8,0);
    iVar23 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar23 + 1U) {
      FUN_14472c0f6(local_118,iVar23);
    }
    puVar1 = local_180;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar23 * 8) = uVar27;
    *(int *)(uVar27 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    if ((*(char *)(uVar20 + 0x92) == '\x04') || (*(char *)(uVar20 + 0x92) == '\x01')) {
      uVar22 = *(undefined2 *)(uVar20 + 0x8e);
    }
    else {
      uVar22 = 0;
    }
    uVar3 = *(undefined1 *)(uVar20 + 0x90);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar19 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_180,0x48);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar19 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar19[1] = *(undefined8 *)(uVar20 + 8);
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 1;
    *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
    *puVar19 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar19 + 5) = 0;
    *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar22;
    *(undefined1 *)(puVar19 + 6) = 0;
    *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
    puVar19[7] = uVar20;
    iVar23 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(local_148,iVar23);
    }
    puVar1 = local_180;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    uVar17 = local_170[1];
    if ((*local_170 & 0xfffffffd) == 0) {
      uVar7 = (undefined4)local_160;
    }
    puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar25 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_180,0x50);
      puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar14 = puVar25 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    *puVar25 = &PTR_FUN_14a21c1a8;
    puVar25[2] = 0;
    puVar25[3] = 0;
    puVar25[6] = 0;
    puVar25[7] = 0;
    iVar23 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
      FUN_1448cfae8(local_110,iVar23);
    }
    puVar1 = local_180;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar23 * 8) = puVar25;
    puVar25[2] = 0;
    puVar25[3] = local_128;
    bVar28 = (*local_170 & 0xfffffffd) == 0;
    uVar18 = bVar28 + 2;
    if (1 < *local_170) {
      uVar18 = (uint)bVar28;
    }
    *(uint *)(puVar25 + 4) = uVar18;
    *(uint *)((longlong)puVar25 + 0x24) = uVar17;
    *(uint *)(puVar25 + 5) = uVar17 >> 0xb;
    puVar25[6] = puVar19;
    uVar3 = *(undefined1 *)(uVar27 + 0x94);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar19 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8(local_180,0x50);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar19 + 9;
    }
    puVar26 = puVar25 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar19[1] = *(undefined8 *)(uVar27 + 8);
    puVar19[2] = 0;
    *(undefined1 *)(puVar19 + 3) = 0;
    *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar19 + 5) = 0;
    *puVar19 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar19 + 6) = uVar3;
    *(undefined1 *)(puVar19 + 7) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
    puVar19[8] = uVar27;
    iVar23 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(local_148,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar25[7] = puVar19;
    FUN_142c29ee8();
    FUN_1448e935e(local_120,&local_e8,&DAT_14c9d29b8,0);
    FUN_142c29ee8();
    uVar15 = (ulonglong)uStack_e0;
    puVar14 = local_e8;
    uVar21 = (ushort)local_170[3];
    FUN_142c40190();
    local_e8 = (undefined8 *)0x0;
    uStack_e0 = (undefined8 *)0x0;
    FUN_1448f70da(puVar14,&DAT_14c9d2a68,puVar26,&local_e8);
    FUN_140069376(param_1);
    puVar1 = local_180;
    if ((uVar21 & 4) == 0) {
      local_158 = CONCAT44(local_158._4_4_,uVar7);
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar21 & 2) != 0)))))) {
        uVar21 = uVar21 & 0xfff9 | 4;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar19 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar25) {
        FUN_140023dd8(local_180,0x1f0);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar25 = puVar19 + 0x3d;
      }
      *local_180 = (ulonglong)puVar25;
      uStack_e0 = DAT_14c9d2ab0;
      if (DAT_14c9d2ab0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d2ab0 + 1) = *(int *)(DAT_14c9d2ab0 + 1) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d2a68;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar26;
      FUN_140068f1a(puVar19,&local_e9,&local_e8,uVar21);
      *puVar19 = &PTR_FUN_14a21c1d0;
      puVar19[0x37] = &DAT_14c9d2a68;
      puVar19[0x38] = puVar26;
      puVar19[0x39] = puVar14;
      puVar19[0x3a] = uVar15;
      puVar19[0x3b] = &DAT_100000001;
      *(uint *)(puVar19 + 0x3c) = (uint)local_158;
    }
    else {
      local_160 = uVar15;
      local_178 = puVar14;
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar21 = uVar21 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar21 & 2) != 0) {
        uVar21 = uVar21 & 0xfffd;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x1f8);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      uVar6 = *(undefined4 *)(param_1 + 0x660);
      uStack_e0 = DAT_14c9d2ab0;
      if (DAT_14c9d2ab0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d2ab0 + 1) = *(int *)(DAT_14c9d2ab0 + 1) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14c9d2a68;
      local_198 = CONCAT31(local_198._1_3_,2);
      local_e8 = puVar26;
      FUN_140068f1a(puVar19,&local_e9,&local_e8,uVar21);
      puVar19[0x37] = &DAT_14c9d2a68;
      puVar19[0x38] = puVar26;
      puVar19[0x39] = local_178;
      puVar19[0x3a] = local_160;
      puVar19[0x3b] = &DAT_100000001;
      *(undefined4 *)(puVar19 + 0x3c) = uVar7;
      *puVar19 = &PTR_FUN_14a21c1b0;
      *(undefined4 *)(puVar19 + 0x3d) = uVar6;
    }
    iVar23 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar23 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
      FUN_14470e57a(local_140,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar19;
    *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar19);
    uVar15 = 0x800;
    do {
      puVar1 = local_180;
      uVar17 = (int)uVar15 * 2;
      lVar13 = param_7;
      uVar20 = param_6;
      local_160 = uVar15;
      if (uVar17 < local_14c) {
        local_b6 = local_181;
        local_e8 = local_f8;
        local_b5 = local_182;
        local_b4 = local_183;
        local_bc = local_162;
        local_ba = local_164;
        local_b8 = local_184;
        local_b7 = local_185;
        uStack_e0 = (undefined8 *)CONCAT44(uVar11,local_12c);
        local_c4 = DAT_14ca84e40;
        if ((int)local_100 < DAT_14ca84e40) {
          local_c4 = (int)local_100;
        }
        local_c8 = local_130;
        if (local_c4 < 2) {
          local_c4 = 1;
        }
        local_b3 = local_186;
        local_c0 = DAT_14ca84e40;
        if ((int)local_108 < DAT_14ca84e40) {
          local_c0 = (int)local_108;
        }
        local_cc = local_134;
        if (local_c0 < 2) {
          local_c0 = 1;
        }
        uVar20 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar15 = uVar20 + 0x120;
        local_d8 = puVar9;
        local_d0 = uVar2;
        if (*(ulonglong *)(param_1 + 0x78) < uVar15) {
          FUN_140023dd8(local_180,0x128);
          uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar15 = uVar20 + 0x120;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar15;
        FUN_1456bbb8c(uVar20,L"FFT.Spectral",&local_e8,0);
        iVar23 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar23 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar23 + 1U) {
          FUN_14472c0f6(local_118,iVar23);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar23 * 8) = uVar20;
        *(int *)(uVar20 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
        lVar13 = 0;
      }
      puVar1 = local_180;
      uVar3 = *(undefined1 *)(uVar27 + 0x90);
      local_158 = CONCAT44(local_158._4_4_,uVar17);
      if ((*(char *)(uVar27 + 0x92) == '\x04') || (*(char *)(uVar27 + 0x92) == '\x01')) {
        uVar22 = *(undefined2 *)(uVar27 + 0x8e);
      }
      else {
        uVar22 = 0;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x48);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar19[1] = *(undefined8 *)(uVar27 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar19 + 5) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar3;
      *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar22;
      *(undefined1 *)(puVar19 + 6) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
      puVar19[7] = uVar27;
      iVar23 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
        FUN_1447568fc(local_148,iVar23);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar17 = local_170[1];
      bVar28 = (*local_170 & 0xfffffffd) == 0;
      uVar18 = bVar28 + 2;
      if (1 < *local_170) {
        uVar18 = (uint)bVar28;
      }
      if (lVar13 == 0) {
        local_e8 = (undefined8 *)&DAT_3f8000003f800000;
        uStack_e0 = (undefined8 *)&DAT_3f8000003f800000;
        local_190 = &local_e8;
        local_198 = 1;
        lVar13 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
      }
      puVar1 = local_180;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar25 + 0xc;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x70);
        puVar25 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar25 + 0xc;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar25 = &PTR_FUN_14a21c1e8;
      puVar25[2] = 0;
      puVar25[3] = 0;
      puVar25[4] = 0;
      puVar25[5] = 0;
      puVar25[8] = 0;
      puVar25[9] = 0;
      puVar25[10] = 0;
      iVar23 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
        FUN_1448cfae8(local_110,iVar23);
      }
      puVar1 = local_180;
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar23 * 8) = puVar25;
      puVar25[2] = 0;
      puVar25[3] = local_128;
      uVar10 = local_170[1];
      uVar24 = local_170[2];
      if ((*local_170 & 0xfffffffd) == 0) {
        uVar10 = local_170[2];
        uVar24 = local_170[1];
      }
      puVar25[4] = 0;
      puVar25[5] = CONCAT44(uVar10,uVar24);
      *(uint *)(puVar25 + 6) = uVar18;
      *(int *)((longlong)puVar25 + 0x34) = (int)local_160;
      uVar18 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> uVar18 == 0; uVar18 = uVar18 - 1) {
        }
      }
      iVar23 = (uVar18 ^ 0xffffffe0) + 0x21;
      if (uVar17 == 0) {
        iVar23 = 0;
      }
      *(int *)(puVar25 + 7) = iVar23;
      puVar25[8] = puVar19;
      cVar4 = *(char *)(lVar13 + 0x68);
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x50);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar19[1] = *(undefined8 *)(lVar13 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 3;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar19 + 5) = cVar4 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar19 + 0x2c) = 0xffffffff00000000;
      puVar19[7] = 0;
      puVar19[8] = lVar13;
      iVar23 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
        FUN_1447568fc(local_148,iVar23);
      }
      puVar1 = local_180;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[9] = puVar19;
      uVar3 = *(undefined1 *)(uVar20 + 0x94);
      puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar19 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_180,0x50);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar19 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar19[1] = *(undefined8 *)(uVar20 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 0;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar19 + 5) = 0;
      *puVar19 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar19 + 6) = uVar3;
      *(undefined1 *)(puVar19 + 7) = 0;
      *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
      puVar19[8] = uVar20;
      iVar23 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar23 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar23 + 1U) {
        FUN_1447568fc(local_148,iVar23);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar23 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[10] = puVar19;
      puVar25 = puVar25 + 2;
      FUN_142c2a128();
      FUN_1448e935e(local_120,&local_e8,&DAT_14c9d2b88,0);
      FUN_142c2a128();
      puVar14 = local_e8;
      local_178 = uStack_e0;
      uVar18 = local_170[3];
      FUN_142c407d4();
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = (undefined8 *)0x0;
      FUN_1448f70da(puVar14,&DAT_14c9d2c38,puVar25,&local_e8);
      FUN_140069376(param_1);
      puVar1 = local_180;
      local_160 = CONCAT44(local_160._4_4_,uVar17 >> 1);
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        if ((uVar18 & 4) == 0) {
          puVar19 = *(undefined8 **)(param_1 + 0x78);
          puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          goto LAB_142c2c7bd;
        }
        puVar19 = *(undefined8 **)(param_1 + 0x78);
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
LAB_142c2c9b9:
        puVar16 = puVar26 + 0x3e;
        if (puVar19 < puVar16) {
          FUN_140023dd8(local_180,0x1f8);
          puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar26 + 0x3e;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar16;
        uVar7 = *(undefined4 *)(param_1 + 0x660);
        uStack_e0 = DAT_14c9d2c80;
        if (DAT_14c9d2c80 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(DAT_14c9d2c80 + 1) = *(int *)(DAT_14c9d2c80 + 1) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14c9d2c38;
        local_198 = CONCAT31(local_198._1_3_,2);
        local_e8 = puVar25;
        FUN_140068f1a(puVar26,&local_e9,&local_e8);
        puVar26[0x37] = &DAT_14c9d2c38;
        puVar26[0x38] = puVar25;
        puVar26[0x39] = puVar14;
        puVar26[0x3a] = local_178;
        puVar26[0x3b] = &DAT_100000001;
        *(undefined4 *)(puVar26 + 0x3c) = (undefined4)local_160;
        *puVar26 = &PTR_FUN_14a21c1f0;
        *(undefined4 *)(puVar26 + 0x3d) = uVar7;
      }
      else {
        puVar19 = *(undefined8 **)(param_1 + 0x78);
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        if ((uVar18 & 4) != 0) goto LAB_142c2c9b9;
LAB_142c2c7bd:
        puVar16 = puVar26 + 0x3d;
        if (puVar19 < puVar16) {
          FUN_140023dd8(local_180,0x1f0);
          puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar26 + 0x3d;
        }
        *local_180 = (ulonglong)puVar16;
        uStack_e0 = DAT_14c9d2c80;
        if (DAT_14c9d2c80 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(DAT_14c9d2c80 + 1) = *(int *)(DAT_14c9d2c80 + 1) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14c9d2c38;
        local_198 = CONCAT31(local_198._1_3_,2);
        local_e8 = puVar25;
        FUN_140068f1a(puVar26,&local_e9,&local_e8);
        *puVar26 = &PTR_FUN_14a21c210;
        puVar26[0x37] = &DAT_14c9d2c38;
        puVar26[0x38] = puVar25;
        puVar26[0x39] = puVar14;
        puVar26[0x3a] = local_178;
        puVar26[0x3b] = &DAT_100000001;
        *(undefined4 *)(puVar26 + 0x3c) = (undefined4)local_160;
      }
      iVar23 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar23 + 1U;
      uVar17 = (uint)local_158;
      uVar15 = local_158 & 0xffffffff;
      if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
        FUN_14470e57a(local_140,iVar23);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar26);
      uVar27 = uVar20;
    } while (uVar17 < local_14c);
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c2d03a FUN_142c2d03a body=4620 status=ok
// SIG undefined FUN_142c2d03a(void)

void FUN_142c2d03a(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  int *param_5,longlong param_6,int *param_7,float *param_8,longlong param_9)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  uint uVar15;
  int *piVar16;
  undefined2 uVar17;
  int iVar18;
  ushort uVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 **local_e0;
  longlong local_d8;
  ulonglong *local_c8;
  ulonglong *local_c0;
  uint *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = param_3[1];
  local_b0 = param_2;
  if (uVar3 < 0x1001) {
    bVar25 = (*param_3 & 0xfffffffd) == 0;
    piVar16 = param_5 + 2;
    if (bVar25) {
      piVar16 = param_5 + 3;
    }
    local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,*piVar16 - param_5[bVar25]);
    if (param_9 == 0) {
      local_e0 = &local_88;
      local_88 = (undefined8 *)&DAT_3f8000003f800000;
      uStack_80 = &DAT_3f8000003f800000;
      local_e8 = (int *)CONCAT44(local_e8._4_4_,1);
      param_9 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
    }
    puVar20 = (ulonglong *)(param_1 + 0x70);
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar22 + 0xe;
    local_b8 = param_3;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(puVar20,0x80);
      puVar22 = (undefined8 *)(*puVar20 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar22 + 0xe;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    *puVar22 = &PTR_FUN_14a21c228;
    puVar22[6] = 0;
    puVar22[7] = 0;
    puVar22[10] = 0;
    puVar22[0xb] = 0;
    puVar22[0xc] = 0;
    iVar9 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
    local_c8 = puVar20;
    if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar9);
    }
    puVar7 = local_b8;
    puVar20 = local_c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar22;
    puVar22[2] = *(undefined8 *)param_5;
    puVar22[3] = *(undefined8 *)(param_5 + 2);
    puVar22[4] = CONCAT44(param_7[3] - param_7[1],param_7[2] - *param_7);
    puVar22[6] = *(undefined8 *)param_7;
    puVar22[7] = *(undefined8 *)(param_7 + 2);
    *(float *)(puVar22 + 9) = param_8[2];
    puVar22[8] = *(undefined8 *)param_8;
    bVar25 = (*local_b8 & 0xfffffffd) == 0;
    uVar15 = bVar25 + 2;
    if (1 < *local_b8) {
      uVar15 = (uint)bVar25;
    }
    *(uint *)((longlong)puVar22 + 0x4c) = uVar15;
    if (*(float *)(puVar22 + 8) <= *(float *)((longlong)puVar22 + 0x44) &&
        *(float *)((longlong)puVar22 + 0x44) != *(float *)(puVar22 + 8)) {
      *(uint *)((longlong)puVar22 + 0x4c) = uVar15 | 4;
    }
    puVar22[10] = param_4;
    cVar1 = *(char *)(param_9 + 0x68);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(local_c8,0x50);
      puVar24 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar24 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    puVar24[1] = *(undefined8 *)(param_9 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 3;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *puVar24 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar24 + 5) = cVar1 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
    puVar24[7] = 0;
    puVar24[8] = param_9;
    iVar9 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar9);
    }
    puVar20 = local_c8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar22[0xb] = puVar24;
    uVar2 = *(undefined1 *)(param_6 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(local_c8,0x50);
      puVar24 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar24 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    puVar24[1] = *(undefined8 *)(param_6 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar2;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = param_6;
    iVar9 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar9);
    }
    uVar6 = local_b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar22[0xc] = puVar24;
    puVar22 = puVar22 + 2;
    if (uVar3 == 2) {
      uVar10 = 0xb;
    }
    else if (uVar3 == 4) {
      uVar10 = 10;
    }
    else if (uVar3 == 8) {
      uVar10 = 9;
    }
    else {
      uVar10 = FUN_14716e2a4(uVar3);
    }
    FUN_142c2ac68();
    FUN_1448e935e(uVar6,&local_88,&DAT_14c9d3498,uVar10);
    FUN_142c2ac68();
    puVar8 = uStack_80;
    puVar13 = local_88;
    uVar19 = (ushort)puVar7[3];
    FUN_142c42710();
    local_88 = (undefined8 *)0x0;
    uStack_80 = (undefined1 *)0x0;
    FUN_1448f70da(puVar13,&DAT_14c9d3548,puVar22,&local_88);
    FUN_140069376(param_1);
    puVar20 = local_c8;
    if ((uVar19 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar19 & 2) != 0)))))) {
        uVar19 = uVar19 & 0xfff9 | 4;
      }
      puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar21 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
        FUN_140023dd8(local_c8,0x1f0);
        puVar21 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar24 = puVar21 + 0x3d;
      }
      *puVar20 = (ulonglong)puVar24;
      uStack_80 = DAT_14c9d3590;
      if (DAT_14c9d3590 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d3590 + 8) = *(int *)(DAT_14c9d3590 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14c9d3548;
      local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
      local_88 = puVar22;
      FUN_140068f1a(puVar21,&local_89,&local_88,uVar19);
      *puVar21 = &PTR_FUN_14a21c250;
      puVar21[0x37] = &DAT_14c9d3548;
      puVar21[0x38] = puVar22;
      puVar21[0x39] = puVar13;
      puVar21[0x3a] = puVar8;
      puVar21[0x3b] = &DAT_100000001;
      *(undefined4 *)(puVar21 + 0x3c) = local_c0._0_4_;
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar19 = uVar19 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar19 & 2) != 0) {
        uVar19 = uVar19 & 0xfffd;
      }
      puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar21 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
        FUN_140023dd8(local_c8,0x1f8);
        puVar21 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar24 = puVar21 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar24;
      uVar10 = *(undefined4 *)(param_1 + 0x660);
      uStack_80 = DAT_14c9d3590;
      if (DAT_14c9d3590 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d3590 + 8) = *(int *)(DAT_14c9d3590 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14c9d3548;
      local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
      local_88 = puVar22;
      FUN_140068f1a(puVar21,&local_89,&local_88,uVar19);
      puVar21[0x37] = &DAT_14c9d3548;
      puVar21[0x38] = puVar22;
      puVar21[0x39] = puVar13;
      puVar21[0x3a] = puVar8;
      puVar21[0x3b] = &DAT_100000001;
      *(undefined4 *)(puVar21 + 0x3c) = local_c0._0_4_;
      *puVar21 = &PTR_FUN_14a21c230;
      *(undefined4 *)(puVar21 + 0x3d) = uVar10;
    }
    iVar9 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar9 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar9 * 8) = puVar21;
    *(int *)((longlong)puVar21 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar21);
    goto LAB_142c2e003;
  }
  if (1 < *param_3) {
    uVar17 = 0;
    lVar12 = FUN_14472bf7a(param_1,param_4[7] + 0x60,L"FFT.Spectral",0);
    local_e8 = (int *)lVar12;
    local_b8 = param_3;
    FUN_142c2e24c(param_1,param_2,param_3,param_4);
    if ((*(char *)(lVar12 + 0x92) == '\x04') || (*(char *)(lVar12 + 0x92) == '\x01')) {
      uVar17 = *(undefined2 *)(lVar12 + 0x8e);
    }
    uVar2 = *(undefined1 *)(lVar12 + 0x90);
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar22 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar22 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    puVar22[1] = *(undefined8 *)(lVar12 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 1;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar22 + 5) = 0;
    *(undefined1 *)((longlong)puVar22 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar22 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x2e) = uVar17;
    *(undefined1 *)(puVar22 + 6) = 0;
    *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
    puVar22[7] = lVar12;
    iVar9 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_d8 = param_9;
    local_e8 = param_5;
    local_e0 = (undefined8 **)param_6;
    FUN_142c2b0e8(param_1,local_b0,local_b8,puVar22);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if (*param_8 <= param_8[1] && param_8[1] != *param_8) {
    local_70 = DAT_14ca85098;
    uStack_80 = (undefined1 *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    local_78 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_55 = *(undefined1 *)(param_4[7] + 0x93);
    uVar6 = *(undefined8 *)(param_4[7] + 0x84);
    local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_56 = 0;
    local_88 = (undefined8 *)&DAT_00020008;
    local_54 = 0xff00;
    local_5c = 0x10001;
    local_58 = 0x101;
    local_68 = 0;
    iVar9 = (int)uVar6;
    local_64 = DAT_14ca84e40;
    if (iVar9 < DAT_14ca84e40) {
      local_64 = iVar9;
    }
    if (local_64 < 2) {
      local_64 = 1;
    }
    iVar9 = (int)((ulonglong)uVar6 >> 0x20);
    local_60 = DAT_14ca84e40;
    if (iVar9 < DAT_14ca84e40) {
      local_60 = iVar9;
    }
    if (local_60 < 2) {
      local_60 = 1;
    }
    puVar20 = (ulonglong *)(param_1 + 0x70);
    uVar23 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_1 + 0x78) < uVar11) {
      FUN_140023dd8(puVar20,0x128);
      uVar23 = *puVar20 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"FFT.PreFilter",&local_88,0);
    iVar9 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar9);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar9 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,(uint)(ushort)param_3[3]);
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar22 + 10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(puVar20,0x60);
      puVar22 = (undefined8 *)(*puVar20 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar22 + 10;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    *puVar22 = &PTR_FUN_14a21c0e8;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22[4] = 0;
    puVar22[5] = 0;
    puVar22[8] = 0;
    puVar22[9] = 0;
    iVar9 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
    local_c0 = puVar20;
    if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar9);
    }
    puVar20 = local_c0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar22;
    puVar22[2] = *(undefined8 *)param_5;
    puVar22[3] = *(undefined8 *)(param_5 + 2);
    puVar22[4] = *(undefined8 *)param_5;
    puVar22[5] = *(undefined8 *)(param_5 + 2);
    puVar22[6] = *(undefined8 *)param_8;
    *(float *)(puVar22 + 7) = param_8[2];
    puVar22[8] = param_4;
    uVar2 = *(undefined1 *)(uVar23 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(local_c0,0x50);
      puVar24 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar24 + 9;
    }
    puVar21 = puVar22 + 2;
    local_a8 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    puVar24[1] = *(undefined8 *)(uVar23 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar2;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = uVar23;
    iVar9 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_a8,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar22[9] = puVar24;
    FUN_142c2a5a8();
    FUN_1448e935e(local_b0,&local_88,&DAT_14c9d2f28,0);
    FUN_142c2a5a8();
    local_a0 = local_88;
    local_98 = uStack_80;
    iVar4 = param_5[2];
    iVar5 = *param_5;
    iVar9 = (param_5[3] - param_5[1]) + 0x1f;
    iVar18 = (param_5[3] - param_5[1]) + 0x3e;
    if (-1 < iVar9) {
      iVar18 = iVar9;
    }
    FUN_142c4145c();
    local_88 = (undefined8 *)0x0;
    uStack_80 = (undefined1 *)0x0;
    FUN_1448f70da(local_a0,&DAT_14c9d2fd8,puVar21,&local_88);
    FUN_140069376(param_1);
    puVar20 = local_c0;
    if (((ulonglong)local_c8 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && ((ulonglong)local_c8 & 2) != 0))))))
      {
        local_c8 = (ulonglong *)((ulonglong)local_c8 & 0xfffffffffffffff9 | 4);
      }
      local_b8 = (uint *)CONCAT44(local_b8._4_4_,iVar4 - iVar5);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar22 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_c0,0x1f0);
        puVar22 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar22 + 0x3d;
      }
      *puVar20 = (ulonglong)puVar13;
      uStack_80 = DAT_14c9d3020;
      if (DAT_14c9d3020 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d3020 + 8) = *(int *)(DAT_14c9d3020 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14c9d2fd8;
      local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
      local_88 = puVar21;
      FUN_140068f1a(puVar22,&local_89,&local_88,(ulonglong)local_c8 & 0xffffffff);
      *puVar22 = &PTR_FUN_14a21c110;
      puVar22[0x37] = &DAT_14c9d2fd8;
      puVar22[0x38] = puVar21;
      puVar22[0x39] = local_a0;
      puVar22[0x3a] = local_98;
      *(undefined4 *)(puVar22 + 0x3b) = local_b8._0_4_;
      *(int *)((longlong)puVar22 + 0x1dc) = iVar18 >> 5;
      *(undefined4 *)(puVar22 + 0x3c) = 1;
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        local_c8._0_4_ = (uint)local_c8 & 0xfffffff9 | 2;
LAB_142c2e243:
      }
      else if (DAT_14c760ddc == 2 && ((ulonglong)local_c8 & 2) != 0) {
        local_c8._0_4_ = (uint)local_c8 & 0xfffd;
        goto LAB_142c2e243;
      }
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar22 + 0x3e;
      local_b8 = param_3;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_c0,0x1f8);
        puVar22 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar22 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar13;
      uVar10 = *(undefined4 *)(param_1 + 0x660);
      uStack_80 = DAT_14c9d3020;
      if (DAT_14c9d3020 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(DAT_14c9d3020 + 8) = *(int *)(DAT_14c9d3020 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14c9d2fd8;
      local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
      local_88 = puVar21;
      FUN_140068f1a(puVar22,&local_89,&local_88,(ulonglong)local_c8 & 0xffffffff);
      puVar22[0x37] = &DAT_14c9d2fd8;
      puVar22[0x38] = puVar21;
      puVar22[0x39] = local_a0;
      puVar22[0x3a] = local_98;
      *(int *)(puVar22 + 0x3b) = iVar4 - iVar5;
      *(int *)((longlong)puVar22 + 0x1dc) = iVar18 >> 5;
      *(undefined4 *)(puVar22 + 0x3c) = 1;
      *puVar22 = &PTR_FUN_14a21c0f0;
      *(undefined4 *)(puVar22 + 0x3d) = uVar10;
      puVar20 = local_c0;
      param_3 = local_b8;
    }
    iVar9 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar9 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar9 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar22);
    if ((*(char *)(uVar23 + 0x92) == '\x04') || (*(char *)(uVar23 + 0x92) == '\x01')) {
      uVar17 = *(undefined2 *)(uVar23 + 0x8e);
    }
    else {
      uVar17 = 0;
    }
    uVar2 = *(undefined1 *)(uVar23 + 0x90);
    param_4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = param_4 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
      FUN_140023dd8(puVar20,0x48);
      param_4 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      puVar13 = param_4 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar13;
    param_4[1] = *(undefined8 *)(uVar23 + 8);
    param_4[2] = 0;
    *(undefined1 *)(param_4 + 3) = 1;
    *(undefined8 *)((longlong)param_4 + 0x1c) = 0xffffffffffffffff;
    *param_4 = &PTR_FUN_14a203858;
    *(undefined2 *)(param_4 + 5) = 0;
    *(undefined1 *)((longlong)param_4 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)param_4 + 0x2b) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2c) = 0;
    *(undefined2 *)((longlong)param_4 + 0x2e) = uVar17;
    *(undefined1 *)(param_4 + 6) = 0;
    *(undefined1 *)((longlong)param_4 + 0x32) = 0;
    param_4[7] = uVar23;
    iVar9 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
      FUN_1447568fc(local_a8,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = param_4;
    *(int *)((longlong)param_4 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  }
  uVar6 = local_b0;
  uVar17 = 0;
  ppuVar14 = (undefined8 **)FUN_14472bf7a(param_1,param_6 + 0x60,L"FFT.Spectral",0);
  local_e8 = param_5;
  local_d8 = 0;
  local_e0 = ppuVar14;
  FUN_142c2b0e8(param_1,uVar6,param_3,param_4);
  if ((*(char *)((longlong)ppuVar14 + 0x92) == '\x04') ||
     (*(char *)((longlong)ppuVar14 + 0x92) == '\x01')) {
    uVar17 = *(undefined2 *)((longlong)ppuVar14 + 0x8e);
  }
  uVar2 = *(undefined1 *)(ppuVar14 + 0x12);
  puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar22 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
    puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar22 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar13;
  puVar22[1] = ppuVar14[1];
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 1;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *puVar22 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar22 + 5) = 0;
  *(undefined1 *)((longlong)puVar22 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar22 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x2e) = uVar17;
  *(undefined1 *)(puVar22 + 6) = 0;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = ppuVar14;
  iVar9 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar9 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_e8 = (int *)param_6;
  FUN_142c2e24c(param_1,local_b0,param_3,puVar22);
LAB_142c2e003:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c2e24c FUN_142c2e24c body=1324 status=ok
// SIG undefined FUN_142c2e24c(void)

void FUN_142c2e24c(longlong param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  ulonglong local_88;
  ulonglong *local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = param_3[1] >> 1;
  local_88 = (ulonglong)uVar12;
  uVar12 = uVar12 * 2 + 2;
  if (1 < *param_3) {
    uVar12 = param_3[1];
  }
  uVar6 = uVar12;
  uVar7 = param_3[2];
  if ((*param_3 & 0xfffffffd) == 0) {
    uVar6 = param_3[2];
    uVar7 = uVar12;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 8;
  local_78 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar11 = &PTR_FUN_14a21c268;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  local_80 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  puVar1 = local_80;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar11;
  puVar11[2] = 0;
  puVar11[3] = CONCAT44(uVar6,uVar7);
  bVar15 = (*param_3 & 0xfffffffd) == 0;
  uVar12 = bVar15 + 2;
  if (1 < *param_3) {
    uVar12 = (uint)bVar15;
  }
  *(uint *)(puVar11 + 4) = uVar12;
  puVar11[5] = param_4;
  uVar3 = *(undefined1 *)(param_5 + 0x94);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar14 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_80,0x50);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar14 + 9;
  }
  uVar8 = local_88;
  puVar2 = puVar11 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar14[1] = *(undefined8 *)(param_5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar14 + 6) = uVar3;
  *(undefined1 *)(puVar14 + 7) = 0;
  *(undefined4 *)((longlong)puVar14 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x35) = 0;
  puVar14[8] = param_5;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  iVar13 = (int)uVar8 + 1;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar11[6] = puVar14;
  FUN_142c2a368();
  FUN_1448e935e(local_78,&local_68,&DAT_14c9d2d58,0);
  FUN_142c2a368();
  puVar9 = local_68;
  local_88 = lStack_60;
  uVar10 = (ushort)param_3[3];
  FUN_142c40f28();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar9,&DAT_14c9d2e08,puVar2,&local_68);
  FUN_140069376(param_1);
  puVar1 = local_80;
  if ((uVar10 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar10 & 2) != 0)))))) {
      uVar10 = uVar10 & 0xfff9 | 4;
    }
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_80,0x1f0);
      puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar11;
    lStack_60 = DAT_14c9d2e50;
    if (DAT_14c9d2e50 != 0) {
      LOCK();
      *(int *)(DAT_14c9d2e50 + 8) = *(int *)(DAT_14c9d2e50 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14c9d2e08;
    local_98 = 2;
    local_68 = puVar2;
    FUN_140068f1a(puVar14,&local_69,&local_68,uVar10);
    *puVar14 = &PTR_FUN_14a21c290;
    puVar14[0x37] = &DAT_14c9d2e08;
    puVar14[0x38] = puVar2;
    puVar14[0x39] = puVar9;
    puVar14[0x3a] = local_88;
    puVar14[0x3b] = &DAT_100000001;
    *(int *)(puVar14 + 0x3c) = iVar13;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar10 = uVar10 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (uVar10 & 2) != 0) {
      uVar10 = uVar10 & 0xfffd;
    }
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(local_80,0x1f8);
      puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar11;
    uVar5 = *(undefined4 *)(param_1 + 0x660);
    lStack_60 = DAT_14c9d2e50;
    if (DAT_14c9d2e50 != 0) {
      LOCK();
      *(int *)(DAT_14c9d2e50 + 8) = *(int *)(DAT_14c9d2e50 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14c9d2e08;
    local_98 = 2;
    local_68 = puVar2;
    FUN_140068f1a(puVar14,&local_69,&local_68,uVar10);
    puVar14[0x37] = &DAT_14c9d2e08;
    puVar14[0x38] = puVar2;
    puVar14[0x39] = puVar9;
    puVar14[0x3a] = local_88;
    puVar14[0x3b] = &DAT_100000001;
    *(int *)(puVar14 + 0x3c) = iVar13;
    *puVar14 = &PTR_FUN_14a21c270;
    *(undefined4 *)(puVar14 + 0x3d) = uVar5;
  }
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c2e77a FUN_142c2e77a body=3538 status=ok
// SIG undefined FUN_142c2e77a(void)

void FUN_142c2e77a(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,int *param_5,
                  undefined8 param_6,longlong param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined2 uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  int *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong *local_b8;
  ulonglong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = param_3[1];
  local_a8 = param_2;
  if (uVar4 < 0x1001) {
    iVar11 = param_5[2] - *param_5;
    if ((*param_3 & 0xfffffffd) == 0) {
      iVar11 = param_5[3] - param_5[1];
    }
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,iVar11);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar17 + 10;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x60);
      puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar10 = puVar17 + 10;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    *puVar17 = &PTR_FUN_14a21c2a8;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[8] = 0;
    iVar11 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar11 + 1U;
    local_b0 = puVar1;
    if (*(uint *)(param_1 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar11);
    }
    puVar1 = local_b0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar11 * 8) = puVar17;
    puVar17[2] = *(undefined8 *)param_5;
    puVar17[3] = *(undefined8 *)(param_5 + 2);
    puVar17[4] = CONCAT44(param_5[3] - param_5[1],param_5[2] - *param_5);
    bVar18 = (*param_3 & 0xfffffffd) == 0;
    uVar12 = bVar18 + 2;
    if (1 < *param_3) {
      uVar12 = (uint)bVar18;
    }
    *(uint *)(puVar17 + 5) = uVar12 | 8;
    puVar17[6] = param_4;
    puVar17[7] = param_6;
    uVar3 = *(undefined1 *)(param_7 + 0x94);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar15 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_b0,0x50);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar15 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar15[1] = *(undefined8 *)(param_7 + 8);
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 0;
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar15 + 5) = 0;
    *puVar15 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar15 + 6) = uVar3;
    *(undefined1 *)(puVar15 + 7) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
    puVar15[8] = param_7;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar17[8] = puVar15;
    puVar17 = puVar17 + 2;
    if (uVar4 == 2) {
      uVar7 = 0xb;
    }
    else if (uVar4 == 4) {
      uVar7 = 10;
    }
    else if (uVar4 == 8) {
      uVar7 = 9;
    }
    else {
      uVar7 = FUN_14716e2a4(uVar4);
    }
    FUN_142c2aea8();
    FUN_1448e935e(local_a8,&local_68,&DAT_14c9d3668,uVar7);
    FUN_142c2aea8();
    lVar8 = lStack_60;
    uVar16 = local_68;
    uVar14 = (ushort)param_3[3];
    FUN_142c42ee0();
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    FUN_1448f70da(uVar16,&DAT_14c9d3718,puVar17,&local_68);
    FUN_140069376(param_1);
    puVar1 = local_b0;
    if ((uVar14 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar14 & 2) != 0)))))) {
        uVar14 = uVar14 & 0xfff9 | 4;
      }
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar15 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_b0,0x1f0);
        puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar15 + 0x3d;
      }
      *local_b0 = (ulonglong)puVar10;
      lStack_60 = DAT_14c9d3760;
      if (DAT_14c9d3760 != 0) {
        LOCK();
        *(int *)(DAT_14c9d3760 + 8) = *(int *)(DAT_14c9d3760 + 8) + 1;
        UNLOCK();
      }
      local_58 = &DAT_14c9d3718;
      local_d8 = (int *)CONCAT71(local_d8._1_7_,2);
      local_68 = puVar17;
      FUN_140068f1a(puVar15,&local_80,&local_68,uVar14);
      *puVar15 = &PTR_FUN_14a21c2d0;
      puVar15[0x37] = &DAT_14c9d3718;
      puVar15[0x38] = puVar17;
      puVar15[0x39] = uVar16;
      puVar15[0x3a] = lVar8;
      puVar15[0x3b] = &DAT_100000001;
      *(undefined4 *)(puVar15 + 0x3c) = local_b8._0_4_;
    }
    else {
      local_a8 = uVar16;
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar14 = uVar14 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar14 & 2) != 0) {
        uVar14 = uVar14 & 0xfffd;
      }
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar15 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_b0,0x1f8);
        puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar15 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar10;
      uVar7 = *(undefined4 *)(param_1 + 0x660);
      lStack_60 = DAT_14c9d3760;
      if (DAT_14c9d3760 != 0) {
        LOCK();
        *(int *)(DAT_14c9d3760 + 8) = *(int *)(DAT_14c9d3760 + 8) + 1;
        UNLOCK();
      }
      local_58 = &DAT_14c9d3718;
      local_d8 = (int *)CONCAT71(local_d8._1_7_,2);
      local_68 = puVar17;
      FUN_140068f1a(puVar15,&local_80,&local_68,uVar14);
      puVar15[0x37] = &DAT_14c9d3718;
      puVar15[0x38] = puVar17;
      puVar15[0x39] = local_a8;
      puVar15[0x3a] = lVar8;
      puVar15[0x3b] = &DAT_100000001;
      *(undefined4 *)(puVar15 + 0x3c) = local_b8._0_4_;
      *puVar15 = &PTR_FUN_14a21c2b0;
      *(undefined4 *)(puVar15 + 0x3d) = uVar7;
    }
    iVar11 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar11 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar15);
  }
  else {
    bVar18 = (*param_3 & 0xfffffffd) == 0;
    uVar12 = param_3[2];
    if (bVar18) {
      uVar12 = uVar4;
    }
    local_b0 = (ulonglong *)(ulonglong)uVar12;
    if (bVar18) {
      uVar4 = param_3[2];
    }
    local_a0 = CONCAT44(uVar4,uVar12);
    uVar13 = 0;
    local_80 = 0;
    local_78 = local_a0;
    lVar8 = FUN_14472bf7a(param_1,*(longlong *)(param_4 + 0x38) + 0x60,L"FFT.Spectral",0);
    local_c8 = 0;
    local_d8 = param_5;
    local_d0 = lVar8;
    FUN_142c2b0e8(param_1,param_2,param_3,param_4);
    lVar9 = FUN_14472bf7a(param_1,*(longlong *)(param_4 + 0x38) + 0x60,L"FFT.Spectral",0);
    if ((*(char *)(lVar8 + 0x92) == '\x04') || (*(char *)(lVar8 + 0x92) == '\x01')) {
      uVar13 = *(undefined2 *)(lVar8 + 0x8e);
    }
    uVar3 = *(undefined1 *)(lVar8 + 0x90);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    local_b8 = puVar1;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x48);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
    }
    local_98 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(lVar8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar13;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = lVar8;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_98,iVar11);
    }
    puVar1 = local_b8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    uVar12 = *param_3;
    uVar14 = (ushort)param_3[3];
    local_b0 = (ulonglong *)((ulonglong)local_b0 & 0xffffffff);
    if ((uVar12 & 0xfffffffd) == 0) {
      local_b0 = (ulonglong *)(ulonglong)uVar4;
    }
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar15 + 8;
    local_90 = param_3;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_b8,0x50);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar10 = puVar15 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    *puVar15 = &PTR_FUN_14a21c2e8;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    iVar11 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar11);
    }
    puVar1 = local_b8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar11 * 8) = puVar15;
    puVar15[2] = 0;
    puVar15[3] = local_a0;
    *(uint *)(puVar15 + 4) = (uint)((uVar12 & 0xfffffffd) == 0);
    puVar15[5] = puVar17;
    puVar15[6] = param_6;
    uVar3 = *(undefined1 *)(lVar9 + 0x94);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_b8,0x50);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar17 + 9;
    }
    uVar16 = local_a8;
    puVar2 = puVar15 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(lVar9 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 0;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar17 + 6) = uVar3;
    *(undefined1 *)(puVar17 + 7) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
    puVar17[8] = lVar9;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_98,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar15[7] = puVar17;
    FUN_142c2a7e8();
    FUN_1448e935e(uVar16,&local_68,&DAT_14c9d30f8,0);
    FUN_142c2a7e8();
    uVar6 = local_68;
    local_a0 = lStack_60;
    FUN_142c41a18();
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    FUN_1448f70da(uVar6,&DAT_14c9d31a8,puVar2,&local_68);
    FUN_140069376(param_1);
    puVar5 = local_90;
    puVar1 = local_b8;
    local_88 = lVar9;
    if ((uVar14 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar14 & 2) != 0)))))) {
        uVar14 = uVar14 & 0xfff9 | 4;
      }
      puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_b8,0x1f0);
        puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar17 + 0x3d;
      }
      *local_b8 = (ulonglong)puVar10;
      lStack_60 = DAT_14c9d31f0;
      if (DAT_14c9d31f0 != 0) {
        LOCK();
        *(int *)(DAT_14c9d31f0 + 8) = *(int *)(DAT_14c9d31f0 + 8) + 1;
        UNLOCK();
      }
      local_58 = &DAT_14c9d31a8;
      local_d8 = (int *)CONCAT71(local_d8._1_7_,2);
      local_68 = puVar2;
      FUN_140068f1a(puVar17,&local_69,&local_68,uVar14);
      *puVar17 = &PTR_FUN_14a21c310;
      puVar17[0x37] = &DAT_14c9d31a8;
      puVar17[0x38] = puVar2;
      puVar17[0x39] = uVar6;
      puVar17[0x3a] = local_a0;
      puVar17[0x3b] = &DAT_100000001;
      *(int *)(puVar17 + 0x3c) = (int)local_b0;
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        uVar14 = uVar14 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar14 & 2) != 0) {
        uVar14 = uVar14 & 0xfffd;
      }
      puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar17 + 0x3e;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        FUN_140023dd8(local_b8,0x1f8);
        puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar17 + 0x3e;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar10;
      uVar7 = *(undefined4 *)(param_1 + 0x660);
      lStack_60 = DAT_14c9d31f0;
      if (DAT_14c9d31f0 != 0) {
        LOCK();
        *(int *)(DAT_14c9d31f0 + 8) = *(int *)(DAT_14c9d31f0 + 8) + 1;
        UNLOCK();
      }
      local_58 = &DAT_14c9d31a8;
      local_d8 = (int *)CONCAT71(local_d8._1_7_,2);
      local_68 = puVar2;
      FUN_140068f1a(puVar17,&local_69,&local_68,uVar14);
      puVar17[0x37] = &DAT_14c9d31a8;
      puVar17[0x38] = puVar2;
      puVar17[0x39] = uVar6;
      puVar17[0x3a] = local_a0;
      puVar17[0x3b] = &DAT_100000001;
      *(int *)(puVar17 + 0x3c) = (int)local_b0;
      *puVar17 = &PTR_FUN_14a21c2f0;
      *(undefined4 *)(puVar17 + 0x3d) = uVar7;
      uVar16 = local_a8;
    }
    lVar8 = local_88;
    iVar11 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar11 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar17);
    puVar1 = local_b8;
    lStack_60 = *(longlong *)(puVar5 + 2);
    uVar4 = *puVar5;
    uVar12 = uVar4 + 5;
    if (-1 < (int)(uVar4 + 2)) {
      uVar12 = uVar4 + 2;
    }
    local_68 = (undefined8 *)CONCAT44(puVar5[1],(uVar4 - (uVar12 & 0xfffffffc)) + 2);
    if ((*(char *)(lVar8 + 0x92) == '\x04') || (*(char *)(lVar8 + 0x92) == '\x01')) {
      uVar13 = *(undefined2 *)(lVar8 + 0x8e);
    }
    else {
      uVar13 = 0;
    }
    uVar3 = *(undefined1 *)(lVar8 + 0x90);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar17 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_b8,0x48);
      puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar17 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar17[1] = *(undefined8 *)(lVar8 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 1;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *puVar17 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar17 + 5) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar17 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x2e) = uVar13;
    *(undefined1 *)(puVar17 + 6) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x32) = 0;
    puVar17[7] = lVar8;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(local_98,iVar11);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_d0 = param_7;
    local_d8 = (int *)&local_80;
    local_c8 = 0;
    FUN_142c2b0e8(param_1,uVar16,&local_68,puVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c2f54d FUN_142c2f54d body=1125 status=ok
// SIG undefined FUN_142c2f54d(void)

void FUN_142c2f54d(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
  cVar3 = *(char *)(lVar5 + 0x68);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
  }
  lVar2 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(lVar5 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar5;
  iVar4 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar7;
  cVar3 = *(char *)(lVar5 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(lVar5 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar5;
  iVar4 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[1] = puVar7;
  cVar3 = *(char *)(lVar5 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(lVar5 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar5;
  iVar4 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[2] = puVar7;
  cVar3 = *(char *)(lVar5 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(lVar5 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar5;
  iVar4 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[3] = puVar7;
  lVar5 = FUN_144735828(&DAT_14ca63b10,param_2,0xa0);
  cVar3 = *(char *)(lVar5 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(lVar5 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar5;
  iVar4 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(lVar2,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[4] = puVar7;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 142c2f9b2 FUN_142c2f9b2 body=82 status=ok
// SIG undefined FUN_142c2f9b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2f9b2(void)

{
  longlong *plVar1;
  
  _DAT_14c9d52a0 = &PTR__purecall_14a222c38;
  if (DAT_14c9d52d0 != 0) {
    plVar1 = &DAT_14c9d52f0;
    if (DAT_14c9d52e0 != (longlong *)0x0) {
      plVar1 = DAT_14c9d52e0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9d52b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142c2fa04 FUN_142c2fa04 body=69 status=ok
// SIG undefined FUN_142c2fa04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fa04(void)

{
  _DAT_14c9cfe58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fa46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfe60,1);
  return;
}



// FUNCTION 142c2fa49 FUN_142c2fa49 body=69 status=ok
// SIG undefined FUN_142c2fa49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fa49(void)

{
  _DAT_14c9cfe70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fa8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfe78,1);
  return;
}



// FUNCTION 142c2fa8e FUN_142c2fa8e body=69 status=ok
// SIG undefined FUN_142c2fa8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fa8e(void)

{
  _DAT_14c9cfe88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfe90,1);
  return;
}



// FUNCTION 142c2fad3 FUN_142c2fad3 body=69 status=ok
// SIG undefined FUN_142c2fad3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fad3(void)

{
  _DAT_14c9cfea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfea8,1);
  return;
}



// FUNCTION 142c2fb18 FUN_142c2fb18 body=69 status=ok
// SIG undefined FUN_142c2fb18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fb18(void)

{
  _DAT_14c9cfeb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fb5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfec0,1);
  return;
}



// FUNCTION 142c2fb5d FUN_142c2fb5d body=69 status=ok
// SIG undefined FUN_142c2fb5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2fb5d(void)

{
  _DAT_14c9cfed0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c2fb9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9cfed8,1);
  return;
}



// FUNCTION 142c2fba2 FUN_142c2fba2 body=406 status=ok
// SIG undefined FUN_142c2fba2(void)

undefined1 * FUN_142c2fba2(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x378);
  uVar3 = 0;
  iVar7 = 0;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    iVar7 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x388);
  }
  *(int *)(param_1 + 0x378) = iVar7 + iVar2;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x3a4);
  }
  iVar7 = -1;
  uVar3 = FUN_142c316dc(param_1,0xffffffff,uVar3);
  *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x3a0) = uVar3;
  if (((*(longlong *)(param_3 + 0x18) != 0) &&
      (iVar8 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x3ac), 0 < iVar8)) &&
     (*(char *)(param_1 + 0x37c) != '\0')) {
    piVar1 = (int *)(param_1 + 0x40);
    iVar7 = *(int *)(param_1 + 0x4c);
    lVar5 = (longlong)iVar7;
    if (iVar7 < *(int *)(param_1 + 0xa8)) {
      lVar6 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xa0);
      }
      iVar7 = *(int *)(param_1 + 0xa8) - iVar7;
      do {
        if (iVar8 <= *(int *)(lVar6 + 4 + lVar5 * 8)) {
          if (lVar5 != -1) {
            *piVar1 = *piVar1 + iVar8;
            goto LAB_142c2fc97;
          }
          break;
        }
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_144883418(piVar1);
      iVar7 = *(int *)(param_1 + 0x4c);
      lVar5 = (longlong)iVar7;
      if (iVar7 < *(int *)(param_1 + 0xa8)) {
        lVar6 = param_1 + 0x50;
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xa0);
        }
        iVar7 = *(int *)(param_1 + 0xa8) - iVar7;
        while (*(int *)(lVar6 + 4 + lVar5 * 8) < iVar8) {
          lVar5 = lVar5 + 1;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_142c2fc70;
        }
        *piVar1 = *piVar1 + iVar8;
        if (lVar5 == -1) goto LAB_142c2fc73;
LAB_142c2fc97:
        iVar4 = (int)lVar5;
        lVar5 = (longlong)iVar4;
        iVar7 = *(int *)(lVar6 + lVar5 * 8);
        *(int *)(lVar6 + lVar5 * 8) = iVar7 + iVar8;
        piVar1 = (int *)(lVar6 + 4 + lVar5 * 8);
        *piVar1 = *piVar1 - iVar8;
        if ((*piVar1 == 0) && (*(int *)(param_1 + 0x4c) == iVar4)) {
          *(int *)(param_1 + 0x4c) = iVar4 + 1;
        }
        goto LAB_142c2fcb7;
      }
    }
LAB_142c2fc70:
    *piVar1 = *piVar1 + iVar8;
LAB_142c2fc73:
    iVar7 = *(int *)(param_1 + 0x44);
    iVar8 = iVar8 + iVar7;
    *(int *)(param_1 + 0x44) = iVar8;
    if (iVar8 <= *(int *)(param_1 + 0x48)) {
      iVar8 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar8;
  }
LAB_142c2fcb7:
  *(int *)(*(longlong *)(param_3 + 0x18) + 0x3a8) = iVar7;
  uVar3 = *(undefined4 *)(param_1 + 0x378);
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar2;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  return param_2;
}



// FUNCTION 142c2fd38 FUN_142c2fd38 body=705 status=ok
// SIG undefined FUN_142c2fd38(void)

undefined1 * FUN_142c2fd38(undefined1 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar8 = DAT_14c9cfee0;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 0x40000002) {
    uVar7 = 0;
    iVar3 = 0x40000002;
  }
  else if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
      iVar3 = *piVar1;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  lVar2 = DAT_14c9cfee0;
  uVar6 = 0;
  iVar9 = *(int *)(lVar8 + uVar7 * 4);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xac) = 10;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0xa00000000;
  param_1[0x110] = iVar9 != 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  lVar8 = lVar2;
  iVar9 = 0x40000002;
  if (iVar3 != 0x40000002) {
    iVar9 = iVar3;
    if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
        lVar8 = DAT_14c9cfee0;
        iVar9 = *piVar1;
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  uVar7 = 0;
  iVar3 = *(int *)(lVar2 + uVar6 * 4);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 10;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0xa00000000;
  param_1[0x200] = iVar3 != 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = param_2;
  if (iVar9 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  iVar3 = *(int *)(lVar8 + uVar7 * 4);
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0xa00000000;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0xa00000000;
  param_1[0x300] = iVar3 != 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  param_1[0x370] = 0xff;
  *(undefined8 *)(param_1 + 0x374) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x37c) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  return param_1;
}



// FUNCTION 142c2fffa FUN_142c2fffa body=68 status=ok
// SIG undefined FUN_142c2fffa(void)

void FUN_142c2fffa(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x378) =
       *(undefined4 *)
        (*(longlong *)(param_1 + 0x228) + 0x5224 +
        (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x228) + 0x52f0) * 4);
  *(undefined1 *)(param_1 + 0x37d) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  return;
}



// FUNCTION 142c3003e FUN_142c3003e body=2615 status=ok
// SIG undefined FUN_142c3003e(void)

longlong * FUN_142c3003e(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  size_t _Size;
  int iVar17;
  undefined8 *puVar18;
  void *_Buf1;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  uint local_bc;
  longlong local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  int local_a0;
  int local_9c;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar6 = *(ulonglong **)(param_3 + 0x18);
  uVar8 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_bc = *(uint *)((longlong)puVar6 + 0x17c);
  local_c8 = param_2;
  local_b0 = param_4;
  if (local_bc != uVar8) {
    *(uint *)((longlong)puVar6 + 0x17c) = uVar8;
    puVar10 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar10 + 3;
    if ((undefined8 *)puVar6[1] < puVar15) {
      FUN_140023dd8(puVar6,0x20);
      puVar10 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar10 + 3;
    }
    *puVar6 = (ulonglong)puVar15;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar10;
    puVar6[6] = (ulonglong)(puVar10 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar6 + 0x17c);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar10 + 2) = uVar5;
  }
  iVar9 = *(int *)(param_1 + 0x378);
  if (iVar9 < 0x101) {
    iVar9 = 0x100;
  }
  uVar3 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_a8 = puVar6;
  local_b8 = FUN_1448cfc4a(param_3,param_1 + 8,0x2e0 << ((byte)lVar11 & 0x1f),
                           L"GPUScene.PrimitiveData");
  plVar1 = local_c8;
  *local_c8 = local_b8;
  iVar9 = *(int *)(param_1 + 0x234 + (ulonglong)*(byte *)(param_1 + 0x300) * 4);
  if (iVar9 < 0x101) {
    iVar9 = 0x100;
  }
  uVar3 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  uVar8 = 1 << ((byte)lVar11 & 0x1f);
  if (0xffffff < uVar8) {
    uVar8 = 0x1000000;
  }
  local_9c = (((&DAT_14ca814d8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x40) == 0) + 3;
  local_a0 = local_9c * uVar8 * 0x10;
  lVar11 = FUN_1401d06d5(param_3,param_1 + 0x20,&local_a0,L"GPUScene.InstanceSceneData");
  plVar1[1] = lVar11;
  *(uint *)(param_1 + 0x38) = uVar8;
  iVar9 = *(int *)(param_1 + 0x44 + (ulonglong)*(byte *)(param_1 + 0x110) * 4);
  if (iVar9 < 0x101) {
    iVar9 = 0x100;
  }
  uVar3 = (ulonglong)(iVar9 * 0x10 + -1 + (uint)(iVar9 * 0x10 == 0)) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  lVar12 = FUN_1448cfc4a(param_3,param_1 + 0x118,1 << ((byte)lVar12 & 0x1f),
                         L"GPUScene.InstancePayloadData");
  plVar1[2] = lVar12;
  iVar9 = *(int *)(param_1 + 0x134 + (ulonglong)*(byte *)(param_1 + 0x200) * 4);
  iVar17 = 0x100;
  if (0x100 < iVar9) {
    iVar17 = iVar9;
  }
  uVar3 = (ulonglong)(iVar17 - 1) * 2 + 1;
  lVar14 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  lVar13 = FUN_1448cfc4a(param_3,param_1 + 0x208,0xf0 << ((byte)lVar14 & 0x1f),
                         L"GPUScene.LightmapData");
  plVar1[3] = lVar13;
  lVar14 = FUN_144735dd8(param_3,param_1 + 0x220,0);
  plVar1[4] = lVar14;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  cVar4 = *(char *)(lVar11 + 0x68);
  plVar1 = (longlong *)(param_3 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar10 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar15) {
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar10 + 9;
  }
  lVar16 = param_3 + 0x198;
  *(undefined8 **)(param_3 + 0x70) = puVar15;
  puVar10[1] = *(undefined8 *)(lVar11 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar10 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar11;
  iVar9 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar9 + 1U) {
    local_d8 = lVar14;
    FUN_1447568fc(lVar16,iVar9);
    lVar14 = local_d8;
  }
  lVar11 = local_b8;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar9 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  cVar4 = *(char *)(lVar12 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar18 + 9;
  local_88 = puVar10;
  if (*(undefined8 **)(param_3 + 0x78) < puVar15) {
    local_d8 = lVar14;
    local_d0 = lVar16;
    FUN_140023dd8(plVar1,0x50);
    puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar18 + 9;
    lVar14 = local_d8;
    lVar16 = local_d0;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar15;
  puVar18[1] = *(undefined8 *)(lVar12 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar18 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = lVar12;
  iVar9 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar9 + 1U) {
    local_d8 = lVar14;
    local_d0 = lVar16;
    FUN_1447568fc(lVar16,iVar9);
    lVar14 = local_d8;
    lVar16 = local_d0;
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar9 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  cVar4 = *(char *)(lVar11 + 0x68);
  puVar10 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar10 + 9;
  puStack_80 = puVar18;
  if (*(undefined8 **)(param_3 + 0x78) < puVar15) {
    local_d8 = lVar14;
    local_d0 = lVar16;
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar10 + 9;
    lVar14 = local_d8;
    lVar16 = local_d0;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar15;
  puVar10[1] = *(undefined8 *)(lVar11 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar10 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar11;
  iVar9 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar9 + 1U) {
    local_d8 = lVar14;
    local_d0 = lVar16;
    FUN_1447568fc(lVar16,iVar9);
    lVar14 = local_d8;
    lVar16 = local_d0;
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar9 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  cVar4 = *(char *)(lVar13 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar18 + 9;
  local_78 = puVar10;
  if (*(undefined8 **)(param_3 + 0x78) < puVar15) {
    local_d8 = lVar14;
    FUN_140023dd8(plVar1,0x50);
    puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar18 + 9;
    lVar14 = local_d8;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar15;
  puVar18[1] = *(undefined8 *)(lVar13 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar18 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = lVar13;
  iVar9 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar9 + 1U) {
    local_d8 = lVar14;
    FUN_1447568fc(lVar16,iVar9);
    lVar14 = local_d8;
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar9 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  cVar4 = *(char *)(lVar14 + 0x68);
  puVar10 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar10 + 9;
  puStack_70 = puVar18;
  if (*(undefined8 **)(param_3 + 0x78) < puVar15) {
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar10 + 9;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar15;
  puVar10[1] = *(undefined8 *)(lVar14 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar10 + 5) = cVar4 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar14;
  iVar9 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(lVar16,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar9 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  local_60 = *(undefined4 *)(param_1 + 0x38);
  local_54 = *(undefined4 *)(param_1 + 0x388);
  local_58 = *(undefined4 *)(param_1 + 0x234 + (ulonglong)*(byte *)(param_1 + 0x300) * 4);
  local_5c = *(undefined4 *)(param_1 + 0x374);
  local_68 = puVar10;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d5390) {
    FUN_144b3d300(&DAT_14c9d5390);
    if (DAT_14c9d5390 == -1) {
      FUN_145712cfe(local_98);
      local_e0 = 0;
      local_f0 = 0;
      local_110 = "Unknown";
      local_120 = 0;
      uStack_118 = 0;
      local_128 = L"FGPUSceneResourceParameters";
      local_e8 = 0;
      local_100 = 0x40;
      local_108 = 0x26;
      local_f8 = local_98;
      FUN_140b49562(&DAT_14c9d5310,0,1);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4eeb3);
      _Init_thread_footer(&DAT_14c9d5390);
    }
  }
  lVar12 = local_b0;
  lVar11 = DAT_14ca4b2f0;
  lVar13 = (longlong)DAT_14c9d52c0;
  lVar14 = local_b0 + 0x10;
  if (*(longlong *)(local_b0 + 0x20) != 0) {
    lVar14 = *(longlong *)(local_b0 + 0x20);
  }
  _Size = (size_t)DAT_14c9d534c;
  iVar9 = DAT_14c9d52c0 + 0x1f;
  if (-1 < lVar13) {
    iVar9 = DAT_14c9d52c0;
  }
  puVar2 = (uint *)(lVar14 + (longlong)(iVar9 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)DAT_14c9d52c0 & 0x1f);
  _Buf1 = (void *)((longlong)*(int *)(lVar11 + 4 + lVar13 * 0x60) + *(longlong *)(local_b0 + 0x30));
  iVar9 = memcmp(_Buf1,&local_88,_Size);
  if (iVar9 != 0) {
    *(undefined1 *)(lVar12 + 8) = 1;
    memcpy(_Buf1,&local_88,_Size);
  }
  puVar6 = local_a8;
  if (*(char *)(param_1 + 0x37d) == '\x01') {
    *(longlong *)(param_1 + 0x338) = local_c8[4];
    lVar12 = *local_c8;
    uVar5 = *(undefined4 *)((longlong)local_c8 + 4);
    lVar14 = local_c8[1];
    uVar7 = *(undefined4 *)((longlong)local_c8 + 0xc);
    lVar11 = local_c8[3];
    *(longlong *)(param_1 + 0x328) = local_c8[2];
    *(longlong *)(param_1 + 0x330) = lVar11;
    *(int *)(param_1 + 0x318) = (int)lVar12;
    *(undefined4 *)(param_1 + 0x31c) = uVar5;
    *(int *)(param_1 + 800) = (int)lVar14;
    *(undefined4 *)(param_1 + 0x324) = uVar7;
  }
  if (*(uint *)((longlong)local_a8 + 0x17c) != local_bc) {
    *(uint *)((longlong)local_a8 + 0x17c) = local_bc;
    puVar10 = (undefined8 *)(*local_a8 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar10 + 3;
    if ((undefined8 *)local_a8[1] < puVar15) {
      FUN_140023dd8(local_a8,0x20);
      puVar10 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar10 + 3;
    }
    *puVar6 = (ulonglong)puVar15;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar10;
    puVar6[6] = (ulonglong)(puVar10 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar6 + 0x17c);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar10 + 2) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c30a76 FUN_142c30a76 body=3173 status=ok
// SIG undefined FUN_142c30a76(void)

void FUN_142c30a76(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  wchar_t *local_f0;
  longlong *local_e8;
  uint local_dc;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  ulonglong *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar8 = *(uint *)(*param_5 + 0x388);
  local_b0 = param_3;
  if ((ulonglong)uVar8 == 0) goto LAB_142c31480;
  if (*(int *)(DAT_14c9cfe98 + 4) == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = FUN_1447e0190();
  }
  if (DAT_14c760e34 == 0) {
    local_dc = 0;
  }
  else {
    lVar9 = (ulonglong)DAT_14ca85550 * 0x3c;
    local_dc = (uint)(byte)((byte)((uint)(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] >> 0x1d) &
                            *(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) >> 4 &
                           (byte)((*(uint *)(&DAT_14ca814cc + lVar9) & 8) >> 3));
  }
  puVar4 = *(ulonglong **)(param_2 + 0x18);
  uVar7 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_bc = *(uint *)((longlong)puVar4 + 0x17c);
  if (local_bc != uVar7) {
    *(uint *)((longlong)puVar4 + 0x17c) = uVar7;
    puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar10 + 3;
    if ((undefined8 *)puVar4[1] < puVar13) {
      FUN_140023dd8(puVar4,0x20);
      puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar10 + 3;
    }
    *puVar4 = (ulonglong)puVar13;
    *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
    *(undefined8 **)puVar4[6] = puVar10;
    puVar4[6] = (ulonglong)(puVar10 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar10 + 2) = uVar3;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar10 + 10;
  local_c8 = param_2;
  local_b8 = puVar4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x60);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar10 + 10;
  }
  *(undefined8 **)(local_c8 + 0x70) = puVar13;
  *puVar10 = &PTR_FUN_14a222550;
  local_e8 = puVar10 + 1;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 9) = 1;
  plVar21 = (longlong *)(local_c8 + 0x98);
  iVar19 = *(int *)(local_c8 + 0xa0);
  *(uint *)(local_c8 + 0xa0) = iVar19 + 1U;
  if (*(uint *)(local_c8 + 0xa4) < iVar19 + 1U) {
    FUN_1448cfae8(plVar21,iVar19);
  }
  *(undefined8 **)(*plVar21 + (longlong)iVar19 * 8) = puVar10;
  *(uint *)(puVar10 + 7) = uVar8;
  *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(param_1 + 0x38);
  local_d0 = param_1;
  FUN_1401cfc88(local_e8,uVar8);
  if (0 < (int)uVar8) {
    lVar22 = 100;
    lVar9 = 0;
    uVar18 = 0;
    plVar21 = local_e8;
    do {
      lVar12 = *plVar21;
      *(undefined4 *)(lVar12 + 0x10 + lVar9) = 0;
      puVar13 = (undefined8 *)(lVar12 + 0x18 + lVar9);
      *puVar13 = 0;
      puVar13[1] = 0;
      *(int *)(lVar12 + lVar9) = (int)param_5[1] + (int)uVar18;
      lVar23 = *(longlong *)(*param_5 + 0x380);
      if (lVar23 == 0) {
        lVar23 = *param_5;
      }
      iVar19 = *(int *)(lVar23 + -4 + lVar22);
      *(int *)(lVar12 + 8 + lVar9) = iVar19;
      uVar2 = *(ushort *)(lVar23 + -0x12 + lVar22);
      uVar7 = (uint)((uVar2 & 0x50) != 0);
      if ((char)uVar2 < '\0') {
        uVar7 = 2;
      }
      if ((uVar2 & 8) != 0) {
        if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
          uVar7 = uVar7 + 3;
        }
        else {
          uVar7 = uVar7 + 2;
        }
      }
      iVar20 = (ushort)((uVar2 >> 5 & 1) + (ushort)((uVar2 >> 9 & 1) != 0)) + uVar7;
      if ((uVar2 & 4) != 0) {
        iVar20 = iVar20 + (*(int *)(lVar23 + -0x10 + lVar22) + 3U >> 2);
      }
      *(int *)(lVar12 + 0xc + lVar9) = iVar20 * iVar19;
      *(int *)(lVar12 + 4 + lVar9) = *(int *)(lVar23 + lVar22) + *(int *)((longlong)param_5 + 0xc);
      if ((*(int *)(lVar23 + -0x1c + lVar22) != 0) &&
         (plVar5 = *(longlong **)(lVar23 + -0x24 + lVar22), plVar5 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar5 + 0x30))();
        plVar21 = local_e8;
        if (cVar6 == '\0') {
          iVar19 = *(int *)(lVar12 + 8 + lVar9);
        }
        else {
          iVar19 = *(int *)(lVar23 + -0x5c + lVar22);
          *(int *)(lVar12 + 8 + lVar9) = iVar19;
          if (*(int *)(lVar23 + -0x2c + lVar22) == 0) {
            *(undefined4 *)(lVar12 + 0xc + lVar9) = 0;
          }
        }
      }
      iVar20 = *(int *)(lVar12 + 4 + lVar9);
      if (0xffffff < iVar19 + iVar20) {
        iVar20 = 0x1000000 - iVar20;
        if (iVar20 < 1) {
          iVar20 = 0;
        }
        *(int *)(lVar12 + 8 + lVar9) = iVar20;
      }
      *(int *)((longlong)puVar10 + 0x3c) =
           *(int *)((longlong)puVar10 + 0x3c) + *(int *)(lVar12 + 0x10 + lVar9);
      *(int *)(puVar10 + 8) = *(int *)(puVar10 + 8) + *(int *)(lVar12 + 8 + lVar9);
      *(int *)((longlong)puVar10 + 0x44) =
           *(int *)((longlong)puVar10 + 0x44) + *(int *)(lVar12 + 0xc + lVar9);
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 0x70;
      lVar9 = lVar9 + 0x28;
    } while (uVar8 != uVar18);
  }
  puVar13 = local_b0;
  lVar22 = local_c8;
  lVar9 = local_d0;
  plVar21 = (longlong *)(local_d0 + 0x10);
  local_f0 = L"PrimitiveUploadBuffer";
  local_f8 = 0x2e0;
  uVar11 = FUN_1401d0000(plVar21,local_c8,*local_b0,(int)param_5[4]);
  puVar10[3] = uVar11;
  iVar19 = *(int *)((longlong)puVar10 + 0x44);
  if (0 < iVar19) {
    local_f0 = L"InstancePayloadUploadBuffer";
    local_f8 = 0x10;
    lVar12 = FUN_1401d0000(lVar9 + 0x120,lVar22,puVar13[2],iVar19);
    *(int *)(lVar12 + 0x10) = iVar19;
    *(undefined1 *)(lVar12 + 0x40) = 1;
    puVar10[4] = lVar12;
  }
  if (0 < *(int *)(puVar10 + 8)) {
    iVar19 = ((((&DAT_14ca814d8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x40) == 0) + 3) *
             *(int *)(puVar10 + 8);
    local_f0 = L"InstanceSceneUploadBuffer";
    local_f8 = 0x10;
    lVar12 = FUN_1401d0000(lVar9 + 0x28,lVar22,puVar13[1],iVar19);
    *(int *)(lVar12 + 0x10) = iVar19;
    *(undefined1 *)(lVar12 + 0x40) = 1;
    puVar10[5] = lVar12;
  }
  if (0 < *(int *)((longlong)puVar10 + 0x3c)) {
    local_f0 = L"LightmapUploadBuffer";
    local_f8 = 0xf0;
    uVar11 = FUN_1401d0000(lVar9 + 0x210,lVar22,puVar13[3]);
    puVar10[6] = uVar11;
  }
  uStack_8c = *(undefined4 *)(lVar9 + 0x38c);
  if (*(char *)(lVar22 + 0x520) == '\x01') {
    local_88 = *(longlong *)(lVar22 + 0x18);
LAB_142c30f42:
    lVar9 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(lVar9,*(undefined4 *)(local_88 + 0x17c),0);
    local_a8 = 0;
    uStack_a0 = (longlong *)0x0;
    FUN_144775d28(&local_a8,1);
    uVar18 = (ulonglong)uStack_a0;
    lVar12 = (longlong)(int)uStack_a0;
    uVar8 = (int)uStack_a0 + 1;
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,uVar8);
    if (uStack_a0._4_4_ < uVar8) {
      FUN_14741464c(&local_a8,uVar18 & 0xffffffff);
    }
    *(longlong *)(local_a8 + lVar12 * 8) = lVar9;
    local_70 = local_a8;
    local_68 = (int)uStack_a0;
    FUN_14007658c(&DAT_14ca850c8,&local_70,0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_a8 = lVar22;
    uStack_a0 = local_e8;
    local_98 = param_5;
    uStack_90._0_2_ = CONCAT11((char)local_c0,(char)local_dc);
    uStack_80 = CONCAT31(uStack_80._1_3_,1);
    local_88 = lVar9;
    puVar13 = TlsGetValue(DAT_14c896140);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar13);
    }
    puVar15 = (undefined8 *)puVar13[1];
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar13;
      if (puVar15 == (undefined8 *)0x0) {
        uVar8 = (uint)DAT_14c896180;
        uVar18 = DAT_14c896180;
        while (DAT_14c896180 = uVar18, local_70 = uVar18, (uVar18 & 0x3ffffff) != 0) {
          local_d8 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
          if (local_d8 >> 0x1a < uVar18 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar17 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
          uVar24 = (ulonglong)((uint)uVar18 & 0x3fff);
          local_d8 = local_d8 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 0x10 + uVar24 * 0x18);
          LOCK();
          bVar25 = local_70 == DAT_14c896180;
          uVar18 = local_d8;
          if (!bVar25) {
            uVar18 = DAT_14c896180;
          }
          DAT_14c896180 = uVar18;
          UNLOCK();
          if (bVar25) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + uVar24 * 0x18 + 0x10) = 0;
            puVar15 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 8 +
                       (ulonglong)(uVar8 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar8 & 0x3ffffff);
            puVar13[1] = puVar15;
            if (puVar15 == (undefined8 *)0x0) goto LAB_142c316a0;
            goto LAB_142c314d1;
          }
          uVar8 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
        }
        puVar13[1] = 0;
LAB_142c316a0:
        puVar15 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar13[1] = puVar15;
        iVar19 = 0xff;
        puVar16 = puVar15;
        do {
          puVar14 = puVar16 + 0x20;
          *puVar16 = puVar14;
          iVar19 = iVar19 + -1;
          puVar16 = puVar14;
        } while (iVar19 != 0);
      }
      else {
        puVar13[1] = puVar15;
        puVar14 = puVar13;
      }
      *puVar14 = 0;
LAB_142c314d1:
      *(undefined4 *)(puVar13 + 2) = 0x100;
      iVar19 = 0xff;
    }
    else {
      iVar19 = *(int *)(puVar13 + 2) + -1;
    }
    lVar9 = local_d0;
    puVar13[1] = *puVar15;
    *(int *)(puVar13 + 2) = iVar19;
    *puVar15 = UE::Tasks::Private::FTaskBase::vftable;
    puVar15[1] = &DAT_100000002;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)(puVar15 + 4) = 0xffffffff;
    puVar15[6] = 0;
    puVar15[7] = 0x100000000;
    *(undefined1 *)(puVar15 + 8) = 1;
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar15[0xf] = 0;
    puVar15[0x10] = 0xe800000000000020;
    puVar15[0x12] = 0;
    puVar15[0x13] = 0x100000000;
    *(undefined2 *)(puVar15 + 0x14) = 0;
    LOCK();
    bVar25 = *(char *)(puVar15 + 8) == '\x01';
    if (bVar25) {
      *(char *)(puVar15 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar25) {
      FUN_14008cdb0(puVar15 + 8);
    }
    *puVar15 = &PTR_FUN_14a222668;
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar22 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar22 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar22 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = 0xc800005288327c00;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
    *(undefined4 *)(puVar15 + 0x15) = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar15 + 0xac) = local_a8._4_4_;
    *(int *)(puVar15 + 0x16) = (int)uStack_a0;
    *(uint *)((longlong)puVar15 + 0xb4) = uStack_a0._4_4_;
    *(undefined4 *)(puVar15 + 0x17) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar15 + 0xbc) = local_98._4_4_;
    *(undefined4 *)(puVar15 + 0x18) = uStack_90;
    *(undefined4 *)((longlong)puVar15 + 0xc4) = uStack_8c;
    *(undefined4 *)(puVar15 + 0x19) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar15 + 0xcc) = local_88._4_4_;
    *(uint *)(puVar15 + 0x1a) = uStack_80;
    *(undefined4 *)((longlong)puVar15 + 0xd4) = uStack_7c;
    *puVar15 = &PTR_FUN_14a222658;
    FUN_1400e88c2(puVar15,param_6);
    local_70 = CONCAT71(local_70._1_7_,1);
    FUN_1447439e4(puVar15);
    if (puVar15 != (undefined8 *)0x0) {
      plVar5 = (longlong *)(local_c8 + 0x500);
      iVar19 = *(int *)(local_c8 + 0x508);
      *(uint *)(local_c8 + 0x508) = iVar19 + 1U;
      if (*(uint *)(local_c8 + 0x50c) < iVar19 + 1U) {
        FUN_1401d03aa(plVar5,iVar19);
      }
      *(undefined8 **)(*plVar5 + (longlong)iVar19 * 8) = puVar15;
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  else {
    if (*param_6 == 0) {
      local_88 = *(longlong *)(lVar22 + 0x18);
    }
    else {
      local_88 = *(longlong *)(lVar22 + 0x18);
      if ((*(byte *)(*param_6 + 0xa0) & 1) == 0) goto LAB_142c30f42;
    }
    local_a8 = lVar22;
    uStack_a0 = local_e8;
    local_98 = param_5;
    uStack_90._0_2_ = CONCAT11((char)local_c0,(char)local_dc);
    uStack_80 = uStack_80 & 0xffffff00;
    FUN_1462ca0ce();
    lVar9 = local_d0;
  }
  lVar22 = local_c8;
  FUN_1401d131a(plVar21,local_c8,puVar10[3]);
  if (puVar10[4] != 0) {
    FUN_1401d131a(lVar9 + 0x120,lVar22);
  }
  if (puVar10[5] != 0) {
    FUN_1401d131a(lVar9 + 0x28,lVar22);
  }
  if (puVar10[6] != 0) {
    FUN_1401d131a(lVar9 + 0x210,lVar22);
  }
  puVar4 = local_b8;
  lVar22 = *plVar21;
  iVar19 = 0;
  iVar20 = 0;
  if (lVar22 != 0) {
    iVar20 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  uVar8 = *(uint *)(DAT_14c9cfe80 + 4);
  lVar22 = *(longlong *)(lVar9 + 0x18);
  if (lVar22 != 0) {
    iVar19 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  if (uVar8 < (uint)(iVar19 + iVar20)) {
    FUN_1401cfc2e(plVar21);
  }
  lVar22 = *(longlong *)(lVar9 + 0x28);
  iVar19 = 0;
  iVar20 = 0;
  if (lVar22 != 0) {
    iVar20 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  lVar22 = *(longlong *)(lVar9 + 0x30);
  if (lVar22 != 0) {
    iVar19 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  if (uVar8 < (uint)(iVar19 + iVar20)) {
    FUN_1401cfc2e(lVar9 + 0x28);
  }
  lVar22 = *(longlong *)(lVar9 + 0x120);
  iVar19 = 0;
  iVar20 = 0;
  if (lVar22 != 0) {
    iVar20 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  lVar22 = *(longlong *)(lVar9 + 0x128);
  if (lVar22 != 0) {
    iVar19 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  if (uVar8 < (uint)(iVar19 + iVar20)) {
    FUN_1401cfc2e(lVar9 + 0x120);
  }
  lVar22 = *(longlong *)(lVar9 + 0x210);
  iVar19 = 0;
  iVar20 = 0;
  if (lVar22 != 0) {
    iVar20 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  lVar22 = *(longlong *)(lVar9 + 0x218);
  if (lVar22 != 0) {
    iVar19 = *(int *)(lVar22 + 0x14) * *(int *)(lVar22 + 0x10);
  }
  if (uVar8 < (uint)(iVar19 + iVar20)) {
    FUN_1401cfc2e(lVar9 + 0x210);
  }
  if (*(uint *)((longlong)puVar4 + 0x17c) != local_bc) {
    *(uint *)((longlong)puVar4 + 0x17c) = local_bc;
    puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar10 + 3;
    if ((undefined8 *)puVar4[1] < puVar13) {
      FUN_140023dd8(puVar4,0x20);
      puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar10 + 3;
    }
    *puVar4 = (ulonglong)puVar13;
    *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
    *(undefined8 **)puVar4[6] = puVar10;
    puVar4[6] = (ulonglong)(puVar10 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar10 + 2) = uVar3;
  }
LAB_142c31480:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c316dc FUN_142c316dc body=426 status=ok
// SIG undefined FUN_142c316dc(void)

int FUN_142c316dc(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_3 < 1) {
    return -1;
  }
  if (*(char *)(param_1 + 0x37c) == '\0') {
    return -1;
  }
  piVar1 = (int *)(param_1 + 0x230);
  iVar8 = *(int *)(param_1 + 0x23c);
  lVar4 = (longlong)iVar8;
  if (iVar8 < *(int *)(param_1 + 0x298)) {
    lVar7 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x290);
    }
    iVar8 = *(int *)(param_1 + 0x298) - iVar8;
    do {
      if (param_3 <= *(int *)(lVar7 + 4 + lVar4 * 8)) {
        if (lVar4 != -1) {
          *piVar1 = *piVar1 + param_3;
          goto LAB_142c31786;
        }
        break;
      }
      lVar4 = lVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x2f8) != 0) {
    FUN_144883418(piVar1);
    iVar8 = *(int *)(param_1 + 0x23c);
    lVar4 = (longlong)iVar8;
    if (iVar8 < *(int *)(param_1 + 0x298)) {
      lVar7 = param_1 + 0x240;
      if (*(longlong *)(param_1 + 0x290) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x290);
      }
      iVar8 = *(int *)(param_1 + 0x298) - iVar8;
      do {
        if (param_3 <= *(int *)(lVar7 + 4 + lVar4 * 8)) {
          *piVar1 = *piVar1 + param_3;
          if (lVar4 != -1) goto LAB_142c31786;
          goto LAB_142c31759;
        }
        lVar4 = lVar4 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *piVar1 = *piVar1 + param_3;
LAB_142c31759:
  iVar8 = *(int *)(param_1 + 0x234);
  iVar6 = iVar8 + param_3;
  *(int *)(param_1 + 0x234) = iVar6;
  iVar3 = *(int *)(param_1 + 0x238);
  if (*(int *)(param_1 + 0x238) < iVar6) {
    iVar3 = iVar6;
  }
  *(int *)(param_1 + 0x238) = iVar3;
LAB_142c317ab:
  plVar2 = (longlong *)(param_1 + 0x350);
  iVar3 = *(int *)(param_1 + 0x358);
  lVar4 = (longlong)iVar3;
  if (lVar4 != 0) {
    lVar7 = *plVar2;
    lVar5 = (longlong)(iVar3 + -1);
    iVar6 = *(int *)(lVar7 + 8 + lVar5 * 0xc);
    if ((iVar8 == *(int *)(lVar7 + 4 + lVar5 * 0xc) + iVar6) &&
       (piVar1 = (int *)(lVar7 + lVar5 * 0xc), *piVar1 == param_2)) {
      piVar1[2] = iVar6 + param_3;
      return iVar8;
    }
  }
  *(uint *)(param_1 + 0x358) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x35c) < iVar3 + 1U) {
    FUN_1401cfe8a(plVar2,iVar3);
  }
  lVar7 = *plVar2;
  *(int *)(lVar7 + lVar4 * 0xc) = param_2;
  *(int *)(lVar7 + 4 + lVar4 * 0xc) = iVar8;
  *(int *)(lVar7 + 8 + lVar4 * 0xc) = param_3;
  return iVar8;
LAB_142c31786:
  iVar3 = (int)lVar4;
  lVar4 = (longlong)iVar3;
  iVar8 = *(int *)(lVar7 + lVar4 * 8);
  *(int *)(lVar7 + lVar4 * 8) = iVar8 + param_3;
  piVar1 = (int *)(lVar7 + 4 + lVar4 * 8);
  *piVar1 = *piVar1 - param_3;
  if ((*piVar1 == 0) && (*(int *)(param_1 + 0x23c) == iVar3)) {
    *(int *)(param_1 + 0x23c) = iVar3 + 1;
  }
  goto LAB_142c317ab;
}



// FUNCTION 142c31886 FUN_142c31886 body=235 status=ok
// SIG undefined FUN_142c31886(void)

int FUN_142c31886(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = -1;
  if ((0 < param_2) && (*(char *)(param_1 + 0x37c) != '\0')) {
    piVar1 = (int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x4c);
    lVar4 = (longlong)iVar2;
    if (iVar2 < *(int *)(param_1 + 0xa8)) {
      lVar5 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xa0);
      }
      iVar2 = *(int *)(param_1 + 0xa8) - iVar2;
      do {
        if (param_2 <= *(int *)(lVar5 + 4 + lVar4 * 8)) {
          if (lVar4 != -1) {
            *piVar1 = *piVar1 + param_2;
            goto LAB_142c31903;
          }
          break;
        }
        lVar4 = lVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_144883418(piVar1);
      iVar2 = *(int *)(param_1 + 0x4c);
      lVar4 = (longlong)iVar2;
      if (iVar2 < *(int *)(param_1 + 0xa8)) {
        lVar5 = param_1 + 0x50;
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          lVar5 = *(longlong *)(param_1 + 0xa0);
        }
        iVar2 = *(int *)(param_1 + 0xa8) - iVar2;
        do {
          if (param_2 <= *(int *)(lVar5 + 4 + lVar4 * 8)) {
            *piVar1 = *piVar1 + param_2;
            if (lVar4 != -1) {
LAB_142c31903:
              iVar3 = (int)lVar4;
              lVar4 = (longlong)iVar3;
              iVar2 = *(int *)(lVar5 + lVar4 * 8);
              *(int *)(lVar5 + lVar4 * 8) = iVar2 + param_2;
              piVar1 = (int *)(lVar5 + 4 + lVar4 * 8);
              *piVar1 = *piVar1 - param_2;
              if (*piVar1 != 0) {
                return iVar2;
              }
              if (*(int *)(param_1 + 0x4c) != iVar3) {
                return iVar2;
              }
              *(int *)(param_1 + 0x4c) = iVar3 + 1;
              return iVar2;
            }
            goto LAB_142c318e6;
          }
          lVar4 = lVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    *piVar1 = *piVar1 + param_2;
LAB_142c318e6:
    iVar2 = *(int *)(param_1 + 0x44);
    param_2 = param_2 + iVar2;
    *(int *)(param_1 + 0x44) = param_2;
    if (param_2 <= *(int *)(param_1 + 0x48)) {
      param_2 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = param_2;
  }
  return iVar2;
}



// FUNCTION 142c3197e FUN_142c3197e body=3326 status=ok
// SIG undefined FUN_142c3197e(void)

void FUN_142c3197e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_208 [32];
  double *local_1e8;
  ulonglong local_1e0;
  bool local_1d8;
  longlong *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  int local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  ulonglong local_188;
  longlong local_180;
  uint local_174;
  undefined1 *local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined *local_118;
  ulonglong uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 local_d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar18 = *(int *)(DAT_14c9cfeb0 + 4);
  if (0 < iVar18) {
    DAT_14ca4d100 = 1;
    uVar3 = *(uint *)(param_1 + 0x234 + (ulonglong)*(byte *)(param_1 + 0x300) * 4);
    if ((0 < (int)uVar3) && (*(char *)(param_4 + 0x13870) != '\0')) {
      DAT_14ca4d330 = DAT_14ca4d330 + uVar3 * 0xc;
      local_d8 = 0;
      uVar9 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar9 = DAT_14ca84e48;
      }
      local_e8 = uVar9 + (uVar9 == 0);
      iStack_e4 = 1;
      iStack_e0 = 0x4109;
      plVar1 = (longlong *)(param_2 + 0x70);
      uVar11 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar16 = uVar11 + 0x150;
      local_1c8 = plVar1;
      local_1ac = iVar18;
      local_198 = param_3;
      local_188 = (ulonglong)uVar3;
      if (*(ulonglong *)(param_2 + 0x78) < uVar16) {
        FUN_140023dd8(plVar1,0x160);
        uVar11 = *plVar1 + 0xfU & 0xfffffffffffffff0;
        uVar16 = uVar11 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar16;
      FUN_1456bd266(uVar11,L"GPUScene.DebugCounter",&local_e8,0);
      iVar18 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
        FUN_144737178(param_2 + 0x188,iVar18);
      }
      plVar1 = local_1c8;
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar11;
      *(int *)(uVar11 + 0x7c) = *(int *)(param_2 + 400) + -1;
      local_190 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = local_190 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
        FUN_140023dd8(local_1c8,0x48);
        local_190 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar7 = local_190 + 8;
      }
      local_1c0 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar7;
      local_190[1] = *(undefined8 *)(uVar11 + 8);
      local_190[2] = 0;
      *(undefined1 *)(local_190 + 3) = 2;
      *(undefined8 *)((longlong)local_190 + 0x1c) = 0xffffffffffffffff;
      uVar16 = 0;
      *(undefined1 *)(local_190 + 5) = 0;
      *local_190 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(local_190 + 6) = 0x1c;
      *(undefined1 *)((longlong)local_190 + 0x32) = 0;
      local_190[7] = uVar11;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      local_1a0 = param_4;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_1c0,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_190;
      *(int *)((longlong)local_190 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_180 = param_2;
      FUN_1405bfba3(param_2,local_190,0,2);
      local_f8 = (undefined4 *)0x0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      FUN_144893a1c(&local_108,0xf00);
      local_118 = (undefined *)0x0;
      uStack_110 = 0;
      iVar15 = *(int *)(*(longlong *)(param_1 + 0x228) + 0x5224 +
                       (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x228) + 0x52f0) * 4);
      iVar18 = iVar15 + 0x1f;
      iVar15 = iVar15 + 0x3e;
      if (-1 < iVar18) {
        iVar15 = iVar18;
      }
      local_e8 = 0;
      FUN_146f37e98(&local_118,&local_e8,iVar15 >> 5);
      lVar4 = *(longlong *)(param_1 + 0x228);
      if (0 < *(int *)(lVar4 + 0x3360)) {
        lVar17 = 0;
        uVar16 = 0;
        do {
          if ((*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 0x3358) + lVar17 * 8) + 0x6c) & 6) != 0
             ) {
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x3330) + lVar17 * 8);
            iVar18 = *(int *)(lVar4 + 0x15c);
            iVar15 = iVar18 + 0x1f;
            if (-1 < iVar18) {
              iVar15 = iVar18;
            }
            *(uint *)(local_118 + (longlong)(iVar15 >> 5) * 4) =
                 *(uint *)(local_118 + (longlong)(iVar15 >> 5) * 4) | 1 << ((byte)iVar18 & 0x1f);
            if ((uint)uStack_f0 < 0x80) {
              local_1b8 = uVar16;
              FUN_1472ab970(lVar4,&local_e8);
              lVar4 = (longlong)iStack_e0;
              local_1a4 = iStack_e0 + -1;
              if (iStack_e0 == 0) {
                local_1a4 = 0;
              }
              local_1a8 = (uint)uStack_100;
              lVar5 = CONCAT44(iStack_e4,local_e8);
              if (lVar5 + lVar4 * 2 + -2 != lVar5 && iStack_e0 != 0) {
                lVar12 = 0;
                do {
                  uVar16 = uStack_100;
                  uVar2 = *(undefined1 *)(lVar5 + lVar12);
                  lVar13 = (longlong)(int)(uint)uStack_100;
                  uVar3 = (uint)uStack_100 + 1;
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
                  if (uStack_100._4_4_ < uVar3) {
                    FUN_1447403be(&local_108,uVar16 & 0xffffffff);
                  }
                  *(undefined1 *)(local_108 + lVar13) = uVar2;
                  lVar12 = lVar12 + 2;
                } while (lVar4 * 2 + -2 != lVar12);
              }
              uVar16 = uStack_f0;
              lVar4 = (longlong)(int)(uint)uStack_f0;
              uVar3 = (uint)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
              if (uStack_f0._4_4_ < uVar3) {
                FUN_14717a48e(&local_f8,uVar16 & 0xffffffff);
              }
              uVar16 = local_1b8;
              local_f8[lVar4 * 2] = iVar18;
              *(char *)((longlong)local_f8 + lVar4 * 8 + 6) = (char)local_1a4;
              *(short *)(local_f8 + lVar4 * 2 + 1) = (short)local_1a8;
              if (CONCAT44(iStack_e4,local_e8) != 0) {
                FUN_1400020a8();
              }
              uVar16 = (ulonglong)((int)uVar16 + 1);
            }
          }
          lVar17 = lVar17 + 1;
          lVar4 = *(longlong *)(param_1 + 0x228);
        } while (lVar17 < *(int *)(lVar4 + 0x3360));
      }
      lVar4 = local_180;
      iVar18 = (int)uVar16;
      if ((uint)uStack_f0 == 0) {
        uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
        if (uStack_f0._4_4_ == 0) {
          FUN_14717a48e(&local_f8,0);
        }
        *local_f8 = 0xffffffff;
        *(undefined1 *)((longlong)local_f8 + 6) = 4;
        *(undefined2 *)(local_f8 + 1) = 0;
        lVar17 = (longlong)(int)(uint)uStack_100;
        uVar3 = (uint)uStack_100 + 1;
        if (uStack_100._4_4_ < uVar3) {
          uVar16 = uStack_100 & 0xffffffff;
          uStack_100._0_4_ = uVar3;
          FUN_1447403be(&local_108,uVar16);
          uVar3 = (uint)uStack_100;
        }
        uStack_100._0_4_ = uVar3;
        uVar3 = (uint)uStack_100;
        *(undefined1 *)(local_108 + lVar17) = 0x4e;
        lVar17 = (longlong)(int)(uint)uStack_100;
        uStack_100._0_4_ = (uint)uStack_100 + 1;
        if (uStack_100._4_4_ < (uint)uStack_100) {
          FUN_1447403be(&local_108,uVar3);
        }
        uVar3 = (uint)uStack_100;
        *(undefined1 *)(local_108 + lVar17) = 0x6f;
        lVar17 = (longlong)(int)(uint)uStack_100;
        uStack_100._0_4_ = (uint)uStack_100 + 1;
        if (uStack_100._4_4_ < (uint)uStack_100) {
          FUN_1447403be(&local_108,uVar3);
        }
        uVar3 = (uint)uStack_100;
        *(undefined1 *)(local_108 + lVar17) = 0x6e;
        lVar17 = (longlong)(int)(uint)uStack_100;
        uStack_100._0_4_ = (uint)uStack_100 + 1;
        if (uStack_100._4_4_ < (uint)uStack_100) {
          FUN_1447403be(&local_108,uVar3);
        }
        *(undefined1 *)(local_108 + lVar17) = 0x65;
      }
      local_1e8 = (double *)(longlong)(int)(uint)uStack_100;
      DAT_14ca4d32c = DAT_14ca4d32c + iVar18 * 0x30 + (uint)uStack_100;
      local_d8 = 0;
      iStack_e0 = 0x4109;
      local_e8 = 1;
      iStack_e4 = (uint)uStack_100;
      local_1e0 = local_1e0 & 0xffffffffffffff00;
      local_1b8 = FUN_1400489e9(lVar4,L"GPUScene.Debug.SelectedPrimitiveNames",&local_e8,local_108);
      uVar16 = uStack_f0 & 0xffffffff;
      if ((uint)uStack_f0 != 0) {
        local_1e0 = (ulonglong)((uint)uStack_f0 * 8);
        local_1e8 = (double *)local_f8;
      }
      else {
        local_1e8 = (double *)&DAT_14a222678;
        local_1e0 = 8;
        uVar16 = 1;
      }
      local_1d8 = (uint)uStack_f0 == 0;
      lVar17 = FUN_144942e63(lVar4,L"GPUScene.Debug.SelectedPrimitiveNameInfos",8,uVar16);
      uVar16 = uStack_110 & 0xffffffff;
      if ((int)uStack_110 != 0) {
        local_1e0 = (ulonglong)(uint)((int)uStack_110 * 4);
        local_1e8 = (double *)local_118;
      }
      else {
        local_1e8 = (double *)&DAT_14a222680;
        local_1e0 = 4;
        uVar16 = 1;
      }
      local_1d8 = (int)uStack_110 == 0;
      lVar5 = FUN_144942e63(lVar4,L"GPUScene.Debug.SelectedPrimitiveFlags",4,uVar16);
      plVar1 = local_1c8;
      puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar10 + 0x14;
      if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
        FUN_140023dd8(local_1c8,0xb0);
        puVar10 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar10 + 0x14;
      }
      lVar12 = local_1a0 + 0x13870;
      *(undefined8 **)(lVar4 + 0x70) = puVar7;
      *puVar10 = &PTR_FUN_14a222688;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 1;
      puVar10[4] = 0;
      *(undefined1 *)(puVar10 + 5) = 1;
      puVar10[0x12] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      iVar15 = *(int *)(lVar4 + 0xa0);
      *(uint *)(lVar4 + 0xa0) = iVar15 + 1U;
      if (*(uint *)(lVar4 + 0xa4) < iVar15 + 1U) {
        FUN_1448cfae8(lVar4 + 0x98,iVar15);
      }
      *(undefined8 **)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar15 * 8) = puVar10;
      FUN_1472ea582(lVar4,lVar12,puVar10 + 4);
      uVar6 = FUN_1448c569e(local_198,lVar4);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1))
      {
        DAT_14ca4b320 = FUN_145900d44();
        _Init_thread_footer(&DAT_14ca4b328);
      }
      plVar1 = local_1c8;
      cVar8 = '\x02';
      if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
        cVar8 = *(char *)(DAT_14ca4b320 + 0x41);
      }
      puVar10[2] = uVar6;
      *(char *)(puVar10 + 3) = cVar8;
      *(uint *)((longlong)puVar10 + 0x44) = (uint)(local_1ac == 3);
      *(uint *)(puVar10 + 8) = (uint)(local_1ac != 2);
      *(int *)(puVar10 + 9) = iVar18;
      uVar19 = 0;
      if (iVar18 != 0) {
        uVar19 = (uint)uStack_100;
      }
      *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar19;
      cVar8 = *(char *)(lVar5 + 0x68);
      puVar20 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar20 + 9;
      if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
        FUN_140023dd8(local_1c8,0x50);
        puVar20 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar20 + 9;
      }
      *(undefined8 **)(lVar4 + 0x70) = puVar7;
      puVar20[1] = *(undefined8 *)(lVar5 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar20 + 5) = cVar8 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = lVar5;
      iVar18 = *(int *)(lVar4 + 0x1a0);
      *(uint *)(lVar4 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(lVar4 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_1c0,iVar18);
      }
      plVar1 = local_1c8;
      *(undefined8 **)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar4 + 0x1a0) + -1;
      puVar10[10] = puVar20;
      cVar8 = *(char *)(lVar17 + 0x68);
      puVar20 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar20 + 9;
      if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
        FUN_140023dd8(local_1c8,0x50);
        puVar20 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar20 + 9;
      }
      *(undefined8 **)(lVar4 + 0x70) = puVar7;
      puVar20[1] = *(undefined8 *)(lVar17 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar20 + 5) = cVar8 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = lVar17;
      iVar18 = *(int *)(lVar4 + 0x1a0);
      *(uint *)(lVar4 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(lVar4 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_1c0,iVar18);
      }
      plVar1 = local_1c8;
      *(undefined8 **)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar4 + 0x1a0) + -1;
      puVar10[0xb] = puVar20;
      puVar20 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar20 + 9;
      if (*(undefined8 **)(lVar4 + 0x78) < puVar7) {
        FUN_140023dd8(local_1c8,0x50);
        puVar20 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar20 + 9;
      }
      *(undefined8 **)(lVar4 + 0x70) = puVar7;
      puVar20[1] = *(undefined8 *)(local_1b8 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar20 + 5) = 0x39;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = local_1b8;
      iVar18 = *(int *)(lVar4 + 0x1a0);
      *(uint *)(lVar4 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(lVar4 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_1c0,iVar18);
      }
      lVar17 = local_1a0;
      *(undefined8 **)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(lVar4 + 0x1a0) + -1;
      puVar10[0xc] = puVar20;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = *(undefined4 *)(DAT_14c9cfec8 + 4);
      puVar10[0x12] = local_190;
      local_128 = 0.0;
      local_138 = 0.0;
      dStack_130 = 0.0;
      local_1e8 = &local_158;
      local_148 = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_168 = (double)(int)*(undefined8 *)(local_1a0 + 0x23d0);
      local_160 = (double)(int)((ulonglong)*(undefined8 *)(local_1a0 + 0x23d0) >> 0x20);
      puVar7 = (undefined8 *)(local_1a0 + 0xb30);
      piVar14 = &local_e8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)piVar14 = *puVar7;
        puVar7 = puVar7 + 1;
        piVar14 = piVar14 + 2;
      }
      FUN_147cf0692(&local_168,local_1a0 + 0x4d8,&local_e8,&local_138);
      *(float *)(puVar10 + 0xe) = (float)local_138;
      *(float *)((longlong)puVar10 + 0x74) = (float)dStack_130;
      *(float *)(puVar10 + 0xf) = (float)local_128;
      *(float *)(puVar10 + 0x10) = (float)(local_158 * 8796093022208.0 + local_138);
      *(float *)((longlong)puVar10 + 0x84) = (float)(dStack_150 * 8796093022208.0 + dStack_130);
      *(float *)(puVar10 + 0x11) = (float)(local_148 * 8796093022208.0 + local_128);
      FUN_147169e3c(*(undefined8 *)(lVar17 + 0x13818),&local_e8);
      local_174 = (int)local_188 + 0x7fU >> 7;
      local_1e8 = (double *)&local_174;
      local_170 = &DAT_100000001;
      FUN_147169ea9(lVar4,&local_168,&local_e8,puVar10 + 2);
      if (local_118 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c3267e FUN_142c3267e body=679 status=ok
// SIG undefined FUN_142c3267e(void)

ulonglong FUN_142c3267e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 unaff_R13;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [44];
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x37c) == '\x01') {
    puVar4 = *(ulonglong **)(param_2 + 0x18);
    uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar2 = *(uint *)((longlong)puVar4 + 0x17c);
    if (uVar2 != uVar5) {
      *(uint *)((longlong)puVar4 + 0x17c) = uVar5;
      puVar6 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 3;
      if ((undefined8 *)puVar4[1] < puVar8) {
        FUN_140023dd8(puVar4,0x20);
        puVar6 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar6 + 3;
      }
      *puVar4 = (ulonglong)puVar8;
      *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
      *(undefined8 **)puVar4[6] = puVar6;
      puVar4[6] = (ulonglong)(puVar6 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar4 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar9;
    }
    *(char *)(param_1 + 0x370) = param_4;
    bVar13 = *(int *)(param_1 + 0x368 + (ulonglong)(uint)(int)param_4 * 0x10) != 0;
    uVar11 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),bVar13);
    if (bVar13) {
      lVar1 = param_1 + (ulonglong)(uint)(int)param_4 * 0x10;
      plVar12 = (longlong *)(lVar1 + 0x360);
      local_98 = 0xffffffffffffffff;
      uStack_90 = 0xffffffff;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_88 = param_4;
      FUN_1401d0fb8(param_1,param_2);
      puVar8 = (undefined8 *)*plVar12;
      if ((longlong)*(int *)(lVar1 + 0x368) == 0) {
        uVar9 = 0;
      }
      else {
        local_9c = (uint)uVar11;
        puVar6 = puVar8 + (longlong)*(int *)(lVar1 + 0x368) * 5;
        do {
          if ((longlong)(int)param_3[1] != 0) {
            local_80 = *param_3;
            lVar10 = (longlong)(int)param_3[1] * 0x13c10;
            do {
              if (*(int *)(local_80 + 0x13b84) == *(int *)(puVar8 + 2)) goto LAB_142c327f0;
              local_80 = local_80 + 0x13c10;
              lVar10 = lVar10 + -0x13c10;
            } while (lVar10 != 0);
          }
          local_80 = 0;
LAB_142c327f0:
          local_98 = *(undefined8 *)((longlong)puVar8 + 0x14);
          uStack_90 = *(undefined8 *)((longlong)puVar8 + 0x1c);
          if (*(int *)(puVar8 + 1) == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)*puVar8;
          }
          (**(code **)(*plVar7 + 0x58))(plVar7,param_2,&local_98);
          puVar8 = puVar8 + 5;
        } while (puVar8 != puVar6);
        uVar9 = *(undefined4 *)(lVar1 + 0x368);
        puVar8 = (undefined8 *)*plVar12;
        uVar11 = (ulonglong)local_9c;
      }
      iVar3 = *(int *)(lVar1 + 0x36c);
      FUN_14003878e(puVar8,uVar9);
      *(undefined4 *)(lVar1 + 0x368) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar1 + 0x36c) != 0)) {
        FUN_14717a8f4(plVar12);
      }
    }
    if (*(uint *)((longlong)puVar4 + 0x17c) != uVar2) {
      *(uint *)((longlong)puVar4 + 0x17c) = uVar2;
      puVar6 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 3;
      if ((undefined8 *)puVar4[1] < puVar8) {
        FUN_140023dd8(puVar4,0x20);
        puVar6 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar6 + 3;
      }
      *puVar4 = (ulonglong)puVar8;
      *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
      *(undefined8 **)puVar4[6] = puVar6;
      puVar4[6] = (ulonglong)(puVar6 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar4 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar9;
    }
  }
  else {
    uVar11 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c32932 FUN_142c32932 body=69 status=ok
// SIG undefined FUN_142c32932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c32932(void)

{
  _DAT_14c9d0138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c32974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0140,1);
  return;
}



// FUNCTION 142c32977 FUN_142c32977 body=69 status=ok
// SIG undefined FUN_142c32977(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c32977(void)

{
  _DAT_14c9d0148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c329b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0150,1);
  return;
}



// FUNCTION 142c329bc FUN_142c329bc body=69 status=ok
// SIG undefined FUN_142c329bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c329bc(void)

{
  _DAT_14c9d0158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c329fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0160,1);
  return;
}



// FUNCTION 142c32a3d FUN_142c32a3d body=192 status=ok
// SIG undefined FUN_142c32a3d(void)

void FUN_142c32a3d(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = *param_2;
    lVar5 = (longlong)(int)param_2[1] * 0x13c10;
    iVar3 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) != 0) && (*(char *)(lVar6 + 0x11a08) == '\x01')) {
        lVar2 = *(longlong *)(param_6 + 0x10e0);
        if (*(longlong *)(param_6 + 0x10e0) == 0) {
          lVar2 = param_6;
        }
        lVar1 = *(longlong *)(lVar2 + 0x18 + (longlong)iVar3 * 0x438);
        lVar4 = param_3;
        if ((lVar1 != 0) && (*(longlong *)(lVar2 + (longlong)iVar3 * 0x438 + 0x20) != 0)) {
          lVar4 = lVar1;
        }
        FUN_142c32afd(param_1,lVar6,lVar4,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x13c10;
      lVar5 = lVar5 + -0x13c10;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 142c32afd FUN_142c32afd body=3538 status=ok
// SIG undefined FUN_142c32afd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c32afd(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_2 + 0x11ab0) != 0) {
    local_d8 = (undefined8 *)param_5;
    local_e8 = (undefined8 *)param_4;
    local_e0 = (undefined8 *)param_3;
    FUN_142c3b047(param_1,param_2,param_4 + 0x84,param_2 + 0x11a10);
LAB_142c32b6a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if (*(longlong *)(param_2 + 0x11a20) != 0) {
    if ((*(byte *)(param_2 + 0x2b5c) & 1) == 0) {
      uVar8 = 0;
    }
    else {
      local_b8 = *(ulonglong *)(param_3 + 0x84);
      local_68 = DAT_14ca83a40;
      uStack_78 = _DAT_14ca83a30;
      uStack_70 = _DAT_14ca83a38;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_4e = 0;
      local_80 = 9;
      local_4d = 0xd;
      local_54 = 0x10001;
      local_50 = 0x101;
      local_60 = 0;
      local_4b = 0xff;
      local_5c = DAT_14ca84e40;
      if ((int)local_b8 < DAT_14ca84e40) {
        local_5c = (int)local_b8;
      }
      if (local_5c < 2) {
        local_5c = 1;
      }
      iVar12 = (int)(local_b8 >> 0x20);
      local_58 = DAT_14ca84e40;
      if (iVar12 < DAT_14ca84e40) {
        local_58 = iVar12;
      }
      if (local_58 < 2) {
        local_58 = 1;
      }
      plVar1 = (longlong *)(param_1 + 0x70);
      uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar8 = uVar11 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(plVar1,0x128);
        uVar11 = *plVar1 + 7U & 0xfffffffffffffff8;
        uVar8 = uVar11 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bbb8c(uVar11,L"Hair.DOFDepth",&local_80,0);
      iVar12 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar12);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar11;
      *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar14 + 0x30;
      local_a0 = uVar11;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(plVar1,400);
        puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar14 + 0x30;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar14 = &PTR_FUN_14a21c868;
      FUN_14716f018(puVar14 + 2);
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar12);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar14;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (*(char *)(lVar9 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar14[0xe] = uVar2;
      *(char *)(puVar14 + 0xf) = cVar6;
      puVar14[10] = *(undefined8 *)(param_2 + 0x11b60);
      puVar14[0xb] = param_3;
      puVar14[0xc] = param_4;
      lVar9 = FUN_1447e4f80();
      uVar8 = local_a0;
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar14[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar14 + 3) = cVar6;
      puVar14[0x10] = local_a0;
      puVar14[0x11] = 0;
      *(undefined4 *)(puVar14 + 0x12) = 0xffff0000;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145ea4f68();
      FUN_1448e935e(uVar2,&local_80,&DAT_14c9d0420,0);
      FUN_145ea4f68();
      local_e8 = (undefined8 *)(param_2 + 0x11ad0);
      local_e0 = &local_80;
      local_d8 = puVar14 + 2;
      FUN_14716eee2(param_1,&local_81,param_2,local_b8);
    }
    uVar10 = *(uint *)(param_2 + 0x11f60);
    local_b8 = local_b8 & 0xffffffff00000000;
    local_a0 = uVar8;
    local_a8 = (undefined8 *)FUN_144a97bef(param_1,param_2);
    local_b0 = (ulonglong *)(param_1 + 0x70);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar14 + 0x34;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_b0,0x1b0);
      puVar14 = (undefined8 *)(*local_b0 + 0xf & 0xfffffffffffffff0);
      puVar7 = puVar14 + 0x34;
    }
    local_b8 = CONCAT44(local_b8._4_4_,CONCAT31((int3)(local_b8 >> 8),uVar8 != 0));
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    *puVar14 = &PTR_FUN_14a21c888;
    local_90 = puVar14 + 2;
    FUN_14716f394();
    local_98 = (longlong *)(param_1 + 0x98);
    iVar12 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
      FUN_1448cfae8(local_98,iVar12);
    }
    uVar10 = uVar10 & 8;
    *(undefined8 **)(*local_98 + (longlong)iVar12 * 8) = puVar14;
    *(undefined4 *)(puVar14 + 0xb) = (undefined4)local_b8;
    puVar14[0xe] = *(undefined8 *)(param_2 + 0x11b60);
    uVar8 = local_a0;
    if (local_a0 == 0) {
      uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    }
    puVar14[0xf] = uVar8;
    puVar14[10] = *(undefined8 *)(param_3 + 0x84);
    lVar9 = FUN_1447e4f80();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (*(char *)(lVar9 + 0x41) == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[2] = *(undefined8 *)(param_2 + 0x18);
    *(char *)(puVar14 + 3) = cVar6;
    uVar2 = *(undefined8 *)(param_2 + 0x11a00);
    lVar9 = FUN_144a81af4();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[0xc] = uVar2;
    *(char *)(puVar14 + 0xd) = cVar6;
    lVar9 = FUN_144a80e70();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[0x12] = local_a8;
    *(char *)(puVar14 + 0x13) = cVar6;
    *(uint *)((longlong)puVar14 + 0x5c) = uVar10 >> 3;
    puVar14[0x14] = param_3;
    puVar14[0x15] = 0;
    *(undefined4 *)(puVar14 + 0x16) = 0xffff0001;
    puVar14[0x2c] = param_4;
    puVar14[0x2d] = 0;
    *(undefined2 *)(puVar14 + 0x2e) = 0x101;
    *(undefined4 *)((longlong)puVar14 + 0x174) = 0x12;
    uVar2 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f286c0();
    FUN_1448e935e(uVar2,&local_80,&DAT_14c9d02f8,0);
    FUN_145f286c0();
    puVar7 = (undefined8 *)(param_2 + 0x11ad0);
    puStack_d0 = local_90;
    local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,uVar10 != 0);
    local_e0 = puVar7;
    local_d8 = &local_80;
    FUN_14716f258(param_1,&local_81,param_2,*(undefined8 *)(param_3 + 0x84));
    if (uVar10 != 0) {
      local_90 = (undefined8 *)FUN_144a97bef(param_1,param_2);
      puVar5 = local_b0;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x32;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_b0,0x1a0);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x32;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar13 = &PTR_FUN_14a21c8a8;
      local_a8 = puVar13 + 2;
      FUN_14716f718();
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(local_98,iVar12);
      }
      *(undefined8 **)(*local_98 + (longlong)iVar12 * 8) = puVar13;
      *(undefined4 *)(puVar13 + 0xb) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = 0;
      uVar8 = local_a0;
      if (local_a0 == 0) {
        uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
      }
      puVar13[0x10] = uVar8;
      puVar13[10] = *(undefined8 *)(param_3 + 0x84);
      lVar9 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar13 + 3) = cVar6;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xc] = uVar2;
      *(char *)(puVar13 + 0xd) = cVar6;
      lVar9 = FUN_144a80e70();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xe] = local_90;
      *(char *)(puVar13 + 0xf) = cVar6;
      puVar13[0x12] = param_3;
      puVar13[0x13] = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0xffff0001;
      puVar13[0x2a] = param_4;
      puVar13[0x2b] = 0;
      *(undefined2 *)(puVar13 + 0x2c) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x164) = 0x12;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f66b66();
      FUN_1448e935e(uVar2,&local_80,&DAT_14c9d01d0,0);
      FUN_145f66b66();
      puStack_d0 = local_a8;
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,5);
      local_e0 = puVar7;
      local_d8 = &local_80;
      FUN_14716f5e0(param_1,&local_81,param_2,*(undefined8 *)(param_3 + 0x84));
      puVar5 = local_b0;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x32;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_b0,0x1a0);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x32;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar13 = &PTR_FUN_14a21c8a8;
      local_a8 = puVar13 + 2;
      FUN_14716f718();
      plVar1 = local_98;
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(local_98,iVar12);
      }
      *(undefined8 **)(*plVar1 + (longlong)iVar12 * 8) = puVar13;
      *(undefined4 *)(puVar13 + 0xb) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = 1;
      uVar8 = local_a0;
      if (local_a0 == 0) {
        uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
      }
      puVar13[0x10] = uVar8;
      puVar13[10] = *(undefined8 *)(param_3 + 0x84);
      lVar9 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar13 + 3) = cVar6;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xc] = uVar2;
      *(char *)(puVar13 + 0xd) = cVar6;
      lVar9 = FUN_144a80e70();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xe] = local_90;
      *(char *)(puVar13 + 0xf) = cVar6;
      puVar13[0x12] = param_3;
      puVar13[0x13] = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0xffff0001;
      puVar13[0x2a] = param_4;
      puVar13[0x2b] = 0;
      *(undefined2 *)(puVar13 + 0x2c) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x164) = 0x12;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f66b66();
      FUN_1448e935e(uVar2,&local_80,&DAT_14c9d01d0,0);
      FUN_145f66b66();
      puStack_d0 = local_a8;
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,6);
      local_e0 = puVar7;
      local_d8 = &local_80;
      FUN_14716f5e0(param_1,&local_81,param_2,*(undefined8 *)(param_3 + 0x84));
    }
    puVar5 = local_b0;
    if (*(longlong *)(param_2 + 0x11a18) != 0) {
      local_b8 = *(ulonglong *)(param_4 + 0x84);
      local_68 = DAT_14ca83a40;
      local_5c = DAT_14ca84e40;
      if ((int)local_b8 < DAT_14ca84e40) {
        local_5c = (int)local_b8;
      }
      if (local_5c < 2) {
        local_5c = 1;
      }
      iVar12 = (int)(local_b8 >> 0x20);
      local_58 = DAT_14ca84e40;
      if (iVar12 < DAT_14ca84e40) {
        local_58 = iVar12;
      }
      uStack_78 = _DAT_14ca83a30;
      uStack_70 = _DAT_14ca83a38;
      local_4e = 0;
      local_80 = 1;
      local_4d = 0x25;
      local_54 = 0x10001;
      local_50 = CONCAT11(*(undefined1 *)(param_4 + 0x91),1);
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_4b = 0xff;
      if (local_58 < 2) {
        local_58 = 1;
      }
      uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar8 = uVar11 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(local_b0,0x128);
        uVar11 = *puVar5 + 7 & 0xfffffffffffffff8;
        uVar8 = uVar11 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bbb8c(uVar11,L"Hair.DummyTexture",&local_80,0);
      iVar12 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar12);
      }
      puVar5 = local_b0;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar11;
      *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x2a;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_b0,0x160);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x2a;
      }
      *local_b0 = (ulonglong)puVar14;
      *puVar13 = &PTR_FUN_14a21c8f0;
      *(undefined1 (*) [16])(puVar13 + 5) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar13 + 7) = 4;
      puVar13[8] = 0;
      lVar9 = 0x62;
      do {
        *(undefined1 (*) [16])((longlong)puVar13 + lVar9 + -0x12) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar13 + lVar9 + -2) = 0xffff0000;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x122);
      *(undefined4 *)((longlong)puVar13 + 0x124) = 0;
      *(undefined1 (*) [16])(puVar13 + 0x22) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar13 + 0x24) = 0;
      *(undefined4 *)(puVar13 + 0x25) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 300) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x26) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 0x134) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x27) = 0;
      *(undefined2 *)((longlong)puVar13 + 0x13c) = 0;
      puVar13[0x28] = 0;
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(local_98,iVar12);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar13;
      puVar13[8] = *(undefined8 *)(param_2 + 0x11a18);
      puVar13[10] = uVar11;
      puVar13[0xb] = 0;
      *(undefined4 *)(puVar13 + 0xc) = 0xffff0000;
      puVar13[0x22] = param_4;
      puVar13[0x23] = 0;
      *(undefined2 *)(puVar13 + 0x24) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x124) = 0x21;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145e80d46();
      FUN_1448e935e(uVar2,&local_80,&DAT_14c9d0548,0);
      FUN_145e80d46();
      local_e8 = puVar7;
      local_e0 = &local_80;
      local_d8 = puVar13 + 2;
      FUN_14716f95a(param_1,&local_81,param_2,local_b8);
    }
    iVar12 = *(int *)(*(longlong *)(param_2 + 8) + 0x28);
    bVar15 = iVar12 != 0xc;
    if (DAT_14c760290 - 1U < 2 || (DAT_14c760290 == 3 || !bVar15)) {
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x348);
      lVar3 = *(longlong *)(lVar9 + 0x2a8);
      lVar4 = *(longlong *)(lVar9 + 0x2b0);
      if (lVar4 == 0 || ((iVar12 == 0xc || 1 < DAT_14c760290 - 1U) || lVar3 == 0)) {
        if ((((param_4 == 0) || (DAT_14c760290 != 3 && bVar15 || lVar3 == 0)) || (lVar4 == 0)) ||
           (*(longlong *)(lVar9 + 0x2b8) == 0)) goto LAB_142c32b86;
        bVar15 = bVar15 && DAT_14c760290 == 1;
        puStack_d0 = *(undefined8 **)(lVar9 + 0x2c0);
        local_c8 = *(undefined8 *)(lVar9 + 0x2c8);
        local_d8 = (undefined8 *)*(longlong *)(lVar9 + 0x2b8);
        lStack_c0 = param_4;
      }
      else {
        bVar15 = DAT_14c760290 == 1;
        local_c8 = 0;
        lStack_c0 = 0;
        local_d8 = (undefined8 *)0x0;
        puStack_d0 = (undefined8 *)0x0;
      }
      local_e8 = (undefined8 *)lVar3;
      local_e0 = (undefined8 *)lVar4;
      FUN_142c46e0d(param_1,param_2,bVar15,puVar7);
      goto LAB_142c32b6a;
    }
  }
LAB_142c32b86:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c338d2 FUN_142c338d2 body=69 status=ok
// SIG undefined FUN_142c338d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c338d2(void)

{
  _DAT_14c9d0730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c33914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0738,1);
  return;
}



// FUNCTION 142c33917 FUN_142c33917 body=69 status=ok
// SIG undefined FUN_142c33917(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c33917(void)

{
  _DAT_14c9d0748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c33959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0750,1);
  return;
}



// FUNCTION 142c3395c FUN_142c3395c body=69 status=ok
// SIG undefined FUN_142c3395c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3395c(void)

{
  _DAT_14c9d0758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3399e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0760,1);
  return;
}



// FUNCTION 142c339a1 FUN_142c339a1 body=69 status=ok
// SIG undefined FUN_142c339a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c339a1(void)

{
  _DAT_14c9d0770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c339e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0778,1);
  return;
}



// FUNCTION 142c339e6 FUN_142c339e6 body=69 status=ok
// SIG undefined FUN_142c339e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c339e6(void)

{
  _DAT_14c9d0780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c33a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0788,1);
  return;
}



// FUNCTION 142c33a2b FUN_142c33a2b body=69 status=ok
// SIG undefined FUN_142c33a2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c33a2b(void)

{
  _DAT_14c9d0790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c33a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d0798,1);
  return;
}



// FUNCTION 142c33a70 FUN_142c33a70 body=69 status=ok
// SIG undefined FUN_142c33a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c33a70(void)

{
  _DAT_14c9d07a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c33ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d07a8,1);
  return;
}



// FUNCTION 142c33b39 FUN_142c33b39 body=12364 status=ok
// SIG undefined FUN_142c33b39(void)

void FUN_142c33b39(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

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
  undefined1 **ppuVar16;
  bool bVar17;
  wchar_t wVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  char cVar21;
  uint uVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  size_t sVar28;
  undefined4 uVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  undefined8 *puVar34;
  wchar_t **ppwVar35;
  wchar_t **ppwVar36;
  int iVar37;
  longlong lVar38;
  undefined8 *puVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  undefined4 *puVar42;
  wchar_t *pwVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  longlong lVar47;
  longlong *plVar48;
  float fVar49;
  undefined1 auStack_558 [32];
  undefined1 **local_538;
  wchar_t **local_530;
  undefined4 *local_528;
  ulonglong *local_520;
  undefined8 *local_518;
  wchar_t *local_510;
  wchar_t *local_508;
  wchar_t *local_500;
  wchar_t *local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  wchar_t *local_4e0;
  longlong local_4d8;
  wchar_t *local_4d0;
  wchar_t **local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  wchar_t *local_498;
  undefined8 local_490;
  undefined1 *local_484;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  wchar_t *pwStack_460;
  undefined *local_458;
  longlong local_450;
  wchar_t *local_448;
  wchar_t *pwStack_440;
  undefined *local_438;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined1 local_128 [8];
  int local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4a8 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar44 = *param_3;
    lVar47 = (longlong)(int)param_3[1] * 0x13c10 + lVar44;
    ppwVar35 = (wchar_t **)(param_4 + 0x98);
    local_520 = (ulonglong *)(param_1 + 0x70);
    local_4d8 = param_1 + 0x98;
    local_4b8 = param_1 + 0x168;
    local_4e8 = param_1 + 0x198;
    local_4f0 = lVar47;
    local_4c8 = ppwVar35;
    local_4a0 = param_4;
    do {
      if ((((*(longlong *)
              (&DAT_14ca814b0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
              0x3c) != DAT_14ca80038) ||
           ((*(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) * 0x3c +
                      3) & 1) != 0)) && (*(longlong *)(param_4 + 0x60) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_4 + 0x60) + 8))) {
        local_4d0 = *(wchar_t **)(*(longlong *)(lVar44 + 8) + 0x348);
        if (DAT_14c9d2488 != (code *)0x0) {
          (*DAT_14c9d2488)(param_1,7,param_4);
        }
        uVar22 = FUN_14352174c(lVar44);
        puVar19 = local_520;
        puVar26 = (undefined8 *)(ulonglong)uVar22;
        if (((char)uVar22 == '\t') &&
           ((*(longlong *)
              (&DAT_14ca814b0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
              0x3c) != DAT_14ca80038 ||
            ((*(byte *)((longlong)&DAT_14ca814d0 +
                       (ulonglong)
                       *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) * 0x3c
                       + 3) & 1) != 0)))) {
          DAT_14ca4d32c = DAT_14ca4d32c + 1000;
          DAT_14ca4d330 = DAT_14ca4d330 + 64000;
          DAT_14ca4d100 = 1;
          if (*(char *)(lVar44 + 0x13870) == '\x01') {
            puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar41 = puVar39 + 0x12;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0xa0);
              puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
              puVar41 = puVar39 + 0x12;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar41;
            *puVar39 = &PTR_FUN_14a21d1c0;
            puVar39[2] = 0;
            *(undefined1 *)(puVar39 + 3) = 1;
            puVar39[4] = 0;
            *(undefined1 *)(puVar39 + 5) = 1;
            puVar39[0xc] = 0;
            puVar39[6] = 0;
            puVar39[7] = 0;
            *(undefined1 *)(puVar39 + 0xd) = 1;
            puVar39[0xe] = 0;
            puVar39[0x10] = 0;
            *(undefined1 *)(puVar39 + 0x11) = 1;
            iVar46 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
              FUN_1448cfae8(local_4d8,iVar46);
            }
            local_4b0 = lVar44 + 0x13870;
            local_518 = puVar39 + 2;
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
            lVar47 = FUN_1447e4f80();
            cVar21 = *(char *)(lVar47 + 0x41);
            if (*(char *)(lVar47 + 0x41) == '\x03') {
              cVar21 = '\x02';
            }
            puVar39[0xc] = *(undefined8 *)(lVar44 + 0x18);
            *(char *)(puVar39 + 0xd) = cVar21;
            uVar27 = *(undefined8 *)(lVar44 + 0x11a00);
            lVar47 = FUN_144a81af4();
            cVar21 = *(char *)(lVar47 + 0x41);
            if (cVar21 == '\x03') {
              cVar21 = '\x02';
            }
            puVar39[0x10] = uVar27;
            *(char *)(puVar39 + 0x11) = cVar21;
            uVar27 = *(undefined8 *)(*ppwVar35 + 0x42);
            fVar49 = (float)(int)uVar27;
            *(float *)(puVar39 + 8) = fVar49;
            *(float *)((longlong)puVar39 + 0x44) = (float)(int)((ulonglong)uVar27 >> 0x20);
            *(undefined4 *)(puVar39 + 10) = 8;
            fVar49 = fVar49 * 0.125;
            iVar46 = (int)ROUND(fVar49 + fVar49 + -0.5) >> 1;
            puVar39[9] = CONCAT44(iVar46,iVar46);
            uVar27 = *(undefined8 *)(local_4d0 + 0xcc);
            lVar47 = FUN_14482e3b2();
            cVar21 = *(char *)(lVar47 + 0x41);
            if (cVar21 == '\x03') {
              cVar21 = '\x02';
            }
            puVar39[2] = uVar27;
            *(char *)(puVar39 + 3) = cVar21;
            puVar39[0xe] = DAT_14c9c0de0;
            FUN_1472ea582(param_1,local_4b0,puVar39 + 4);
            iVar32 = *(int *)(*ppwVar35 + 0x42);
            iVar37 = *(int *)(*ppwVar35 + 0x44);
            iVar46 = iVar37 + 7;
            iVar37 = iVar37 + 0xe;
            if (-1 < iVar46) {
              iVar37 = iVar46;
            }
            iVar46 = iVar32 + 7;
            iVar32 = iVar32 + 0xe;
            if (-1 < iVar46) {
              iVar32 = iVar46;
            }
            DAT_14ca4d330 = DAT_14ca4d330 + (iVar32 >> 3) * (iVar37 >> 3);
            uVar27 = *(undefined8 *)(lVar44 + 0x13818);
            FUN_145e812b6();
            FUN_1448e935e(uVar27,&local_448,&DAT_14c9d1038,0);
            FUN_145e812b6();
            local_468 = (wchar_t *)CONCAT44(iVar37 >> 3,iVar32 >> 3);
            pwStack_460 = (wchar_t *)CONCAT44(pwStack_460._4_4_,1);
            local_538 = (undefined1 **)&local_468;
            FUN_147172267(param_1,&local_478,&local_448);
            lVar47 = local_4f0;
          }
        }
        iVar46 = *(int *)(lVar44 + 0x3d38);
        if ((longlong)iVar46 != 0) {
          lVar38 = *(longlong *)(lVar44 + 0x3d30);
          lVar33 = 0;
          do {
            lVar31 = *(longlong *)(lVar38 + lVar33);
            lVar30 = *(longlong *)(lVar31 + 0xa8);
            if (lVar30 == 0) {
              lVar30 = lVar31;
            }
            if (*(char *)(*(longlong *)(lVar30 + 0x40) + 0x4e8) == '\x01') {
              FUN_142c494fb(param_1,lVar44);
            }
            lVar33 = lVar33 + 0x18;
          } while ((longlong)iVar46 * 0x18 != lVar33);
        }
        iVar46 = *(int *)(lVar44 + 0x3d48);
        if ((longlong)iVar46 != 0) {
          lVar38 = *(longlong *)(lVar44 + 0x3d40);
          lVar33 = 0;
          do {
            lVar31 = *(longlong *)(lVar38 + lVar33);
            lVar30 = *(longlong *)(lVar31 + 0xa8);
            if (lVar30 == 0) {
              lVar30 = lVar31;
            }
            if (*(char *)(*(longlong *)(lVar30 + 0x40) + 0x4e8) == '\x01') {
              FUN_142c494fb(param_1,lVar44);
            }
            lVar33 = lVar33 + 0x18;
          } while ((longlong)iVar46 * 0x18 != lVar33);
        }
        param_4 = local_4a0;
        if (*(char *)(lVar44 + 0x11a08) != '\0') {
          local_4b0 = *(longlong *)(lVar44 + 0x30f8);
          local_490 = *(undefined8 *)(lVar44 + 0x3100);
          local_498 = *ppwVar35;
          if (DAT_14c9d0768 < 1) {
            lVar38 = *(longlong *)(lVar44 + 0x11cf0);
            lVar33 = *(longlong *)(lVar44 + 0x11cf8);
            lVar31 = *(longlong *)(lVar44 + 0x11d00);
            lVar30 = *(longlong *)(lVar44 + 0x11d08);
            if ((lVar31 != 0 && (lVar33 != 0 && lVar38 != 0)) && lVar30 != 0) goto LAB_142c33e93;
          }
          else {
            FUN_14494b062(&local_448,param_1,*(undefined8 *)(*(longlong *)(lVar44 + 8) + 0x348));
            puVar19 = local_520;
            local_500 = *(wchar_t **)(*ppwVar35 + 0x42);
            puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar41 = puVar39 + 0x28;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0x150);
              puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
              puVar41 = puVar39 + 0x28;
            }
            *local_520 = (ulonglong)puVar41;
            *puVar39 = &PTR_FUN_14a21d208;
            lVar47 = 0x52;
            do {
              puVar41 = (undefined8 *)((longlong)puVar39 + lVar47 + -0x12);
              *puVar41 = 0;
              puVar41[1] = 0;
              *(undefined4 *)((longlong)puVar39 + lVar47 + -2) = 0xffff0000;
              lVar47 = lVar47 + 0x18;
            } while (lVar47 != 0x112);
            *(undefined4 *)((longlong)puVar39 + 0x114) = 0;
            puVar39[0x20] = 0;
            puVar39[0x21] = 0;
            *(undefined2 *)(puVar39 + 0x22) = 0;
            *(undefined4 *)(puVar39 + 0x23) = 0xffffffff;
            *(undefined4 *)((longlong)puVar39 + 0x11c) = 0xffffffff;
            *(undefined4 *)(puVar39 + 0x24) = 0xffffffff;
            *(undefined4 *)((longlong)puVar39 + 0x124) = 0xffffffff;
            *(undefined4 *)(puVar39 + 0x25) = 0;
            *(undefined2 *)((longlong)puVar39 + 300) = 0;
            puVar39[0x26] = 0;
            iVar46 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
            local_518 = puVar26;
            if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
              FUN_1448cfae8(local_4d8,iVar46);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
            pwVar23 = (wchar_t *)(puVar39 + 2);
            puVar39[2] = *(undefined8 *)(lVar44 + 0x23d0);
            puVar39[3] = 0x640000000a;
            puVar39[4] = 0x10000000100;
            puVar39[5] = *(undefined8 *)(*ppwVar35 + 0x42);
            FUN_14717f380(&local_468);
            *(uint *)(puVar39 + 6) =
                 (uint)local_468._5_1_ << 6 |
                 (uint)local_468._3_1_ << 4 |
                 (uint)(byte)local_468 + (uint)local_468._1_1_ * 2 + (uint)local_468._2_1_ * 4 +
                 (uint)local_468._4_1_ * 8;
            *(undefined4 *)((longlong)puVar39 + 0x34) = DAT_14c76029c;
            *(undefined4 *)(puVar39 + 7) = DAT_14c7602a0;
            *(undefined4 *)((longlong)puVar39 + 0x3c) = DAT_14c7602a4;
            puVar39[8] = *ppwVar35;
            puVar39[9] = 0;
            *(undefined4 *)(puVar39 + 10) = 0xffff0001;
            uVar27 = *(undefined8 *)(lVar44 + 0x13818);
            uVar25 = FUN_1417ed4a6();
            FUN_1448e935e(uVar27,&local_468,uVar25,0);
            FUN_1417ed4a6();
            local_4f8 = local_468;
            local_508 = pwStack_460;
            uVar27 = *(undefined8 *)(lVar44 + 0x13818);
            FUN_145f412c6();
            FUN_1448e935e(uVar27,&local_468,&DAT_14c9d1160,0);
            FUN_145f412c6();
            pwVar43 = local_468;
            local_510 = pwStack_460;
            local_4e0 = *(wchar_t **)(lVar44 + 0x30f8);
            local_4c0 = *(longlong *)(lVar44 + 0x3100);
            FUN_145f41534();
            local_468 = (wchar_t *)0x0;
            pwStack_460 = (wchar_t *)0x0;
            FUN_1448f70da(pwVar43,&DAT_14c9d40b8,pwVar23,&local_468);
            FUN_145f41534();
            FUN_140069376(param_1);
            puVar19 = local_520;
            puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar41 = puVar39 + 0x3f;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0x200);
              puVar39 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar39 + 0x3f;
            }
            puVar26 = local_518;
            *local_520 = (ulonglong)puVar41;
            pwStack_460 = DAT_14c9d4100;
            if (DAT_14c9d4100 != (wchar_t *)0x0) {
              LOCK();
              *(int *)(DAT_14c9d4100 + 4) = *(int *)(DAT_14c9d4100 + 4) + 1;
              UNLOCK();
            }
            local_458 = &DAT_14c9d40b8;
            local_538 = (undefined1 **)CONCAT71(local_538._1_7_,2);
            local_468 = pwVar23;
            FUN_140068f1a(puVar39,&local_478,&local_468);
            *puVar39 = &PTR_FUN_14a21d210;
            puVar39[0x37] = pwVar23;
            puVar39[0x38] = local_4f8;
            puVar39[0x39] = local_508;
            puVar39[0x3a] = pwVar43;
            puVar39[0x3b] = local_510;
            puVar39[0x3c] = local_4e0;
            puVar39[0x3d] = local_4c0;
            puVar39[0x3e] = local_500;
            iVar46 = *(int *)(param_1 + 0x170);
            *(uint *)(param_1 + 0x170) = iVar46 + 1U;
            if (*(uint *)(param_1 + 0x174) < iVar46 + 1U) {
              FUN_14470e57a(local_4b8,iVar46);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar46 * 8) = puVar39;
            *(int *)((longlong)puVar39 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
            FUN_140069100(param_1,puVar39);
            lVar38 = *(longlong *)(lVar44 + 0x11cf0);
            lVar33 = *(longlong *)(lVar44 + 0x11cf8);
            lVar31 = *(longlong *)(lVar44 + 0x11d00);
            lVar30 = *(longlong *)(lVar44 + 0x11d08);
            lVar47 = local_4f0;
LAB_142c33e93:
            if (((lVar38 != 0) && (lVar33 != 0)) && ((lVar31 != 0 && (lVar30 != 0)))) {
              FUN_14494b062(&local_448,param_1,*(undefined8 *)(*(longlong *)(lVar44 + 8) + 0x348));
              puVar19 = local_520;
              local_518 = *(undefined8 **)(*ppwVar35 + 0x42);
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar41 = puVar39 + 0x2e;
              if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                FUN_140023dd8(local_520,0x180);
                puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
                puVar41 = puVar39 + 0x2e;
              }
              *local_520 = (ulonglong)puVar41;
              *puVar39 = &PTR_FUN_14a21d228;
              puVar39[0xc] = 0;
              puVar39[3] = 0;
              puVar39[4] = 0;
              puVar39[5] = 0;
              puVar39[6] = 0;
              *(undefined1 *)(puVar39 + 0xd) = 1;
              lVar47 = 0x82;
              do {
                puVar41 = (undefined8 *)((longlong)puVar39 + lVar47 + -0x12);
                *puVar41 = 0;
                puVar41[1] = 0;
                *(undefined4 *)((longlong)puVar39 + lVar47 + -2) = 0xffff0000;
                lVar47 = lVar47 + 0x18;
              } while (lVar47 != 0x142);
              *(undefined4 *)((longlong)puVar39 + 0x144) = 0;
              puVar39[0x26] = 0;
              puVar39[0x27] = 0;
              *(undefined2 *)(puVar39 + 0x28) = 0;
              *(undefined4 *)(puVar39 + 0x29) = 0xffffffff;
              *(undefined4 *)((longlong)puVar39 + 0x14c) = 0xffffffff;
              *(undefined4 *)(puVar39 + 0x2a) = 0xffffffff;
              *(undefined4 *)((longlong)puVar39 + 0x154) = 0xffffffff;
              *(undefined4 *)(puVar39 + 0x2b) = 0;
              *(undefined2 *)((longlong)puVar39 + 0x15c) = 0;
              puVar39[0x2c] = 0;
              iVar46 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
                FUN_1448cfae8(local_4d8,iVar46);
              }
              pwVar23 = (wchar_t *)(puVar39 + 2);
              *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
              FUN_14716af24(param_1,lVar44 + 0x11cf0,pwVar23);
              lVar47 = FUN_1447e4f80();
              cVar21 = *(char *)(lVar47 + 0x41);
              if (*(char *)(lVar47 + 0x41) == '\x03') {
                cVar21 = '\x02';
              }
              puVar39[0xc] = *(undefined8 *)(lVar44 + 0x18);
              *(char *)(puVar39 + 0xd) = cVar21;
              puVar39[8] = 0x6400000064;
              puVar39[9] = 0x10000000100;
              puVar39[10] = *(undefined8 *)(*ppwVar35 + 0x42);
              FUN_14717f380(&local_468);
              *(uint *)(puVar39 + 0xb) =
                   (uint)local_468._5_1_ << 6 |
                   (uint)local_468._3_1_ << 4 |
                   (uint)(byte)local_468 + (uint)local_468._1_1_ * 2 + (uint)local_468._2_1_ * 4 +
                   (uint)local_468._4_1_ * 8;
              *(undefined4 *)((longlong)puVar39 + 0x5c) = DAT_14c7602a4;
              puVar39[0xe] = *ppwVar35;
              puVar39[0xf] = 0;
              *(undefined4 *)(puVar39 + 0x10) = 0xffff0001;
              uVar27 = *(undefined8 *)(lVar44 + 0x13818);
              uVar25 = FUN_1417ed4a6();
              FUN_1448e935e(uVar27,&local_468,uVar25,0);
              FUN_1417ed4a6();
              local_508 = local_468;
              local_500 = pwStack_460;
              uVar27 = *(undefined8 *)(lVar44 + 0x13818);
              FUN_145f67c70();
              FUN_1448e935e(uVar27,&local_468,&DAT_14c9d1288,0);
              FUN_145f67c70();
              pwVar43 = local_468;
              local_4f8 = pwStack_460;
              uVar27 = *(undefined8 *)(lVar44 + 0x30f8);
              local_510 = *(wchar_t **)(lVar44 + 0x3100);
              FUN_145f67ede();
              local_468 = (wchar_t *)0x0;
              pwStack_460 = (wchar_t *)0x0;
              FUN_1448f70da(pwVar43,&DAT_14c9d4140,pwVar23,&local_468);
              FUN_145f67ede();
              FUN_140069376(param_1);
              puVar19 = local_520;
              puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar41 = puVar39 + 0x3f;
              if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                FUN_140023dd8(local_520,0x200);
                puVar39 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar39 + 0x3f;
              }
              *local_520 = (ulonglong)puVar41;
              pwStack_460 = DAT_14c9d4188;
              if (DAT_14c9d4188 != (wchar_t *)0x0) {
                LOCK();
                *(int *)(DAT_14c9d4188 + 4) = *(int *)(DAT_14c9d4188 + 4) + 1;
                UNLOCK();
              }
              local_458 = &DAT_14c9d4140;
              local_538 = (undefined1 **)CONCAT71(local_538._1_7_,2);
              local_468 = pwVar23;
              FUN_140068f1a(puVar39,&local_478,&local_468);
              *puVar39 = &PTR_FUN_14a21d230;
              puVar39[0x37] = pwVar23;
              puVar39[0x38] = local_508;
              puVar39[0x39] = local_500;
              puVar39[0x3a] = pwVar43;
              puVar39[0x3b] = local_4f8;
              puVar39[0x3c] = uVar27;
              puVar39[0x3d] = local_510;
              puVar39[0x3e] = local_518;
              iVar46 = *(int *)(param_1 + 0x170);
              *(uint *)(param_1 + 0x170) = iVar46 + 1U;
              if (*(uint *)(param_1 + 0x174) < iVar46 + 1U) {
                FUN_14470e57a(local_4b8,iVar46);
              }
              *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar46 * 8) = puVar39;
              *(int *)((longlong)puVar39 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
              FUN_140069100(param_1,puVar39);
              lVar47 = local_4f0;
            }
          }
          if ((((*(char *)(lVar44 + 0x11d30) == '\x01') &&
               (lVar47 = local_4f0, lVar44 != 0 && local_4a8 != 0)) &&
              (*(longlong *)(lVar44 + 0x11a00) != 0)) &&
             (((*(longlong *)
                 (&DAT_14ca814b0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
                 0x3c) != DAT_14ca80038 ||
               ((*(byte *)((longlong)&DAT_14ca814d0 +
                          (ulonglong)
                          *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
                          0x3c + 3) & 1) != 0)) && ((longlong)*(int *)(lVar44 + 0x11d40) != 0)))) {
            lVar47 = *(longlong *)(lVar44 + 0x11d38);
            lVar38 = (longlong)*(int *)(lVar44 + 0x11d40) * 0x350;
            iVar46 = 0;
            do {
              FUN_147172bc8(&local_448,lVar47);
              iVar46 = iVar46 + local_120;
              FUN_147172d1a();
              ppwVar35 = local_4c8;
              lVar47 = lVar47 + 0x350;
              lVar38 = lVar38 + -0x350;
            } while (lVar38 != 0);
            lVar47 = local_4f0;
            if (iVar46 != 0) {
              DAT_14ca4d32c = DAT_14ca4d32c + 2000;
              DAT_14ca4d330 = DAT_14ca4d330 + 2000;
              DAT_14ca4d100 = 1;
              if ((*(char *)(lVar44 + 0x13870) == '\x01') &&
                 (local_450 = param_1, (longlong)*(int *)(lVar44 + 0x11d40) != 0)) {
                local_4c0 = lVar44 + 0x13870;
                puVar41 = *(undefined8 **)(lVar44 + 0x11d38);
                pwVar23 = (wchar_t *)((longlong)*(int *)(lVar44 + 0x11d40) * 0x350);
                do {
                  local_518 = puVar41;
                  local_500 = pwVar23;
                  FUN_147172bc8(&local_448);
                  lVar47 = FUN_142c4b7ea(&local_450,local_128);
                  local_4f8 = (wchar_t *)FUN_142c4b7ea(&local_450,local_118);
                  local_538 = (undefined1 **)(ulonglong)(uint)(local_100 * 4);
                  local_458 = (undefined *)0x0;
                  pwStack_460 = (wchar_t *)CONCAT44(pwStack_460._4_4_,0x4109);
                  local_468 = (wchar_t *)CONCAT44(local_100,4);
                  local_530 = (wchar_t **)((ulonglong)local_530 & 0xffffffffffffff00);
                  local_508 = (wchar_t *)
                              FUN_1400489e9(param_1,L"Hair.Debug.InstanceIntersection",&local_468,
                                            local_108);
                  puVar19 = local_520;
                  puVar39 = (undefined8 *)
                            (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar41 = puVar39 + 0x2c;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                    FUN_140023dd8(local_520,0x170);
                    puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
                    puVar41 = puVar39 + 0x2c;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar41;
                  *puVar39 = &PTR_FUN_14a21d2c0;
                  puVar39[0x24] = 0;
                  puVar39[0x20] = 0;
                  puVar39[0x21] = 0;
                  puVar39[0x22] = 0;
                  *(undefined1 *)(puVar39 + 0x25) = 1;
                  puVar39[0x26] = 0;
                  *(undefined1 *)(puVar39 + 0x27) = 1;
                  puVar39[0x28] = 0;
                  puVar39[0x29] = 0;
                  puVar39[0x2a] = 0;
                  *(undefined1 *)(puVar39 + 0x2b) = 1;
                  iVar32 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar32 + 1U;
                  if (*(uint *)(param_1 + 0xa4) < iVar32 + 1U) {
                    FUN_1448cfae8(local_4d8,iVar32);
                  }
                  puVar19 = local_520;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar32 * 8) = puVar39;
                  *(int *)(puVar39 + 2) = iVar46;
                  *(undefined4 *)(puVar39 + 5) = local_340;
                  puVar39[4] = local_348;
                  puVar39[6] = local_33c;
                  *(undefined4 *)(puVar39 + 7) = local_334;
                  *(float *)(puVar39 + 8) = (float)local_3c8;
                  *(float *)((longlong)puVar39 + 0x44) = (float)local_3c0;
                  *(float *)(puVar39 + 9) = (float)local_3b8;
                  *(float *)((longlong)puVar39 + 0x4c) = (float)local_3b0;
                  *(float *)(puVar39 + 10) = (float)local_3a8;
                  *(float *)((longlong)puVar39 + 0x54) = (float)local_3a0;
                  *(float *)(puVar39 + 0xb) = (float)local_398;
                  *(float *)((longlong)puVar39 + 0x5c) = (float)local_390;
                  *(float *)(puVar39 + 0xc) = (float)local_388;
                  *(float *)((longlong)puVar39 + 100) = (float)local_380;
                  *(float *)(puVar39 + 0xd) = (float)local_378;
                  *(float *)((longlong)puVar39 + 0x6c) = (float)local_370;
                  *(float *)(puVar39 + 0xe) = (float)local_368;
                  *(float *)((longlong)puVar39 + 0x74) = (float)local_360;
                  *(float *)(puVar39 + 0xf) = (float)local_358;
                  *(float *)((longlong)puVar39 + 0x7c) = (float)local_350;
                  dVar1 = *(double *)(lVar44 + 0xab8);
                  dVar2 = *(double *)(lVar44 + 0xac0);
                  dVar3 = *(double *)(lVar44 + 0xac8);
                  dVar4 = *(double *)(lVar44 + 0xad0);
                  dVar5 = *(double *)(lVar44 + 0xad8);
                  dVar6 = *(double *)(lVar44 + 0xae0);
                  dVar7 = *(double *)(lVar44 + 0xae8);
                  dVar8 = *(double *)(lVar44 + 0xaf0);
                  dVar9 = *(double *)(lVar44 + 0xaf8);
                  dVar10 = *(double *)(lVar44 + 0xb00);
                  dVar11 = *(double *)(lVar44 + 0xb08);
                  dVar12 = *(double *)(lVar44 + 0xb10);
                  dVar13 = *(double *)(lVar44 + 0xb18);
                  dVar14 = *(double *)(lVar44 + 0xb20);
                  dVar15 = *(double *)(lVar44 + 0xb28);
                  *(float *)(puVar39 + 0x10) = (float)*(double *)(lVar44 + 0xab0);
                  *(float *)((longlong)puVar39 + 0x84) = (float)dVar1;
                  *(float *)(puVar39 + 0x11) = (float)dVar2;
                  *(float *)((longlong)puVar39 + 0x8c) = (float)dVar3;
                  *(float *)(puVar39 + 0x12) = (float)dVar4;
                  *(float *)((longlong)puVar39 + 0x94) = (float)dVar5;
                  *(float *)(puVar39 + 0x13) = (float)dVar6;
                  *(float *)((longlong)puVar39 + 0x9c) = (float)dVar7;
                  *(float *)(puVar39 + 0x14) = (float)dVar8;
                  *(float *)((longlong)puVar39 + 0xa4) = (float)dVar9;
                  *(float *)(puVar39 + 0x15) = (float)dVar10;
                  *(float *)((longlong)puVar39 + 0xac) = (float)dVar11;
                  *(float *)(puVar39 + 0x16) = (float)dVar12;
                  *(float *)((longlong)puVar39 + 0xb4) = (float)dVar13;
                  *(float *)(puVar39 + 0x17) = (float)dVar14;
                  *(float *)((longlong)puVar39 + 0xbc) = (float)dVar15;
                  local_4e0 = (wchar_t *)
                              CONCAT44(local_4e0._4_4_,(float)*(double *)(lVar44 + 0xb30));
                  dVar1 = *(double *)(lVar44 + 0xb38);
                  dVar2 = *(double *)(lVar44 + 0xb40);
                  dVar3 = *(double *)(lVar44 + 0xb48);
                  dVar4 = *(double *)(lVar44 + 0xb50);
                  dVar5 = *(double *)(lVar44 + 0xb58);
                  dVar6 = *(double *)(lVar44 + 0xb60);
                  dVar7 = *(double *)(lVar44 + 0xb68);
                  dVar8 = *(double *)(lVar44 + 0xb70);
                  dVar9 = *(double *)(lVar44 + 0xb78);
                  dVar10 = *(double *)(lVar44 + 0xb80);
                  dVar11 = *(double *)(lVar44 + 0xb88);
                  dVar12 = *(double *)(lVar44 + 0xb90);
                  dVar13 = *(double *)(lVar44 + 0xb98);
                  dVar14 = *(double *)(lVar44 + 0xba0);
                  dVar15 = *(double *)(lVar44 + 0xba8);
                  local_510 = (wchar_t *)CONCAT44(local_510._4_4_,(float)dVar15);
                  *(float *)(puVar39 + 0x18) = (float)*(double *)(lVar44 + 0xb30);
                  *(float *)((longlong)puVar39 + 0xc4) = (float)dVar1;
                  *(float *)(puVar39 + 0x19) = (float)dVar2;
                  *(float *)((longlong)puVar39 + 0xcc) = (float)dVar3;
                  *(float *)(puVar39 + 0x1a) = (float)dVar4;
                  *(float *)((longlong)puVar39 + 0xd4) = (float)dVar5;
                  *(float *)(puVar39 + 0x1b) = (float)dVar6;
                  *(float *)((longlong)puVar39 + 0xdc) = (float)dVar7;
                  *(float *)(puVar39 + 0x1c) = (float)dVar8;
                  *(float *)((longlong)puVar39 + 0xe4) = (float)dVar9;
                  *(float *)(puVar39 + 0x1d) = (float)dVar10;
                  *(float *)((longlong)puVar39 + 0xec) = (float)dVar11;
                  *(float *)(puVar39 + 0x1e) = (float)dVar12;
                  *(float *)((longlong)puVar39 + 0xf4) = (float)dVar13;
                  *(float *)(puVar39 + 0x1f) = (float)dVar14;
                  *(float *)((longlong)puVar39 + 0xfc) = (float)dVar15;
                  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                    FUN_140023dd8(local_520,0x50);
                    puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                    puVar41 = puVar34 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar41;
                  puVar34[1] = *(undefined8 *)(lVar47 + 8);
                  puVar34[2] = 0;
                  *(undefined1 *)(puVar34 + 3) = 3;
                  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                  *puVar34 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar34 + 5) = 0xd;
                  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                  puVar34[7] = 0;
                  puVar34[8] = lVar47;
                  iVar32 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar32 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar32 + 1U) {
                    FUN_1447568fc(local_4e8,iVar32);
                  }
                  puVar19 = local_520;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar32 * 8) = puVar34;
                  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  puVar39[0x21] = puVar34;
                  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                    FUN_140023dd8(local_520,0x50);
                    puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                    puVar41 = puVar34 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar41;
                  puVar34[1] = *(undefined8 *)((longlong)local_4f8 + 8);
                  puVar34[2] = 0;
                  *(undefined1 *)(puVar34 + 3) = 3;
                  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                  *puVar34 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar34 + 5) = 0xd;
                  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                  puVar34[7] = 0;
                  puVar34[8] = local_4f8;
                  iVar32 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar32 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar32 + 1U) {
                    FUN_1447568fc(local_4e8,iVar32);
                  }
                  puVar19 = local_520;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar32 * 8) = puVar34;
                  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  puVar39[0x20] = puVar34;
                  puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                    FUN_140023dd8(local_520,0x50);
                    puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                    puVar41 = puVar34 + 9;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar41;
                  puVar34[1] = *(undefined8 *)((longlong)local_508 + 8);
                  puVar34[2] = 0;
                  *(undefined1 *)(puVar34 + 3) = 3;
                  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                  *puVar34 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar34 + 5) = 0x1c;
                  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                  puVar34[7] = 0;
                  puVar34[8] = local_508;
                  iVar32 = *(int *)(param_1 + 0x1a0);
                  *(uint *)(param_1 + 0x1a0) = iVar32 + 1U;
                  if (*(uint *)(param_1 + 0x1a4) < iVar32 + 1U) {
                    FUN_1447568fc(local_4e8,iVar32);
                  }
                  local_4f8 = (wchar_t *)(puVar39 + 0x26);
                  local_508 = (wchar_t *)(puVar39 + 2);
                  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar32 * 8) = puVar34;
                  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                  puVar39[0x22] = puVar34;
                  lVar47 = FUN_1447e4f80();
                  cVar21 = *(char *)(lVar47 + 0x41);
                  if (*(char *)(lVar47 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar39[0x24] = *(undefined8 *)(lVar44 + 0x18);
                  *(char *)(puVar39 + 0x25) = cVar21;
                  FUN_1472ea582(param_1,local_4c0,local_4f8);
                  uVar27 = *(undefined8 *)(lVar44 + 0x11a00);
                  lVar47 = FUN_144a81af4();
                  cVar21 = *(char *)(lVar47 + 0x41);
                  if (cVar21 == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar39[0x2a] = uVar27;
                  *(char *)(puVar39 + 0x2b) = cVar21;
                  uVar27 = *(undefined8 *)(lVar44 + 0x13818);
                  FUN_145f28cb4();
                  FUN_1448e935e(uVar27,&local_468,&DAT_14c9d0a70,0);
                  FUN_145f28cb4();
                  puVar20 = (undefined1 *)local_468;
                  local_478 = (undefined1 *)local_468;
                  local_470 = pwStack_460;
                  FUN_145f28f22();
                  local_468 = (wchar_t *)0x0;
                  pwStack_460 = (wchar_t *)0x0;
                  FUN_1448f70da(puVar20,&DAT_14c9d3d88,local_508,&local_468);
                  local_484 = &DAT_100000001;
                  local_47c = 1;
                  local_538 = &local_484;
                  FUN_147172d83(param_1,&local_468,&local_478);
                  FUN_147172d1a();
                  puVar41 = local_518 + 0x6a;
                  pwVar23 = local_500 + -0x1a8;
                  lVar47 = local_4f0;
                } while (pwVar23 != (wchar_t *)0x0);
              }
            }
          }
          bVar45 = (byte)puVar26;
          puVar41 = (undefined8 *)((ulonglong)puVar26 & 0xff);
          if (bVar45 == 0x15) {
            if ((longlong)*(int *)(lVar44 + 0x11b78) != 0) {
              plVar40 = *(longlong **)(lVar44 + 0x11b70);
              plVar48 = plVar40 + (longlong)*(int *)(lVar44 + 0x11b78) * 0xf;
              local_518 = puVar41;
              do {
                if (((*(longlong *)(lVar44 + 0x11b90) != 0) &&
                    (*(longlong *)(lVar44 + 0x11b98) != 0)) && ((longlong)(int)plVar40[1] != 0)) {
                  lVar47 = *plVar40;
                  lVar38 = (longlong)(int)plVar40[1] * 0x88;
                  iVar46 = DAT_14c9d0740;
                  do {
                    if (*(int *)(lVar47 + 0x10) == iVar46) {
                      local_448 = (wchar_t *)0x0;
                      pwStack_440 = (wchar_t *)0x0;
                      local_530 = local_4c8;
                      local_538 = (undefined1 **)(lVar44 + 0x11b80);
                      FUN_142c4a1e2(param_1,lVar44,&local_448);
                      iVar46 = DAT_14c9d0740;
                    }
                    lVar47 = lVar47 + 0x88;
                    lVar38 = lVar38 + -0x88;
                  } while (lVar38 != 0);
                }
                plVar40 = plVar40 + 0xf;
              } while (plVar40 != plVar48);
              goto LAB_142c35582;
            }
LAB_142c355c1:
            if (((*(longlong *)
                   (&DAT_14ca814b0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2)
                   * 0x3c) != DAT_14ca80038) ||
                ((*(byte *)((longlong)&DAT_14ca814d0 +
                           (ulonglong)
                           *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
                           0x3c + 3) & 1) != 0)) && (*(int *)(lVar44 + 0x11b80) != 0)) {
              DAT_14ca4d32c = DAT_14ca4d32c + 2000;
              DAT_14ca4d330 = DAT_14ca4d330 + *(int *)(lVar44 + 0x11b80) * 0x40;
              DAT_14ca4d100 = 1;
              if (*(char *)(lVar44 + 0x13870) == '\x01') {
                local_518 = puVar41;
                FUN_14494b062(&local_448,param_1,*(undefined8 *)(*(longlong *)(lVar44 + 8) + 0x348))
                ;
                puVar19 = local_520;
                uVar27 = *(undefined8 *)(*ppwVar35 + 0x42);
                puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar41 = puVar39 + 0x1c;
                if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                  FUN_140023dd8(local_520,0xf0);
                  puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
                  puVar41 = puVar39 + 0x1c;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar41;
                *puVar39 = &PTR_FUN_14a21d368;
                puVar39[2] = 0;
                puVar39[3] = 0;
                puVar39[4] = 0;
                puVar39[5] = 0;
                puVar39[6] = 0;
                puVar39[7] = 0;
                puVar39[8] = 0;
                puVar39[9] = 0;
                puVar39[10] = 0;
                puVar39[0xb] = 0;
                puVar39[0xc] = 0;
                puVar39[0xd] = 0;
                puVar39[0xe] = 0;
                *(undefined1 *)(puVar39 + 0xf) = 1;
                puVar39[0x16] = 0;
                puVar39[0x10] = 0;
                puVar39[0x11] = 0;
                *(undefined1 *)(puVar39 + 0x17) = 1;
                puVar39[0x18] = 0;
                puVar39[0x19] = 0;
                puVar39[0x1a] = 0;
                iVar46 = *(int *)(param_1 + 0xa0);
                *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
                if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
                  FUN_1448cfae8(local_4d8,iVar46);
                }
                pwVar23 = (wchar_t *)(puVar39 + 2);
                *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
                lVar47 = FUN_1447e4f80();
                puVar19 = local_520;
                cVar21 = *(char *)(lVar47 + 0x41);
                if (*(char *)(lVar47 + 0x41) == '\x03') {
                  cVar21 = '\x02';
                }
                puVar39[0x16] = *(undefined8 *)(lVar44 + 0x18);
                *(char *)(puVar39 + 0x17) = cVar21;
                *(float *)(puVar39 + 0x12) = (float)(int)uVar27;
                *(float *)((longlong)puVar39 + 0x94) = (float)(int)((ulonglong)uVar27 >> 0x20);
                *(undefined4 *)(puVar39 + 0x13) = *(undefined4 *)(lVar44 + 0x11b80);
                *(undefined4 *)((longlong)puVar39 + 0x9c) = *(undefined4 *)(lVar44 + 0x11cd0);
                ppwVar36 = &local_448;
                pwVar43 = pwVar23;
                for (lVar47 = 0xc; lVar47 != 0; lVar47 = lVar47 + -1) {
                  *(wchar_t **)pwVar43 = *ppwVar36;
                  ppwVar36 = ppwVar36 + 1;
                  pwVar43 = pwVar43 + 4;
                }
                *(uint *)(puVar39 + 0x14) = (uint)(0 < DAT_14c760338);
                *(uint *)((longlong)puVar39 + 0xa4) =
                     (uint)(*(longlong *)(lVar44 + 0x11ca8) != 0 &&
                           (*(longlong *)(lVar44 + 0x11c98) != 0 &&
                           *(longlong *)(lVar44 + 0x11c90) != 0));
                puVar39[0x15] = *(undefined8 *)(*(longlong *)(lVar44 + 0x11b90) + 0x84);
                lVar47 = *(longlong *)(lVar44 + 0x11cd8);
                puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar41 = puVar34 + 9;
                local_500 = pwVar23;
                if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                  FUN_140023dd8(local_520,0x50);
                  puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar41;
                puVar34[1] = *(undefined8 *)(lVar47 + 8);
                puVar34[2] = 0;
                *(undefined1 *)(puVar34 + 3) = 3;
                *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                *puVar34 = &PTR_FUN_14a1fb168;
                *(undefined1 *)(puVar34 + 5) = 0x1d;
                *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                puVar34[7] = 0;
                puVar34[8] = lVar47;
                iVar46 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
                  FUN_1447568fc(local_4e8,iVar46);
                }
                puVar19 = local_520;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) = puVar34;
                *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar39[0x18] = puVar34;
                lVar47 = *(longlong *)(lVar44 + 0x11ba0);
                cVar21 = *(char *)(lVar47 + 0x68);
                puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar41 = puVar34 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                  FUN_140023dd8(local_520,0x50);
                  puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar41;
                puVar34[1] = *(undefined8 *)(lVar47 + 8);
                puVar34[2] = 0;
                *(undefined1 *)(puVar34 + 3) = 3;
                *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                *puVar34 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar34 + 5) = cVar21 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                puVar34[7] = 0;
                puVar34[8] = lVar47;
                iVar46 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
                  FUN_1447568fc(local_4e8,iVar46);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) = puVar34;
                *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar39[0x19] = puVar34;
                FUN_1472ea582(param_1,lVar44 + 0x13870,puVar39 + 0xe);
                puVar19 = local_520;
                pwVar23 = *ppwVar35;
                wVar18 = pwVar23[0x4a];
                puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar41 = puVar34 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                  FUN_140023dd8(local_520,0x50);
                  puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar34 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar41;
                puVar34[1] = *(undefined8 *)(pwVar23 + 4);
                puVar34[2] = 0;
                *(undefined1 *)(puVar34 + 3) = 0;
                *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar34 + 5) = 0;
                *puVar34 = &PTR_FUN_14a1fb948;
                *(char *)(puVar34 + 6) = (char)wVar18;
                *(undefined1 *)(puVar34 + 7) = 0;
                *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
                puVar34[8] = pwVar23;
                iVar46 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
                  FUN_1447568fc(local_4e8,iVar46);
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) = puVar34;
                *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar39[0x1a] = puVar34;
                uVar27 = *(undefined8 *)(lVar44 + 0x13818);
                FUN_145f67676();
                FUN_1448e935e(uVar27,&local_468,&DAT_14c9d0de8,0);
                FUN_145f67676();
                local_478 = &DAT_100000001;
                local_470 = CONCAT44(local_470._4_4_,1);
                local_538 = (undefined1 **)&local_478;
                FUN_147173739(param_1,&local_484,&local_468);
                puVar41 = local_518;
                lVar47 = local_4f0;
              }
            }
LAB_142c35622:
            puVar19 = local_520;
            if (bVar45 < 0x24) {
              if ((0x3f3800000U >> ((ulonglong)puVar41 & 0x3f) & 1) == 0) {
                if (puVar41 == (undefined8 *)&DAT_0000001a) goto LAB_142c35ab0;
                if (puVar41 == (undefined8 *)&DAT_00000023) {
                  FUN_142c6016e(param_1,lVar44,ppwVar35);
                }
              }
              else {
                puVar42 = *(undefined4 **)(local_4d0 + 0x100);
                if (((*(longlong *)(lVar44 + 0x11a20) != 0) &&
                    (*(longlong *)(lVar44 + 0x11a68) != 0)) &&
                   (*(longlong *)(lVar44 + 0x11a70) != 0)) {
                  if ((bVar45 == 0x19) && (puVar42 == (undefined4 *)0x0)) goto LAB_142c36004;
                  uVar22 = (int)puVar26 - 0x18;
                  uVar29 = 0;
                  if ((byte)uVar22 < 10) {
                    uVar29 = *(undefined4 *)(&DAT_14a2243f0 + (ulonglong)(uVar22 & 0xff) * 4);
                  }
                  local_510 = (wchar_t *)CONCAT44(local_510._4_4_,uVar29);
                  pwVar23 = *(wchar_t **)(lVar44 + 0x30f8);
                  local_500 = *(wchar_t **)(lVar44 + 0x3100);
                  puVar39 = (undefined8 *)
                            (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar41 = puVar39 + 0x2e;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                    FUN_140023dd8(local_520,0x180);
                    puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
                    puVar41 = puVar39 + 0x2e;
                  }
                  *(undefined8 **)(param_1 + 0x70) = puVar41;
                  *puVar39 = &PTR_FUN_14a21d388;
                  local_508 = (wchar_t *)(puVar39 + 2);
                  local_518 = puVar26;
                  FUN_147173bcc();
                  iVar46 = *(int *)(param_1 + 0xa0);
                  *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
                  if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
                    FUN_1448cfae8(local_4d8,iVar46);
                  }
                  uVar22 = (int)local_500 - (int)pwVar23;
                  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
                  local_4f8 = pwVar23;
                  lVar47 = FUN_1447e4f80();
                  cVar21 = *(char *)(lVar47 + 0x41);
                  if (*(char *)(lVar47 + 0x41) == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar39[10] = *(undefined8 *)(lVar44 + 0x18);
                  *(char *)(puVar39 + 0xb) = cVar21;
                  uVar24 = (longlong)local_500 - ((ulonglong)pwVar23 & 0xffffffff00000000);
                  *(float *)(puVar39 + 2) = (float)(int)uVar22;
                  *(float *)((longlong)puVar39 + 0x14) = (float)(int)(uVar24 >> 0x20);
                  *(undefined4 *)(puVar39 + 3) = 8;
                  uVar27 = *(undefined8 *)(lVar44 + 0x11a00);
                  lVar47 = FUN_144a81af4();
                  cVar21 = *(char *)(lVar47 + 0x41);
                  if (cVar21 == '\x03') {
                    cVar21 = '\x02';
                  }
                  puVar39[0xc] = uVar27;
                  *(char *)(puVar39 + 0xd) = cVar21;
                  puVar39[7] = puVar42;
                  puVar39[8] = DAT_14c9c0de0;
                  *(undefined4 *)((longlong)puVar39 + 0x1c) = local_510._0_4_;
                  *(undefined4 *)(puVar39 + 4) = 0;
                  puVar39[0xe] = *ppwVar35;
                  puVar39[0xf] = 0;
                  *(undefined4 *)(puVar39 + 0x10) = 0xffff0001;
                  uVar27 = *(undefined8 *)(lVar44 + 0x13818);
                  uVar25 = FUN_1417ed4a6();
                  FUN_1448e935e(uVar27,&local_448,uVar25,0);
                  FUN_1417ed4a6();
                  local_4e0 = local_448;
                  local_510 = pwStack_440;
                  uVar27 = *(undefined8 *)(lVar44 + 0x13818);
                  FUN_145f0284a();
                  FUN_1448e935e(uVar27,&local_448,&DAT_14c9d0b98,0);
                  FUN_145f0284a();
                  pwVar43 = pwStack_440;
                  pwVar23 = local_448;
                  FUN_145f02ab8();
                  local_448 = (wchar_t *)0x0;
                  pwStack_440 = (wchar_t *)0x0;
                  FUN_1448f70da(pwVar23,&DAT_14c9d3e10,local_508,&local_448);
                  FUN_145f02ab8();
                  FUN_140069376(param_1);
                  puVar19 = local_520;
                  puVar41 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar26 = puVar41 + 0x3f;
                  if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
                    FUN_140023dd8(local_520,0x200);
                    puVar41 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                    puVar26 = puVar41 + 0x3f;
                  }
                  *local_520 = (ulonglong)puVar26;
                  local_448 = local_508;
                  pwStack_440 = DAT_14c9d3e58;
                  if (DAT_14c9d3e58 != (wchar_t *)0x0) {
                    LOCK();
                    *(int *)(DAT_14c9d3e58 + 4) = *(int *)(DAT_14c9d3e58 + 4) + 1;
                    UNLOCK();
                  }
                  local_438 = &DAT_14c9d3e10;
                  local_538 = (undefined1 **)CONCAT71(local_538._1_7_,2);
                  FUN_140068f1a(puVar41,&local_468,&local_448,1);
                  *puVar41 = &PTR_FUN_14a21d390;
                  puVar41[0x37] = local_508;
                  puVar41[0x38] = local_4e0;
                  puVar41[0x39] = local_510;
                  puVar41[0x3a] = pwVar23;
                  puVar41[0x3b] = pwVar43;
                  puVar41[0x3c] = local_4f8;
                  puVar41[0x3d] = local_500;
                  puVar41[0x3e] = (ulonglong)uVar22 | uVar24 & 0xffffffff00000000;
                  iVar46 = *(int *)(param_1 + 0x170);
                  *(uint *)(param_1 + 0x170) = iVar46 + 1U;
                  if (*(uint *)(param_1 + 0x174) < iVar46 + 1U) {
                    FUN_14470e57a(local_4b8,iVar46);
                  }
                  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar46 * 8) = puVar41;
                  *(int *)((longlong)puVar41 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
                  FUN_140069100(param_1,puVar41);
                  puVar42 = *(undefined4 **)(local_4d0 + 0x100);
                  puVar26 = local_518;
                  lVar47 = local_4f0;
                }
                local_530 = (wchar_t **)(lVar44 + 0x11cd0);
                local_538 = (undefined1 **)(lVar44 + 0x11b70);
                local_528 = puVar42;
                FUN_142c497bc(param_1,local_4a8,lVar44);
                if ((char)puVar26 == '\x1a') {
LAB_142c35ab0:
                  if (((*(longlong *)(lVar44 + 0x11c90) != 0) &&
                      (*(longlong *)(lVar44 + 0x11c98) != 0)) &&
                     ((*(longlong *)(lVar44 + 0x11ca8) != 0 &&
                      ((*(longlong *)
                         (&DAT_14ca814b0 +
                         (ulonglong)
                         *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) *
                         0x3c) != DAT_14ca80038 ||
                       ((*(byte *)((longlong)&DAT_14ca814d0 +
                                  (ulonglong)
                                  *(ushort *)
                                   (&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2) * 0x3c
                                  + 3) & 1) != 0)))))) {
                    DAT_14ca4d32c = DAT_14ca4d32c + 2000;
                    DAT_14ca4d330 = DAT_14ca4d330 + 4000;
                    DAT_14ca4d100 = 1;
                    if (*(char *)(lVar44 + 0x13870) == '\x01') {
                      FUN_14494b062(&local_448,param_1,
                                    *(undefined8 *)(*(longlong *)(lVar44 + 8) + 0x348));
                      lVar47 = local_4f0;
                      if ((longlong)*(int *)(lVar44 + 0x11b78) != 0) {
                        uVar27 = *(undefined8 *)(*ppwVar35 + 0x42);
                        local_500 = (wchar_t *)(lVar44 + 0x13870);
                        local_508 = *(wchar_t **)(lVar44 + 0x11b70);
                        local_4f8 = (wchar_t *)((longlong)*(int *)(lVar44 + 0x11b78) * 0x78);
                        local_4d0 = (wchar_t *)0x0;
                        do {
                          puVar19 = local_520;
                          puVar39 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                          puVar41 = puVar39 + 0x1c;
                          if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                            FUN_140023dd8(local_520,0xf0);
                            puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
                            puVar41 = puVar39 + 0x1c;
                          }
                          *(undefined8 **)(param_1 + 0x70) = puVar41;
                          *puVar39 = &PTR_FUN_14a21d3a8;
                          puVar39[2] = 0;
                          puVar39[3] = 0;
                          puVar39[4] = 0;
                          puVar39[5] = 0;
                          puVar39[6] = 0;
                          puVar39[7] = 0;
                          puVar39[8] = 0;
                          puVar39[9] = 0;
                          puVar39[10] = 0;
                          puVar39[0xb] = 0;
                          puVar39[0xc] = 0;
                          puVar39[0xd] = 0;
                          puVar39[0xe] = 0;
                          *(undefined1 *)(puVar39 + 0xf) = 1;
                          puVar39[0x10] = 0;
                          puVar39[0x11] = 0;
                          puVar39[0x15] = 0;
                          puVar39[0x16] = 0;
                          *(undefined1 *)(puVar39 + 0x17) = 1;
                          puVar39[0x18] = 0;
                          *(undefined1 *)(puVar39 + 0x19) = 1;
                          puVar39[0x1a] = 0;
                          puVar39[0x1b] = 0;
                          iVar46 = *(int *)(param_1 + 0xa0);
                          *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
                          if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
                            FUN_1448cfae8(local_4d8,iVar46);
                          }
                          *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) =
                               puVar39;
                          lVar47 = FUN_1447e4f80();
                          cVar21 = *(char *)(lVar47 + 0x41);
                          if (*(char *)(lVar47 + 0x41) == '\x03') {
                            cVar21 = '\x02';
                          }
                          puVar39[0x18] = *(undefined8 *)(lVar44 + 0x18);
                          *(char *)(puVar39 + 0x19) = cVar21;
                          *(float *)(puVar39 + 0x12) = (float)(int)uVar27;
                          *(float *)((longlong)puVar39 + 0x94) =
                               (float)(int)((ulonglong)uVar27 >> 0x20);
                          ppwVar36 = &local_448;
                          puVar41 = puVar39 + 2;
                          for (lVar47 = 0xc; lVar47 != 0; lVar47 = lVar47 + -1) {
                            *puVar41 = *ppwVar36;
                            ppwVar36 = ppwVar36 + 1;
                            puVar41 = puVar41 + 1;
                          }
                          *(undefined4 *)(puVar39 + 0x13) =
                               *(undefined4 *)((longlong)(local_508 + 0x34) + (longlong)local_4d0);
                          *(undefined4 *)((longlong)puVar39 + 0x9c) =
                               *(undefined4 *)(lVar44 + 0x11b78);
                          *(undefined4 *)(puVar39 + 0x14) = *(undefined4 *)(lVar44 + 0x11bd8);
                          uVar25 = *(undefined8 *)(lVar44 + 0x11c90);
                          local_518 = puVar39 + 2;
                          lVar47 = FUN_1414708b2();
                          puVar19 = local_520;
                          cVar21 = *(char *)(lVar47 + 0x41);
                          if (cVar21 == '\x03') {
                            cVar21 = '\x02';
                          }
                          puVar39[0x16] = uVar25;
                          *(char *)(puVar39 + 0x17) = cVar21;
                          lVar47 = *(longlong *)(lVar44 + 0x11cc0);
                          puVar34 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                          puVar41 = puVar34 + 9;
                          if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                            FUN_140023dd8(local_520,0x50);
                            puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                            puVar41 = puVar34 + 9;
                          }
                          *(undefined8 **)(param_1 + 0x70) = puVar41;
                          puVar34[1] = *(undefined8 *)(lVar47 + 8);
                          puVar34[2] = 0;
                          *(undefined1 *)(puVar34 + 3) = 3;
                          *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                          *puVar34 = &PTR_FUN_14a1fb168;
                          *(undefined1 *)(puVar34 + 5) = 0x1c;
                          *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
                          puVar34[7] = 0;
                          puVar34[8] = lVar47;
                          iVar46 = *(int *)(param_1 + 0x1a0);
                          *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
                          if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
                            FUN_1447568fc(local_4e8,iVar46);
                          }
                          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) =
                               puVar34;
                          *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                          puVar39[0x1a] = puVar34;
                          FUN_1472ea582(param_1,local_500,puVar39 + 0xe);
                          puVar19 = local_520;
                          pwVar23 = *ppwVar35;
                          wVar18 = pwVar23[0x4a];
                          puVar34 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                          puVar41 = puVar34 + 9;
                          if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
                            FUN_140023dd8(local_520,0x50);
                            puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
                            puVar41 = puVar34 + 9;
                          }
                          *(undefined8 **)(param_1 + 0x70) = puVar41;
                          puVar34[1] = *(undefined8 *)(pwVar23 + 4);
                          puVar34[2] = 0;
                          *(undefined1 *)(puVar34 + 3) = 0;
                          *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
                          *(undefined1 *)(puVar34 + 5) = 0;
                          *puVar34 = &PTR_FUN_14a1fb948;
                          *(char *)(puVar34 + 6) = (char)wVar18;
                          *(undefined1 *)(puVar34 + 7) = 0;
                          *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
                          *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
                          puVar34[8] = pwVar23;
                          iVar46 = *(int *)(param_1 + 0x1a0);
                          *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
                          if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
                            FUN_1447568fc(local_4e8,iVar46);
                          }
                          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) =
                               puVar34;
                          *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                          puVar39[0x1b] = puVar34;
                          lVar47 = *(longlong *)(lVar44 + 0x11f50);
                          puVar39[0x15] = lVar47;
                          if (lVar47 == 0) {
                            puVar39[0x15] = local_448;
                          }
                          bVar17 = 0 < DAT_14c9d07b0;
                          uVar25 = *(undefined8 *)(lVar44 + 0x13818);
                          FUN_145e6e71a();
                          FUN_1448e935e(uVar25,&local_468,&DAT_14c9d0f10,bVar17);
                          FUN_145e6e71a();
                          iVar32 = *(int *)(*ppwVar35 + 0x42);
                          iVar37 = *(int *)(*ppwVar35 + 0x44);
                          iVar46 = iVar37 + 7;
                          iVar37 = iVar37 + 0xe;
                          if (-1 < iVar46) {
                            iVar37 = iVar46;
                          }
                          iVar46 = iVar32 + 7;
                          iVar32 = iVar32 + 0xe;
                          if (-1 < iVar46) {
                            iVar32 = iVar46;
                          }
                          local_478 = (undefined1 *)CONCAT44(iVar37 >> 3,iVar32 >> 3);
                          local_470 = CONCAT44(local_470._4_4_,1);
                          local_538 = (undefined1 **)&local_478;
                          FUN_147173c6d(param_1,&local_484,&local_468);
                          local_4d0 = local_4d0 + 0x3c;
                          lVar47 = local_4f0;
                        } while (local_4f8 != local_4d0);
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_518 = puVar41;
            if ((int)puVar41 != 0x13) {
LAB_142c35582:
              ppwVar35 = local_4c8;
              if ((bVar45 == 0x16) && (0 < DAT_14c760338)) {
                if ((longlong)*(int *)(lVar44 + 0x11b78) != 0) {
                  lVar38 = (longlong)*(int *)(lVar44 + 0x11b78) * 0x78;
                  lVar47 = *(longlong *)(lVar44 + 0x11b70) + 0x58;
                  do {
                    local_530 = ppwVar35;
                    local_538 = (undefined1 **)0x0;
                    FUN_142c4a1e2(param_1,lVar44,lVar47,0);
                    lVar47 = lVar47 + 0x78;
                    lVar38 = lVar38 + -0x78;
                  } while (lVar38 != 0);
                }
                FUN_147180620(&local_448,lVar44,lVar44 + 0x30f8);
                local_530 = ppwVar35;
                local_538 = (undefined1 **)0x0;
                FUN_142c4a1e2(param_1,lVar44,&local_448);
              }
              puVar41 = local_518;
              lVar47 = local_4f0;
              if ((bVar45 & 0xfe) == 0x14) goto LAB_142c355c1;
              goto LAB_142c35622;
            }
            local_528 = *(undefined4 **)(local_4d0 + 0x100);
            local_530 = (wchar_t **)(lVar44 + 0x11cd0);
            local_538 = (undefined1 **)(lVar44 + 0x11b70);
            FUN_142c497bc(param_1,local_4a8,lVar44);
            ppwVar35 = local_4c8;
            lVar47 = local_4f0;
          }
LAB_142c36004:
          puVar19 = local_520;
          if (((*(longlong *)(lVar44 + 0x11d10) != 0) && (*(longlong *)(lVar44 + 0x11d18) != 0)) &&
             (*(longlong *)(lVar44 + 0x11d20) != 0)) {
            DAT_14ca4d32c = DAT_14ca4d32c + 0x100;
            DAT_14ca4d100 = 1;
            puVar39 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar41 = puVar39 + 0xe;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0x80);
              puVar39 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
              puVar41 = puVar39 + 0xe;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar41;
            *puVar39 = &PTR_FUN_14a21d3c8;
            puVar39[2] = 0;
            *(undefined1 *)(puVar39 + 3) = 1;
            puVar39[10] = 0;
            puVar39[5] = 0;
            puVar39[6] = 0;
            puVar39[7] = 0;
            puVar39[8] = 0;
            *(undefined1 *)(puVar39 + 0xb) = 1;
            puVar39[0xc] = 0;
            puVar39[0xd] = 0;
            iVar46 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar46 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar46 + 1U) {
              FUN_1448cfae8(local_4d8,iVar46);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar46 * 8) = puVar39;
            uVar22 = FUN_147180cad(*(undefined2 *)
                                    (&DAT_14ca85070 + (longlong)*(int *)(lVar44 + 0x3090) * 2));
            puVar19 = local_520;
            *(float *)(puVar39 + 4) = (float)uVar22;
            *(float *)((longlong)puVar39 + 0x24) =
                 (float)*(uint *)(*(longlong *)(lVar44 + 0x11d20) + 100);
            puVar39[5] = *(undefined8 *)(lVar44 + 0x11d10);
            puVar39[6] = *(undefined8 *)(lVar44 + 0x11d18);
            lVar47 = *(longlong *)(lVar44 + 0x11d20);
            cVar21 = *(char *)(lVar47 + 0x68);
            puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar41 = puVar34 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0x50);
              puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar34 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar41;
            puVar34[1] = *(undefined8 *)(lVar47 + 8);
            puVar34[2] = 0;
            *(undefined1 *)(puVar34 + 3) = 3;
            *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
            *puVar34 = &PTR_FUN_14a1fb168;
            *(byte *)(puVar34 + 5) = cVar21 >> 7 & 0x1c;
            *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
            puVar34[7] = 0;
            puVar34[8] = lVar47;
            iVar46 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
              FUN_1447568fc(local_4e8,iVar46);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) = puVar34;
            *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar39[7] = puVar34;
            lVar47 = FUN_1447e4f80();
            puVar19 = local_520;
            cVar21 = *(char *)(lVar47 + 0x41);
            if (*(char *)(lVar47 + 0x41) == '\x03') {
              cVar21 = '\x02';
            }
            puVar39[2] = *(undefined8 *)(lVar44 + 0x18);
            *(char *)(puVar39 + 3) = cVar21;
            pwVar23 = *ppwVar35;
            wVar18 = pwVar23[0x4a];
            puVar34 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar41 = puVar34 + 9;
            if (*(undefined8 **)(param_1 + 0x78) < puVar41) {
              FUN_140023dd8(local_520,0x50);
              puVar34 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar34 + 9;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar41;
            puVar34[1] = *(undefined8 *)(pwVar23 + 4);
            puVar34[2] = 0;
            *(undefined1 *)(puVar34 + 3) = 0;
            *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar34 + 5) = 0;
            *puVar34 = &PTR_FUN_14a1fb948;
            *(char *)(puVar34 + 6) = (char)wVar18;
            *(undefined1 *)(puVar34 + 7) = 0;
            *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
            puVar34[8] = pwVar23;
            iVar46 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar46 + 1U;
            if (*(uint *)(param_1 + 0x1a4) < iVar46 + 1U) {
              FUN_1447568fc(local_4e8,iVar46);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar46 * 8) = puVar34;
            *(int *)((longlong)puVar34 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
            puVar39[8] = puVar34;
            FUN_1472ea582(param_1,lVar44 + 0x13870,puVar39 + 10);
            uVar27 = *(undefined8 *)(lVar44 + 0x13818);
            FUN_145f418bc();
            FUN_1448e935e(uVar27,&local_448,&DAT_14c9d13b0,0);
            FUN_145f418bc();
            iVar32 = *(int *)(*ppwVar35 + 0x42);
            iVar37 = *(int *)(*ppwVar35 + 0x44);
            iVar46 = iVar37 + 7;
            iVar37 = iVar37 + 0xe;
            if (-1 < iVar46) {
              iVar37 = iVar46;
            }
            iVar46 = iVar32 + 7;
            iVar32 = iVar32 + 0xe;
            if (-1 < iVar46) {
              iVar32 = iVar46;
            }
            local_478 = (undefined1 *)CONCAT44(iVar37 >> 3,iVar32 >> 3);
            local_470 = CONCAT44(local_470._4_4_,1);
            local_538 = (undefined1 **)&local_478;
            FUN_1471721b5(param_1,&local_468,&local_448);
            lVar47 = local_4f0;
          }
          param_4 = local_4a0;
          if ((char)puVar26 != '\0') {
            local_530 = (wchar_t **)
                        CONCAT44(local_530._4_4_,*(undefined4 *)(*(longlong *)(lVar44 + 8) + 0xe8));
            local_538 = (undefined1 **)CONCAT44(local_538._4_4_,*(undefined4 *)(lVar44 + 0x3090));
            uVar29 = 0;
            lVar47 = FUN_147d8dc86(param_1,local_498,0,*(longlong *)(lVar44 + 8) + 0x88);
            *(longlong *)(lVar47 + 0x38) = local_4b0;
            *(undefined8 *)(lVar47 + 0x40) = local_490;
            iVar46 = *(int *)(lVar44 + 0x3104);
            iVar32 = *(int *)(lVar44 + 0x30fc);
            uVar27 = FUN_147ae4ef8((ulonglong)puVar26 & 0xffffffff);
            FUN_140002266(&local_448,L"Hair Debug mode - %s",uVar27);
            pwVar23 = local_448;
            local_468 = local_448;
            if ((int)pwStack_440 == 0) {
              local_468 = L"";
            }
            local_448 = (wchar_t *)&DAT_3f8000003f800000;
            pwStack_440 = (wchar_t *)0x3f80000000000000;
            ppuVar16 = *(undefined1 ***)(DAT_14cb0d2b0 + 0x58);
            if (local_468 != (wchar_t *)0x0) {
              sVar28 = wcslen(local_468);
              uVar29 = (int)sVar28;
            }
            pwStack_460 = (wchar_t *)CONCAT44(pwStack_460._4_4_,uVar29);
            local_528 = &DAT_149e1e308;
            local_530 = &local_448;
            local_538 = ppuVar16;
            FUN_147d8e230(lVar47,0,(double)((float)(iVar46 - iVar32) + -42.0 + 14.0));
            if (pwVar23 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar23);
            }
            FUN_14376dc88(lVar47,param_1,0);
            param_4 = local_4a0;
            lVar47 = local_4f0;
          }
        }
      }
      lVar44 = lVar44 + 0x13c10;
    } while (lVar44 != lVar47);
  }
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c36b86 FUN_142c36b86 body=69 status=ok
// SIG undefined FUN_142c36b86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c36b86(void)

{
  _DAT_14c9d1470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c36bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1478,1);
  return;
}



// FUNCTION 142c36bcb FUN_142c36bcb body=69 status=ok
// SIG undefined FUN_142c36bcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c36bcb(void)

{
  _DAT_14c9d1480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c36c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1488,1);
  return;
}



// FUNCTION 142c36c10 FUN_142c36c10 body=69 status=ok
// SIG undefined FUN_142c36c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c36c10(void)

{
  _DAT_14c9d1490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c36c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1498,1);
  return;
}



// FUNCTION 142c36c79 FUN_142c36c79 body=7891 status=ok
// SIG undefined FUN_142c36c79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c36c79(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  undefined1 **ppuVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_7e8 [32];
  undefined1 **local_7c8;
  undefined8 *local_7c0;
  uint *local_7b8;
  uint local_7b0;
  longlong local_7a8;
  undefined8 *local_7a0;
  undefined8 local_798;
  ulonglong *local_790;
  longlong local_788;
  undefined8 *local_780;
  longlong local_778;
  longlong local_770;
  longlong *local_768;
  undefined8 local_760;
  undefined8 *local_758;
  undefined8 *local_750;
  ulonglong local_748;
  longlong *local_740;
  longlong local_738;
  longlong *local_730;
  ulonglong local_728;
  ulonglong local_720;
  longlong *local_718;
  ulonglong local_710;
  undefined8 local_708;
  longlong local_700;
  longlong *local_6f8;
  longlong local_6f0;
  undefined8 local_6e8;
  undefined8 *local_6e0;
  uint local_6d8;
  undefined4 local_6d4;
  uint local_6d0;
  undefined4 local_6cc;
  undefined1 *local_6bc;
  undefined4 local_6b4;
  uint local_6b0;
  uint uStack_6ac;
  ulonglong local_6a8;
  undefined8 uStack_6a0;
  undefined1 local_691;
  undefined8 *local_690;
  longlong local_688;
  undefined *local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  longlong local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined1 local_518 [352];
  undefined1 *local_3b8;
  undefined4 local_3b0;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  puVar2 = (uint *)(param_2 + 0x3560);
  local_6a8 = 0;
  uStack_6a0 = 0;
  iVar25 = *(int *)(param_2 + 0x3578);
  local_788 = param_3;
  local_778 = param_1;
  local_770 = param_2;
  local_708 = param_4;
  if (iVar25 == 0) {
    uVar29 = 1;
    uVar33 = 0;
    iVar23 = 0;
    iVar11 = 0;
  }
  else {
    puVar16 = *(uint **)(param_2 + 0x3570);
    if (*(uint **)(param_2 + 0x3570) == (uint *)0x0) {
      puVar16 = puVar2;
    }
    uVar30 = *puVar16;
    if (uVar30 == 0) {
      iVar11 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar11 = iVar25 + -1;
      }
      uVar33 = 0;
      uVar29 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar29 = uVar33;
      }
      iVar23 = 0;
      do {
        if (uVar29 == uVar33) goto LAB_142c36f50;
        iVar23 = iVar23 + 0x20;
        uVar30 = puVar16[uVar33 + 1];
        uVar33 = uVar33 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar33 = 0;
      iVar23 = 0;
    }
    uVar29 = (ulonglong)(-uVar30 & uVar30);
    uVar36 = uVar29 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar11 = (iVar23 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar11) {
      iVar11 = iVar25;
    }
  }
  if (iVar11 < iVar25) {
    uVar30 = 0xffffffff;
    do {
      lVar28 = *(longlong *)(*(longlong *)(param_2 + 0x3550) + 0x30 + (longlong)iVar11 * 0x40);
      lVar26 = *(longlong *)(lVar28 + 0x28);
      if (((*(float *)(lVar26 + 0x40) * *(float *)(lVar26 + 0x40) < 1e-05) &&
          (*(float *)(lVar26 + 0x44) * *(float *)(lVar26 + 0x44) < 1e-05)) &&
         (*(float *)(lVar26 + 0x48) * *(float *)(lVar26 + 0x48) < 1e-05)) goto LAB_142c36eb8;
      bVar10 = *(byte *)(lVar26 + 0x1d0);
      if ((bVar10 & 4) == 0) {
LAB_142c36df5:
        cVar9 = FUN_1400bd22a(lVar28,local_788,0);
        uVar36 = uStack_6a0;
        param_2 = local_770;
        if ((cVar9 != '\0') && ((*(byte *)(lVar26 + 0x1d1) & 2) != 0)) {
          lVar26 = (longlong)(int)uStack_6a0;
          uVar12 = (int)uStack_6a0 + 1;
          uStack_6a0 = CONCAT44(uStack_6a0._4_4_,uVar12);
          if (uStack_6a0._4_4_ < uVar12) {
            FUN_1405f9966(&local_6a8,uVar36 & 0xffffffff);
          }
          *(longlong *)(local_6a8 + lVar26 * 8) = lVar28;
          iVar25 = *(int *)(local_770 + 0x3578);
          param_2 = local_770;
        }
      }
      else {
        param_2 = local_770;
        if ((*(byte *)(lVar28 + 0xe4) & 1) == 0) {
          if ((bVar10 & 8) != 0) goto LAB_142c36df5;
        }
        else if (((bVar10 & 8) != 0) && (DAT_14c760480 <= *(int *)(lVar28 + 0xf8)))
        goto LAB_142c36df5;
      }
LAB_142c36eb8:
      uVar30 = uVar30 & ~(uint)uVar29;
      puVar16 = *(uint **)(param_2 + 0x3570);
      if (*(uint **)(param_2 + 0x3570) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      iVar11 = (int)uVar33;
      lVar28 = (longlong)iVar11;
      uVar12 = puVar16[lVar28] & uVar30;
      if (uVar12 == 0) {
        iVar13 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar13 = iVar25 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar26 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar12 = puVar16[lVar28 + lVar26 + 1];
          if (uVar12 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar14 - lVar28 == lVar26) goto LAB_142c36f50;
        }
        uVar33 = (ulonglong)(iVar11 + (int)lVar26 + 1);
        uVar30 = 0xffffffff;
      }
      uVar29 = (ulonglong)(-uVar12 & uVar12);
      uVar36 = uVar29 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar25);
  }
LAB_142c36f50:
  lVar28 = local_788;
  puVar32 = *(undefined8 **)(local_788 + 0x11cd8);
  puVar18 = (undefined8 *)(local_788 + 0x11b80);
  uVar17 = *(undefined8 *)(local_788 + 0x11c90);
  if ((longlong)*(int *)(local_788 + 0x11b78) == 0) {
    iVar25 = 0;
  }
  else {
    lVar26 = *(longlong *)(local_788 + 0x11b70);
    lVar22 = (longlong)*(int *)(local_788 + 0x11b78) * 0x78;
    do {
      *(undefined4 *)(lVar26 + 8) = 0;
      if (*(int *)(lVar26 + 0xc) != 0) {
        FUN_14717ab34(lVar26);
      }
      lVar26 = lVar26 + 0x78;
      lVar22 = lVar22 + -0x78;
    } while (lVar22 != 0);
    iVar25 = *(int *)(lVar28 + 0x11b78);
  }
  *(undefined8 *)(lVar28 + 0x11b90) = 0;
  *(undefined8 *)(lVar28 + 0x11b98) = 0;
  *puVar18 = 0;
  *(undefined8 *)(lVar28 + 0x11b88) = 0;
  *(undefined8 *)(lVar28 + 0x11ba0) = 0;
  if ((((*(longlong *)(lVar28 + 8) != 0) && (iVar25 != 0)) && ((int)uStack_6a0 != 0)) &&
     ((DAT_14c760390 < 1 || (DAT_14c9dc640 < 1)))) {
    lVar28 = *(longlong *)(lVar28 + 0x11b70);
    lVar26 = (longlong)iVar25 * 0x78 + lVar28;
    uVar30 = 0;
    local_780 = puVar18;
    local_758 = puVar32;
    local_6e8 = uVar17;
    do {
      uVar29 = local_6a8;
      local_648 = *(undefined8 *)(lVar28 + 0x50);
      local_678 = *(undefined8 **)(lVar28 + 0x20);
      uStack_670 = *(undefined8 **)(lVar28 + 0x28);
      local_668 = *(undefined8 *)(lVar28 + 0x30);
      uStack_660 = *(undefined8 *)(lVar28 + 0x38);
      local_658 = *(longlong *)(lVar28 + 0x40);
      uStack_650 = *(undefined8 *)(lVar28 + 0x48);
      lVar22 = (longlong)(int)uStack_6a0;
      if (lVar22 != 0) {
        lVar24 = 0;
        do {
          plVar21 = *(longlong **)(*(longlong *)(uVar29 + lVar24) + 0x28);
          bVar10 = (**(code **)(*plVar21 + 8))(plVar21,&local_678);
          uVar30 = (uVar30 < 0x20 & bVar10) + uVar30;
          lVar24 = lVar24 + 8;
        } while (lVar22 * 8 != lVar24);
      }
      lVar24 = local_778;
      lVar22 = local_788;
      uVar12 = DAT_14c7602a8;
      lVar28 = lVar28 + 0x78;
    } while (lVar28 != lVar26);
    if (uVar30 != 0) {
      uVar29 = (ulonglong)DAT_14c7602a8;
      local_6b0 = DAT_14c7602a8;
      uStack_6ac = DAT_14c7602a8;
      *(undefined4 *)local_780 = 0;
      uStack_670 = (undefined8 *)CONCAT44(_DAT_14ca850b4,DAT_14ca850b0);
      local_668 = CONCAT44(uRam000000014ca850bc,_DAT_14ca850b8);
      local_678 = (undefined8 *)0xc;
      local_648 = CONCAT26(local_648._6_2_,0xff000b000101);
      uStack_660 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca850c0);
      uVar15 = DAT_14ca84e40;
      if ((int)uVar12 < (int)DAT_14ca84e40) {
        uVar15 = uVar12;
      }
      uVar20 = 1;
      if (1 < (int)uVar15) {
        uVar20 = uVar15;
      }
      local_658 = (ulonglong)uVar20 << 0x20;
      uStack_650 = CONCAT44(0x10001,uVar20);
      puVar1 = (ulonglong *)(local_778 + 0x70);
      uVar36 = *(longlong *)(local_778 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar33 = uVar36 + 0x120;
      local_790 = puVar1;
      if (*(ulonglong *)(local_778 + 0x78) < uVar33) {
        FUN_140023dd8(puVar1,0x128);
        uVar36 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar33 = uVar36 + 0x120;
      }
      *(ulonglong *)(lVar24 + 0x70) = uVar33;
      FUN_1456bbb8c(uVar36,L"Hair.ShadowDepth",&local_678,0);
      iVar25 = *(int *)(lVar24 + 0x180);
      *(uint *)(lVar24 + 0x180) = iVar25 + 1U;
      if (*(uint *)(lVar24 + 0x184) < iVar25 + 1U) {
        FUN_14472c0f6(lVar24 + 0x178,iVar25);
      }
      puVar1 = local_790;
      *(ulonglong *)(*(longlong *)(lVar24 + 0x178) + (longlong)iVar25 * 8) = uVar36;
      *(int *)(uVar36 + 0x9c) = *(int *)(lVar24 + 0x180) + -1;
      uStack_670 = (undefined8 *)CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
      local_668 = CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
      local_678 = (undefined8 *)0x9;
      local_648 = CONCAT26(local_648._6_2_,0xff000a000101);
      uStack_660 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
      uVar15 = DAT_14ca84e40;
      if ((int)uVar12 < (int)DAT_14ca84e40) {
        uVar15 = uVar12;
      }
      uVar20 = 1;
      if (1 < (int)uVar15) {
        uVar20 = uVar15;
      }
      local_658 = (ulonglong)uVar20 << 0x20;
      uStack_650 = CONCAT44(0x10001,uVar20);
      uVar31 = *(longlong *)(lVar24 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar33 = uVar31 + 0x120;
      if (*(ulonglong *)(lVar24 + 0x78) < uVar33) {
        FUN_140023dd8(local_790,0x128);
        uVar31 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar33 = uVar31 + 0x120;
      }
      *(ulonglong *)(lVar24 + 0x70) = uVar33;
      local_748 = uVar36;
      FUN_1456bbb8c(uVar31,L"Hair.DeepShadowLayers",&local_678,0);
      iVar25 = *(int *)(lVar24 + 0x180);
      *(uint *)(lVar24 + 0x180) = iVar25 + 1U;
      if (*(uint *)(lVar24 + 0x184) < iVar25 + 1U) {
        FUN_14472c0f6(lVar24 + 0x178,iVar25);
      }
      local_738 = CONCAT44(uVar12,uVar12);
      *(ulonglong *)(*(longlong *)(lVar24 + 0x178) + (longlong)iVar25 * 8) = uVar31;
      *(int *)(uVar31 + 0x9c) = *(int *)(lVar24 + 0x180) + -1;
      uVar12 = 0;
      local_728 = uVar31;
      local_720 = uVar29;
      if ((longlong)*(int *)(lVar22 + 0x11b78) != 0) {
        local_718 = (longlong *)(local_788 + 0x1030);
        plVar21 = *(longlong **)(local_788 + 0x11b70);
        local_740 = plVar21 + (longlong)*(int *)(lVar22 + 0x11b78) * 0xf;
        uVar12 = 0;
        do {
          if ((longlong)(int)uStack_6a0 != 0) {
            local_760 = local_6a8;
            plVar34 = (longlong *)((longlong)(int)uStack_6a0 << 3);
            plVar27 = (longlong *)0x0;
            local_730 = plVar34;
            do {
              local_780 = *(undefined8 **)(local_760 + (longlong)plVar27);
              local_228 = plVar21[10];
              local_258 = plVar21[4];
              uStack_250 = plVar21[5];
              local_248 = (undefined4)plVar21[6];
              uStack_244 = *(undefined4 *)((longlong)plVar21 + 0x34);
              uStack_240 = (undefined4)plVar21[7];
              uStack_23c = *(undefined4 *)((longlong)plVar21 + 0x3c);
              local_238 = plVar21[8];
              lStack_230 = plVar21[9];
              ppuVar8 = (undefined1 **)local_780[5];
              cVar9 = (**(code **)(*ppuVar8 + 8))(ppuVar8);
              if ((cVar9 != '\0') && (uVar12 < 0x20)) {
                local_768 = (longlong *)CONCAT44(local_768._4_4_,uVar12);
                bVar10 = *(byte *)(ppuVar8 + 0x3d);
                local_750 = (undefined8 *)CONCAT71(local_750._1_7_,bVar10 == 0);
                local_3b8 = &DAT_3f8000003f800000;
                local_3b0 = 0x3f800000;
                lVar28 = plVar21[1];
                uVar12 = (int)lVar28 + 1;
                *(uint *)(plVar21 + 1) = uVar12;
                if (*(uint *)((longlong)plVar21 + 0xc) < uVar12) {
                  FUN_14717ab54(plVar21);
                }
                lVar26 = *plVar21;
                lVar28 = (longlong)(int)lVar28 * 0x88;
                memset((void *)(lVar26 + lVar28),0,0x88);
                local_7b8 = &local_6b0;
                local_7c0 = (undefined8 *)CONCAT44(local_7c0._4_4_,(uint)bVar10);
                local_7c8 = ppuVar8;
                FUN_14717f684(local_718,&local_678,&local_3b8,&local_258);
                puVar4 = ppuVar8[0x12];
                puVar5 = ppuVar8[0xe];
                *(float *)(lVar26 + 0x24 + lVar28) = (float)(double)ppuVar8[10];
                *(float *)(lVar26 + 0x28 + lVar28) = (float)(double)puVar5;
                *(float *)(lVar26 + 0x2c + lVar28) = (float)(double)puVar4;
                puVar4 = ppuVar8[6];
                puVar5 = ppuVar8[5];
                dVar6 = *(double *)(local_788 + 0x1040);
                dVar7 = *(double *)(local_788 + 0x1038);
                *(float *)(lVar26 + 0x30 + lVar28) =
                     (float)*(double *)(local_788 + 0x1030) + (float)(double)ppuVar8[4];
                *(float *)(lVar26 + 0x34 + lVar28) = (float)dVar7 + (float)(double)puVar5;
                *(float *)(lVar26 + 0x38 + lVar28) = (float)dVar6 + (float)(double)puVar4;
                puVar4 = ppuVar8[9];
                plVar34 = (longlong *)(lVar26 + 0x3c + lVar28);
                *plVar34 = (longlong)ppuVar8[8];
                plVar34[1] = (longlong)puVar4;
                *(undefined4 *)(lVar26 + 0x4c + lVar28) = *(undefined4 *)((longlong)ppuVar8 + 0x224)
                ;
                *(undefined1 *)(lVar26 + 0x20 + lVar28) = local_750._0_1_;
                *(undefined4 *)(lVar26 + 0x1c + lVar28) =
                     *(undefined4 *)((longlong)local_780 + 0x34);
                *(longlong *)(lVar26 + 0x14 + lVar28) = local_738;
                puVar3 = (undefined4 *)(lVar26 + 0x50 + lVar28);
                *puVar3 = (undefined4)local_258;
                puVar3[1] = local_258._4_4_;
                puVar3[2] = (int)uStack_250;
                puVar3[3] = uStack_250._4_4_;
                puVar3 = (undefined4 *)(lVar26 + 0x60 + lVar28);
                *puVar3 = local_248;
                puVar3[1] = uStack_244;
                puVar3[2] = uStack_240;
                puVar3[3] = uStack_23c;
                plVar34 = (longlong *)(lVar26 + 0x70 + lVar28);
                *plVar34 = local_238;
                plVar34[1] = lStack_230;
                *(longlong *)(lVar26 + 0x80 + lVar28) = local_228;
                *(int *)(lVar26 + 0xc + lVar28) = (int)plVar21[0xd];
                *(undefined4 *)(lVar26 + 8 + lVar28) = local_3b0;
                *(undefined1 **)(lVar26 + lVar28) = local_3b8;
                *(int *)(lVar26 + 0x10 + lVar28) = (int)local_768;
                uVar12 = (int)local_768 + 1;
                plVar34 = local_730;
              }
              plVar27 = plVar27 + 1;
            } while (plVar34 != plVar27);
          }
          plVar21 = plVar21 + 0xf;
        } while (plVar21 != local_740);
      }
      lVar26 = local_778;
      lVar28 = local_788;
      puVar1 = local_790;
      *(uint *)(local_788 + 0x11b80) = uVar12;
      *(ulonglong *)(local_788 + 0x11b84) = CONCAT44(uStack_6ac,local_6b0);
      uVar12 = uVar12 + (uVar12 == 0);
      uVar15 = 0xa0;
      if (DAT_14ca84e48 < 0xa0) {
        uVar15 = DAT_14ca84e48;
      }
      uStack_670 = (undefined8 *)CONCAT44(uStack_670._4_4_,0x10109);
      if (DAT_14ca84e48 <= uVar12) {
        uVar12 = DAT_14ca84e48;
      }
      local_668 = 0;
      local_678 = (undefined8 *)CONCAT44(uVar12 + (uVar12 == 0),uVar15 + (uVar15 == 0));
      uVar33 = *(longlong *)(local_778 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar29 = uVar33 + 0x150;
      if (*(ulonglong *)(local_778 + 0x78) < uVar29) {
        FUN_140023dd8(local_790,0x160);
        uVar33 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar29 = uVar33 + 0x150;
      }
      *(ulonglong *)(lVar26 + 0x70) = uVar29;
      FUN_1456bd266(uVar33,L"Hair.DeepShadowViewInfo",&local_678,0);
      iVar25 = *(int *)(lVar26 + 400);
      *(uint *)(lVar26 + 400) = iVar25 + 1U;
      if (*(uint *)(lVar26 + 0x194) < iVar25 + 1U) {
        FUN_144737178(lVar26 + 0x188,iVar25);
      }
      puVar1 = local_790;
      *(ulonglong *)(*(longlong *)(lVar26 + 0x188) + (longlong)iVar25 * 8) = uVar33;
      *(int *)(uVar33 + 0x7c) = *(int *)(lVar26 + 400) + -1;
      cVar9 = *(char *)(uVar33 + 0x68);
      puVar32 = (undefined8 *)(*(longlong *)(lVar26 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar32 + 9;
      if (*(undefined8 **)(lVar26 + 0x78) < puVar18) {
        FUN_140023dd8(local_790,0x50);
        puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar32 + 9;
      }
      local_780 = (undefined8 *)(lVar26 + 0x198);
      *(undefined8 **)(lVar26 + 0x70) = puVar18;
      puVar32[1] = *(undefined8 *)(uVar33 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 3;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *puVar32 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar32 + 5) = cVar9 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
      puVar32[7] = 0;
      puVar32[8] = uVar33;
      iVar25 = *(int *)(lVar26 + 0x1a0);
      *(uint *)(lVar26 + 0x1a0) = iVar25 + 1U;
      if (*(uint *)(lVar26 + 0x1a4) < iVar25 + 1U) {
        FUN_1447568fc(local_780,iVar25);
      }
      puVar1 = local_790;
      *(undefined8 **)(*(longlong *)(lVar26 + 0x198) + (longlong)iVar25 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(lVar26 + 0x1a0) + -1;
      puVar35 = (undefined8 *)(*(longlong *)(lVar26 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar35 + 0xe;
      if (*(undefined8 **)(lVar26 + 0x78) < puVar18) {
        FUN_140023dd8(local_790,0x80);
        puVar35 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar18 = puVar35 + 0xe;
      }
      *(undefined8 **)(lVar26 + 0x70) = puVar18;
      *puVar35 = &PTR_FUN_14a222818;
      puVar35[9] = 0;
      puVar35[10] = 0;
      puVar35[0xb] = 0;
      puVar35[0xc] = 0;
      *(undefined1 *)(puVar35 + 0xd) = 1;
      plVar21 = (longlong *)(lVar26 + 0x98);
      iVar25 = *(int *)(lVar26 + 0xa0);
      *(uint *)(lVar26 + 0xa0) = iVar25 + 1U;
      if (*(uint *)(lVar26 + 0xa4) < iVar25 + 1U) {
        FUN_1448cfae8(plVar21,iVar25);
      }
      *(undefined8 **)(*plVar21 + (longlong)iVar25 * 8) = puVar35;
      local_258 = 0;
      uStack_250 = 0;
      local_768 = plVar21;
      local_750 = puVar32;
      local_710 = uVar33;
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar30);
      }
      FUN_142c559e8(&local_258,uVar30);
      if ((longlong)*(int *)(lVar28 + 0x11b78) != 0) {
        plVar21 = *(longlong **)(local_788 + 0x11b70);
        plVar34 = plVar21 + (longlong)*(int *)(lVar28 + 0x11b78) * 0xf;
        do {
          lVar28 = plVar21[1];
          if ((longlong)(int)lVar28 != 0) {
            lVar26 = *plVar21;
            lVar22 = 0;
            do {
              uVar29 = uStack_250;
              lVar24 = (longlong)(int)uStack_250;
              uVar30 = (int)uStack_250 + 1;
              uStack_250 = CONCAT44(uStack_250._4_4_,uVar30);
              if (uStack_250._4_4_ < uVar30) {
                FUN_142c55ab0(&local_258,uVar29 & 0xffffffff);
              }
              lVar24 = lVar24 * 0x20;
              *(undefined4 *)(local_258 + 8 + lVar24) = *(undefined4 *)(lVar26 + 0x2c + lVar22);
              *(undefined8 *)(local_258 + lVar24) = *(undefined8 *)(lVar26 + 0x24 + lVar22);
              *(undefined8 *)(local_258 + 0x10 + lVar24) = *(undefined8 *)(lVar26 + 0x30 + lVar22);
              *(undefined4 *)(local_258 + 0x18 + lVar24) = *(undefined4 *)(lVar26 + 0x38 + lVar22);
              *(undefined4 *)(local_258 + 0xc + lVar24) = *(undefined4 *)(lVar26 + 0xc + lVar22);
              *(uint *)(local_258 + 0x1c + lVar24) = (uint)*(byte *)(lVar26 + 0x20 + lVar22);
              lVar22 = lVar22 + 0x88;
            } while ((longlong)(int)lVar28 * 0x88 != lVar22);
          }
          plVar21 = plVar21 + 0xf;
        } while (plVar21 != plVar34);
      }
      lVar28 = local_778;
      local_7c0 = (undefined8 *)((longlong)(int)uStack_250 << 5);
      local_7c8 = (undefined1 **)local_258;
      local_7b8 = (uint *)((ulonglong)local_7b8 & 0xffffffffffffff00);
      lVar26 = FUN_144942e63(local_778,L"Hair.DeepShadow.LightData",0x20);
      puVar1 = local_790;
      cVar9 = *(char *)(lVar26 + 0x68);
      puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar32 + 9;
      if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
        FUN_140023dd8(local_790,0x50);
        puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar32 + 9;
      }
      uVar33 = local_710;
      uVar29 = local_720;
      lVar22 = local_788;
      *(undefined8 **)(lVar28 + 0x70) = puVar18;
      puVar32[1] = *(undefined8 *)(lVar26 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 3;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *puVar32 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar32 + 5) = cVar9 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
      puVar32[7] = 0;
      puVar32[8] = lVar26;
      iVar25 = *(int *)(lVar28 + 0x1a0);
      *(uint *)(lVar28 + 0x1a0) = iVar25 + 1U;
      if (*(uint *)(lVar28 + 0x1a4) < iVar25 + 1U) {
        FUN_1447568fc(local_780,iVar25);
      }
      puVar1 = local_790;
      *(undefined8 **)(*(longlong *)(lVar28 + 0x198) + (longlong)iVar25 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(lVar28 + 0x1a0) + -1;
      puVar35[9] = puVar32;
      puVar35[3] = *(undefined8 *)(lVar22 + 0x11b84);
      *(undefined4 *)(puVar35 + 4) = *(undefined4 *)(lVar22 + 0x11b80);
      *(undefined4 *)((longlong)puVar35 + 0x24) = *(undefined4 *)(lVar22 + 0x11b78);
      puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar32 + 9;
      if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
        FUN_140023dd8(local_790,0x50);
        puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar32 + 9;
      }
      *(undefined8 **)(lVar28 + 0x70) = puVar18;
      puVar32[1] = local_758[1];
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 3;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *puVar32 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar32 + 5) = 0x1d;
      *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
      puVar32[7] = 0;
      puVar32[8] = local_758;
      iVar25 = *(int *)(lVar28 + 0x1a0);
      *(uint *)(lVar28 + 0x1a0) = iVar25 + 1U;
      if (*(uint *)(lVar28 + 0x1a4) < iVar25 + 1U) {
        FUN_1447568fc(local_780,iVar25);
      }
      puVar1 = local_790;
      *(undefined8 **)(*(longlong *)(lVar28 + 0x198) + (longlong)iVar25 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(lVar28 + 0x1a0) + -1;
      puVar35[10] = puVar32;
      cVar9 = *(char *)(uVar33 + 0x68);
      puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar32 + 8;
      if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
        FUN_140023dd8(local_790,0x48);
        puVar32 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar32 + 8;
      }
      *(undefined8 **)(lVar28 + 0x70) = puVar18;
      puVar32[1] = *(undefined8 *)(uVar33 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 2;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar32 + 5) = 0;
      *puVar32 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar32 + 6) = cVar9 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar32 + 0x31) = 0;
      puVar32[7] = uVar33;
      iVar25 = *(int *)(lVar28 + 0x1a0);
      *(uint *)(lVar28 + 0x1a0) = iVar25 + 1U;
      if (*(uint *)(lVar28 + 0x1a4) < iVar25 + 1U) {
        FUN_1447568fc(local_780,iVar25);
      }
      *(undefined8 **)(*(longlong *)(lVar28 + 0x198) + (longlong)iVar25 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(lVar28 + 0x1a0) + -1;
      puVar35[0xb] = puVar32;
      fVar37 = DAT_14c760340;
      if (170.0 <= DAT_14c760340) {
        fVar37 = 170.0;
      }
      if (fVar37 <= 10.0) {
        fVar37 = 10.0;
      }
      *(float *)((longlong)puVar35 + 0x2c) = fVar37 * 0.017453292 * 0.5;
      fVar37 = 0.0;
      if (0.0 <= DAT_14c760334) {
        fVar37 = DAT_14c760334;
      }
      *(float *)(puVar35 + 5) = fVar37;
      fVar37 = (float)(~-(uint)(DAT_14c760330 != 0.0) & DAT_14c760324 |
                      (uint)DAT_14c760330 & -(uint)(DAT_14c760330 != 0.0));
      fVar38 = 0.0;
      if (0.0 <= fVar37) {
        fVar38 = fVar37;
      }
      *(float *)(puVar35 + 2) = fVar38;
      puVar35[6] = local_738;
      fVar37 = 1.0 / (float)(int)uVar29;
      *(float *)(puVar35 + 7) = fVar37;
      *(float *)((longlong)puVar35 + 0x3c) = fVar37;
      uVar30 = DAT_14c7602a8;
      if ((int)DAT_14c7602ac < (int)DAT_14c7602a8) {
        uVar30 = DAT_14c7602ac;
      }
      uVar12 = 0x10;
      if (0x10 < (int)uVar30) {
        uVar12 = uVar30;
      }
      iVar25 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar25 == 0; iVar25 = iVar25 + -1) {
        }
      }
      *(int *)((longlong)puVar35 + 0x44) = iVar25;
      *(int *)(puVar35 + 8) = 1 << ((byte)iVar25 & 0x1f);
      lVar26 = FUN_1447e4f80();
      cVar9 = '\x02';
      if (*(char *)(lVar26 + 0x41) != '\x03') {
        cVar9 = *(char *)(lVar26 + 0x41);
      }
      puVar35[0xc] = *(undefined8 *)(lVar22 + 0x18);
      *(char *)(puVar35 + 0xd) = cVar9;
      uVar17 = *(undefined8 *)(lVar22 + 0x13818);
      FUN_145e81826();
      FUN_1448e935e(uVar17,&local_678,&DAT_14c9d1760,0);
      FUN_145e81826();
      local_7c8 = &local_6bc;
      local_6bc = &DAT_100000001;
      local_6b4 = 1;
      FUN_14716c018(lVar28,&local_3b8,&local_678,puVar35 + 2);
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      if ((longlong)*(int *)(lVar22 + 0x11b78) != 0) {
        plVar21 = *(longlong **)(local_788 + 0x11b70);
        local_6f8 = plVar21 + (longlong)*(int *)(lVar22 + 0x11b78) * 0xf;
        local_740 = (longlong *)(lVar28 + 0x1a8);
        local_700 = lVar28 + 0x168;
        uVar17 = CONCAT71((int7)((ulonglong)lVar22 >> 8),1);
        plVar34 = local_768;
        do {
          local_718 = plVar21;
          if ((longlong)(int)plVar21[1] != 0) {
            lVar26 = *plVar21;
            local_730 = plVar21 + 2;
            local_738 = (longlong)(int)plVar21[1] * 0x88;
            local_6f0 = lVar26 + 0x24;
            lVar22 = 0;
            do {
              puVar1 = local_790;
              local_6d8 = *(uint *)(lVar26 + lVar22);
              local_6d4 = *(undefined4 *)(lVar26 + 8 + lVar22);
              local_6cc = 0x3f800000;
              local_780 = (undefined8 *)CONCAT44(local_780._4_4_,(int)uVar17);
              local_6d0 = local_6d8;
              if (DAT_14c9d14a0 == 0) {
                local_760 = CONCAT44(local_760._4_4_,(uint)*(byte *)(lVar26 + 0x20 + lVar22));
                fVar37 = *(float *)(lVar26 + 0x4c + lVar22);
                if (1.0 <= fVar37) {
                  fVar37 = 1.0;
                }
                if (fVar37 <= 0.0) {
                  fVar37 = 0.0;
                }
                fVar40 = fVar37 * 5.2 + 1.0;
                fVar37 = powf(0.2,fVar40);
                fVar38 = powf(0.4,fVar40);
                fVar39 = powf(0.6,fVar40);
                fVar40 = powf(0.8,fVar40);
                if (DAT_14c760a84 == -1) {
                  FUN_145fdab76(&local_678,L"FRDGSystemTextures",
                                L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
                  DAT_14c760a84 = FUN_145d12cf0(&local_678);
                  lVar28 = local_778;
                  plVar34 = local_768;
                  if (local_678 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                    lVar28 = local_778;
                    plVar34 = local_768;
                  }
                }
                puVar1 = local_790;
                if ((DAT_14c760a84 < *(int *)(lVar28 + 0x130)) &&
                   (lVar24 = *(longlong *)
                              (*(longlong *)(lVar28 + 0x128) + (longlong)DAT_14c760a84 * 8),
                   lVar24 != 0)) {
                  lVar24 = lVar24 + 8;
                }
                else {
                  lVar24 = 0;
                }
                puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar32 + 0x32;
                if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
                  FUN_140023dd8(local_790,0x1a0);
                  puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar32 + 0x32;
                }
                *(undefined8 **)(lVar28 + 0x70) = puVar18;
                *puVar32 = &PTR_FUN_14a2234e8;
                local_758 = puVar32 + 2;
                FUN_14717af92();
                iVar25 = *(int *)(lVar28 + 0xa0);
                *(uint *)(lVar28 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(lVar28 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(plVar34,iVar25);
                }
                puVar1 = local_790;
                *(undefined8 **)(*(longlong *)(lVar28 + 0x98) + (longlong)iVar25 * 8) = puVar32;
                puVar35 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar35 + 8;
                if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
                  FUN_140023dd8(local_790,0x50);
                  puVar35 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar35 + 8;
                }
                *(undefined8 **)(lVar28 + 0x70) = puVar18;
                *puVar35 = &PTR_FUN_14a222838;
                puVar35[4] = 0;
                puVar35[5] = 0x3f80000000000000;
                puVar35[6] = 0;
                puVar35[7] = 0;
                iVar25 = *(int *)(lVar28 + 0xa0);
                *(uint *)(lVar28 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(lVar28 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(plVar34,iVar25);
                }
                lVar28 = local_778;
                uVar30 = (uint)local_760;
                uVar12 = (uint)local_760 | 2;
                *(undefined8 **)(*(longlong *)(local_778 + 0x98) + (longlong)iVar25 * 8) = puVar35;
                local_678 = puVar35 + 2;
                *(undefined4 *)(puVar35 + 2) = *(undefined4 *)(lVar26 + 0x10 + lVar22);
                *(float *)(puVar35 + 4) = fVar37;
                *(float *)((longlong)puVar35 + 0x24) = fVar38;
                *(float *)(puVar35 + 5) = fVar39;
                *(float *)((longlong)puVar35 + 0x2c) = fVar40;
                puVar35[6] = *(undefined8 *)(lVar24 + 0x28);
                puVar35[7] = local_750;
                lVar24 = FUN_145fcfb38();
                local_258 = *(undefined8 *)(lVar24 + 0x18);
                uVar17 = FUN_14717b072(local_740,local_790,&local_678,&local_258);
                lVar24 = FUN_145fcfb38();
                cVar9 = *(char *)(lVar24 + 0x41);
                if (cVar9 == '\x03') {
                  cVar9 = '\x02';
                }
                puVar32[0x10] = uVar17;
                *(char *)(puVar32 + 0x11) = cVar9;
                cVar9 = (char)((ulonglong)local_780 & 0xffffff01) + '\x01';
                puVar32[0x2a] = local_748;
                puVar32[0x2b] = 0;
                local_780 = (undefined8 *)
                            CONCAT44(local_780._4_4_,
                                     (int)CONCAT71((int7)(((ulonglong)local_780 & 0xffffff01) >> 8),
                                                   cVar9));
                *(char *)(puVar32 + 0x2c) = cVar9;
                *(undefined1 *)((longlong)puVar32 + 0x161) = 0;
                *(undefined4 *)((longlong)puVar32 + 0x164) = 2;
                lVar24 = local_6f0 + lVar22;
                uStack_670 = *(undefined8 **)(lVar26 + 0x14 + lVar22);
                local_678 = (undefined8 *)DAT_14c967818;
                local_798 = local_708;
                local_7a0 = local_758;
                local_760 = CONCAT44(local_760._4_4_,uVar30) | 2;
                local_7b8 = &local_6d8;
                local_7c8 = (undefined1 **)((ulonglong)local_7c8 & 0xffffffffffffff00);
                local_7c0 = &local_678;
                local_7b0 = uVar12;
                local_7a8 = lVar24;
                FUN_142c59951(lVar28,local_770,local_788,local_730);
                puVar1 = local_790;
                puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar32 + 0x32;
                if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
                  FUN_140023dd8(local_790,0x1a0);
                  puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar32 + 0x32;
                }
                lVar28 = local_778;
                *(undefined8 **)(local_778 + 0x70) = puVar18;
                *puVar32 = &PTR_FUN_14a2234e8;
                FUN_14717af92(puVar32 + 2);
                plVar21 = local_768;
                iVar25 = *(int *)(lVar28 + 0xa0);
                *(uint *)(lVar28 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(lVar28 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(local_768,iVar25);
                }
                puVar1 = local_790;
                *(undefined8 **)(*(longlong *)(local_778 + 0x98) + (longlong)iVar25 * 8) = puVar32;
                puVar35 = (undefined8 *)
                          (*(longlong *)(local_778 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar35 + 8;
                if (*(undefined8 **)(local_778 + 0x78) < puVar18) {
                  FUN_140023dd8(local_790,0x50);
                  puVar35 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar35 + 8;
                }
                *(undefined8 **)(local_778 + 0x70) = puVar18;
                *puVar35 = &PTR_FUN_14a222838;
                puVar35[4] = 0;
                puVar35[5] = 0x3f80000000000000;
                puVar35[6] = 0;
                puVar35[7] = 0;
                iVar25 = *(int *)(local_778 + 0xa0);
                *(uint *)(local_778 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(local_778 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(plVar21,iVar25);
                }
                lVar28 = local_778;
                *(undefined8 **)(*(longlong *)(local_778 + 0x98) + (longlong)iVar25 * 8) = puVar35;
                local_678 = puVar35 + 2;
                *(undefined4 *)(puVar35 + 2) = *(undefined4 *)(lVar26 + 0x10 + lVar22);
                *(float *)(puVar35 + 4) = fVar37;
                *(float *)((longlong)puVar35 + 0x24) = fVar38;
                *(float *)(puVar35 + 5) = fVar39;
                *(float *)((longlong)puVar35 + 0x2c) = fVar40;
                puVar35[6] = local_748;
                puVar35[7] = local_750;
                lVar19 = FUN_145fcfb38();
                local_258 = *(longlong *)(lVar19 + 0x18);
                uVar17 = FUN_14717b072(local_740,local_790,&local_678,&local_258);
                lVar19 = FUN_145fcfb38();
                plVar34 = local_768;
                cVar9 = *(char *)(lVar19 + 0x41);
                if (*(char *)(lVar19 + 0x41) == '\x03') {
                  cVar9 = '\x02';
                }
                puVar32[0x10] = uVar17;
                *(char *)(puVar32 + 0x11) = cVar9;
                puVar32[0x12] = local_728;
                puVar32[0x13] = 0;
                *(char *)(puVar32 + 0x14) = (char)local_780;
                *(undefined1 *)((longlong)puVar32 + 0xa1) = 0;
                *(undefined2 *)((longlong)puVar32 + 0xa2) = 0xffff;
                uStack_670 = *(undefined8 **)(lVar26 + 0x14 + lVar22);
                local_678 = (undefined8 *)DAT_14c967818;
                local_798 = local_708;
                local_7b0 = (uint)local_760;
                local_7b8 = &local_6d8;
                local_7c8 = (undefined1 **)CONCAT71(local_7c8._1_7_,1);
                local_7c0 = &local_678;
                local_7a8 = lVar24;
                local_7a0 = puVar32 + 2;
                FUN_142c59951(lVar28,local_770,local_788);
              }
              else {
                uVar29 = *(ulonglong *)(lVar26 + 0x14 + lVar22);
                puVar32 = (undefined8 *)(*(longlong *)(lVar28 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar32 + 0x2e;
                if (*(undefined8 **)(lVar28 + 0x78) < puVar18) {
                  FUN_140023dd8(local_790,0x180);
                  puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar32 + 0x2e;
                }
                *(undefined8 **)(lVar28 + 0x70) = puVar18;
                *puVar32 = &PTR_FUN_14a2227c0;
                puVar18 = puVar32 + 2;
                FUN_147174682(puVar18);
                iVar25 = *(int *)(lVar28 + 0xa0);
                *(uint *)(lVar28 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(lVar28 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(plVar34,iVar25);
                }
                lVar24 = local_778;
                *(undefined8 **)(*(longlong *)(local_778 + 0x98) + (longlong)iVar25 * 8) = puVar32;
                *(float *)(puVar32 + 2) = (float)(int)uVar29;
                *(float *)((longlong)puVar32 + 0x14) = (float)(int)(uVar29 >> 0x20);
                local_760 = uVar29;
                lVar19 = FUN_1447e4f80();
                lVar28 = local_788;
                cVar9 = *(char *)(lVar19 + 0x41);
                if (cVar9 == '\x03') {
                  cVar9 = '\x02';
                }
                puVar32[10] = *(undefined8 *)(local_788 + 0x18);
                *(char *)(puVar32 + 0xb) = cVar9;
                puVar32[0x26] = local_748;
                puVar32[0x27] = 0;
                *(char *)(puVar32 + 0x28) = (char)uVar17 + '\x01';
                *(undefined1 *)((longlong)puVar32 + 0x141) = 0;
                *(undefined4 *)((longlong)puVar32 + 0x144) = 2;
                lVar19 = FUN_1414708b2();
                cVar9 = *(char *)(lVar19 + 0x41);
                if (cVar9 == '\x03') {
                  cVar9 = '\x02';
                }
                puVar32[0xc] = local_6e8;
                *(char *)(puVar32 + 0xd) = cVar9;
                *(undefined4 *)(puVar32 + 5) = *(undefined4 *)(lVar26 + 0x2c + lVar22);
                puVar32[4] = *(undefined8 *)(lVar26 + 0x24 + lVar22);
                puVar32[6] = *(undefined8 *)(lVar26 + 0x30 + lVar22);
                *(undefined4 *)(puVar32 + 7) = *(undefined4 *)(lVar26 + 0x38 + lVar22);
                *(uint *)((longlong)puVar32 + 0x3c) = (uint)*(byte *)(lVar26 + 0x20 + lVar22);
                *(undefined4 *)((longlong)puVar32 + 0x2c) = *(undefined4 *)(lVar26 + 0xc + lVar22);
                puVar32[8] = local_750;
                *(undefined4 *)(puVar32 + 3) = *(undefined4 *)(lVar26 + 0x10 + lVar22);
                uVar17 = *(undefined8 *)(lVar28 + 0x13818);
                FUN_145f903ac();
                FUN_1448e935e(uVar17,&local_678,&DAT_14c9d1638,0);
                FUN_145f903ac();
                local_720 = (ulonglong)local_678;
                local_758 = uStack_670;
                uVar17 = *(undefined8 *)(lVar28 + 0x13818);
                FUN_145f8ff4a();
                FUN_1448e935e(uVar17,&local_678,&DAT_14c9d1510,0);
                FUN_145f8ff4a();
                uVar29 = (ulonglong)local_678;
                local_6e0 = uStack_670;
                FUN_147174682(&local_258);
                FUN_147174682(&local_3b8);
                memcpy(&local_258,puVar18,0x160);
                memcpy(&local_3b8,puVar18,0x160);
                memcpy(&local_678,&local_258,0x160);
                memcpy(local_518,puVar18,0x160);
                FUN_145dcf0c6();
                FUN_140069376(lVar24);
                puVar1 = local_790;
                puVar35 = (undefined8 *)(*(longlong *)(lVar24 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar32 = puVar35 + 0x96;
                if (*(undefined8 **)(lVar24 + 0x78) < puVar32) {
                  FUN_140023dd8(local_790,0x4c0);
                  puVar35 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar32 = puVar35 + 0x96;
                }
                *local_790 = (ulonglong)puVar32;
                local_688 = DAT_14c9d43a8;
                if (DAT_14c9d43a8 != 0) {
                  LOCK();
                  *(int *)(DAT_14c9d43a8 + 8) = *(int *)(DAT_14c9d43a8 + 8) + 1;
                  UNLOCK();
                }
                local_680 = &DAT_14c9d4360;
                local_7c8 = (undefined1 **)CONCAT71(local_7c8._1_7_,2);
                local_690 = puVar18;
                FUN_140068f1a(puVar35,&local_691,&local_690);
                *puVar35 = &PTR_FUN_14a222800;
                memcpy(puVar35 + 0x38,&local_678,0x2c0);
                plVar34 = local_768;
                puVar35[0x90] = local_720;
                puVar35[0x91] = local_758;
                puVar35[0x92] = uVar29;
                puVar35[0x93] = local_6e0;
                puVar35[0x94] = local_760;
                iVar25 = *(int *)(local_778 + 0x170);
                *(uint *)(local_778 + 0x170) = iVar25 + 1U;
                if (*(uint *)(local_778 + 0x174) < iVar25 + 1U) {
                  FUN_14470e57a(local_700,iVar25);
                }
                lVar28 = local_778;
                *(undefined8 **)(*(longlong *)(local_778 + 0x168) + (longlong)iVar25 * 8) = puVar35;
                *(int *)((longlong)puVar35 + 0x2c) = *(int *)(local_778 + 0x170) + -1;
                FUN_140069100(local_778,puVar35);
                if (((ulonglong)local_780 & 1) != 0) {
                  local_668 = 0;
                  uStack_660 = 0;
                  local_678 = (undefined8 *)0x0;
                  uStack_670 = (undefined8 *)0x0;
                  local_658 = 0;
                  uStack_650 = 1;
                  local_648 = CONCAT44(local_648._4_4_,1);
                  FUN_1401a4871(lVar28,local_728,&local_678);
                }
                fVar37 = *(float *)(lVar26 + 0x4c + lVar22);
                if (1.0 <= fVar37) {
                  fVar37 = 1.0;
                }
                if (fVar37 <= 0.0) {
                  fVar37 = 0.0;
                }
                fVar37 = fVar37 * 5.2 + 1.0;
                powf(0.2,fVar37);
                powf(0.4,fVar37);
                powf(0.6,fVar37);
                powf(0.8,fVar37);
              }
              lVar22 = lVar22 + 0x88;
              uVar17 = 0;
            } while (local_738 != lVar22);
          }
          plVar21 = local_718 + 0xf;
        } while (plVar21 != local_6f8);
      }
      *(ulonglong *)(local_788 + 0x11b90) = local_748;
      *(ulonglong *)(local_788 + 0x11b98) = local_728;
      *(ulonglong *)(local_788 + 0x11ba0) = local_710;
    }
  }
  FUN_142c557ae(&local_6a8);
  if ((local_f0 ^ (ulonglong)auStack_7e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c38b4e FUN_142c38b4e body=69 status=ok
// SIG undefined FUN_142c38b4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38b4e(void)

{
  _DAT_14c9d1820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1828,1);
  return;
}



// FUNCTION 142c38b93 FUN_142c38b93 body=69 status=ok
// SIG undefined FUN_142c38b93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38b93(void)

{
  _DAT_14c9d1830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1838,1);
  return;
}



// FUNCTION 142c38bd8 FUN_142c38bd8 body=69 status=ok
// SIG undefined FUN_142c38bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38bd8(void)

{
  _DAT_14c9d1840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1848,1);
  return;
}



// FUNCTION 142c38c1d FUN_142c38c1d body=69 status=ok
// SIG undefined FUN_142c38c1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38c1d(void)

{
  _DAT_14c9d1850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1858,1);
  return;
}



// FUNCTION 142c38c62 FUN_142c38c62 body=69 status=ok
// SIG undefined FUN_142c38c62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38c62(void)

{
  _DAT_14c9d1860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1868,1);
  return;
}



// FUNCTION 142c38ca7 FUN_142c38ca7 body=69 status=ok
// SIG undefined FUN_142c38ca7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38ca7(void)

{
  _DAT_14c9d1870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38ce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1878,1);
  return;
}



// FUNCTION 142c38cec FUN_142c38cec body=69 status=ok
// SIG undefined FUN_142c38cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38cec(void)

{
  _DAT_14c9d1880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1888,1);
  return;
}



// FUNCTION 142c38d31 FUN_142c38d31 body=69 status=ok
// SIG undefined FUN_142c38d31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38d31(void)

{
  _DAT_14c9d1890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d1898,1);
  return;
}



// FUNCTION 142c38d76 FUN_142c38d76 body=69 status=ok
// SIG undefined FUN_142c38d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38d76(void)

{
  _DAT_14c9d18a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d18a8,1);
  return;
}



// FUNCTION 142c38dbb FUN_142c38dbb body=69 status=ok
// SIG undefined FUN_142c38dbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38dbb(void)

{
  _DAT_14c9d18b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d18b8,1);
  return;
}



// FUNCTION 142c38e00 FUN_142c38e00 body=69 status=ok
// SIG undefined FUN_142c38e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38e00(void)

{
  _DAT_14c9d18c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d18c8,1);
  return;
}



// FUNCTION 142c38e45 FUN_142c38e45 body=69 status=ok
// SIG undefined FUN_142c38e45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38e45(void)

{
  _DAT_14c9d18d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d18d8,1);
  return;
}



// FUNCTION 142c38e8a FUN_142c38e8a body=69 status=ok
// SIG undefined FUN_142c38e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c38e8a(void)

{
  _DAT_14c9d18e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c38ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d18f0,1);
  return;
}



// FUNCTION 142c38ef3 FUN_142c38ef3 body=150 status=ok
// SIG undefined FUN_142c38ef3(void)

void FUN_142c38ef3(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((longlong)(int)param_4[1] != 0) && (0 < DAT_14c7602b0)) {
    lVar1 = *param_4;
    lVar2 = (longlong)(int)param_4[1] * 0x13c10;
    do {
      if ((*(char *)(lVar1 + 0x11a08) == '\x01') && ((*(byte *)(lVar1 + 0x11f60) & 1) != 0)) {
        FUN_142c38f89(param_1,param_3,lVar1,lVar1 + 0x11a10,lVar1 + 0x11bb0,param_2,0,0);
      }
      lVar1 = lVar1 + 0x13c10;
      lVar2 = lVar2 + -0x13c10;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 142c38f89 FUN_142c38f89 body=2237 status=ok
// SIG undefined FUN_142c38f89(void)

void FUN_142c38f89(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,char param_7,longlong param_8)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  byte bVar18;
  byte bVar19;
  undefined8 *puVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong *local_188;
  undefined1 local_179;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  byte bStack_14a;
  undefined8 local_148 [12];
  undefined1 local_e8 [48];
  undefined8 *local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_190 = param_4;
  if (param_2 != 0) {
    if (param_7 == '\0') {
      bVar18 = 0;
      local_1b0 = (undefined8 *)((ulonglong)local_1b0._4_4_ << 0x20);
    }
    else if (DAT_14c7602d8 == 2) {
      local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,3);
      bVar18 = 1;
    }
    else {
      if (DAT_14c7602d8 == 1) {
        local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,2);
      }
      else {
        local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,1);
      }
      bVar18 = 0;
    }
    local_1a0 = CONCAT71(local_1a0._1_7_,param_7 != '\0');
    if (*(longlong *)(param_2 + 0x3608) == 0) {
      bVar21 = false;
    }
    else {
      bVar21 = (*(byte *)(*(longlong *)(param_2 + 0x3608) + 0x20) & 4) == 0;
    }
    bVar7 = FUN_142bcede5(param_2,*(undefined8 *)(param_3 + 8));
    lVar11 = *(longlong *)(param_3 + 8);
    cVar8 = FUN_14019f353(*(undefined4 *)(param_2 + 8));
    if ((cVar8 == '\0') || (*(int *)(param_2 + 0x3748) == 0)) {
      bVar19 = 0;
    }
    else {
      bVar19 = *(byte *)(lVar11 + 0x50) & 1;
    }
    if (*(int *)(param_2 + 0x3f00) < 1) {
      bVar22 = false;
    }
    else if (*(int *)(*(longlong *)(param_2 + 0x3eb8) + 8) < 3) {
      bVar22 = 0 < *(int *)(param_2 + 0x3bf0);
    }
    else {
      bVar22 = *(longlong *)(param_2 + 0x3c00) != 0;
    }
    local_198 = param_1;
    bVar9 = FUN_1449a7bda(param_2,param_3,0,0);
    lVar11 = local_198;
    bVar18 = bVar18 & ~bVar9 & bVar22 & DAT_14c760e18;
    if ((((bVar21 || bVar19 != 0) || bVar7 != 0) || (param_7 == '\0' || bVar9 != 0)) ||
       (bVar18 != 0)) {
      FUN_14494b062(local_148,local_198,*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x348));
      local_188 = (ulonglong *)(lVar11 + 0x70);
      puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar20 + 0x8a;
      if (*(undefined8 **)(lVar11 + 0x78) < puVar14) {
        FUN_140023dd8(local_188,0x460);
        puVar20 = (undefined8 *)(*local_188 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar20 + 0x8a;
      }
      *(undefined8 **)(lVar11 + 0x70) = puVar14;
      *puVar20 = &PTR_FUN_14a21d9c0;
      local_1a8 = puVar20 + 2;
      FUN_1471759d8();
      iVar4 = *(int *)(lVar11 + 0xa0);
      *(uint *)(lVar11 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(lVar11 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8(lVar11 + 0x98,iVar4);
      }
      *(undefined8 **)(*(longlong *)(lVar11 + 0x98) + (longlong)iVar4 * 8) = puVar20;
      puVar20[0x5a] = param_6;
      uVar10 = FUN_1406d601c(lVar11,param_3,1,1);
      puVar20[0x5b] = uVar10;
      *(uint *)(puVar20 + 0x4e) = (uint)bVar7;
      *(uint *)((longlong)puVar20 + 0x274) = (uint)bVar18;
      FUN_142cbfa76(&local_b8,*(undefined8 *)(param_2 + 0x3608),0x3f800000);
      *(undefined4 *)(local_1a8 + 4) = local_98;
      *(undefined4 *)((longlong)local_1a8 + 0x24) = uStack_94;
      *(undefined4 *)(local_1a8 + 5) = uStack_90;
      *(undefined4 *)((longlong)local_1a8 + 0x2c) = uStack_8c;
      *(undefined4 *)(local_1a8 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_1a8 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(local_1a8 + 3) = uStack_a0;
      *(undefined4 *)((longlong)local_1a8 + 0x1c) = uStack_9c;
      *local_1a8 = local_b8;
      local_1a8[1] = lStack_b0;
      fVar23 = DAT_14c7602d4;
      if (DAT_14c7602d4 <= 1.0) {
        fVar23 = 1.0;
      }
      *(float *)((longlong)puVar20 + 0x284) = fVar23;
      *(uint *)(puVar20 + 0x51) = (uint)(DAT_14c7602cc != 0 && *(longlong *)(local_190 + 0x18) != 0)
      ;
      *(uint *)(puVar20 + 0x4f) = DAT_14c7602c0 + (uint)(DAT_14c7602c0 == 0);
      *(undefined4 *)((longlong)puVar20 + 0x27c) = DAT_14c9d6e20;
      fVar23 = 0.0;
      if (0.0 <= DAT_14c7602c8) {
        fVar23 = DAT_14c7602c8;
      }
      *(float *)(puVar20 + 0x50) = fVar23;
      puVar20[0x58] = *(undefined8 *)(DAT_14ca63b68 + 8);
      puVar20[0x59] = DAT_14c9c0de0;
      puVar14 = local_148;
      puVar17 = puVar20 + 8;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar17 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar17 = puVar17 + 1;
      }
      uVar10 = *(undefined8 *)(param_5 + 0xe0);
      lVar16 = FUN_1414708b2();
      cVar8 = *(char *)(lVar16 + 0x41);
      if (*(char *)(lVar16 + 0x41) == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[0x66] = uVar10;
      *(char *)(puVar20 + 0x67) = cVar8;
      uVar10 = *(undefined8 *)(param_3 + 0x11a00);
      lVar16 = FUN_144a81af4();
      cVar8 = *(char *)(lVar16 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[100] = uVar10;
      *(char *)(puVar20 + 0x65) = cVar8;
      lVar16 = FUN_1447e4f80();
      cVar8 = *(char *)(lVar16 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[0x5c] = *(undefined8 *)(param_3 + 0x18);
      *(char *)(puVar20 + 0x5d) = cVar8;
      lVar16 = FUN_144a888ee();
      cVar8 = *(char *)(lVar16 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[0x60] = *(undefined8 *)(param_3 + 0x13710);
      *(char *)(puVar20 + 0x61) = cVar8;
      uVar10 = FUN_144886931(lVar11,param_3);
      lVar11 = FUN_144a89262();
      cVar8 = *(char *)(lVar11 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[0x5e] = uVar10;
      *(char *)(puVar20 + 0x5f) = cVar8;
      FUN_1448a862c(local_e8);
      FUN_14019e00e(&local_b8,local_e8,0,1);
      lVar11 = FUN_1448a8484();
      puVar14 = local_b8;
      cVar8 = *(char *)(lVar11 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar20[0x4c] = local_b8;
      *(char *)(puVar20 + 0x4d) = cVar8;
      if (local_b8 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = (uint *)(local_b8 + 1);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b8 + 1);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)((longlong)local_b8 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = (longlong)puVar14;
            plVar15 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar15;
                LOCK();
                bVar21 = plVar15 != DAT_14ca843c0;
                plVar13 = plVar12;
                if (bVar21) {
                  plVar15 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar21);
            }
            else {
              do {
                *plVar12 = (longlong)plVar13;
                LOCK();
                bVar21 = plVar13 != DAT_14ca843c8;
                plVar15 = plVar12;
                if (bVar21) {
                  plVar13 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar21);
            }
          }
        }
      }
      bVar7 = (DAT_14c9d18f8 != 0 && *(longlong *)(param_3 + 0x136f0) != 0) & (byte)local_1a0;
      uVar10 = FUN_14476842e(local_198,&DAT_14ca63ba8,L"DepthDummy",2);
      lVar11 = local_198;
      puVar20[0x54] = uVar10;
      uVar10 = DAT_14c9c0d80;
      puVar20[0x55] = DAT_14c9c0d80;
      *(uint *)((longlong)puVar20 + 0x28c) = (uint)bVar7;
      if (bVar7 == 1) {
        fVar23 = (float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8));
        fVar25 = (float)(*(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc)) /
                 (float)(*(int *)(param_3 + 0x137cc) * 2);
        uVar3 = *(undefined4 *)(param_3 + 0x109c);
        fVar24 = fVar23 / (float)(*(int *)(param_3 + 0x137c8) * 2);
        *(float *)(puVar20 + 0x56) = fVar24;
        *(float *)((longlong)puVar20 + 0x2b4) = fVar25;
        *(float *)(puVar20 + 0x57) = 1.0 / fVar24;
        *(float *)((longlong)puVar20 + 700) = 1.0 / fVar25;
        puVar20[0x54] = *(undefined8 *)(param_3 + 0x136f0);
        puVar20[0x55] = uVar10;
        *(float *)((longlong)puVar20 + 0x294) = 256.0 / fVar23;
        *(undefined4 *)(puVar20 + 0x53) = uVar3;
        *(undefined4 *)(puVar20 + 0x52) = 0x3f000000;
      }
      if (param_7 == '\x02') {
        lVar16 = *(longlong *)(param_3 + 0x3108);
        FUN_142d8cb88(&local_b8,param_3);
        local_1b8 = puVar20 + 0x14;
        FUN_1471defca(param_3,lVar11,lVar16 + 0x1ae0,&local_b8);
      }
      uVar10 = *(undefined8 *)(param_3 + 0x13780);
      lVar16 = FUN_144a12b9e();
      cVar8 = '\x02';
      if (*(char *)(lVar16 + 0x41) != '\x03') {
        cVar8 = *(char *)(lVar16 + 0x41);
      }
      puVar20[0x62] = uVar10;
      *(char *)(puVar20 + 99) = cVar8;
      puVar20[0x68] = 0;
      if (*(longlong *)(param_3 + 0x138d0) != 0) {
        FUN_1472ea582(lVar11,param_3 + 0x13870,puVar20 + 0x42);
      }
      if (param_8 != 0) {
        FUN_14716adc6(lVar11,param_8,puVar20 + 0x46);
      }
      lVar16 = local_190;
      uStack_14c = param_7 == '\x02';
      local_150 = (int)local_1b0;
      uStack_14b = (int)local_1b0 == 2 && param_8 != 0;
      local_1a0 = *(undefined8 *)(local_190 + 0x148);
      uVar10 = *(undefined8 *)(param_3 + 0x13818);
      bStack_14a = bVar18;
      FUN_145f9080e();
      FUN_1448e935e(uVar10,&local_b8,&DAT_14c9d1bb8,0);
      FUN_145f9080e();
      lVar6 = lStack_b0;
      local_1b0 = local_b8;
      FUN_14717594e(&local_160,*(undefined8 *)(param_3 + 0x13818),&local_150);
      puVar20[0x6a] = *(undefined8 *)(lVar16 + 0x150);
      puVar20[0x6b] = 0;
      *(undefined4 *)(puVar20 + 0x6c) = 0xffff0001;
      local_178 = local_160;
      uStack_174 = uStack_15c;
      uStack_170 = uStack_158;
      uStack_16c = uStack_154;
      FUN_145f42716();
      FUN_140069376(lVar11);
      puVar5 = local_188;
      puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 0x3e;
      if (*(undefined8 **)(lVar11 + 0x78) < puVar14) {
        FUN_140023dd8(local_188,0x1f8);
        puVar20 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar20 + 0x3e;
      }
      *puVar5 = (ulonglong)puVar14;
      local_b8 = local_1a8;
      lStack_b0 = DAT_14c9d45c8;
      if (DAT_14c9d45c8 != 0) {
        LOCK();
        *(int *)(DAT_14c9d45c8 + 8) = *(int *)(DAT_14c9d45c8 + 8) + 1;
        UNLOCK();
      }
      local_a8 = &DAT_14c9d4580;
      local_1b8 = (undefined8 *)CONCAT71(local_1b8._1_7_,2);
      FUN_140068f1a(puVar20,&local_179,&local_b8,1);
      *puVar20 = &PTR_FUN_14a21d9d0;
      puVar20[0x37] = local_1a8;
      puVar20[0x38] = local_1b0;
      puVar20[0x39] = lVar6;
      *(undefined4 *)(puVar20 + 0x3a) = local_178;
      *(undefined4 *)((longlong)puVar20 + 0x1d4) = uStack_174;
      *(undefined4 *)(puVar20 + 0x3b) = uStack_170;
      *(undefined4 *)((longlong)puVar20 + 0x1dc) = uStack_16c;
      puVar20[0x3c] = local_1a0;
      puVar20[0x3d] = param_3;
      iVar4 = *(int *)(lVar11 + 0x170);
      *(uint *)(lVar11 + 0x170) = iVar4 + 1U;
      if (*(uint *)(lVar11 + 0x174) < iVar4 + 1U) {
        FUN_14470e57a(lVar11 + 0x168,iVar4);
      }
      *(undefined8 **)(*(longlong *)(lVar11 + 0x168) + (longlong)iVar4 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar11 + 0x170) + -1;
      FUN_140069100(lVar11,puVar20);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c39847 FUN_142c39847 body=196 status=ok
// SIG undefined FUN_142c39847(void)

void FUN_142c39847(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if ((((0 < DAT_14c7602b4) && (*(char *)(param_3 + 0x11a08) == '\x01')) &&
      (*(longlong *)(param_3 + 0x11c90) != 0)) &&
     (((*(longlong *)(param_3 + 0x11c98) != 0 && (*(longlong *)(param_3 + 0x11ca8) != 0)) &&
      (*(longlong *)(param_3 + 0x11a20) != 0)))) {
    FUN_142c38f89();
  }
  return;
}



// FUNCTION 142c3990b FUN_142c3990b body=1402 status=ok
// SIG undefined FUN_142c3990b(void)

void FUN_142c3990b(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 local_160;
  ulonglong *local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  undefined1 local_109;
  undefined8 local_108 [12];
  undefined8 *local_a8;
  longlong lStack_a0;
  undefined *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((0 < DAT_14c7602b8) && (*(char *)(param_2 + 0x11a08) == '\x01')) && (*param_3 != 0)) &&
     ((longlong)*(int *)(param_2 + 0x11b78) != 0)) {
    local_120 = *(longlong *)(param_2 + 0x11b70);
    local_130 = (undefined8 *)(param_2 + 0x3100);
    local_158 = (ulonglong *)(param_1 + 0x70);
    local_148 = (longlong *)(param_1 + 0x98);
    local_138 = param_2 + 0x13870;
    local_140 = param_1 + 0x168;
    local_128 = (longlong)*(int *)(param_2 + 0x11b78) * 0x78;
    lVar14 = 0;
    local_118 = param_3;
    do {
      lVar4 = *local_118;
      FUN_14494b062(local_108,param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x348));
      puVar7 = local_158;
      iVar1 = *(int *)(param_2 + 0x30f8);
      iVar2 = *(int *)(param_2 + 0x3100);
      local_160 = CONCAT44(local_160._4_4_,*(undefined4 *)(lVar4 + 0x84));
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar13 = puVar11 + 0x40;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_158,0x210);
        puVar11 = (undefined8 *)(*puVar7 + 0xf & 0xfffffffffffffff0);
        puVar13 = puVar11 + 0x40;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar13;
      *puVar11 = &PTR_FUN_14a21d9e8;
      local_150 = puVar11 + 2;
      FUN_147175b80();
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_148,iVar3);
      }
      *(undefined8 **)(*local_148 + (longlong)iVar3 * 8) = puVar11;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(local_120 + 0x68 + lVar14);
      fVar16 = 1.0;
      if (*(double *)(param_2 + 0x8a8) <= 1.0 && *(double *)(param_2 + 0x8a8) != 1.0) {
        fVar16 = 0.0;
        if (0.0 <= DAT_14c7602bc) {
          fVar16 = DAT_14c7602bc;
        }
        fVar16 = tanf(fVar16 * 0.017453292);
      }
      *(float *)((longlong)puVar11 + 0x14) = fVar16;
      puVar13 = local_108;
      puVar12 = puVar11 + 8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x11c90);
      lVar10 = FUN_1414708b2();
      cVar8 = *(char *)(lVar10 + 0x41);
      if (*(char *)(lVar10 + 0x41) == '\x03') {
        cVar8 = '\x02';
      }
      puVar11[0x16] = uVar5;
      *(char *)(puVar11 + 0x17) = cVar8;
      lVar10 = FUN_1447e4f80();
      cVar8 = *(char *)(lVar10 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar11[0x14] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar11 + 0x15) = cVar8;
      uVar5 = *(undefined8 *)(param_2 + 0x11a00);
      lVar10 = FUN_144a81af4();
      cVar8 = *(char *)(lVar10 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar11[0x18] = uVar5;
      *(char *)(puVar11 + 0x19) = cVar8;
      uVar5 = *(undefined8 *)(param_2 + 0x118d0);
      lVar10 = FUN_144a2c9be();
      cVar8 = *(char *)(lVar10 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar11[0x1a] = uVar5;
      *(char *)(puVar11 + 0x1b) = cVar8;
      *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x2b0c);
      *(undefined4 *)((longlong)puVar11 + 0x1c) = *(undefined4 *)(param_2 + 0x2af0);
      uVar9 = DAT_14c7602c4 + (uint)(DAT_14c7602c4 == 0);
      bVar15 = (int)local_160 == ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) - iVar1 / 2;
      *(uint *)(puVar11 + 4) = uVar9;
      fVar16 = DAT_14c7602d0;
      if (DAT_14c7602d0 <= 1.0) {
        fVar16 = 1.0;
      }
      *(float *)((longlong)puVar11 + 0x24) = fVar16;
      puVar11[0x20] = lVar4;
      puVar11[0x21] = 0;
      *(undefined4 *)(puVar11 + 0x22) = 0xffff0001;
      *(uint *)(puVar11 + 5) = (uint)bVar15;
      iVar1 = *(int *)(lVar4 + 0x88);
      *(float *)(puVar11 + 6) = 1.0 / (float)*(int *)(lVar4 + 0x84);
      *(float *)((longlong)puVar11 + 0x34) = 1.0 / (float)iVar1;
      if (bVar15) {
        puVar13 = (undefined8 *)(lVar4 + 0x84);
        local_160 = 0;
      }
      else {
        local_160 = *(undefined8 *)(param_2 + 0x30f8);
        puVar13 = local_130;
      }
      uVar5 = *puVar13;
      if (*(longlong *)(param_2 + 0x138d0) != 0) {
        FUN_1472ea582(param_1,local_138,puVar11 + 0x1c);
        uVar9 = *(uint *)(puVar11 + 4);
      }
      uVar6 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f41eb2();
      FUN_1448e935e(uVar6,&local_a8,&DAT_14c9d1968,0x10 < uVar9);
      FUN_145f41eb2();
      lVar4 = lStack_a0;
      puVar11 = local_a8;
      FUN_145f42120();
      local_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
      FUN_1448f70da(puVar11,&DAT_14c9d44f8,local_150,&local_a8);
      FUN_145f42120();
      FUN_140069376(param_1);
      puVar7 = local_158;
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0x3d;
      if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
        FUN_140023dd8(local_158,0x1f0);
        puVar12 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar12 + 0x3d;
      }
      *local_158 = (ulonglong)puVar13;
      local_a8 = local_150;
      lStack_a0 = DAT_14c9d4540;
      if (DAT_14c9d4540 != 0) {
        LOCK();
        *(int *)(DAT_14c9d4540 + 8) = *(int *)(DAT_14c9d4540 + 8) + 1;
        UNLOCK();
      }
      local_98 = &DAT_14c9d44f8;
      local_168 = 2;
      FUN_140068f1a(puVar12,&local_109,&local_a8,1);
      *puVar12 = &PTR_FUN_14a21d9f0;
      puVar12[0x37] = local_150;
      puVar12[0x38] = param_2;
      puVar12[0x39] = puVar11;
      puVar12[0x3a] = lVar4;
      puVar12[0x3b] = local_160;
      puVar12[0x3c] = uVar5;
      iVar1 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
        FUN_14470e57a(local_140,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar12);
      lVar14 = lVar14 + 0x78;
    } while (local_128 != lVar14);
  }
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c39ece FUN_142c39ece body=4469 status=ok
// SIG undefined FUN_142c39ece(void)

undefined8 *
FUN_142c39ece(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_2a8 [32];
  int *local_288;
  undefined1 local_280;
  longlong *local_278;
  undefined8 *local_270;
  longlong local_268;
  longlong local_260;
  ulonglong local_258;
  longlong local_250;
  longlong local_248;
  undefined8 *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 *local_228;
  longlong local_220;
  int local_214;
  undefined1 *local_210;
  int local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined2 local_1c5;
  undefined1 local_1c3;
  ulonglong local_60;
  
  lVar19 = DAT_14cae3fc8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  uVar12 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  if ((3 < (int)(&DAT_14ca814b8)[uVar12 * 0xf]) && (0 < DAT_14cae3fd0)) {
    iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar8 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar8 == 2)))) {
      uVar18 = 0;
    }
    else if (iVar8 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      uVar18 = (ulonglong)(DVar10 != DVar11);
    }
    else {
      uVar18 = 1;
    }
    if (((((0 < *(int *)(lVar19 + uVar18 * 4)) &&
          ((*(byte *)((longlong)&DAT_14ca814d0 + uVar12 * 0x3c + 5) & 8) != 0)) &&
         (2 < (int)(&DAT_14ca814b8)[uVar12 * 0xf])) &&
        ((*(longlong *)(&DAT_14ca814b0 + uVar12 * 0x3c) != DAT_14ca81498 &&
         (*(longlong *)(&DAT_14ca814b0 + uVar12 * 0x3c) != DAT_14ca838f8)))) &&
       ((longlong)(int)param_4[1] != 0)) {
      lVar19 = *param_4;
      lVar20 = (longlong)(int)param_4[1] * 0x78 + lVar19;
      uVar21 = 0;
      do {
        if ((longlong)*(int *)(lVar19 + 0x18) != 0) {
          lVar26 = 0;
          do {
            lVar28 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + lVar26);
            if ((lVar28 != 0) && (*(int *)(lVar28 + 0xb0) != 0)) {
              lVar24 = *(longlong *)(lVar28 + 0xa8);
              if (*(longlong *)(lVar28 + 0xa8) == 0) {
                lVar24 = lVar28;
              }
              uVar21 = uVar21 + *(int *)(*(longlong *)(lVar24 + 0x40) + 0x48c);
            }
            lVar26 = lVar26 + 0x28;
          } while ((longlong)*(int *)(lVar19 + 0x18) * 0x28 != lVar26);
        }
        lVar19 = lVar19 + 0x78;
      } while (lVar19 != lVar20);
      if (uVar21 != 0) {
        *(undefined4 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        uVar5 = *param_5;
        *param_1 = uVar5;
        local_1e0 = DAT_14ca85098;
        uStack_1f0 = DAT_14ca85088;
        uStack_1ec = DAT_14ca8508c;
        uStack_1e8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
        local_1dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_1c6 = 0;
        local_1f8 = 0x20008;
        iStack_1f4 = 0;
        local_1c5 = 0x1c;
        local_1cc = 0x10001;
        local_1c8 = 0x101;
        local_1d8 = 0;
        local_1c3 = 0xff;
        local_1d4 = DAT_14ca84e40;
        if ((int)uVar5 < DAT_14ca84e40) {
          local_1d4 = (int)uVar5;
        }
        if (local_1d4 < 2) {
          local_1d4 = 1;
        }
        iVar8 = (int)((ulonglong)uVar5 >> 0x20);
        local_1d0 = DAT_14ca84e40;
        if (iVar8 < DAT_14ca84e40) {
          local_1d0 = iVar8;
        }
        if (local_1d0 < 2) {
          local_1d0 = 1;
        }
        plVar16 = (longlong *)(param_2 + 0x70);
        uVar18 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar12 = uVar18 + 0x120;
        local_278 = plVar16;
        local_260 = param_3;
        if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
          FUN_140023dd8(plVar16,0x128);
          uVar18 = *plVar16 + 7U & 0xfffffffffffffff8;
          uVar12 = uVar18 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar12;
        local_270 = param_1;
        FUN_1456bbb8c(uVar18,L"Hair.VisibilityCompactNodeIndex",&local_1f8,0);
        iVar8 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
          FUN_14472c0f6(param_2 + 0x178,iVar8);
        }
        plVar16 = local_278;
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar18;
        *(int *)(uVar18 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        uVar6 = DAT_14ca84e48;
        uVar17 = 8;
        if (DAT_14ca84e48 < 8) {
          uVar17 = DAT_14ca84e48;
        }
        param_1[2] = uVar18;
        local_1f8 = uVar17 + (uVar17 == 0);
        uStack_1f0 = 0x10109;
        if (uVar21 < uVar6) {
          uVar6 = uVar21;
        }
        uStack_1e8 = 0;
        iStack_1f4 = uVar6 + (uVar6 == 0);
        uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar12 = uVar27 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
          FUN_140023dd8(local_278,0x160);
          uVar27 = *plVar16 + 0xfU & 0xfffffffffffffff0;
          uVar12 = uVar27 + 0x150;
        }
        lVar19 = param_2 + 0x188;
        *(ulonglong *)(param_2 + 0x70) = uVar12;
        FUN_1456bd266(uVar27,L"Hair.VisibilityNodeVis",&local_1f8,0);
        iVar8 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar8 + 1U) {
          FUN_144737178(lVar19,iVar8);
        }
        plVar16 = local_278;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar8 * 8) = uVar27;
        *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
        uVar6 = DAT_14ca84e48;
        uVar17 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar17 = DAT_14ca84e48;
        }
        local_270[4] = uVar27;
        local_1f8 = uVar17 + (uVar17 == 0);
        uStack_1f0 = 0x4109;
        if (uVar21 < uVar6) {
          uVar6 = uVar21;
        }
        uStack_1e8 = 0;
        iStack_1f4 = uVar6 + (uVar6 == 0);
        uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar12 = uVar27 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
          FUN_140023dd8(local_278,0x160);
          uVar27 = *plVar16 + 0xfU & 0xfffffffffffffff0;
          uVar12 = uVar27 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar12;
        FUN_1456bd266(uVar27,L"Hair.VisibilityNodeCoord",&local_1f8,0);
        iVar8 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar8 + 1U) {
          FUN_144737178(lVar19,iVar8);
        }
        plVar16 = local_278;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar8 * 8) = uVar27;
        *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
        uVar6 = DAT_14ca84e48;
        uVar17 = 0x10;
        if (DAT_14ca84e48 < 0x10) {
          uVar17 = DAT_14ca84e48;
        }
        local_270[3] = uVar27;
        local_1f8 = uVar17 + (uVar17 == 0);
        uStack_1f0 = 0x4109;
        if (uVar21 < uVar6) {
          uVar6 = uVar21;
        }
        uStack_1e8 = 0;
        iStack_1f4 = uVar6 + (uVar6 == 0);
        uVar27 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar12 = uVar27 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
          FUN_140023dd8(local_278,0x160);
          uVar27 = *plVar16 + 0xfU & 0xfffffffffffffff0;
          uVar12 = uVar27 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar12;
        FUN_1456bd266(uVar27,L"Hair.ControlPoints",&local_1f8,0);
        iVar8 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar8 + 1U) {
          FUN_144737178(lVar19,iVar8);
        }
        plVar16 = local_278;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar8 * 8) = uVar27;
        *(int *)(uVar27 + 0x7c) = *(int *)(param_2 + 400) + -1;
        local_270[6] = uVar27;
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar25 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
          FUN_140023dd8(local_278,0x50);
          puVar25 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar25 + 9;
        }
        local_268 = param_2 + 0x198;
        *(undefined8 **)(param_2 + 0x70) = puVar13;
        puVar25[1] = *(undefined8 *)(uVar27 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 3;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *puVar25 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar25 + 5) = 1;
        *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
        puVar25[7] = 0;
        puVar25[8] = uVar27;
        iVar8 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_268,iVar8);
        }
        plVar16 = local_278;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        local_270[7] = puVar25;
        uStack_1e8 = 0;
        uVar21 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar21 = DAT_14ca84e48;
        }
        local_1f8 = uVar21 + (uVar21 == 0);
        iStack_1f4 = 1;
        uStack_1f0 = 0x10109;
        uVar22 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar12 = uVar22 + 0x150;
        if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
          FUN_140023dd8(local_278,0x160);
          uVar22 = *plVar16 + 0xfU & 0xfffffffffffffff0;
          uVar12 = uVar22 + 0x150;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar12;
        FUN_1456bd266(uVar22,L"Hair.ControlPointCount",&local_1f8,0);
        iVar8 = *(int *)(param_2 + 400);
        *(uint *)(param_2 + 400) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x194) < iVar8 + 1U) {
          FUN_144737178(lVar19,iVar8);
        }
        plVar16 = local_278;
        *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar8 * 8) = uVar22;
        *(int *)(uVar22 + 0x7c) = *(int *)(param_2 + 400) + -1;
        local_270[5] = uVar22;
        *(undefined4 *)(local_270 + 1) = 0;
        local_240 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar13 = local_240 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
          FUN_140023dd8(local_278,0x48);
          local_240 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
          puVar13 = local_240 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar13;
        local_240[1] = *(undefined8 *)(uVar27 + 8);
        local_240[2] = 0;
        *(undefined1 *)(local_240 + 3) = 2;
        *(undefined8 *)((longlong)local_240 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_240 + 5) = 0;
        *local_240 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(local_240 + 6) = 1;
        *(undefined1 *)((longlong)local_240 + 0x32) = 0;
        local_240[7] = uVar27;
        iVar8 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_268,iVar8);
        }
        plVar16 = local_278;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = local_240;
        *(int *)((longlong)local_240 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        cVar7 = *(char *)(uVar22 + 0x68);
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar25 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
          FUN_140023dd8(local_278,0x48);
          puVar25 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar25 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar13;
        puVar25[1] = *(undefined8 *)(uVar22 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 2;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar25 + 5) = 0;
        *puVar25 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar25 + 6) = cVar7 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
        puVar25[7] = uVar22;
        iVar8 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_268,iVar8);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_1405bfba3(param_2,puVar25,0,2);
        plVar16 = local_278;
        uVar2 = *(undefined1 *)(uVar18 + 0x94);
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar25 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
          FUN_140023dd8(local_278,0x50);
          puVar25 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar25 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar13;
        puVar25[1] = *(undefined8 *)(uVar18 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 0;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar25 + 5) = 0;
        *puVar25 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar25 + 6) = uVar2;
        *(undefined1 *)(puVar25 + 7) = 0;
        *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
        puVar25[8] = uVar18;
        iVar8 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_268,iVar8);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        local_1f8 = 0;
        iStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        FUN_14042f6c6(param_2,puVar25,&local_1f8,2);
        lVar20 = local_260;
        lVar19 = *(longlong *)(local_260 + 0x3110);
        local_288 = (int *)(lVar19 + 0x12d8);
        FUN_147180d50(local_260,0,lVar19 + 0x12c0,lVar19 + 0x12d4);
        FUN_1401ee234(&local_1f8,*(undefined8 *)(lVar20 + 0x3110),1,1);
        lVar19 = CONCAT44(iStack_1f4,local_1f8);
        uVar5 = *(undefined8 *)(lVar20 + 0x13818);
        FUN_145f429ba();
        FUN_1448e935e(uVar5,&local_1f8,&DAT_14c9d1ce0,0);
        FUN_145f429ba();
        local_208 = local_1f8;
        uStack_204 = iStack_1f4;
        uStack_200 = uStack_1f0;
        uStack_1fc = uStack_1ec;
        if ((longlong)(int)param_4[1] != 0) {
          lVar20 = *param_4;
          local_238 = (longlong)(int)param_4[1] * 0x78 + lVar20;
          local_250 = param_2 + 0x98;
          local_248 = lVar19;
          do {
            iVar8 = *(int *)(lVar20 + 0x18);
            if ((longlong)iVar8 != 0) {
              lVar26 = *(longlong *)(lVar20 + 0x10);
              lVar28 = 0;
              local_230 = lVar20;
              do {
                plVar16 = local_278;
                lVar24 = *(longlong *)(lVar26 + lVar28);
                if ((lVar24 != 0) && (*(int *)(lVar24 + 0xb0) != 0)) {
                  lVar19 = *(longlong *)(lVar24 + 0xa8);
                  if (*(longlong *)(lVar24 + 0xa8) == 0) {
                    lVar19 = lVar24;
                  }
                  local_220 = *(longlong *)(lVar19 + 0x40);
                  uVar4 = *(undefined4 *)(local_220 + 0x48c);
                  local_258 = (ulonglong)*(uint *)(local_220 + 0x490);
                  puVar25 = (undefined8 *)
                            (*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar13 = puVar25 + 0x40;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
                    FUN_140023dd8(local_278,0x210);
                    puVar25 = (undefined8 *)(*plVar16 + 0xfU & 0xfffffffffffffff0);
                    puVar13 = puVar25 + 0x40;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar13;
                  *puVar25 = &PTR_FUN_14a222880;
                  puVar25[0x2c] = 0;
                  puVar25[0x2d] = 0;
                  puVar25[0x2e] = 0;
                  puVar25[0x2f] = 0;
                  puVar25[0x30] = 0;
                  puVar25[0x31] = 0;
                  puVar25[0x33] = 0;
                  puVar25[0x34] = 0;
                  puVar25[0x35] = 0;
                  *(undefined4 *)(puVar25 + 0x36) = 4;
                  puVar25[0x38] = 0;
                  *(undefined1 *)(puVar25 + 0x39) = 1;
                  puVar25[0x3a] = 0;
                  puVar25[0x3b] = 0;
                  puVar25[0x3c] = 0;
                  puVar25[0x3d] = 0;
                  puVar25[0x3e] = 0;
                  iVar9 = *(int *)(param_2 + 0xa0);
                  *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
                  if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
                    FUN_1448cfae8(local_250,iVar9);
                  }
                  plVar16 = local_278;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar25;
                  uVar5 = *local_270;
                  *(float *)(puVar25 + 2) = (float)(int)uVar5;
                  *(float *)((longlong)puVar25 + 0x14) = (float)(int)((ulonglong)uVar5 >> 0x20);
                  *(undefined4 *)(puVar25 + 3) = *(undefined4 *)(lVar26 + 0x10 + lVar28);
                  *(undefined4 *)((longlong)puVar25 + 0x1c) = uVar4;
                  *(int *)(puVar25 + 4) = (int)local_258;
                  lVar19 = local_270[4];
                  cVar7 = *(char *)(lVar19 + 0x68);
                  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar13 = puVar23 + 8;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
                    FUN_140023dd8(local_278,0x48);
                    puVar23 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
                    puVar13 = puVar23 + 8;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar13;
                  puVar23[1] = *(undefined8 *)(lVar19 + 8);
                  puVar23[2] = 0;
                  *(undefined1 *)(puVar23 + 3) = 2;
                  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar23 + 5) = 0;
                  *puVar23 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar23 + 6) = cVar7 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar23 + 0x31) = 0;
                  puVar23[7] = lVar19;
                  iVar9 = *(int *)(param_2 + 0x1a0);
                  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
                  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
                    FUN_1447568fc(local_268,iVar9);
                  }
                  plVar16 = local_278;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar23;
                  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                  puVar25[0x3b] = puVar23;
                  lVar19 = local_270[3];
                  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar13 = puVar23 + 8;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
                    FUN_140023dd8(local_278,0x48);
                    puVar23 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
                    puVar13 = puVar23 + 8;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar13;
                  puVar23[1] = *(undefined8 *)(lVar19 + 8);
                  puVar23[2] = 0;
                  *(undefined1 *)(puVar23 + 3) = 2;
                  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar23 + 5) = 0;
                  *puVar23 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar23 + 6) = 0x31;
                  *(undefined1 *)((longlong)puVar23 + 0x32) = 0;
                  puVar23[7] = lVar19;
                  iVar9 = *(int *)(param_2 + 0x1a0);
                  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
                  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
                    FUN_1447568fc(local_268,iVar9);
                  }
                  plVar16 = local_278;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar23;
                  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                  puVar25[0x3c] = puVar23;
                  lVar19 = local_270[5];
                  cVar7 = *(char *)(lVar19 + 0x68);
                  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar13 = puVar23 + 8;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
                    FUN_140023dd8(local_278,0x48);
                    puVar23 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
                    puVar13 = puVar23 + 8;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar13;
                  puVar23[1] = *(undefined8 *)(lVar19 + 8);
                  puVar23[2] = 0;
                  *(undefined1 *)(puVar23 + 3) = 2;
                  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar23 + 5) = 0;
                  *puVar23 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar23 + 6) = cVar7 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar23 + 0x31) = 0;
                  puVar23[7] = lVar19;
                  iVar9 = *(int *)(param_2 + 0x1a0);
                  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
                  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
                    FUN_1447568fc(local_268,iVar9);
                  }
                  local_228 = puVar25 + 2;
                  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar23;
                  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                  puVar25[0x3d] = puVar23;
                  puVar25[0x3e] = local_240;
                  local_280 = param_8;
                  local_288 = (int *)((ulonglong)local_288 & 0xffffffffffffff00);
                  FUN_1471850f0(&local_1f8,param_2,local_260,local_220);
                  memcpy(puVar25 + 6,&local_1f8,400);
                  lVar20 = FUN_1447e4f80();
                  lVar19 = local_248;
                  cVar7 = *(char *)(lVar20 + 0x41);
                  if (*(char *)(lVar20 + 0x41) == '\x03') {
                    cVar7 = '\x02';
                  }
                  puVar25[0x38] = local_248;
                  *(char *)(puVar25 + 0x39) = cVar7;
                  iVar9 = (int)local_258 + 0x3ff;
                  local_214 = (int)local_258 + 0x7fe;
                  if (-1 < iVar9) {
                    local_214 = iVar9;
                  }
                  puVar25[0x3a] = param_6;
                  local_214 = local_214 >> 10;
                  local_210 = &DAT_100000001;
                  local_288 = &local_214;
                  FUN_14716cb1f(param_2,&local_1f8,&local_208,local_228);
                  *(int *)(local_270 + 1) = *(int *)(local_270 + 1) + 1;
                  lVar20 = local_230;
                }
                lVar28 = lVar28 + 0x28;
              } while ((longlong)iVar8 * 0x28 != lVar28);
            }
            lVar20 = lVar20 + 0x78;
          } while (lVar20 != local_238);
        }
        puVar13 = local_270;
        if (lVar19 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar19 + 8);
          uVar21 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar21 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar19 + 8);
            LOCK();
            uVar21 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar21 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar19 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = lVar19;
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar16;
                  LOCK();
                  bVar29 = plVar16 != DAT_14ca843c0;
                  plVar15 = plVar14;
                  if (bVar29) {
                    plVar16 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar29);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar15;
                  LOCK();
                  bVar29 = plVar15 != DAT_14ca843c8;
                  plVar16 = plVar14;
                  if (bVar29) {
                    plVar15 = DAT_14ca843c8;
                    plVar16 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar16;
                  UNLOCK();
                } while (bVar29);
              }
            }
          }
        }
        if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return puVar13;
      }
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 142c3b047 FUN_142c3b047 body=17128 status=ok
// SIG undefined FUN_142c3b047(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3b047(longlong param_1,longlong param_2,uint *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  char cVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_298 [32];
  uint *local_278;
  float local_270;
  longlong *local_260;
  longlong local_258;
  ulonglong local_250;
  uint local_248;
  uint local_244;
  longlong local_240;
  ulonglong local_238;
  undefined4 local_22c;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  longlong local_208;
  int local_1fc;
  longlong local_1f8;
  undefined8 *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 *local_180;
  ulonglong local_178;
  undefined8 *local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  undefined8 *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  uint local_120;
  undefined1 *local_11c;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b5;
  undefined1 local_b3;
  ulonglong local_b0;
  
  lVar11 = DAT_14cae3fc8;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar24 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2);
  local_188 = param_4;
  if ((3 < (int)(&DAT_14ca814b8)[uVar24 * 0xf]) && (0 < DAT_14cae3fd0)) {
    iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if ((iVar21 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar21 == 2)))) {
      uVar19 = 0;
    }
    else if (iVar21 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      uVar19 = (ulonglong)(DVar9 != DVar10);
    }
    else {
      uVar19 = 1;
    }
    if ((((0 < *(int *)(lVar11 + uVar19 * 4)) &&
         ((*(byte *)((longlong)&DAT_14ca814d0 + uVar24 * 0x3c + 5) & 8) != 0)) &&
        (2 < (int)(&DAT_14ca814b8)[uVar24 * 0xf])) &&
       ((*(longlong *)(&DAT_14ca814b0 + uVar24 * 0x3c) != DAT_14ca81498 &&
        (*(longlong *)(&DAT_14ca814b0 + uVar24 * 0x3c) != DAT_14ca838f8)))) {
      uVar28 = DAT_14c760384;
      if ((int)DAT_14c760384 < 2) {
        uVar28 = 1;
      }
      if (0xff < (int)uVar28) {
        uVar28 = 0x100;
      }
      local_210 = (ulonglong)uVar28;
      local_244 = 1;
      if (1 < (int)DAT_14c760388) {
        local_244 = DAT_14c760388;
      }
      if (0x3ff < (int)local_244) {
        local_244 = 0x400;
      }
      iVar21 = 0x40000;
      if (DAT_14c76038c < 0x40000) {
        iVar21 = DAT_14c76038c;
      }
      local_218 = (ulonglong)*param_3;
      if (iVar21 < 0x401) {
        iVar21 = 0x400;
      }
      local_220 = (ulonglong)param_3[1];
      uVar23 = iVar21 << 10;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      uStack_e0 = 0x4109;
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_d8 = 0;
      uVar28 = DAT_14ca84e48;
      if (uVar23 < DAT_14ca84e48) {
        uVar28 = uVar23;
      }
      iStack_e4 = uVar28 + (uVar28 == 0);
      plVar17 = (longlong *)(param_1 + 0x70);
      uVar19 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar24 = uVar19 + 0x150;
      local_260 = plVar17;
      local_1d8 = param_2;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(plVar17,0x160);
        uVar19 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar24 = uVar19 + 0x150;
      }
      local_240 = param_1 + 0x188;
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      FUN_1456bd266(uVar19,L"Hair.VisTilePrims",&local_e8,0);
      iVar4 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar4 + 1U) {
        FUN_144737178(local_240,iVar4);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8) = uVar19;
      *(int *)(uVar19 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 9;
      }
      local_258 = param_1 + 0x198;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar19 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 3;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *puVar30 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar30 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar30 + 0x2c) = 0xffffffff00000000;
      puVar30[7] = 0;
      puVar30[8] = uVar19;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_e0 = 0x4109;
      uVar28 = DAT_14ca84e48;
      if (uVar23 < DAT_14ca84e48) {
        uVar28 = uVar23;
      }
      uStack_d8 = 0;
      iStack_e4 = uVar28 + (uVar28 == 0);
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar24 = uVar27 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar24 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      local_148 = uVar19;
      FUN_1456bd266(uVar27,L"Hair.VisTilePrimDepths",&local_e8,0);
      iVar4 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar4 + 1U) {
        FUN_144737178(local_240,iVar4);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(uVar27 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 3;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *puVar25 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar25 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
      puVar25[7] = 0;
      puVar25[8] = uVar27;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      local_158 = uVar27;
      local_138 = puVar30;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      uVar29 = iVar21 * 5;
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_e0 = 0x10119;
      local_208 = CONCAT44(local_208._4_4_,uVar29);
      uVar28 = DAT_14ca84e48;
      if (uVar29 < DAT_14ca84e48) {
        uVar28 = uVar29;
      }
      uStack_d8 = 0;
      iStack_e4 = uVar28 + (uVar28 == 0);
      uVar19 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar24 = uVar19 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x160);
        uVar19 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar24 = uVar19 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      FUN_1456bd266(uVar19,L"Hair.VisTileData",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar19;
      *(int *)(uVar19 + 0x7c) = *(int *)(param_1 + 400) + -1;
      cVar18 = *(char *)(uVar19 + 0x68);
      local_150 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = local_150 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        local_150 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = local_150 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      local_150[1] = *(undefined8 *)(uVar19 + 8);
      local_150[2] = 0;
      *(undefined1 *)(local_150 + 3) = 3;
      *(undefined8 *)((longlong)local_150 + 0x1c) = 0xffffffffffffffff;
      *local_150 = &PTR_FUN_14a1fb168;
      *(byte *)(local_150 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)local_150 + 0x2c) = 0xffffffff00000000;
      local_150[7] = 0;
      local_150[8] = uVar19;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = local_150;
      *(int *)((longlong)local_150 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uStack_d8 = 0;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      iStack_e4 = 1;
      uStack_e0 = 0x4109;
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar24 = uVar27 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar24 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      FUN_1456bd266(uVar27,L"Hair.VisTileArgs",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar27 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar30 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
      puVar30[7] = uVar27;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      local_178 = uVar19;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      iVar4 = (int)local_220;
      local_248 = (int)local_218 + 0x1f;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      uVar28 = iVar4 + 0x1fU >> 5;
      local_248 = local_248 >> 5;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(uVar27 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar22 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = uVar27;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      local_1f0 = puVar30;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      sVar8 = (short)local_210 * 3;
      local_d0 = DAT_14ca85098;
      uStack_e0 = (undefined4)_DAT_14ca85088;
      uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
      uStack_d8 = _DAT_14ca85090;
      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_b6 = 1;
      local_e8 = 0x20008;
      iStack_e4 = 0;
      local_b5 = 0x1c;
      local_bc = CONCAT22(sVar8,1);
      local_b8 = 0x101;
      local_c8 = 0;
      local_c4 = DAT_14ca84e40;
      if ((int)local_248 < (int)DAT_14ca84e40) {
        local_c4 = local_248;
      }
      if ((int)local_c4 < 2) {
        local_c4 = 1;
      }
      local_b3 = 0xff;
      local_c0 = DAT_14ca84e40;
      if ((int)uVar28 < (int)DAT_14ca84e40) {
        local_c0 = uVar28;
      }
      if ((int)local_c0 < 2) {
        local_c0 = 1;
      }
      uVar19 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar24 = uVar19 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x128);
        uVar19 = *plVar17 + 7U & 0xfffffffffffffff8;
        uVar24 = uVar19 + 0x120;
      }
      local_1f8 = param_1 + 0x178;
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      local_180 = puVar22;
      FUN_1456bbb8c(uVar19,L"Hair.VisTileBinningGrid",&local_e8,0);
      iVar21 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar21 + 1U) {
        FUN_14472c0f6(local_1f8,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar21 * 8) = uVar19;
      *(int *)(uVar19 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      uVar2 = *(undefined1 *)(uVar19 + 0x94);
      local_1d0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = local_1d0 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        local_1d0 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = local_1d0 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      local_1d0[1] = *(undefined8 *)(uVar19 + 8);
      local_1d0[2] = 0;
      *(undefined1 *)(local_1d0 + 3) = 0;
      *(undefined8 *)((longlong)local_1d0 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(local_1d0 + 5) = 0;
      *local_1d0 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(local_1d0 + 6) = uVar2;
      *(undefined1 *)(local_1d0 + 7) = 0;
      *(undefined4 *)((longlong)local_1d0 + 0x31) = 0;
      *(undefined2 *)((longlong)local_1d0 + 0x35) = 0;
      local_1d0[8] = uVar19;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      local_160 = uVar19;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = local_1d0;
      *(int *)((longlong)local_1d0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      local_d0 = DAT_14ca85098;
      uStack_e0 = (undefined4)_DAT_14ca85088;
      uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
      uStack_d8 = _DAT_14ca85090;
      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_b6 = 1;
      local_e8 = 0x20008;
      iStack_e4 = 0;
      local_b5 = 0x1c;
      local_bc = CONCAT22(sVar8,1);
      local_b8 = 0x101;
      local_c8 = 0;
      local_c4 = DAT_14ca84e40;
      if ((int)local_248 < (int)DAT_14ca84e40) {
        local_c4 = local_248;
      }
      if ((int)local_c4 < 2) {
        local_c4 = 1;
      }
      local_b3 = 0xff;
      local_c0 = DAT_14ca84e40;
      if ((int)uVar28 < (int)DAT_14ca84e40) {
        local_c0 = uVar28;
      }
      if ((int)local_c0 < 2) {
        local_c0 = 1;
      }
      uVar19 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar24 = uVar19 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x128);
        uVar19 = *plVar17 + 7U & 0xfffffffffffffff8;
        uVar24 = uVar19 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      FUN_1456bbb8c(uVar19,L"Hair.VisTileBinningGridMinZ",&local_e8,0);
      iVar21 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar21 + 1U) {
        FUN_14472c0f6(local_1f8,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar21 * 8) = uVar19;
      *(int *)(uVar19 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      local_d0 = DAT_14ca85098;
      uStack_e0 = (undefined4)_DAT_14ca85088;
      uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
      uStack_d8 = _DAT_14ca85090;
      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_b6 = 1;
      local_e8 = 0x20008;
      iStack_e4 = 0;
      local_b5 = 0x1c;
      local_bc = CONCAT22(sVar8,1);
      local_b8 = 0x101;
      local_c8 = 0;
      local_c4 = DAT_14ca84e40;
      if ((int)local_248 < (int)DAT_14ca84e40) {
        local_c4 = local_248;
      }
      if ((int)local_c4 < 2) {
        local_c4 = 1;
      }
      local_b3 = 0xff;
      local_c0 = DAT_14ca84e40;
      if ((int)uVar28 < (int)DAT_14ca84e40) {
        local_c0 = uVar28;
      }
      if ((int)local_c0 < 2) {
        local_c0 = 1;
      }
      uVar27 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar24 = uVar27 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
        FUN_140023dd8(local_260,0x128);
        uVar27 = *plVar17 + 7U & 0xfffffffffffffff8;
        uVar24 = uVar27 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar24;
      FUN_1456bbb8c(uVar27,L"Hair.VisTileBinningGridMaxZ",&local_e8,0);
      iVar21 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar21 + 1U) {
        FUN_14472c0f6(local_1f8,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar21 * 8) = uVar27;
      *(int *)(uVar27 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      uVar2 = *(undefined1 *)(uVar19 + 0x94);
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 9;
      local_1b8 = (ulonglong)uVar28;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 9;
      }
      uVar24 = local_1b8;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar19 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 0;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar30 + 6) = uVar2;
      *(undefined1 *)(puVar30 + 7) = 0;
      *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
      puVar30[8] = uVar19;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar2 = *(undefined1 *)(uVar27 + 0x94);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(uVar27 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 0;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar22 + 5) = 0;
      *puVar22 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar22 + 6) = uVar2;
      *(undefined1 *)(puVar22 + 7) = 0;
      *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
      puVar22[8] = uVar27;
      iVar21 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
        FUN_1447568fc(local_258,iVar21);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_e0 = 0x4109;
      uVar28 = DAT_14ca84e48;
      if (uVar23 < DAT_14ca84e48) {
        uVar28 = uVar23;
      }
      uStack_d8 = 0;
      iStack_e4 = uVar28 + (uVar28 == 0);
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar27 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar27,L"Hair.CompactedVisTilePrims",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_e0 = 0x10119;
      uVar28 = DAT_14ca84e48;
      if ((uint)local_208 < DAT_14ca84e48) {
        uVar28 = (uint)local_208;
      }
      uStack_d8 = 0;
      iStack_e4 = uVar28 + (uVar28 == 0);
      uVar20 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar20 + 0x150;
      local_1b0 = uVar27;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar20 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar20 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar20,L"Hair.CompactedVisTileData",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar20;
      *(int *)(uVar20 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      uStack_d8 = 0;
      local_e8 = uVar28 + (uVar28 == 0);
      iStack_e4 = 1;
      uStack_e0 = 0x4109;
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar27 + 0x150;
      local_250 = uVar20;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar27,L"Hair.CompactedVisTileArgs",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      uStack_e0 = 0x10109;
      uVar28 = DAT_14ca84e48;
      if (uVar23 < DAT_14ca84e48) {
        uVar28 = uVar23;
      }
      uStack_d8 = 0;
      iStack_e4 = uVar28 + (uVar28 == 0);
      uVar20 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar20 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar20 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar20 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      local_170 = puVar30;
      FUN_1456bd266(uVar20,L"Hair.CompactedVisTileWork",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar20;
      *(int *)(uVar20 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uStack_d8 = 0;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      local_e8 = uVar28 + (uVar28 == 0);
      iStack_e4 = 1;
      uStack_e0 = 0x10109;
      uVar26 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar26 + 0x150;
      local_1a8 = uVar27;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar26 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar26 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar26,L"Hair.CompactedVisTileDataCount",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar26;
      *(int *)(uVar26 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      uStack_d8 = 0;
      local_e8 = uVar28 + (uVar28 == 0);
      iStack_e4 = 1;
      uStack_e0 = 0x10109;
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar27 + 0x150;
      local_168 = uVar26;
      local_140 = puVar25;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar27 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      local_1a0 = uVar20;
      FUN_1456bd266(uVar27,L"Hair.CompactedVisTileWorkCount",&local_e8,0);
      iVar21 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar21 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar21 + 1U) {
        FUN_144737178(local_240,iVar21);
      }
      lVar12 = local_1d8;
      local_238 = (ulonglong)((int)local_220 + 7);
      iVar4 = (int)local_218;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar21 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      lVar11 = *(longlong *)(local_1d8 + 0x3110);
      local_278 = (uint *)(lVar11 + 0x12d8);
      FUN_147180d50(local_1d8,0,lVar11 + 0x12c0,lVar11 + 0x12d4);
      FUN_1401ee234(&local_e8,*(undefined8 *)(lVar12 + 0x3110),1,1);
      uVar28 = local_244;
      local_270 = (float)DAT_14c84635c;
      if (1.0 < *(double *)(lVar12 + 0x8a8) || *(double *)(lVar12 + 0x8a8) == 1.0) {
        local_270 = (float)*(double *)(lVar12 + 0x930) + (float)*(double *)(lVar12 + 0x930);
      }
      local_238 = local_238 >> 3 & 0x1fffffff;
      uVar23 = iVar4 + 7U >> 3;
      local_190 = CONCAT44(iStack_e4,local_e8);
      local_22c = *(undefined4 *)(local_188 + 0xa4);
      local_1c0 = *(undefined8 *)(local_188 + 0xa8);
      local_1c8 = *(undefined8 *)(local_188 + 0xb0);
      local_ec = *(int *)(lVar12 + 0x4f4) - *(int *)(lVar12 + 0x4ec);
      local_f0 = *(int *)(lVar12 + 0x4f0) - *(int *)(lVar12 + 0x4e8);
      local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
      local_198 = uVar27;
      FUN_14717f3dc(&local_e8,&local_f0,*(undefined4 *)(lVar12 + 0x1de8),1);
      iVar21 = local_e8;
      plVar17 = local_260;
      local_d0 = DAT_14ca85098;
      uStack_e0 = (undefined4)_DAT_14ca85088;
      uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
      uStack_d8 = _DAT_14ca85090;
      local_b6 = 0;
      local_e8 = 0x20008;
      iStack_e4 = 0;
      local_b5 = 0x1c;
      local_bc = 0x10001;
      local_b8 = 0x101;
      local_c8 = 0;
      local_c4 = DAT_14ca84e40;
      if ((int)local_248 < (int)DAT_14ca84e40) {
        local_c4 = local_248;
      }
      local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      if ((int)local_c4 < 2) {
        local_c4 = 1;
      }
      local_b3 = 0xff;
      uVar29 = (uint)uVar24;
      local_c0 = DAT_14ca84e40;
      if ((int)uVar29 < (int)DAT_14ca84e40) {
        local_c0 = uVar29;
      }
      if ((int)local_c0 < 2) {
        local_c0 = 1;
      }
      uVar27 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar19 = uVar27 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x128);
        uVar27 = *plVar17 + 7U & 0xfffffffffffffff8;
        uVar19 = uVar27 + 0x120;
      }
      uVar20 = (ulonglong)local_248;
      local_228 = CONCAT44(local_228._4_4_,uVar23);
      fVar7 = (float)(int)local_210;
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bbb8c(uVar27,L"Hair.VisTileDepthGrid",&local_e8,0);
      iVar4 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
        FUN_14472c0f6(local_1f8,iVar4);
      }
      local_208 = uVar24 << 0x20;
      local_1e0 = local_238 << 0x20;
      fVar6 = 1.0 / (float)(int)uVar28;
      fVar7 = 1.0 / fVar7;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar27;
      *(int *)(uVar27 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      uVar16 = *(undefined8 *)(local_1d8 + 0x13818);
      FUN_145d13b6a();
      FUN_1448e935e(uVar16,&local_e8,&DAT_14c9d1e08,0);
      FUN_145d13b6a();
      plVar17 = local_260;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar30 + 0xe;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x80);
        puVar30 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar30 + 0xe;
      }
      local_208 = local_208 + uVar20;
      fVar33 = (float)(int)local_220;
      fVar34 = (float)(int)local_218;
      local_1e0 = local_1e0 + (ulonglong)uVar23;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      *puVar30 = &PTR_FUN_14a2228a8;
      local_1e8 = (longlong *)(param_1 + 0x98);
      *(undefined1 (*) [16])(puVar30 + 9) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar30 + 0xc) = (undefined1  [16])0x0;
      iVar4 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8(local_1e8,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar30;
      *(int *)(puVar30 + 2) = (int)local_218;
      *(int *)((longlong)puVar30 + 0x14) = (int)local_220;
      *(float *)(puVar30 + 3) = fVar34;
      *(float *)((longlong)puVar30 + 0x1c) = fVar33;
      puVar30[4] = local_208;
      puVar30[5] = local_1e0;
      *(uint *)(puVar30 + 6) = local_244;
      *(float *)((longlong)puVar30 + 0x34) = fVar6;
      *(int *)(puVar30 + 7) = (int)local_210;
      *(float *)((longlong)puVar30 + 0x3c) = fVar7;
      *(int *)(puVar30 + 8) = iVar21;
      *(undefined4 *)((longlong)puVar30 + 0x44) = local_22c;
      puVar30[9] = local_1c0;
      puVar30[10] = local_1c8;
      puVar30[0xc] = param_5;
      uVar2 = *(undefined1 *)(uVar27 + 0x94);
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 9;
      iVar4 = (uint)local_228;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(uVar27 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 0;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar25 + 6) = uVar2;
      *(undefined1 *)(puVar25 + 7) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
      puVar25[8] = uVar27;
      iVar5 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
        FUN_1447568fc(local_258,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0xd] = puVar25;
      local_278 = &local_fc;
      local_fc = local_248;
      local_f8 = (undefined4)local_1b8;
      local_f4 = 1;
      FUN_14716cbd1(param_1,&local_f0,&local_e8,puVar30 + 2);
      local_1fc = DAT_14c9dc4d0;
      if (0 < DAT_14c9dc4d0) {
        DAT_14ca4d100 = 1;
        DAT_14ca4d334 = DAT_14ca4d334 + (iVar4 * (int)local_238 * 2 + 0x14) * (int)local_210;
        DAT_14ca4d330 = DAT_14ca4d330 + (int)local_210 * 0x400;
      }
      local_e8 = -1;
      iStack_e4 = 0xffffffff;
      uStack_e0 = 0xffffffff;
      uStack_dc = 0xffffffff;
      FUN_14042f6c6(param_1,local_170,&local_e8,2);
      local_e8 = 0;
      iStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      FUN_14042f6c6(param_1,puVar22,&local_e8,2);
      local_e8 = 0;
      iStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      FUN_14042f6c6(param_1,local_1d0,&local_e8,2);
      FUN_1405bfba3(param_1,local_1f0,0,2);
      uVar28 = local_244;
      plVar17 = local_260;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 8;
      }
      uVar24 = local_168;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(local_1a8 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar30 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
      puVar30[7] = local_1a8;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar30,0,2);
      plVar17 = local_260;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar24 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar30 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
      puVar30[7] = uVar24;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar30,0,2);
      puVar30 = local_170;
      plVar17 = local_260;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_198 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_198;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar25,0,2);
      plVar17 = local_260;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar25 + 0x20;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x110);
        puVar25 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar25 + 0x20;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      *puVar25 = &PTR_FUN_14a2228c8;
      puVar25[0x16] = 0;
      *(undefined1 (*) [16])(puVar25 + 9) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar25 + 0xc) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar25 + 0xe) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar25 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar25 + 0x12) = (undefined1  [16])0x0;
      puVar25[0x14] = 0;
      *(undefined1 *)(puVar25 + 0x17) = 1;
      puVar25[0x1c] = 0;
      *(undefined1 (*) [16])(puVar25 + 0x18) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar25 + 0x1a) = 0;
      *(undefined1 *)(puVar25 + 0x1d) = 1;
      *(undefined1 (*) [16])(puVar25 + 0x1e) = (undefined1  [16])0x0;
      iVar4 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8(local_1e8,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar25;
      *(int *)(puVar25 + 2) = (int)local_218;
      *(int *)((longlong)puVar25 + 0x14) = (int)local_220;
      *(float *)(puVar25 + 3) = fVar34;
      *(float *)((longlong)puVar25 + 0x1c) = fVar33;
      puVar25[4] = local_208;
      puVar25[5] = local_1e0;
      *(uint *)(puVar25 + 6) = uVar28;
      *(float *)((longlong)puVar25 + 0x34) = fVar6;
      *(int *)(puVar25 + 7) = (int)local_210;
      *(float *)((longlong)puVar25 + 0x3c) = fVar7;
      *(int *)(puVar25 + 8) = iVar21;
      *(undefined4 *)((longlong)puVar25 + 0x44) = local_22c;
      puVar25[9] = local_1c0;
      puVar25[10] = local_1c8;
      lVar11 = FUN_1447e4f80();
      plVar17 = local_260;
      cVar18 = '\x02';
      if (*(char *)(lVar11 + 0x41) != '\x03') {
        cVar18 = *(char *)(lVar11 + 0x41);
      }
      puVar25[0x16] = local_190;
      *(char *)(puVar25 + 0x17) = cVar18;
      puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar31 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar31 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar31 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar31[1] = *(undefined8 *)(local_148 + 8);
      puVar31[2] = 0;
      *(undefined1 *)(puVar31 + 3) = 2;
      *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar31 + 5) = 0;
      *puVar31 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar31 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
      puVar31[7] = local_148;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar31;
      *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0xd] = puVar31;
      puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar31 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar31 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar31 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar31[1] = *(undefined8 *)(local_158 + 8);
      puVar31[2] = 0;
      *(undefined1 *)(puVar31 + 3) = 2;
      *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar31 + 5) = 0;
      *puVar31 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar31 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
      puVar31[7] = local_158;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      uVar24 = local_178;
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar31;
      *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0xe] = puVar31;
      puVar25[0xf] = local_1d0;
      puVar25[0x10] = puVar30;
      puVar25[0x11] = puVar22;
      puVar25[0x12] = uVar27;
      puVar25[0x13] = local_1f0;
      cVar18 = *(char *)(local_178 + 0x68);
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar24 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar30 + 6) = cVar18 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar30 + 0x31) = 0;
      puVar30[7] = uVar24;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      lVar11 = local_1d8;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x14] = puVar30;
      if (local_160 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(local_160 + 0xac);
      }
      bVar32 = 0 < local_1fc;
      puVar25[0x18] = local_160;
      puVar25[0x19] = uVar16;
      *(undefined4 *)(puVar25 + 0x1a) = 0x400;
      local_1f0 = (undefined8 *)(local_1d8 + 0x13870);
      FUN_1472ea582(param_1,local_1f0,puVar25 + 0x1c);
      uVar16 = *(undefined8 *)(lVar11 + 0x13818);
      FUN_145f292a8();
      local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,(uint)bVar32);
      FUN_1448e935e(uVar16,&local_e8,&DAT_14c9d1f30,bVar32);
      FUN_145f292a8();
      local_278 = &local_108;
      local_108 = (undefined4)local_210;
      local_104 = &DAT_100000001;
      FUN_14716cc83(param_1,&local_f0,&local_e8,puVar25 + 2);
      plVar17 = local_260;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar30 + 0x1c;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0xf0);
        puVar30 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar30 + 0x1c;
      }
      lVar11 = local_190;
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      *puVar30 = &PTR_FUN_14a2228e8;
      puVar30[9] = 0;
      puVar30[10] = 0;
      puVar30[0xc] = 0;
      puVar30[0xd] = 0;
      puVar30[0xe] = 0;
      puVar30[0xf] = 0;
      puVar30[0x10] = 0;
      puVar30[0x11] = 0;
      puVar30[0x12] = 0;
      puVar30[0x13] = 0;
      puVar30[0x14] = 0;
      puVar30[0x15] = 0;
      puVar30[0x16] = 0;
      *(undefined1 *)(puVar30 + 0x17) = 1;
      puVar30[0x18] = 0;
      *(undefined1 *)(puVar30 + 0x19) = 1;
      puVar30[0x1a] = 0;
      puVar30[0x1b] = 0;
      iVar4 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
      uVar23 = (uint)local_228;
      if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8(local_1e8,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar30;
      *(int *)(puVar30 + 2) = (int)local_218;
      *(int *)((longlong)puVar30 + 0x14) = (int)local_220;
      *(float *)(puVar30 + 3) = fVar34;
      *(float *)((longlong)puVar30 + 0x1c) = fVar33;
      puVar30[4] = local_208;
      puVar30[5] = local_1e0;
      *(uint *)(puVar30 + 6) = uVar28;
      *(float *)((longlong)puVar30 + 0x34) = fVar6;
      *(int *)(puVar30 + 7) = (int)local_210;
      *(float *)((longlong)puVar30 + 0x3c) = fVar7;
      *(int *)(puVar30 + 8) = iVar21;
      *(undefined4 *)((longlong)puVar30 + 0x44) = local_22c;
      puVar30[9] = local_1c0;
      puVar30[10] = local_1c8;
      lVar12 = FUN_1447e4f80();
      plVar17 = local_260;
      cVar18 = '\x02';
      if (*(char *)(lVar12 + 0x41) != '\x03') {
        cVar18 = *(char *)(lVar12 + 0x41);
      }
      puVar30[0x16] = lVar11;
      *(char *)(puVar30 + 0x17) = cVar18;
      puVar30[0xc] = local_150;
      puVar30[0xd] = local_138;
      puVar30[0xe] = local_140;
      puVar30[0xf] = local_180;
      cVar18 = *(char *)(local_250 + 0x68);
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_250 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar25 + 6) = cVar18 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
      puVar25[7] = local_250;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x10] = puVar25;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_1b0 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_1b0;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x11] = puVar25;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_1a8 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_1a8;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x12] = puVar25;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_1a0 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_1a0;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x13] = puVar25;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_168 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_168;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x14] = puVar25;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar25[1] = *(undefined8 *)(local_198 + 8);
      puVar25[2] = 0;
      *(undefined1 *)(puVar25 + 3) = 2;
      *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar25 + 5) = 0;
      *puVar25 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar25 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
      puVar25[7] = local_198;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar25;
      *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar30[0x15] = puVar25;
      FUN_1472ea582(param_1,local_1f0,puVar30 + 0x18);
      uVar16 = *(undefined8 *)(local_1d8 + 0x13818);
      FUN_145e81d96();
      FUN_1448e935e(uVar16,&local_e8,&DAT_14c9d2058,(ulonglong)local_1d0 & 0xffffffff);
      FUN_145e81d96();
      local_278 = &local_114;
      local_114 = local_248;
      local_110 = (undefined4)local_1b8;
      local_10c = 1;
      FUN_14716cd35(param_1,&local_f0,&local_e8,puVar30 + 2);
      plVar17 = local_260;
      if (local_1fc < 1) {
        uVar24 = 0;
        local_238 = 0;
      }
      else {
        local_d0 = DAT_14ca85098;
        if ((int)DAT_14ca84e40 <= (int)uVar23) {
          uVar23 = DAT_14ca84e40;
        }
        local_c4 = uVar23;
        if ((int)uVar23 < 2) {
          local_c4 = 1;
        }
        local_c0 = DAT_14ca84e40;
        if ((int)(uint)local_238 < (int)DAT_14ca84e40) {
          local_c0 = (uint)local_238;
        }
        uStack_e0 = (undefined4)_DAT_14ca85088;
        uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
        uStack_d8 = _DAT_14ca85090;
        local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_b6 = 0;
        local_e8 = 0x20009;
        iStack_e4 = 0;
        local_b5 = 0x1c;
        local_bc = 0x10001;
        local_b8 = 0x101;
        local_c8 = 0;
        local_b3 = 0xff;
        if ((int)local_c0 < 2) {
          local_c0 = 1;
        }
        uVar19 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar24 = uVar19 + 0x120;
        if (*(ulonglong *)(param_1 + 0x78) < uVar24) {
          FUN_140023dd8(local_260,0x128);
          uVar19 = *plVar17 + 7U & 0xfffffffffffffff8;
          uVar24 = uVar19 + 0x120;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar24;
        FUN_1456bbb8c(uVar19,L"Hair.HairPixelTileTexture_ForDebug",&local_e8,0);
        iVar4 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
          FUN_14472c0f6(local_1f8,iVar4);
        }
        plVar17 = local_260;
        *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar19;
        *(int *)(uVar19 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
        local_d0 = DAT_14ca85098;
        uStack_e0 = (undefined4)_DAT_14ca85088;
        uStack_dc = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
        uStack_d8 = _DAT_14ca85090;
        local_cc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_b6 = 0;
        local_e8 = 0x20009;
        iStack_e4 = 0;
        local_b5 = 0x1c;
        local_bc = 0x10001;
        local_b8 = 0x101;
        local_c8 = 0;
        local_c4 = DAT_14ca84e40;
        if ((int)(uint)local_218 < (int)DAT_14ca84e40) {
          local_c4 = (uint)local_218;
        }
        if ((int)local_c4 < 2) {
          local_c4 = 1;
        }
        local_b3 = 0xff;
        local_c0 = DAT_14ca84e40;
        if ((int)(uint)local_220 < (int)DAT_14ca84e40) {
          local_c0 = (uint)local_220;
        }
        if ((int)local_c0 < 2) {
          local_c0 = 1;
        }
        uVar24 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar27 = uVar24 + 0x120;
        local_238 = uVar19;
        if (*(ulonglong *)(param_1 + 0x78) < uVar27) {
          FUN_140023dd8(local_260,0x128);
          uVar24 = *plVar17 + 7U & 0xfffffffffffffff8;
          uVar27 = uVar24 + 0x120;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar27;
        FUN_1456bbb8c(uVar24,L"Hair.HairCountTexture_ForDebug",&local_e8,0);
        iVar4 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
          FUN_14472c0f6(local_1f8,iVar4);
        }
        plVar17 = local_260;
        *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar24;
        *(int *)(uVar24 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
        uVar2 = *(undefined1 *)(uVar24 + 0x94);
        puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar30 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar30[1] = *(undefined8 *)(uVar24 + 8);
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 0;
        *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar30 + 5) = 0;
        *puVar30 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar30 + 6) = uVar2;
        *(undefined1 *)(puVar30 + 7) = 0;
        *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
        puVar30[8] = uVar24;
        iVar4 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_258,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
        *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        local_e8 = 0;
        iStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        FUN_14042f6c6(param_1,puVar30,&local_e8,2);
        uVar19 = local_238;
        plVar17 = local_260;
        uVar2 = *(undefined1 *)(local_238 + 0x94);
        puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          local_228 = uVar24;
          FUN_140023dd8(local_260,0x50);
          puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar30 + 9;
          uVar24 = local_228;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar30[1] = *(undefined8 *)(uVar19 + 8);
        puVar30[2] = 0;
        *(undefined1 *)(puVar30 + 3) = 0;
        *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar30 + 5) = 0;
        *puVar30 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar30 + 6) = uVar2;
        *(undefined1 *)(puVar30 + 7) = 0;
        *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
        puVar30[8] = uVar19;
        iVar4 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_258,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
        *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        local_e8 = 0;
        iStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        FUN_14042f6c6(param_1,puVar30,&local_e8,2);
      }
      plVar17 = local_260;
      uVar28 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar28 = DAT_14ca84e48;
      }
      uStack_d8 = 0;
      local_e8 = uVar28 + (uVar28 == 0);
      iStack_e4 = 1;
      uStack_e0 = 0x10109;
      uVar27 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar19 = uVar27 + 0x150;
      local_228 = uVar24;
      if (*(ulonglong *)(param_1 + 0x78) < uVar19) {
        FUN_140023dd8(local_260,0x160);
        uVar27 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar19 = uVar27 + 0x150;
      }
      uVar24 = local_228;
      *(ulonglong *)(param_1 + 0x70) = uVar19;
      FUN_1456bd266(uVar27,L"Hair.RasterWorkCounter",&local_e8,0);
      iVar4 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar4 + 1U) {
        FUN_144737178(local_240,iVar4);
      }
      plVar17 = local_260;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8) = uVar27;
      *(int *)(uVar27 + 0x7c) = *(int *)(param_1 + 400) + -1;
      puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar30 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x48);
        puVar30 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar30 + 8;
        uVar24 = local_228;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar30[1] = *(undefined8 *)(uVar27 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar30 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
      puVar30[7] = uVar27;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      FUN_1405bfba3(param_1,puVar30,0,2);
      plVar17 = local_260;
      puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar25 + 0x20;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x110);
        puVar25 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar25 + 0x20;
        uVar24 = local_228;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      *puVar25 = &PTR_FUN_14a222908;
      puVar25[9] = 0;
      puVar25[10] = 0;
      puVar25[0xd] = 0;
      puVar25[0xe] = 0;
      puVar25[0xf] = 0;
      puVar25[0x10] = 0;
      puVar25[0x11] = 0;
      puVar25[0x12] = 0;
      puVar25[0x13] = 0;
      puVar25[0x14] = 0;
      puVar25[0x15] = 0;
      puVar25[0x16] = 0;
      puVar25[0x17] = 0;
      puVar25[0x18] = 0;
      puVar25[0x19] = 0;
      puVar25[0x1a] = 0;
      *(undefined1 *)(puVar25 + 0x1b) = 1;
      puVar25[0x1c] = 0;
      puVar25[0x1d] = 0;
      puVar25[0x1e] = 0;
      *(undefined1 *)(puVar25 + 0x1f) = 1;
      iVar4 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
        FUN_1448cfae8(local_1e8,iVar4);
      }
      *(undefined8 **)(*local_1e8 + (longlong)iVar4 * 8) = puVar25;
      *(int *)(puVar25 + 2) = (int)local_218;
      *(int *)((longlong)puVar25 + 0x14) = (int)local_220;
      *(float *)(puVar25 + 3) = fVar34;
      *(float *)((longlong)puVar25 + 0x1c) = fVar33;
      puVar25[4] = local_208;
      puVar25[5] = local_1e0;
      *(uint *)(puVar25 + 6) = local_244;
      *(float *)((longlong)puVar25 + 0x34) = fVar6;
      *(int *)(puVar25 + 7) = (int)local_210;
      *(float *)((longlong)puVar25 + 0x3c) = fVar7;
      *(int *)(puVar25 + 8) = iVar21;
      *(undefined4 *)((longlong)puVar25 + 0x44) = local_22c;
      puVar25[9] = local_1c0;
      puVar25[10] = local_1c8;
      lVar12 = FUN_1447e4f80();
      uVar19 = local_1a0;
      plVar17 = local_260;
      cVar18 = '\x02';
      if (*(char *)(lVar12 + 0x41) != '\x03') {
        cVar18 = *(char *)(lVar12 + 0x41);
      }
      puVar25[0x1e] = lVar11;
      *(char *)(puVar25 + 0x1f) = cVar18;
      puVar25[0xf] = param_5;
      if (uVar24 == 0) {
        puVar22 = (undefined8 *)0x0;
      }
      else {
        uVar2 = *(undefined1 *)(uVar24 + 0x94);
        puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar22 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar22[1] = *(undefined8 *)(uVar24 + 8);
        puVar22[2] = 0;
        *(undefined1 *)(puVar22 + 3) = 0;
        *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar22 + 5) = 0;
        *puVar22 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar22 + 6) = uVar2;
        *(undefined1 *)(puVar22 + 7) = 0;
        *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
        puVar22[8] = uVar24;
        iVar4 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_258,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
        *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      }
      uVar24 = local_238;
      plVar17 = local_260;
      puVar25[0x15] = puVar22;
      if (local_238 == 0) {
        puVar22 = (undefined8 *)0x0;
      }
      else {
        uVar2 = *(undefined1 *)(local_238 + 0x94);
        puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar22 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar22[1] = *(undefined8 *)(uVar24 + 8);
        puVar22[2] = 0;
        *(undefined1 *)(puVar22 + 3) = 0;
        *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar22 + 5) = 0;
        *puVar22 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar22 + 6) = uVar2;
        *(undefined1 *)(puVar22 + 7) = 0;
        *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
        puVar22[8] = uVar24;
        iVar4 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(local_258,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
        *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      }
      uVar24 = local_1b0;
      plVar17 = local_260;
      puVar25[0x16] = puVar22;
      puVar25[0xc] = *(undefined8 *)(local_188 + 0x148);
      puVar25[0xd] = *(undefined8 *)(local_188 + 0x150);
      puVar25[0xe] = *(undefined8 *)(local_188 + 0xb8);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(uVar24 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar22 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = uVar24;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x10] = puVar22;
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(local_1a8 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar22 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = local_1a8;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x11] = puVar22;
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(uVar19 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar22 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = uVar19;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x12] = puVar22;
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(local_198 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar22 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = local_198;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x13] = puVar22;
      cVar18 = *(char *)(local_250 + 0x68);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(local_250 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar22 + 5) = cVar18 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = local_250;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x14] = puVar22;
      uVar2 = *(undefined1 *)(param_6 + 0x94);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(param_6 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 0;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar22 + 5) = 0;
      *puVar22 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar22 + 6) = uVar2;
      *(undefined1 *)(puVar22 + 7) = 0;
      *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
      puVar22[8] = param_6;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      plVar17 = local_260;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x17] = puVar22;
      uVar2 = *(undefined1 *)(param_7 + 0x94);
      puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_260,0x50);
        puVar22 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar22 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar22[1] = *(undefined8 *)(param_7 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 0;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar22 + 5) = 0;
      *puVar22 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar22 + 6) = uVar2;
      *(undefined1 *)(puVar22 + 7) = 0;
      *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
      puVar22[8] = param_7;
      iVar4 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_1447568fc(local_258,iVar4);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar25[0x18] = puVar22;
      puVar25[0x19] = puVar30;
      FUN_1472ea582(param_1,local_1f0,puVar25 + 0x1a);
      uVar16 = *(undefined8 *)(local_1d8 + 0x13818);
      FUN_145f42fb0();
      FUN_1448e935e(uVar16,&local_e8,&DAT_14c9d2180,(ulonglong)local_1d0 & 0xffffffff);
      FUN_145f42fb0();
      uVar28 = local_244;
      local_278 = &local_120;
      local_120 = local_244;
      local_11c = &DAT_100000001;
      FUN_14716cde7(param_1,&local_f0,&local_e8,puVar25 + 2);
      lVar11 = local_190;
      plVar17 = local_260;
      if (0 < local_1fc) {
        puVar30 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar30 + 0x1a;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0xe0);
          puVar30 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
          puVar15 = puVar30 + 0x1a;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        *puVar30 = &PTR_FUN_14a222928;
        puVar30[9] = 0;
        puVar30[10] = 0;
        puVar30[0xe] = 0;
        puVar30[0xf] = 0;
        puVar30[0x10] = 0;
        puVar30[0x11] = 0;
        puVar30[0x12] = 0;
        puVar30[0x13] = 0;
        puVar30[0x14] = 0;
        *(undefined1 *)(puVar30 + 0x15) = 1;
        puVar30[0x16] = 0;
        *(undefined1 *)(puVar30 + 0x17) = 1;
        puVar30[0x18] = 0;
        puVar30[0x19] = 0;
        iVar4 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
          FUN_1448cfae8(local_1e8,iVar4);
        }
        plVar17 = local_260;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar30;
        *(int *)(puVar30 + 2) = (int)local_218;
        *(int *)((longlong)puVar30 + 0x14) = (int)local_220;
        *(float *)(puVar30 + 3) = fVar34;
        *(float *)((longlong)puVar30 + 0x1c) = fVar33;
        puVar30[4] = local_208;
        puVar30[5] = local_1e0;
        *(uint *)(puVar30 + 6) = uVar28;
        *(float *)((longlong)puVar30 + 0x34) = fVar6;
        *(int *)(puVar30 + 7) = (int)local_210;
        *(float *)((longlong)puVar30 + 0x3c) = fVar7;
        *(int *)(puVar30 + 8) = iVar21;
        *(undefined4 *)((longlong)puVar30 + 0x44) = local_22c;
        puVar30[9] = local_1c0;
        puVar30[10] = local_1c8;
        *(undefined4 *)(puVar30 + 0xc) = *(undefined4 *)(local_188 + 0xa0);
        *(uint *)((longlong)puVar30 + 100) = *(uint *)(local_178 + 100) / 5;
        *(uint *)(puVar30 + 0xd) = *(uint *)(local_250 + 100) / 5;
        cVar18 = *(char *)(local_250 + 0x68);
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar25 + 9;
        }
        puVar22 = local_180;
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar25[1] = *(undefined8 *)(local_250 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 3;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *puVar25 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar25 + 5) = cVar18 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
        puVar25[7] = 0;
        puVar25[8] = local_250;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_258,iVar21);
        }
        plVar17 = local_260;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar30[0x11] = puVar25;
        puVar30[0x10] = puVar22;
        cVar18 = *(char *)(local_250 + 0x68);
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar25 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar25[1] = *(undefined8 *)(local_250 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 3;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *puVar25 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar25 + 5) = cVar18 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
        puVar25[7] = 0;
        puVar25[8] = local_250;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_258,iVar21);
        }
        plVar17 = local_260;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar30[0x13] = puVar25;
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar25 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_260,0x50);
          puVar25 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar25 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar15;
        puVar25[1] = *(undefined8 *)(local_1a8 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 3;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *puVar25 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar25 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
        puVar25[7] = 0;
        puVar25[8] = local_1a8;
        iVar21 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar21 + 1U) {
          FUN_1447568fc(local_258,iVar21);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar21 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar30[0x12] = puVar25;
        puVar30[0xe] = local_228;
        puVar30[0xf] = local_238;
        FUN_1472ea582(param_1,local_1f0,puVar30 + 0x16);
        uVar16 = *(undefined8 *)(local_1d8 + 0x13818);
        FUN_145f434c2();
        FUN_1448e935e(uVar16,&local_e8,&DAT_14c9d22a8,0);
        FUN_145f434c2();
        local_128 = (int)local_1b8 + 7U >> 3;
        local_12c = local_248 + 7 >> 3;
        local_278 = &local_12c;
        local_124 = 1;
        FUN_14716ce99(param_1,&local_f0,&local_e8,puVar30 + 2);
      }
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar28 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar28 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar28 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar28 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = lVar11;
            plVar17 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar17;
                LOCK();
                bVar32 = plVar17 != DAT_14ca843c0;
                plVar14 = plVar13;
                if (bVar32) {
                  plVar17 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar32);
            }
            else {
              do {
                *plVar13 = (longlong)plVar14;
                LOCK();
                bVar32 = plVar14 != DAT_14ca843c8;
                plVar17 = plVar13;
                if (bVar32) {
                  plVar14 = DAT_14ca843c8;
                  plVar17 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar17;
                UNLOCK();
              } while (bVar32);
            }
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c3f330 FUN_142c3f330 body=69 status=ok
// SIG undefined FUN_142c3f330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f330(void)

{
  _DAT_14c9d2368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2370,1);
  return;
}



// FUNCTION 142c3f375 FUN_142c3f375 body=69 status=ok
// SIG undefined FUN_142c3f375(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f375(void)

{
  _DAT_14c9d2380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2388,1);
  return;
}



// FUNCTION 142c3f3ba FUN_142c3f3ba body=69 status=ok
// SIG undefined FUN_142c3f3ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f3ba(void)

{
  _DAT_14c9d2398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d23a0,1);
  return;
}



// FUNCTION 142c3f3ff FUN_142c3f3ff body=69 status=ok
// SIG undefined FUN_142c3f3ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f3ff(void)

{
  _DAT_14c9d23b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d23b8,1);
  return;
}



// FUNCTION 142c3f444 FUN_142c3f444 body=69 status=ok
// SIG undefined FUN_142c3f444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f444(void)

{
  _DAT_14c9d23c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d23d0,1);
  return;
}



// FUNCTION 142c3f489 FUN_142c3f489 body=69 status=ok
// SIG undefined FUN_142c3f489(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f489(void)

{
  _DAT_14c9d23e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d23e8,1);
  return;
}



// FUNCTION 142c3f4ce FUN_142c3f4ce body=69 status=ok
// SIG undefined FUN_142c3f4ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f4ce(void)

{
  _DAT_14c9d23f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2400,1);
  return;
}



// FUNCTION 142c3f513 FUN_142c3f513 body=69 status=ok
// SIG undefined FUN_142c3f513(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f513(void)

{
  _DAT_14c9d2410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2418,1);
  return;
}



// FUNCTION 142c3f558 FUN_142c3f558 body=69 status=ok
// SIG undefined FUN_142c3f558(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f558(void)

{
  _DAT_14c9d2428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2430,1);
  return;
}



// FUNCTION 142c3f59d FUN_142c3f59d body=69 status=ok
// SIG undefined FUN_142c3f59d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f59d(void)

{
  _DAT_14c9d2440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2448,1);
  return;
}



// FUNCTION 142c3f5e2 FUN_142c3f5e2 body=69 status=ok
// SIG undefined FUN_142c3f5e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f5e2(void)

{
  _DAT_14c9d2458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2460,1);
  return;
}



// FUNCTION 142c3f627 FUN_142c3f627 body=69 status=ok
// SIG undefined FUN_142c3f627(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f627(void)

{
  _DAT_14c9d2470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d2478,1);
  return;
}



// FUNCTION 142c3f66c FUN_142c3f66c body=407 status=ok
// SIG undefined FUN_142c3f66c(void)

void FUN_142c3f66c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  longlong lVar12;
  bool bVar13;
  longlong *local_48;
  
  lVar2 = DAT_14c9d2408;
  if (*(int *)(param_2 + 1) != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar10 = 0;
    }
    else if (iVar1 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar10 = 1;
    }
    if ((0 < *(int *)(lVar2 + uVar10 * 4)) &&
       (iVar1 = *(int *)(param_1 + 0x38b8), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x38b0);
      lVar12 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar12);
        iVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
        iVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
        bVar13 = true;
        if (iVar7 != 1) {
          iVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
          bVar13 = iVar7 == 2;
        }
        iVar7 = (int)plVar3[2];
        if (((-1 < (longlong)iVar7) && (iVar7 < *(int *)(param_3 + 0x70))) &&
           ((!(bool)(iVar6 != 0 & (bVar13 ^ 1U)) &&
            ((*(char *)(*(longlong *)(param_3 + 0x68) + (longlong)iVar7) == '\0' &&
             (cVar5 = FUN_14716d57e(*param_2,plVar3), cVar5 != '\0')))))) {
          if (iVar6 == 0) {
            local_48 = (longlong *)(param_3 + 0x28);
            iVar6 = *(int *)(param_3 + 0x30);
            *(uint *)(param_3 + 0x30) = iVar6 + 1U;
            uVar11 = 2;
            uVar4 = 2;
            if (*(uint *)(param_3 + 0x34) < iVar6 + 1U) {
LAB_142c3f7b8:
              uVar11 = uVar4;
              FUN_14717cbb8(local_48,iVar6);
            }
          }
          else {
            if (!bVar13) goto LAB_142c3f75c;
            local_48 = (longlong *)(param_3 + 0x48);
            iVar6 = *(int *)(param_3 + 0x50);
            *(uint *)(param_3 + 0x50) = iVar6 + 1U;
            uVar11 = 4;
            uVar4 = 4;
            if (*(uint *)(param_3 + 0x54) < iVar6 + 1U) goto LAB_142c3f7b8;
          }
          *(longlong **)(*local_48 + (longlong)iVar6 * 8) = plVar3;
          *(undefined1 *)(*(longlong *)(param_3 + 0x68) + (longlong)(int)plVar3[2]) = uVar11;
        }
LAB_142c3f75c:
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar1 * 8 != lVar12);
    }
  }
  return;
}



// FUNCTION 142c3f803 FUN_142c3f803 body=69 status=ok
// SIG undefined FUN_142c3f803(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f803(void)

{
  _DAT_14c9d24b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d24b8,1);
  return;
}



// FUNCTION 142c3f848 FUN_142c3f848 body=69 status=ok
// SIG undefined FUN_142c3f848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f848(void)

{
  _DAT_14c9d24c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d24c8,1);
  return;
}



// FUNCTION 142c3f88d FUN_142c3f88d body=69 status=ok
// SIG undefined FUN_142c3f88d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f88d(void)

{
  _DAT_14c9d24d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d24d8,1);
  return;
}



// FUNCTION 142c3f8d2 FUN_142c3f8d2 body=69 status=ok
// SIG undefined FUN_142c3f8d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c3f8d2(void)

{
  _DAT_14c9d24e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c3f914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d24e8,1);
  return;
}



// FUNCTION 142c3f9ce FUN_142c3f9ce body=96 status=ok
// SIG undefined FUN_142c3f9ce(void)

undefined8 FUN_142c3f9ce(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c3fac4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d2898,1);
  return uVar3;
}



// FUNCTION 142c3fa2e FUN_142c3fa2e body=138 status=ok
// SIG undefined FUN_142c3fa2e(void)

void * FUN_142c3fa2e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c3fac4 FUN_142c3fac4 body=445 status=ok
// SIG undefined FUN_142c3fac4(void)

void FUN_142c3fac4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2918) {
    FUN_144b3d300(&DAT_14c9d2918);
    if (DAT_14c9d2918 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c3fc8e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x40;
      local_88 = 0xae;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d2898,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c3fc82);
      _Init_thread_footer(&DAT_14c9d2918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c3fc8e FUN_142c3fc8e body=136 status=ok
// SIG undefined FUN_142c3fc8e(void)

code * FUN_142c3fc8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3fd16;
}



// FUNCTION 142c3fd16 FUN_142c3fd16 body=136 status=ok
// SIG undefined FUN_142c3fd16(void)

code * FUN_142c3fd16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3fd9e;
}



// FUNCTION 142c3fd9e FUN_142c3fd9e body=136 status=ok
// SIG undefined FUN_142c3fd9e(void)

code * FUN_142c3fd9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BitCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3fe26;
}



// FUNCTION 142c3fe26 FUN_142c3fe26 body=136 status=ok
// SIG undefined FUN_142c3fe26(void)

code * FUN_142c3fe26(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LogTwoLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3feae;
}



// FUNCTION 142c3feae FUN_142c3feae body=136 status=ok
// SIG undefined FUN_142c3feae(void)

code * FUN_142c3feae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3ff36;
}



// FUNCTION 142c3ff36 FUN_142c3ff36 body=136 status=ok
// SIG undefined FUN_142c3ff36(void)

code * FUN_142c3ff36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c3ffbe;
}



// FUNCTION 142c3ffbe FUN_142c3ffbe body=130 status=ok
// SIG undefined FUN_142c3ffbe(void)

undefined1 * FUN_142c3ffbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xaf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c40040;
}



// FUNCTION 142c40044 FUN_142c40044 body=44 status=ok
// SIG undefined FUN_142c40044(void)

void FUN_142c40044(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c4009a FUN_142c4009a body=96 status=ok
// SIG undefined FUN_142c4009a(void)

undefined8 FUN_142c4009a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c40190();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d2a68,1);
  return uVar3;
}



// FUNCTION 142c400fa FUN_142c400fa body=138 status=ok
// SIG undefined FUN_142c400fa(void)

void * FUN_142c400fa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c40190 FUN_142c40190 body=445 status=ok
// SIG undefined FUN_142c40190(void)

void FUN_142c40190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2ae8) {
    FUN_144b3d300(&DAT_14c9d2ae8);
    if (DAT_14c9d2ae8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c4035a;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0xc6;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d2a68,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4034e);
      _Init_thread_footer(&DAT_14c9d2ae8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4035a FUN_142c4035a body=136 status=ok
// SIG undefined FUN_142c4035a(void)

code * FUN_142c4035a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c403e2;
}



// FUNCTION 142c403e2 FUN_142c403e2 body=136 status=ok
// SIG undefined FUN_142c403e2(void)

code * FUN_142c403e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4046a;
}



// FUNCTION 142c4046a FUN_142c4046a body=136 status=ok
// SIG undefined FUN_142c4046a(void)

code * FUN_142c4046a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSubRegions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c404f2;
}



// FUNCTION 142c404f2 FUN_142c404f2 body=136 status=ok
// SIG undefined FUN_142c404f2(void)

code * FUN_142c404f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4057a;
}



// FUNCTION 142c4057a FUN_142c4057a body=136 status=ok
// SIG undefined FUN_142c4057a(void)

code * FUN_142c4057a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40602;
}



// FUNCTION 142c40602 FUN_142c40602 body=130 status=ok
// SIG undefined FUN_142c40602(void)

undefined1 * FUN_142c40602(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcWindow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c40684;
}



// FUNCTION 142c40688 FUN_142c40688 body=44 status=ok
// SIG undefined FUN_142c40688(void)

void FUN_142c40688(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c406de FUN_142c406de body=96 status=ok
// SIG undefined FUN_142c406de(void)

undefined8 FUN_142c406de(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c407d4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d2c38,1);
  return uVar3;
}



// FUNCTION 142c4073e FUN_142c4073e body=138 status=ok
// SIG undefined FUN_142c4073e(void)

void * FUN_142c4073e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c407d4 FUN_142c407d4 body=445 status=ok
// SIG undefined FUN_142c407d4(void)

void FUN_142c407d4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2cb8) {
    FUN_144b3d300(&DAT_14c9d2cb8);
    if (DAT_14c9d2cb8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c4099e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x50;
      local_88 = 0xe1;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d2c38,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c40992);
      _Init_thread_footer(&DAT_14c9d2cb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4099e FUN_142c4099e body=136 status=ok
// SIG undefined FUN_142c4099e(void)

code * FUN_142c4099e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40a26;
}



// FUNCTION 142c40a26 FUN_142c40a26 body=136 status=ok
// SIG undefined FUN_142c40a26(void)

code * FUN_142c40a26(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstPostFilterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40aae;
}



// FUNCTION 142c40aae FUN_142c40aae body=136 status=ok
// SIG undefined FUN_142c40aae(void)

code * FUN_142c40aae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40b36;
}



// FUNCTION 142c40b36 FUN_142c40b36 body=136 status=ok
// SIG undefined FUN_142c40b36(void)

code * FUN_142c40b36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BitCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40bbe;
}



// FUNCTION 142c40bbe FUN_142c40bbe body=136 status=ok
// SIG undefined FUN_142c40bbe(void)

code * FUN_142c40bbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PowTwoLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40c46;
}



// FUNCTION 142c40c46 FUN_142c40c46 body=136 status=ok
// SIG undefined FUN_142c40c46(void)

code * FUN_142c40c46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40cce;
}



// FUNCTION 142c40cce FUN_142c40cce body=136 status=ok
// SIG undefined FUN_142c40cce(void)

code * FUN_142c40cce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c40d56;
}



// FUNCTION 142c40d56 FUN_142c40d56 body=130 status=ok
// SIG undefined FUN_142c40d56(void)

undefined1 * FUN_142c40d56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c40dd8;
}



// FUNCTION 142c40ddc FUN_142c40ddc body=44 status=ok
// SIG undefined FUN_142c40ddc(void)

void FUN_142c40ddc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c40e32 FUN_142c40e32 body=96 status=ok
// SIG undefined FUN_142c40e32(void)

undefined8 FUN_142c40e32(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c40f28();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d2e08,1);
  return uVar3;
}



// FUNCTION 142c40e92 FUN_142c40e92 body=138 status=ok
// SIG undefined FUN_142c40e92(void)

void * FUN_142c40e92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c40f28 FUN_142c40f28 body=445 status=ok
// SIG undefined FUN_142c40f28(void)

void FUN_142c40f28(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2e88) {
    FUN_144b3d300(&DAT_14c9d2e88);
    if (DAT_14c9d2e88 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c410f2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0xfa;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d2e08,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c410e6);
      _Init_thread_footer(&DAT_14c9d2e88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c410f2 FUN_142c410f2 body=136 status=ok
// SIG undefined FUN_142c410f2(void)

code * FUN_142c410f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4117a;
}



// FUNCTION 142c4117a FUN_142c4117a body=136 status=ok
// SIG undefined FUN_142c4117a(void)

code * FUN_142c4117a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41202;
}



// FUNCTION 142c41202 FUN_142c41202 body=136 status=ok
// SIG undefined FUN_142c41202(void)

code * FUN_142c41202(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4128a;
}



// FUNCTION 142c4128a FUN_142c4128a body=130 status=ok
// SIG undefined FUN_142c4128a(void)

undefined1 * FUN_142c4128a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c4130c;
}



// FUNCTION 142c41310 FUN_142c41310 body=44 status=ok
// SIG undefined FUN_142c41310(void)

void FUN_142c41310(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c41366 FUN_142c41366 body=96 status=ok
// SIG undefined FUN_142c41366(void)

undefined8 FUN_142c41366(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c4145c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d2fd8,1);
  return uVar3;
}



// FUNCTION 142c413c6 FUN_142c413c6 body=138 status=ok
// SIG undefined FUN_142c413c6(void)

void * FUN_142c413c6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c4145c FUN_142c4145c body=445 status=ok
// SIG undefined FUN_142c4145c(void)

void FUN_142c4145c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3058) {
    FUN_144b3d300(&DAT_14c9d3058);
    if (DAT_14c9d3058 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c41626;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x40;
      local_88 = 0x10e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d2fd8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4161a);
      _Init_thread_footer(&DAT_14c9d3058);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c41626 FUN_142c41626 body=136 status=ok
// SIG undefined FUN_142c41626(void)

code * FUN_142c41626(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000114;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c416ae;
}



// FUNCTION 142c416ae FUN_142c416ae body=136 status=ok
// SIG undefined FUN_142c416ae(void)

code * FUN_142c416ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000113;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41736;
}



// FUNCTION 142c41736 FUN_142c41736 body=136 status=ok
// SIG undefined FUN_142c41736(void)

code * FUN_142c41736(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BrightPixelGain";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000111;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c417be;
}



// FUNCTION 142c417be FUN_142c417be body=136 status=ok
// SIG undefined FUN_142c417be(void)

code * FUN_142c417be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000110;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41846;
}



// FUNCTION 142c41846 FUN_142c41846 body=130 status=ok
// SIG undefined FUN_142c41846(void)

undefined1 * FUN_142c41846(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c418c8;
}



// FUNCTION 142c418cc FUN_142c418cc body=44 status=ok
// SIG undefined FUN_142c418cc(void)

void FUN_142c418cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c41922 FUN_142c41922 body=96 status=ok
// SIG undefined FUN_142c41922(void)

undefined8 FUN_142c41922(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c41a18();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d31a8,1);
  return uVar3;
}



// FUNCTION 142c41982 FUN_142c41982 body=138 status=ok
// SIG undefined FUN_142c41982(void)

void * FUN_142c41982(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c41a18 FUN_142c41a18 body=445 status=ok
// SIG undefined FUN_142c41a18(void)

void FUN_142c41a18(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3228) {
    FUN_144b3d300(&DAT_14c9d3228);
    if (DAT_14c9d3228 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c41be2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0x127;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d31a8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c41bd6);
      _Init_thread_footer(&DAT_14c9d3228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c41be2 FUN_142c41be2 body=136 status=ok
// SIG undefined FUN_142c41be2(void)

code * FUN_142c41be2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000012d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41c6a;
}



// FUNCTION 142c41c6a FUN_142c41c6a body=136 status=ok
// SIG undefined FUN_142c41c6a(void)

code * FUN_142c41c6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KnlSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000012c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41cf2;
}



// FUNCTION 142c41cf2 FUN_142c41cf2 body=136 status=ok
// SIG undefined FUN_142c41cf2(void)

code * FUN_142c41cf2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000012b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41d7a;
}



// FUNCTION 142c41d7a FUN_142c41d7a body=136 status=ok
// SIG undefined FUN_142c41d7a(void)

code * FUN_142c41d7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DataLayout";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000129;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c41e02;
}



// FUNCTION 142c41e02 FUN_142c41e02 body=130 status=ok
// SIG undefined FUN_142c41e02(void)

undefined1 * FUN_142c41e02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x128;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c41e84;
}



// FUNCTION 142c41e88 FUN_142c41e88 body=44 status=ok
// SIG undefined FUN_142c41e88(void)

void FUN_142c41e88(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c41ed2 FUN_142c41ed2 body=96 status=ok
// SIG undefined FUN_142c41ed2(void)

undefined8 FUN_142c41ed2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c41fc8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3378,1);
  return uVar3;
}



// FUNCTION 142c41f32 FUN_142c41f32 body=138 status=ok
// SIG undefined FUN_142c41f32(void)

void * FUN_142c41f32(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c41fc8 FUN_142c41fc8 body=445 status=ok
// SIG undefined FUN_142c41fc8(void)

void FUN_142c41fc8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d33f8) {
    FUN_144b3d300(&DAT_14c9d33f8);
    if (DAT_14c9d33f8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c42192;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x50;
      local_88 = 0x13e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d3378,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c42186);
      _Init_thread_footer(&DAT_14c9d33f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c42192 FUN_142c42192 body=136 status=ok
// SIG undefined FUN_142c42192(void)

code * FUN_142c42192(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000147;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4221a;
}



// FUNCTION 142c4221a FUN_142c4221a body=136 status=ok
// SIG undefined FUN_142c4221a(void)

code * FUN_142c4221a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000146;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c422a2;
}



// FUNCTION 142c422a2 FUN_142c422a2 body=136 status=ok
// SIG undefined FUN_142c422a2(void)

code * FUN_142c422a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000144;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4232a;
}



// FUNCTION 142c4232a FUN_142c4232a body=136 status=ok
// SIG undefined FUN_142c4232a(void)

code * FUN_142c4232a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BrightPixelGain";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c423b2;
}



// FUNCTION 142c423b2 FUN_142c423b2 body=136 status=ok
// SIG undefined FUN_142c423b2(void)

code * FUN_142c423b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000142;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4243a;
}



// FUNCTION 142c4243a FUN_142c4243a body=136 status=ok
// SIG undefined FUN_142c4243a(void)

code * FUN_142c4243a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000141;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c424c2;
}



// FUNCTION 142c424c2 FUN_142c424c2 body=136 status=ok
// SIG undefined FUN_142c424c2(void)

code * FUN_142c424c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000140;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c4254a;
}



// FUNCTION 142c4254a FUN_142c4254a body=130 status=ok
// SIG undefined FUN_142c4254a(void)

undefined1 * FUN_142c4254a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c425cc;
}



// FUNCTION 142c425d0 FUN_142c425d0 body=44 status=ok
// SIG undefined FUN_142c425d0(void)

void FUN_142c425d0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c4261a FUN_142c4261a body=96 status=ok
// SIG undefined FUN_142c4261a(void)

undefined8 FUN_142c4261a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c42710();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3548,1);
  return uVar3;
}



// FUNCTION 142c4267a FUN_142c4267a body=138 status=ok
// SIG undefined FUN_142c4267a(void)

void * FUN_142c4267a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c42710 FUN_142c42710 body=445 status=ok
// SIG undefined FUN_142c42710(void)

void FUN_142c42710(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d35c8) {
    FUN_144b3d300(&DAT_14c9d35c8);
    if (DAT_14c9d35c8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c428da;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x60;
      local_88 = 0x164;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d3548,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c428ce);
      _Init_thread_footer(&DAT_14c9d35c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c428da FUN_142c428da body=136 status=ok
// SIG undefined FUN_142c428da(void)

code * FUN_142c428da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000016e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42962;
}



// FUNCTION 142c42962 FUN_142c42962 body=136 status=ok
// SIG undefined FUN_142c42962(void)

code * FUN_142c42962(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstPostFilterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c429ea;
}



// FUNCTION 142c429ea FUN_142c429ea body=136 status=ok
// SIG undefined FUN_142c429ea(void)

code * FUN_142c429ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000016c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42a72;
}



// FUNCTION 142c42a72 FUN_142c42a72 body=136 status=ok
// SIG undefined FUN_142c42a72(void)

code * FUN_142c42a72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000016a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42afa;
}



// FUNCTION 142c42afa FUN_142c42afa body=136 status=ok
// SIG undefined FUN_142c42afa(void)

code * FUN_142c42afa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BrightPixelGain";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42b82;
}



// FUNCTION 142c42b82 FUN_142c42b82 body=136 status=ok
// SIG undefined FUN_142c42b82(void)

code * FUN_142c42b82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000168;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42c0a;
}



// FUNCTION 142c42c0a FUN_142c42c0a body=136 status=ok
// SIG undefined FUN_142c42c0a(void)

code * FUN_142c42c0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000167;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42c92;
}



// FUNCTION 142c42c92 FUN_142c42c92 body=136 status=ok
// SIG undefined FUN_142c42c92(void)

code * FUN_142c42c92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000166;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c42d1a;
}



// FUNCTION 142c42d1a FUN_142c42d1a body=130 status=ok
// SIG undefined FUN_142c42d1a(void)

undefined1 * FUN_142c42d1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c42d9c;
}



// FUNCTION 142c42da0 FUN_142c42da0 body=44 status=ok
// SIG undefined FUN_142c42da0(void)

void FUN_142c42da0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c42dea FUN_142c42dea body=96 status=ok
// SIG undefined FUN_142c42dea(void)

undefined8 FUN_142c42dea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142c42ee0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3718,1);
  return uVar3;
}



// FUNCTION 142c42e4a FUN_142c42e4a body=138 status=ok
// SIG undefined FUN_142c42e4a(void)

void * FUN_142c42e4a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142c42ee0 FUN_142c42ee0 body=445 status=ok
// SIG undefined FUN_142c42ee0(void)

void FUN_142c42ee0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3798) {
    FUN_144b3d300(&DAT_14c9d3798);
    if (DAT_14c9d3798 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142c430aa;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x40;
      local_88 = 0x18b;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14c9d3718,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4309e);
      _Init_thread_footer(&DAT_14c9d3798);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c430aa FUN_142c430aa body=136 status=ok
// SIG undefined FUN_142c430aa(void)

code * FUN_142c430aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000193;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c43132;
}



// FUNCTION 142c43132 FUN_142c43132 body=136 status=ok
// SIG undefined FUN_142c43132(void)

code * FUN_142c43132(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilterTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000192;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c431ba;
}



// FUNCTION 142c431ba FUN_142c431ba body=136 status=ok
// SIG undefined FUN_142c431ba(void)

code * FUN_142c431ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000191;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c43242;
}



// FUNCTION 142c43242 FUN_142c43242 body=136 status=ok
// SIG undefined FUN_142c43242(void)

code * FUN_142c43242(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000018f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c432ca;
}



// FUNCTION 142c432ca FUN_142c432ca body=136 status=ok
// SIG undefined FUN_142c432ca(void)

code * FUN_142c432ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000018e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c43352;
}



// FUNCTION 142c43352 FUN_142c43352 body=136 status=ok
// SIG undefined FUN_142c43352(void)

code * FUN_142c43352(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000018d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142c433da;
}



// FUNCTION 142c433da FUN_142c433da body=130 status=ok
// SIG undefined FUN_142c433da(void)

undefined1 * FUN_142c433da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcRectMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142c4345c;
}



// FUNCTION 142c43460 FUN_142c43460 body=44 status=ok
// SIG undefined FUN_142c43460(void)

void FUN_142c43460(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142c43490 FUN_142c43490 body=29 status=ok
// SIG undefined FUN_142c43490(void)

undefined8 FUN_142c43490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c434ae FUN_142c434ae body=38 status=ok
// SIG undefined FUN_142c434ae(void)

undefined8 FUN_142c434ae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c434d4 FUN_142c434d4 body=219 status=ok
// SIG undefined FUN_142c434d4(void)

void FUN_142c434d4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c435d6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c435b0 FUN_142c435b0 body=38 status=ok
// SIG undefined FUN_142c435b0(void)

undefined8 FUN_142c435b0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c435d6 FUN_142c435d6 body=1294 status=ok
// SIG undefined FUN_142c435d6(void)

void FUN_142c435d6(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c43ae6 FUN_142c43ae6 body=29 status=ok
// SIG undefined FUN_142c43ae6(void)

undefined8 FUN_142c43ae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c43b04 FUN_142c43b04 body=38 status=ok
// SIG undefined FUN_142c43b04(void)

undefined8 FUN_142c43b04(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c43b2a FUN_142c43b2a body=219 status=ok
// SIG undefined FUN_142c43b2a(void)

void FUN_142c43b2a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c43c2c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c43c06 FUN_142c43c06 body=38 status=ok
// SIG undefined FUN_142c43c06(void)

undefined8 FUN_142c43c06(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c43c2c FUN_142c43c2c body=1294 status=ok
// SIG undefined FUN_142c43c2c(void)

void FUN_142c43c2c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c4413c FUN_142c4413c body=29 status=ok
// SIG undefined FUN_142c4413c(void)

undefined8 FUN_142c4413c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4415a FUN_142c4415a body=38 status=ok
// SIG undefined FUN_142c4415a(void)

undefined8 FUN_142c4415a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c44180 FUN_142c44180 body=219 status=ok
// SIG undefined FUN_142c44180(void)

void FUN_142c44180(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c44282(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c4425c FUN_142c4425c body=38 status=ok
// SIG undefined FUN_142c4425c(void)

undefined8 FUN_142c4425c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c44282 FUN_142c44282 body=1294 status=ok
// SIG undefined FUN_142c44282(void)

void FUN_142c44282(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c44792 FUN_142c44792 body=29 status=ok
// SIG undefined FUN_142c44792(void)

undefined8 FUN_142c44792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c447b0 FUN_142c447b0 body=38 status=ok
// SIG undefined FUN_142c447b0(void)

undefined8 FUN_142c447b0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c447d6 FUN_142c447d6 body=219 status=ok
// SIG undefined FUN_142c447d6(void)

void FUN_142c447d6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c448d8(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c448b2 FUN_142c448b2 body=38 status=ok
// SIG undefined FUN_142c448b2(void)

undefined8 FUN_142c448b2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c448d8 FUN_142c448d8 body=1294 status=ok
// SIG undefined FUN_142c448d8(void)

void FUN_142c448d8(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c44de8 FUN_142c44de8 body=29 status=ok
// SIG undefined FUN_142c44de8(void)

undefined8 FUN_142c44de8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c44e06 FUN_142c44e06 body=38 status=ok
// SIG undefined FUN_142c44e06(void)

undefined8 FUN_142c44e06(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c44e2c FUN_142c44e2c body=219 status=ok
// SIG undefined FUN_142c44e2c(void)

void FUN_142c44e2c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c44f2e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c44f08 FUN_142c44f08 body=38 status=ok
// SIG undefined FUN_142c44f08(void)

undefined8 FUN_142c44f08(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c44f2e FUN_142c44f2e body=1294 status=ok
// SIG undefined FUN_142c44f2e(void)

void FUN_142c44f2e(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c4543e FUN_142c4543e body=29 status=ok
// SIG undefined FUN_142c4543e(void)

undefined8 FUN_142c4543e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4545c FUN_142c4545c body=38 status=ok
// SIG undefined FUN_142c4545c(void)

undefined8 FUN_142c4545c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c45482 FUN_142c45482 body=219 status=ok
// SIG undefined FUN_142c45482(void)

void FUN_142c45482(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c45584(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c4555e FUN_142c4555e body=38 status=ok
// SIG undefined FUN_142c4555e(void)

undefined8 FUN_142c4555e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c45584 FUN_142c45584 body=1294 status=ok
// SIG undefined FUN_142c45584(void)

void FUN_142c45584(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c45a94 FUN_142c45a94 body=29 status=ok
// SIG undefined FUN_142c45a94(void)

undefined8 FUN_142c45a94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c45ab2 FUN_142c45ab2 body=38 status=ok
// SIG undefined FUN_142c45ab2(void)

undefined8 FUN_142c45ab2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c45ad8 FUN_142c45ad8 body=219 status=ok
// SIG undefined FUN_142c45ad8(void)

void FUN_142c45ad8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c45bda(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c45bb4 FUN_142c45bb4 body=38 status=ok
// SIG undefined FUN_142c45bb4(void)

undefined8 FUN_142c45bb4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c45bda FUN_142c45bda body=1294 status=ok
// SIG undefined FUN_142c45bda(void)

void FUN_142c45bda(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c460ea FUN_142c460ea body=29 status=ok
// SIG undefined FUN_142c460ea(void)

undefined8 FUN_142c460ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c46108 FUN_142c46108 body=38 status=ok
// SIG undefined FUN_142c46108(void)

undefined8 FUN_142c46108(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4612e FUN_142c4612e body=219 status=ok
// SIG undefined FUN_142c4612e(void)

void FUN_142c4612e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c46230(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c4620a FUN_142c4620a body=38 status=ok
// SIG undefined FUN_142c4620a(void)

undefined8 FUN_142c4620a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c46230 FUN_142c46230 body=1294 status=ok
// SIG undefined FUN_142c46230(void)

void FUN_142c46230(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c46740 FUN_142c46740 body=29 status=ok
// SIG undefined FUN_142c46740(void)

undefined8 FUN_142c46740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4675e FUN_142c4675e body=38 status=ok
// SIG undefined FUN_142c4675e(void)

undefined8 FUN_142c4675e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c46784 FUN_142c46784 body=219 status=ok
// SIG undefined FUN_142c46784(void)

void FUN_142c46784(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142c46886(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142c46860 FUN_142c46860 body=38 status=ok
// SIG undefined FUN_142c46860(void)

undefined8 FUN_142c46860(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c46886 FUN_142c46886 body=1294 status=ok
// SIG undefined FUN_142c46886(void)

void FUN_142c46886(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c46e0d FUN_142c46e0d body=642 status=ok
// SIG undefined FUN_142c46e0d(void)

void FUN_142c46e0d(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  longlong *local_70;
  undefined8 *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_10 != 0) || (param_7 == 0)) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar7 + 0x2c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x170);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar7 + 0x2c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar7 = &PTR_FUN_14a21c918;
    local_68 = puVar7 + 2;
    FUN_14716fd7a();
    plVar6 = (longlong *)(param_1 + 0x98);
    iVar1 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
      local_70 = plVar6;
      FUN_1448cfae8(plVar6,iVar1);
      plVar6 = local_70;
    }
    *(undefined8 **)(*plVar6 + (longlong)iVar1 * 8) = puVar7;
    *(uint *)(puVar7 + 8) = param_3 & 0xff;
    uVar2 = *(undefined8 *)(param_2 + 0x11a00);
    lVar4 = FUN_144a81af4();
    cVar5 = '\x02';
    if (*(char *)(lVar4 + 0x41) != '\x03') {
      cVar5 = *(char *)(lVar4 + 0x41);
    }
    puVar7[10] = uVar2;
    *(char *)(puVar7 + 0xb) = cVar5;
    puVar7[0xc] = param_5;
    puVar7[0xd] = 0;
    *(undefined4 *)(puVar7 + 0xe) = 0xffff0001;
    puVar7[0xf] = param_6;
    puVar7[0x10] = 0;
    *(undefined4 *)(puVar7 + 0x11) = 0xffff0001;
    if (param_7 != 0) {
      puVar7[0x12] = param_7;
      puVar7[0x13] = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0xffff0001;
      if (param_8 != 0) {
        puVar7[0x15] = param_8;
        puVar7[0x16] = 0;
        *(undefined4 *)(puVar7 + 0x17) = 0xffff0001;
      }
      if (param_9 != 0) {
        puVar7[0x18] = param_9;
        puVar7[0x19] = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0xffff0001;
      }
    }
    if (param_10 != 0) {
      puVar7[0x24] = param_10;
      puVar7[0x25] = 0;
      *(undefined2 *)(puVar7 + 0x26) = 0x101;
      *(undefined4 *)((longlong)puVar7 + 0x134) = 2;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145eab214();
    FUN_1448e935e(uVar2,local_58,&DAT_14c9d0670,param_7 != 0);
    FUN_145eab214();
    local_98 = param_10 != 0;
    local_80 = local_68;
    local_90 = param_4;
    local_88 = local_58;
    FUN_14716fc40(param_1,&local_59,param_2,*(undefined8 *)(param_5 + 0x84));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c47090 FUN_142c47090 body=1835 status=ok
// SIG undefined FUN_142c47090(void)

void FUN_142c47090(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar6 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar6 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_108 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  local_198 = *(undefined8 *)(lVar7 + 0x10);
  uStack_190 = *(undefined8 *)(lVar7 + 0x18);
  local_188 = *(undefined4 *)(lVar7 + 0x20);
  uStack_184 = *(undefined4 *)(lVar7 + 0x24);
  uStack_180 = *(undefined4 *)(lVar7 + 0x28);
  uStack_17c = *(undefined4 *)(lVar7 + 0x2c);
  local_178 = *(undefined4 *)(lVar7 + 0x30);
  uStack_174 = *(undefined4 *)(lVar7 + 0x34);
  uStack_170 = *(undefined4 *)(lVar7 + 0x38);
  uStack_16c = *(undefined4 *)(lVar7 + 0x3c);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1f8);
  switch(iVar1) {
  case 0:
    if (*(char *)(param_1 + 0x1fd) == '\x01') {
      puVar5 = &DAT_14c9d2758;
      if (DAT_14c760294 == 0) {
        puVar5 = &DAT_14c9d2740;
      }
      puVar6 = (undefined8 *)(puVar5 + 0x10);
    }
    else {
      puVar6 = &DAT_14c9c0890;
    }
    break;
  default:
    local_138 = DAT_14c9d27b0;
    if (iVar1 == 1) {
      puVar6 = &DAT_14c9c0d98;
    }
    else {
      if (iVar1 == 3) goto LAB_142c47337;
      if (iVar1 != 2) goto LAB_142c473cc;
      puVar6 = &DAT_14c9b7aa0;
    }
    goto LAB_142c473c1;
  case 4:
    local_138 = DAT_14c9c0d50;
LAB_142c47337:
    puVar5 = &DAT_14c9c0d88;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      puVar5 = &DAT_14c9c0c50;
    }
    puVar6 = (undefined8 *)(puVar5 + 0x10);
    goto LAB_142c473c1;
  case 5:
    puVar6 = &DAT_14c9d2780;
    break;
  case 6:
    puVar6 = &DAT_14c9d2798;
  }
  local_138 = *puVar6;
  puVar6 = &DAT_14c9c0ea0;
LAB_142c473c1:
  local_128 = *puVar6;
LAB_142c473cc:
  uStack_130 = DAT_14c9c0db0;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uStack_160 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_110 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x18)) * 5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_158 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(uint *)(puVar12 + 3) = (uint)(iVar1 == 2) << 3;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145ea51d6();
  local_1a8 = (undefined8 *)uVar9;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3ae0);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145a1e9b2();
  local_1a8 = &local_198;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x30) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(undefined4 *)(puVar12 + 3) = 0;
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c477bc FUN_142c477bc body=1835 status=ok
// SIG undefined FUN_142c477bc(void)

void FUN_142c477bc(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar6 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar6 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_108 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  local_198 = *(undefined8 *)(lVar7 + 0x10);
  uStack_190 = *(undefined8 *)(lVar7 + 0x18);
  local_188 = *(undefined4 *)(lVar7 + 0x20);
  uStack_184 = *(undefined4 *)(lVar7 + 0x24);
  uStack_180 = *(undefined4 *)(lVar7 + 0x28);
  uStack_17c = *(undefined4 *)(lVar7 + 0x2c);
  local_178 = *(undefined4 *)(lVar7 + 0x30);
  uStack_174 = *(undefined4 *)(lVar7 + 0x34);
  uStack_170 = *(undefined4 *)(lVar7 + 0x38);
  uStack_16c = *(undefined4 *)(lVar7 + 0x3c);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1f8);
  switch(iVar1) {
  case 0:
    if (*(char *)(param_1 + 0x1fd) == '\x01') {
      puVar5 = &DAT_14c9d2758;
      if (DAT_14c760294 == 0) {
        puVar5 = &DAT_14c9d2740;
      }
      puVar6 = (undefined8 *)(puVar5 + 0x10);
    }
    else {
      puVar6 = &DAT_14c9c0890;
    }
    break;
  default:
    local_138 = DAT_14c9d27b0;
    if (iVar1 == 1) {
      puVar6 = &DAT_14c9c0d98;
    }
    else {
      if (iVar1 == 3) goto LAB_142c47a63;
      if (iVar1 != 2) goto LAB_142c47af8;
      puVar6 = &DAT_14c9b7aa0;
    }
    goto LAB_142c47aed;
  case 4:
    local_138 = DAT_14c9c0d50;
LAB_142c47a63:
    puVar5 = &DAT_14c9c0d88;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      puVar5 = &DAT_14c9c0c50;
    }
    puVar6 = (undefined8 *)(puVar5 + 0x10);
    goto LAB_142c47aed;
  case 5:
    puVar6 = &DAT_14c9d2780;
    break;
  case 6:
    puVar6 = &DAT_14c9d2798;
  }
  local_138 = *puVar6;
  puVar6 = &DAT_14c9c0ea0;
LAB_142c47aed:
  local_128 = *puVar6;
LAB_142c47af8:
  uStack_130 = DAT_14c9c0db0;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uStack_160 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_110 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x18)) * 5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_158 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(uint *)(puVar12 + 3) = (uint)(iVar1 == 2) << 3;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145f2892e();
  local_1a8 = (undefined8 *)uVar9;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3a58);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145a1e9b2();
  local_1a8 = &local_198;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x30) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(undefined4 *)(puVar12 + 3) = 0;
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c47ee8 FUN_142c47ee8 body=1835 status=ok
// SIG undefined FUN_142c47ee8(void)

void FUN_142c47ee8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar6 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar6 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_108 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  local_198 = *(undefined8 *)(lVar7 + 0x10);
  uStack_190 = *(undefined8 *)(lVar7 + 0x18);
  local_188 = *(undefined4 *)(lVar7 + 0x20);
  uStack_184 = *(undefined4 *)(lVar7 + 0x24);
  uStack_180 = *(undefined4 *)(lVar7 + 0x28);
  uStack_17c = *(undefined4 *)(lVar7 + 0x2c);
  local_178 = *(undefined4 *)(lVar7 + 0x30);
  uStack_174 = *(undefined4 *)(lVar7 + 0x34);
  uStack_170 = *(undefined4 *)(lVar7 + 0x38);
  uStack_16c = *(undefined4 *)(lVar7 + 0x3c);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1f8);
  switch(iVar1) {
  case 0:
    if (*(char *)(param_1 + 0x1fd) == '\x01') {
      puVar5 = &DAT_14c9d2758;
      if (DAT_14c760294 == 0) {
        puVar5 = &DAT_14c9d2740;
      }
      puVar6 = (undefined8 *)(puVar5 + 0x10);
    }
    else {
      puVar6 = &DAT_14c9c0890;
    }
    break;
  default:
    local_138 = DAT_14c9d27b0;
    if (iVar1 == 1) {
      puVar6 = &DAT_14c9c0d98;
    }
    else {
      if (iVar1 == 3) goto LAB_142c4818f;
      if (iVar1 != 2) goto LAB_142c48224;
      puVar6 = &DAT_14c9b7aa0;
    }
    goto LAB_142c48219;
  case 4:
    local_138 = DAT_14c9c0d50;
LAB_142c4818f:
    puVar5 = &DAT_14c9c0d88;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      puVar5 = &DAT_14c9c0c50;
    }
    puVar6 = (undefined8 *)(puVar5 + 0x10);
    goto LAB_142c48219;
  case 5:
    puVar6 = &DAT_14c9d2780;
    break;
  case 6:
    puVar6 = &DAT_14c9d2798;
  }
  local_138 = *puVar6;
  puVar6 = &DAT_14c9c0ea0;
LAB_142c48219:
  local_128 = *puVar6;
LAB_142c48224:
  uStack_130 = DAT_14c9c0db0;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uStack_160 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_110 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x18)) * 5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_158 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(uint *)(puVar12 + 3) = (uint)(iVar1 == 2) << 3;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145f66dd4();
  local_1a8 = (undefined8 *)uVar9;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d39d0);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145a1e9b2();
  local_1a8 = &local_198;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x30) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(undefined4 *)(puVar12 + 3) = 0;
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c48614 FUN_142c48614 body=1834 status=ok
// SIG undefined FUN_142c48614(void)

void FUN_142c48614(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar6 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar6 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_108 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  local_198 = *puVar6;
  uStack_190 = puVar6[1];
  local_188 = *(undefined4 *)(puVar6 + 2);
  uStack_184 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uStack_180 = *(undefined4 *)(puVar6 + 3);
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0x1c);
  local_178 = *(undefined4 *)(puVar6 + 4);
  uStack_174 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_170 = *(undefined4 *)(puVar6 + 5);
  uStack_16c = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1f8);
  switch(iVar1) {
  case 0:
    if (*(char *)(param_1 + 0x1fd) == '\x01') {
      puVar5 = &DAT_14c9d2758;
      if (DAT_14c760294 == 0) {
        puVar5 = &DAT_14c9d2740;
      }
      puVar6 = (undefined8 *)(puVar5 + 0x10);
    }
    else {
      puVar6 = &DAT_14c9c0890;
    }
    break;
  default:
    local_138 = DAT_14c9d27b0;
    if (iVar1 == 1) {
      puVar6 = &DAT_14c9c0d98;
    }
    else {
      if (iVar1 == 3) goto LAB_142c488ba;
      if (iVar1 != 2) goto LAB_142c4894f;
      puVar6 = &DAT_14c9b7aa0;
    }
    goto LAB_142c48944;
  case 4:
    local_138 = DAT_14c9c0d50;
LAB_142c488ba:
    puVar5 = &DAT_14c9c0d88;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      puVar5 = &DAT_14c9c0c50;
    }
    puVar6 = (undefined8 *)(puVar5 + 0x10);
    goto LAB_142c48944;
  case 5:
    puVar6 = &DAT_14c9d2780;
    break;
  case 6:
    puVar6 = &DAT_14c9d2798;
  }
  local_138 = *puVar6;
  puVar6 = &DAT_14c9c0ea0;
LAB_142c48944:
  local_128 = *puVar6;
LAB_142c4894f:
  uStack_130 = DAT_14c9c0db0;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uStack_160 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_110 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 8)) * 5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_158 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(uint *)(puVar12 + 3) = (uint)(iVar1 == 2) << 3;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145e80fb4();
  local_1a8 = (undefined8 *)uVar9;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3b68);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145a1e9b2();
  local_1a8 = &local_198;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x20) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(undefined4 *)(puVar12 + 3) = 0;
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c48d40 FUN_142c48d40 body=1834 status=ok
// SIG undefined FUN_142c48d40(void)

void FUN_142c48d40(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar6 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar6 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_108 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  local_198 = *puVar6;
  uStack_190 = puVar6[1];
  local_188 = *(undefined4 *)(puVar6 + 2);
  uStack_184 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uStack_180 = *(undefined4 *)(puVar6 + 3);
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0x1c);
  local_178 = *(undefined4 *)(puVar6 + 4);
  uStack_174 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_170 = *(undefined4 *)(puVar6 + 5);
  uStack_16c = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2);
  iVar1 = *(int *)(param_1 + 0x1f8);
  switch(iVar1) {
  case 0:
    if (*(char *)(param_1 + 0x1fd) == '\x01') {
      puVar5 = &DAT_14c9d2758;
      if (DAT_14c760294 == 0) {
        puVar5 = &DAT_14c9d2740;
      }
      puVar6 = (undefined8 *)(puVar5 + 0x10);
    }
    else {
      puVar6 = &DAT_14c9c0890;
    }
    break;
  default:
    local_138 = DAT_14c9d27b0;
    if (iVar1 == 1) {
      puVar6 = &DAT_14c9c0d98;
    }
    else {
      if (iVar1 == 3) goto LAB_142c48fe6;
      if (iVar1 != 2) goto LAB_142c4907b;
      puVar6 = &DAT_14c9b7aa0;
    }
    goto LAB_142c49070;
  case 4:
    local_138 = DAT_14c9c0d50;
LAB_142c48fe6:
    puVar5 = &DAT_14c9c0d88;
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      puVar5 = &DAT_14c9c0c50;
    }
    puVar6 = (undefined8 *)(puVar5 + 0x10);
    goto LAB_142c49070;
  case 5:
    puVar6 = &DAT_14c9d2780;
    break;
  case 6:
    puVar6 = &DAT_14c9d2798;
  }
  local_138 = *puVar6;
  puVar6 = &DAT_14c9c0ea0;
LAB_142c49070:
  local_128 = *puVar6;
LAB_142c4907b:
  uStack_130 = DAT_14c9c0db0;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uStack_160 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_110 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 8)) * 5;
  iVar1 = *(int *)(param_1 + 0x1f8);
  local_158 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(uint *)(puVar12 + 3) = (uint)(iVar1 == 2) << 3;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145eab482();
  local_1a8 = (undefined8 *)uVar9;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3bf0);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar9 = FUN_145a1e9b2();
  local_1a8 = &local_198;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c0),uVar9);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x20) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar9;
  *(undefined4 *)(puVar12 + 3) = 0;
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c494fb FUN_142c494fb body=704 status=ok
// SIG undefined FUN_142c494fb(void)

void FUN_142c494fb(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined1 *local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)
        (&DAT_14ca814b0 +
        (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c) !=
       DAT_14ca80038) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) *
                0x3c + 3) & 1) != 0)) {
    DAT_14ca4d32c = DAT_14ca4d32c + 2000;
    DAT_14ca4d100 = 1;
    if (*(char *)(param_2 + 0x13870) == '\x01') {
      uVar4 = *(undefined4 *)(param_3 + 0x3f4);
      uVar1 = *(undefined4 *)(param_3 + 0x4f0);
      uVar2 = *(undefined4 *)(param_3 + 0x4f4);
      uVar3 = *(undefined4 *)(param_3 + 0x4f8);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar8 + 0xe;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x80);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar8 + 0xe;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar8 = &PTR_FUN_14a21d1e8;
      puVar8[10] = 0;
      *(undefined1 *)(puVar8 + 0xb) = 1;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      iVar5 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
        FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar8;
      puVar8[2] = CONCAT44(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc),
                           *(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8));
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x44) = *(undefined4 *)(param_3 + 0x47c);
      *(undefined4 *)(puVar8 + 4) = uVar1;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar2;
      *(undefined4 *)(puVar8 + 5) = uVar3;
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_3 + 0x4ec);
      *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)(param_3 + 0x490);
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_3 + 0x48c);
      *(undefined4 *)((longlong)puVar8 + 0x3c) = *(undefined4 *)(param_3 + 0x4a0);
      if (*(uint *)(param_3 + 900) < 3) {
        *(uint *)(puVar8 + 6) = *(uint *)(param_3 + 900);
      }
      FUN_1472ea582(param_1,param_2 + 0x13870,puVar8 + 10);
      uVar6 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f0225c();
      FUN_1448e935e(uVar6,&local_88,&DAT_14c9d0820,0);
      FUN_145f0225c();
      uVar6 = local_88;
      local_98 = local_88;
      local_90 = uStack_80;
      FUN_145f024ca();
      local_88 = 0;
      uStack_80 = 0;
      FUN_1448f70da(uVar6,&DAT_14c9d3c78,puVar8 + 2,&local_88);
      local_b8 = &local_a4;
      local_a4 = &DAT_100000001;
      local_9c = 1;
      FUN_1471726f9(param_1,&local_88,&local_98,puVar8 + 2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c497bc FUN_142c497bc body=2597 status=ok
// SIG undefined FUN_142c497bc(void)

void FUN_142c497bc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int *param_6,longlong param_7)

{
  undefined4 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  undefined1 local_110;
  longlong *local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 *local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((param_3 != 0 && param_2 != 0) && (param_7 != 0)) && (*(longlong *)(param_3 + 0x11a00) != 0)
      ) && ((*(longlong *)
              (&DAT_14ca814b0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) *
              0x3c) != DAT_14ca80038 ||
            ((*(byte *)((longlong)&DAT_14ca814d0 +
                       (ulonglong)
                       *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0x3c
                       + 3) & 1) != 0)))) {
    DAT_14ca4d32c = DAT_14ca4d32c + 0x2000;
    DAT_14ca4d330 = DAT_14ca4d330 + *param_6 * 0x20;
    DAT_14ca4d100 = 1;
    if (*(char *)(param_3 + 0x13870) == '\x01') {
      local_d8 = param_3 + 0x13870;
      local_f8 = (ulonglong)*(uint *)(param_5 + 1);
      iVar16 = *(uint *)(param_5 + 1) * 4;
      local_88 = 0;
      uStack_80 = 0;
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar16);
      }
      local_e8 = param_2;
      local_e0 = param_4;
      local_d0 = param_1;
      if (iVar16 != 0) {
        FUN_142c4bd0a(&local_88);
      }
      if ((int)local_f8 != 0) {
        iVar16 = 0;
        do {
          lVar15 = (longlong)*(int *)(*param_5 + 0x18 + (longlong)iVar16 * 0x78);
          if (lVar15 != 0) {
            lVar3 = *(longlong *)(*param_5 + 0x10 + (longlong)iVar16 * 0x78);
            lVar20 = 0;
            do {
              uVar7 = uStack_80;
              lVar18 = (longlong)(int)uStack_80;
              uVar9 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
              if (*(longlong *)(lVar3 + 8 + lVar20) == 0) {
                if (uStack_80._4_4_ < uVar9) {
                  FUN_142c4bde8(&local_88,uVar7 & 0xffffffff);
                }
                FUN_142c4bdd1(lVar18 * 0x20 + local_88);
              }
              else {
                if (uStack_80._4_4_ < uVar9) {
                  FUN_142c4bde8(&local_88,uVar7 & 0xffffffff);
                }
                lVar6 = local_88;
                lVar18 = lVar18 * 0x20;
                puVar1 = (undefined4 *)(local_88 + lVar18);
                FUN_142c4bdd1(puVar1);
                *(undefined4 *)(lVar6 + lVar18) = 0xffffffff;
                lVar18 = *(longlong *)(*(longlong *)(lVar3 + 8 + lVar20) + 0x218);
                if (lVar18 != 0) {
                  *puVar1 = *(undefined4 *)(lVar18 + 0x158);
                }
                iVar10 = *(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8);
                iVar14 = *(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc);
                plVar4 = *(longlong **)(lVar3 + 0x20 + lVar20);
                if (iVar10 <= iVar14) {
                  iVar14 = iVar10;
                }
                plVar5 = (longlong *)*plVar4;
                fVar2 = *(float *)((longlong)plVar4 + 0x49c);
                uVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
                puVar1[2] = uVar11;
                puVar1[1] = (int)plVar5[2];
                *(undefined8 *)(puVar1 + 4) =
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x20 + lVar20) + 0x4a8);
                puVar1[6] = 0;
                puVar1[7] = (float)iVar14 * fVar2 * 0.5;
              }
              lVar20 = lVar20 + 0x28;
            } while (lVar15 * 0x28 != lVar20);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != (int)local_f8);
      }
      lVar20 = local_d0;
      local_98 = 0;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0x4109);
      local_a8 = CONCAT44((int)uStack_80,0x20);
      local_118 = (undefined1 **)((longlong)(int)uStack_80 << 5);
      local_110 = 0;
      lVar18 = FUN_1400489e9(local_d0,L"Hair.Debug.InstanceDatas",&local_a8,local_88);
      lVar3 = local_e0;
      lVar15 = *(longlong *)(local_e0 + 0x18);
      if (lVar15 == 0) {
        lVar15 = FUN_14476842e(lVar20,&DAT_14ca63b28,L"BlackDummy",2);
      }
      local_f0 = *(longlong *)(lVar3 + 0x20);
      local_f8 = lVar15;
      if (local_f0 == 0) {
        local_f0 = FUN_14476842e(lVar20,&DAT_14ca63b28,L"BlackDummy",2);
      }
      plVar4 = (longlong *)(lVar20 + 0x70);
      puVar19 = (undefined8 *)(*(longlong *)(lVar20 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar13 = puVar19 + 0x1a;
      if (*(undefined8 **)(lVar20 + 0x78) < puVar13) {
        FUN_140023dd8(plVar4,0xe0);
        puVar19 = (undefined8 *)(*plVar4 + 0xfU & 0xfffffffffffffff0);
        puVar13 = puVar19 + 0x1a;
      }
      *(undefined8 **)(lVar20 + 0x70) = puVar13;
      *puVar19 = &PTR_FUN_14a21d320;
      puVar19[7] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      puVar19[10] = 0;
      puVar19[0xb] = 0;
      puVar19[0xc] = 0;
      puVar19[0xd] = 0;
      puVar19[0xe] = 0;
      puVar19[0xf] = 0;
      puVar19[0x10] = 0;
      *(undefined1 *)(puVar19 + 0x11) = 1;
      puVar19[0x12] = 0;
      *(undefined1 *)(puVar19 + 0x13) = 1;
      puVar19[0x14] = 0;
      *(undefined1 *)(puVar19 + 0x15) = 1;
      puVar19[0x16] = 0;
      puVar19[0x17] = 0;
      puVar19[0x18] = 0;
      *(undefined1 *)(puVar19 + 0x19) = 1;
      iVar16 = *(int *)(lVar20 + 0xa0);
      *(uint *)(lVar20 + 0xa0) = iVar16 + 1U;
      if (*(uint *)(lVar20 + 0xa4) < iVar16 + 1U) {
        FUN_1448cfae8(lVar20 + 0x98,iVar16);
      }
      *(undefined8 **)(*(longlong *)(lVar20 + 0x98) + (longlong)iVar16 * 8) = puVar19;
      *(float *)((longlong)puVar19 + 0x34) =
           (float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8)) /
           (float)(*(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8));
      local_108 = plVar4;
      uVar12 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
      uVar12 = FUN_1448c569e(uVar12,lVar20);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca4b328) {
        FUN_144b3d300(&DAT_14ca4b328);
        if (DAT_14ca4b328 == -1) {
          DAT_14ca4b320 = FUN_145900d44();
          _Init_thread_footer(&DAT_14ca4b328);
        }
      }
      plVar4 = local_108;
      cVar8 = '\x02';
      if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
        cVar8 = *(char *)(DAT_14ca4b320 + 0x41);
      }
      puVar19[0x10] = uVar12;
      *(char *)(puVar19 + 0x11) = cVar8;
      *(int *)(puVar19 + 6) = (int)uStack_80;
      puVar17 = (undefined8 *)(*(longlong *)(lVar20 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar17 + 9;
      if (*(undefined8 **)(lVar20 + 0x78) < puVar13) {
        FUN_140023dd8(local_108,0x50);
        puVar17 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar17 + 9;
      }
      local_100 = lVar20 + 0x198;
      *(undefined8 **)(lVar20 + 0x70) = puVar13;
      puVar17[1] = *(undefined8 *)(lVar18 + 8);
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 3;
      *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
      *puVar17 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar17 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
      puVar17[7] = 0;
      puVar17[8] = lVar18;
      iVar16 = *(int *)(lVar20 + 0x1a0);
      *(uint *)(lVar20 + 0x1a0) = iVar16 + 1U;
      if (*(uint *)(lVar20 + 0x1a4) < iVar16 + 1U) {
        FUN_1447568fc(local_100,iVar16);
      }
      uVar12 = 0x800000008;
      *(undefined8 **)(*(longlong *)(lVar20 + 0x198) + (longlong)iVar16 * 8) = puVar17;
      *(int *)((longlong)puVar17 + 0x1c) = *(int *)(lVar20 + 0x1a0) + -1;
      puVar19[7] = puVar17;
      puVar19[8] = *(undefined8 *)(*(longlong *)(local_e8 + 0x38c0) + 0x28);
      cVar8 = FUN_1414c39f7();
      if (cVar8 == '\0') {
        cVar8 = FUN_144848644();
        if (cVar8 != '\0') {
          uVar12 = 0x400000008;
        }
      }
      puVar19[2] = uVar12;
      lVar15 = FUN_1447e4f80();
      plVar4 = local_108;
      cVar8 = '\x02';
      if (*(char *)(lVar15 + 0x41) != '\x03') {
        cVar8 = *(char *)(lVar15 + 0x41);
      }
      puVar19[0x12] = *(undefined8 *)(param_3 + 0x18);
      *(char *)(puVar19 + 0x13) = cVar8;
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x84);
      }
      puVar19[3] = uVar12;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = *(undefined4 *)(lVar3 + 0x4c);
      *(undefined4 *)(puVar19 + 4) = 8;
      puVar19[9] = local_f8;
      puVar19[10] = local_f0;
      lVar15 = *(longlong *)(lVar3 + 0x78);
      puVar17 = (undefined8 *)(*(longlong *)(lVar20 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar17 + 9;
      if (*(undefined8 **)(lVar20 + 0x78) < puVar13) {
        FUN_140023dd8(local_108,0x50);
        puVar17 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar17 + 9;
      }
      *(undefined8 **)(lVar20 + 0x70) = puVar13;
      puVar17[1] = *(undefined8 *)(lVar15 + 8);
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 3;
      *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
      *puVar17 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar17 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
      puVar17[7] = 0;
      puVar17[8] = lVar15;
      iVar16 = *(int *)(lVar20 + 0x1a0);
      *(uint *)(lVar20 + 0x1a0) = iVar16 + 1U;
      if (*(uint *)(lVar20 + 0x1a4) < iVar16 + 1U) {
        FUN_1447568fc(local_100,iVar16);
      }
      *(undefined8 **)(*(longlong *)(lVar20 + 0x198) + (longlong)iVar16 * 8) = puVar17;
      *(int *)((longlong)puVar17 + 0x1c) = *(int *)(lVar20 + 0x1a0) + -1;
      puVar19[0xb] = puVar17;
      *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(lVar3 + 0x80);
      puVar19[0xe] = param_7;
      puVar19[0xf] = DAT_14c9c0de0;
      *(int *)((longlong)puVar19 + 0x24) = *param_6;
      uVar12 = *(undefined8 *)(param_3 + 0x11a00);
      lVar15 = FUN_144a81af4();
      plVar4 = local_108;
      cVar8 = '\x02';
      if (*(char *)(lVar15 + 0x41) != '\x03') {
        cVar8 = *(char *)(lVar15 + 0x41);
      }
      puVar19[0x18] = uVar12;
      *(char *)(puVar19 + 0x19) = cVar8;
      lVar15 = *(longlong *)(param_6 + 2);
      puVar17 = (undefined8 *)(*(longlong *)(lVar20 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar17 + 9;
      if (*(undefined8 **)(lVar20 + 0x78) < puVar13) {
        FUN_140023dd8(local_108,0x50);
        puVar17 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar17 + 9;
      }
      *(undefined8 **)(lVar20 + 0x70) = puVar13;
      puVar17[1] = *(undefined8 *)(lVar15 + 8);
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 3;
      *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
      *puVar17 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar17 + 5) = 0x1d;
      *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
      puVar17[7] = 0;
      puVar17[8] = lVar15;
      iVar16 = *(int *)(lVar20 + 0x1a0);
      *(uint *)(lVar20 + 0x1a0) = iVar16 + 1U;
      if (*(uint *)(lVar20 + 0x1a4) < iVar16 + 1U) {
        FUN_1447568fc(local_100,iVar16);
      }
      plVar4 = local_108;
      *(undefined8 **)(*(longlong *)(lVar20 + 0x198) + (longlong)iVar16 * 8) = puVar17;
      *(int *)((longlong)puVar17 + 0x1c) = *(int *)(lVar20 + 0x1a0) + -1;
      puVar19[0xc] = puVar17;
      lVar15 = *(longlong *)(param_6 + 4);
      puVar17 = (undefined8 *)(*(longlong *)(lVar20 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar17 + 9;
      if (*(undefined8 **)(lVar20 + 0x78) < puVar13) {
        FUN_140023dd8(local_108,0x50);
        puVar17 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar17 + 9;
      }
      *(undefined8 **)(lVar20 + 0x70) = puVar13;
      puVar17[1] = *(undefined8 *)(lVar15 + 8);
      puVar17[2] = 0;
      *(undefined1 *)(puVar17 + 3) = 3;
      *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
      *puVar17 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar17 + 5) = 0x1d;
      *(undefined8 *)((longlong)puVar17 + 0x2c) = 0xffffffff00000000;
      puVar17[7] = 0;
      puVar17[8] = lVar15;
      iVar16 = *(int *)(lVar20 + 0x1a0);
      *(uint *)(lVar20 + 0x1a0) = iVar16 + 1U;
      if (*(uint *)(lVar20 + 0x1a4) < iVar16 + 1U) {
        FUN_1447568fc(local_100,iVar16);
      }
      *(undefined8 **)(*(longlong *)(lVar20 + 0x198) + (longlong)iVar16 * 8) = puVar17;
      *(int *)((longlong)puVar17 + 0x1c) = *(int *)(lVar20 + 0x1a0) + -1;
      puVar19[0xd] = puVar17;
      FUN_1472ea582(lVar20,local_d8,puVar19 + 0x14);
      uVar12 = *(undefined8 *)(param_3 + 0x13818);
      FUN_145f67160();
      FUN_1448e935e(uVar12,&local_a8,&DAT_14c9d0948,0);
      FUN_145f67160();
      uVar12 = local_a8;
      local_b8 = local_a8;
      local_b0 = uStack_a0;
      FUN_145f673ce();
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1448f70da(uVar12,&DAT_14c9d3d00,puVar19 + 2,&local_a8);
      local_118 = &local_c4;
      local_c4 = &DAT_100000001;
      local_bc = 1;
      FUN_147173289(lVar20,&local_a8,&local_b8,puVar19 + 2);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4a1e2 FUN_142c4a1e2 body=1126 status=ok
// SIG undefined FUN_142c4a1e2(void)

void FUN_142c4a1e2(longlong param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
                  undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int *local_a8;
  ulonglong *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = *(undefined8 *)(param_2 + 0x30f8);
  uVar8 = *(undefined8 *)(param_2 + 0x3100);
  local_a0 = (ulonglong *)(param_1 + 0x70);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar13 + 0x2e;
  local_88 = param_4;
  local_80 = uVar8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_a0,0x180);
    puVar13 = (undefined8 *)(*local_a0 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar13 + 0x2e;
  }
  uVar11 = (int)((ulonglong)uVar8 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20);
  uVar14 = (int)uVar8 - (int)uVar7;
  *local_a0 = (ulonglong)puVar9;
  *puVar13 = &PTR_FUN_14a21d348;
  puVar13[0xc] = 0;
  *(undefined1 (*) [16])(puVar13 + 8) = (undefined1  [16])0x0;
  puVar13[10] = 0;
  *(undefined1 *)(puVar13 + 0xd) = 1;
  lVar6 = 0x82;
  do {
    *(undefined1 (*) [16])((longlong)puVar13 + lVar6 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar13 + lVar6 + -2) = 0xffff0000;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x142);
  *(undefined4 *)((longlong)puVar13 + 0x144) = 0;
  *(undefined1 (*) [16])(puVar13 + 0x26) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar13 + 0x28) = 0;
  *(undefined4 *)(puVar13 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)puVar13 + 0x14c) = 0xffffffff;
  *(undefined4 *)(puVar13 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)puVar13 + 0x154) = 0xffffffff;
  *(undefined4 *)(puVar13 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x15c) = 0;
  puVar13[0x2c] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  local_78 = uVar7;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    local_a8 = param_3;
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
    param_3 = local_a8;
  }
  local_a8 = (int *)(puVar13 + 2);
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar13;
  *(undefined4 *)(puVar13 + 2) = DAT_14c760298;
  local_90 = (ulonglong)uVar14;
  fVar16 = (float)(int)uVar14;
  fVar17 = (float)(int)uVar11;
  *(float *)(puVar13 + 3) = fVar16;
  *(float *)((longlong)puVar13 + 0x1c) = fVar17;
  *(float *)(puVar13 + 4) = 1.0 / fVar16;
  *(float *)((longlong)puVar13 + 0x24) = 1.0 / fVar17;
  if (param_5 == 0) {
    puVar13[8] = 0;
    uVar7 = 0;
  }
  else {
    puVar13[8] = *(undefined8 *)(param_5 + 0x10);
    uVar7 = *(undefined8 *)(param_5 + 0x18);
  }
  puVar13[9] = uVar7;
  puVar13[10] = DAT_14c9c0de0;
  iVar1 = param_3[3];
  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  *(int *)(puVar13 + 6) = iVar2;
  *(int *)((longlong)puVar13 + 0x34) = iVar3;
  *(int *)(puVar13 + 7) = iVar4 - iVar2;
  *(int *)((longlong)puVar13 + 0x3c) = iVar1 - iVar3;
  puVar13[0xe] = *param_6;
  puVar13[0xf] = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0xffff0001;
  uVar7 = *(undefined8 *)(param_2 + 0x13818);
  uVar8 = FUN_1417ed4a6();
  FUN_1448e935e(uVar7,&local_68,uVar8,0);
  FUN_1417ed4a6();
  lVar6 = lStack_60;
  local_98 = local_68;
  bVar15 = local_88 == 0;
  uVar7 = *(undefined8 *)(param_2 + 0x13818);
  FUN_145e5055e();
  FUN_1448e935e(uVar7,&local_68,&DAT_14c9d0cc0,bVar15);
  FUN_145e5055e();
  lVar5 = lStack_60;
  puVar13 = local_68;
  FUN_145e507cc();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar13,&DAT_14c9d3e98,local_a8,&local_68);
  FUN_145e507cc();
  FUN_140069376(param_1);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 0x3f;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_a0,0x200);
    puVar10 = (undefined8 *)(*local_a0 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 0x3f;
  }
  uVar7 = local_78;
  lVar12 = ((ulonglong)uVar11 << 0x20) + local_90;
  *local_a0 = (ulonglong)puVar9;
  local_68 = (undefined8 *)local_a8;
  lStack_60 = DAT_14c9d3ee0;
  if (DAT_14c9d3ee0 != 0) {
    LOCK();
    *(int *)(DAT_14c9d3ee0 + 8) = *(int *)(DAT_14c9d3ee0 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14c9d3e98;
  local_b8 = 2;
  FUN_140068f1a(puVar10,&local_69,&local_68,1);
  *puVar10 = &PTR_FUN_14a21d350;
  puVar10[0x37] = local_a8;
  puVar10[0x38] = local_98;
  puVar10[0x39] = lVar6;
  puVar10[0x3a] = puVar13;
  puVar10[0x3b] = lVar5;
  puVar10[0x3c] = uVar7;
  puVar10[0x3d] = local_80;
  puVar10[0x3e] = lVar12;
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar10);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4a64a FUN_142c4a64a body=481 status=ok
// SIG undefined FUN_142c4a64a(void)

void FUN_142c4a64a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1471724e0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4a82c FUN_142c4a82c body=232 status=ok
// SIG undefined FUN_142c4a82c(void)

void FUN_142c4a82c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142c4a914 FUN_142c4a914 body=81 status=ok
// SIG undefined FUN_142c4a914(void)

void FUN_142c4a914(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147172583(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4a966 FUN_142c4a966 body=481 status=ok
// SIG undefined FUN_142c4a966(void)

void FUN_142c4a966(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147172972(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4ab48 FUN_142c4ab48 body=232 status=ok
// SIG undefined FUN_142c4ab48(void)

void FUN_142c4ab48(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142c4ac30 FUN_142c4ac30 body=81 status=ok
// SIG undefined FUN_142c4ac30(void)

void FUN_142c4ac30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147172a15(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4ac82 FUN_142c4ac82 body=38 status=ok
// SIG undefined FUN_142c4ac82(void)

undefined8 FUN_142c4ac82(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4aca8 FUN_142c4aca8 body=1420 status=ok
// SIG undefined FUN_142c4aca8(void)

void FUN_142c4aca8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = 0;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145f41534();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d40b8);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4b236 FUN_142c4b236 body=38 status=ok
// SIG undefined FUN_142c4b236(void)

undefined8 FUN_142c4b236(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4b25c FUN_142c4b25c body=1420 status=ok
// SIG undefined FUN_142c4b25c(void)

void FUN_142c4b25c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = 0;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145f67ede();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d4140);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4b7ea FUN_142c4b7ea body=513 status=ok
// SIG undefined FUN_142c4b7ea(void)

undefined8 FUN_142c4b7ea(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined1 local_70;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2 * 6);
  }
  if (iVar2 != 0) {
    FUN_14482f6fa(&local_48);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined4 *)*param_2;
      puVar1 = puVar7 + (longlong)*(int *)(param_2 + 1) * 6;
      do {
        lVar6 = (longlong)(int)(uint)uStack_40;
        uVar3 = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < uVar3) {
          uVar5 = uStack_40 & 0xffffffff;
          uStack_40._0_4_ = uVar3;
          FUN_14475e4ac(&local_48,uVar5);
          uVar3 = (uint)uStack_40;
        }
        uStack_40._0_4_ = uVar3;
        uVar3 = (uint)uStack_40;
        *(undefined4 *)(local_48 + lVar6 * 4) = *puVar7;
        lVar6 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_14475e4ac(&local_48,uVar3);
        }
        uVar3 = (uint)uStack_40;
        *(undefined4 *)(local_48 + lVar6 * 4) = puVar7[1];
        lVar6 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_14475e4ac(&local_48,uVar3);
        }
        uVar3 = (uint)uStack_40;
        *(undefined4 *)(local_48 + lVar6 * 4) = puVar7[2];
        lVar6 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_14475e4ac(&local_48,uVar3);
        }
        uVar3 = (uint)uStack_40;
        *(undefined4 *)(local_48 + lVar6 * 4) = puVar7[3];
        lVar6 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_14475e4ac(&local_48,uVar3);
        }
        uVar3 = (uint)uStack_40;
        *(undefined4 *)(local_48 + lVar6 * 4) = puVar7[4];
        lVar6 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_14475e4ac(&local_48,uVar3);
        }
        *(undefined4 *)(local_48 + lVar6 * 4) = puVar7[5];
        puVar7 = puVar7 + 6;
      } while (puVar7 != puVar1);
    }
  }
  local_78 = (ulonglong)((uint)uStack_40 * 4);
  local_50 = 0;
  local_58 = 0x4109;
  local_60 = 4;
  local_5c = (uint)uStack_40;
  local_70 = 0;
  uVar4 = FUN_1400489e9(*param_1,L"Hair.Debug.InstanceBounds",&local_60,local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4b9ee FUN_142c4b9ee body=481 status=ok
// SIG undefined FUN_142c4b9ee(void)

void FUN_142c4b9ee(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147173070(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4bbd0 FUN_142c4bbd0 body=232 status=ok
// SIG undefined FUN_142c4bbd0(void)

void FUN_142c4bbd0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142c4bcb8 FUN_142c4bcb8 body=81 status=ok
// SIG undefined FUN_142c4bcb8(void)

void FUN_142c4bcb8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147173113(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4bd0a FUN_142c4bd0a body=199 status=ok
// SIG undefined FUN_142c4bd0a(void)

void FUN_142c4bd0a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x400) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
      }
      else {
        uVar2 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar2 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 142c4bdd1 FUN_142c4bdd1 body=23 status=ok
// SIG undefined FUN_142c4bdd1(void)

void FUN_142c4bdd1(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 142c4bde8 FUN_142c4bde8 body=248 status=ok
// SIG undefined FUN_142c4bde8(void)

void FUN_142c4bde8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142c4bee0 FUN_142c4bee0 body=481 status=ok
// SIG undefined FUN_142c4bee0(void)

void FUN_142c4bee0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147173502(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4c0c2 FUN_142c4c0c2 body=232 status=ok
// SIG undefined FUN_142c4c0c2(void)

void FUN_142c4c0c2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142c4c1aa FUN_142c4c1aa body=81 status=ok
// SIG undefined FUN_142c4c1aa(void)

void FUN_142c4c1aa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1471735a5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4c1fc FUN_142c4c1fc body=38 status=ok
// SIG undefined FUN_142c4c1fc(void)

undefined8 FUN_142c4c1fc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4c222 FUN_142c4c222 body=1420 status=ok
// SIG undefined FUN_142c4c222(void)

void FUN_142c4c222(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = 0;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145e507cc();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3e98);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


