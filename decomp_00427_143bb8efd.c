// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143bb8efd FUN_143bb8efd body=55 status=ok
// SIG undefined FUN_143bb8efd(void)

void FUN_143bb8efd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f280 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f280 = FUN_14171c317(FUN_14649de18,uVar1,L"EGeometryScriptRemeshEdgeConstraintType");
  }
  return;
}



// FUNCTION 143bb8f34 FUN_143bb8f34 body=55 status=ok
// SIG undefined FUN_143bb8f34(void)

void FUN_143bb8f34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f298 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f298 = FUN_14171c317(FUN_14649de49,uVar1,L"EGeometryScriptRemeshSmoothingType");
  }
  return;
}



// FUNCTION 143bb8f6b FUN_143bb8f6b body=55 status=ok
// SIG undefined FUN_143bb8f6b(void)

void FUN_143bb8f6b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f348 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f348 = FUN_14171c317(FUN_14649e20a,uVar1,L"EGeometryScriptFillHolesMethod");
  }
  return;
}



// FUNCTION 143bb8fa2 FUN_143bb8fa2 body=55 status=ok
// SIG undefined FUN_143bb8fa2(void)

void FUN_143bb8fa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f390 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f390 = FUN_14171c317(FUN_14649e366,uVar1,L"EGeometryScriptRemoveHiddenTrianglesMethod")
    ;
  }
  return;
}



// FUNCTION 143bb8fd9 FUN_143bb8fd9 body=55 status=ok
// SIG undefined FUN_143bb8fd9(void)

void FUN_143bb8fd9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f3c0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f3c0 = FUN_14171c317(FUN_14649e42c,uVar1,L"EGeometryScriptRepairMeshMode");
  }
  return;
}



// FUNCTION 143bb9010 FUN_143bb9010 body=55 status=ok
// SIG undefined FUN_143bb9010(void)

void FUN_143bb9010(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f470 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f470 = FUN_14171c317(FUN_14649e7d8,uVar1,L"EGeometryScriptSamplingWeightMode");
  }
  return;
}



// FUNCTION 143bb9047 FUN_143bb9047 body=55 status=ok
// SIG undefined FUN_143bb9047(void)

void FUN_143bb9047(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f488 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f488 = FUN_14171c317(FUN_14649e807,uVar1,L"EGeometryScriptSamplingDistributionMode");
  }
  return;
}



// FUNCTION 143bb907e FUN_143bb907e body=928 status=ok
// SIG undefined FUN_143bb907e(void)

longlong FUN_143bb907e(longlong param_1,float *param_2,float *param_3,longlong *param_4,
                      longlong *param_5,longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  wchar_t *local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined4 local_16c;
  double local_168;
  uint local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_1 == 0) {
    local_188 = L"ComputeNonUniformPointSampling";
    local_180 = 4.2039e-44;
    FUN_1446e940c(local_c4,&local_188);
    local_188 = L"UGeometryScriptLibrary_MeshSamplingFunctions";
    local_180 = 6.16571e-44;
    FUN_1446e940c(local_c8,&local_188);
    local_188 = L"ComputeNonUniformPointSampling: TargetMesh is Null";
    local_180 = 7.00649e-44;
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_188);
    FUN_143ba90d7(param_7,2,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  else {
    local_16c = 50000000;
    local_168 = 0.0;
    local_160 = 0;
    local_158 = 0x4000000000000000;
    local_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 1;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_188 = (wchar_t *)(double)*param_2;
    local_180 = param_2[1];
    local_178 = *(undefined8 *)(param_2 + 4);
    local_170 = param_2[2];
    if (*param_2 < *param_3) {
      local_168 = (double)*param_3;
      local_160 = (uint)*(byte *)(param_3 + 1);
      dVar2 = *(double *)(param_3 + 2);
      uVar18 = SUB84(dVar2,0);
      uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (10.0 <= dVar2) {
        uVar18 = 0;
        uVar19 = 0x40240000;
      }
      if ((double)CONCAT44(uVar19,uVar18) <= 1.0) {
        uVar18 = 0;
        uVar19 = 0x3ff00000;
      }
      local_158 = CONCAT44(uVar19,uVar18);
    }
    local_190 = param_1;
    FUN_146c815bc(&local_188,*(undefined8 *)(param_1 + 0x98),0);
    FUN_14856da48(param_6,1,0);
    lVar16 = (longlong)(int)uStack_100;
    if (0 < lVar16) {
      plVar5 = *(longlong **)(param_6 + 8);
      lVar17 = 0x30;
      lVar15 = 0;
      do {
        puVar1 = (undefined8 *)(local_108 + -0x18 + lVar17);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar1 = (undefined8 *)(local_108 + -8 + lVar17);
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        puVar1 = (undefined8 *)(local_108 + -0x30 + lVar17);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar3 = *(undefined8 *)(local_108 + -0x20 + lVar17);
        iVar4 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
          FUN_144a2c682(param_4,iVar4);
        }
        lVar13 = local_f8;
        lVar6 = *param_4;
        lVar14 = (longlong)iVar4 * 0x60;
        *(undefined8 *)(lVar6 + lVar14) = uVar7;
        ((undefined8 *)(lVar6 + lVar14))[1] = uVar8;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar14);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar14);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar14);
        *puVar1 = uVar3;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar14);
        *puVar1 = 0x3ff0000000000000;
        puVar1[1] = 0x3ff0000000000000;
        puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar14);
        *puVar1 = 0x3ff0000000000000;
        puVar1[1] = 0;
        iVar4 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
          FUN_144941252(param_5,iVar4);
        }
        lVar6 = local_e8;
        *(undefined8 *)(*param_5 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar13 + lVar15 * 8);
        iVar4 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
          FUN_1446f48e2(plVar5,iVar4);
        }
        *(undefined4 *)(*plVar5 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar6 + lVar15 * 4);
        lVar15 = lVar15 + 1;
        lVar17 = lVar17 + 0x38;
      } while (lVar16 != lVar15);
    }
    FUN_1485b4f74(&local_188);
    param_1 = local_190;
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb9420 FUN_143bb9420 body=778 status=ok
// SIG undefined FUN_143bb9420(void)

longlong FUN_143bb9420(longlong param_1,float *param_2,longlong *param_3,longlong param_4,
                      undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_1 == 0) {
    local_188 = L"ComputePointSampling";
    local_180 = 2.8026e-44;
    FUN_1446e940c(local_c4,&local_188);
    local_188 = L"UGeometryScriptLibrary_MeshSamplingFunctions";
    local_180 = 6.16571e-44;
    FUN_1446e940c(local_c8,&local_188);
    local_188 = L"ComputePointSampling: TargetMesh is Null";
    local_180 = 5.60519e-44;
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_188);
    FUN_143ba90d7(param_5,2,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  else {
    local_16c = 50000000;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0x4000000000000000;
    local_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 1;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_188 = (wchar_t *)(double)*param_2;
    local_180 = param_2[1];
    local_178 = *(undefined8 *)(param_2 + 4);
    local_170 = param_2[2];
    FUN_146c815bc(&local_188,*(undefined8 *)(param_1 + 0x98),0);
    FUN_14856da48(param_4,1,0);
    lVar16 = (longlong)(int)uStack_100;
    if (0 < lVar16) {
      plVar4 = *(longlong **)(param_4 + 8);
      lVar14 = 0x30;
      lVar15 = 0;
      do {
        puVar1 = (undefined8 *)(local_108 + -0x18 + lVar14);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        puVar1 = (undefined8 *)(local_108 + -8 + lVar14);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(local_108 + -0x30 + lVar14);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar2 = *(undefined8 *)(local_108 + -0x20 + lVar14);
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_144a2c682(param_3,iVar3);
        }
        lVar12 = local_e8;
        lVar5 = *param_3;
        lVar13 = (longlong)iVar3 * 0x60;
        *(undefined8 *)(lVar5 + lVar13) = uVar6;
        ((undefined8 *)(lVar5 + lVar13))[1] = uVar7;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar13);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar13);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar13);
        *puVar1 = uVar2;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar13);
        *puVar1 = 0x3ff0000000000000;
        puVar1[1] = 0x3ff0000000000000;
        puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar13);
        *puVar1 = 0x3ff0000000000000;
        puVar1[1] = 0;
        iVar3 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(plVar4,iVar3);
        }
        *(undefined4 *)(*plVar4 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar12 + lVar15 * 4);
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 0x38;
      } while (lVar16 != lVar15);
    }
    FUN_1485b4f74(&local_188);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb972c FUN_143bb972c body=1704 status=ok
// SIG undefined FUN_143bb972c(void)

void FUN_143bb972c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  double *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [3];
  double dStack_120;
  double dStack_118;
  double local_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar9 = *param_2;
    lVar8 = 0;
    do {
      uVar1 = uStack_90;
      lVar5 = *(longlong *)(lVar9 + lVar8);
      if (lVar5 != 0) {
        lVar10 = (longlong)(int)uStack_90;
        uVar4 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
        if (uStack_90._4_4_ < uVar4) {
          FUN_1447d05f2(&local_98,uVar1 & 0xffffffff);
          lVar5 = *(longlong *)(lVar9 + lVar8);
        }
        local_98[lVar10] = lVar5;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar8);
    if ((int)uStack_90 != 0) {
      lVar2 = FUN_14001cc68(0x138,0x10);
      FUN_14851f5ee(lVar2);
      *(undefined4 *)(lVar2 + 0x2c) = 0;
      FUN_14851fa34(lVar2,1);
      if (*(char *)(lVar2 + 0xf8) != '\0') {
        if (*(int *)(lVar2 + 0x2c) != 0) {
          *(undefined4 *)(lVar2 + 0x2c) = 2;
        }
        FUN_14851fa34(lVar2,1);
        *(undefined1 *)(lVar2 + 0xf8) = 0;
      }
      *(undefined4 *)(lVar2 + 0x30) = 0;
      FUN_14851fa34(lVar2,2);
      if (*(char *)(lVar2 + 0xf9) != '\0') {
        if (*(int *)(lVar2 + 0x30) != 0) {
          *(undefined4 *)(lVar2 + 0x30) = 2;
        }
        FUN_14851fa34(lVar2,2);
        *(undefined1 *)(lVar2 + 0xf9) = 0;
      }
      *(undefined4 *)(lVar2 + 0x34) = 0;
      FUN_14851fa34(lVar2,8);
      if (*(char *)(lVar2 + 0xfa) != '\0') {
        if (*(int *)(lVar2 + 0x34) != 0) {
          *(undefined4 *)(lVar2 + 0x34) = 2;
        }
        FUN_14851fa34(lVar2,8);
        *(undefined1 *)(lVar2 + 0xfa) = 0;
      }
      *(undefined4 *)(lVar2 + 0x38) = 0;
      FUN_14851fa34(lVar2,4);
      if (*(char *)(lVar2 + 0xfb) != '\0') {
        if (*(int *)(lVar2 + 0x38) != 0) {
          *(undefined4 *)(lVar2 + 0x38) = 2;
        }
        FUN_14851fa34(lVar2,4);
        *(undefined1 *)(lVar2 + 0xfb) = 0;
      }
      *(undefined4 *)(lVar2 + 0x3c) = 0;
      FUN_14851fa34(lVar2,0x80);
      if (*(char *)(lVar2 + 0xfc) != '\0') {
        if (*(int *)(lVar2 + 0x3c) != 0) {
          *(undefined4 *)(lVar2 + 0x3c) = 2;
        }
        FUN_14851fa34(lVar2,0x80);
        *(undefined1 *)(lVar2 + 0xfc) = 0;
      }
      if (*(int *)(lVar2 + 0x40) == 0) {
        *(undefined4 *)(lVar2 + 0x40) = 2;
      }
      if (*(char *)(lVar2 + 0xfd) != '\0') {
        *(undefined4 *)(lVar2 + 0x40) = 2;
        FUN_14851fa34(lVar2,0x20);
        *(undefined1 *)(lVar2 + 0xfd) = 0;
      }
      *(undefined4 *)(lVar2 + 0x44) = 0;
      FUN_14851fa34(lVar2,0x10);
      if (*(char *)(lVar2 + 0xfe) != '\0') {
        if (*(int *)(lVar2 + 0x44) != 0) {
          *(undefined4 *)(lVar2 + 0x44) = 2;
        }
        FUN_14851fa34(lVar2,0x10);
        *(undefined1 *)(lVar2 + 0xfe) = 0;
      }
      *(undefined4 *)(lVar2 + 0x48) = 0;
      FUN_14851fa34(lVar2,0x100);
      if (*(char *)(lVar2 + 0xff) != '\0') {
        if (*(int *)(lVar2 + 0x48) != 0) {
          *(undefined4 *)(lVar2 + 0x48) = 2;
        }
        FUN_14851fa34(lVar2,0x100);
        *(undefined1 *)(lVar2 + 0xff) = 0;
      }
      *(undefined4 *)(lVar2 + 0x4c) = 0;
      FUN_14851fa34(lVar2,0x200);
      if (*(char *)(lVar2 + 0x100) != '\0') {
        if (*(int *)(lVar2 + 0x4c) != 0) {
          *(undefined4 *)(lVar2 + 0x4c) = 2;
        }
        FUN_14851fa34(lVar2,0x200);
        *(undefined1 *)(lVar2 + 0x100) = 0;
      }
      if (*(int *)(lVar2 + 0x50) == 0) {
        *(undefined4 *)(lVar2 + 0x50) = 2;
      }
      local_150 = param_1;
      if (*(char *)(lVar2 + 0x101) != '\0') {
        *(undefined4 *)(lVar2 + 0x50) = 2;
        FUN_14851fa34(lVar2,0x40);
        *(undefined1 *)(lVar2 + 0x101) = 0;
      }
      uVar3 = FUN_1447210f0(*local_98);
      FUN_14851f6a4(lVar2,uVar3,&local_98);
      local_a8 = 0;
      uStack_a0 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar9 = (longlong)(int)param_3[1] * 0x48;
        lVar8 = *param_3 + 0x28;
        do {
          local_138[2] = (longlong *)DAT_14c8464f0;
          local_138[0] = DAT_14c8464e0;
          local_138[1] = (longlong *)DAT_14c8464e8;
          dStack_120 = 0.0;
          dStack_118 = 0.0;
          local_110 = 0.0;
          local_108 = 1.0;
          uStack_100 = *(undefined8 *)(lVar8 + 0x18);
          local_f8 = *(undefined8 *)(lVar8 + -0x20);
          uStack_f0 = (ulonglong)*(uint *)(lVar8 + -0x28);
          if ((int)*(uint *)(lVar8 + -0x28) < 2) {
            uStack_f0 = 1;
          }
          uStack_f0 = uStack_f0 << 0x20 | uStack_f0;
          FUN_1482ae234(local_138,0,lVar8);
          dVar11 = dStack_118 + dStack_118;
          dVar12 = local_110 + local_110;
          local_b8 = dVar11 * dStack_120 + local_108 * dVar12;
          local_b0 = dStack_120 * dVar12 - dVar11 * local_108;
          local_c0 = 1.0 - (dVar12 * local_110 + dStack_118 * dVar11);
          local_c8 = DAT_14c8463c8;
          local_d8 = (undefined1 *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
          uStack_d0 = (undefined8 *)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
          FUN_1482ae2be(local_138,2,&local_d8,&local_c0);
          local_138[0] = *(longlong **)(lVar8 + -0x18);
          local_138[1] = (longlong *)*(undefined8 *)(lVar8 + -0x10);
          local_138[2] = *(longlong **)(lVar8 + -8);
          lVar5 = (longlong)(int)uStack_a0;
          uVar4 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
          if (uStack_a0._4_4_ < uVar4) {
            FUN_148549d9c(&local_a8);
          }
          pplVar6 = local_138;
          puVar7 = (undefined8 *)(lVar5 * 0x50 + local_a8);
          for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar7 = *pplVar6;
            pplVar6 = pplVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          lVar8 = lVar8 + 0x48;
          lVar9 = lVar9 + -0x48;
        } while (lVar9 != 0);
      }
      FUN_14851f906(lVar2,&local_a8);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_143b9ca30(lVar2);
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0.0;
      uStack_100 = 0;
      dStack_118 = 0.0;
      local_110 = 0.0;
      dStack_120 = 0.0;
      local_138[0] = (longlong *)0x0;
      local_138[1] = (longlong *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_138[2] = &local_a8;
      FUN_143b9deee(lVar2);
      uVar3 = local_150;
      FUN_140ee84a4(local_150,uStack_a0 & 0xffffffff,1);
      uStack_d0 = &local_148;
      local_148 = uVar3;
      local_158 = &local_c0;
      local_c0 = 0.0;
      local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
      local_d8 = &LAB_143bddaaa;
      local_160 = 0;
      local_140 = &local_a8;
      FUN_1401f8d10(L"ParallelFor Task",uStack_a0 & 0xffffffff,1);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_1485831be(lVar2);
        FUN_1400020a8(lVar2);
      }
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb9dd6 FUN_143bb9dd6 body=1070 status=ok
// SIG undefined FUN_143bb9dd6(void)

longlong FUN_143bb9dd6(longlong param_1,float *param_2,float *param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6,longlong param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong local_190;
  wchar_t *local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined4 local_16c;
  double local_168;
  uint local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_1 == 0) {
    local_188 = L"ComputeVertexWeightedPointSampling_InvalidInput";
    local_180 = 6.5861e-44;
    FUN_1446e940c(local_c4,&local_188);
    local_188 = L"UGeometryScriptLibrary_MeshSamplingFunctions";
    local_180 = 6.16571e-44;
    FUN_1446e940c(local_c8,&local_188);
    local_188 = L"ComputeVertexWeightedPointSampling: TargetMesh is Null";
    local_180 = 7.56701e-44;
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_188);
    FUN_143ba90d7(param_8,2,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  else {
    local_16c = 50000000;
    local_168 = 0.0;
    local_160 = 0;
    local_158 = 0x4000000000000000;
    local_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 1;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_188 = (wchar_t *)(double)*param_2;
    local_180 = param_2[1];
    local_178 = *(undefined8 *)(param_2 + 4);
    local_170 = param_2[2];
    local_198 = param_4;
    local_190 = param_1;
    if (*param_3 <= *param_2) {
      lVar19 = *(longlong *)(param_1 + 0x98);
    }
    else {
      local_168 = (double)*param_3;
      local_160 = (uint)*(byte *)(param_3 + 1);
      dVar4 = *(double *)(param_3 + 2);
      uVar20 = SUB84(dVar4,0);
      uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (10.0 <= dVar4) {
        uVar20 = 0;
        uVar21 = 0x40240000;
      }
      if ((double)CONCAT44(uVar21,uVar20) <= 1.0) {
        uVar20 = 0;
        uVar21 = 0x3ff00000;
      }
      local_158 = CONCAT44(uVar21,uVar20);
      lVar19 = *(longlong *)(param_1 + 0x98);
      if ((*param_4 != 0) &&
         (*(int *)(*param_4 + 8) == *(int *)(lVar19 + 0x20) * 0x200 + *(int *)(lVar19 + 0x24))) {
        FUN_1408fdf38(&local_148);
        local_150 = 1;
        local_138 = (uint)*(byte *)(param_3 + 4);
        local_134 = CONCAT11(local_134._1_1_,*(undefined1 *)((longlong)param_3 + 0x11));
      }
    }
    FUN_146c815bc(&local_188,lVar19,0);
    FUN_14856da48(param_7,1,0);
    lVar19 = (longlong)(int)uStack_100;
    if (0 < lVar19) {
      plVar7 = *(longlong **)(param_7 + 8);
      lVar17 = 0x30;
      lVar18 = 0;
      do {
        puVar3 = (undefined8 *)(local_108 + -0x18 + lVar17);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(local_108 + -8 + lVar17);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar3 = (undefined8 *)(local_108 + -0x30 + lVar17);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar5 = *(undefined8 *)(local_108 + -0x20 + lVar17);
        iVar6 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
          FUN_144a2c682(param_5,iVar6);
        }
        lVar15 = local_f8;
        lVar8 = *param_5;
        lVar16 = (longlong)iVar6 * 0x60;
        *(undefined8 *)(lVar8 + lVar16) = uVar9;
        ((undefined8 *)(lVar8 + lVar16))[1] = uVar10;
        puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar16);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar16);
        *puVar3 = uVar13;
        puVar3[1] = uVar14;
        puVar3 = (undefined8 *)(lVar8 + 0x30 + lVar16);
        *puVar3 = uVar5;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar8 + 0x40 + lVar16);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0x3ff0000000000000;
        puVar3 = (undefined8 *)(lVar8 + 0x50 + lVar16);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0;
        iVar6 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar6 + 1U) {
          FUN_144941252(param_6,iVar6);
        }
        lVar8 = local_e8;
        *(undefined8 *)(*param_6 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar15 + lVar18 * 8);
        iVar6 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
          FUN_1446f48e2(plVar7,iVar6);
        }
        *(undefined4 *)(*plVar7 + (longlong)iVar6 * 4) = *(undefined4 *)(lVar8 + lVar18 * 4);
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x38;
      } while (lVar19 != lVar18);
    }
    FUN_1485b4f74(&local_188);
    param_1 = local_190;
    param_4 = local_198;
  }
  plVar7 = (longlong *)param_4[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bba205 FUN_143bba205 body=55 status=ok
// SIG undefined FUN_143bba205(void)

void FUN_143bba205(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f4f8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f4f8 = FUN_14171c317(FUN_14649ea2f,uVar1,L"EGeometryScriptTopologyConnectionType");
  }
  return;
}



// FUNCTION 143bba23c FUN_143bba23c body=157 status=ok
// SIG undefined FUN_143bba23c(void)

void FUN_143bba23c(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*param_3;
  *puVar4 = *puVar3;
  FUN_147371fc4(puVar4 + 1,puVar3 + 1);
  FUN_143baa3de(param_3,param_2,param_4);
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
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
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000143bba2ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143bba2da FUN_143bba2da body=913 status=ok
// SIG undefined FUN_143bba2da(void)

longlong FUN_143bba2da(longlong param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) goto switchD_143bba32b_default;
  cVar13 = *param_2;
  switch(cVar13) {
  case '\x01':
    break;
  case '\x02':
    cVar13 = '\x03';
    break;
  case '\x03':
    cVar13 = '\0';
    break;
  case '\x04':
    local_58 = 0;
    uStack_50 = (longlong *)0x0;
    lVar4 = *(longlong *)(param_1 + 0x98);
    local_98 = param_4;
    if ((*(longlong *)(lVar4 + 0x208) != 0) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x48), lVar5 != 0)) {
      uVar14 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
      uVar12 = 0;
      if ((uVar14 != 0) &&
         (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
        uVar6 = 1;
        uVar8 = 1;
        if (1 < (int)uVar14) {
          uVar6 = uVar14;
        }
        do {
          uVar12 = uVar6;
          if (uVar6 == uVar8) break;
          uVar9 = uVar8 >> 9;
          uVar10 = uVar8 & 0x1ff;
          uVar12 = uVar8;
          uVar8 = uVar8 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar9] +
                                             (ulonglong)uVar10 * 2) - 1U));
      }
      if (uVar12 != uVar14) {
        plVar3 = *(longlong **)(param_2 + 8);
        local_90 = param_1;
        do {
          plVar1 = uStack_50;
          lVar7 = (longlong)(int)plVar3[1];
          if (lVar7 != 0) {
            lVar11 = 0;
            do {
              if (*(int *)(*plVar3 + lVar11) ==
                  *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar12 >> 9) * 8)
                          + (ulonglong)(uVar12 & 0x1ff) * 4)) {
                lVar7 = (longlong)(int)uStack_50;
                uVar6 = (int)uStack_50 + 1;
                uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar6);
                if (uStack_50._4_4_ < uVar6) {
                  FUN_1446f48e2(&local_58,(ulonglong)plVar1 & 0xffffffff);
                  param_1 = local_90;
                }
                *(uint *)(local_58 + lVar7 * 4) = uVar12;
                break;
              }
              lVar11 = lVar11 + 4;
            } while (lVar7 * 4 != lVar11);
          }
          uVar6 = uVar12 + 1;
          if ((int)(uVar12 + 1) < (int)uVar14) {
            uVar6 = uVar14;
          }
          do {
            uVar8 = uVar6;
            if (uVar6 - 1 == uVar12) break;
            uVar12 = uVar12 + 1;
            uVar8 = uVar12;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar4 + 0x148) +
                                                 (ulonglong)(uVar12 >> 9) * 8) +
                                               (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
          uVar12 = uVar8;
        } while (uVar12 != uVar14);
      }
    }
    if ((char)param_3 == '\x01') {
      FUN_143bb66e6(param_1,&local_58,1,local_98);
    }
    else {
      FUN_148568536(&local_78);
      FUN_143bb66e6(param_1,&local_58,1,&local_78);
      local_88 = local_78;
      local_80 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_a8 = 1;
      FUN_143bbae20(param_1,&local_88,local_98,param_3);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    goto switchD_143bba32b_default;
  case '\x05':
    cVar13 = '\x02';
    break;
  default:
    goto switchD_143bba32b_default;
  }
  if (cVar13 == (char)param_3) {
    FUN_143bb66e6(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
  }
  else {
    FUN_148568536(&local_58);
    FUN_143bb66e6(param_1,*(undefined8 *)(param_2 + 8),cVar13,&local_58);
    local_68 = local_58;
    local_60 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
      UNLOCK();
    }
    local_a8 = 1;
    FUN_143bbae20(param_1,&local_68,param_4,param_3);
    plVar3 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_50)(uStack_50);
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
switchD_143bba32b_default:
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bba66c FUN_143bba66c body=1970 status=ok
// SIG undefined FUN_143bba66c(void)

longlong FUN_143bba66c(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint *local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == 0) goto LAB_143bba699;
  local_a0 = &DAT_100000004;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  switch(param_3) {
  case 0:
    local_c8 = (uint *)(param_2 + 2);
    iVar1 = (int)param_2[5];
    if (iVar1 == 0) {
      uVar15 = 1;
      uVar9 = 0;
      iVar14 = 0;
      iVar11 = 0;
    }
    else {
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = local_c8;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        iVar14 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar14 = iVar1 + -1;
        }
        uVar9 = 0;
        uVar6 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar6 = uVar9;
        }
        iVar14 = 0;
        do {
          if (uVar6 == uVar9) goto LAB_143bbaa41;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar9 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar6 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar5 = 0xffffffff;
      do {
        local_b0 = (code *)(ulonglong)*(uint *)(*param_2 + (longlong)iVar11 * 0xc);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        uVar5 = ~(uint)uVar15 & uVar5;
        puVar4 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar4 = local_c8;
        }
        iVar2 = (int)param_2[5];
        iVar11 = (int)uVar9;
        lVar13 = (longlong)iVar11;
        uVar10 = puVar4[lVar13] & uVar5;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar4[lVar13 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar9 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar5 = 0xffffffff;
                goto LAB_143bbacba;
              }
              iVar14 = iVar14 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar13 != lVar12);
            uVar5 = 0xffffffff;
            iVar11 = iVar8;
          }
          uVar9 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143bbacba:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar6 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_143bbaa41:
    local_a0._0_4_ = 1;
    goto LAB_143bbaac1;
  case 1:
    local_c8 = (uint *)(param_2 + 2);
    iVar1 = (int)param_2[5];
    if (iVar1 == 0) {
      uVar15 = 1;
      iVar14 = 0;
      uVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = local_c8;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        iVar14 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar14 = iVar1 + -1;
        }
        uVar9 = 0;
        uVar6 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar6 = uVar9;
        }
        iVar14 = 0;
        do {
          if (uVar6 == uVar9) goto LAB_143bbaab9;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar5 == 0);
      }
      else {
        iVar14 = 0;
        uVar9 = 0;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar6 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar5 = 0xffffffff;
      do {
        local_b0 = (code *)(ulonglong)*(uint *)(*param_2 + (longlong)iVar11 * 0xc);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        uVar5 = ~(uint)uVar15 & uVar5;
        puVar4 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar4 = local_c8;
        }
        iVar2 = (int)param_2[5];
        iVar11 = (int)uVar9;
        lVar13 = (longlong)iVar11;
        uVar10 = puVar4[lVar13] & uVar5;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar4[lVar13 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar9 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar5 = 0xffffffff;
                goto LAB_143bbadad;
              }
              iVar14 = iVar14 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar13 != lVar12);
            uVar5 = 0xffffffff;
            iVar11 = iVar8;
          }
          uVar9 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143bbadad:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar6 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_143bbaab9:
    local_a0._0_4_ = 4;
LAB_143bbaac1:
    uVar3 = 1;
LAB_143bbaac6:
    local_a0 = (undefined1 *)CONCAT44(uVar3,(undefined4)local_a0);
    break;
  case 2:
    local_c8 = (uint *)(param_2 + 2);
    iVar1 = (int)param_2[5];
    if (iVar1 == 0) {
      uVar15 = 1;
      uVar9 = 0;
      iVar14 = 0;
      iVar11 = 0;
    }
    else {
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = local_c8;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        iVar14 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar14 = iVar1 + -1;
        }
        uVar9 = 0;
        uVar6 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar6 = uVar9;
        }
        iVar14 = 0;
        do {
          if (uVar6 == uVar9) goto LAB_143bba849;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar9 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar6 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar5 = 0xffffffff;
      do {
        local_b0 = (code *)((ulonglong)*(uint *)(*param_2 + (longlong)iVar11 * 0xc) << 0x20 |
                           0xffffffff);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        uVar5 = ~(uint)uVar15 & uVar5;
        puVar4 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar4 = local_c8;
        }
        iVar2 = (int)param_2[5];
        iVar11 = (int)uVar9;
        lVar13 = (longlong)iVar11;
        uVar10 = puVar4[lVar13] & uVar5;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar4[lVar13 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar9 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar5 = 0xffffffff;
                goto LAB_143bbabc7;
              }
              iVar14 = iVar14 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar13 != lVar12);
            uVar5 = 0xffffffff;
            iVar11 = iVar8;
          }
          uVar9 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143bbabc7:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar6 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_143bba849:
    local_a0._0_4_ = 4;
    uVar3 = 2;
    goto LAB_143bbaac6;
  case 3:
    local_a0 = &DAT_100000002;
    local_c8 = *(uint **)(param_1 + 0x98);
    local_c0 = (uint *)(param_2 + 2);
    iVar1 = (int)param_2[5];
    if (iVar1 == 0) {
      uVar15 = 1;
      uVar9 = 0;
      iVar14 = 0;
      iVar11 = 0;
    }
    else {
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = local_c0;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        iVar14 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar14 = iVar1 + -1;
        }
        uVar9 = 0;
        uVar6 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar6 = uVar9;
        }
        iVar14 = 0;
        do {
          if (uVar6 == uVar9) goto switchD_143bba726_default;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar9 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar6 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar5 = 0xffffffff;
      do {
        local_b8 = &local_a0;
        local_a8 = &local_b8;
        local_b0 = FUN_143bdf380;
        FUN_14838980a(local_c8,*(undefined4 *)(*param_2 + (longlong)iVar11 * 0xc),&local_b0);
        uVar5 = ~(uint)uVar15 & uVar5;
        puVar4 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar4 = local_c0;
        }
        iVar2 = (int)param_2[5];
        iVar11 = (int)uVar9;
        lVar13 = (longlong)iVar11;
        uVar10 = puVar4[lVar13] & uVar5;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar4[lVar13 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar9 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar5 = 0xffffffff;
                goto LAB_143bba98a;
              }
              iVar14 = iVar14 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar13 != lVar12);
            uVar5 = 0xffffffff;
            iVar11 = iVar8;
          }
          uVar9 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143bba98a:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar6 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar11 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
  }
switchD_143bba726_default:
  param_4 = (undefined8 *)*param_4;
  *param_4 = local_a0;
  FUN_1484d24e8(param_4 + 1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_98);
LAB_143bba699:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bbae20 FUN_143bbae20 body=5544 status=ok
// SIG undefined FUN_143bbae20(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_143bbae20(longlong param_1,longlong *param_2,longlong *param_3,byte param_4,
                      byte param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  code *******pppppppcVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  code ******ppppppcVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *piVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  undefined1 local_1ac [4];
  code ******local_1a8;
  code *******local_1a0;
  char local_191;
  code *******local_190;
  code *******local_188;
  longlong local_180;
  code *******local_178;
  code *******local_170;
  code *******local_168;
  ulonglong auStack_160 [3];
  longlong local_148;
  undefined4 local_140;
  uint uStack_13c;
  undefined4 uStack_138;
  int local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  code *******local_108;
  code *******pppppppcStack_100;
  code *******local_f8 [2];
  code *******local_e8;
  int local_e0;
  uint local_dc;
  int iStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  code *******local_b8;
  code *******pppppppcStack_b0;
  longlong local_a8 [2];
  uint *local_98;
  uint local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1c8 = param_3;
  if (param_1 == 0) goto LAB_143bbb700;
  bVar5 = FUN_143ba9b82(param_2);
  if (bVar5 == param_4) {
    puVar4 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)*local_1c8;
    *puVar2 = *puVar4;
    FUN_147371fc4(puVar2 + 1,puVar4 + 1);
    goto LAB_143bbb700;
  }
  local_1d8 = param_2;
  if (param_4 == 3) {
    local_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    auStack_160[0] = 0;
    auStack_160[1] = 0;
    local_134 = 0x80;
    uStack_130 = 0xffffffff;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_168 = (code *******)&DAT_100000002;
    if (param_5 == 0) {
      if (bVar5 - 1 < 2) {
        pppppppcVar8 = *(code ********)(param_1 + 0x98);
        local_108 = (code *******)&local_b8;
        local_98 = (uint *)0x0;
        local_90 = 0;
        local_b8 = (code *******)0x0;
        pppppppcStack_b0 = (code *******)0x0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_188 = (code *******)&local_108;
        local_190 = (code *******)FUN_143bded94;
        FUN_143bac7da(param_2,pppppppcVar8,&local_190,0);
        local_178 = (code *******)FUN_143bdedde;
      }
      else {
        if (bVar5 == 3) goto LAB_143bbc237;
        pppppppcVar8 = *(code ********)(param_1 + 0x98);
        local_108 = (code *******)&local_b8;
        local_98 = (uint *)0x0;
        local_90 = 0;
        local_b8 = (code *******)0x0;
        pppppppcStack_b0 = (code *******)0x0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_188 = (code *******)&local_108;
        local_190 = (code *******)FUN_143bdebfc;
        FUN_143bad420(param_2,pppppppcVar8,&local_190,0);
        local_178 = (code *******)FUN_143bdec46;
      }
      local_f8[0] = (code *******)&local_168;
      local_108 = (code *******)&local_b8;
      local_170 = (code *******)&local_108;
      pppppppcStack_100 = pppppppcVar8;
      FUN_143bae282(param_2,pppppppcVar8,&local_178,0);
      goto LAB_143bbc1af;
    }
    local_108 = *(code ********)(param_1 + 0x98);
    pppppppcStack_b0 = (code *******)&local_108;
    pppppppcStack_100 = (code *******)&local_168;
    local_b8 = (code *******)FUN_143bdeb50;
    FUN_143bae282(param_2,local_108,&local_b8,0);
  }
  else {
    if (param_4 != 1) {
      local_1d0 = param_1;
      if (param_4 == 0) {
        lVar12 = *(longlong *)(param_1 + 0x98);
        local_98 = (uint *)0x0;
        local_90 = 0;
        local_b8 = (code *******)0x0;
        pppppppcStack_b0 = (code *******)0x0;
        local_8c = 0x80;
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_e8 = (code *******)0x0;
        local_e0 = 0;
        local_108 = (code *******)0x0;
        pppppppcStack_100 = (code *******)0x0;
        local_dc = 0x80;
        iStack_d8 = 0xffffffff;
        local_d4 = 0;
        local_c8 = (undefined1 *)0x0;
        local_c0 = 0;
        local_140 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        auStack_160[0] = 0;
        auStack_160[1] = 0;
        local_134 = 0x80;
        uStack_130 = 0xffffffff;
        local_12c = 0;
        local_120 = 0;
        local_118 = 0;
        local_168 = (code *******)&DAT_100000001;
        if (param_5 == 0) {
          bVar5 = FUN_143ba9b82(param_2);
          if (bVar5 - 1 < 2) {
            local_190 = (code *******)&local_b8;
            local_170 = (code *******)&local_190;
            local_188 = (code *******)&local_108;
            local_178 = (code *******)FUN_143bde918;
            iVar18 = 0;
            local_180 = lVar12;
            FUN_143bac7da(param_2,lVar12,&local_178,0);
            iVar20 = local_e0;
            uVar21 = 1;
            uVar28 = 0;
            iVar14 = 0;
            if (local_e0 != 0) {
              pppppppcVar8 = local_e8;
              if (local_e8 == (code *******)0x0) {
                pppppppcVar8 = (code *******)local_f8;
              }
              uVar30 = *(uint *)pppppppcVar8;
              if (uVar30 == 0) {
                iVar14 = local_e0 + 0x1e;
                if (-1 < local_e0 + -1) {
                  iVar14 = local_e0 + -1;
                }
                uVar28 = 0;
                uVar21 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar21 = 0;
                }
                iVar18 = 0;
                do {
                  if (uVar21 == uVar28) goto LAB_143bbb966;
                  iVar18 = iVar18 + 0x20;
                  uVar30 = *(uint *)((longlong)pppppppcVar8 + (uVar28 + 1) * 4);
                  uVar28 = uVar28 + 1;
                } while (uVar30 == 0);
              }
              else {
                iVar18 = 0;
                uVar28 = 0;
              }
              uVar21 = (ulonglong)(-uVar30 & uVar30);
              uVar24 = uVar21 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              iVar14 = (iVar18 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              if (local_e0 <= iVar14) {
                iVar14 = local_e0;
              }
            }
            if (iVar14 != local_e0) {
              uVar30 = 0xffffffff;
              do {
                ppppppcVar16 = (code ******)
                               (ulonglong)*(uint *)((longlong)local_108 + (longlong)iVar14 * 0xc);
                local_191 = '\x01';
                local_1a8 = (code ******)&local_191;
                local_1a0 = (code *******)&local_b8;
                local_190 = (code *******)&LAB_143bde9e2;
                local_188 = &local_1a8;
                FUN_146c03fd0(lVar12,ppppppcVar16,&local_190);
                if (local_191 == '\x01') {
                  local_1a8 = ppppppcVar16;
                  FUN_1483b983a(auStack_160,local_1ac,&local_1a8,0);
                }
                uVar30 = uVar30 & ~(uint)uVar21;
                pppppppcVar8 = local_e8;
                if (local_e8 == (code *******)0x0) {
                  pppppppcVar8 = (code *******)local_f8;
                }
                iVar14 = (int)uVar28;
                lVar31 = (longlong)iVar14;
                uVar17 = *(uint *)((longlong)pppppppcVar8 + lVar31 * 4) & uVar30;
                if (uVar17 == 0) {
                  iVar10 = local_e0 + 0x1e;
                  if (-1 < local_e0 + -1) {
                    iVar10 = local_e0 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                  iVar18 = iVar18 + 0x20;
                  iVar23 = iVar10;
                  if (iVar10 < iVar14) {
                    iVar23 = iVar14;
                  }
                  if (iVar14 < iVar10) {
                    lVar22 = 0;
                    do {
                      uVar17 = *(uint *)((longlong)pppppppcVar8 + (lVar31 + lVar22 + 1) * 4);
                      if (uVar17 != 0) {
                        uVar28 = (ulonglong)(iVar14 + (int)lVar22 + 1);
                        uVar30 = 0xffffffff;
                        goto LAB_143bbbde2;
                      }
                      iVar18 = iVar18 + 0x20;
                      lVar22 = lVar22 + 1;
                    } while (iVar23 - lVar31 != lVar22);
                    uVar30 = 0xffffffff;
                    iVar14 = iVar23;
                  }
                  uVar28 = (ulonglong)(iVar14 + 1);
                  iVar14 = local_e0;
                }
                else {
LAB_143bbbde2:
                  uVar21 = (ulonglong)(-uVar17 & uVar17);
                  uVar24 = uVar21 * 2 + 1;
                  lVar31 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  iVar14 = (iVar18 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                  if (local_e0 <= iVar14) {
                    iVar14 = local_e0;
                  }
                }
              } while (iVar14 != iVar20);
            }
          }
          else if (bVar5 != 0) {
            local_190 = (code *******)&local_b8;
            local_170 = (code *******)&local_190;
            local_188 = (code *******)&local_108;
            local_178 = (code *******)FUN_143bdea44;
            uVar21 = 0;
            local_180 = lVar12;
            FUN_143bae282(local_1d8,lVar12,&local_178,0);
            iVar20 = local_e0;
            uVar28 = 1;
            iVar18 = 0;
            iVar14 = 0;
            if (local_e0 != 0) {
              pppppppcVar8 = local_e8;
              if (local_e8 == (code *******)0x0) {
                pppppppcVar8 = (code *******)local_f8;
              }
              uVar30 = *(uint *)pppppppcVar8;
              if (uVar30 == 0) {
                iVar14 = local_e0 + 0x1e;
                if (-1 < local_e0 + -1) {
                  iVar14 = local_e0 + -1;
                }
                uVar21 = 0;
                uVar28 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar28 = uVar21;
                }
                iVar18 = 0;
                do {
                  if (uVar28 == uVar21) goto LAB_143bbb966;
                  iVar18 = iVar18 + 0x20;
                  uVar30 = *(uint *)((longlong)pppppppcVar8 + (uVar21 + 1) * 4);
                  uVar21 = uVar21 + 1;
                } while (uVar30 == 0);
              }
              else {
                uVar21 = 0;
              }
              uVar28 = (ulonglong)(-uVar30 & uVar30);
              uVar24 = uVar28 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              iVar14 = (iVar18 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              if (local_e0 <= iVar14) {
                iVar14 = local_e0;
              }
            }
            if (iVar14 != local_e0) {
              uVar30 = 0xffffffff;
              do {
                ppppppcVar16 = (code ******)
                               (ulonglong)*(uint *)((longlong)local_108 + (longlong)iVar14 * 0xc);
                local_191 = '\x01';
                local_1a8 = (code ******)&local_191;
                local_1a0 = (code *******)&local_b8;
                local_190 = (code *******)&LAB_143bdeaee;
                local_188 = &local_1a8;
                FUN_146bd7d34(lVar12 + 0xb8,ppppppcVar16,&local_190);
                if (local_191 == '\x01') {
                  local_1a8 = ppppppcVar16;
                  FUN_1483b983a(auStack_160,local_1ac,&local_1a8,0);
                }
                uVar30 = uVar30 & ~(uint)uVar28;
                pppppppcVar8 = local_e8;
                if (local_e8 == (code *******)0x0) {
                  pppppppcVar8 = (code *******)local_f8;
                }
                iVar14 = (int)uVar21;
                lVar31 = (longlong)iVar14;
                uVar17 = *(uint *)((longlong)pppppppcVar8 + lVar31 * 4) & uVar30;
                if (uVar17 == 0) {
                  iVar10 = local_e0 + 0x1e;
                  if (-1 < local_e0 + -1) {
                    iVar10 = local_e0 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                  iVar18 = iVar18 + 0x20;
                  iVar23 = iVar10;
                  if (iVar10 < iVar14) {
                    iVar23 = iVar14;
                  }
                  if (iVar14 < iVar10) {
                    lVar22 = 0;
                    do {
                      uVar17 = *(uint *)((longlong)pppppppcVar8 + (lVar31 + lVar22 + 1) * 4);
                      if (uVar17 != 0) {
                        uVar21 = (ulonglong)(iVar14 + (int)lVar22 + 1);
                        uVar30 = 0xffffffff;
                        goto LAB_143bbc0e5;
                      }
                      iVar18 = iVar18 + 0x20;
                      lVar22 = lVar22 + 1;
                    } while (iVar23 - lVar31 != lVar22);
                    uVar30 = 0xffffffff;
                    iVar14 = iVar23;
                  }
                  uVar21 = (ulonglong)(iVar14 + 1);
                  iVar14 = local_e0;
                }
                else {
LAB_143bbc0e5:
                  uVar28 = (ulonglong)(-uVar17 & uVar17);
                  uVar24 = uVar28 * 2 + 1;
                  lVar31 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  iVar14 = (iVar18 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                  if (local_e0 <= iVar14) {
                    iVar14 = local_e0;
                  }
                }
              } while (iVar14 != iVar20);
            }
          }
        }
        else {
          local_178 = (code *******)&local_168;
          local_188 = (code *******)&local_178;
          local_190 = (code *******)FUN_143bde8ca;
          FUN_143bad420(param_2,lVar12,&local_190,0);
        }
LAB_143bbb966:
        puVar4 = (undefined8 *)*local_1c8;
        *puVar4 = local_168;
        FUN_1484d24e8(puVar4 + 1,auStack_160);
        local_118 = 0;
        if (local_120 != 0) {
          FUN_1400020a8();
        }
        FUN_140345f8a(auStack_160);
        param_1 = local_1d0;
        local_c0 = 0;
        if (local_c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar28 = (ulonglong)pppppppcStack_100 >> 0x20;
        pppppppcStack_100 = (code *******)((ulonglong)pppppppcStack_100 & 0xffffffff00000000);
        if ((int)uVar28 != 0) {
          FUN_1447a08a2(&local_108,0);
        }
        param_2 = local_1d8;
        iStack_d8 = 0xffffffff;
        local_d4 = 0;
        local_e0 = 0;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          FUN_1446efbd8(local_f8,0);
        }
        if (local_e8 != (code *******)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (code *******)0x0) {
          FUN_1400020a8();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        uVar28 = (ulonglong)pppppppcStack_b0 >> 0x20;
        pppppppcStack_b0 = (code *******)((ulonglong)pppppppcStack_b0 & 0xffffffff00000000);
        if ((int)uVar28 != 0) {
          FUN_1447a08a2(&local_b8,0);
        }
        uStack_88 = 0xffffffff;
        local_84 = 0;
        local_90 = 0;
        if (0x80 < local_8c) {
          local_8c = 0x80;
          FUN_1446efbd8(local_a8,0);
        }
        pppppppcVar8 = local_b8;
        if (local_98 != (uint *)0x0) {
          FUN_1400020a8();
          pppppppcVar8 = local_b8;
        }
      }
      else {
        if (param_5 == 0) {
          pppppppcStack_b0 = (code *******)&local_108;
          local_e8 = (code *******)0x0;
          local_e0 = 0;
          local_108 = (code *******)0x0;
          pppppppcStack_100 = (code *******)0x0;
          local_dc = 0x80;
          iStack_d8 = -1;
          local_d4 = 0;
          local_c8 = (undefined1 *)0x0;
          local_c0 = 0;
          lVar12 = *(longlong *)(param_1 + 0x98);
          local_b8 = (code *******)&local_168;
          local_148 = 0;
          local_140 = 0;
          local_168 = (code *******)0x0;
          auStack_160[0] = 0;
          uStack_13c = 0x80;
          uStack_138 = 0xffffffff;
          local_134 = 0;
          local_128 = (undefined4 *)0x0;
          local_120 = (ulonglong)local_120._4_4_ << 0x20;
          local_188 = (code *******)&local_b8;
          local_190 = (code *******)FUN_143bdf2ae;
          local_a8[0] = lVar12;
          FUN_143bac7da(param_2,lVar12,&local_190,0);
          local_98 = (uint *)0x0;
          local_90 = 0;
          local_b8 = (code *******)0x0;
          pppppppcStack_b0 = (code *******)0x0;
          local_8c = 0x80;
          uStack_88 = 0xffffffff;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          uVar17 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
          uVar30 = 0;
          if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))
             ) {
            uVar6 = 1;
            uVar29 = 1;
            if (1 < (int)uVar17) {
              uVar29 = uVar17;
            }
            do {
              uVar9 = uVar6;
              uVar30 = uVar29;
              if (uVar29 == uVar9) break;
              uVar6 = uVar9 + 1;
              uVar30 = uVar9;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar9 >> 9] +
                                                 (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
          }
          local_1b8 = local_a8;
          if (uVar30 != uVar17) {
LAB_143bbb112:
            uVar6 = FUN_146bc96d4(lVar12,uVar30);
            local_178 = (code *******)CONCAT44(local_178._4_4_,uVar6);
            if ((int)pppppppcStack_100 != local_d4) {
              puVar11 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar11 = local_d0;
              }
              for (iVar14 = *(int *)(puVar11 + (ulonglong)(local_c0 - 1U & uVar6) * 4); iVar14 != -1
                  ; iVar14 = *(int *)((longlong)local_108 + (longlong)iVar14 * 0xc + 4)) {
                if (*(uint *)((longlong)local_108 + (longlong)iVar14 * 0xc) == uVar6) {
                  if ((int)auStack_160[0] == local_134) goto LAB_143bbb1d4;
                  puVar7 = local_128;
                  if (local_128 == (undefined4 *)0x0) {
                    puVar7 = &uStack_130;
                  }
                  iVar14 = puVar7[(int)local_120 - 1U & uVar30];
                  if (iVar14 == -1) goto LAB_143bbb1d4;
                  goto LAB_143bbb1bb;
                }
              }
            }
            goto LAB_143bbb1e5;
          }
          goto LAB_143bbb548;
        }
        local_148 = 0;
        local_140 = 0;
        local_168 = (code *******)0x0;
        auStack_160[0] = 0;
        uStack_13c = 0x80;
        uStack_138 = 0xffffffff;
        local_134 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = (ulonglong)local_120._4_4_ << 0x20;
        pppppppcStack_100 = *(code ********)(param_1 + 0x98);
        pppppppcStack_b0 = (code *******)&local_108;
        local_b8 = (code *******)FUN_143bdf256;
        local_108 = (code *******)&local_168;
        FUN_143bac7da(param_2,pppppppcStack_100,&local_b8,0);
        FUN_143bba66c(param_1,&local_168,2,local_1c8);
        local_120 = local_120 & 0xffffffff00000000;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        uVar28 = auStack_160[0] >> 0x20;
        auStack_160[0] = auStack_160[0] & 0xffffffff00000000;
        if ((int)uVar28 != 0) {
          FUN_1447a08a2(&local_168,0);
        }
        param_2 = local_1d8;
        uStack_138 = 0xffffffff;
        local_134 = 0;
        local_140 = 0;
        if (0x80 < uStack_13c) {
          uStack_13c = 0x80;
          FUN_1446efbd8(auStack_160 + 1,0);
        }
        pppppppcVar8 = local_168;
        if (local_148 != 0) {
          FUN_1400020a8();
          pppppppcVar8 = local_168;
        }
      }
      goto LAB_143bbb6f7;
    }
    local_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    auStack_160[0] = 0;
    auStack_160[1] = 0;
    local_134 = 0x80;
    uStack_130 = 0xffffffff;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_168 = (code *******)&DAT_100000004;
    if ((bVar5 != 2 & (param_5 ^ 1)) == 0) {
      local_108 = (code *******)&local_168;
      pppppppcStack_b0 = (code *******)&local_108;
      local_b8 = (code *******)FUN_143bdef34;
      FUN_143bac7da(param_2,*(undefined8 *)(param_1 + 0x98),&local_b8,0);
      goto LAB_143bbc237;
    }
    if (bVar5 == 3) {
      pppppppcVar8 = *(code ********)(param_1 + 0x98);
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_b8 = (code *******)0x0;
      pppppppcStack_b0 = (code *******)0x0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_188 = (code *******)&local_108;
      local_190 = (code *******)FUN_143bdf0ec;
      local_108 = (code *******)&local_b8;
      FUN_143bae282(param_2,pppppppcVar8,&local_190,0);
      local_f8[0] = (code *******)&local_168;
      local_178 = (code *******)FUN_143bdf136;
      local_108 = pppppppcVar8;
      pppppppcStack_100 = (code *******)&local_b8;
    }
    else {
      if (bVar5 != 0) goto LAB_143bbc237;
      pppppppcVar8 = *(code ********)(param_1 + 0x98);
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_b8 = (code *******)0x0;
      pppppppcStack_b0 = (code *******)0x0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_188 = (code *******)&local_108;
      local_190 = (code *******)FUN_143bdef82;
      local_108 = (code *******)&local_b8;
      FUN_143bad420(param_2,pppppppcVar8,&local_190,0);
      local_178 = (code *******)FUN_143bdefcc;
      local_108 = (code *******)&local_b8;
      pppppppcStack_100 = (code *******)&local_168;
      local_f8[0] = pppppppcVar8;
    }
    local_170 = (code *******)&local_108;
    FUN_143bac7da(param_2,pppppppcVar8,&local_178,0);
LAB_143bbc1af:
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar28 = (ulonglong)pppppppcStack_b0 >> 0x20;
    pppppppcStack_b0 = (code *******)((ulonglong)pppppppcStack_b0 & 0xffffffff00000000);
    if ((int)uVar28 != 0) {
      FUN_1447a08a2(&local_b8,0);
    }
    param_2 = local_1d8;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      FUN_1446efbd8(local_a8,0);
    }
    if (local_98 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (code *******)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143bbc237:
  puVar4 = (undefined8 *)*local_1c8;
  *puVar4 = local_168;
  FUN_1484d24e8(puVar4 + 1,auStack_160);
  local_118 = 0;
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(auStack_160);
LAB_143bbb700:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar19 = (int *)((longlong)plVar3 + 0xc);
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      if (*piVar19 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar14 = *(int *)((longlong)local_168 + (longlong)iVar14 * 0xc + 4), iVar14 != -1) {
LAB_143bbb1bb:
    if (*(uint *)((longlong)local_168 + (longlong)iVar14 * 0xc) == uVar30) goto LAB_143bbb1e5;
  }
LAB_143bbb1d4:
  FUN_1447cbafe(&local_b8,&local_1a8,&local_178,0);
LAB_143bbb1e5:
  uVar29 = local_90;
  uVar6 = uVar30 + 1;
  if ((int)(uVar30 + 1) < (int)uVar17) {
    uVar6 = uVar17;
  }
  do {
    uVar9 = uVar6;
    if (uVar6 - 1 == uVar30) break;
    uVar30 = uVar30 + 1;
    uVar9 = uVar30;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar12 + 0x148) +
                                         (ulonglong)(uVar30 >> 9) * 8) +
                                       (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
  uVar30 = uVar9;
  if (uVar30 == uVar17) goto code_r0x000143bbb233;
  goto LAB_143bbb112;
code_r0x000143bbb233:
  uVar28 = (ulonglong)local_90;
  if (local_90 != 0) {
    puVar13 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar13 = (uint *)local_a8;
    }
    uVar30 = *puVar13;
    if (uVar30 == 0) {
      iVar14 = local_90 + 0x1e;
      if (-1 < (int)(local_90 - 1)) {
        iVar14 = local_90 - 1;
      }
      uVar21 = 0;
      uVar24 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar24 = uVar21;
      }
      iVar14 = 0;
      do {
        if (uVar24 == uVar21) goto LAB_143bbb548;
        iVar14 = iVar14 + 0x20;
        uVar30 = puVar13[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
    }
    uVar25 = (ulonglong)(-uVar30 & uVar30);
    uVar24 = uVar25 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar30 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar30 < (int)local_90) {
      uVar6 = 0xffffffff;
      puVar13 = local_98;
      uVar17 = local_90;
      do {
        if ((int)pppppppcStack_100 != local_d4) {
          iVar20 = *(int *)((longlong)local_b8 + (longlong)(int)uVar30 * 0xc);
          puVar11 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar11 = local_d0;
          }
          piVar19 = (int *)(puVar11 + ((longlong)local_c0 - 1U & (longlong)iVar20) * 4);
          do {
            iVar18 = *piVar19;
            lVar12 = (longlong)iVar18;
            puVar13 = local_98;
            uVar17 = local_90;
            if (lVar12 == -1) break;
            piVar26 = (int *)(lVar12 * 0xc + (longlong)local_108);
            iVar10 = *piVar26;
            if (iVar10 == iVar20) {
              puVar11 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar11 = local_d0;
              }
              iVar23 = *(int *)(puVar11 + (longlong)piVar26[2] * 4);
              if (iVar23 == iVar18) {
                piVar15 = (int *)(puVar11 + (longlong)piVar26[2] * 4);
              }
              else {
                do {
                  piVar15 = (int *)((longlong)iVar23 * 0xc + 4 + (longlong)local_108);
                  iVar23 = *piVar15;
                } while (iVar23 != iVar18);
              }
              *piVar15 = piVar26[1];
              if (local_d4 != 0) {
                *(int *)((longlong)local_108 + (longlong)iStack_d8 * 0xc) = iVar18;
              }
              *(undefined4 *)((longlong)local_108 + lVar12 * 0xc) = 0xffffffff;
              iVar23 = -1;
              if (0 < local_d4) {
                iVar23 = iStack_d8;
              }
              *(int *)((longlong)local_108 + lVar12 * 0xc + 4) = iVar23;
              iStack_d8 = iVar18;
              local_d4 = local_d4 + 1;
              pppppppcVar8 = local_e8;
              if (local_e8 == (code *******)0x0) {
                pppppppcVar8 = (code *******)local_f8;
              }
              iVar23 = iVar18 + 0x1f;
              if (-1 < iVar18) {
                iVar23 = iVar18;
              }
              bVar5 = (byte)iVar18 & 0x1f;
              puVar13 = (uint *)((longlong)pppppppcVar8 + (longlong)(iVar23 >> 5) * 4);
              *puVar13 = *puVar13 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
            }
            else {
              piVar19 = piVar26 + 1;
            }
            puVar13 = local_98;
            uVar17 = local_90;
          } while (iVar10 != iVar20);
        }
        uVar6 = uVar6 & ~(uint)uVar25;
        puVar27 = puVar13;
        if (puVar13 == (uint *)0x0) {
          puVar27 = (uint *)local_a8;
        }
        iVar20 = (int)uVar21;
        lVar12 = (longlong)iVar20;
        uVar30 = puVar27[lVar12] & uVar6;
        if (uVar30 == 0) {
          iVar18 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar18 = uVar17 - 1;
          }
          iVar18 = iVar18 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar10 = iVar18;
          if (iVar18 < iVar20) {
            iVar10 = iVar20;
          }
          if (iVar20 < iVar18) {
            lVar31 = 0;
            do {
              uVar30 = puVar27[lVar12 + lVar31 + 1];
              if (uVar30 != 0) {
                uVar21 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                uVar6 = 0xffffffff;
                goto LAB_143bbb4d8;
              }
              iVar14 = iVar14 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar10 - lVar12 != lVar31);
            uVar6 = 0xffffffff;
            iVar20 = iVar10;
          }
          uVar21 = (ulonglong)(iVar20 + 1);
          uVar30 = uVar17;
        }
        else {
LAB_143bbb4d8:
          uVar25 = (ulonglong)(-uVar30 & uVar30);
          uVar24 = uVar25 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar30 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar30) {
            uVar30 = uVar17;
          }
        }
        local_1c0 = uVar28;
      } while (uVar30 != uVar29);
    }
  }
LAB_143bbb548:
  param_1 = local_1d0;
  param_2 = local_1d8;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar28 = (ulonglong)pppppppcStack_b0 >> 0x20;
  pppppppcStack_b0 = (code *******)((ulonglong)pppppppcStack_b0 & 0xffffffff00000000);
  if ((int)uVar28 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_1b8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (code *******)0x0) {
    FUN_1400020a8();
  }
  local_120 = local_120 & 0xffffffff00000000;
  if (local_128 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  uVar28 = auStack_160[0] >> 0x20;
  auStack_160[0] = auStack_160[0] & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    FUN_1447a08a2(&local_168,0);
  }
  uStack_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < uStack_13c) {
    uStack_13c = 0x80;
    FUN_1446efbd8(auStack_160 + 1,0);
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (code *******)0x0) {
    FUN_1400020a8();
  }
  FUN_143bba66c(param_1,&local_108,2,local_1c8);
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar28 = (ulonglong)pppppppcStack_100 >> 0x20;
  pppppppcStack_100 = (code *******)((ulonglong)pppppppcStack_100 & 0xffffffff00000000);
  if ((int)uVar28 != 0) {
    FUN_1447a08a2(&local_108,0);
  }
  iStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    FUN_1446efbd8(local_f8,0);
  }
  pppppppcVar8 = local_108;
  if (local_e8 != (code *******)0x0) {
    FUN_1400020a8();
    pppppppcVar8 = local_108;
  }
LAB_143bbb6f7:
  if (pppppppcVar8 != (code *******)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143bbb700;
}



// FUNCTION 143bbc3ca FUN_143bbc3ca body=98 status=ok
// SIG undefined FUN_143bbc3ca(void)

longlong FUN_143bbc3ca(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  
  if (param_1 != 0) {
    FUN_143bab15a(param_2,*(undefined8 *)(param_1 + 0x98),param_3,0);
    uVar4 = FUN_143ba9b82(param_2);
    *param_4 = uVar4;
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
  return param_1;
}



// FUNCTION 143bbc42c FUN_143bbc42c body=258 status=ok
// SIG undefined FUN_143bbc42c(void)

longlong FUN_143bbc42c(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    *param_4 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar4 = FUN_143bab15a(param_2,*(undefined8 *)(param_1 + 0x98),&local_48,param_5);
    *param_4 = (char)uVar4;
    FUN_14856da48(param_3,uVar4,0);
    plVar3 = *(longlong **)(param_3 + 8);
    if (plVar3 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      *plVar3 = local_48;
      local_48 = 0;
      *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_40._4_4_;
    }
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbc530 FUN_143bbc530 body=1987 status=ok
// SIG undefined FUN_143bbc530(void)

void FUN_143bbc530(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *_Src;
  undefined7 *puVar10;
  undefined1 *_Src_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined7 *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar5)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_58);
            goto LAB_143bbc70c;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_58,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_58,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_58,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar9;
        puVar9 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_58);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_58);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      local_58 = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_58);
    }
  }
LAB_143bbc70c:
  FUN_148568536(&uStack_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar5)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_68);
            goto LAB_143bbc8a8;
          }
        }
        puVar10 = (undefined7 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &uStack_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_68,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_68,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_68,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&uStack_68,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar9;
        puVar9 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_68);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_68);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_68 = (undefined7)uVar6;
      uStack_61 = (undefined1)((ulonglong)uVar6 >> 0x38);
    }
    else {
      (*pcVar5)(uVar6,param_2,&uStack_68);
    }
  }
LAB_143bbc8a8:
  puVar10 = &uStack_68;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar10 = *(undefined7 **)(param_2 + 0x38);
  }
  local_69 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_140a4831c;
      local_98 = 0x1000000008001;
      local_90 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar5)(plVar3);
          if (cVar8 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_69);
            goto LAB_143bbca66;
          }
        }
        _Src_00 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_00 != &local_69) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_69,_Src_00,(int)plVar3[6]);
          }
          else {
            memcpy(&local_69,_Src_00,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_69,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_69,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar9;
        puVar9 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_69);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_69);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_69 = (undefined1)uVar6;
      uStack_68 = (undefined7)((ulonglong)uVar6 >> 8);
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_69);
    }
  }
LAB_143bbca66:
  lVar4 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_39 = local_69;
  if (local_58 != 0) {
    local_50 = &local_39;
    local_48 = puVar10;
    FUN_143bddb3e(&local_50,*(undefined8 *)(local_58 + 0x98));
  }
  *param_3 = lVar4;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbccf4 FUN_143bbccf4 body=3948 status=ok
// SIG undefined FUN_143bbccf4(void)

longlong FUN_143bbccf4(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,
                      char param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_1b8 [32];
  char local_198;
  char local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  longlong *local_170;
  undefined1 *local_168;
  undefined8 ***local_160;
  undefined1 local_154 [4];
  undefined1 **local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  longlong local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  ulonglong uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  undefined1 ***pppuStack_90;
  longlong *local_88 [2];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_1 != 0) &&
     (puVar21 = (undefined8 *)*param_2, *(int *)(puVar21 + 2) != *(int *)((longlong)puVar21 + 0x3c))
     ) {
    if ((int)param_4 < 1) {
      puVar5 = (undefined8 *)*param_3;
      *puVar5 = *puVar21;
      FUN_147371fc4(puVar5 + 1,puVar21 + 1);
    }
    else {
      uVar13 = 100;
      if (param_4 < 100) {
        uVar13 = param_4;
      }
      cVar7 = FUN_143ba9b82(param_2);
      local_188 = param_3;
      if (param_4 == 1 || cVar7 != '\x02') {
        local_148 = &DAT_100000004;
        local_120 = 0;
        local_118 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_114 = 0xffffffff00000080;
        local_10c = 0;
        local_100 = 0;
        local_f8 = 0;
        if (cVar7 == '\x03') {
          local_148 = &DAT_100000002;
          puVar21 = *(undefined8 **)(param_1 + 0x98);
          local_98 = &local_f0;
          local_c8 = (uint *)0x0;
          local_c0 = 0;
          local_e8 = (longlong *)0x0;
          uStack_e0 = 0;
          local_bc = 0x80;
          uStack_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_160 = &local_98;
          local_168 = &LAB_143bdf8c6;
          local_f0 = puVar21;
          FUN_143bae282(param_2,puVar21,&local_168,0);
          if (param_5 == '\0') {
            pppuStack_90 = &local_150;
            local_98 = (undefined8 **)&LAB_1485c3e20;
            FUN_1485c37c0(&local_f0,uVar13);
          }
          else {
            FUN_1485c33c2(&local_f0,uVar13);
          }
          iVar6 = local_c0;
          if (local_c0 == 0) {
            uVar22 = 1;
            uVar19 = 0;
            iVar14 = 0;
            iVar16 = 0;
          }
          else {
            puVar8 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar8 = local_d8;
            }
            uVar13 = *puVar8;
            if (uVar13 == 0) {
              iVar14 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar14 = local_c0 + -1;
              }
              uVar19 = 0;
              uVar20 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar20 = uVar19;
              }
              iVar14 = 0;
              do {
                if (uVar20 == uVar19) goto LAB_143bbd31a;
                iVar14 = iVar14 + 0x20;
                uVar13 = puVar8[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar19 = 0;
              iVar14 = 0;
            }
            uVar22 = (ulonglong)(-uVar13 & uVar13);
            uVar20 = uVar22 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (local_c0 <= iVar16) {
              iVar16 = local_c0;
            }
          }
          if (iVar16 != local_c0) {
            uVar13 = 0xffffffff;
            do {
              local_150 = &local_148;
              pppuStack_90 = &local_150;
              local_98 = (undefined8 **)FUN_143bdf8d0;
              FUN_14838980a(puVar21,*(undefined4 *)((longlong)local_e8 + (longlong)iVar16 * 0xc),
                            &local_98);
              uVar13 = ~(uint)uVar22 & uVar13;
              puVar8 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar8 = local_d8;
              }
              iVar16 = (int)uVar19;
              lVar18 = (longlong)iVar16;
              uVar15 = puVar8[lVar18] & uVar13;
              if (uVar15 == 0) {
                iVar11 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar11 = local_c0 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar12 = iVar11;
                if (iVar11 < iVar16) {
                  iVar12 = iVar16;
                }
                if (iVar16 < iVar11) {
                  lVar17 = 0;
                  do {
                    uVar15 = puVar8[lVar18 + lVar17 + 1];
                    if (uVar15 != 0) {
                      uVar19 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_143bbd5c7;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar12 - lVar18 != lVar17);
                  uVar13 = 0xffffffff;
                  lVar18 = (longlong)iVar12;
                }
                uVar19 = lVar18 + 1U & 0xffffffff;
                iVar16 = local_c0;
              }
              else {
LAB_143bbd5c7:
                uVar22 = (ulonglong)(-uVar15 & uVar15);
                uVar20 = uVar22 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (local_c0 <= iVar16) {
                  iVar16 = local_c0;
                }
              }
            } while (iVar16 != iVar6);
          }
LAB_143bbd31a:
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          plVar9 = local_188;
          uVar19 = uStack_e0 >> 0x20;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            FUN_1447a08a2(&local_e8,0);
          }
        }
        else if (cVar7 == '\0') {
          local_148 = &DAT_100000001;
          local_f0 = *(undefined8 **)(param_1 + 0x98);
          local_98 = &local_f0;
          local_c8 = (uint *)0x0;
          local_c0 = 0;
          local_e8 = (longlong *)0x0;
          uStack_e0 = 0;
          local_bc = 0x80;
          uStack_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_160 = &local_98;
          local_168 = &LAB_143bdf8bc;
          FUN_143bad420(param_2,local_f0,&local_168,0);
          if (param_5 == '\0') {
            local_98 = (undefined8 **)0x0;
            local_88[0] = (longlong *)0x0;
            do {
              FUN_1485c2f72(&local_f0,&local_98);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            if (local_98 != (undefined8 **)0x0) {
              plVar9 = local_88[0];
              if (local_88[0] == (longlong *)0x0) {
                plVar9 = &local_78;
              }
              (**(code **)(*plVar9 + 0x10))();
            }
          }
          else {
            FUN_1485c2ae0(&local_f0,uVar13);
          }
          iVar6 = local_c0;
          if (local_c0 == 0) {
            uVar22 = 1;
            uVar19 = 0;
            iVar14 = 0;
            iVar16 = 0;
          }
          else {
            puVar8 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar8 = local_d8;
            }
            uVar13 = *puVar8;
            if (uVar13 == 0) {
              iVar14 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar14 = local_c0 + -1;
              }
              uVar19 = 0;
              uVar20 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar20 = uVar19;
              }
              iVar14 = 0;
              do {
                if (uVar20 == uVar19) goto LAB_143bbd1de;
                iVar14 = iVar14 + 0x20;
                uVar13 = puVar8[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar19 = 0;
              iVar14 = 0;
            }
            uVar22 = (ulonglong)(-uVar13 & uVar13);
            uVar20 = uVar22 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (local_c0 <= iVar16) {
              iVar16 = local_c0;
            }
          }
          if (iVar16 != local_c0) {
            uVar13 = 0xffffffff;
            do {
              local_98 = (undefined8 **)
                         (ulonglong)*(uint *)((longlong)local_e8 + (longlong)iVar16 * 0xc);
              FUN_1483b983a(&local_140,&local_150,&local_98,0);
              uVar13 = ~(uint)uVar22 & uVar13;
              puVar8 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar8 = local_d8;
              }
              iVar16 = (int)uVar19;
              lVar18 = (longlong)iVar16;
              uVar15 = puVar8[lVar18] & uVar13;
              if (uVar15 == 0) {
                iVar11 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar11 = local_c0 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar12 = iVar11;
                if (iVar11 < iVar16) {
                  iVar12 = iVar16;
                }
                if (iVar16 < iVar11) {
                  lVar17 = 0;
                  do {
                    uVar15 = puVar8[lVar18 + lVar17 + 1];
                    if (uVar15 != 0) {
                      uVar19 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_143bbd4a6;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar12 - lVar18 != lVar17);
                  uVar13 = 0xffffffff;
                  lVar18 = (longlong)iVar12;
                }
                uVar19 = lVar18 + 1U & 0xffffffff;
                iVar16 = local_c0;
              }
              else {
LAB_143bbd4a6:
                uVar22 = (ulonglong)(-uVar15 & uVar15);
                uVar20 = uVar22 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (local_c0 <= iVar16) {
                  iVar16 = local_c0;
                }
              }
            } while (iVar16 != iVar6);
          }
LAB_143bbd1de:
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          plVar9 = local_188;
          uVar19 = uStack_e0 >> 0x20;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            FUN_1447a08a2(&local_e8,0);
          }
        }
        else {
          local_f0 = *(undefined8 **)(param_1 + 0x98);
          local_98 = &local_f0;
          local_c8 = (uint *)0x0;
          local_c0 = 0;
          local_e8 = (longlong *)0x0;
          uStack_e0 = 0;
          local_bc = 0x80;
          uStack_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_160 = &local_98;
          local_168 = &LAB_143bdf920;
          FUN_143bac7da(param_2,local_f0,&local_168,0);
          if (param_5 == '\0') {
            if (param_6 == '\0') {
              local_98 = (undefined8 **)0x0;
              local_88[0] = (longlong *)0x0;
              FUN_146c83216(&local_f0,uVar13,&local_98);
            }
            else {
              local_98 = (undefined8 **)0x0;
              local_88[0] = (longlong *)0x0;
              do {
                FUN_1483a2e7e(&local_f0,&local_98);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else {
            local_98 = (undefined8 **)0x0;
            local_88[0] = (longlong *)0x0;
            FUN_146c83692(&local_f0,uVar13,1,&local_98);
          }
          if (local_98 != (undefined8 **)0x0) {
            plVar9 = local_88[0];
            if (local_88[0] == (longlong *)0x0) {
              plVar9 = &local_78;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          cVar7 = FUN_143ba9b82(param_2);
          iVar6 = local_c0;
          if (cVar7 == '\x01') {
            local_148 = &DAT_100000004;
            if (local_c0 == 0) {
              uVar22 = 1;
              uVar19 = 0;
              iVar14 = 0;
              iVar16 = 0;
            }
            else {
              puVar8 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar8 = local_d8;
              }
              uVar13 = *puVar8;
              if (uVar13 == 0) {
                iVar14 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar14 = local_c0 + -1;
                }
                uVar19 = 0;
                uVar20 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar20 = uVar19;
                }
                iVar14 = 0;
                do {
                  if (uVar20 == uVar19) goto LAB_143bbdb04;
                  iVar14 = iVar14 + 0x20;
                  uVar13 = puVar8[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar13 == 0);
              }
              else {
                uVar19 = 0;
                iVar14 = 0;
              }
              uVar22 = (ulonglong)(-uVar13 & uVar13);
              uVar20 = uVar22 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar16) {
                iVar16 = local_c0;
              }
            }
            if (iVar16 != local_c0) {
              uVar13 = 0xffffffff;
              do {
                local_98 = (undefined8 **)
                           (ulonglong)*(uint *)((longlong)local_e8 + (longlong)iVar16 * 0xc);
                FUN_1483b983a(&local_140,&local_150,&local_98,0);
                uVar13 = ~(uint)uVar22 & uVar13;
                puVar8 = local_c8;
                if (local_c8 == (uint *)0x0) {
                  puVar8 = local_d8;
                }
                iVar16 = (int)uVar19;
                lVar18 = (longlong)iVar16;
                uVar15 = puVar8[lVar18] & uVar13;
                if (uVar15 == 0) {
                  iVar11 = local_c0 + 0x1e;
                  if (-1 < local_c0 + -1) {
                    iVar11 = local_c0 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar14 = iVar14 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar16) {
                    iVar12 = iVar16;
                  }
                  if (iVar16 < iVar11) {
                    lVar17 = 0;
                    do {
                      uVar15 = puVar8[lVar18 + lVar17 + 1];
                      if (uVar15 != 0) {
                        uVar19 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                        uVar13 = 0xffffffff;
                        goto LAB_143bbda2e;
                      }
                      iVar14 = iVar14 + 0x20;
                      lVar17 = lVar17 + 1;
                    } while (iVar12 - lVar18 != lVar17);
                    uVar13 = 0xffffffff;
                    lVar18 = (longlong)iVar12;
                  }
                  uVar19 = lVar18 + 1U & 0xffffffff;
                  iVar16 = local_c0;
                }
                else {
LAB_143bbda2e:
                  uVar22 = (ulonglong)(-uVar15 & uVar15);
                  uVar20 = uVar22 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar16 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if (local_c0 <= iVar16) {
                    iVar16 = local_c0;
                  }
                }
              } while (iVar16 != iVar6);
            }
          }
          else {
            local_148 = (undefined1 *)0x200000004;
            local_180 = *(undefined8 *)(param_1 + 0x98);
            uVar19 = 0;
            local_78 = 0;
            local_70 = 0;
            local_98 = (undefined8 **)0x0;
            pppuStack_90 = (undefined1 ***)0x0;
            local_6c = 0x80;
            uStack_68 = 0xffffffff;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            uVar20 = 1;
            iVar16 = 0;
            iVar14 = 0;
            if (local_c0 != 0) {
              puVar8 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar8 = local_d8;
              }
              uVar13 = *puVar8;
              if (uVar13 == 0) {
                iVar14 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar14 = local_c0 + -1;
                }
                uVar19 = 0;
                uVar20 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar20 = uVar19;
                }
                iVar16 = 0;
                do {
                  if (uVar20 == uVar19) goto LAB_143bbda95;
                  iVar16 = iVar16 + 0x20;
                  uVar13 = puVar8[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar13 == 0);
              }
              else {
                uVar19 = 0;
              }
              uVar20 = (ulonglong)(-uVar13 & uVar13);
              uVar22 = uVar20 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar14 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar14) {
                iVar14 = local_c0;
              }
            }
            if (iVar14 != local_c0) {
              uVar13 = 0xffffffff;
              do {
                uVar4 = *(undefined4 *)((longlong)local_e8 + (longlong)iVar14 * 0xc);
                uVar15 = FUN_146bc96d4(local_180,uVar4);
                if ((int)pppuStack_90 != local_64) {
                  puVar10 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar10 = local_60;
                  }
                  for (iVar14 = *(int *)(puVar10 + (ulonglong)(local_50 - 1U & uVar15) * 4);
                      iVar14 != -1;
                      iVar14 = *(int *)((longlong)local_98 + (longlong)iVar14 * 0xc + 4)) {
                    if (*(uint *)((longlong)local_98 + (longlong)iVar14 * 0xc) == uVar15)
                    goto LAB_143bbd828;
                  }
                }
                local_150 = (undefined1 **)CONCAT44(uVar15,uVar4);
                FUN_1483b983a(&local_140,local_154,&local_150,0);
LAB_143bbd828:
                uVar13 = uVar13 & ~(uint)uVar20;
                puVar8 = local_c8;
                if (local_c8 == (uint *)0x0) {
                  puVar8 = local_d8;
                }
                iVar14 = (int)uVar19;
                lVar18 = (longlong)iVar14;
                uVar15 = puVar8[lVar18] & uVar13;
                if (uVar15 == 0) {
                  iVar11 = local_c0 + 0x1e;
                  if (-1 < local_c0 + -1) {
                    iVar11 = local_c0 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar16 = iVar16 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar14) {
                    iVar12 = iVar14;
                  }
                  if (iVar14 < iVar11) {
                    lVar17 = 0;
                    do {
                      uVar15 = puVar8[lVar18 + lVar17 + 1];
                      if (uVar15 != 0) {
                        uVar19 = (ulonglong)(iVar14 + (int)lVar17 + 1);
                        uVar13 = 0xffffffff;
                        goto LAB_143bbd8b2;
                      }
                      iVar16 = iVar16 + 0x20;
                      lVar17 = lVar17 + 1;
                    } while (iVar12 - lVar18 != lVar17);
                    uVar13 = 0xffffffff;
                    iVar14 = iVar12;
                  }
                  uVar19 = (ulonglong)(iVar14 + 1);
                  iVar14 = local_c0;
                }
                else {
LAB_143bbd8b2:
                  uVar20 = (ulonglong)(-uVar15 & uVar15);
                  uVar22 = uVar20 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar22 != 0) {
                    for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  iVar14 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if (local_c0 <= iVar14) {
                    iVar14 = local_c0;
                  }
                }
              } while (iVar14 != iVar6);
              local_50 = 0;
              if (local_58 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_143bbda95:
            uVar19 = (ulonglong)pppuStack_90 >> 0x20;
            pppuStack_90 = (undefined1 ***)((ulonglong)pppuStack_90 & 0xffffffff00000000);
            if ((int)uVar19 != 0) {
              FUN_1447a08a2(&local_98,0);
            }
            uStack_68 = 0xffffffff;
            local_64 = 0;
            local_70 = 0;
            if (0x80 < local_6c) {
              local_6c = 0x80;
              FUN_1446efbd8(local_88,0);
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_98 != (undefined8 **)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143bbdb04:
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          plVar9 = local_188;
          uVar19 = uStack_e0 >> 0x20;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            FUN_1447a08a2(&local_e8,0);
          }
        }
        local_b4 = 0;
        uStack_b8 = 0xffffffff;
        local_c0 = 0;
        if (0x80 < local_bc) {
          local_b4 = 0;
          uStack_b8 = 0xffffffff;
          local_bc = 0x80;
          local_c0 = 0;
          FUN_1446efbd8(local_d8,0);
        }
        if (local_c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        puVar21 = (undefined8 *)*plVar9;
        *puVar21 = local_148;
        FUN_1484d24e8(puVar21 + 1,&local_140);
        local_f8 = 0;
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        FUN_140345f8a(&local_140);
      }
      else {
        plVar9 = (longlong *)param_2[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        FUN_148568536(&local_f0);
        do {
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_190 = param_6;
          local_198 = param_5;
          local_178 = puVar21;
          local_170 = plVar9;
          FUN_143bbccf4(param_1,&local_178,&local_f0,1);
          plVar1 = local_e8;
          puVar21 = local_f0;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
            UNLOCK();
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
          uVar13 = uVar13 - 1;
          plVar9 = plVar1;
        } while (uVar13 != 0);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
        }
        plVar9 = (longlong *)local_188[1];
        *local_188 = (longlong)puVar21;
        local_188[1] = (longlong)plVar1;
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
        plVar9 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_e8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar1 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar1)(plVar1);
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
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbdc62 FUN_143bbdc62 body=1452 status=ok
// SIG undefined FUN_143bbdc62(void)

longlong FUN_143bbdc62(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong ***ppplVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  longlong ***ppplVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStack_158 [32];
  code **local_138;
  undefined8 local_130;
  longlong local_128 [2];
  longlong ***local_118;
  undefined8 ***local_110;
  code *local_108;
  undefined8 ****ppppuStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  code *local_b8;
  code **ppcStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_1 == 0) ||
     (puVar4 = (undefined8 *)*param_2, *(int *)(puVar4 + 2) == *(int *)((longlong)puVar4 + 0x3c)))
  goto LAB_143bbe039;
  cVar9 = FUN_143ba9b82(param_2);
  if ((cVar9 == '\x03') || ((cVar9 == '\0' || (param_4 == '\x01' && cVar9 == '\x02')))) {
    puVar6 = (undefined8 *)*param_3;
    *puVar6 = *puVar4;
    FUN_147371fc4(puVar6 + 1,puVar4 + 1);
    goto LAB_143bbe039;
  }
  local_108 = (code *)local_128;
  local_128[0] = 0;
  local_128[1] = 0;
  local_b8 = FUN_143bdf818;
  ppcStack_b0 = &local_108;
  FUN_143bac7da(param_2,*(undefined8 *)(param_1 + 0x98),&local_b8,0);
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = (code *)0x0;
  ppcStack_b0 = (code **)0x0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (param_4 == '\0') {
    ppplVar14 = *(longlong ****)(param_1 + 0x98);
    ppppuStack_100 = &local_110;
    local_108 = (code *)&LAB_143bdf84c;
LAB_143bbdd8b:
    local_138 = &local_108;
    FUN_146c81f86(ppplVar14,local_128,&local_b8,0);
  }
  else {
    if (param_4 == '\x01') {
      ppplVar14 = *(longlong ****)(param_1 + 0x98);
      ppppuStack_100 = &local_110;
      local_108 = FUN_143bdf850;
      local_110 = ppplVar14;
      goto LAB_143bbdd8b;
    }
    if (param_4 == '\x02') {
      ppplVar14 = *(longlong ****)(param_1 + 0x98);
      if ((ppplVar14[0x41] != (longlong **)0x0) &&
         (ppplVar5 = (longlong ***)ppplVar14[0x41][9], ppplVar5 != (longlong ***)0x0)) {
        local_118 = (longlong ***)&local_110;
        ppppuStack_100 = &local_118;
        local_108 = (code *)&LAB_143bdf880;
        local_110 = ppplVar5;
        goto LAB_143bbdd8b;
      }
    }
  }
  cVar9 = FUN_143ba9b82(param_2);
  iVar8 = local_90;
  if (cVar9 == '\x01') {
    FUN_143bba66c(param_1,&local_b8,1,param_3);
  }
  else {
    uVar21 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = (code *)0x0;
    ppppuStack_100 = (undefined8 ****)0x0;
    local_dc = 0x80;
    uStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_130 = *(undefined8 *)(param_1 + 0x98);
    if (local_90 == 0) {
      uVar17 = 1;
      iVar22 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar12 = local_a8;
      }
      uVar13 = *puVar12;
      if (uVar13 == 0) {
        iVar10 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar10 = local_90 + -1;
        }
        uVar21 = 0;
        uVar17 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar17 = uVar21;
        }
        iVar22 = 0;
        do {
          if (uVar17 == uVar21) goto LAB_143bbdf18;
          iVar22 = iVar22 + 0x20;
          uVar13 = puVar12[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar21 = 0;
        iVar22 = 0;
      }
      uVar17 = (ulonglong)(-uVar13 & uVar13);
      uVar3 = uVar17 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar10 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar10) {
        iVar10 = local_90;
      }
    }
    if (iVar10 != local_90) {
      uVar13 = 0xffffffff;
      do {
        uVar11 = FUN_146bc96d4(local_130,*(undefined4 *)(local_b8 + (longlong)iVar10 * 0xc));
        local_110 = (undefined8 ***)CONCAT44(local_110._4_4_,uVar11);
        FUN_144984904(&local_108,&local_118,&local_110,0);
        uVar13 = ~(uint)uVar17 & uVar13;
        puVar12 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar12 = local_a8;
        }
        iVar10 = (int)uVar21;
        lVar20 = (longlong)iVar10;
        uVar18 = puVar12[lVar20] & uVar13;
        if (uVar18 == 0) {
          iVar15 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar15 = local_90 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar16 = iVar15;
          if (iVar15 < iVar10) {
            iVar16 = iVar10;
          }
          if (iVar10 < iVar15) {
            lVar19 = 0;
            do {
              uVar18 = puVar12[lVar20 + lVar19 + 1];
              if (uVar18 != 0) {
                uVar21 = (ulonglong)(iVar10 + (int)lVar19 + 1);
                uVar13 = 0xffffffff;
                goto LAB_143bbe15f;
              }
              iVar22 = iVar22 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar16 - lVar20 != lVar19);
            uVar13 = 0xffffffff;
            iVar10 = iVar16;
          }
          uVar21 = (ulonglong)(iVar10 + 1);
          iVar10 = local_90;
        }
        else {
LAB_143bbe15f:
          uVar17 = (ulonglong)(-uVar18 & uVar18);
          uVar3 = uVar17 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar10 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (local_90 <= iVar10) {
            iVar10 = local_90;
          }
        }
      } while (iVar10 != iVar8);
    }
LAB_143bbdf18:
    FUN_143bba66c(param_1,&local_108,2,param_3);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    uVar21 = (ulonglong)ppppuStack_100 >> 0x20;
    ppppuStack_100 = (undefined8 ****)((ulonglong)ppppuStack_100 & 0xffffffff00000000);
    if ((int)uVar21 != 0) {
      FUN_1447a08a2(&local_108,0);
    }
    uStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_e0 = 0;
    if (0x80 < local_dc) {
      local_dc = 0x80;
      FUN_1446efbd8(local_f8,0);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar21 = (ulonglong)ppcStack_b0 >> 0x20;
  ppcStack_b0 = (code **)((ulonglong)ppcStack_b0 & 0xffffffff00000000);
  if ((int)uVar21 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
LAB_143bbe039:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbe210 FUN_143bbe210 body=124 status=ok
// SIG undefined FUN_143bbe210(void)

void FUN_143bbe210(longlong param_1,longlong *param_2,undefined1 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  
  uVar4 = FUN_143ba9b82(param_2);
  *param_3 = uVar4;
  if (param_1 == 0) {
    iVar5 = *(int *)(*param_2 + 0x10) - *(int *)(*param_2 + 0x3c);
  }
  else {
    iVar5 = FUN_143ba9bb6(param_2,*(undefined8 *)(param_1 + 0x98));
  }
  *param_4 = iVar5;
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143bbe27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143bbe28c FUN_143bbe28c body=212 status=ok
// SIG undefined FUN_143bbe28c(void)

longlong FUN_143bbe28c(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if (param_4 == '\0') {
      local_21 = FUN_143ba9b82(param_2);
      local_38 = &local_21;
      local_30 = param_3;
      FUN_143bddb3e(&local_38,*(undefined8 *)(param_1 + 0x98));
    }
    else {
      local_48 = *param_2;
      local_40 = param_2[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_143bbdc62(param_1,&local_48,param_3,0);
    }
    FUN_143baa3de(param_3,param_2,1);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbe362 FUN_143bbe362 body=581 status=ok
// SIG undefined FUN_143bbe362(void)

longlong FUN_143bbe362(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  ulonglong local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    uVar7 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a0 = &DAT_100000002;
    lVar1 = *(longlong *)(param_1 + 0x98);
    uVar5 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
    if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
      uVar7 = 1;
      uVar6 = 1;
      if (1 < (int)uVar5) {
        uVar7 = (ulonglong)uVar5;
      }
      do {
        uVar4 = uVar6;
        if ((uint)uVar7 == uVar4) goto LAB_143bbe478;
        uVar6 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x1d8))[uVar4 >> 9] +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar7 = (ulonglong)uVar4;
    }
LAB_143bbe478:
    if ((uint)uVar7 != uVar5) {
      do {
        uVar6 = (uint)uVar7;
        uVar2 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (uVar7 >> 9) * 8) + 8 +
                 (ulonglong)((uVar6 & 0x1ff) << 4));
        if (0xfffffffeffffffff < uVar2) {
          uVar4 = (uint)uVar2;
          lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (uVar2 >> 9 & 0x7fffff) * 8);
          if (*(uint *)(lVar3 + (ulonglong)(uVar4 & 0x1ff) * 0xc) == uVar6) {
            uVar4 = uVar4 << 2;
          }
          else {
            uVar4 = (uVar4 * 4 -
                    (uint)(*(uint *)(lVar3 + (ulonglong)(uVar4 & 0x1ff) * 0xc + 4) == uVar6)) + 2;
          }
          local_a8 = (ulonglong)(uVar4 << 0x1e | uVar4 >> 2);
          FUN_1483b983a(&local_98,local_ac,&local_a8,0);
        }
        uVar4 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar5) {
          uVar4 = uVar5;
        }
        do {
          if (uVar4 - 1 == (int)uVar7) {
            uVar7 = (ulonglong)uVar4;
            break;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x1d8) +
                                               (ulonglong)(uVar6 >> 9) * 8) +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar7 != uVar5);
    }
    param_2 = (undefined8 *)*param_2;
    *param_2 = local_a0;
    FUN_147371fc4(param_2 + 1,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bbe5a8 FUN_143bbe5a8 body=2685 status=ok
// SIG undefined FUN_143bbe5a8(void)

void FUN_143bbe5a8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined7 *puVar12;
  undefined1 *_Src;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  longlong *local_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  longlong **local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_68 = 0;
  uStack_64 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1468d96f0;
      local_a0 = 0;
      local_a8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar5)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_68);
            goto LAB_143bbe784;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &uStack_68) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_68,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_68,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_68,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&uStack_68,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar10;
        puVar10 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_68);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_68);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_68 = (undefined4)uVar6;
      uStack_64 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar5)(uVar6,param_2,&uStack_68);
    }
  }
LAB_143bbe784:
  local_6c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1405ebbb2;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar5)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_6c);
            goto LAB_143bbe937;
          }
        }
        puVar11 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_6c) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_6c,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_6c,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_6c,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_6c,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar10;
        puVar10 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_6c);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_6c);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_6c = (undefined4)uVar6;
      uStack_68 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_6c);
    }
  }
LAB_143bbe937:
  FUN_148568536(&uStack_80);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar5)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_80);
            goto LAB_143bbead3;
          }
        }
        puVar12 = (undefined7 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar12 != &uStack_80) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_80,puVar12,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_80,puVar12,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_80,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&uStack_80,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar10;
        puVar10 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_80);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_80);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_80 = (undefined7)uVar6;
      uStack_79 = (undefined1)((ulonglong)uVar6 >> 0x38);
    }
    else {
      (*pcVar5)(uVar6,param_2,&uStack_80);
    }
  }
LAB_143bbead3:
  puVar12 = &uStack_80;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar12 = *(undefined7 **)(param_2 + 0x38);
  }
  local_81 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_140a4831c;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar5)(plVar3);
          if (cVar9 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_81);
            goto LAB_143bbec91;
          }
        }
        _Src = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_81) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_81,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_81,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar3[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_81,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_81,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar10;
        puVar10 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_81);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_81);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_81 = (undefined1)uVar6;
      uStack_80 = (undefined7)((ulonglong)uVar6 >> 8);
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_81);
    }
  }
LAB_143bbec91:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = CONCAT44(uStack_64,uStack_68);
  if (lVar4 != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x208);
    if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x48), lVar8 != 0)) {
      local_60 = &local_40;
      local_48 = &local_60;
      local_58 = local_6c;
      local_50 = &LAB_143bde860;
      local_40 = lVar8;
      FUN_143bde17d(*(longlong *)(lVar4 + 0x98),puVar12,local_81);
    }
  }
  *param_3 = lVar4;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbf026 FUN_143bbf026 body=329 status=ok
// SIG undefined FUN_143bbf026(void)

longlong FUN_143bbf026(longlong param_1,undefined8 param_2,double *param_3,double param_4,
                      undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  double dVar1;
  double dVar2;
  undefined8 unaff_RBP;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 *local_80;
  double **local_78;
  double *local_70;
  double *local_68;
  undefined1 local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    dVar1 = *param_3;
    dVar3 = param_3[1];
    dVar4 = param_3[2];
    dVar5 = SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3);
    dVar2 = 1.0 / dVar5;
    if (0.0 < dVar5) {
      dVar4 = dVar4 * dVar2;
      dVar3 = dVar3 * dVar2;
    }
    else {
      dVar4 = 0.0;
      dVar3 = 0.0;
    }
    *param_3 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar1 * dVar2));
    param_3[1] = dVar3;
    param_3[2] = dVar4;
    local_58 = cos(param_4 * 0.017453292519943295);
    local_68 = &local_58;
    local_78 = &local_70;
    local_60 = param_6;
    local_80 = &LAB_143bdf4ba;
    local_98 = param_7;
    local_90 = 1;
    local_70 = param_3;
    FUN_143bc0de3(param_1,&local_80,param_2,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbf170 FUN_143bbf170 body=3417 status=ok
// SIG undefined FUN_143bbf170(void)

void FUN_143bbf170(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *_Src;
  uint *_Src_00;
  undefined4 *_Src_01;
  undefined7 *puVar14;
  undefined1 *_Src_02;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  longlong *local_88;
  undefined4 local_7c;
  uint uStack_78;
  int iStack_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_1468d96f0;
      local_b0 = 0;
      local_b8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar5)(plVar3);
          if (cVar10 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_70);
            goto LAB_143bbf34d;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_70) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_70,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_70,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar3[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_70,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_70,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar12;
        puVar12 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_70);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_70);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      local_70 = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_70);
    }
  }
LAB_143bbf34d:
  uStack_78 = CONCAT31(uStack_78._1_3_,1);
  iStack_74 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar5)(plVar3);
          if (cVar10 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_78);
            goto LAB_143bbf505;
          }
        }
        _Src_00 = (uint *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_00 != &uStack_78) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_78,_Src_00,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_78,_Src_00,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar3[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_78,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&uStack_78,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar12;
        puVar12 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_78);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_78);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_78 = (uint)uVar6;
      iStack_74 = (int)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar5)(uVar6,param_2,&uStack_78);
    }
  }
LAB_143bbf505:
  local_7c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_a0 = FUN_1405ebbb2;
      local_a8 = &DAT_14c9520b8;
      local_b0 = 0;
      local_b8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar5)(plVar3);
          if (cVar10 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_7c);
            goto LAB_143bbf6b8;
          }
        }
        _Src_01 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_01 != &local_7c) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_7c,_Src_01,(int)plVar3[6]);
          }
          else {
            memcpy(&local_7c,_Src_01,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar3[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_7c,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_7c,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar12;
        puVar12 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_7c);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_7c);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_7c = (undefined4)uVar6;
      uStack_78 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_7c);
    }
  }
LAB_143bbf6b8:
  FUN_148568536(&uStack_90);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar5)(plVar3);
          if (cVar10 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_90);
            goto LAB_143bbf854;
          }
        }
        puVar14 = (undefined7 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar14 != &uStack_90) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_90,puVar14,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_90,puVar14,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar3[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_90,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&uStack_90,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar12;
        puVar12 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_90);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_90);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_90 = (undefined7)uVar6;
      uStack_89 = (undefined1)((ulonglong)uVar6 >> 0x38);
    }
    else {
      (*pcVar5)(uVar6,param_2,&uStack_90);
    }
  }
LAB_143bbf854:
  puVar14 = &uStack_90;
  if (*(undefined7 **)(param_2 + 0x38) != (undefined7 *)0x0) {
    puVar14 = *(undefined7 **)(param_2 + 0x38);
  }
  local_91 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_140a4831c;
      local_b8 = 0x1000000008001;
      local_b0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar5 = *(code **)(*plVar3 + 0x120);
      if (pcVar5 == FUN_144afffdc) {
        pcVar5 = *(code **)(*plVar3 + 0x88);
        if (pcVar5 != (code *)&LAB_1447713a0) {
          cVar10 = (*pcVar5)(plVar3);
          if (cVar10 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_91);
            goto LAB_143bbfa12;
          }
        }
        _Src_02 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src_02 != &local_91) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_91,_Src_02,(int)plVar3[6]);
          }
          else {
            memcpy(&local_91,_Src_02,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar5 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar3[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_91,lVar4,1);
      }
      else {
        (*pcVar5)(plVar3,&local_91,lVar4);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar12;
        puVar12 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar5 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar5 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_91);
    }
    else if (pcVar5 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_91);
    }
    else if (pcVar5 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_91 = (undefined1)uVar6;
      uStack_90 = (undefined7)((ulonglong)uVar6 >> 8);
    }
    else {
      (*pcVar5)(uVar6,param_2,&local_91);
    }
  }
LAB_143bbfa12:
  lVar4 = local_70;
  iVar9 = iStack_74;
  uVar8 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_70 == 0) goto LAB_143bbfad5;
  uVar13 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_91);
  puVar12 = *(undefined8 **)(local_70 + 0x98);
  if ((uStack_78 & 1) == 0) {
    if ((longlong *)puVar12[0x41] == (longlong *)0x0) goto LAB_143bbfad5;
    iVar11 = (**(code **)(*(longlong *)puVar12[0x41] + 0xc0))();
    if (iVar11 <= iVar9) goto LAB_143bbfad5;
    local_68 = *(undefined8 *)(*(longlong *)(puVar12[0x41] + 0x60) + (longlong)iVar9 * 8);
    local_60 = &local_68;
    local_50 = (code *)&LAB_143bde8a4;
  }
  else {
    local_50 = FUN_143bde886;
    local_60 = puVar12;
  }
  local_48 = &local_60;
  local_58 = uVar8;
  FUN_143bde17d(puVar12,puVar14,uVar13 & 0xffffffff);
LAB_143bbfad5:
  *param_3 = lVar4;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbfeca FUN_143bbfeca body=246 status=ok
// SIG undefined FUN_143bbfeca(void)

longlong FUN_143bbfeca(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                      undefined1 param_5,undefined4 param_6)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 *local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (*(char *)(param_3 + 6) == '\0') {
      local_48 = 0x7fefffffffffffff;
      uStack_40 = 0x7fefffffffffffff;
      local_38 = 0x7fefffffffffffff;
      local_30 = 0xffefffffffffffff;
      uStack_28 = 0xffefffffffffffff;
      local_20 = 0xffefffffffffffff;
    }
    else {
      local_38 = param_3[2];
      local_48 = *param_3;
      uStack_40 = param_3[1];
      local_20 = param_3[5];
      local_30 = param_3[3];
      uStack_28 = param_3[4];
    }
    local_58 = &local_48;
    local_60 = &local_58;
    local_50 = param_5;
    local_68 = &LAB_143bdf3d0;
    local_78 = param_6;
    local_70 = 0;
    FUN_143bc0de3(param_1,&local_68,param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bbffc2 FUN_143bbffc2 body=1091 status=ok
// SIG undefined FUN_143bbffc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143bbffc2(longlong param_1,longlong param_2,undefined8 param_3,double *param_4,
                      undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                      undefined4 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  undefined8 unaff_RBX;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined8 uVar31;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined1 local_2e0;
  code *local_2d8;
  undefined1 **local_2d0;
  undefined1 *local_2c8;
  undefined1 **local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [216];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (param_1 != 0) {
    bVar11 = param_2 == 0;
    if (param_2 != param_1 && !bVar11) {
      auVar1 = *(undefined1 (*) [16])(param_4 + 8);
      auVar2 = *(undefined1 (*) [16])(param_4 + 10);
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
      iVar9 = movmskpd((int)CONCAT71((int7)(local_f0 >> 8),bVar11),auVar16);
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
      uVar10 = movmskpd((int)CONCAT71((int7)((ulonglong)param_1 >> 8),param_2 == param_1 || bVar11),
                        auVar24);
      uVar20 = (undefined4)DAT_14c8464c0;
      uVar21 = DAT_14c8464c0._4_4_;
      uVar22 = (undefined4)DAT_14c8464c8;
      uVar23 = DAT_14c8464c8._4_4_;
      uVar26 = (undefined4)DAT_14c846480;
      uVar27 = DAT_14c846480._4_4_;
      uVar28 = (undefined4)DAT_14c846488;
      uVar29 = DAT_14c846488._4_4_;
      dVar5 = DAT_14c846490;
      dVar6 = DAT_14c846498;
      dVar3 = DAT_14c8464a0;
      dVar4 = DAT_14c8464a8;
      dVar18 = DAT_14c8464d0;
      uVar25 = uRam000000014c8464d8;
      dVar30 = DAT_14c8464b0;
      uVar31 = DAT_14c8464b8;
      if ((uVar10 & 0x3fffffff) != 0 || iVar9 != 0) {
        auVar24 = divpd(_DAT_149934d80,auVar1);
        auVar16 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
        dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar24._0_8_);
        dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar24._8_8_);
        dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_);
        dVar8 = *param_4;
        dVar5 = param_4[2] * -1.0;
        dVar6 = param_4[3] * 1.0;
        dVar30 = -dVar8;
        dVar7 = -param_4[1];
        dVar15 = param_4[4] * dVar3;
        dVar17 = param_4[5] * dVar4;
        dVar19 = param_4[6] * dVar18;
        dVar12 = dVar17 * dVar30 - dVar7 * dVar15;
        dVar13 = dVar19 * dVar7 - dVar5 * dVar17;
        dVar14 = dVar15 * dVar5 - dVar30 * dVar19;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar14 + dVar14;
        dVar12 = dVar12 + dVar12;
        uVar20 = SUB84(dVar3,0);
        uVar21 = (int)((ulonglong)dVar3 >> 0x20);
        uVar22 = SUB84(dVar4,0);
        uVar23 = (int)((ulonglong)dVar4 >> 0x20);
        uVar26 = SUB84(dVar8,0);
        uVar27 = (int)((ulonglong)dVar30 >> 0x20);
        uVar28 = SUB84(param_4[1],0);
        uVar29 = (int)((ulonglong)dVar7 >> 0x20);
        dVar3 = 0.0 - ((dVar12 * dVar7 - dVar14 * dVar5) + dVar6 * dVar13 + dVar15);
        dVar4 = 0.0 - (dVar12 * dVar8 + dVar5 * dVar13 + dVar6 * dVar14 + dVar17);
        uVar25 = 0;
        dVar30 = 0.0 - (dVar6 * dVar12 + dVar19 + (dVar14 * dVar30 - dVar13 * dVar7));
        uVar31 = 0;
      }
      FUN_146ba21d6(local_1c8,*(undefined8 *)(param_2 + 0x98),1);
      local_210 = 0;
      local_208 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_204 = 0xffffffff00000080;
      local_1fc = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0x4000000000000000;
      local_1d0 = 2;
      local_238 = local_1c8;
      FUN_146bef8a8(&local_238,1);
      local_2d0 = &local_2c8;
      local_2a8._8_4_ = SUB84(dVar6,0);
      local_2a8._0_8_ = dVar5;
      local_2a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_298._8_4_ = SUB84(dVar4,0);
      local_298._0_8_ = dVar3;
      local_298._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_258 = param_8;
      local_250 = param_7;
      local_248 = param_6;
      local_2d8 = FUN_143bdf5e0;
      local_2e8 = param_9;
      local_2e0 = 1;
      local_2c8 = local_1c8;
      local_2c0 = &local_238;
      local_2b8 = uVar26;
      uStack_2b4 = uVar27;
      uStack_2b0 = uVar28;
      uStack_2ac = uVar29;
      local_288 = dVar30;
      uStack_280 = uVar31;
      local_278 = uVar20;
      uStack_274 = uVar21;
      uStack_270 = uVar22;
      uStack_26c = uVar23;
      local_268 = dVar18;
      uStack_260 = uVar25;
      FUN_143bc0de3(param_1,&local_2d8,param_3,
                    CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
      local_1e8 = 0;
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      FUN_146bddd50(&local_230);
      FUN_1457e5b52(local_1c8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bc0406 FUN_143bc0406 body=213 status=ok
// SIG undefined FUN_143bc0406(void)

longlong FUN_143bc0406(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                      undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_XMM3 [16];
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined4 **local_50;
  undefined4 *local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    uVar2 = 0xffffffff;
    uVar3 = 0x5fefffff;
    if (in_XMM3._0_8_ <= 1.3407807929942596e+154) {
      uVar2 = in_XMM3._0_4_;
      uVar3 = in_XMM3._4_4_;
    }
    uVar1 = -(ulonglong)(in_XMM3._0_8_ < 2.220446049250313e-16);
    local_20 = uVar1 & 0x3cb0000000000000 | ~uVar1 & CONCAT44(uVar3,uVar2);
    local_28 = *(undefined8 *)(param_3 + 4);
    local_48 = &local_38;
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_50 = &local_48;
    local_40 = param_6;
    local_58 = &LAB_143bdf422;
    local_68 = param_7;
    local_60 = 0;
    FUN_143bc0de3(param_1,&local_58,param_2,param_5);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc04dc FUN_143bc04dc body=269 status=ok
// SIG undefined FUN_143bc04dc(void)

longlong FUN_143bc04dc(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                      undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  double *local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar3 = param_4[2];
    dVar4 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    dVar5 = 1.0 / dVar4;
    if (0.0 < dVar4) {
      dVar3 = dVar3 * dVar5;
      dVar2 = dVar2 * dVar5;
    }
    else {
      dVar3 = 0.0;
      dVar2 = 0.0;
    }
    *param_4 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar1 * dVar5));
    param_4[1] = dVar2;
    param_4[2] = dVar3;
    local_30 = &local_28;
    local_18 = param_6;
    local_38 = &LAB_143bdf46c;
    local_48 = param_7;
    local_40 = 0;
    local_28 = param_3;
    local_20 = param_4;
    FUN_143bc0de3(param_1,&local_38,param_2,param_5);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc05ea FUN_143bc05ea body=661 status=ok
// SIG undefined FUN_143bc05ea(void)

longlong FUN_143bc05ea(longlong param_1,undefined8 *param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  code *local_f8;
  undefined1 ***local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 != 0) {
    uVar5 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_b8 = &DAT_100000002;
    dVar2 = cos(param_3 * 0.017453292519943295);
    lVar1 = *(longlong *)(param_1 + 0x98);
    uVar7 = *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4);
    if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
      uVar5 = 1;
      uVar3 = 1;
      if (1 < (int)uVar7) {
        uVar5 = (ulonglong)uVar7;
      }
      do {
        uVar4 = uVar3;
        if ((uint)uVar5 == uVar4) goto LAB_143bc072d;
        uVar3 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x1d8))[uVar4 >> 9] +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar5 = (ulonglong)uVar4;
    }
LAB_143bc072d:
    if ((uint)uVar5 != uVar7) {
      do {
        uVar6 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (uVar5 >> 9) * 8) + 8 +
                 (ulonglong)(((uint)uVar5 & 0x1ff) << 4)) >> 0x20;
        if (uVar6 != 0xffffffff) {
          FUN_146c13dec(lVar1,&local_d0);
          FUN_146c13dec(lVar1,&local_e8,uVar6);
          if (local_c0 * local_d8 + local_d0 * local_e8 + local_c8 * local_e0 <= dVar2) {
            local_100 = &local_b8;
            local_f0 = &local_100;
            local_f8 = FUN_143bdf4f6;
            FUN_14838980a(lVar1,uVar5,&local_f8);
          }
        }
        uVar3 = (uint)uVar5 + 1;
        if ((int)uVar3 < (int)uVar7) {
          uVar3 = uVar7;
        }
        do {
          if (uVar3 - 1 == (int)uVar5) {
            uVar5 = (ulonglong)uVar3;
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x1d8) +
                                               (ulonglong)(uVar4 >> 9) * 8) +
                                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar5 != uVar7);
    }
    param_2 = (undefined8 *)*param_2;
    *param_2 = local_b8;
    FUN_147371fc4(param_2 + 1,&local_b0);
    local_68 = 0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_b0);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bc0880 FUN_143bc0880 body=1378 status=ok
// SIG undefined FUN_143bc0880(void)

longlong FUN_143bc0880(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_198 [44];
  uint local_16c;
  ulonglong local_168;
  ulonglong local_160;
  int local_154;
  undefined8 *local_150;
  longlong local_148;
  ulonglong local_140;
  undefined1 **local_138;
  code *local_130;
  undefined1 ***local_128;
  uint local_11c [3];
  undefined8 local_110;
  undefined4 local_108;
  code *local_100;
  code **local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_1 != 0) {
    uVar11 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_f0 = &DAT_100000002;
    lVar1 = *(longlong *)(param_1 + 0x98);
    local_130 = (code *)&local_98;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_f8 = &local_130;
    local_100 = FUN_143bdf546;
    local_150 = param_3;
    local_148 = param_1;
    FUN_143bac7da(param_2,lVar1,&local_100,0);
    local_160 = 1;
    iVar14 = 0;
    uVar3 = 0;
    if (local_70 != 0) {
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) {
        iVar14 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar14 = local_70 - 1;
        }
        uVar11 = 0;
        uVar8 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar8 = uVar11;
        }
        iVar14 = 0;
        do {
          if (uVar8 == uVar11) goto LAB_143bc0a26;
          iVar14 = iVar14 + 0x20;
          uVar3 = puVar5[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar11 = 0;
      }
      local_160 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = local_160 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar3 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar3) {
        uVar3 = local_70;
      }
    }
    if (uVar3 != local_70) {
      local_16c = 0xffffffff;
      local_168 = (ulonglong)local_70;
      do {
        uVar3 = *(uint *)(local_98 + (longlong)(int)uVar3 * 0xc);
        lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(uVar3 >> 9) * 8);
        uVar8 = (ulonglong)(uVar3 & 0x1ff);
        local_108 = *(undefined4 *)(lVar12 + 8 + uVar8 * 0xc);
        local_110 = *(undefined8 *)(lVar12 + uVar8 * 0xc);
        local_154 = iVar14;
        local_140 = uVar11;
        FUN_146c03f0e(lVar1,local_11c);
        lVar12 = 0;
        do {
          uVar3 = local_11c[lVar12];
          if (uVar3 == 0xffffffff) {
            if (param_4 == '\0') {
              uVar3 = *(uint *)((longlong)&local_110 + lVar12 * 4);
              uVar4 = *(uint *)(*(longlong *)
                                 (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) + 8 +
                               (ulonglong)((uVar3 & 0x1ff) << 4));
              lVar13 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(uVar4 >> 9) * 8);
              if (*(uint *)(lVar13 + (ulonglong)(uVar4 & 0x1ff) * 0xc) == uVar3) {
                uVar4 = uVar4 << 2;
              }
              else {
                uVar4 = (uVar4 * 4 -
                        (uint)(*(uint *)(lVar13 + (ulonglong)(uVar4 & 0x1ff) * 0xc + 4) == uVar3)) +
                        2;
              }
              local_130 = (code *)(ulonglong)(uVar4 << 0x1e | uVar4 >> 2);
              FUN_1483b983a(&local_e8,&local_138,&local_130,0);
            }
          }
          else {
            if ((int)uStack_90 != local_64) {
              puVar9 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar9 = local_60;
              }
              for (iVar14 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar3) * 4); iVar14 != -1;
                  iVar14 = *(int *)(local_98 + (longlong)iVar14 * 0xc + 4)) {
                if (*(uint *)(local_98 + (longlong)iVar14 * 0xc) == uVar3) goto LAB_143bc0c1b;
              }
            }
            local_130 = FUN_143bdf590;
            local_138 = &local_f0;
            local_128 = &local_138;
            FUN_14838980a(lVar1,*(undefined4 *)((longlong)&local_110 + lVar12 * 4),&local_130);
          }
LAB_143bc0c1b:
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        local_16c = local_16c & ~(uint)local_160;
        puVar5 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar5 = local_88;
        }
        iVar10 = (int)local_140;
        lVar12 = (longlong)iVar10;
        uVar3 = puVar5[lVar12] & local_16c;
        uVar11 = local_140;
        iVar14 = local_154;
        if (uVar3 == 0) {
          iVar6 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar6 = local_70 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar14 = local_154 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar10 < iVar6) {
            lVar13 = 0;
            do {
              uVar3 = puVar5[lVar12 + lVar13 + 1];
              if (uVar3 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar13 + 1);
                local_16c = 0xffffffff;
                goto LAB_143bc0d5b;
              }
              iVar14 = iVar14 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar7 - lVar12 != lVar13);
            local_16c = 0xffffffff;
            iVar10 = iVar7;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          uVar3 = local_70;
        }
        else {
LAB_143bc0d5b:
          local_160 = (ulonglong)(-uVar3 & uVar3);
          uVar8 = local_160 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar3 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)local_70 <= (int)uVar3) {
            uVar3 = local_70;
          }
        }
      } while (uVar3 != (uint)local_168);
    }
LAB_143bc0a26:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = local_150;
    uVar11 = uStack_90 >> 0x20;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if ((int)uVar11 != 0) {
      FUN_1447a08a2(&local_98,0);
    }
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      FUN_1446efbd8(local_88,0);
    }
    if (local_78 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)*puVar2;
    *puVar2 = local_f0;
    FUN_147371fc4(puVar2 + 1,&local_e8);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_e8);
    param_1 = local_148;
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc0de3 FUN_143bc0de3 body=1884 status=ok
// SIG undefined FUN_143bc0de3(void)

void FUN_143bc0de3(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  uint param_5,char param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  char local_129;
  uint local_128;
  uint local_124;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  code *local_d8;
  undefined8 **ppuStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar16 = 3;
  if ((int)param_5 < 3) {
    uVar16 = param_5;
  }
  local_124 = 1;
  if (1 < (int)uVar16) {
    local_124 = uVar16;
  }
  uVar13 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_120 = param_3;
  if (param_4 == '\x03') {
    local_a0 = &DAT_100000002;
    lVar4 = *(longlong *)(param_1 + 0x98);
    uVar16 = *(int *)(lVar4 + 0x1d0) * 0x200 + *(int *)(lVar4 + 0x1d4);
    if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x1d8) - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar16) {
        uVar13 = (ulonglong)uVar16;
      }
      do {
        uVar15 = uVar14;
        if ((uint)uVar13 == uVar15) goto LAB_143bc1090;
        uVar14 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x1d8))[uVar15 >> 9] +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar13 = (ulonglong)uVar15;
    }
LAB_143bc1090:
    if ((uint)uVar13 != uVar16) {
      local_124 = (1 < (int)param_5) + 1;
      local_128 = uVar16;
      do {
        uVar18 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (uVar13 >> 9) * 8) +
                  (ulonglong)(((uint)uVar13 & 0x1ff) << 4));
        if (param_6 == '\0') {
          local_a8 = DAT_14c8463c8;
          local_b8 = DAT_14c8463b8;
          uStack_b0 = DAT_14c8463c0;
        }
        else {
          FUN_146c13c78(lVar4,&local_b8,uVar13);
        }
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar18 >> 9 & 0x7fffff) * 8);
        local_c8 = *(undefined8 *)(lVar10 + 0x10 + (uVar18 & 0x1ff) * 0x18);
        puVar1 = (ulonglong *)(lVar10 + (uVar18 & 0x1ff) * 0x18);
        local_d8 = (code *)*puVar1;
        ppuStack_d0 = (undefined8 **)puVar1[1];
        bVar7 = (*(code *)*param_2)(param_2[1],&local_d8,&local_b8);
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar18 >> 0x29) * 8);
        uVar18 = uVar18 >> 0x20 & 0x1ff;
        local_e8 = *(undefined8 *)(lVar10 + 0x10 + uVar18 * 0x18);
        plVar2 = (longlong *)(lVar10 + uVar18 * 0x18);
        local_f8 = (undefined8 *)*plVar2;
        uStack_f0 = (undefined4)plVar2[1];
        uStack_ec = *(undefined4 *)((longlong)plVar2 + 0xc);
        bVar8 = (*(code *)*param_2)(param_2[1],&local_f8,&local_b8);
        if (local_124 <= (uint)bVar8 + (uint)bVar7) {
          local_f8 = &local_a0;
          ppuStack_d0 = &local_f8;
          local_d8 = FUN_143bc2c74;
          FUN_14838980a(lVar4,uVar13,&local_d8);
        }
        uVar16 = (uint)uVar13 + 1;
        if ((int)uVar16 < (int)local_128) {
          uVar16 = local_128;
        }
        do {
          if (uVar16 - 1 == (int)uVar13) {
            uVar13 = (ulonglong)uVar16;
            break;
          }
          uVar14 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x1d8) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar13 != local_128);
    }
  }
  else if (param_4 == '\0') {
    local_a0 = &DAT_100000001;
    lVar4 = *(longlong *)(param_1 + 0x98);
    uVar14 = *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24);
    uVar16 = 0;
    if ((uVar14 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
      uVar15 = 1;
      uVar11 = 1;
      if (1 < (int)uVar14) {
        uVar15 = uVar14;
      }
      do {
        uVar16 = uVar15;
        if (uVar15 == uVar11) break;
        uVar12 = uVar11 >> 9;
        uVar17 = uVar11 & 0x1ff;
        uVar16 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x28))[uVar12] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    if (uVar16 != uVar14) {
      do {
        if (param_6 == '\0') {
          local_a8 = DAT_14c8463c8;
          local_b8 = DAT_14c8463b8;
          uStack_b0 = DAT_14c8463c0;
        }
        else {
          local_138 = 1;
          FUN_146c393d4(&local_b8,lVar4,uVar16,1);
        }
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
        local_c8 = *(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
        puVar1 = (ulonglong *)(lVar10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
        local_d8 = (code *)*puVar1;
        ppuStack_d0 = (undefined8 **)puVar1[1];
        cVar6 = (*(code *)*param_2)(param_2[1],&local_d8,&local_b8);
        if (cVar6 != '\0') {
          local_d8 = (code *)(ulonglong)uVar16;
          FUN_1483b983a(&local_98,&local_f8,&local_d8,0);
        }
        uVar15 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar14) {
          uVar15 = uVar14;
        }
        do {
          uVar11 = uVar15;
          if (uVar15 - 1 == uVar16) break;
          uVar16 = uVar16 + 1;
          uVar11 = uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x28) +
                                               (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        uVar16 = uVar11;
      } while (uVar16 != uVar14);
    }
  }
  else {
    local_a0 = (undefined1 *)CONCAT44((param_4 != '\x01') + 1,4);
    lVar4 = *(longlong *)(param_1 + 0x98);
    uVar14 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
    uVar16 = 0;
    if ((uVar14 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
      uVar15 = 1;
      uVar11 = 1;
      if (1 < (int)uVar14) {
        uVar15 = uVar14;
      }
      do {
        uVar16 = uVar15;
        if (uVar15 == uVar11) break;
        uVar12 = uVar11 >> 9;
        uVar17 = uVar11 & 0x1ff;
        uVar16 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar12] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    local_129 = param_4;
    if (uVar16 != uVar14) {
      do {
        local_128 = uVar14;
        if (param_6 == '\0') {
          local_a8 = DAT_14c8463c8;
          local_b8 = DAT_14c8463b8;
          uStack_b0 = DAT_14c8463c0;
        }
        else {
          FUN_146c13dec(lVar4,&local_b8,uVar16);
        }
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
        uVar13 = (ulonglong)(uVar16 & 0x1ff);
        uVar14 = *(uint *)(lVar10 + uVar13 * 0xc);
        uVar15 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
        uVar11 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
        uVar13 = (ulonglong)uVar14 & 0x1ff;
        local_c8 = *(undefined8 *)(lVar10 + 0x10 + uVar13 * 0x18);
        puVar1 = (ulonglong *)(lVar10 + uVar13 * 0x18);
        local_d8 = (code *)*puVar1;
        ppuStack_d0 = (undefined8 **)puVar1[1];
        bVar7 = (*(code *)*param_2)(param_2[1],&local_d8,&local_b8);
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
        uVar13 = (ulonglong)uVar15 & 0x1ff;
        local_e8 = *(undefined8 *)(lVar10 + 0x10 + uVar13 * 0x18);
        plVar2 = (longlong *)(lVar10 + uVar13 * 0x18);
        local_f8 = (undefined8 *)*plVar2;
        uStack_f0 = (undefined4)plVar2[1];
        uStack_ec = *(undefined4 *)((longlong)plVar2 + 0xc);
        bVar8 = (*(code *)*param_2)(param_2[1],&local_f8,&local_b8);
        lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
        uVar13 = (ulonglong)uVar11 & 0x1ff;
        local_108 = *(undefined8 *)(lVar10 + 0x10 + uVar13 * 0x18);
        puVar3 = (undefined4 *)(lVar10 + uVar13 * 0x18);
        local_118 = *puVar3;
        uStack_114 = puVar3[1];
        uStack_110 = puVar3[2];
        uStack_10c = puVar3[3];
        bVar9 = (*(code *)*param_2)(param_2[1],&local_118,&local_b8);
        uVar15 = local_128;
        if (local_124 <= (uint)bVar9 + (uint)bVar8 + (uint)bVar7) {
          if (local_129 == '\x01') {
            local_d8 = (code *)(ulonglong)uVar16;
          }
          else {
            lVar10 = FUN_146bc96d4(lVar4,uVar16);
            local_d8 = (code *)((ulonglong)uVar16 | lVar10 << 0x20);
          }
          FUN_1483b983a(&local_98,&local_f8,&local_d8,0);
        }
        uVar14 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar15) {
          uVar14 = uVar15;
        }
        do {
          uVar11 = uVar14;
          if (uVar14 - 1 == uVar16) break;
          uVar16 = uVar16 + 1;
          uVar11 = uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x148) +
                                               (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        uVar16 = uVar11;
        uVar14 = local_128;
      } while (uVar16 != uVar15);
    }
  }
  puVar5 = (undefined8 *)*local_120;
  *puVar5 = local_a0;
  FUN_1484d24e8(puVar5 + 1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc1682 FUN_143bc1682 body=67 status=ok
// SIG undefined FUN_143bc1682(void)

void FUN_143bc1682(uint *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  if (((int)uVar1 < 0) ||
     (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  **(undefined1 **)(param_1 + 2) = bVar2;
  return;
}



// FUNCTION 143bc16c6 FUN_143bc16c6 body=170 status=ok
// SIG undefined FUN_143bc16c6(void)

void FUN_143bc16c6(undefined4 *param_1)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  longlong local_198 [2];
  undefined1 local_188 [360];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1483387d2(local_188);
  local_198[0] = 0;
  local_198[1] = 0;
  lVar1 = FUN_1485b9e20(local_198);
  *(undefined4 *)(lVar1 + 4) = param_1[1];
  FUN_14834e91a(local_188,local_198,*param_1,0x7fefffffffffffff);
  FUN_14834eb2e(local_188,*param_1,*(undefined8 *)(param_1 + 2),100000);
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  FUN_148338d34(local_188);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc1772 FUN_143bc1772 body=76 status=ok
// SIG undefined FUN_143bc1772(void)

void FUN_143bc1772(uint *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  if (((int)uVar1 < 0) ||
     (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  **(undefined1 **)(param_1 + 2) = bVar2;
  return;
}



// FUNCTION 143bc17be FUN_143bc17be body=107 status=ok
// SIG undefined FUN_143bc17be(void)

void FUN_143bc17be(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_1 + 2);
  local_48 = *(undefined4 *)(puVar1 + 1);
  uStack_44 = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_40 = *(undefined4 *)(puVar1 + 2);
  uStack_3c = *(undefined4 *)((longlong)puVar1 + 0x14);
  FUN_146c148ec(param_2,&local_30,*param_1,*puVar1);
  puVar2 = *(undefined4 **)(param_1 + 4);
  *(undefined8 *)(puVar2 + 4) = local_20;
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc190a FUN_143bc190a body=1240 status=ok
// SIG undefined FUN_143bc190a(void)

void FUN_143bc190a(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_b8 [36];
  undefined4 local_94 [3];
  double local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_5 + 4) == '\x01') {
    local_78 = param_4[2];
    local_88 = *param_4;
    uStack_80 = param_4[1];
    dStack_70 = (double)*param_5;
    local_68 = (double)param_5[1];
    dStack_60 = (double)param_5[2];
    local_58 = (double)param_5[3];
    FUN_146c3ca28(param_1);
  }
  else if (0.0 < param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]) {
    FUN_146c3c4e4(param_1,param_4);
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  dStack_70 = param_2[3];
  local_68 = param_2[4];
  dStack_60 = param_2[5];
  local_58 = param_2[6];
  local_50 = *(undefined4 *)(param_2 + 8);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_48 = *(undefined4 *)(param_2 + 9);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_40 = param_2[10];
  FUN_146c3cd49(param_1,&local_88,1);
  if ((char)param_3 == '\0') {
    uVar1 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar9 = 0;
    if ((uVar1 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar4 = 1;
      if (1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      do {
        uVar5 = uVar4;
        uVar9 = uVar3;
        if (uVar3 == uVar5) break;
        uVar4 = uVar5 + 1;
        uVar9 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5 >> 9] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143bc1a3d:
    uVar3 = uVar9;
    if (uVar3 != uVar1) {
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar3 >> 9) * 8) +
         (ulonglong)(uVar3 & 0x1ff) * 4) = 0;
        iVar10 = *(int *)(param_1 + 0x1b0);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        *(int *)(param_1 + 0x1b0) = iVar10;
      }
      uVar4 = uVar3 + 1;
      if ((int)(uVar3 + 1) < (int)uVar1) {
        uVar4 = uVar1;
      }
      do {
        uVar9 = uVar4;
        if (uVar4 - 1 == uVar3) break;
        uVar3 = uVar3 + 1;
        uVar9 = uVar3;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar3 >> 9) * 8) +
                                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143bc1a3d;
    }
  }
  if (((uint)param_3 >> 8 & 1) != 0) {
    FUN_146c0aee0(param_1,1);
    lVar2 = *(longlong *)(param_1 + 0x208);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x38) < 1) {
        lVar2 = 0;
      }
      else {
        lVar2 = **(longlong **)(lVar2 + 0x30);
      }
      uVar1 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
      uVar9 = 0;
      if ((uVar1 != 0) &&
         (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x10) - 1U))) {
        uVar3 = 1;
        uVar4 = 1;
        if (1 < (int)uVar1) {
          uVar3 = uVar1;
        }
        do {
          uVar5 = uVar4;
          uVar9 = uVar3;
          if (uVar3 == uVar5) break;
          uVar4 = uVar5 + 1;
          uVar9 = uVar5;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x10))[uVar5 >> 9] +
                                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      }
joined_r0x000143bc1b73:
      uVar3 = uVar9;
      if (uVar3 != uVar1) {
        lVar6 = *(longlong *)(lVar2 + 0x48);
        lVar8 = 0;
        do {
          uVar9 = uVar3 * 3 + (int)lVar8;
          local_94[lVar8] =
               *(undefined4 *)
                (*(longlong *)(lVar6 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4
                );
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        local_88 = (double)(CONCAT44(local_94[1],local_94[0]) ^ 0x8000000080000000);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        uStack_80 = (double)(CONCAT44(uStack_80._4_4_,local_94[2]) ^ 0x80000000);
        lVar6 = 0;
        do {
          uVar9 = uVar3 * 3 + (int)lVar6;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar9 >> 9) * 8) +
           (ulonglong)(uVar9 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_88 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        uVar4 = uVar3 + 1;
        if ((int)(uVar3 + 1) < (int)uVar1) {
          uVar4 = uVar1;
        }
        do {
          uVar9 = uVar4;
          if (uVar4 - 1 == uVar3) break;
          uVar3 = uVar3 + 1;
          uVar9 = uVar3;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar2 + 0x10) +
                                               (ulonglong)(uVar3 >> 9) * 8) +
                                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
        goto joined_r0x000143bc1b73;
      }
    }
  }
  iVar10 = (int)((ulonglong)param_3 >> 0x20);
  if (0 < iVar10) {
    FUN_14582ed12(param_1);
    FUN_14582ed9a();
    uVar1 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar9 = 0;
    if ((uVar1 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar4 = 1;
      if (1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      do {
        uVar9 = uVar3;
        if (uVar3 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar9 != uVar1) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x48);
      do {
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
                (ulonglong)(uVar9 & 0x1ff) * 4) = iVar10;
        uVar3 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar1) {
          uVar3 = uVar1;
        }
        do {
          uVar4 = uVar3;
          if (uVar3 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar1);
    }
  }
  if (*(char *)(param_5 + 4) == '\x01') {
    *(undefined1 *)(param_5 + 4) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc1de4 FUN_143bc1de4 body=168 status=ok
// SIG undefined FUN_143bc1de4(void)

void FUN_143bc1de4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c00e98(param_2,*(undefined8 *)*param_1);
  puVar1 = (undefined8 *)param_1[4];
  local_28 = *(char *)(puVar1 + 4);
  if (local_28 == '\x01') {
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    local_38 = puVar1[2];
    uStack_30 = puVar1[3];
  }
  puVar2 = (undefined4 *)param_1[3];
  local_58 = *(undefined8 *)(puVar2 + 4);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_78 = &local_48;
  FUN_143bc190a(param_2,param_1[1],*(undefined8 *)param_1[2]);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc1e8e FUN_143bc1e8e body=575 status=ok
// SIG undefined FUN_143bc1e8e(void)

void FUN_143bc1e8e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined1 local_370;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_318 [2];
  undefined8 local_308;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_248;
  undefined4 local_240;
  undefined2 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2ac = 0xffffffff00000080;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  local_268 = 0;
  local_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_25c = 0xffffffff00000080;
  local_254 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0x101;
  local_210 = 0;
  local_208 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_204 = 0xffffffff00000080;
  local_1fc = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1b4 = 0xffffffff00000080;
  local_1ac = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0x101;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e7 = 1;
  local_e8 = 1;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_3f = 1;
  local_40 = 1;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_378 = local_318;
  local_318[0] = 0;
  local_308 = 0;
  local_358 = 0;
  local_348 = 0;
  local_370 = 0;
  local_360 = param_2;
  FUN_146bcbbdc(&local_360,*param_1,&local_2d8);
  FUN_146bfdcfe(&local_2d8);
  if ((local_10 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc20ce FUN_143bc20ce body=881 status=ok
// SIG undefined FUN_143bc20ce(void)

void FUN_143bc20ce(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_a8 [44];
  undefined4 local_7c [3];
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0.0 < (double)param_1[4] * (double)param_1[4] +
            (double)param_1[2] * (double)param_1[2] + (double)param_1[3] * (double)param_1[3]) {
    FUN_146c3c4e4(param_2,param_1 + 2);
  }
  puVar1 = (ulonglong *)*param_1;
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_60 = puVar1[2];
  uStack_58 = puVar1[3];
  local_50 = puVar1[4];
  uStack_48 = puVar1[5];
  local_40 = puVar1[6];
  local_38 = (undefined4)puVar1[8];
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_30 = (undefined4)puVar1[9];
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_28 = puVar1[10];
  FUN_146c3cd49(param_2,&local_70,1);
  pcVar6 = (char *)param_1[1];
  if (*pcVar6 == '\0') {
    uVar2 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar4 = 0;
    if ((uVar2 != 0) &&
       (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar5 = 1;
      uVar8 = 1;
      if (1 < (int)uVar2) {
        uVar5 = uVar2;
      }
      do {
        uVar4 = uVar5;
        if (uVar5 == uVar8) break;
        uVar10 = uVar8 >> 9;
        uVar12 = uVar8 & 0x1ff;
        uVar4 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10] +
                                           (ulonglong)uVar12 * 2) - 1U));
    }
    if (uVar4 != uVar2) {
      do {
        if (*(char *)(param_2 + 0x1a8) == '\x01') {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x198) + (ulonglong)(uVar4 >> 9) * 8) +
           (ulonglong)(uVar4 & 0x1ff) * 4) = 0;
          iVar7 = *(int *)(param_2 + 0x1b0);
          if (iVar7 < 2) {
            iVar7 = 1;
          }
          *(int *)(param_2 + 0x1b0) = iVar7;
        }
        uVar5 = uVar4 + 1;
        if ((int)(uVar4 + 1) < (int)uVar2) {
          uVar5 = uVar2;
        }
        do {
          uVar8 = uVar5;
          if (uVar5 - 1 == uVar4) break;
          uVar4 = uVar4 + 1;
          uVar8 = uVar4;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar4 >> 9) * 8) +
                                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
        uVar4 = uVar8;
      } while (uVar4 != uVar2);
      pcVar6 = (char *)param_1[1];
    }
  }
  if (pcVar6[1] == '\x01') {
    FUN_146c0aee0(param_2,CONCAT71((int7)((ulonglong)pcVar6 >> 8),1));
    lVar3 = *(longlong *)(param_2 + 0x208);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x38) < 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = **(longlong **)(lVar3 + 0x30);
      }
      uVar2 = *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc);
      uVar4 = 0;
      if ((uVar2 != 0) &&
         (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x10) - 1U))) {
        uVar5 = 1;
        uVar8 = 1;
        if (1 < (int)uVar2) {
          uVar5 = uVar2;
        }
        do {
          uVar10 = uVar8;
          uVar4 = uVar5;
          if (uVar5 == uVar10) break;
          uVar8 = uVar10 + 1;
          uVar4 = uVar10;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x10))[uVar10 >> 9] +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      }
joined_r0x000143bc231d:
      uVar5 = uVar4;
      if (uVar5 != uVar2) {
        lVar9 = *(longlong *)(lVar3 + 0x48);
        lVar11 = 0;
        do {
          uVar4 = uVar5 * 3 + (int)lVar11;
          local_7c[lVar11] =
               *(undefined4 *)
                (*(longlong *)(lVar9 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
                );
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        local_70 = CONCAT44(local_7c[1],local_7c[0]) ^ 0x8000000080000000;
        uStack_68._4_4_ = (undefined4)(uStack_68 >> 0x20);
        uStack_68 = CONCAT44(uStack_68._4_4_,local_7c[2]) ^ 0x80000000;
        lVar9 = 0;
        do {
          uVar4 = uVar5 * 3 + (int)lVar9;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
           (ulonglong)(uVar4 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_70 + lVar9 * 4);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        uVar8 = uVar5 + 1;
        if ((int)(uVar5 + 1) < (int)uVar2) {
          uVar8 = uVar2;
        }
        do {
          uVar4 = uVar8;
          if (uVar8 - 1 == uVar5) break;
          uVar5 = uVar5 + 1;
          uVar4 = uVar5;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar3 + 0x10) +
                                               (ulonglong)(uVar5 >> 9) * 8) +
                                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
        goto joined_r0x000143bc231d;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc2440 FUN_143bc2440 body=57 status=ok
// SIG undefined FUN_143bc2440(void)

void FUN_143bc2440(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(param_2,*param_1,1,1,1,1);
  FUN_143bc20ce(param_1[1],param_2);
  return;
}



// FUNCTION 143bc247a FUN_143bc247a body=575 status=ok
// SIG undefined FUN_143bc247a(void)

void FUN_143bc247a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined1 local_370;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_318 [2];
  undefined8 local_308;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_248;
  undefined4 local_240;
  undefined2 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2ac = 0xffffffff00000080;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  local_268 = 0;
  local_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_25c = 0xffffffff00000080;
  local_254 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0x101;
  local_210 = 0;
  local_208 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_204 = 0xffffffff00000080;
  local_1fc = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1b4 = 0xffffffff00000080;
  local_1ac = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0x101;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e7 = 1;
  local_e8 = 1;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_3f = 1;
  local_40 = 1;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_378 = local_318;
  local_318[0] = 0;
  local_308 = 0;
  local_358 = 0;
  local_348 = 0;
  local_370 = 0;
  local_360 = param_2;
  FUN_146bcbbdc(&local_360,*param_1,&local_2d8);
  FUN_146bfdcfe(&local_2d8);
  if ((local_10 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc26ba FUN_143bc26ba body=273 status=ok
// SIG undefined FUN_143bc26ba(void)

void FUN_143bc26ba(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c00e98(param_2,*(undefined8 *)*param_1);
  local_78 = local_50;
  local_30 = 0;
  puVar3 = (undefined4 *)param_1[3];
  local_68 = *puVar3;
  uStack_64 = puVar3[1];
  uStack_60 = puVar3[2];
  uStack_5c = puVar3[3];
  local_58 = *(undefined8 *)(puVar3 + 4);
  FUN_143bc190a(param_2,param_1[1],*(undefined8 *)param_1[2]);
  plVar5 = (longlong *)param_1[4];
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = (int)plVar5[1];
  if (iVar2 < iVar1) {
    *(int *)(plVar5 + 1) = iVar1;
    if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_1446f48e2(plVar5);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar5),0,(longlong)(iVar1 - iVar2) << 2);
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      *(int *)(plVar5 + 1) = iVar1;
      FUN_14479f406(plVar5);
    }
  }
  plVar5 = (longlong *)param_1[4];
  if (0 < (int)plVar5[1]) {
    lVar4 = 0;
    do {
      *(int *)(*plVar5 + lVar4 * 4) = (int)lVar4;
      lVar4 = lVar4 + 1;
      plVar5 = (longlong *)param_1[4];
    } while (lVar4 < (int)plVar5[1]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc27ce FUN_143bc27ce body=1034 status=ok
// SIG undefined FUN_143bc27ce(void)

void FUN_143bc27ce(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_3b8 [32];
  undefined8 *local_398;
  undefined1 local_390;
  undefined4 local_384;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 local_338 [2];
  undefined8 local_328;
  longlong local_2f8 [2];
  uint local_2e8 [4];
  uint *local_2d8;
  int local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_258;
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
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar3 = 0;
  local_2d8 = (uint *)0x0;
  local_2d0 = 0;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0x101;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1cc = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0x101;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_107 = 1;
  local_108 = 1;
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x101;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_398 = local_338;
  local_338[0] = 0;
  local_328 = 0;
  local_378 = 0;
  local_368 = 0;
  local_390 = 0;
  local_380 = param_2;
  FUN_146bcbbdc(&local_380,*param_1);
  local_384 = 0xffffffff;
  FUN_1448156a8(param_1[1],&local_384,*(undefined4 *)(*(longlong *)param_1[2] + 0x10));
  uVar4 = 1;
  iVar2 = 0;
  iVar6 = 0;
  if (local_2d0 != 0) {
    puVar5 = local_2d8;
    if (local_2d8 == (uint *)0x0) {
      puVar5 = local_2e8;
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar6 = local_2d0 + 0x1e;
      if (-1 < local_2d0 + -1) {
        iVar6 = local_2d0 + -1;
      }
      uVar3 = 0;
      uVar4 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar4 = uVar3;
      }
      iVar2 = 0;
      do {
        if (uVar4 == uVar3) goto LAB_143bc2aa2;
        iVar2 = iVar2 + 0x20;
        uVar7 = puVar5[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar2 = 0;
    }
    uVar4 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar2 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (local_2d0 <= iVar6) {
      iVar6 = local_2d0;
    }
  }
  if (iVar6 != local_2d0) {
    uVar7 = 0xffffffff;
    do {
      *(undefined4 *)
       (*(longlong *)param_1[1] + (longlong)*(int *)(local_2f8[0] + (longlong)iVar6 * 0x10) * 4) =
           *(undefined4 *)(local_2f8[0] + 4 + (longlong)iVar6 * 0x10);
      uVar7 = ~(uint)uVar4 & uVar7;
      puVar5 = local_2d8;
      if (local_2d8 == (uint *)0x0) {
        puVar5 = local_2e8;
      }
      iVar6 = (int)uVar3;
      lVar11 = (longlong)iVar6;
      uVar8 = puVar5[lVar11] & uVar7;
      if (uVar8 == 0) {
        iVar9 = local_2d0 + 0x1e;
        if (-1 < local_2d0 + -1) {
          iVar9 = local_2d0 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar2 = iVar2 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar12 = 0;
          do {
            uVar8 = puVar5[lVar11 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar3 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar7 = 0xffffffff;
              goto LAB_143bc2b87;
            }
            iVar2 = iVar2 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar10 - lVar11 != lVar12);
          uVar7 = 0xffffffff;
          iVar6 = iVar10;
        }
        uVar3 = (ulonglong)(iVar6 + 1);
        iVar6 = local_2d0;
      }
      else {
LAB_143bc2b87:
        uVar4 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar2 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (local_2d0 <= iVar6) {
          iVar6 = local_2d0;
        }
      }
    } while (iVar6 != local_2d0);
  }
LAB_143bc2aa2:
  FUN_146bfdcfe(local_2f8);
  if ((local_30 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc2c74 FUN_143bc2c74 body=79 status=ok
// SIG undefined FUN_143bc2c74(void)

void FUN_143bc2c74(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc2cc8 FUN_143bc2cc8 body=262 status=ok
// SIG undefined FUN_143bc2cc8(void)

void FUN_143bc2cc8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12(param_2);
    lVar1 = *(longlong *)(param_2 + 0x208);
  }
  lVar1 = FUN_146bcdc68(lVar1,*(undefined8 *)*param_1);
  *(bool *)param_1[1] = lVar1 != 0;
  if (lVar1 == 0) {
    if ((*(byte *)param_1[2] & 1) != 0) goto LAB_143bc2d43;
  }
  else {
    if ((*(byte *)param_1[2] & 1) == 0) goto LAB_143bc2d20;
LAB_143bc2d43:
    if (*(char *)param_1[1] == '\x01') {
      FUN_146c1a5d2(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)*param_1);
    }
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_149f36420;
  puVar2[2] = param_2;
  FUN_146be9ba2(puVar2 + 3);
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_30 = 0xc00000000;
  FUN_146bea236(puVar2);
  FUN_146c18154(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)*param_1,puVar2);
LAB_143bc2d20:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc2dd0 FUN_143bc2dd0 body=124 status=ok
// SIG undefined FUN_143bc2dd0(void)

void FUN_143bc2dd0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x208) != 0) {
    lVar1 = FUN_146bcdc68(*(longlong *)(param_2 + 0x208),*(undefined8 *)*param_1);
    lVar2 = FUN_146bcdc68(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)param_1[1]);
    if (lVar2 != 0 && lVar1 != 0) {
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      FUN_146bfd628(lVar2 + 0x20,lVar1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 143bc2e4c FUN_143bc2e4c body=418 status=ok
// SIG undefined FUN_143bc2e4c(void)

undefined8 FUN_143bc2e4c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [48];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  
  local_40 = (undefined8 *)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  uVar6 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  puVar1 = local_40;
  uVar9 = 0;
  if ((uVar6 != 0) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x28), uVar9 = 0,
     0xfffd < (ushort)(*(short *)*puVar1 - 1U))) {
    uVar8 = 1;
    uVar2 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    do {
      uVar9 = uVar8;
      if (uVar8 == uVar2) break;
      uVar4 = uVar2 >> 9;
      uVar7 = uVar2 & 0x1ff;
      uVar9 = uVar2;
      uVar2 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)(puVar1[uVar4] + (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar9 != uVar6) {
    do {
      local_50 = (undefined1 *)0x0;
      local_48 = 0xc00000000;
      FUN_146bea50a(local_80,(ulonglong)((uVar9 & 0x1ff) << 6) +
                             *(longlong *)
                              (*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar9 >> 9) * 8));
      if (0 < (longlong)(int)local_48) {
        lVar3 = 0;
        do {
          puVar5 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar5 = local_80;
          }
          dVar11 = (double)*(int *)*param_1;
          uVar10 = -(ulonglong)((double)*(ushort *)(puVar5 + lVar3 * 4) <= dVar11);
          *(int *)*param_1 =
               (int)(double)(uVar10 & (ulonglong)dVar11 |
                            ~uVar10 & (ulonglong)(double)*(ushort *)(puVar5 + lVar3 * 4));
          lVar3 = lVar3 + 1;
        } while ((int)local_48 != lVar3);
      }
      if (local_50 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      puVar1 = *(undefined8 **)(param_2 + 0x28);
      uVar8 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar6) {
        uVar8 = uVar6;
      }
      do {
        uVar2 = uVar8;
        if (uVar8 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar2 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(puVar1[uVar9 >> 9] + (ulonglong)(uVar9 & 0x1ff) * 2) -
                                1U));
      uVar9 = uVar2;
    } while (uVar9 != uVar6);
  }
  if (((ulonglong)local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// FUNCTION 143bc2ff0 FUN_143bc2ff0 body=362 status=ok
// SIG undefined FUN_143bc2ff0(void)

undefined8 FUN_143bc2ff0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [48];
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)*param_1;
  if ((-1 < (int)uVar3) &&
     ((int)uVar3 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_70 = (undefined1 *)0x0;
      local_68 = 0xc00000000;
      FUN_146bea50a(local_a0,(ulonglong)((uVar3 & 0x1ff) << 6) +
                             *(longlong *)
                              (*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar3 >> 9) * 8));
      lVar8 = (longlong)(int)local_68;
      FUN_148587446(param_1[1],local_68 & 0xffffffff);
      if (0 < lVar8) {
        lVar9 = 0;
        do {
          puVar7 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar7 = local_a0;
          }
          uVar1 = *(ushort *)(puVar7 + lVar9 * 4 + 2);
          uVar2 = *(ushort *)(puVar7 + lVar9 * 4);
          plVar5 = (longlong *)param_1[1];
          iVar4 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
            FUN_1485bf27e(plVar5,iVar4);
          }
          lVar6 = *plVar5;
          *(uint *)(lVar6 + (longlong)iVar4 * 8) = (uint)uVar2;
          *(float *)(lVar6 + 4 + (longlong)iVar4 * 8) = (float)uVar1 / 65535.0;
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
      }
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_1[1] >> 8),0 < *(int *)(param_1[1] + 8));
}



// FUNCTION 143bc315c FUN_143bc315c body=288 status=ok
// SIG undefined FUN_143bc315c(void)

undefined4 * FUN_143bc315c(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  uVar1 = *(uint *)*param_2;
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 < *(int *)(param_3 + 0x20) * 0x200 + *(int *)(param_3 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    *(undefined1 *)param_2[1] = 1;
    local_28 = (undefined1 *)0x0;
    local_20 = 0xc00000000;
    FUN_146bea50a(local_58);
    if ((longlong)(int)local_20 < 1) {
      uVar4 = 0;
    }
    else {
      puVar3 = local_58;
      if (local_28 != (undefined1 *)0x0) {
        puVar3 = local_28;
      }
      lVar2 = 0;
      fVar5 = 0.0;
      uVar4 = 0;
      do {
        if (fVar5 < (float)*(ushort *)(puVar3 + lVar2 * 4 + 2) / 65535.0) {
          uVar4 = *(undefined4 *)(puVar3 + lVar2 * 4);
          fVar5 = (float)*(ushort *)(puVar3 + lVar2 * 4 + 2) / 65535.0;
        }
        lVar2 = lVar2 + 1;
      } while ((int)local_20 != lVar2);
    }
    *param_1 = uVar4;
    if (local_28 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bc327e FUN_143bc327e body=747 status=ok
// SIG undefined FUN_143bc327e(void)

undefined8 FUN_143bc327e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_148 [40];
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined4 local_f0;
  wchar_t **local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar8 = *(uint *)*param_1;
  if (((int)uVar8 < 0) ||
     (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar8)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar8 >> 9) * 8) +
                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iVar1 = *(int *)(param_1[1] + 8);
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      if (0 < (longlong)iVar1) {
        lVar6 = 0;
        local_120 = param_3;
        do {
          lVar7 = *(longlong *)param_1[1];
          uVar8 = *(uint *)(lVar7 + lVar6 * 8);
          if ((int)uVar8 < 0) {
            local_e0 = L"SetVertexBoneWeights_InvalidInput";
            local_d8 = 0x21;
            FUN_1446e940c(&local_118,&local_e0);
            local_e0 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
            local_d8 = 0x2e;
            FUN_1446e940c(&local_e8,&local_e0);
            local_e0 = 
            L"SetVertexBoneWeights: Invalid bone index provided; falling back to 0 as bone index.";
            local_d8 = 0x53;
            FUN_140208c1e(&local_f8,&local_e8,&local_118,&local_e0);
            FUN_143ba9449(*(undefined8 *)param_1[2],2,&local_f8);
            if (local_f8 != (longlong *)0x0) {
              (**(code **)(*local_f8 + 0x10))();
            }
            lVar7 = *(longlong *)param_1[1];
            uVar8 = *(uint *)(lVar7 + lVar6 * 8);
          }
          uVar2 = uStack_100;
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          fVar9 = *(float *)(lVar7 + 4 + lVar6 * 8);
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          lVar7 = (longlong)(int)uStack_100;
          uVar4 = (int)uStack_100 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
          if (uStack_100._4_4_ < uVar4) {
            FUN_146faa9c8(&local_108,uVar2 & 0xffffffff);
          }
          *(uint *)((longlong)local_108 + lVar7 * 4) =
               uVar8 & 0xffff | (int)(fVar9 * 65535.0 + 0.5) << 0x10;
          lVar6 = lVar6 + 1;
        } while (iVar1 != lVar6);
        param_3 = local_120;
        uVar3 = (int)uStack_100;
      }
      local_118 = 2;
      uStack_114 = 0xc;
      uStack_110 = 1;
      uStack_10c = 0x100;
      local_b0 = 0;
      local_a8 = 0xc00000000;
      local_f8 = local_108;
      local_f0 = uVar3;
      local_e8 = &local_e0;
      FUN_146fa976c();
      FUN_146bea50a((ulonglong)((*(uint *)*param_1 & 0x1ff) << 6) +
                    *(longlong *)
                     (*(longlong *)(param_3 + 0x20) + (ulonglong)(*(uint *)*param_1 >> 9) * 8),
                    &local_e0);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = 1;
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143bc356a FUN_143bc356a body=245 status=ok
// SIG undefined FUN_143bc356a(void)

undefined8 FUN_143bc356a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar6 = 0;
  if ((uVar2 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar2) {
      uVar4 = uVar2;
    }
    do {
      uVar6 = uVar4;
      if (uVar4 == uVar5) break;
      uVar1 = uVar5 >> 9;
      uVar3 = uVar5 & 0x1ff;
      uVar6 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar1] +
                                         (ulonglong)uVar3 * 2) - 1U));
  }
  do {
    if (uVar6 == uVar2) {
      return 1;
    }
    FUN_146bea50a((ulonglong)((uVar6 & 0x1ff) << 6) +
                  *(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar6 >> 9) * 8),
                  *param_1);
    uVar4 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar5 = uVar6;
    do {
      uVar6 = uVar4;
      if (uVar4 - 1 == uVar5) break;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x28) +
                                           (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bc3660 FUN_143bc3660 body=3565 status=ok
// SIG undefined FUN_143bc3660(void)

void FUN_143bc3660(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  wchar_t **ppwVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auStack_208 [44];
  uint local_1dc;
  int *local_1d8;
  uint local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  int *local_1b8;
  longlong local_1b0;
  int *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined8 *local_190;
  int *local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  wchar_t *local_160 [2];
  wchar_t **local_150;
  longlong *local_148;
  wchar_t **local_140 [2];
  longlong local_130;
  int *local_128;
  undefined8 uStack_120;
  wchar_t **local_118;
  longlong *plStack_110;
  wchar_t **local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  wchar_t **local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t **local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((*(longlong *)(param_2 + 0x208) == 0) ||
      (lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xc0), lVar8 == 0)) ||
     (*(int *)(lVar8 + 0x20) == 0)) {
    local_a8 = L"PruneBoneWeights_NoBones";
    uStack_a0 = 0x18;
    FUN_1446e940c(&local_108,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    uStack_a0 = 0x2e;
    FUN_1446e940c(&local_118,&local_a8);
    local_a8 = L"Target mesh has no bone attribute";
    uStack_a0 = 0x21;
    FUN_140208c1e(&local_e8,&local_118,&local_108,&local_a8);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_e8);
    if (local_e8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
  }
  else {
    cVar4 = FUN_143bc444e(param_2,*(undefined8 *)*param_1);
    if (cVar4 != '\0') {
      lVar8 = *(longlong *)(param_2 + 0x208);
      lVar30 = *(longlong *)(lVar8 + 0xc0);
      local_1c0 = *(longlong *)(lVar8 + 200);
      local_128 = (int *)0x0;
      uStack_120 = 0;
      lVar11 = (longlong)(int)((longlong *)param_1[1])[1];
      local_1c8 = param_2;
      if (lVar11 != 0) {
        plVar17 = *(longlong **)param_1[1];
        plVar3 = plVar17 + lVar11;
        do {
          uVar13 = uStack_120;
          local_130 = *plVar17;
          lVar8 = (longlong)*(int *)(lVar30 + 0x20);
          if (lVar8 != 0) {
            lVar8 = lVar8 << 3;
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar30 + 0x18) + lVar11 * 8) == local_130) {
                iVar28 = (int)lVar11;
                if (iVar28 < 1) {
                  if (*(char *)(param_1[2] + 1) != '\0') goto LAB_143bc37a3;
                  if (iVar28 != 0) goto LAB_143bc4097;
                  local_a8 = L"PruneBoneWeights_RootBoneInvalid";
                  uStack_a0 = 0x20;
                  FUN_1446e940c(&local_108,&local_a8);
                  local_a8 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
                  uStack_a0 = 0x2e;
                  FUN_1446e940c(&local_118,&local_a8);
                  local_a8 = L"Pruning the root bone is not allowed";
                  uStack_a0 = 0x24;
                  FUN_140208c1e(&local_e8,&local_118,&local_108,&local_a8);
                  FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_e8);
                  local_160[0] = local_e8;
                  goto LAB_143bc4263;
                }
                lVar8 = (longlong)(int)uStack_120;
                uVar22 = (int)uStack_120 + 1;
                uStack_120 = CONCAT44(uStack_120._4_4_,uVar22);
                if (uStack_120._4_4_ < uVar22) {
                  FUN_1446f48e2(&local_128,uVar13 & 0xffffffff);
                }
                local_128[lVar8] = iVar28;
                goto LAB_143bc37a3;
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          if (*(char *)(param_1[2] + 1) == '\0') {
LAB_143bc4097:
            FUN_145715fae(&local_f8,&local_130);
            local_a8 = L"PruneBoneWeights_InvalidBone";
            uStack_a0 = 0x1c;
            FUN_1446e940c(local_164,&local_a8);
            local_a8 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
            uStack_a0 = 0x2e;
            FUN_1446e940c(local_168,&local_a8);
            local_a8 = L"Invalid bone \'{0}\'";
            uStack_a0 = 0x12;
            FUN_140208c1e(local_160,local_168,local_164,&local_a8);
            FUN_14023409e(&local_150,local_160,1);
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
            FUN_14023423e(&local_98,&local_f8);
            puStack_100 = &local_88;
            local_108 = &local_a8;
            FUN_14010d304(&local_e8);
            local_118 = local_150;
            plStack_110 = local_148;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_148 + 1) = (int)local_148[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_140,&local_118,&local_e8);
            FUN_14007f2db(local_e8,uStack_e0 & 0xffffffff);
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (longlong *)0x0) {
              (**(code **)(*local_98 + 0x10))();
            }
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_148 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar9 = (int *)((longlong)local_148 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*local_148 + 0x10))(local_148);
                }
              }
            }
            plVar3 = (longlong *)CONCAT44(local_f8._4_4_,CONCAT22(local_f8._2_2_,(ushort)local_f8));
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
            }
            FUN_143ba90d7(*(undefined8 *)*param_1,2,local_140);
            goto LAB_143bc424d;
          }
LAB_143bc37a3:
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar3);
        lVar8 = *(longlong *)(local_1c8 + 0x208);
      }
      lVar30 = local_1c0;
      local_1b0 = FUN_146bcdc68(lVar8);
      if (local_1b0 == 0) {
        local_130 = *(longlong *)param_1[3];
        FUN_145715fae(&local_f8);
        local_a8 = L"PruneBoneWeights_UnknownProfile";
        uStack_a0 = 0x1f;
        FUN_1446e940c(local_164,&local_a8);
        local_a8 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
        uStack_a0 = 0x2e;
        FUN_1446e940c(local_168,&local_a8);
        local_a8 = L"Unknown skin weight profile \'{0}\'";
        uStack_a0 = 0x21;
        FUN_140208c1e(local_160,local_168,local_164,&local_a8);
        FUN_14023409e(&local_150,local_160,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(&local_98,&local_f8);
        puStack_100 = &local_88;
        local_108 = &local_a8;
        FUN_14010d304(&local_e8);
        local_118 = local_150;
        plStack_110 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_148 + 1) = (int)local_148[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_140,&local_118,&local_e8);
        FUN_14007f2db(local_e8,uStack_e0 & 0xffffffff);
        if (local_e8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))();
        }
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_148 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar9 = (int *)((longlong)local_148 + 0xc);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)(*local_148 + 0x10))(local_148);
            }
          }
        }
        plVar3 = (longlong *)CONCAT44(local_f8._4_4_,CONCAT22(local_f8._2_2_,(ushort)local_f8));
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        FUN_143ba9449(*(undefined8 *)*param_1,2,local_140);
LAB_143bc424d:
        if (local_140[0] != (wchar_t **)0x0) {
          (**(code **)(*local_140[0] + 8))();
        }
LAB_143bc4263:
        if (local_160[0] != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_160[0] + 0x10))();
        }
      }
      else {
        uVar13 = (ulonglong)(int)uStack_120;
        if (0 < (longlong)uVar13) {
          uVar5 = 0;
          do {
            uVar18 = uVar5 | 1;
            if (uVar18 < uVar13) {
              iVar28 = local_128[uVar5];
              uVar22 = 0xffffffff;
              iVar7 = local_128[uVar18];
              do {
                iVar7 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar7 * 4);
                uVar22 = uVar22 + 1;
              } while (iVar7 != -1);
              uVar25 = 0xffffffff;
              iVar7 = iVar28;
              do {
                iVar7 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar7 * 4);
                uVar25 = uVar25 + 1;
              } while (iVar7 != -1);
              if (uVar25 < uVar22) {
                local_128[uVar5] = local_128[uVar18];
                local_128[uVar18] = iVar28;
              }
            }
            uVar5 = uVar5 + 2;
          } while (uVar5 < uVar13);
          local_1a8 = local_128;
          if (2 < (int)uStack_120) {
            local_188 = local_128 + 1;
            uVar5 = 2;
            do {
              local_1a0 = uVar5;
              iVar28 = (int)local_1a0;
              local_1cc = iVar28 * 2;
              local_170 = (longlong)(int)local_1cc;
              local_178 = local_170 * 4;
              lVar8 = 0;
              local_1b8 = local_188;
              do {
                local_198 = lVar8;
                local_1dc = (int)uStack_120 - (int)local_198;
                if ((int)local_1cc <= (int)local_1dc) {
                  local_1dc = local_1cc;
                }
                if (iVar28 < (int)local_1dc && 0 < iVar28) {
                  local_1d8 = local_128 + local_198;
                  iVar7 = 0;
                  uVar5 = local_1a0;
                  while( true ) {
                    iVar24 = (int)uVar5;
                    iVar16 = 0;
                    if (iVar24 - iVar7 != 0 && iVar7 <= iVar24) {
                      iVar16 = 0;
                      uVar22 = iVar24 - iVar7;
                      do {
                        iVar20 = (uVar22 >> 1) + iVar16;
                        iVar26 = local_1d8[(longlong)iVar7 + (longlong)iVar20];
                        uVar25 = 0xffffffff;
                        iVar14 = local_1d8[iVar24];
                        do {
                          iVar14 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar14 * 4);
                          uVar25 = uVar25 + 1;
                        } while (iVar14 != -1);
                        uVar15 = 0xffffffff;
                        do {
                          iVar26 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar26 * 4);
                          uVar15 = uVar15 + 1;
                        } while (iVar26 != -1);
                        iVar20 = iVar20 + (uVar22 & 1);
                        if (uVar15 < uVar25) {
                          iVar20 = iVar16;
                        }
                        iVar16 = iVar20;
                        bVar2 = 1 < uVar22;
                        uVar22 = uVar22 >> 1;
                      } while (bVar2);
                    }
                    iVar16 = iVar16 + iVar7;
                    if (iVar24 - iVar16 == 0 || iVar24 < iVar16) break;
                    if (local_1dc - iVar24 == 0 || (int)local_1dc < iVar24) {
                      iVar7 = 0;
                    }
                    else {
                      piVar9 = local_1d8 + iVar16;
                      iVar20 = *piVar9;
                      iVar7 = 0;
                      uVar22 = local_1dc - iVar24;
                      do {
                        uVar25 = iVar7 + (uVar22 >> 1);
                        iVar26 = (local_1d8 + iVar24)[uVar25];
                        uVar15 = 0xffffffff;
                        do {
                          iVar26 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar26 * 4);
                          uVar15 = uVar15 + 1;
                        } while (iVar26 != -1);
                        uVar29 = 0xffffffff;
                        iVar26 = iVar20;
                        do {
                          iVar26 = *(int *)(*(longlong *)(lVar30 + 0x18) + (longlong)iVar26 * 4);
                          uVar29 = uVar29 + 1;
                        } while (iVar26 != -1);
                        if (uVar29 < uVar15) {
                          iVar7 = uVar25 + (uVar22 & 1);
                        }
                        bVar2 = 1 < uVar22;
                        uVar22 = uVar22 >> 1;
                      } while (bVar2);
                      uVar5 = (ulonglong)(uint)(iVar24 + iVar7);
                      lVar30 = local_1c0;
                      if (0 < iVar7) {
                        piVar19 = piVar9 + (iVar24 - iVar16);
                        piVar12 = local_1b8 + iVar16;
                        piVar27 = piVar19;
                        do {
                          piVar23 = piVar27 + 1;
                          piVar12[-1] = *piVar27;
                          *piVar27 = iVar20;
                          if (piVar23 == piVar9 + ((iVar24 + iVar7) - iVar16)) {
                            piVar23 = piVar19;
                            if (piVar12 == piVar19) break;
                          }
                          else if (piVar12 == piVar19) {
                            piVar19 = piVar23;
                          }
                          iVar20 = *piVar12;
                          piVar12 = piVar12 + 1;
                          piVar27 = piVar23;
                        } while( true );
                      }
                    }
                    if (((int)local_1dc <= (int)uVar5) ||
                       (iVar7 = iVar7 + iVar16 + 1, (int)uVar5 <= iVar7)) break;
                  }
                }
                local_1b8 = local_1b8 + local_170;
                lVar8 = local_198 + local_170;
              } while (local_198 + local_170 < (longlong)uVar13);
              uVar5 = (ulonglong)local_1cc;
              local_180 = uVar13;
            } while ((int)local_1cc < (int)uStack_120);
          }
        }
        local_190 = param_1;
        if ((int)uStack_120 != 0) {
          local_1d8 = local_128 + (int)uStack_120;
          piVar9 = local_128;
          lVar8 = local_1c8;
          do {
            uVar25 = *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24);
            uVar22 = 0;
            if (uVar25 != 0) {
              uVar22 = 0;
              if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x28) - 1U)) {
                uVar15 = 1;
                uVar29 = 1;
                if (1 < (int)uVar25) {
                  uVar15 = uVar25;
                }
                do {
                  uVar22 = uVar15;
                  if (uVar15 == uVar29) break;
                  uVar10 = uVar29 >> 9;
                  uVar21 = uVar29 & 0x1ff;
                  uVar22 = uVar29;
                  uVar29 = uVar29 + 1;
                } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x28))[uVar10] +
                                                     (ulonglong)uVar21 * 2) - 1U));
              }
            }
            if (uVar22 != uVar25) {
              iVar28 = *piVar9;
LAB_143bc3b8f:
              local_78 = (wchar_t **)0x0;
              local_70 = 0xc00000000;
              FUN_146bea50a(&local_a8);
              ppwVar6 = local_78;
              if (local_78 == (wchar_t **)0x0) {
                ppwVar6 = &local_a8;
              }
              if ((longlong)(int)local_70 != 0) {
                uVar13 = 0;
                lVar8 = 0;
                do {
                  if (*(short *)((longlong)ppwVar6 + uVar13) == (short)iVar28) {
                    if ((~uVar13 & 0x3fffffffc) != 0) {
                      uVar1 = *(ushort *)(*(longlong *)(local_1c0 + 0x18) + (longlong)iVar28 * 4);
                      if ((int)local_70 != 1) {
                        if (*(char *)local_190[2] != '\x01') {
                          if (*(char *)local_190[2] == '\0') {
                            local_e8 = (wchar_t *)0xc00000002;
                            uStack_e0 = 0x10000000001;
                            local_108 = &local_a8;
                            FUN_1485bf478(&local_108,iVar28,&local_e8);
                          }
                          goto LAB_143bc3ed2;
                        }
                        uStack_e0 = CONCAT26(uStack_e0._6_2_,0x10000000001);
                        local_e8 = (wchar_t *)0xc00000000;
                        local_1dc = (uint)*(ushort *)((longlong)ppwVar6 + (lVar8 >> 0x20) * 4 + 2);
                        local_108 = &local_a8;
                        FUN_1485bf478(&local_108);
                        ppwVar6 = local_78;
                        if (local_78 == (wchar_t **)0x0) {
                          ppwVar6 = &local_a8;
                        }
                        uVar15 = local_1dc;
                        if ((longlong)(int)local_70 == 0) goto LAB_143bc3ea0;
                        uVar13 = 0;
                        lVar8 = 0;
                        goto LAB_143bc3e75;
                      }
                      local_118 = (wchar_t **)0xc00000002;
                      plStack_110 = (longlong *)0x10000000001;
                      local_f8._2_2_ = 0xffff;
                      local_b8 = (wchar_t **)0x0;
                      local_b0 = 0xc00000000;
                      local_140[0] = &local_e8;
                      local_108 = (wchar_t **)&local_f8;
                      puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,1);
                      local_f8._0_2_ = uVar1;
                      FUN_146fa976c(local_140,&local_108,&local_118);
                      if (local_b8 == (wchar_t **)0x0) {
                        local_88 = local_c8;
                        uStack_80 = uStack_c0;
                        local_98 = local_d8;
                        uStack_90 = uStack_d0;
                        local_a8 = local_e8;
                        uStack_a0 = (undefined4)uStack_e0;
                        uStack_9c = uStack_e0._4_4_;
                      }
                      if (local_78 != (wchar_t **)0x0) {
                        FUN_1400020a8();
                      }
                      local_78 = local_b8;
                      local_70 = local_b0;
                      goto LAB_143bc3ed2;
                    }
                    break;
                  }
                  lVar8 = lVar8 + 0x100000000;
                  uVar13 = uVar13 + 4;
                } while ((longlong)(int)local_70 * 4 - uVar13 != 0);
              }
              goto LAB_143bc3c31;
            }
LAB_143bc3b74:
            piVar9 = piVar9 + 1;
          } while (piVar9 != local_1d8);
        }
      }
      if (local_128 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar8 = lVar8 + 0x100000000;
    uVar13 = uVar13 + 4;
    if ((longlong)(int)local_70 * 4 == uVar13) break;
LAB_143bc3e75:
    if (*(ushort *)((longlong)ppwVar6 + uVar13) == uVar1) {
      if ((~uVar13 & 0x3fffffffc) != 0) {
        uVar15 = local_1dc + *(ushort *)((longlong)ppwVar6 + (lVar8 >> 0x20) * 4 + 2);
      }
      break;
    }
  }
LAB_143bc3ea0:
  local_108 = (wchar_t **)0xc00000002;
  puStack_100 = (undefined8 *)0x10000000001;
  local_118 = &local_a8;
  FUN_146bfd7a6(&local_118,uVar15 << 0x10 | (uint)uVar1,&local_108);
LAB_143bc3ed2:
  FUN_146bea50a((ulonglong)((uVar22 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(local_1b0 + 0x20) + (ulonglong)(uVar22 >> 9) * 8),
                &local_a8);
LAB_143bc3c31:
  if (local_78 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  uVar15 = uVar22 + 1;
  if ((int)(uVar22 + 1) < (int)uVar25) {
    uVar15 = uVar25;
  }
  do {
    uVar29 = uVar15;
    if (uVar15 - 1 == uVar22) break;
    uVar22 = uVar22 + 1;
    uVar29 = uVar22;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(local_1c8 + 0x28) +
                                         (ulonglong)(uVar22 >> 9) * 8) +
                                       (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
  uVar22 = uVar29;
  lVar8 = local_1c8;
  if (uVar22 == uVar25) goto LAB_143bc3b74;
  goto LAB_143bc3b8f;
}



// FUNCTION 143bc444e FUN_143bc444e body=4304 status=ok
// SIG undefined FUN_143bc444e(void)

ulonglong FUN_143bc444e(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong unaff_RDI;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8 [2];
  longlong *local_298 [2];
  undefined1 local_284 [4];
  uint local_280;
  undefined4 uStack_27c;
  wchar_t **local_270;
  ulonglong *local_268;
  longlong *local_260 [2];
  longlong *local_250 [2];
  longlong *local_240 [2];
  wchar_t **local_230;
  ulonglong *local_228;
  longlong *local_220 [2];
  longlong *local_210 [2];
  wchar_t **local_200;
  ulonglong *local_1f8;
  longlong *local_1f0 [2];
  undefined1 local_1dc [4];
  longlong *local_1d8;
  longlong *plStack_1d0;
  wchar_t **local_1c8;
  ulonglong *local_1c0;
  longlong *local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a0 [2];
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  wchar_t **local_178;
  ulonglong *local_170;
  wchar_t **local_168;
  undefined1 **local_160;
  longlong *local_158;
  ulonglong uStack_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 uStack_128;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  wchar_t *local_108;
  ulonglong uStack_100;
  longlong *local_f8 [2];
  undefined1 *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  wchar_t *local_a0;
  uint local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar13 = *(longlong *)(param_1 + 0x208);
  if ((lVar13 == 0) || (lVar5 = *(longlong *)(lVar13 + 0xc0), lVar5 == 0)) {
LAB_143bc4534:
    local_108 = L"ValidateBoneHierarchy_NoBones";
    uStack_100._0_4_ = 0x1d;
    FUN_1446e940c(&local_a0,&local_108);
    local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    uStack_100._0_4_ = 0x2e;
    FUN_1446e940c(&local_168,&local_108);
    local_108 = L"No bone attributes defined on the mesh.";
    uStack_100 = CONCAT44(uStack_100._4_4_,0x27);
  }
  else {
    uVar4 = *(uint *)(lVar5 + 0x20);
    if ((ulonglong)uVar4 == 0) goto LAB_143bc4534;
    lVar13 = *(longlong *)(lVar13 + 200);
    if (lVar13 != 0 || (int)uVar4 < 2) {
      local_138 = 0;
      local_130 = 0;
      local_158 = (longlong *)0x0;
      uStack_150 = 0;
      local_12c = 0x80;
      uStack_128 = 0xffffffff;
      local_124 = 0;
      local_118 = (undefined1 *)0x0;
      local_110 = 0;
      local_2c8 = param_2;
      if (0 < (int)uVar4) {
        uVar15 = 0xffffffff;
        unaff_RDI = 0;
LAB_143bc4676:
        local_190 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + unaff_RDI * 8);
        if (local_190 == 0) {
          local_1b8 = (longlong *)0x0;
          plStack_1b0 = (longlong *)0x0;
          FUN_1413a454c(local_1a0,unaff_RDI & 0xffffffff,0);
          local_108 = L"ValidateBoneHierarchy_UnnamedBone";
          uStack_100._0_4_ = 0x21;
          FUN_1446e940c(&local_280,&local_108);
          local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
          uStack_100._0_4_ = 0x2e;
          FUN_1446e940c(local_1dc,&local_108);
          local_108 = L"Bone at index {0} has no name.";
          uStack_100 = CONCAT44(uStack_100._4_4_,0x1e);
          FUN_140208c1e(&local_1d8,local_1dc,&local_280,&local_108);
          FUN_14023409e(&local_1c8,&local_1d8,1);
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,4);
          FUN_14023423e(local_f8,local_1a0);
          local_160 = &local_e8;
          local_168 = &local_108;
          FUN_14010d304(&local_a0);
          local_178 = local_1c8;
          local_170 = local_1c0;
          if (local_1c0 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_188,&local_178,&local_a0);
          FUN_14007f2db(local_a0,local_98[0]);
          uVar9 = local_2c8;
          if (local_a0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_f8[0] != (longlong *)0x0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          if (local_1c0 != (ulonglong *)0x0) {
            LOCK();
            puVar1 = local_1c0 + 1;
            *(int *)puVar1 = (int)*puVar1 + -1;
            UNLOCK();
            if ((int)*puVar1 == 0) {
              (**(code **)*local_1c0)(local_1c0);
              LOCK();
              piVar3 = (int *)((longlong)local_1c0 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_1c0 + 0x10))(local_1c0);
              }
            }
          }
          if (local_1a0[0] != (longlong *)0x0) {
            (**(code **)(*local_1a0[0] + 0x10))();
          }
          FUN_143ba90d7(uVar9,2,&local_188);
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))();
          }
          if (local_1d8 != (longlong *)0x0) {
            (**(code **)(*local_1d8 + 0x10))();
          }
        }
        else {
          if ((int)uStack_150 != local_124) {
            uVar12 = (uint)((ulonglong)local_190 >> 0x10);
            uVar10 = (uint)local_190 & 0xffff;
            puVar8 = local_118;
            if (local_118 == (undefined1 *)0x0) {
              puVar8 = local_120;
            }
            for (iVar11 = *(int *)(puVar8 + (ulonglong)
                                            (local_110 - 1U &
                                            (int)((ulonglong)local_190 >> 0x20) +
                                            ((uint)local_190 << 0x10 | uVar10) +
                                            (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar10 >> 4)) * 4)
                ; iVar11 != -1; iVar11 = (int)local_158[(longlong)iVar11 * 2 + 1]) {
              if (local_158[(longlong)iVar11 * 2] == local_190) {
                FUN_145715fae(local_1f0,&local_190);
                local_108 = L"ValidateBoneHierarchy_DuplicateBoneNames";
                uStack_100._0_4_ = 0x28;
                FUN_1446e940c(&local_1d8,&local_108);
                local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
                uStack_100._0_4_ = 0x2e;
                FUN_1446e940c(&local_280,&local_108);
                local_108 = L"Bone \'{0}\' defined more than once.";
                uStack_100 = CONCAT44(uStack_100._4_4_,0x22);
                FUN_140208c1e(&local_1b8,&local_280,&local_1d8,&local_108);
                FUN_14023409e(&local_200,&local_1b8,1);
                local_108 = (wchar_t *)CONCAT44(local_108._4_4_,4);
                FUN_14023423e(local_f8,local_1f0);
                local_160 = &local_e8;
                local_168 = &local_108;
                FUN_14010d304(&local_a0);
                local_178 = local_200;
                local_170 = local_1f8;
                if (local_1f8 != (ulonglong *)0x0) {
                  LOCK();
                  *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(&local_188,&local_178,&local_a0);
                FUN_14007f2db(local_a0,local_98[0]);
                uVar9 = local_2c8;
                if (local_a0 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (local_f8[0] != (longlong *)0x0) {
                  (**(code **)(*local_f8[0] + 0x10))();
                }
                if (local_1f8 != (ulonglong *)0x0) {
                  LOCK();
                  puVar1 = local_1f8 + 1;
                  *(int *)puVar1 = (int)*puVar1 + -1;
                  UNLOCK();
                  if ((int)*puVar1 == 0) {
                    (**(code **)*local_1f8)(local_1f8);
                    LOCK();
                    piVar3 = (int *)((longlong)local_1f8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_1f8 + 0x10))(local_1f8);
                    }
                  }
                }
                if (local_1f0[0] != (longlong *)0x0) {
                  (**(code **)(*local_1f0[0] + 0x10))();
                }
                goto LAB_143bc4f2d;
              }
            }
          }
          FUN_144a13f80(&local_158,&local_108,&local_190,0);
          uVar12 = *(uint *)(*(longlong *)(lVar13 + 0x18) + unaff_RDI * 4);
          if (uVar12 == 0xffffffff) {
            uVar10 = (uint)unaff_RDI;
            if (uVar15 == 0xffffffff) goto LAB_143bc475d;
            FUN_145715fae(local_210,(longlong)(int)uVar15 * 8 + *(longlong *)(lVar5 + 0x18));
            FUN_145715fae(local_220,&local_190);
            local_108 = L"ValidateBoneHierarchy_MultpleRootBones";
            uStack_100._0_4_ = 0x26;
            FUN_1446e940c(&local_1d8,&local_108);
            local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
            uStack_100._0_4_ = 0x2e;
            FUN_1446e940c(&local_280,&local_108);
            local_108 = L"Multiple root bones found (\'{0}\' and \'{1}\').";
            uStack_100 = CONCAT44(uStack_100._4_4_,0x2c);
            FUN_140208c1e(&local_1b8,&local_280,&local_1d8,&local_108);
            FUN_14023409e(&local_230,&local_1b8,1);
            local_108 = (wchar_t *)CONCAT44(local_108._4_4_,4);
            FUN_14023423e(local_f8,local_220);
            local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(&uStack_d8,local_210);
            local_160 = &local_c8;
            local_168 = &local_108;
            FUN_14010d304(&local_a0);
            local_178 = local_230;
            local_170 = local_228;
            if (local_228 != (ulonglong *)0x0) {
              LOCK();
              *(int *)(local_228 + 1) = (int)local_228[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_188,&local_178,&local_a0);
            FUN_14007f2db(local_a0,local_98[0]);
            uVar9 = local_2c8;
            if (local_a0 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar13 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_108 + lVar13) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_108 + lVar13) + 0x10))();
                *(undefined8 *)((longlong)&local_108 + lVar13) = 0;
                *(undefined4 *)((longlong)local_f8 + lVar13 + -8) = 0;
              }
              lVar13 = lVar13 + -0x20;
            } while (lVar13 != -0x10);
            if (local_228 != (ulonglong *)0x0) {
              LOCK();
              puVar1 = local_228 + 1;
              *(int *)puVar1 = (int)*puVar1 + -1;
              UNLOCK();
              if ((int)*puVar1 == 0) {
                (**(code **)*local_228)(local_228);
                LOCK();
                piVar3 = (int *)((longlong)local_228 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*local_228 + 0x10))(local_228);
                }
              }
            }
            if (local_220[0] != (longlong *)0x0) {
              (**(code **)(*local_220[0] + 0x10))();
            }
            if (local_210[0] != (longlong *)0x0) {
              (**(code **)(*local_210[0] + 0x10))();
            }
LAB_143bc4f2d:
            FUN_143ba90d7(uVar9,2,&local_188);
            if (local_188 != (longlong *)0x0) {
              (**(code **)(*local_188 + 0x10))();
            }
            if (local_1b8 != (longlong *)0x0) {
              (**(code **)(*local_1b8 + 0x10))();
            }
LAB_143bc4f58:
            uVar14 = 0;
            goto LAB_143bc4f5a;
          }
          uVar10 = uVar15;
          if (uVar12 < uVar4) goto LAB_143bc475d;
          local_1b8 = (longlong *)0x0;
          plStack_1b0 = (longlong *)0x0;
          FUN_1413a454c(local_240,uVar4,0);
          FUN_145715fae(local_250,unaff_RDI * 8 + *(longlong *)(lVar5 + 0x18));
          local_1d8 = (longlong *)0x0;
          plStack_1d0 = (longlong *)0x0;
          FUN_1413a454c(local_260,uVar12,0);
          local_108 = L"ValidateBoneHierarchy_InvalidParentBoneIndex";
          uStack_100._0_4_ = 0x2c;
          FUN_1446e940c(local_1dc,&local_108);
          local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
          uStack_100._0_4_ = 0x2e;
          FUN_1446e940c(local_284,&local_108);
          local_108 = L"Parent bone index {0} for bone \'{1}\' is invalid ({2} bones defined).";
          uStack_100 = CONCAT44(uStack_100._4_4_,0x44);
          FUN_140208c1e(&local_280,local_284,local_1dc,&local_108);
          FUN_14023409e(&local_270,&local_280,1);
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,4);
          FUN_14023423e(local_f8,local_260);
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,4);
          FUN_14023423e(&uStack_d8,local_250);
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(local_b8,local_240);
          local_160 = &local_a8;
          local_168 = &local_108;
          FUN_14010d304(&local_a0);
          local_178 = local_270;
          local_170 = local_268;
          if (local_268 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(local_268 + 1) = (int)local_268[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_188,&local_178,&local_a0);
          FUN_14007f2db(local_a0,local_98[0]);
          uVar9 = local_2c8;
          if (local_a0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar13 = 0x50;
          do {
            if (*(longlong **)((longlong)&local_108 + lVar13) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_108 + lVar13) + 0x10))();
              *(undefined8 *)((longlong)&local_108 + lVar13) = 0;
              *(undefined4 *)((longlong)local_f8 + lVar13 + -8) = 0;
            }
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != -0x10);
          if (local_268 != (ulonglong *)0x0) {
            LOCK();
            puVar1 = local_268 + 1;
            *(int *)puVar1 = (int)*puVar1 + -1;
            UNLOCK();
            if ((int)*puVar1 == 0) {
              (**(code **)*local_268)(local_268);
              LOCK();
              piVar3 = (int *)((longlong)local_268 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_268 + 0x10))(local_268);
              }
            }
          }
          if (local_260[0] != (longlong *)0x0) {
            (**(code **)(*local_260[0] + 0x10))();
          }
          if (local_250[0] != (longlong *)0x0) {
            (**(code **)(*local_250[0] + 0x10))();
          }
          if (local_240[0] != (longlong *)0x0) {
            (**(code **)(*local_240[0] + 0x10))();
          }
          FUN_143ba90d7(uVar9,2,&local_188);
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))();
          }
          if ((longlong *)CONCAT44(uStack_27c,local_280) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_27c,local_280) + 0x10))();
          }
          plVar6 = plStack_1d0;
          if (plStack_1d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_1d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_1d0)(plStack_1d0);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
        plVar6 = plStack_1b0;
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1b0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        goto LAB_143bc4f58;
      }
      uVar15 = 0xffffffff;
LAB_143bc4777:
      local_e8 = (undefined1 *)0x0;
      local_e0 = 0;
      local_108 = (wchar_t *)0x0;
      uStack_100 = 0;
      local_dc = 0x80;
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = (undefined1 *)0x0;
      local_c0 = 0;
      if ((int)uVar4 < 1) {
        uVar14 = CONCAT71((int7)(unaff_RDI >> 8),1);
      }
      else {
        uVar14 = 0;
        uVar12 = 0;
        local_2c0 = lVar5;
        do {
          FUN_1402226aa(&local_108);
          uVar10 = uVar12;
joined_r0x000143bc47ed:
          local_280 = uVar10;
          if (local_280 != uVar15) {
            FUN_1447cbafe(&local_108,&local_a0,&local_280,0);
            lVar5 = local_2c0;
            uVar10 = *(uint *)(*(longlong *)(lVar13 + 0x18) + (longlong)(int)local_280 * 4);
            if ((int)uStack_100 != local_d4) {
              puVar8 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar8 = local_d0;
              }
              iVar11 = *(int *)(puVar8 + (ulonglong)(local_c0 - 1U & uVar10) * 4);
              if (iVar11 != -1) {
LAB_143bc4852:
                if (*(uint *)(local_108 + (longlong)iVar11 * 6) != uVar10)
                goto code_r0x000143bc485e;
                FUN_145715fae(local_298,(longlong)(int)uVar15 * 8 + *(longlong *)(local_2c0 + 0x18))
                ;
                FUN_145715fae(local_2a8,(longlong)(int)local_280 * 8 + *(longlong *)(lVar5 + 0x18));
                local_a0 = L"ValidateBoneHierarchy_FoundCycle";
                local_98[0] = 0x20;
                FUN_1446e940c(&local_190,&local_a0);
                local_a0 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
                local_98[0] = 0x2e;
                FUN_1446e940c(local_1dc,&local_a0);
                local_a0 = 
                L"Bone \'{0}\' does not connect up to the root bone \'{1}\' but connects into a cycle instead."
                ;
                local_98[0] = 0x58;
                FUN_140208c1e(&local_1d8,local_1dc,&local_190,&local_a0);
                FUN_14023409e(&local_2b8,&local_1d8,1);
                local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
                FUN_14023423e(local_90,local_2a8);
                local_80 = 4;
                FUN_14023423e(local_70,local_298);
                local_170 = local_60;
                local_178 = &local_a0;
                FUN_14010d304(&local_168);
                local_188 = local_2b8;
                local_180 = local_2b0;
                if (local_2b0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(&local_1b8,&local_188,&local_168);
                FUN_14007f2db(local_168,(ulonglong)local_160 & 0xffffffff);
                uVar9 = local_2c8;
                if (local_168 != (wchar_t **)0x0) {
                  FUN_1400020a8();
                }
                lVar13 = 0x30;
                do {
                  plVar6 = *(longlong **)((longlong)local_98 + lVar13 + -8);
                  if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 0x10))();
                    *(undefined8 *)((longlong)local_98 + lVar13 + -8) = 0;
                    *(undefined4 *)((longlong)local_98 + lVar13) = 0;
                  }
                  lVar13 = lVar13 + -0x20;
                } while (lVar13 != -0x10);
                if (local_2b0 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_2b0 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
                    (**(code **)*local_2b0)(local_2b0);
                    LOCK();
                    piVar3 = (int *)((longlong)local_2b0 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_2b0 + 0x10))(local_2b0);
                    }
                  }
                }
                if (local_2a8[0] != (longlong *)0x0) {
                  (**(code **)(*local_2a8[0] + 0x10))();
                }
                if (local_298[0] != (longlong *)0x0) {
                  (**(code **)(*local_298[0] + 0x10))();
                }
                FUN_143ba90d7(uVar9,2,&local_1b8);
                if (local_1b8 != (longlong *)0x0) {
                  (**(code **)(*local_1b8 + 0x10))();
                }
                if (local_1d8 != (longlong *)0x0) {
                  (**(code **)(*local_1d8 + 0x10))();
                }
                break;
              }
            }
            goto joined_r0x000143bc47ed;
          }
          uVar12 = uVar12 + 1;
          uVar14 = (ulonglong)((int)uVar4 <= (int)uVar12);
        } while (uVar12 != uVar4);
        local_c0 = 0;
        if (local_c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar7 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar7 != 0) {
        FUN_1447a08a2(&local_108,0);
      }
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        FUN_1446efbd8(local_f8,0);
      }
      if (local_e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
LAB_143bc4f5a:
      local_110 = 0;
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = uStack_150 >> 0x20;
      uStack_150 = uStack_150 & 0xffffffff00000000;
      if ((int)uVar7 != 0) {
        FUN_14472eb64(&local_158,0);
      }
      uStack_128 = 0xffffffff;
      local_124 = 0;
      local_130 = 0;
      if (0x80 < local_12c) {
        local_12c = 0x80;
        FUN_1446efbd8(local_148,0);
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_158 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143bc45d9;
    }
    local_108 = L"ValidateBoneHierarchy_MultpleBonesNoParents";
    uStack_100._0_4_ = 0x2b;
    FUN_1446e940c(&local_a0,&local_108);
    local_108 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    uStack_100._0_4_ = 0x2e;
    FUN_1446e940c(&local_168,&local_108);
    local_108 = L"Multiple bones defined but no parent indices present.";
    uStack_100 = CONCAT44(uStack_100._4_4_,0x35);
  }
  FUN_140208c1e(&local_158,&local_168,&local_a0,&local_108);
  FUN_143ba90d7(param_2,2,&local_158);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  uVar14 = 0;
LAB_143bc45d9:
  if ((local_60[0] ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
LAB_143bc475d:
  uVar15 = uVar10;
  unaff_RDI = unaff_RDI + 1;
  if (unaff_RDI == uVar4) goto LAB_143bc4777;
  goto LAB_143bc4676;
code_r0x000143bc485e:
  iVar11 = *(int *)(local_108 + (longlong)iVar11 * 6 + 2);
  if (iVar11 == -1) goto joined_r0x000143bc47ed;
  goto LAB_143bc4852;
}



// FUNCTION 143bc5520 FUN_143bc5520 body=526 status=ok
// SIG undefined FUN_143bc5520(void)

void FUN_143bc5520(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  longlong *local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14845abbc(&local_e8);
  local_e8 = &PTR_FUN_14af79df0;
  local_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = DAT_14c99c780;
  local_38 = 0;
  local_34 = 0x53e4ccccd;
  local_2c = 0x100;
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  plVar1 = plVar6 + 2;
  FUN_146bffece(plVar1,param_2);
  plVar5 = plStack_58;
  local_60 = plVar1;
  if (plVar6 == (longlong *)0x0) {
    if (plStack_58 == (longlong *)0x0) goto LAB_143bc5687;
    plStack_58 = (longlong *)0x0;
LAB_143bc5646:
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
    if (plVar6 == (longlong *)0x0) goto LAB_143bc5687;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (plVar6 == plStack_58) {
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
    else {
      bVar7 = plStack_58 != (longlong *)0x0;
      plStack_58 = plVar6;
      if (bVar7) goto LAB_143bc5646;
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
LAB_143bc5687:
  FUN_14846ef14(&local_e8,*(longlong *)*param_1 + 0x50);
  local_40 = *(undefined8 *)param_1[1];
  pbVar3 = (byte *)param_1[2];
  if (*pbVar3 < 2) {
    local_38 = *pbVar3;
  }
  local_34 = *(undefined8 *)(pbVar3 + 4);
  local_2c = *(undefined4 *)(pbVar3 + 0xc);
  FUN_14846f03e(&local_e8,0);
  uVar4 = local_e0;
  local_e0 = 0;
  FUN_146c00942(param_2,uVar4);
  FUN_1485bf53c(&local_e8);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc5730 FUN_143bc5730 body=523 status=ok
// SIG undefined FUN_143bc5730(void)

void FUN_143bc5730(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_198 [32];
  longlong *local_178;
  wchar_t **local_170;
  undefined1 *local_168;
  longlong local_160;
  undefined8 local_158;
  wchar_t *local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  code *local_58;
  longlong **local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xc0), lVar1 == 0)) {
    local_150 = L"TransferBoneWeightsFromMesh_NoBones";
    local_148 = 0x23;
    FUN_1446e940c(&local_48,&local_150);
    local_150 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_148 = 0x2e;
    FUN_1446e940c(&local_58,&local_150);
    local_150 = L"Source Mesh has no bone attribute";
    local_148 = 0x21;
  }
  else {
    if (*(int *)(lVar1 + 0x20) != 0) {
      local_178 = *(longlong **)(param_1[1] + 4);
      FUN_1483327c2(&local_150,param_2,&local_178,0);
      local_168 = (undefined1 *)param_1[1];
      local_13f = *local_168;
      local_140 = 1;
      local_178 = (longlong *)param_1[3];
      local_158 = *param_1;
      local_46 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = 5;
      local_58 = FUN_143bc593c;
      local_170 = &local_150;
      local_160 = param_2;
      local_50 = &local_178;
      FUN_1484b8434(*(undefined8 *)param_1[2],&local_58,&local_48,0);
      FUN_1483328ea(&local_150);
      goto LAB_143bc5873;
    }
    local_150 = L"TransferBoneWeightsFromMesh_EmptyBones";
    local_148 = 0x26;
    FUN_1446e940c(&local_48,&local_150);
    local_150 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_148 = 0x2e;
    FUN_1446e940c(&local_58,&local_150);
    local_150 = L"Source Mesh has an empty bone attribute";
    local_148 = 0x27;
  }
  FUN_140208c1e(&local_178,&local_58,&local_48,&local_150);
  FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_178);
  if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x10))();
  }
LAB_143bc5873:
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc593c FUN_143bc593c body=848 status=ok
// SIG undefined FUN_143bc593c(void)

void FUN_143bc593c(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)*param_1;
  if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
    FUN_143bab15a((longlong *)*param_1,param_2,param_1[1] + 0xb0,3);
  }
  lVar4 = *(longlong *)(param_2 + 0x208);
  if (lVar4 == 0) {
    FUN_14582ed12(param_2);
    lVar4 = *(longlong *)(param_2 + 0x208);
  }
  if (*(longlong *)(lVar4 + 0xc0) == 0) {
    if (*(char *)(param_1[2] + 1) == '\0') {
LAB_143bc5a5b:
      FUN_146c18200(lVar4,*(undefined8 *)(param_1[3] + 0x208));
    }
    else {
      local_88 = L"TransferBoneWeightsFromMesh_NoTargetMeshBones";
      local_80 = 0x2d;
      FUN_1446e940c(local_54,&local_88);
      local_88 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
      local_80 = 0x2e;
      FUN_1446e940c(local_58,&local_88);
      local_88 = 
      L"TransferBoneWeightsFromMesh: TargetMesh has no bone attributes but the OutputTargetMeshBones option is set to TargetBones"
      ;
      local_80 = 0x79;
      FUN_140208c1e(local_50,local_58,local_54,&local_88);
      FUN_143ba90d7(*(undefined8 *)param_1[4],2,local_50);
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
    }
  }
  else if (*(char *)(param_1[2] + 1) == '\0') goto LAB_143bc5a5b;
  if (*(char *)param_1[2] == '\x01') {
    *(double *)(param_1[1] + 0x78) = *(double *)((char *)param_1[2] + 0x20) * 0.017453292519943295;
    dVar1 = *(double *)(param_1[2] + 0x18);
    FUN_145c688c4(param_2,&local_88,0);
    local_68 = local_68 - (double)CONCAT44(uStack_7c,local_80);
    *(double *)(param_1[1] + 0x70) =
         SQRT((local_60 - local_78) * (local_60 - local_78) +
              (local_70 - (double)local_88) * (local_70 - (double)local_88) + local_68 * local_68) *
         dVar1;
    *(undefined4 *)(param_1[1] + 0x84) = *(undefined4 *)(param_1[2] + 0x2c);
    *(undefined4 *)(param_1[1] + 0x88) = *(undefined4 *)(param_1[2] + 0x30);
    *(undefined1 *)(param_1[1] + 0x80) = *(undefined1 *)(param_1[2] + 0x28);
    *(undefined8 *)(param_1[1] + 0xa8) = *(undefined8 *)(param_1[2] + 0x34);
  }
  iVar3 = FUN_1483329be(param_1[1]);
  if (iVar3 == 0) {
    local_88 = *(wchar_t **)(param_1[2] + 0xc);
    cVar2 = FUN_148332a38(param_1[1],param_2);
    if (cVar2 != '\0') goto LAB_143bc5c62;
    local_88 = L"TransferBoneWeightsFromMesh_TransferFailed";
    local_80 = 0x2a;
    FUN_1446e940c(local_54,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_80 = 0x2e;
    FUN_1446e940c(local_58,&local_88);
    local_88 = L"TransferBoneWeightsFromMesh: Failed to transfer the weights";
    local_80 = 0x3b;
  }
  else {
    local_88 = L"TransferBoneWeightsFromMesh_ValidationFailed";
    local_80 = 0x2c;
    FUN_1446e940c(local_54,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_80 = 0x2e;
    FUN_1446e940c(local_58,&local_88);
    local_88 = 
    L"TransferBoneWeightsFromMesh: Invalid parameters were set for the transfer weight operator";
    local_80 = 0x59;
  }
  FUN_140208c1e(local_50,local_58,local_54,&local_88);
  FUN_143ba90d7(*(undefined8 *)param_1[4],3,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
LAB_143bc5c62:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc5c8e FUN_143bc5c8e body=138 status=ok
// SIG undefined FUN_143bc5c8e(void)

void FUN_143bc5c8e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = &local_50;
  local_48 = param_1[1];
  local_40 = param_1[2];
  local_26 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_28 = 5;
  local_38 = FUN_143bc5d1a;
  local_50 = param_2;
  FUN_1484b8434(*(undefined8 *)*param_1,&local_38,&local_28,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc5d1a FUN_143bc5d1a body=730 status=ok
// SIG undefined FUN_143bc5d1a(void)

void FUN_143bc5d1a(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *param_1;
  lVar2 = *(longlong *)(lVar6 + 0x208);
  if ((lVar2 == 0) || (lVar7 = *(longlong *)(lVar2 + 0xc0), lVar7 == 0)) {
    local_88 = L"CopyBonesFromMesh_SourceMeshHasNoBones";
    uStack_80._0_4_ = 0x26;
    FUN_1446e940c(&local_b0,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    uStack_80._0_4_ = 0x2e;
    FUN_1446e940c(local_9c,&local_88);
    local_88 = L"SourceMesh has no bone attributes";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x21);
    FUN_140208c1e(&local_98,local_9c,&local_b0,&local_88);
    FUN_143ba9449(*(undefined8 *)param_1[1],2,&local_98);
  }
  else {
    cVar4 = FUN_146c27d3e(lVar2,0);
    if (cVar4 != '\0') {
      if (*(longlong *)(param_2 + 0x208) == 0) {
        FUN_14582ed12();
        lVar6 = *param_1;
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x208) + 0xc0);
      }
      uVar3 = *(undefined8 *)(lVar7 + 0x18);
      uVar1 = *(undefined4 *)(lVar7 + 0x20);
      puVar5 = (undefined2 *)param_1[2];
      if (*(char *)((longlong)puVar5 + 1) == '\0') {
        local_98 = (longlong *)0x0;
        local_90 = 0;
      }
      else {
        cVar4 = FUN_143bc444e(lVar6,*(undefined8 *)param_1[1]);
        if (cVar4 == '\0') goto LAB_143bc5df2;
        puVar5 = (undefined2 *)param_1[2];
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x208) + 200);
        local_98 = *(longlong **)(lVar6 + 0x18);
        local_90 = *(undefined4 *)(lVar6 + 0x20);
      }
      local_68 = 0;
      local_60 = 0;
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_c0 = *(undefined8 *)param_1[1];
      local_c8 = *puVar5;
      local_b0 = uVar3;
      local_a8 = uVar1;
      cVar4 = FUN_143bc5ff5(&local_b0,&local_98,param_2);
      if (cVar4 != '\0') {
        if ((int)uStack_80 == local_54) {
          FUN_146c18200(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)(*param_1 + 0x208));
        }
        else {
          FUN_146c280d6(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)(*param_1 + 0x208),&local_88
                       );
        }
      }
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(&local_88);
      goto LAB_143bc5df2;
    }
    local_88 = L"CopyBonesFromMesh_InvalidSourceMeshBones";
    uStack_80._0_4_ = 0x28;
    FUN_1446e940c(&local_b0,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    uStack_80._0_4_ = 0x2e;
    FUN_1446e940c(local_9c,&local_88);
    local_88 = L"SourceMesh has invalid bone attributes";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x26);
    FUN_140208c1e(&local_98,local_9c,&local_b0,&local_88);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_98);
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
LAB_143bc5df2:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc5ff5 FUN_143bc5ff5 body=7532 status=ok
// SIG undefined FUN_143bc5ff5(void)

undefined8
FUN_143bc5ff5(wchar_t ***param_1,longlong *param_2,longlong param_3,longlong *param_4,ushort param_5
             ,undefined8 param_6)

{
  int *piVar1;
  wchar_t *pwVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  wchar_t **ppwVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  longlong *plVar10;
  uint *puVar11;
  wchar_t ***pppwVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  bool bVar32;
  undefined1 auStack_2a8 [44];
  uint local_27c;
  longlong local_278;
  wchar_t ***local_270;
  ulonglong local_268;
  longlong local_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240 [2];
  longlong *local_230;
  longlong *local_228;
  longlong *local_220 [2];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  longlong *local_208 [2];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8 [2];
  longlong *local_1c8 [2];
  longlong local_1b8;
  wchar_t ***local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  wchar_t ***local_198;
  wchar_t ***local_190;
  longlong *local_188;
  longlong *plStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  int local_140;
  wchar_t **local_138;
  longlong ***ppplStack_130;
  longlong *local_128 [2];
  wchar_t **local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 uStack_108;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  wchar_t *local_e8;
  ulonglong uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  wchar_t *local_98;
  wchar_t **ppwStack_90;
  longlong *local_88 [2];
  longlong **local_78;
  uint local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar23 = (uint)param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_278 = param_3;
  local_270 = param_1;
  FUN_14574b114(param_4);
  uVar6 = (uint)param_5;
  if (uVar6 < 0x100) {
LAB_143bc6cdf:
    if ((uVar23 & 1) != 0) {
      if (*(longlong *)(*(longlong *)(local_278 + 0x208) + 0xc0) == 0) {
        local_98 = L"GetBoneCopyHierarchy_TargetMeshHasNoBones";
        ppwStack_90._0_4_ = 0x29;
        FUN_1446e940c(&local_138,&local_98);
        local_98 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
        ppwStack_90._0_4_ = 0x2e;
        FUN_1446e940c(&local_188,&local_98);
        local_98 = L"Bone weight re-indexing was requested but the target mesh has no skeleton data"
        ;
        ppwStack_90 = (wchar_t **)CONCAT44(ppwStack_90._4_4_,0x4e);
        FUN_140208c1e(&local_e8,&local_188,&local_138,&local_98);
        FUN_143ba9449(param_6,2,&local_e8);
        if (local_e8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_e8 + 0x10))();
        }
      }
      else {
        local_198 = (wchar_t ***)0x0;
        uVar23 = *(uint *)(local_270 + 1);
        ppwVar7 = *local_270;
        local_190 = (wchar_t ***)CONCAT44(local_190._4_4_,uVar23);
        if ((longlong)(int)uVar23 == 0) {
          local_190 = (wchar_t ***)(ulonglong)uVar23;
        }
        else {
          FUN_1401b309e(&local_198,uVar23,0);
          memcpy(local_198,ppwVar7,(longlong)(int)uVar23 << 3);
        }
        pppwVar12 = local_190;
        if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
          iVar31 = (int)local_190;
          uVar8 = (ulonglong)(int)local_190;
          if (uVar8 != 0) {
            local_270 = local_198;
            ppwVar7 = *local_198;
            uVar23 = (uint)((ulonglong)ppwVar7 >> 0x10);
            uVar6 = (uint)ppwVar7 & 0xffff;
            local_258 = param_4 + 7;
            plVar10 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar10 = local_258;
            }
            iVar5 = *(int *)((longlong)plVar10 +
                            (ulonglong)
                            ((int)param_4[9] - 1U &
                            (int)((ulonglong)ppwVar7 >> 0x20) + ((uint)ppwVar7 << 0x10 | uVar6) +
                            (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar6 >> 4)) * 4);
            if (iVar5 == -1) {
              bVar3 = true;
            }
            else {
              do {
                bVar32 = *(wchar_t ***)(*param_4 + (longlong)iVar5 * 0x18) == ppwVar7;
                bVar3 = !bVar32;
                if (bVar32) break;
                iVar5 = *(int *)(*param_4 + (longlong)iVar5 * 0x18 + 0x10);
              } while (iVar5 != -1);
            }
            uVar23 = 0;
            uVar29 = 0;
            do {
              plVar10 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar10 = local_258;
              }
LAB_143bc7268:
              uVar18 = uVar29 & 0xffffffff;
              uVar6 = (uint)uVar29;
              uVar29 = (ulonglong)(uVar6 + 1);
              local_260 = (longlong)(int)uVar6;
              local_27c = uVar23;
              if ((int)(uVar6 + 1) < iVar31) {
                uVar29 = local_260 + 1;
                bVar32 = true;
LAB_143bc7289:
                do {
                  local_268 = uVar18;
                  if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
                    ppwVar7 = local_270[uVar29];
                    uVar19 = (uint)((ulonglong)ppwVar7 >> 0x10);
                    uVar20 = (uint)ppwVar7 & 0xffff;
                    for (iVar5 = *(int *)((longlong)plVar10 +
                                         (ulonglong)
                                         ((int)((ulonglong)ppwVar7 >> 0x20) +
                                          ((uint)ppwVar7 << 0x10 | uVar20) +
                                          (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar20 >> 4) &
                                         (int)param_4[9] - 1U) * 4); iVar5 != -1;
                        iVar5 = *(int *)((longlong)iVar5 * 0x18 + *param_4 + 0x10)) {
                      if (*(wchar_t ***)(*param_4 + (longlong)iVar5 * 0x18) == ppwVar7) {
                        if (bVar3) {
                          bVar3 = false;
                          if (!bVar32) goto LAB_143bc7386;
                          goto LAB_143bc7268;
                        }
                        uVar29 = uVar29 + 1;
                        bVar32 = (longlong)uVar29 < (longlong)uVar8;
                        if (uVar29 != uVar8) goto LAB_143bc7289;
                        uVar29 = (ulonglong)pppwVar12 & 0xffffffff;
                        goto LAB_143bc7339;
                      }
                    }
                  }
                  if (!bVar3) goto LAB_143bc7339;
                  uVar29 = uVar29 + 1;
                  bVar32 = (longlong)uVar29 < (longlong)uVar8;
                } while (uVar29 != uVar8);
                break;
              }
              if (bVar3) break;
              bVar32 = false;
LAB_143bc7339:
              iVar5 = (int)uVar29 - uVar6;
              if (uVar23 != uVar6) {
                memmove(local_270 + (int)uVar23,local_270 + local_260,(longlong)iVar5 << 3);
              }
              uVar23 = uVar23 + iVar5;
              bVar3 = true;
            } while (bVar32);
LAB_143bc7386:
            local_190 = (wchar_t ***)CONCAT44(local_190._4_4_,uVar23);
          }
        }
        lVar21 = *(longlong *)(local_278 + 0x208);
        iVar31 = *(int *)(lVar21 + 0x98);
        if (iVar31 == 0) {
          uVar8 = 1;
          uVar29 = 0;
          iVar22 = 0;
          iVar5 = 0;
        }
        else {
          pppwVar12 = *(wchar_t ****)(lVar21 + 0x90);
          if (*(wchar_t ****)(lVar21 + 0x90) == (wchar_t ***)0x0) {
            pppwVar12 = (wchar_t ***)(lVar21 + 0x80);
          }
          uVar23 = *(uint *)pppwVar12;
          if (uVar23 == 0) {
            iVar5 = iVar31 + 0x1e;
            if (-1 < iVar31 + -1) {
              iVar5 = iVar31 + -1;
            }
            uVar29 = 0;
            uVar8 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar8 = uVar29;
            }
            iVar22 = 0;
            do {
              if (uVar8 == uVar29) goto LAB_143bc755a;
              iVar22 = iVar22 + 0x20;
              uVar23 = *(uint *)((longlong)pppwVar12 + (uVar29 + 1) * 4);
              uVar29 = uVar29 + 1;
            } while (uVar23 == 0);
          }
          else {
            uVar29 = 0;
            iVar22 = 0;
          }
          uVar8 = (ulonglong)(-uVar23 & uVar23);
          uVar18 = uVar8 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          iVar5 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          if (iVar31 <= iVar5) {
            iVar5 = iVar31;
          }
        }
        bVar3 = true;
        if (iVar5 != iVar31) {
          uVar23 = 0xffffffff;
          local_270 = (wchar_t ***)(lVar21 + 0x80);
          do {
            lVar30 = *(longlong *)(lVar21 + 0x70);
            lVar13 = FUN_146bcdc68(*(undefined8 *)(local_278 + 0x208),
                                   *(undefined8 *)(lVar30 + (longlong)iVar5 * 0x18));
            if ((lVar13 != 0) &&
               (cVar4 = FUN_146bcde88(lVar13,*(longlong *)(*(longlong *)(local_278 + 0x208) + 0xc0)
                                             + 0x18,&local_198), cVar4 == '\0')) {
              FUN_145715fae(local_240,lVar30 + (longlong)iVar5 * 0x18);
              local_98 = L"GetBoneCopyHierarchy_FailedToReindexWeights";
              ppwStack_90._0_4_ = 0x2b;
              FUN_1446e940c(&local_1e8,&local_98);
              local_98 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
              ppwStack_90._0_4_ = 0x2e;
              FUN_1446e940c(local_208,&local_98);
              local_98 = L"Failed to reindex bone weights for {0} weights profile";
              ppwStack_90 = (wchar_t **)CONCAT44(ppwStack_90._4_4_,0x36);
              FUN_140208c1e(local_1c8,local_208,&local_1e8,&local_98);
              FUN_14023409e(&local_250,local_1c8,1);
              local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
              FUN_14023423e(local_88,local_240);
              ppplStack_130 = &local_78;
              local_138 = &local_98;
              FUN_14010d304(&local_e8);
              local_188 = local_250;
              plStack_180 = local_248;
              if (local_248 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_248 + 1) = (int)local_248[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_1a8,&local_188,&local_e8);
              FUN_14007f2db(local_e8,uStack_e0 & 0xffffffff);
              if (local_e8 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (local_88[0] != (longlong *)0x0) {
                (**(code **)(*local_88[0] + 0x10))();
              }
              if (local_248 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_248 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_248)(local_248);
                  LOCK();
                  piVar1 = (int *)((longlong)local_248 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_248 + 0x10))(local_248);
                  }
                }
              }
              if (local_240[0] != (longlong *)0x0) {
                (**(code **)(*local_240[0] + 0x10))();
              }
              if (local_1c8[0] != (longlong *)0x0) {
                (**(code **)(*local_1c8[0] + 0x10))();
              }
              FUN_143ba90d7(param_6,3,&local_1a8);
              if (local_1a8 != (longlong *)0x0) {
                (**(code **)(*local_1a8 + 0x10))();
              }
              bVar3 = false;
              goto LAB_143bc755d;
            }
            uVar23 = uVar23 & ~(uint)uVar8;
            pppwVar12 = *(wchar_t ****)(lVar21 + 0x90);
            if (*(wchar_t ****)(lVar21 + 0x90) == (wchar_t ***)0x0) {
              pppwVar12 = local_270;
            }
            iVar17 = *(int *)(lVar21 + 0x98);
            iVar5 = (int)uVar29;
            lVar30 = (longlong)iVar5;
            uVar6 = *(uint *)((longlong)pppwVar12 + lVar30 * 4) & uVar23;
            if (uVar6 == 0) {
              iVar16 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar16 = iVar17 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar22 = iVar22 + 0x20;
              iVar15 = iVar16;
              if (iVar16 < iVar5) {
                iVar15 = iVar5;
              }
              if (iVar5 < iVar16) {
                lVar13 = 0;
                do {
                  uVar6 = *(uint *)((longlong)pppwVar12 + (lVar30 + lVar13 + 1) * 4);
                  if (uVar6 != 0) {
                    uVar29 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                    uVar23 = 0xffffffff;
                    goto LAB_143bc74ea;
                  }
                  iVar22 = iVar22 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar15 - lVar30 != lVar13);
                uVar23 = 0xffffffff;
                iVar5 = iVar15;
              }
              uVar29 = (ulonglong)(iVar5 + 1);
              iVar5 = iVar17;
            }
            else {
LAB_143bc74ea:
              uVar8 = (ulonglong)(-uVar6 & uVar6);
              uVar18 = uVar8 * 2 + 1;
              lVar30 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              iVar5 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar5) {
                iVar5 = iVar17;
              }
            }
          } while (iVar5 != iVar31);
LAB_143bc755a:
          bVar3 = true;
        }
LAB_143bc755d:
        if (local_198 != (wchar_t ***)0x0) {
          FUN_1400020a8();
        }
        if (!bVar3) goto LAB_143bc7578;
      }
    }
    uVar14 = 1;
  }
  else {
    lVar21 = *(longlong *)(local_278 + 0x208);
    if (*(longlong *)(lVar21 + 0xc0) == 0) {
      local_98 = L"GetBoneCopyHierarchy_NoTargetBonesDefined";
      ppwStack_90._0_4_ = 0x29;
      FUN_1446e940c(&local_138,&local_98);
      local_98 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
      ppwStack_90._0_4_ = 0x2e;
      FUN_1446e940c(&local_188,&local_98);
      local_98 = L"Target mesh has no bone names defined which is needed when not copying all bones"
      ;
      ppwStack_90 = (wchar_t **)CONCAT44(ppwStack_90._4_4_,0x50);
      FUN_140208c1e(&local_e8,&local_188,&local_138,&local_98);
LAB_143bc629a:
      FUN_143ba90d7(param_6,3,&local_e8);
      if (local_e8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_e8 + 0x10))();
      }
    }
    else {
      local_1b0 = (wchar_t ***)0x0;
      uVar8 = (ulonglong)*(uint *)(local_270 + 1);
      local_27c = uVar6;
      if (0 < (int)*(uint *)(local_270 + 1)) {
        lVar30 = 0;
        lVar21 = 0;
        pppwVar12 = local_270;
        do {
          uVar23 = *(uint *)(*param_2 + lVar21 * 4);
          if ((ulonglong)uVar23 == 0xffffffff) {
            ppwVar7 = *pppwVar12;
            local_e8 = (wchar_t *)0x0;
LAB_143bc60ca:
            local_98 = (wchar_t *)((longlong)ppwVar7 + lVar30);
            ppwStack_90 = &local_e8;
            FUN_140906722(param_4,&local_138,&local_98);
            pppwVar12 = local_270;
            if (uVar23 == 0xffffffff) {
              if (local_1b0 != (wchar_t ***)0x0) {
                local_98 = L"GetBoneCopyHierarchy_MultipleRootBonesFound";
                ppwStack_90._0_4_ = 0x2b;
                FUN_1446e940c(&local_138,&local_98);
                local_98 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
                ppwStack_90._0_4_ = 0x2e;
                FUN_1446e940c(&local_188,&local_98);
                local_98 = L"Found multiple root bones on source mesh";
                ppwStack_90 = (wchar_t **)CONCAT44(ppwStack_90._4_4_,0x28);
                FUN_140208c1e(&local_e8,&local_188,&local_138,&local_98);
                goto LAB_143bc629a;
              }
              local_1b0 = (wchar_t ***)(*local_270)[lVar21];
            }
          }
          else if ((int)uVar23 < (int)uVar8 && -1 < (int)uVar23) {
            ppwVar7 = *pppwVar12;
            local_e8 = ppwVar7[uVar23];
            goto LAB_143bc60ca;
          }
          lVar21 = lVar21 + 1;
          uVar8 = (ulonglong)(int)*(uint *)(pppwVar12 + 1);
          lVar30 = lVar30 + 8;
        } while (lVar21 < (longlong)uVar8);
        lVar21 = *(longlong *)(local_278 + 0x208);
      }
      local_78 = (longlong **)0x0;
      local_70 = 0;
      local_98 = (wchar_t *)0x0;
      ppwStack_90 = (wchar_t **)0x0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      iVar31 = *(int *)(lVar21 + 0x98);
      if (iVar31 == 0) {
        uVar8 = 1;
        iVar22 = 0;
        uVar29 = 0;
        iVar5 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar21 + 0x90);
        if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
          puVar11 = (uint *)(lVar21 + 0x80);
        }
        uVar23 = *puVar11;
        if (uVar23 == 0) {
          iVar5 = iVar31 + 0x1e;
          if (-1 < iVar31 + -1) {
            iVar5 = iVar31 + -1;
          }
          uVar18 = 0;
          uVar8 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar8 = uVar18;
          }
          uVar29 = 0;
          iVar22 = 0;
          do {
            if (uVar8 == uVar29) goto LAB_143bc64ac;
            iVar22 = iVar22 + 0x20;
            uVar23 = puVar11[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar23 == 0);
        }
        else {
          iVar22 = 0;
          uVar29 = 0;
        }
        uVar8 = (ulonglong)(-uVar23 & uVar23);
        uVar18 = uVar8 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar5 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if (iVar31 <= iVar5) {
          iVar5 = iVar31;
        }
      }
      if (iVar5 == iVar31) {
        uVar18 = 0;
      }
      else {
        uVar23 = 0xffffffff;
        do {
          lVar30 = FUN_146bcdc68(*(undefined8 *)(local_278 + 0x208),
                                 *(undefined8 *)
                                  (*(longlong *)(lVar21 + 0x70) + (longlong)iVar5 * 0x18));
          if (lVar30 != 0) {
            FUN_1485bf750(lVar30,&local_e8);
            FUN_1485bf5e8(&local_98,&local_e8);
            local_a0 = 0;
            if (local_a8 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            uVar18 = uStack_e0 >> 0x20;
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            if ((int)uVar18 != 0) {
              FUN_1447a08a2(&local_e8,0);
            }
            uStack_b8 = 0xffffffff;
            local_b4 = 0;
            local_c0 = 0;
            if (0x80 < local_bc) {
              local_bc = 0x80;
              FUN_1446efbd8(local_d8,0);
            }
            if (local_c8 != (uint *)0x0) {
              FUN_1400020a8();
            }
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          uVar23 = uVar23 & ~(uint)uVar8;
          puVar11 = *(uint **)(lVar21 + 0x90);
          if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
            puVar11 = (uint *)(lVar21 + 0x80);
          }
          iVar17 = *(int *)(lVar21 + 0x98);
          iVar5 = (int)uVar29;
          lVar30 = (longlong)iVar5;
          uVar6 = puVar11[lVar30] & uVar23;
          if (uVar6 == 0) {
            iVar16 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar16 = iVar17 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar15 = iVar16;
            if (iVar16 < iVar5) {
              iVar15 = iVar5;
            }
            if (iVar5 < iVar16) {
              lVar13 = 0;
              do {
                uVar6 = puVar11[lVar30 + lVar13 + 1];
                if (uVar6 != 0) {
                  uVar29 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_143bc6385;
                }
                iVar22 = iVar22 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar15 - lVar30 != lVar13);
              uVar23 = 0xffffffff;
              iVar5 = iVar15;
            }
            uVar29 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar17;
          }
          else {
LAB_143bc6385:
            uVar8 = (ulonglong)(-uVar6 & uVar6);
            uVar18 = uVar8 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            iVar5 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar5) {
              iVar5 = iVar17;
            }
          }
        } while (iVar5 != iVar31);
        lVar21 = *(longlong *)(local_278 + 0x208);
        uVar18 = (ulonglong)local_70;
      }
LAB_143bc64ac:
      lVar21 = *(longlong *)(lVar21 + 0xc0);
      iVar31 = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_e8 = (wchar_t *)0x0;
      uStack_e0 = 0;
      local_bc = 0x80;
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (undefined1 *)0x0;
      local_a0 = 0;
      uVar23 = (uint)uVar18;
      if (uVar23 == 0) {
        uVar24 = 1;
        uVar29 = 0;
        uVar8 = 0;
      }
      else {
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_88;
        }
        uVar6 = *(uint *)pplVar9;
        if (uVar6 == 0) {
          iVar31 = uVar23 + 0x1e;
          if (-1 < (int)(uVar23 - 1)) {
            iVar31 = uVar23 - 1;
          }
          uVar29 = 0;
          uVar8 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar8 = uVar29;
          }
          iVar31 = 0;
          do {
            if (uVar8 == uVar29) goto LAB_143bc6f4a;
            iVar31 = iVar31 + 0x20;
            uVar6 = *(uint *)((longlong)pplVar9 + (uVar29 + 1) * 4);
            uVar29 = uVar29 + 1;
          } while (uVar6 == 0);
        }
        else {
          iVar31 = 0;
          uVar29 = 0;
        }
        uVar24 = (ulonglong)(-uVar6 & uVar6);
        uVar8 = uVar24 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        uVar6 = (iVar31 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        uVar8 = (ulonglong)uVar6;
        if ((int)uVar23 <= (int)uVar6) {
          uVar8 = uVar18;
        }
      }
      if ((uint)uVar8 != uVar23) {
        uVar6 = 0xffffffff;
        do {
          lVar30 = (longlong)*(int *)(local_98 + (longlong)(int)uVar8 * 6);
          if ((lVar30 < 0) ||
             (*(int *)(lVar21 + 0x20) <= *(int *)(local_98 + (longlong)(int)uVar8 * 6))) {
            local_138 = (wchar_t **)0x14af7a57a;
            ppplStack_130._0_4_ = 0x2b;
            FUN_1446e940c(&local_198,&local_138);
            local_138 = (wchar_t **)0x14af422a0;
            ppplStack_130._0_4_ = 0x2e;
            FUN_1446e940c(&local_1a8,&local_138);
            local_138 = (wchar_t **)0x14af7a538;
            ppplStack_130 = (longlong ***)CONCAT44(ppplStack_130._4_4_,0x20);
            FUN_140208c1e(&local_188,&local_1a8,&local_198,&local_138);
            FUN_143ba90d7(param_6,3,&local_188);
            if (local_188 != (longlong *)0x0) {
              (**(code **)(*local_188 + 0x10))();
            }
            bVar3 = false;
            uVar23 = local_27c;
            goto LAB_143bc6bbe;
          }
          local_1b8 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + lVar30 * 8);
          if (local_1b8 == 0) {
            local_1e8 = (longlong *)0x0;
            plStack_1e0 = (longlong *)0x0;
            FUN_1413a454c(local_1d8,lVar30,0);
            local_138 = (wchar_t **)0x14af7a61e;
            ppplStack_130._0_4_ = 0x1f;
            FUN_1446e940c(local_20c,&local_138);
            local_138 = (wchar_t **)0x14af422a0;
            ppplStack_130._0_4_ = 0x2e;
            FUN_1446e940c(local_210,&local_138);
            local_138 = (wchar_t **)0x14af7a5d2;
            ppplStack_130 = (longlong ***)CONCAT44(ppplStack_130._4_4_,0x25);
            FUN_140208c1e(local_208,local_210,local_20c,&local_138);
            FUN_14023409e(&local_1f8,local_208,1);
            local_138 = (wchar_t **)CONCAT44(local_138._4_4_,4);
            FUN_14023423e(local_128,local_1d8);
            local_190 = &local_118;
            local_198 = &local_138;
            FUN_14010d304(&local_188);
            local_1a8 = local_1f8;
            local_1a0 = local_1f0;
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_1c8,&local_1a8,&local_188);
            FUN_14007f2db(local_188,(ulonglong)plStack_180 & 0xffffffff);
            uVar23 = local_27c;
            if (local_188 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_128[0] != (longlong *)0x0) {
              (**(code **)(*local_128[0] + 0x10))();
            }
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_1f0 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_1f0)(local_1f0);
                LOCK();
                piVar1 = (int *)((longlong)local_1f0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_1f0 + 0x10))(local_1f0);
                }
              }
            }
            if (local_1d8[0] != (longlong *)0x0) {
              (**(code **)(*local_1d8[0] + 0x10))();
            }
            if (local_208[0] != (longlong *)0x0) {
              (**(code **)(*local_208[0] + 0x10))();
            }
            plVar10 = plStack_1e0;
            if (plStack_1e0 != (longlong *)0x0) {
              LOCK();
              plVar26 = plStack_1e0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plStack_1e0)(plStack_1e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
LAB_143bc6b99:
            FUN_143ba90d7(param_6,3,local_1c8);
            if (local_1c8[0] != (longlong *)0x0) {
              (**(code **)(*local_1c8[0] + 0x10))();
            }
            bVar3 = false;
            goto LAB_143bc6bbe;
          }
          if ((int)param_4[1] == *(int *)((longlong)param_4 + 0x34)) {
LAB_143bc67de:
            FUN_145715fae(local_220,&local_1b8);
            local_138 = (wchar_t **)0x14af7a6b6;
            ppplStack_130._0_4_ = 0x21;
            FUN_1446e940c(local_208,&local_138);
            local_138 = (wchar_t **)0x14af422a0;
            ppplStack_130._0_4_ = 0x2e;
            FUN_1446e940c(local_20c,&local_138);
            local_138 = (wchar_t **)0x14af7a65e;
            ppplStack_130 = (longlong ***)CONCAT44(ppplStack_130._4_4_,0x2b);
            FUN_140208c1e(&local_1e8,local_20c,local_208,&local_138);
            FUN_14023409e(&local_230,&local_1e8,1);
            local_138 = (wchar_t **)CONCAT44(local_138._4_4_,4);
            FUN_14023423e(local_128,local_220);
            local_190 = &local_118;
            local_198 = &local_138;
            FUN_14010d304(&local_188);
            local_1a8 = local_230;
            local_1a0 = local_228;
            if (local_228 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_228 + 1) = (int)local_228[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_1c8,&local_1a8,&local_188);
            FUN_14007f2db(local_188,(ulonglong)plStack_180 & 0xffffffff);
            uVar23 = local_27c;
            if (local_188 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_128[0] != (longlong *)0x0) {
              (**(code **)(*local_128[0] + 0x10))();
            }
            if (local_228 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_228 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_228)(local_228);
                LOCK();
                piVar1 = (int *)((longlong)local_228 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_228 + 0x10))(local_228);
                }
              }
            }
            if (local_220[0] != (longlong *)0x0) {
              (**(code **)(*local_220[0] + 0x10))();
            }
            if (local_1e8 != (longlong *)0x0) {
              (**(code **)(*local_1e8 + 0x10))();
            }
            goto LAB_143bc6b99;
          }
          uVar19 = (uint)((ulonglong)local_1b8 >> 0x10);
          uVar20 = (uint)local_1b8 & 0xffff;
          plVar10 = (longlong *)param_4[8];
          if ((longlong *)param_4[8] == (longlong *)0x0) {
            plVar10 = param_4 + 7;
          }
          iVar5 = *(int *)((longlong)plVar10 +
                          (ulonglong)
                          ((int)param_4[9] - 1U &
                          (int)((ulonglong)local_1b8 >> 0x20) + ((uint)local_1b8 << 0x10 | uVar20) +
                          (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar20 >> 4)) * 4);
          if (iVar5 == -1) goto LAB_143bc67de;
          while (*(longlong *)(*param_4 + (longlong)iVar5 * 0x18) != local_1b8) {
            iVar5 = *(int *)(*param_4 + (longlong)iVar5 * 0x18 + 0x10);
            if (iVar5 == -1) goto LAB_143bc67de;
          }
          FUN_144a13f80(&local_e8,&local_138,&local_1b8,0);
          uVar6 = uVar6 & ~(uint)uVar24;
          pplVar9 = local_78;
          if (local_78 == (longlong **)0x0) {
            pplVar9 = local_88;
          }
          iVar5 = (int)uVar29;
          lVar30 = (longlong)iVar5;
          uVar19 = *(uint *)((longlong)pplVar9 + lVar30 * 4) & uVar6;
          if (uVar19 == 0) {
            iVar22 = local_70 + 0x1e;
            if (-1 < (int)(local_70 - 1)) {
              iVar22 = local_70 - 1;
            }
            iVar22 = iVar22 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar17 = iVar22;
            if (iVar22 < iVar5) {
              iVar17 = iVar5;
            }
            if (iVar5 < iVar22) {
              lVar13 = 0;
              do {
                uVar19 = *(uint *)((longlong)pplVar9 + (lVar30 + lVar13 + 1) * 4);
                if (uVar19 != 0) {
                  uVar29 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_143bc66eb;
                }
                iVar31 = iVar31 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar17 - lVar30 != lVar13);
              uVar6 = 0xffffffff;
              iVar5 = iVar17;
            }
            uVar29 = (ulonglong)(iVar5 + 1);
            uVar19 = local_70;
          }
          else {
LAB_143bc66eb:
            uVar24 = (ulonglong)(-uVar19 & uVar19);
            uVar8 = uVar24 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            uVar19 = (iVar31 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
            if ((int)local_70 <= (int)uVar19) {
              uVar19 = local_70;
            }
          }
          uVar8 = (ulonglong)uVar19;
        } while (uVar19 != uVar23);
      }
LAB_143bc6f4a:
      uVar29 = 0;
      local_118 = (wchar_t **)0x0;
      local_110 = 0;
      local_138 = (wchar_t **)0x0;
      ppplStack_130 = (longlong ***)0x0;
      local_10c = 0x80;
      uStack_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0;
      FUN_144a13f80(&local_138,&local_188,&local_1b0);
      iVar5 = local_c0;
      uVar23 = local_27c;
      uVar8 = 1;
      iVar22 = 0;
      iVar31 = 0;
      if (local_c0 != 0) {
        puVar11 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar11 = local_d8;
        }
        uVar6 = *puVar11;
        if (uVar6 == 0) {
          iVar31 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar31 = local_c0 + -1;
          }
          uVar29 = 0;
          uVar8 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar8 = uVar29;
          }
          iVar22 = 0;
          do {
            if (uVar8 == uVar29) goto LAB_143bc7035;
            iVar22 = iVar22 + 0x20;
            uVar6 = puVar11[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar29 = 0;
        }
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar18 = uVar8 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar31 = (iVar22 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (local_c0 <= iVar31) {
          iVar31 = local_c0;
        }
      }
      if (iVar31 != local_c0) {
        uVar6 = local_27c >> 8;
        plVar10 = param_4 + 7;
        uVar19 = 0xffffffff;
        do {
          local_188 = *(longlong **)(local_e8 + (longlong)iVar31 * 8);
          FUN_144a13f80(&local_138,&local_198,&local_188);
          iVar31 = (int)param_4[1];
          iVar17 = *(int *)((longlong)param_4 + 0x34);
          plVar26 = (longlong *)0x0;
          if (iVar31 != iVar17) {
            uVar20 = (uint)((ulonglong)local_188 >> 0x10);
            uVar25 = (uint)local_188 & 0xffff;
            plVar26 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar26 = plVar10;
            }
            iVar16 = *(int *)((longlong)plVar26 +
                             (ulonglong)
                             ((int)param_4[9] - 1U &
                             (int)((ulonglong)local_188 >> 0x20) +
                             ((uint)local_188 << 0x10 | uVar25) + (uVar20 << 0x13 | uVar20 & 0xffff)
                             + (uVar25 >> 4)) * 4);
            if (iVar16 != -1) {
              do {
                plVar26 = (longlong *)(*param_4 + (longlong)iVar16 * 0x18);
                if ((longlong *)*plVar26 == local_188) goto LAB_143bc7687;
                iVar16 = (int)plVar26[2];
              } while (iVar16 != -1);
            }
            plVar26 = (longlong *)0x0;
          }
LAB_143bc7687:
          local_198 = (wchar_t ***)plVar26[1];
          while (local_198 != local_1b0) {
            if ((char)(uVar23 >> 8) == '\x02') {
              if ((int)uStack_e0 != local_b4) {
                uVar20 = (uint)((ulonglong)local_198 >> 0x10);
                uVar25 = (uint)local_198 & 0xffff;
                puVar27 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar27 = local_b0;
                }
                for (iVar16 = *(int *)(puVar27 +
                                      (ulonglong)
                                      (local_a0 - 1U &
                                      (int)((ulonglong)local_198 >> 0x20) +
                                      ((uint)local_198 << 0x10 | uVar25) +
                                      (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar25 >> 4)) * 4);
                    iVar16 != -1; iVar16 = *(int *)(local_e8 + ((longlong)iVar16 * 2 + 1) * 4)) {
                  if (*(wchar_t ****)(local_e8 + (longlong)iVar16 * 8) == local_198)
                  goto LAB_143bc7805;
                }
              }
            }
            else if ((uVar6 & 0xff) == 1) {
              FUN_144a13f80(&local_138,&local_1a8);
              iVar31 = (int)param_4[1];
              iVar17 = *(int *)((longlong)param_4 + 0x34);
            }
            if (iVar31 != iVar17) {
              uVar20 = (uint)((ulonglong)local_198 >> 0x10);
              uVar25 = (uint)local_198 & 0xffff;
              plVar26 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar26 = plVar10;
              }
              iVar16 = *(int *)((longlong)plVar26 +
                               (ulonglong)
                               ((int)param_4[9] - 1U &
                               (int)((ulonglong)local_198 >> 0x20) +
                               ((uint)local_198 << 0x10 | uVar25) +
                               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar25 >> 4)) * 4);
              if (iVar16 != -1) {
                do {
                  puVar28 = (undefined8 *)(*param_4 + (longlong)iVar16 * 0x18);
                  if ((wchar_t ***)*puVar28 == local_198) goto LAB_143bc77fc;
                  iVar16 = *(int *)(puVar28 + 2);
                } while (iVar16 != -1);
              }
            }
            puVar28 = (undefined8 *)0x0;
LAB_143bc77fc:
            local_198 = (wchar_t ***)puVar28[1];
          }
LAB_143bc7805:
          if ((short)(uVar23 >> 8) == 2) {
            if (iVar31 != iVar17) {
              uVar20 = (uint)((ulonglong)local_188 >> 0x10);
              uVar25 = (uint)local_188 & 0xffff;
              plVar26 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar26 = plVar10;
              }
              iVar31 = *(int *)((longlong)plVar26 +
                               (ulonglong)
                               ((int)param_4[9] - 1U &
                               (int)((ulonglong)local_188 >> 0x20) +
                               ((uint)local_188 << 0x10 | uVar25) +
                               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar25 >> 4)) * 4);
              if (iVar31 != -1) {
                do {
                  plVar26 = (longlong *)(*param_4 + (longlong)iVar31 * 0x18);
                  if ((longlong *)*plVar26 == local_188) goto LAB_143bc7885;
                  iVar31 = (int)plVar26[2];
                } while (iVar31 != -1);
              }
            }
            plVar26 = (longlong *)0x0;
LAB_143bc7885:
            plVar26[1] = (longlong)local_198;
          }
          uVar19 = uVar19 & ~(uint)uVar8;
          puVar11 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar11 = local_d8;
          }
          iVar31 = (int)uVar29;
          lVar21 = (longlong)iVar31;
          uVar20 = puVar11[lVar21] & uVar19;
          if (uVar20 == 0) {
            iVar17 = local_c0 + 0x1e;
            if (-1 < local_c0 + -1) {
              iVar17 = local_c0 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar16 = iVar17;
            if (iVar17 < iVar31) {
              iVar16 = iVar31;
            }
            if (iVar31 < iVar17) {
              lVar30 = 0;
              do {
                uVar20 = puVar11[lVar21 + lVar30 + 1];
                if (uVar20 != 0) {
                  uVar29 = (ulonglong)(iVar31 + (int)lVar30 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143bc7912;
                }
                iVar22 = iVar22 + 0x20;
                lVar30 = lVar30 + 1;
              } while (iVar16 - lVar21 != lVar30);
              uVar19 = 0xffffffff;
              iVar31 = iVar16;
            }
            uVar29 = (ulonglong)(iVar31 + 1);
            iVar31 = local_c0;
          }
          else {
LAB_143bc7912:
            uVar8 = (ulonglong)(-uVar20 & uVar20);
            uVar18 = uVar8 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar31 = (iVar22 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (local_c0 <= iVar31) {
              iVar31 = local_c0;
            }
          }
        } while (iVar31 != iVar5);
      }
LAB_143bc7035:
      uVar8 = 0;
      local_168 = 0;
      local_160 = 0;
      local_188 = (longlong *)0x0;
      plStack_180 = (longlong *)0x0;
      local_15c = 0xffffffff00000080;
      local_154 = 0;
      local_148 = 0;
      local_140 = 0;
      uVar23 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
      if (uVar23 != 0) {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar23);
        }
        FUN_1461f8d8e(&local_188,uVar23);
        iVar31 = 1;
        if (3 < uVar23) {
          uVar23 = (uVar23 | 1) + 0xe;
          iVar31 = 0x1f;
          if (uVar23 != 0) {
            for (; uVar23 >> iVar31 == 0; iVar31 = iVar31 + -1) {
            }
          }
          iVar31 = 1 << ((byte)iVar31 & 0x1f);
        }
        if ((local_140 == 0) || (local_140 < iVar31)) {
          local_140 = iVar31;
          FUN_140906920();
        }
      }
      iVar31 = (int)param_4[5];
      uVar29 = 1;
      iVar22 = 0;
      iVar5 = 0;
      if (iVar31 != 0) {
        puVar11 = (uint *)param_4[4];
        if ((uint *)param_4[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_4 + 2);
        }
        uVar23 = *puVar11;
        if (uVar23 == 0) {
          iVar5 = iVar31 + 0x1e;
          if (-1 < iVar31 + -1) {
            iVar5 = iVar31 + -1;
          }
          uVar8 = 0;
          uVar29 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar29 = uVar8;
          }
          iVar22 = 0;
          do {
            if (uVar29 == uVar8) goto LAB_143bc7153;
            iVar22 = iVar22 + 0x20;
            uVar23 = puVar11[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar8 = 0;
          iVar22 = 0;
        }
        uVar29 = (ulonglong)(-uVar23 & uVar23);
        uVar18 = uVar29 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar5 = (iVar22 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar31 <= iVar5) {
          iVar5 = iVar31;
        }
      }
      if (iVar5 != iVar31) {
        uVar23 = 0xffffffff;
        iVar17 = iVar31;
        do {
          if ((int)ppplStack_130 != local_104) {
            pwVar2 = *(wchar_t **)(*param_4 + (longlong)iVar5 * 0x18);
            uVar6 = (uint)((ulonglong)pwVar2 >> 0x10);
            uVar19 = (uint)pwVar2 & 0xffff;
            puVar27 = local_f8;
            if (local_f8 == (undefined1 *)0x0) {
              puVar27 = local_100;
            }
            iVar16 = *(int *)(puVar27 +
                             (ulonglong)
                             (local_f0 - 1U &
                             (int)((ulonglong)pwVar2 >> 0x20) + ((uint)pwVar2 << 0x10 | uVar19) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) * 4);
            if (iVar16 != -1) {
              pppwVar12 = (wchar_t ***)(*param_4 + (longlong)iVar5 * 0x18);
              do {
                if (local_138[(longlong)iVar16 * 2] == pwVar2) {
                  local_190 = pppwVar12 + 1;
                  local_198 = pppwVar12;
                  FUN_140906722(&local_188,&local_1a8,&local_198,0);
                  iVar17 = (int)param_4[5];
                  break;
                }
                iVar16 = *(int *)(local_138 + (longlong)iVar16 * 2 + 1);
              } while (iVar16 != -1);
            }
          }
          uVar23 = uVar23 & ~(uint)uVar29;
          puVar11 = (uint *)param_4[4];
          if ((uint *)param_4[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_4 + 2);
          }
          iVar5 = (int)uVar8;
          lVar21 = (longlong)iVar5;
          uVar6 = puVar11[lVar21] & uVar23;
          if (uVar6 == 0) {
            iVar16 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar16 = iVar17 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar15 = iVar16;
            if (iVar16 < iVar5) {
              iVar15 = iVar5;
            }
            if (iVar5 < iVar16) {
              lVar30 = 0;
              do {
                uVar6 = puVar11[lVar21 + lVar30 + 1];
                if (uVar6 != 0) {
                  uVar8 = (ulonglong)(iVar5 + (int)lVar30 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_143bc7aac;
                }
                iVar22 = iVar22 + 0x20;
                lVar30 = lVar30 + 1;
              } while (iVar15 - lVar21 != lVar30);
              uVar23 = 0xffffffff;
              iVar5 = iVar15;
            }
            uVar8 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar17;
          }
          else {
LAB_143bc7aac:
            uVar29 = (ulonglong)(-uVar6 & uVar6);
            uVar18 = uVar29 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar5 = (iVar22 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar5) {
              iVar5 = iVar17;
            }
          }
        } while (iVar5 != iVar31);
      }
LAB_143bc7153:
      FUN_1485bf85a(param_4,&local_188);
      local_140 = 0;
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(&local_188);
      uVar23 = local_27c;
      local_f0 = 0;
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = (ulonglong)ppplStack_130 >> 0x20;
      ppplStack_130 = (longlong ***)((ulonglong)ppplStack_130 & 0xffffffff00000000);
      if ((int)uVar8 != 0) {
        FUN_14472eb64(&local_138,0);
      }
      uStack_108 = 0xffffffff;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        FUN_1446efbd8(local_128,0);
      }
      if (local_118 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      bVar3 = true;
LAB_143bc6bbe:
      local_a0 = 0;
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar8 != 0) {
        FUN_14472eb64(&local_e8,0);
      }
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        FUN_1446efbd8(local_d8,0);
      }
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar8 = (ulonglong)ppwStack_90 >> 0x20;
      ppwStack_90 = (wchar_t **)((ulonglong)ppwStack_90 & 0xffffffff00000000);
      if ((int)uVar8 != 0) {
        FUN_1447a08a2(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar3) goto LAB_143bc6cdf;
    }
LAB_143bc7578:
    uVar14 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 143bc7d62 FUN_143bc7d62 body=1934 status=ok
// SIG undefined FUN_143bc7d62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bc7d62(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  undefined8 local_170;
  longlong local_168;
  int local_15c;
  longlong local_158;
  int local_14c;
  longlong local_148;
  undefined4 local_140;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_100;
  int *local_f8;
  undefined1 local_ec [4];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_2 + 0x208) == 0) {
    FUN_14582ed12(param_2);
  }
  local_78 = (uint *)0x0;
  uStack_120._4_4_ = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar17 = *(longlong *)*param_1;
  uVar15 = *(uint *)(lVar17 + 0x58);
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_168 = param_2;
  if (uVar15 != 0) {
    FUN_1402191ca(&local_118,uVar15);
  }
  if ((int)uStack_120._4_4_ < (int)uVar15) {
    FUN_14481578e(&local_128,uVar15);
  }
  lVar4 = (longlong)*(int *)(*(longlong *)*param_1 + 0x58);
  if (lVar4 != 0) {
    puVar9 = *(undefined8 **)(*(longlong *)*param_1 + 0x50);
    puVar11 = (undefined8 *)(lVar4 * 0xc + (longlong)puVar9);
    do {
      uVar10 = uStack_110;
      lVar4 = (longlong)(int)uStack_110;
      uVar3 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
      if (uStack_110._4_4_ < uVar3) {
        FUN_1446f84a2(&local_118,uVar10 & 0xffffffff);
      }
      uVar10 = uStack_120;
      *(undefined8 *)(local_118 + lVar4 * 8) = *puVar9;
      lVar4 = (longlong)(int)uStack_120;
      uVar3 = (int)uStack_120 + 1;
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar3);
      if (uStack_120._4_4_ < uVar3) {
        FUN_1446f48e2(&local_128,uVar10 & 0xffffffff);
      }
      *(undefined4 *)(local_128 + lVar4 * 4) = *(undefined4 *)(puVar9 + 1);
      puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
    } while (puVar9 != puVar11);
  }
  lVar4 = local_168;
  local_170 = *(undefined8 *)param_1[2];
  local_178 = *(undefined2 *)param_1[1];
  local_138 = local_128;
  local_130 = (int)uStack_120;
  local_148 = local_118;
  local_140 = (int)uStack_110;
  cVar2 = FUN_143bc5ff5(&local_148,&local_138,local_168,&local_98);
  if (cVar2 == '\0') goto LAB_143bc823f;
  uVar3 = (int)uStack_90 - local_64;
  if ((int)uStack_90 - local_64 == 0) {
    uVar3 = uVar15;
  }
  FUN_146c26078(*(undefined8 *)(lVar4 + 0x208),uVar3);
  lVar4 = *(longlong *)(lVar4 + 0x208);
  lVar19 = *(longlong *)(lVar4 + 0xc0);
  local_168 = *(longlong *)(lVar4 + 200);
  lVar4 = *(longlong *)(lVar4 + 0xd0);
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_14c = 0;
  if (uVar15 == 0) {
    if ((int)uStack_90 != local_64) goto LAB_143bc813a;
  }
  else {
    uVar10 = 1;
    if (1 < (int)uVar15) {
      uVar10 = (ulonglong)uVar15;
    }
    uVar18 = 0;
    do {
      local_158 = *(longlong *)(local_118 + uVar18 * 8);
      if ((int)uStack_90 == local_64) {
LAB_143bc7ff5:
        local_100 = &local_158;
        local_f8 = &local_14c;
        FUN_140171856(&local_e8,local_ec,&local_100,0);
        *(longlong *)(*(longlong *)(lVar19 + 0x18) + (longlong)local_14c * 8) = local_158;
        puVar9 = (undefined8 *)(uVar18 * 0x60 + *(longlong *)(lVar17 + 0x60));
        puVar11 = (undefined8 *)((longlong)local_14c * 0x60 + *(longlong *)(lVar4 + 0x18));
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        local_14c = local_14c + 1;
      }
      else {
        uVar15 = (uint)((ulonglong)local_158 >> 0x10);
        uVar3 = (uint)local_158 & 0xffff;
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        for (iVar16 = *(int *)(puVar6 + (ulonglong)
                                        (local_50 - 1U &
                                        (int)((ulonglong)local_158 >> 0x20) +
                                        ((uint)local_158 << 0x10 | uVar3) +
                                        (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar3 >> 4)) * 4);
            iVar16 != -1; iVar16 = *(int *)(local_98 + (longlong)iVar16 * 0x18 + 0x10)) {
          if (*(longlong *)(local_98 + (longlong)iVar16 * 0x18) == local_158) goto LAB_143bc7ff5;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar10);
    if ((int)uStack_90 == local_64) {
      uVar18 = 0;
      do {
        *(undefined4 *)(*(longlong *)(local_168 + 0x18) + uVar18 * 4) =
             *(undefined4 *)(local_128 + uVar18 * 4);
        uVar18 = uVar18 + 1;
      } while (uVar10 != uVar18);
    }
    else {
LAB_143bc813a:
      lVar17 = local_168;
      local_f8 = &local_15c;
      local_15c = -1;
      local_100 = &local_158;
      local_158 = 0;
      uVar10 = 0;
      FUN_14147c052(&local_e8,local_ec,&local_100,0);
      if (local_70 == 0) {
        uVar18 = 1;
        iVar7 = 0;
        iVar16 = 0;
      }
      else {
        puVar14 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar14 = local_88;
        }
        uVar15 = *puVar14;
        if (uVar15 == 0) {
          iVar16 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar16 = local_70 + -1;
          }
          uVar10 = 0;
          uVar18 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar18 = uVar10;
          }
          iVar7 = 0;
          do {
            if (uVar18 == uVar10) goto LAB_143bc8215;
            iVar7 = iVar7 + 0x20;
            uVar15 = puVar14[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar10 = 0;
          iVar7 = 0;
        }
        uVar18 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar18 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar16 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar16) {
          iVar16 = local_70;
        }
      }
      if (iVar16 != local_70) {
        uVar15 = 0xffffffff;
        do {
          iVar12 = _DAT_00000008;
          if ((int)uStack_e0 == local_b4) {
LAB_143bc83ef:
            plVar20 = (longlong *)0x0;
          }
          else {
            lVar17 = *(longlong *)(local_98 + (longlong)iVar16 * 0x18);
            uVar3 = (uint)((ulonglong)lVar17 >> 0x10);
            uVar8 = (uint)lVar17 & 0xffff;
            puVar6 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar6 = local_b0;
            }
            iVar12 = *(int *)(puVar6 + (ulonglong)
                                       ((int)((ulonglong)lVar17 >> 0x20) +
                                        ((uint)lVar17 << 0x10 | uVar8) +
                                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4) &
                                       local_a0 - 1U) * 4);
            if (iVar12 == -1) {
              plVar20 = (longlong *)&DAT_00000008;
            }
            else {
              do {
                plVar20 = (longlong *)(local_e8 + (longlong)iVar12 * 0x14);
                if (*plVar20 == lVar17) goto LAB_143bc8371;
                iVar12 = *(int *)((longlong)plVar20 + 0xc);
              } while (iVar12 != -1);
              plVar20 = (longlong *)0x0;
LAB_143bc8371:
              plVar20 = plVar20 + 1;
            }
            iVar12 = (int)*plVar20;
            lVar4 = *(longlong *)(local_98 + (longlong)iVar16 * 0x18 + 8);
            uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
            uVar8 = (uint)lVar4 & 0xffff;
            iVar16 = *(int *)(puVar6 + (ulonglong)
                                       ((int)((ulonglong)lVar4 >> 0x20) +
                                        ((uint)lVar4 << 0x10 | uVar8) +
                                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4) &
                                       local_a0 - 1U) * 4);
            if (iVar16 != -1) {
              do {
                plVar20 = (longlong *)(local_e8 + (longlong)iVar16 * 0x14);
                lVar17 = local_168;
                if (*plVar20 == lVar4) goto LAB_143bc83fc;
                iVar16 = *(int *)((longlong)plVar20 + 0xc);
              } while (iVar16 != -1);
              goto LAB_143bc83ef;
            }
            plVar20 = (longlong *)0x0;
            lVar17 = local_168;
          }
LAB_143bc83fc:
          *(int *)(*(longlong *)(lVar17 + 0x18) + (longlong)iVar12 * 4) = (int)plVar20[1];
          uVar15 = uVar15 & ~(uint)uVar18;
          puVar14 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar14 = local_88;
          }
          iVar16 = (int)uVar10;
          lVar4 = (longlong)iVar16;
          uVar3 = puVar14[lVar4] & uVar15;
          if (uVar3 == 0) {
            iVar12 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar12 = local_70 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar7 = iVar7 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar16) {
              iVar13 = iVar16;
            }
            if (iVar16 < iVar12) {
              lVar19 = 0;
              do {
                uVar3 = puVar14[lVar4 + lVar19 + 1];
                if (uVar3 != 0) {
                  uVar10 = (ulonglong)(iVar16 + (int)lVar19 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_143bc848d;
                }
                iVar7 = iVar7 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar13 - lVar4 != lVar19);
              uVar15 = 0xffffffff;
              lVar4 = (longlong)iVar13;
            }
            uVar10 = lVar4 + 1U & 0xffffffff;
            lVar17 = local_168;
            iVar16 = local_70;
          }
          else {
LAB_143bc848d:
            uVar18 = (ulonglong)(-uVar3 & uVar3);
            uVar1 = uVar18 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar16 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar16) {
              iVar16 = local_70;
            }
          }
        } while (iVar16 != local_70);
      }
    }
  }
LAB_143bc8215:
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_e8);
LAB_143bc823f:
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_98);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bc8504 FUN_143bc8504 body=316 status=ok
// SIG undefined FUN_143bc8504(void)

void FUN_143bc8504(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xc0), lVar1 == 0)) {
    local_38 = L"GetBoneIndex_TargetMeshHasNoBones";
    local_30 = 0x21;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_30 = 0x2e;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"GetBoneIndex: TargetMesh has no bone attributes";
    local_30 = 0x2f;
    FUN_140208c1e(local_48,local_50,local_4c,&local_38);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,local_48);
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
  else {
    uVar2 = 0xffffffff;
    if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
      lVar3 = (longlong)*(int *)(lVar1 + 0x20) << 3;
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar4 * 8) == *(longlong *)param_1[2]) {
          uVar2 = (undefined4)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    *(undefined4 *)param_1[1] = uVar2;
    *(bool *)param_1[3] = *(int *)param_1[1] != -1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc8642 FUN_143bc8642 body=544 status=ok
// SIG undefined FUN_143bc8642(void)

void FUN_143bc8642(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0xc0), lVar2 == 0)) {
    local_38 = L"GetRootBoneName_TargetMeshHasNoBones";
    local_30 = 0x24;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_30 = 0x2e;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"GetRootBoneName: TargetMesh has no bone attributes";
    local_30 = 0x32;
  }
  else if (*(int *)(lVar2 + 0x20) == 0) {
    local_38 = L"GetRootBoneName_TargetMeshHasEmptySkeleton";
    local_30 = 0x2a;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_30 = 0x2e;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"GetRootBoneName: TargetMesh has bone attributes set, but they are empty (doesn\'t contain a single bone)"
    ;
    local_30 = 0x67;
  }
  else {
    lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 200) + 0x20);
    if (lVar4 != 0) {
      uVar5 = 0;
      lVar3 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 200) + 0x18) + uVar5) == -1) {
          if ((int)(~uVar5 >> 2) != 0) {
            *(undefined8 *)param_1[1] =
                 *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (lVar3 >> 0x20) * 8);
            goto LAB_143bc882d;
          }
          break;
        }
        lVar3 = lVar3 + 0x100000000;
        uVar5 = uVar5 + 4;
      } while (lVar4 * 4 != uVar5);
    }
    local_38 = L"GetRootBoneName_TargetMeshHasNoRootBone";
    local_30 = 0x27;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_30 = 0x2e;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"GetRootBoneName: TargetMesh has no root bone";
    local_30 = 0x2c;
  }
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  FUN_143ba90d7(*(undefined8 *)*param_1,2,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_143bc882d:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc8864 FUN_143bc8864 body=3025 status=ok
// SIG undefined FUN_143bc8864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bc8864(undefined8 *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *_Src;
  undefined8 *puVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [24];
  undefined8 *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a8;
  ulonglong uStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar14 = *(longlong *)(param_2 + 0x208);
  if ((lVar14 == 0) || (lVar20 = *(longlong *)(lVar14 + 0xc0), lVar20 == 0)) {
    local_178 = L"GetBoneChildren_TargetMeshHasNoBones";
    local_170._0_4_ = 0x24;
    FUN_1446e940c(&local_278,&local_178);
    local_178 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_170._0_4_ = 0x2e;
    FUN_1446e940c(&local_298,&local_178);
    local_178 = L"GetBoneChildren: TargetMesh has no bone attributes";
    local_170 = (double)CONCAT44(local_170._4_4_,0x32);
    FUN_140208c1e(&local_1f8,&local_298,&local_278,&local_178);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_1f8);
    if (local_1f8 != (longlong *)0x0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
  }
  else {
    iVar17 = -1;
    if ((longlong)*(int *)(lVar20 + 0x20) != 0) {
      lVar12 = (longlong)*(int *)(lVar20 + 0x20) << 3;
      lVar19 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar20 + 0x18) + lVar19 * 8) == *(longlong *)param_1[1]) {
          iVar17 = (int)lVar19;
          break;
        }
        lVar19 = lVar19 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    lVar12 = *(longlong *)(lVar14 + 200);
    lVar19 = *(longlong *)(lVar14 + 0xd0);
    lVar14 = *(longlong *)(lVar14 + 0xd8);
    *(bool *)param_1[2] = iVar17 != -1;
    if (*(char *)param_1[2] == '\x01') {
      lVar13 = param_1[3];
      *(undefined4 *)(lVar13 + 8) = 0;
      local_2d8 = lVar14;
      local_2d0 = lVar20;
      if (*(int *)(lVar13 + 0xc) < 0) {
        FUN_1485bf924();
      }
      local_2a8 = 0;
      uStack_2a0 = 0;
      FUN_146c365de(param_2,iVar17,&local_2a8,*(undefined1 *)param_1[4]);
      FUN_1485bf8b6(param_1[3],uStack_2a0 & 0xffffffff);
      if (0 < (int)uStack_2a0) {
        lVar14 = 0;
        local_2e0 = param_1;
        do {
          iVar17 = *(int *)(local_2a8 + lVar14 * 4);
          lVar22 = (longlong)iVar17;
          lVar20 = *(longlong *)local_2e0[3];
          lVar21 = lVar14 * 0xe0;
          piVar18 = (int *)(lVar20 + lVar21);
          *piVar18 = iVar17;
          *(undefined8 *)(piVar18 + 1) =
               *(undefined8 *)(*(longlong *)(local_2d0 + 0x18) + lVar22 * 8);
          piVar18[3] = *(int *)(*(longlong *)(lVar12 + 0x18) + lVar22 * 4);
          _Src = (undefined8 *)(lVar22 * 0x60 + *(longlong *)(lVar19 + 0x18));
          puVar16 = _Src;
          piVar18 = piVar18 + 4;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *(undefined8 *)piVar18 = *puVar16;
            puVar16 = puVar16 + 1;
            piVar18 = piVar18 + 2;
          }
          lVar13 = lVar20 + lVar21;
          local_2c8 = lVar14;
          memmove((void *)(lVar13 + 0x70),_Src,0x60);
          puVar16 = (undefined8 *)(*(longlong *)(local_2d8 + 0x18) + lVar22 * 0x10);
          uVar6 = puVar16[1];
          *(undefined8 *)(lVar13 + 0xd0) = *puVar16;
          *(undefined8 *)(lVar13 + 0xd8) = uVar6;
          iVar17 = *(int *)(*(longlong *)(lVar12 + 0x18) + lVar22 * 4);
          if (iVar17 != -1) {
            lVar20 = lVar20 + lVar21;
            dVar26 = *(double *)(lVar20 + 0xb0);
            dVar41 = *(double *)(lVar20 + 0xb8);
            dVar45 = *(double *)(lVar20 + 0xc0);
            dVar31 = *(double *)(lVar20 + 200);
            do {
              lVar14 = *(longlong *)(lVar19 + 0x18);
              lVar13 = (longlong)iVar17 * 0x60;
              pdVar1 = (double *)(lVar14 + lVar13);
              auVar30 = *(undefined1 (*) [16])(lVar14 + 0x40 + lVar13);
              dVar27 = auVar30._0_8_;
              dVar32 = auVar30._8_8_;
              auVar42 = *(undefined1 (*) [16])(lVar14 + 0x50 + lVar13);
              dVar28 = auVar42._0_8_;
              dVar34 = auVar42._8_8_;
              auVar36._8_8_ = dVar41;
              auVar36._0_8_ = dVar26;
              auVar30 = minpd(auVar36,auVar30);
              auVar35._8_8_ = dVar31;
              auVar35._0_8_ = dVar45;
              auVar36 = minpd(auVar35,auVar42);
              auVar42._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
              auVar42._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
              iVar11 = movmskpd((int)lVar14,auVar42);
              auVar30._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar30._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              uVar15 = movmskpd((int)lVar13,auVar30);
              if ((uVar15 & 0x3fffffff) == 0 && iVar11 == 0) {
                dVar5 = *(double *)(lVar20 + 0x70);
                dVar46 = *(double *)(lVar20 + 0x78);
                dVar47 = *(double *)(lVar20 + 0x80);
                dVar49 = *(double *)(lVar20 + 0x88);
                dVar7 = *pdVar1;
                dVar8 = pdVar1[1];
                dVar9 = pdVar1[2];
                dVar10 = pdVar1[3];
                dVar44 = pdVar1[3];
                dVar39 = pdVar1[3];
                local_2f8._8_4_ = SUB84(dVar31,0);
                local_2f8._0_8_ = dVar45;
                local_2f8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
                dVar31 = pdVar1[1];
                dVar48 = pdVar1[1];
                dVar2 = pdVar1[2];
                dVar43 = pdVar1[2];
                dVar29 = dVar46 * dVar2 * -1.0 +
                         dVar47 * dVar31 + dVar49 * *pdVar1 * 1.0 + dVar5 * dVar44;
                dVar33 = dVar5 * dVar43 * 1.0 +
                         dVar49 * dVar48 + dVar47 * *pdVar1 * -1.0 + dVar46 * dVar39;
                auVar38._0_8_ =
                     dVar49 * dVar2 * 1.0 +
                     ((*pdVar1 * dVar46 * 1.0 + dVar47 * dVar44) - dVar5 * dVar31);
                auVar38._8_8_ =
                     dVar47 * dVar43 * -1.0 +
                     ((*pdVar1 * dVar5 * -1.0 + dVar49 * dVar39) - dVar46 * dVar48);
                dVar49 = *(double *)(lVar20 + 0x90) * dVar27;
                dVar50 = *(double *)(lVar20 + 0x98) * dVar32;
                dVar2 = *(double *)(lVar20 + 0xa0) * dVar28;
                dVar5 = *(double *)(lVar20 + 0xa8) * dVar34;
                dVar46 = dVar50 * dVar7 - dVar8 * dVar49;
                dVar47 = dVar2 * dVar8 - dVar9 * dVar50;
                dVar48 = dVar49 * dVar9 - dVar7 * dVar2;
                dVar43 = dVar5 * dVar10 - dVar10 * dVar5;
                dVar47 = dVar47 + dVar47;
                dVar48 = dVar48 + dVar48;
                dVar46 = dVar46 + dVar46;
                dVar43 = dVar43 + dVar43;
                dVar26 = dVar26 * dVar27;
                dVar41 = dVar41 * dVar32;
                dVar45 = dVar45 * dVar28;
                dVar31 = (double)local_2f8._8_8_ * dVar34;
                dVar28 = (dVar46 * dVar8 - dVar9 * dVar48) + dVar44 * dVar47 + dVar49 + pdVar1[4];
                dVar32 = (dVar47 * dVar9 - dVar46 * dVar7) + dVar39 * dVar48 + dVar50 + pdVar1[5];
                dVar27 = (dVar48 * dVar7 - dVar8 * dVar47) + dVar44 * dVar46 + dVar2 + pdVar1[6];
                dVar34 = (dVar43 * dVar10 - dVar43 * dVar10) + dVar39 * dVar43 + dVar5 + pdVar1[7];
              }
              else {
                local_2b8._8_4_ = SUB84(dVar41 * dVar32,0);
                local_2b8._0_8_ = dVar26 * dVar27;
                local_2b8._12_4_ = (int)((ulonglong)(dVar41 * dVar32) >> 0x20);
                local_2f8._8_4_ = SUB84(dVar31 * dVar34,0);
                local_2f8._0_8_ = dVar45 * dVar28;
                local_2f8._12_4_ = (int)((ulonglong)(dVar31 * dVar34) >> 0x20);
                dVar41 = *pdVar1;
                dVar45 = pdVar1[1];
                dVar26 = pdVar1[2];
                dVar31 = dVar45 + dVar45;
                dVar34 = dVar26 + dVar26;
                dVar44 = dVar41 * (dVar41 + dVar41);
                local_1f8 = (longlong *)((1.0 - (dVar26 * dVar34 + dVar45 * dVar31)) * dVar27);
                dStack_1d0 = (1.0 - (dVar26 * dVar34 + dVar44)) * dVar32;
                local_1a8 = (1.0 - (dVar44 + dVar45 * dVar31)) * dVar28;
                dVar26 = pdVar1[3];
                dVar44 = dVar34 * dVar26;
                dVar39 = (dVar41 + dVar41) * pdVar1[3];
                dVar26 = dVar31 * dVar26;
                dStack_1f0 = (dVar31 * dVar41 + dVar44) * dVar27;
                local_1c8 = (dVar34 * dVar45 + dVar39) * dVar32;
                local_1b8 = (dVar26 + *pdVar1 * dVar34) * dVar28;
                local_1d8 = (dVar31 * dVar41 - dVar44) * dVar32;
                dStack_1b0 = (dVar34 * dVar45 - dVar39) * dVar28;
                local_1e8 = (*pdVar1 * dVar34 - dVar26) * dVar27;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = pdVar1[4];
                dStack_190 = pdVar1[5];
                local_188 = pdVar1[6];
                uStack_180 = 0x3ff0000000000000;
                dVar45 = *(double *)(lVar20 + 0x70);
                dVar31 = *(double *)(lVar20 + 0x78);
                dVar26 = *(double *)(lVar20 + 0x80);
                local_268 = *(double *)(lVar20 + 0xb0);
                local_258 = *(double *)(lVar20 + 0xb8);
                dStack_230 = *(double *)(lVar20 + 0xc0);
                dVar34 = dVar31 + dVar31;
                dVar27 = dVar26 + dVar26;
                dVar41 = dVar45 * (dVar45 + dVar45);
                local_278 = (1.0 - (dVar26 * dVar27 + dVar31 * dVar34)) * local_268;
                dStack_250 = (1.0 - (dVar26 * dVar27 + dVar41)) * local_258;
                local_228 = (1.0 - (dVar41 + dVar31 * dVar34)) * dStack_230;
                dVar41 = *(double *)(lVar20 + 0x70) * dVar27;
                dVar26 = *(double *)(lVar20 + 0x88);
                dVar28 = dVar27 * dVar26;
                dVar32 = (dVar45 + dVar45) * *(double *)(lVar20 + 0x88);
                dVar26 = dVar34 * dVar26;
                dStack_270 = (dVar34 * dVar45 + dVar28) * local_268;
                local_248 = (dVar27 * dVar31 + dVar32) * local_258;
                local_238 = (dVar26 + dVar41) * dStack_230;
                local_268 = (dVar41 - dVar26) * local_268;
                local_258 = (dVar34 * dVar45 - dVar28) * local_258;
                dStack_230 = (dVar27 * dVar31 - dVar32) * dStack_230;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = *(undefined8 *)(lVar20 + 0x90);
                uStack_210 = *(undefined8 *)(lVar20 + 0x98);
                local_208 = *(undefined8 *)(lVar20 + 0xa0);
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                auVar30 = _DAT_149934d80;
                dVar45 = local_168 * local_168 +
                         (double)local_178 * (double)local_178 + local_170 * local_170;
                local_2c0 = local_158;
                dVar41 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                dVar26 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                uVar23 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
                dVar32 = (double)(~uVar23 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar45)) & uVar23);
                uVar23 = -(ulonglong)(0.0 <= dVar41 + -9.99999993922529e-09);
                dVar27 = (double)(~uVar23 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar41)) & uVar23);
                uVar23 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
                dVar28 = (double)(~uVar23 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar26)) & uVar23);
                dVar45 = (double)local_2f8._0_8_;
                dVar31 = (double)local_2f8._8_8_;
                dVar26 = (double)local_2b8._0_8_;
                dVar41 = (double)local_2b8._8_8_;
                auVar24._8_8_ = -(ulonglong)(0.0 <= (double)local_2b8._8_8_);
                auVar24._0_8_ = -(ulonglong)(0.0 <= (double)local_2b8._0_8_);
                auVar42 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
                dVar34 = (double)(~-(ulonglong)(0.0 <= (double)local_2f8._0_8_) & 0xbff0000000000000
                                 | (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_2f8._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                dVar44 = auVar42._0_8_;
                local_178 = (wchar_t *)((double)local_178 * dVar32 * dVar44);
                local_170 = local_170 * dVar32 * dVar44;
                local_168 = dVar32 * local_168 * dVar44;
                dVar32 = auVar42._8_8_;
                local_148 = dVar27 * local_148 * dVar32;
                local_150 = local_150 * dVar27 * dVar32;
                local_158 = dVar32 * local_158 * dVar27;
                local_128 = dVar28 * local_128 * dVar34;
                local_130 = local_130 * dVar28 * dVar34;
                local_138 = dVar34 * local_138 * dVar28;
                FUN_14481fd10(&local_298,&local_178);
                dVar27 = local_288._0_8_;
                dVar28 = local_288._8_8_;
                dVar32 = dVar27 * dVar27 + local_298 * local_298;
                dVar34 = dVar28 * dVar28 + dStack_290 * dStack_290;
                auVar37._0_8_ = dVar32 + dVar34;
                auVar37._8_8_ = dVar32 + dVar34;
                auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
                auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
                auVar42 = sqrtpd(auVar37,auVar37);
                auVar30 = divpd(auVar30,auVar42);
                auVar40._0_8_ = auVar30._0_8_ * dVar27;
                auVar40._8_8_ = auVar30._8_8_ * dVar28;
                dVar29 = (double)((ulonglong)(local_298 * auVar30._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
                dVar33 = (double)((ulonglong)(dStack_290 * auVar30._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
                auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
                dVar34 = 0.0;
                dVar27 = local_108;
                dVar28 = local_118;
                dVar32 = dStack_110;
              }
              *(double *)(lVar20 + 0x70) = dVar29;
              *(double *)(lVar20 + 0x78) = dVar33;
              *(undefined1 (*) [16])(lVar20 + 0x80) = auVar38;
              *(double *)(lVar20 + 0x90) = dVar28;
              *(double *)(lVar20 + 0x98) = dVar32;
              *(double *)(lVar20 + 0xa0) = dVar27;
              *(double *)(lVar20 + 0xa8) = dVar34;
              auVar3._8_4_ = SUB84(dVar41,0);
              auVar3._0_8_ = dVar26;
              auVar3._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              *(undefined1 (*) [16])(lVar20 + 0xb0) = auVar3;
              auVar4._8_4_ = SUB84(dVar31,0);
              auVar4._0_8_ = dVar45;
              auVar4._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
              *(undefined1 (*) [16])(lVar20 + 0xc0) = auVar4;
              iVar17 = *(int *)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar17 * 4);
            } while (iVar17 != -1);
          }
          lVar14 = local_2c8 + 1;
        } while (lVar14 < (int)uStack_2a0);
      }
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc9436 FUN_143bc9436 body=2809 status=ok
// SIG undefined FUN_143bc9436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bc9436(undefined8 *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar40;
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_2e8 [40];
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xc0), lVar3 == 0)) {
    local_178 = L"GetBoneInfo_TargetMeshHasNoBones";
    local_170._0_4_ = 0x20;
    FUN_1446e940c(&local_278,&local_178);
    local_178 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_170._0_4_ = 0x2e;
    FUN_1446e940c(&local_298,&local_178);
    local_178 = L"GetBoneInfo: TargetMesh has no bone attributes";
    local_170 = (double)CONCAT44(local_170._4_4_,0x2e);
    FUN_140208c1e(local_1f8,&local_298,&local_278,&local_178);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,local_1f8);
    if ((longlong *)local_1f8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_1f8._0_8_ + 0x10))();
    }
  }
  else {
    iVar13 = -1;
    if ((longlong)*(int *)(lVar3 + 0x20) != 0) {
      lVar15 = (longlong)*(int *)(lVar3 + 0x20) << 3;
      lVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + lVar20 * 8) == *(longlong *)param_1[1]) {
          iVar13 = (int)lVar20;
          break;
        }
        lVar20 = lVar20 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
    *(bool *)param_1[2] = iVar13 != -1;
    if (*(char *)param_1[2] == '\x01') {
      lVar3 = *(longlong *)(param_2 + 0x208);
      lVar15 = *(longlong *)(lVar3 + 0xc0);
      lVar20 = *(longlong *)(lVar3 + 200);
      lVar4 = *(longlong *)(lVar3 + 0xd0);
      lVar3 = *(longlong *)(lVar3 + 0xd8);
      *(int *)param_1[3] = iVar13;
      lVar14 = (longlong)iVar13;
      *(undefined8 *)(param_1[3] + 4) = *(undefined8 *)(*(longlong *)(lVar15 + 0x18) + lVar14 * 8);
      *(undefined4 *)(param_1[3] + 0xc) = *(undefined4 *)(*(longlong *)(lVar20 + 0x18) + lVar14 * 4)
      ;
      puVar17 = (undefined8 *)(lVar14 * 0x60 + *(longlong *)(lVar4 + 0x18));
      puVar18 = (undefined8 *)(param_1[3] + 0x10);
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      puVar17 = (undefined8 *)(param_1[3] + 0x10);
      puVar18 = (undefined8 *)(param_1[3] + 0x70);
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      puVar17 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + lVar14 * 0x10);
      uVar12 = puVar17[1];
      lVar3 = param_1[3];
      *(undefined8 *)(lVar3 + 0xd0) = *puVar17;
      *(undefined8 *)(lVar3 + 0xd8) = uVar12;
      iVar13 = *(int *)(*(longlong *)(lVar20 + 0x18) + lVar14 * 4);
      if (iVar13 != -1) {
        do {
          lVar15 = param_1[3];
          lVar3 = *(longlong *)(lVar4 + 0x18);
          lVar14 = (longlong)iVar13 * 0x60;
          pdVar1 = (double *)(lVar3 + lVar14);
          auVar31 = *(undefined1 (*) [16])(lVar3 + 0x40 + lVar14);
          dVar26 = auVar31._0_8_;
          dVar45 = auVar31._8_8_;
          auVar43 = *(undefined1 (*) [16])(lVar3 + 0x50 + lVar14);
          dVar34 = auVar43._0_8_;
          dVar28 = auVar43._8_8_;
          auVar35 = *(undefined1 (*) [16])(lVar15 + 0xb0);
          dVar22 = auVar35._0_8_;
          dVar25 = auVar35._8_8_;
          auVar23 = *(undefined1 (*) [16])(lVar15 + 0xc0);
          dVar44 = auVar23._0_8_;
          auVar31 = minpd(auVar35,auVar31);
          auVar35 = minpd(auVar23,auVar43);
          auVar43._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
          auVar43._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
          iVar16 = movmskpd((int)lVar3,auVar43);
          auVar31._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
          auVar31._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
          uVar19 = movmskpd((int)lVar14,auVar31);
          if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
            dVar38 = *(double *)(lVar15 + 0x70);
            dVar40 = *(double *)(lVar15 + 0x78);
            dVar41 = *(double *)(lVar15 + 0x80);
            dVar46 = *(double *)(lVar15 + 0x88);
            dVar8 = *pdVar1;
            dVar9 = pdVar1[1];
            dVar10 = pdVar1[2];
            dVar11 = pdVar1[3];
            dVar29 = pdVar1[3];
            dVar42 = pdVar1[3];
            dVar2 = pdVar1[1];
            dVar36 = pdVar1[1];
            dVar32 = pdVar1[2];
            dVar37 = pdVar1[2];
            dVar30 = dVar40 * dVar32 * -1.0 +
                     dVar41 * dVar2 + dVar46 * *pdVar1 * 1.0 + dVar38 * dVar29;
            dVar33 = dVar38 * dVar37 * 1.0 +
                     dVar46 * dVar36 + dVar41 * *pdVar1 * -1.0 + dVar40 * dVar42;
            auVar35._0_8_ =
                 dVar46 * dVar32 * 1.0 +
                 ((*pdVar1 * dVar40 * 1.0 + dVar41 * dVar29) - dVar38 * dVar2);
            auVar35._8_8_ =
                 dVar41 * dVar37 * -1.0 +
                 ((*pdVar1 * dVar38 * -1.0 + dVar46 * dVar42) - dVar40 * dVar36);
            dVar41 = *(double *)(lVar15 + 0x90) * dVar26;
            dVar46 = *(double *)(lVar15 + 0x98) * dVar45;
            dVar32 = *(double *)(lVar15 + 0xa0) * dVar34;
            dVar37 = *(double *)(lVar15 + 0xa8) * dVar28;
            dVar38 = dVar46 * dVar8 - dVar9 * dVar41;
            dVar40 = dVar32 * dVar9 - dVar10 * dVar46;
            dVar2 = dVar41 * dVar10 - dVar8 * dVar32;
            dVar36 = dVar37 * dVar11 - dVar11 * dVar37;
            dVar40 = dVar40 + dVar40;
            dVar2 = dVar2 + dVar2;
            dVar38 = dVar38 + dVar38;
            dVar36 = dVar36 + dVar36;
            dVar22 = dVar22 * dVar26;
            dVar25 = dVar25 * dVar45;
            dVar44 = dVar44 * dVar34;
            dVar28 = auVar23._8_8_ * dVar28;
            dVar26 = (dVar38 * dVar9 - dVar10 * dVar2) + dVar29 * dVar40 + dVar41 + pdVar1[4];
            dVar34 = (dVar40 * dVar10 - dVar38 * dVar8) + dVar42 * dVar2 + dVar46 + pdVar1[5];
            dVar45 = (dVar2 * dVar8 - dVar9 * dVar40) + dVar29 * dVar38 + dVar32 + pdVar1[6];
            dVar29 = (dVar36 * dVar11 - dVar36 * dVar11) + dVar42 * dVar36 + dVar37 + pdVar1[7];
          }
          else {
            dVar42 = *pdVar1;
            dVar2 = pdVar1[1];
            dVar36 = pdVar1[2];
            dVar32 = dVar2 + dVar2;
            dVar37 = dVar36 + dVar36;
            dVar41 = dVar42 * (dVar42 + dVar42);
            local_1a8 = (1.0 - (dVar41 + dVar2 * dVar32)) * dVar34;
            dVar29 = pdVar1[3];
            dVar38 = dVar37 * dVar29;
            dVar40 = (dVar42 + dVar42) * pdVar1[3];
            dVar29 = dVar32 * dVar29;
            local_1b8 = (dVar29 + *pdVar1 * dVar37) * dVar34;
            dVar28 = dVar28 * auVar23._8_8_;
            local_2a8._8_4_ = SUB84(dVar28,0);
            local_2a8._0_8_ = dVar34 * dVar44;
            local_2a8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            dStack_1d0 = (1.0 - (dVar36 * dVar37 + dVar41)) * dVar45;
            dVar28 = (dVar32 * dVar42 + dVar38) * dVar26;
            local_1c8 = (dVar37 * dVar2 + dVar40) * dVar45;
            local_1d8 = (dVar32 * dVar42 - dVar38) * dVar45;
            dStack_1b0 = (dVar37 * dVar2 - dVar40) * dVar34;
            local_1e8 = (*pdVar1 * dVar37 - dVar29) * dVar26;
            local_1f8._8_4_ = SUB84(dVar28,0);
            local_1f8._0_8_ = (1.0 - (dVar36 * dVar37 + dVar2 * dVar32)) * dVar26;
            local_1f8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = pdVar1[4];
            dStack_190 = pdVar1[5];
            local_188 = pdVar1[6];
            uStack_180 = 0x3ff0000000000000;
            dVar29 = *(double *)(lVar15 + 0x70);
            dVar42 = *(double *)(lVar15 + 0x78);
            dVar2 = *(double *)(lVar15 + 0x80);
            dVar36 = dVar42 + dVar42;
            dVar32 = dVar2 + dVar2;
            dVar40 = dVar29 * (dVar29 + dVar29);
            local_228 = (1.0 - (dVar40 + dVar42 * dVar36)) * dVar44;
            dVar28 = *(double *)(lVar15 + 0x70) * dVar32;
            dVar34 = *(double *)(lVar15 + 0x88);
            dVar37 = dVar32 * dVar34;
            dVar38 = (dVar29 + dVar29) * *(double *)(lVar15 + 0x88);
            dVar34 = dVar36 * dVar34;
            local_238 = (dVar34 + dVar28) * dVar44;
            dStack_230 = (dVar32 * dVar42 - dVar38) * dVar44;
            local_2b8 = dVar26 * dVar22;
            dStack_2b0 = dVar45 * dVar25;
            local_278 = (1.0 - (dVar2 * dVar32 + dVar42 * dVar36)) * dVar22;
            dVar26 = (1.0 - (dVar2 * dVar32 + dVar40)) * dVar25;
            dStack_270 = (dVar36 * dVar29 + dVar37) * dVar22;
            local_248 = (dVar32 * dVar42 + dVar38) * dVar25;
            local_268 = (dVar28 - dVar34) * dVar22;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar26,0);
            local_258._0_8_ = (dVar36 * dVar29 - dVar37) * dVar25;
            local_258._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = *(undefined8 *)(lVar15 + 0x90);
            uStack_210 = *(undefined8 *)(lVar15 + 0x98);
            local_208 = *(undefined8 *)(lVar15 + 0xa0);
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            dVar25 = dStack_2b0;
            dVar22 = local_2b8;
            auVar31 = _DAT_149934d80;
            local_2c0 = local_168;
            dVar44 = local_168 * local_168 +
                     (double)local_178 * (double)local_178 + local_170 * local_170;
            dVar34 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar26 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar21 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
            dVar45 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar44)) & uVar21);
            uVar21 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
            dVar34 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar34)) & uVar21);
            dVar44 = (double)local_2a8._0_8_;
            dVar28 = (double)local_2a8._8_8_;
            uVar21 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
            dVar26 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar26)) & uVar21);
            auVar23._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
            auVar23._0_8_ = -(ulonglong)(0.0 <= local_2b8);
            auVar43 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
            dVar29 = (double)(~-(ulonglong)(0.0 <= (double)local_2a8._0_8_) & 0xbff0000000000000 |
                             (ulonglong)
                             ((uint)(-(ulonglong)(0.0 <= (double)local_2a8._0_8_) >> 0x20) &
                             0x3ff00000) << 0x20);
            dVar42 = auVar43._0_8_;
            local_178 = (wchar_t *)((double)local_178 * dVar45 * dVar42);
            local_170 = local_170 * dVar45 * dVar42;
            local_168 = dVar45 * local_168 * dVar42;
            dVar45 = auVar43._8_8_;
            local_148 = dVar34 * local_148 * dVar45;
            local_150 = local_150 * dVar34 * dVar45;
            local_158 = dVar45 * local_158 * dVar34;
            local_128 = dVar26 * local_128 * dVar29;
            local_130 = local_130 * dVar26 * dVar29;
            local_138 = dVar29 * local_138 * dVar26;
            FUN_14481fd10(&local_298,&local_178);
            dVar26 = local_288 * local_288 + local_298 * local_298;
            dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar27._0_8_ = dVar26 + dVar34;
            auVar27._8_8_ = dVar26 + dVar34;
            auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
            auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
            auVar43 = sqrtpd(auVar27,auVar27);
            auVar31 = divpd(auVar31,auVar43);
            auVar39._0_8_ = auVar31._0_8_ * local_288;
            auVar39._8_8_ = auVar31._8_8_ * dStack_280;
            dVar30 = (double)((ulonglong)(local_298 * auVar31._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
            dVar33 = (double)((ulonglong)(dStack_290 * auVar31._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
            auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar24);
            dVar29 = 0.0;
            lVar15 = param_1[3];
            dVar26 = local_118;
            dVar34 = dStack_110;
            dVar45 = local_108;
          }
          *(double *)(lVar15 + 0x70) = dVar30;
          *(double *)(lVar15 + 0x78) = dVar33;
          *(undefined1 (*) [16])(lVar15 + 0x80) = auVar35;
          auVar6._8_4_ = SUB84(dVar34,0);
          auVar6._0_8_ = dVar26;
          auVar6._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          *(undefined1 (*) [16])(lVar15 + 0x90) = auVar6;
          *(double *)(lVar15 + 0xa0) = dVar45;
          *(double *)(lVar15 + 0xa8) = dVar29;
          auVar7._8_4_ = SUB84(dVar25,0);
          auVar7._0_8_ = dVar22;
          auVar7._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          *(undefined1 (*) [16])(lVar15 + 0xb0) = auVar7;
          auVar5._8_4_ = SUB84(dVar28,0);
          auVar5._0_8_ = dVar44;
          auVar5._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          *(undefined1 (*) [16])(lVar15 + 0xc0) = auVar5;
          iVar13 = *(int *)(*(longlong *)(lVar20 + 0x18) + (longlong)iVar13 * 4);
        } while (iVar13 != -1);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bc9f30 FUN_143bc9f30 body=2825 status=ok
// SIG undefined FUN_143bc9f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bc9f30(undefined8 *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *_Src;
  longlong lVar17;
  undefined8 *puVar18;
  void *_Dst;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [24];
  longlong local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  double local_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xc0), lVar19 == 0)) {
    local_178 = L"GetAllBonesInfo_TargetMeshHasNoBones";
    local_170._0_4_ = 0x24;
    FUN_1446e940c(&local_278,&local_178);
    local_178 = L"UGeometryScriptLibrary_MeshBoneWeightFunctions";
    local_170._0_4_ = 0x2e;
    FUN_1446e940c(&local_298,&local_178);
    local_178 = L"GetAllBonesInfo: TargetMesh has no bone attributes";
    local_170 = (double)CONCAT44(local_170._4_4_,0x32);
    FUN_140208c1e(&local_1f8,&local_298,&local_278,&local_178);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_1f8);
    if (local_1f8 != (longlong *)0x0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
  }
  else {
    iVar13 = *(int *)(lVar19 + 0x20);
    lVar19 = (longlong)iVar13;
    FUN_1485bf8b6(param_1[1],iVar13);
    local_2b8 = lVar19;
    if (0 < lVar19) {
      lVar19 = *(longlong *)(param_2 + 0x208);
      local_2c8 = *(longlong *)(lVar19 + 0xc0);
      lVar3 = *(longlong *)(lVar19 + 200);
      lVar4 = *(longlong *)(lVar19 + 0xd0);
      local_2d0 = *(longlong *)(lVar19 + 0xd8);
      lVar19 = 0;
      local_2c0 = param_1;
      do {
        lVar21 = *(longlong *)local_2c0[1];
        lVar17 = lVar19 * 0xe0;
        puVar20 = (undefined8 *)(lVar17 + 0x10 + lVar21);
        *(int *)(puVar20 + -2) = (int)lVar19;
        *(undefined8 *)((longlong)puVar20 + -0xc) =
             *(undefined8 *)(*(longlong *)(local_2c8 + 0x18) + lVar19 * 8);
        *(undefined4 *)((longlong)puVar20 + -4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + lVar19 * 4);
        _Src = (undefined8 *)(lVar19 * 0x60 + *(longlong *)(lVar4 + 0x18));
        puVar18 = _Src;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar20 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        }
        _Dst = (void *)(lVar17 + 0x70 + lVar21);
        memmove(_Dst,_Src,0x60);
        puVar18 = (undefined8 *)(*(longlong *)(local_2d0 + 0x18) + lVar19 * 0x10);
        uVar8 = puVar18[1];
        *(undefined8 *)((longlong)_Dst + 0x60) = *puVar18;
        *(undefined8 *)((longlong)_Dst + 0x68) = uVar8;
        iVar13 = *(int *)(*(longlong *)(lVar3 + 0x18) + lVar19 * 4);
        if (iVar13 != -1) {
          lVar21 = lVar21 + lVar17;
          dVar25 = *(double *)(lVar21 + 0xb0);
          dVar40 = *(double *)(lVar21 + 0xb8);
          dVar44 = *(double *)(lVar21 + 0xc0);
          dVar30 = *(double *)(lVar21 + 200);
          do {
            lVar15 = *(longlong *)(lVar4 + 0x18);
            lVar17 = (longlong)iVar13 * 0x60;
            pdVar1 = (double *)(lVar15 + lVar17);
            auVar29 = *(undefined1 (*) [16])(lVar15 + 0x40 + lVar17);
            dVar26 = auVar29._0_8_;
            dVar31 = auVar29._8_8_;
            auVar41 = *(undefined1 (*) [16])(lVar15 + 0x50 + lVar17);
            dVar27 = auVar41._0_8_;
            dVar33 = auVar41._8_8_;
            auVar35._8_8_ = dVar40;
            auVar35._0_8_ = dVar25;
            auVar29 = minpd(auVar35,auVar29);
            auVar34._8_8_ = dVar30;
            auVar34._0_8_ = dVar44;
            auVar35 = minpd(auVar34,auVar41);
            auVar41._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
            auVar41._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
            iVar14 = movmskpd((int)lVar15,auVar41);
            auVar29._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
            auVar29._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
            uVar16 = movmskpd((int)lVar17,auVar29);
            if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
              dVar7 = *(double *)(lVar21 + 0x70);
              dVar45 = *(double *)(lVar21 + 0x78);
              dVar46 = *(double *)(lVar21 + 0x80);
              dVar48 = *(double *)(lVar21 + 0x88);
              dVar9 = *pdVar1;
              dVar10 = pdVar1[1];
              dVar11 = pdVar1[2];
              dVar12 = pdVar1[3];
              dVar43 = pdVar1[3];
              dVar38 = pdVar1[3];
              local_2e8._8_4_ = SUB84(dVar30,0);
              local_2e8._0_8_ = dVar44;
              local_2e8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
              dVar30 = pdVar1[1];
              dVar47 = pdVar1[1];
              dVar2 = pdVar1[2];
              dVar42 = pdVar1[2];
              dVar28 = dVar45 * dVar2 * -1.0 +
                       dVar46 * dVar30 + dVar48 * *pdVar1 * 1.0 + dVar7 * dVar43;
              dVar32 = dVar7 * dVar42 * 1.0 +
                       dVar48 * dVar47 + dVar46 * *pdVar1 * -1.0 + dVar45 * dVar38;
              auVar37._0_8_ =
                   dVar48 * dVar2 * 1.0 +
                   ((*pdVar1 * dVar45 * 1.0 + dVar46 * dVar43) - dVar7 * dVar30);
              auVar37._8_8_ =
                   dVar46 * dVar42 * -1.0 +
                   ((*pdVar1 * dVar7 * -1.0 + dVar48 * dVar38) - dVar45 * dVar47);
              dVar48 = *(double *)(lVar21 + 0x90) * dVar26;
              dVar49 = *(double *)(lVar21 + 0x98) * dVar31;
              dVar2 = *(double *)(lVar21 + 0xa0) * dVar27;
              dVar7 = *(double *)(lVar21 + 0xa8) * dVar33;
              dVar45 = dVar49 * dVar9 - dVar10 * dVar48;
              dVar46 = dVar2 * dVar10 - dVar11 * dVar49;
              dVar47 = dVar48 * dVar11 - dVar9 * dVar2;
              dVar42 = dVar7 * dVar12 - dVar12 * dVar7;
              dVar46 = dVar46 + dVar46;
              dVar47 = dVar47 + dVar47;
              dVar45 = dVar45 + dVar45;
              dVar42 = dVar42 + dVar42;
              dVar25 = dVar25 * dVar26;
              dVar40 = dVar40 * dVar31;
              dVar44 = dVar44 * dVar27;
              dVar30 = (double)local_2e8._8_8_ * dVar33;
              dVar27 = (dVar45 * dVar10 - dVar11 * dVar47) + dVar43 * dVar46 + dVar48 + pdVar1[4];
              dVar31 = (dVar46 * dVar11 - dVar45 * dVar9) + dVar38 * dVar47 + dVar49 + pdVar1[5];
              dVar26 = (dVar47 * dVar9 - dVar10 * dVar46) + dVar43 * dVar45 + dVar2 + pdVar1[6];
              dVar33 = (dVar42 * dVar12 - dVar42 * dVar12) + dVar38 * dVar42 + dVar7 + pdVar1[7];
            }
            else {
              local_2a8._8_4_ = SUB84(dVar40 * dVar31,0);
              local_2a8._0_8_ = dVar25 * dVar26;
              local_2a8._12_4_ = (int)((ulonglong)(dVar40 * dVar31) >> 0x20);
              local_2e8._8_4_ = SUB84(dVar30 * dVar33,0);
              local_2e8._0_8_ = dVar44 * dVar27;
              local_2e8._12_4_ = (int)((ulonglong)(dVar30 * dVar33) >> 0x20);
              dVar40 = *pdVar1;
              dVar44 = pdVar1[1];
              dVar25 = pdVar1[2];
              dVar30 = dVar44 + dVar44;
              dVar33 = dVar25 + dVar25;
              dVar43 = dVar40 * (dVar40 + dVar40);
              local_1f8 = (longlong *)((1.0 - (dVar25 * dVar33 + dVar44 * dVar30)) * dVar26);
              dStack_1d0 = (1.0 - (dVar25 * dVar33 + dVar43)) * dVar31;
              local_1a8 = (1.0 - (dVar43 + dVar44 * dVar30)) * dVar27;
              dVar25 = pdVar1[3];
              dVar43 = dVar33 * dVar25;
              dVar38 = (dVar40 + dVar40) * pdVar1[3];
              dVar25 = dVar30 * dVar25;
              dStack_1f0 = (dVar30 * dVar40 + dVar43) * dVar26;
              local_1c8 = (dVar33 * dVar44 + dVar38) * dVar31;
              local_1b8 = (dVar25 + *pdVar1 * dVar33) * dVar27;
              local_1d8 = (dVar30 * dVar40 - dVar43) * dVar31;
              dStack_1b0 = (dVar33 * dVar44 - dVar38) * dVar27;
              local_1e8 = (*pdVar1 * dVar33 - dVar25) * dVar26;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = pdVar1[4];
              dStack_190 = pdVar1[5];
              local_188 = pdVar1[6];
              uStack_180 = 0x3ff0000000000000;
              dVar44 = *(double *)(lVar21 + 0x70);
              dVar30 = *(double *)(lVar21 + 0x78);
              dVar25 = *(double *)(lVar21 + 0x80);
              local_268 = *(double *)(lVar21 + 0xb0);
              local_258 = *(double *)(lVar21 + 0xb8);
              dStack_230 = *(double *)(lVar21 + 0xc0);
              dVar33 = dVar30 + dVar30;
              dVar26 = dVar25 + dVar25;
              dVar40 = dVar44 * (dVar44 + dVar44);
              local_278 = (1.0 - (dVar25 * dVar26 + dVar30 * dVar33)) * local_268;
              dStack_250 = (1.0 - (dVar25 * dVar26 + dVar40)) * local_258;
              local_228 = (1.0 - (dVar40 + dVar30 * dVar33)) * dStack_230;
              dVar40 = *(double *)(lVar21 + 0x70) * dVar26;
              dVar25 = *(double *)(lVar21 + 0x88);
              dVar27 = dVar26 * dVar25;
              dVar31 = (dVar44 + dVar44) * *(double *)(lVar21 + 0x88);
              dVar25 = dVar33 * dVar25;
              dStack_270 = (dVar33 * dVar44 + dVar27) * local_268;
              local_248 = (dVar26 * dVar30 + dVar31) * local_258;
              local_238 = (dVar25 + dVar40) * dStack_230;
              local_268 = (dVar40 - dVar25) * local_268;
              local_258 = (dVar33 * dVar44 - dVar27) * local_258;
              dStack_230 = (dVar26 * dVar30 - dVar31) * dStack_230;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = *(undefined8 *)(lVar21 + 0x90);
              uStack_210 = *(undefined8 *)(lVar21 + 0x98);
              local_208 = *(undefined8 *)(lVar21 + 0xa0);
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              auVar29 = _DAT_149934d80;
              dVar44 = local_168 * local_168 +
                       (double)local_178 * (double)local_178 + local_170 * local_170;
              local_2b0 = local_158;
              dVar40 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              dVar25 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar22 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
              dVar31 = (double)(~uVar22 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar44)) & uVar22);
              uVar22 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
              dVar26 = (double)(~uVar22 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar40)) & uVar22);
              uVar22 = -(ulonglong)(0.0 <= dVar25 + -9.99999993922529e-09);
              dVar27 = (double)(~uVar22 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar25)) & uVar22);
              dVar44 = (double)local_2e8._0_8_;
              dVar30 = (double)local_2e8._8_8_;
              dVar25 = (double)local_2a8._0_8_;
              dVar40 = (double)local_2a8._8_8_;
              auVar23._8_8_ = -(ulonglong)(0.0 <= (double)local_2a8._8_8_);
              auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_2a8._0_8_);
              auVar41 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
              dVar33 = (double)(~-(ulonglong)(0.0 <= (double)local_2e8._0_8_) & 0xbff0000000000000 |
                               (ulonglong)
                               ((uint)(-(ulonglong)(0.0 <= (double)local_2e8._0_8_) >> 0x20) &
                               0x3ff00000) << 0x20);
              dVar43 = auVar41._0_8_;
              local_178 = (wchar_t *)((double)local_178 * dVar31 * dVar43);
              local_170 = local_170 * dVar31 * dVar43;
              local_168 = dVar31 * local_168 * dVar43;
              dVar31 = auVar41._8_8_;
              local_148 = dVar26 * local_148 * dVar31;
              local_150 = local_150 * dVar26 * dVar31;
              local_158 = dVar31 * local_158 * dVar26;
              local_128 = dVar27 * local_128 * dVar33;
              local_130 = local_130 * dVar27 * dVar33;
              local_138 = dVar33 * local_138 * dVar27;
              FUN_14481fd10(&local_298,&local_178);
              dVar26 = local_288._0_8_;
              dVar27 = local_288._8_8_;
              dVar31 = dVar26 * dVar26 + local_298 * local_298;
              dVar33 = dVar27 * dVar27 + dStack_290 * dStack_290;
              auVar36._0_8_ = dVar31 + dVar33;
              auVar36._8_8_ = dVar31 + dVar33;
              auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
              auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
              auVar41 = sqrtpd(auVar36,auVar36);
              auVar29 = divpd(auVar29,auVar41);
              auVar39._0_8_ = auVar29._0_8_ * dVar26;
              auVar39._8_8_ = auVar29._8_8_ * dVar27;
              dVar28 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
              dVar32 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
              auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar24);
              dVar33 = 0.0;
              dVar26 = local_108;
              dVar27 = local_118;
              dVar31 = dStack_110;
            }
            *(double *)(lVar21 + 0x70) = dVar28;
            *(double *)(lVar21 + 0x78) = dVar32;
            *(undefined1 (*) [16])(lVar21 + 0x80) = auVar37;
            *(double *)(lVar21 + 0x90) = dVar27;
            *(double *)(lVar21 + 0x98) = dVar31;
            *(double *)(lVar21 + 0xa0) = dVar26;
            *(double *)(lVar21 + 0xa8) = dVar33;
            auVar5._8_4_ = SUB84(dVar40,0);
            auVar5._0_8_ = dVar25;
            auVar5._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            *(undefined1 (*) [16])(lVar21 + 0xb0) = auVar5;
            auVar6._8_4_ = SUB84(dVar30,0);
            auVar6._0_8_ = dVar44;
            auVar6._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            *(undefined1 (*) [16])(lVar21 + 0xc0) = auVar6;
            iVar13 = *(int *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar13 * 4);
          } while (iVar13 != -1);
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != local_2b8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcaa3a FUN_143bcaa3a body=866 status=ok
// SIG undefined FUN_143bcaa3a(void)

void FUN_143bcaa3a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStack_328 [32];
  undefined **local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined2 local_227;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_328;
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  local_1e8 = param_1[3];
  puVar3 = (undefined1 *)param_1[6];
  plVar4 = (longlong *)param_1[7];
  local_2f8 = *(undefined8 *)(*(longlong *)*param_1 + 0x98);
  local_250 = *(undefined4 *)param_1[4];
  local_298 = puVar2[1];
  uStack_290 = puVar2[2];
  local_288 = puVar2[3];
  local_280 = *(undefined4 *)(puVar2 + 4);
  uStack_27c = *(undefined4 *)((longlong)puVar2 + 0x24);
  uStack_278 = *(undefined4 *)(puVar2 + 5);
  uStack_274 = *(undefined4 *)((longlong)puVar2 + 0x2c);
  local_270 = puVar2[6];
  local_268 = puVar2[8];
  uStack_260 = puVar2[9];
  local_258 = puVar2[10];
  local_2f0 = *puVar1;
  uStack_2e8 = puVar1[1];
  local_2e0 = puVar1[2];
  uStack_2d8 = puVar1[3];
  local_2d0 = puVar1[4];
  uStack_2c8 = puVar1[5];
  local_2c0 = puVar1[6];
  local_2b8 = puVar1[8];
  uStack_2b0 = puVar1[9];
  local_2a8 = *(undefined4 *)(puVar1 + 10);
  uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 0x54);
  uStack_2a0 = (undefined4)*puVar2;
  uStack_29c = (undefined4)((ulonglong)*puVar2 >> 0x20);
  local_308 = &PTR_FUN_149f64a58;
  local_248 = 0x3eb0c6f7a0000000;
  local_240 = 1;
  local_238 = 0x3ff8000000000000;
  local_230 = 0x3fe0000000000000;
  local_227 = 1;
  local_220 = 0;
  local_210 = 0x3fb999999999999a;
  local_208 = 0x3fe0000000000000;
  local_200 = 0x101;
  local_1fe = 1;
  local_1fc = 0x358637bd;
  local_1f8 = 1;
  local_1f4 = 0xffffffff3c23d70a;
  local_1d0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1c8 = 0x3ff0000000000000;
  local_1c0 = DAT_14c8464e0;
  uStack_1b8 = DAT_14c8464e8;
  local_1b0 = DAT_14c8464f0;
  local_1a8 = (undefined4)DAT_14c846510;
  uStack_1a4 = DAT_14c846510._4_4_;
  uStack_1a0 = (undefined4)DAT_14c846518;
  uStack_19c = DAT_14c846518._4_4_;
  local_198 = DAT_14c846520;
  local_160 = 0;
  local_158 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_154 = 0xffffffff00000080;
  local_14c = 0;
  local_140 = 0;
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
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0x101;
  local_228 = 1;
  local_218 = *(undefined1 *)(param_1[5] + 1);
  local_300 = param_2;
  uVar5 = FUN_146c6fae2(&local_308);
  *puVar3 = uVar5;
  if (plVar4 != &local_190) {
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
    *plVar4 = local_190;
    local_190 = 0;
    *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_188;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_188._4_4_;
    uStack_188 = 0;
  }
  FUN_146ec7826(&local_308);
  if ((local_80 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcae1e FUN_143bcae1e body=29 status=ok
// SIG undefined FUN_143bcae1e(void)

undefined8 FUN_143bcae1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bcae3c FUN_143bcae3c body=372 status=ok
// SIG undefined FUN_143bcae3c(void)

void FUN_143bcae3c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  float fVar4;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined8 local_b0;
  undefined1 local_a8;
  double local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149f64a48;
  local_e0 = 1;
  local_d8 = 0x3ff8000000000000;
  local_d0 = 0x3eb0c6f7a0000000;
  local_c8 = 0x3eb0c6f7a0000000;
  local_b7 = 1;
  local_b0 = 0;
  local_98 = 0x3fd0000000000000;
  local_90 = 0x101;
  local_8e = 1;
  local_8c = 0x358637bd;
  local_88 = 1;
  local_84 = 0x3c23d70a;
  local_48 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  lVar1 = *param_1;
  fVar4 = *(float *)(lVar1 + 8);
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  local_c0 = (double)fVar4;
  local_b8 = *(undefined1 *)(lVar1 + 1);
  local_a8 = *(undefined1 *)(lVar1 + 2);
  local_a0 = (double)*(float *)(lVar1 + 4);
  local_80 = param_2;
  uVar3 = FUN_146c7648e(&local_e8);
  *(undefined1 *)param_1[1] = uVar3;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != &local_78) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    *plVar2 = local_78;
    local_78 = 0;
    *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_70._4_4_;
    uStack_70 = 0;
  }
  FUN_146ec77cc(&local_e8);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcafb2 FUN_143bcafb2 body=764 status=ok
// SIG undefined FUN_143bcafb2(void)

void FUN_143bcafb2(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148 [2];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  ulonglong uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined3 uStack_c0;
  undefined5 local_bd;
  undefined3 uStack_b8;
  undefined8 uStack_b5;
  undefined1 *local_ac;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b5 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_bd = 0;
  local_ac = &DAT_100000002;
  local_98 = (undefined1 *)0x0;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_298 = *(longlong *)*param_1;
  uStack_290 = (undefined4)((longlong *)*param_1)[1];
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0x80;
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = param_2;
  FUN_146bc855c(&local_128,&local_298);
  local_158 = local_88;
  local_168 = (longlong)local_98;
  local_268 = local_68;
  uStack_264 = uStack_64;
  uStack_260 = uStack_60;
  uStack_25c = uStack_5c;
  local_278 = (undefined4)local_78;
  uStack_274 = local_78._4_4_;
  uStack_270 = (undefined4)uStack_70;
  uStack_26c = uStack_70._4_4_;
  local_288 = (undefined4)local_88;
  uStack_284 = local_88._4_4_;
  uStack_280 = uStack_80;
  uStack_27c = uStack_7c;
  local_298 = (longlong)local_98;
  uStack_290 = uStack_90;
  uStack_28c = uStack_8c;
  local_98 = &LAB_143bcb2b0;
  local_88 = (longlong *)0x0;
  local_78 = &PTR_LAB_14af7ae00;
  uStack_70 = &local_128;
  uStack_160 = uStack_90;
  uStack_15c = uStack_8c;
  local_138 = local_68;
  uStack_134 = uStack_64;
  uStack_130 = uStack_60;
  uStack_12c = uStack_5c;
  uStack_150 = uStack_80;
  uStack_14c = uStack_7c;
  if (local_168 != 0) {
    plVar2 = local_158;
    if (local_158 == (longlong *)0x0) {
      plVar2 = local_148;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_146c68b4c(&local_d8);
  if ((longlong)(int)local_c8 != 0) {
    lVar4 = (longlong)(int)local_c8 << 6;
    lVar3 = lStack_d0;
    do {
      FUN_146c7f310(&local_168,lVar3);
      FUN_1483150ae(&local_298,param_2,&local_168);
      FUN_148315182(&local_298,0xffffffff);
      FUN_148315ddc(&local_298);
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_120 >> 0x20;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_1447a08a2(&local_128,0);
  }
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    FUN_1446efbd8(local_118,0);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1482f1656(&local_d8);
  if ((local_30 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcb330 FUN_143bcb330 body=29 status=ok
// SIG undefined FUN_143bcb330(void)

undefined8 FUN_143bcb330(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bcb34e FUN_143bcb34e body=493 status=ok
// SIG undefined FUN_143bcb34e(void)

void FUN_143bcb34e(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  code *local_1a8 [2];
  undefined8 local_198;
  undefined **local_188;
  code *local_180;
  undefined **local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined2 local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  puVar1 = (undefined8 *)param_1[1];
  local_1b8 = puVar1[2];
  local_1c8 = *puVar1;
  uStack_1c0 = puVar1[1];
  puVar2 = (undefined4 *)*param_1;
  local_1d8 = *(undefined8 *)(puVar2 + 4);
  local_1e8 = *puVar2;
  uStack_1e4 = puVar2[1];
  uStack_1e0 = puVar2[2];
  uStack_1dc = puVar2[3];
  local_168 = &PTR_FUN_14ae97770;
  local_128 = 0;
  local_118 = 0;
  local_e8 = 0x100;
  local_e0 = 0x3e45798ee2308c3a;
  local_d8 = 0x3ee4f8b588000000;
  local_d0 = 0x3fb999999999999a;
  local_c8 = 0x3fd0000000000000;
  local_c0 = 0x101;
  local_be = 1;
  local_bc = 0x358637bd;
  local_b8 = 1;
  local_b4 = 0x3c23d70a;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_e4 = 1.0 / *(float *)(param_1[2] + 0xc);
  local_160 = param_2;
  local_158 = local_1e8;
  uStack_154 = uStack_1e4;
  uStack_150 = uStack_1e0;
  uStack_14c = uStack_1dc;
  local_148 = local_1d8;
  local_140 = local_1c8;
  uStack_138 = uStack_1c0;
  local_130 = local_1b8;
  uVar4 = FUN_148313ca8();
  *(undefined1 *)param_1[3] = uVar4;
  pcVar3 = (char *)param_1[2];
  if (*pcVar3 == '\x01') {
    local_1f8 = *(undefined4 *)(pcVar3 + 4);
    local_198 = 0;
    local_188 = &PTR_LAB_14aee5540;
    local_180 = FUN_148266949;
    local_1a8[0] = FUN_148483c38;
    FUN_148315e9c(&local_168,local_1a8,pcVar3[8],0xffffffff);
  }
  FUN_1483f9eac(&local_168);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcb53c FUN_143bcb53c body=1612 status=ok
// SIG undefined FUN_143bcb53c(void)

void FUN_143bcb53c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  char *pcVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  void *_Dst;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_258 [32];
  int local_238;
  undefined1 local_230;
  undefined1 local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  code *local_1d8 [2];
  undefined8 local_1c8;
  undefined **local_1b8;
  code *local_1b0;
  undefined **local_198;
  longlong local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined2 local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar16 = 0;
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_149f3bf50;
  plVar1 = puVar8 + 4;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  *(undefined4 *)(puVar8 + 5) = 1;
  FUN_1411b3bbe(plVar1,0);
  *(void **)puVar8[4] = _Dst;
  puVar8[2] = param_2;
  FUN_1411b3144(puVar8,0);
  *puVar8 = &PTR_FUN_149f3be80;
  FUN_1411b3144(puVar8,0);
  FUN_146c18272(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)*param_1,puVar8);
  uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar12 = 1;
    if (1 < (int)uVar7) {
      uVar16 = (ulonglong)uVar7;
    }
    do {
      uVar14 = uVar12;
      if ((uint)uVar16 == uVar14) goto LAB_143bcb674;
      uVar12 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar14 >> 9] +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    uVar16 = (ulonglong)uVar14;
  }
LAB_143bcb674:
  iVar19 = -1;
  if ((uint)uVar16 != uVar7) {
    iVar19 = -1;
    do {
      iVar11 = *(int *)(*(longlong *)(*plVar1 + (uVar16 >> 9) * 8) +
                       (ulonglong)((uint)uVar16 & 0x1ff) * 4);
      if (iVar19 < iVar11) {
        iVar19 = iVar11;
      }
      uVar12 = (uint)uVar16 + 1;
      if ((int)uVar12 < (int)uVar7) {
        uVar12 = uVar7;
      }
      do {
        if (uVar12 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar12;
          break;
        }
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != uVar7);
  }
  pdVar2 = (double *)param_1[2];
  local_1e8 = pdVar2[2];
  local_1f8 = *pdVar2;
  dStack_1f0 = pdVar2[1];
  pdVar2 = (double *)param_1[1];
  local_208 = pdVar2[2];
  local_218 = *pdVar2;
  dStack_210 = pdVar2[1];
  local_198 = &PTR_FUN_14ae97770;
  local_158 = 0;
  local_148 = 0;
  local_118 = 0x100;
  local_110 = 0x3e45798ee2308c3a;
  local_108 = 0x3ee4f8b588000000;
  local_100 = 0x3fb999999999999a;
  local_f8 = 0x3fd0000000000000;
  local_f0 = 0x101;
  local_ee = 1;
  local_ec = 0x358637bd;
  local_e8 = 1;
  local_e4 = 0x3c23d70a;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  lVar3 = param_1[3];
  local_114 = 1.0 / *(float *)(lVar3 + 0x10);
  dVar5 = (double)*(float *)(lVar3 + 0xc);
  local_188 = local_218 - dVar5 * local_1f8;
  dStack_180 = dStack_210 - dStack_1f0 * dVar5;
  local_178 = local_208 - local_1e8 * dVar5;
  iVar11 = iVar19 + 1;
  local_230 = 1;
  local_228 = 0;
  local_238 = iVar11;
  local_190 = param_2;
  local_170 = local_1f8;
  dStack_168 = dStack_1f0;
  local_160 = local_1e8;
  FUN_14831208c(&local_198,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),0,puVar8);
  uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar16 = 0;
  if (uVar7 != 0) {
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U)) {
      uVar17 = 1;
      uVar6 = 1;
      if (1 < (int)uVar7) {
        uVar17 = (ulonglong)uVar7;
      }
      do {
        uVar10 = uVar6;
        uVar12 = (uint)uVar10;
        uVar16 = uVar17;
        if ((uint)uVar17 == uVar12) break;
        uVar6 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar10;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10 >> 9] +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
    }
  }
  iVar15 = iVar19;
  if ((uint)uVar16 != uVar7) {
    do {
      iVar11 = *(int *)(*(longlong *)(*plVar1 + (uVar16 >> 9) * 8) +
                       (ulonglong)((uint)uVar16 & 0x1ff) * 4);
      if (iVar15 < iVar11) {
        iVar15 = iVar11;
      }
      uVar12 = (uint)uVar16 + 1;
      if ((int)uVar12 < (int)uVar7) {
        uVar12 = uVar7;
      }
      do {
        if (uVar12 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar12;
          break;
        }
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != uVar7);
    iVar11 = iVar15 + 1;
  }
  dVar5 = (double)*(float *)(param_1[3] + 0xc) + (double)*(float *)(param_1[3] + 0xc);
  local_188 = dVar5 * local_170 + local_188;
  dStack_180 = dStack_168 * dVar5 + dStack_180;
  local_178 = local_160 * dVar5 + local_178;
  local_228 = 1;
  local_230 = 0;
  local_238 = iVar11;
  FUN_14831208c(&local_198,1,0,puVar8);
  uVar12 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar7 = 0;
  if ((uVar12 != 0) &&
     (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar18 = 1;
    if (1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    do {
      uVar7 = uVar14;
      if (uVar14 == uVar18) break;
      uVar9 = uVar18 >> 9;
      uVar13 = uVar18 & 0x1ff;
      uVar7 = uVar18;
      uVar18 = uVar18 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  do {
    if (uVar7 == uVar12) {
      pcVar4 = (char *)param_1[3];
      if (*pcVar4 != '\0') {
        local_238 = *(int *)(pcVar4 + 4);
        local_1c8 = 0;
        local_1b8 = &PTR_LAB_14aee5540;
        local_1b0 = FUN_148266949;
        local_1d8[0] = FUN_148483c38;
        FUN_148315e9c(&local_198,local_1d8,pcVar4[8],0xffffffff);
      }
      FUN_146c3d890(*(undefined8 *)(param_2 + 0x208),*(undefined8 *)*param_1);
      FUN_1483f9eac(&local_198);
      if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    iVar11 = *(int *)(*(longlong *)(*plVar1 + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((iVar19 < iVar11) && (iVar11 <= iVar15)) {
      FUN_146c0b65a(param_2,uVar7,1,0);
    }
    uVar14 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar12) {
      uVar14 = uVar12;
    }
    uVar18 = uVar7;
    do {
      uVar7 = uVar14;
      if (uVar14 - 1 == uVar18) break;
      uVar7 = uVar18 + 1;
      uVar18 = uVar7;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bcbb8a FUN_143bcbb8a body=534 status=ok
// SIG undefined FUN_143bcbb8a(void)

void FUN_143bcbb8a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined1 local_12f;
  undefined8 local_128;
  undefined2 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x01') {
    puVar1 = (undefined8 *)param_1[2];
    local_188 = puVar1[2];
    local_198 = *puVar1;
    uStack_190 = puVar1[1];
    puVar1 = (undefined8 *)param_1[1];
    local_1a8 = puVar1[2];
    local_1b8 = *(undefined4 *)puVar1;
    uStack_1b4 = *(undefined4 *)((longlong)puVar1 + 4);
    local_168 = *puVar1;
    uStack_1b0 = *(undefined4 *)(puVar1 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    uStack_160 = puVar1[1];
    local_178 = &PTR_FUN_14ae97770;
    local_138 = 0;
    local_128 = 0;
    local_f8 = 0x100;
    local_f4 = 0x3f800000;
    local_f0 = 0x3e45798ee2308c3a;
    local_e0 = 0x3fb999999999999a;
    local_d8 = 0x3fd0000000000000;
    local_d0 = 0x101;
    local_ce = 1;
    local_cc = 0x358637bd;
    local_c8 = 1;
    local_c4 = 0x3c23d70a;
    local_60 = 0;
    local_58 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_e8 = 0x3ee4f8b588000000;
    local_170 = param_2;
    local_158 = local_1a8;
    local_150 = local_198;
    uStack_148 = uStack_190;
    local_140 = local_188;
    FUN_148313ca8(&local_178);
    FUN_1483f9eac(&local_178);
    pcVar2 = (char *)*param_1;
  }
  puVar1 = (undefined8 *)param_1[2];
  local_1c8 = puVar1[2];
  local_1d8 = *puVar1;
  uStack_1d0 = puVar1[1];
  puVar1 = (undefined8 *)param_1[1];
  local_1f8 = *puVar1;
  uStack_1f0 = puVar1[1];
  local_1e8 = puVar1[2];
  local_178 = &PTR_FUN_14aee4fc0;
  local_130 = pcVar2[2];
  local_12f = 0;
  local_138 = 0x3ee4f8b588000000;
  local_170 = param_2;
  local_168 = local_1f8;
  uStack_160 = uStack_1f0;
  local_158 = local_1e8;
  local_150 = local_1d8;
  uStack_148 = uStack_1d0;
  local_140 = local_1c8;
  FUN_148310196(&local_178,0);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcbda2 FUN_143bcbda2 body=340 status=ok
// SIG undefined FUN_143bcbda2(void)

void FUN_143bcbda2(undefined8 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [40];
  int local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined1 *)param_1[1];
  pcVar2 = (char *)param_1[2];
  piVar3 = (int *)param_1[3];
  local_2d = 0;
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_34 = *puVar1;
  local_33 = puVar1[1];
  local_32 = puVar1[2];
  local_31 = puVar1[3];
  local_30 = puVar1[4];
  local_2f = puVar1[5];
  local_2e = puVar1[6];
  local_2c = *(undefined4 *)(puVar1 + 8);
  cVar4 = (**(code **)(*param_2 + 200))
                    (param_2,*(undefined8 *)(*(longlong *)*param_1 + 0x98),&local_34,local_60);
  *pcVar2 = cVar4;
  if (cVar4 == '\0') {
    uVar5 = (char)(0x2010300 >> ((char)local_40 * '\b' & 0x1fU));
    if (3 < local_40) {
      uVar5 = 0;
    }
    *(undefined1 *)(piVar3 + 8) = uVar5;
    uVar5 = (undefined1)local_60[0];
    if (0xb < local_60[0] - 1U) {
      uVar5 = 0;
    }
    *(undefined1 *)piVar3 = uVar5;
    if (piVar3 != local_60) {
      if (*(longlong *)(piVar3 + 2) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(piVar3 + 2) = local_58;
      local_58 = 0;
      piVar3[4] = (int)uStack_50;
      piVar3[5] = uStack_50._4_4_;
      uStack_50 = 0;
    }
    piVar3[6] = (int)local_48;
    piVar3[7] = local_48._4_4_;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcbef8 FUN_143bcbef8 body=1796 status=ok
// SIG undefined FUN_143bcbef8(void)

void FUN_143bcbef8(undefined8 *param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined ***pppuVar24;
  undefined4 uVar25;
  int iVar26;
  uint uVar27;
  undefined ***pppuVar28;
  longlong *plVar29;
  code **ppcVar30;
  code **ppcVar31;
  longlong lVar32;
  bool bVar33;
  bool bVar34;
  undefined1 local_468 [32];
  longlong **local_448;
  undefined4 local_440;
  undefined8 *local_438;
  code *local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  double local_3e0;
  code *local_3d8;
  longlong **pplStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  code *local_388 [2];
  undefined8 local_378;
  undefined **local_368;
  code **local_360;
  code *local_348 [4];
  undefined **local_328;
  code **local_320;
  code **local_318;
  undefined8 local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  longlong *local_2d8;
  longlong local_2c8 [4];
  undefined1 local_2a8;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  longlong *local_278;
  longlong local_268 [4];
  undefined1 local_248;
  longlong local_238 [26];
  undefined1 local_168 [216];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)local_468;
  pdVar1 = (double *)param_1[1];
  pdVar2 = (double *)param_1[2];
  puVar3 = (undefined1 *)param_1[3];
  uVar4 = *(undefined8 *)(*(longlong *)*param_1 + 0x98);
  lVar32 = 0;
  do {
    FUN_1457e37e0((longlong)local_238 + lVar32);
    lVar32 = lVar32 + 0xd0;
  } while (lVar32 != 0x1a0);
  local_298 = local_238;
  local_438 = &local_2f8;
  local_2f8 = 0;
  local_2f0 = 0;
  local_3d8 = FUN_143bcc5fe;
  local_440 = 2;
  uVar25 = 0x49e061b0;
  pplStack_3d0 = &local_298;
  local_290 = param_2;
  local_288 = uVar4;
  uVar22 = FUN_1401f8d10(L"ParallelFor Task",2,1,&local_3d8);
  local_3d8 = (code *)*pdVar1;
  pplStack_3d0 = (longlong **)pdVar1[1];
  local_3c8 = pdVar1[2];
  dStack_3c0 = pdVar1[3];
  lVar32 = -(ulonglong)(pdVar1[5] != DAT_14c8464a8);
  auVar11._8_4_ = (int)lVar32;
  auVar11._0_8_ = -(ulonglong)(pdVar1[4] != DAT_14c8464a0);
  auVar11._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar23 = movmskpd(uVar22,auVar11);
  auVar12._8_4_ = (int)-(ulonglong)(pdVar1[7] != DAT_14c8464b8);
  auVar12._0_8_ = -(ulonglong)(pdVar1[6] != DAT_14c8464b0);
  auVar12._12_4_ = (int)(-(ulonglong)(pdVar1[7] != DAT_14c8464b8) >> 0x20);
  iVar26 = movmskpd(uVar25,auVar12);
  uVar27 = iVar26 << 2 | uVar23;
  if (uVar27 == 0) {
    auVar18._8_4_ = (int)-(ulonglong)((double)pplStack_3d0 != DAT_14c846488);
    auVar18._0_8_ = -(ulonglong)((double)local_3d8 != DAT_14c846480);
    auVar18._12_4_ = (int)(-(ulonglong)((double)pplStack_3d0 != DAT_14c846488) >> 0x20);
    uVar23 = movmskpd(uVar23,auVar18);
    auVar19._8_4_ = (int)-(ulonglong)(dStack_3c0 != DAT_14c846498);
    auVar19._0_8_ = -(ulonglong)(local_3c8 != DAT_14c846490);
    auVar19._12_4_ = (int)(-(ulonglong)(dStack_3c0 != DAT_14c846498) >> 0x20);
    iVar26 = movmskpd(0,auVar19);
    uVar27 = iVar26 << 2 | uVar23;
    if (uVar27 != 0) {
      lVar32 = -(ulonglong)(DAT_14c846488 + (double)pplStack_3d0 != 0.0);
      auVar16._8_4_ = (int)lVar32;
      auVar16._0_8_ = -(ulonglong)(DAT_14c846480 + (double)local_3d8 != 0.0);
      auVar16._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar16);
      lVar32 = -(ulonglong)(DAT_14c846498 + dStack_3c0 != 0.0);
      auVar10._8_4_ = (int)lVar32;
      auVar10._0_8_ = -(ulonglong)(DAT_14c846490 + local_3c8 != 0.0);
      auVar10._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      iVar26 = movmskpd(uVar27,auVar10);
      uVar27 = iVar26 << 2 | uVar23;
      if (uVar27 != 0) goto LAB_143bcc05b;
    }
    auVar17._8_4_ = (int)-(ulonglong)(pdVar1[9] != DAT_14c8464c8);
    auVar17._0_8_ = -(ulonglong)(pdVar1[8] != DAT_14c8464c0);
    auVar17._12_4_ = (int)(-(ulonglong)(pdVar1[9] != DAT_14c8464c8) >> 0x20);
    uVar23 = movmskpd(uVar23,auVar17);
    auVar20._8_4_ = (int)-(ulonglong)(pdVar1[0xb] != dRam000000014c8464d8);
    auVar20._0_8_ = -(ulonglong)(pdVar1[10] != DAT_14c8464d0);
    auVar20._12_4_ = (int)(-(ulonglong)(pdVar1[0xb] != dRam000000014c8464d8) >> 0x20);
    iVar26 = movmskpd(0,auVar20);
    uVar27 = iVar26 << 2 | uVar23;
    bVar33 = uVar27 == 0;
  }
  else {
LAB_143bcc05b:
    bVar33 = false;
  }
  local_3b8 = pdVar1[4];
  dStack_3b0 = pdVar1[5];
  local_3a8 = pdVar1[6];
  local_3a0 = pdVar1[8];
  dStack_398 = pdVar1[9];
  local_390 = pdVar1[10];
  local_428 = (code *)*pdVar2;
  dStack_420 = pdVar2[1];
  local_418 = pdVar2[2];
  dStack_410 = pdVar2[3];
  auVar7._8_8_ = -(ulonglong)(pdVar2[5] != DAT_14c8464a8);
  auVar7._0_8_ = -(ulonglong)(pdVar2[4] != DAT_14c8464a0);
  iVar26 = movmskpd(uVar23,auVar7);
  auVar5._8_4_ = (int)-(ulonglong)(pdVar2[7] != DAT_14c8464b8);
  auVar5._0_8_ = -(ulonglong)(pdVar2[6] != DAT_14c8464b0);
  auVar5._12_4_ = (int)(-(ulonglong)(pdVar2[7] != DAT_14c8464b8) >> 0x20);
  uVar23 = movmskpd(uVar27,auVar5);
  if ((uVar23 & 0x3fffffff) == 0 && iVar26 == 0) {
    auVar13._8_4_ = (int)-(ulonglong)(dStack_420 != DAT_14c846488);
    auVar13._0_8_ = -(ulonglong)((double)local_428 != DAT_14c846480);
    auVar13._12_4_ = (int)(-(ulonglong)(dStack_420 != DAT_14c846488) >> 0x20);
    uVar23 = movmskpd(iVar26,auVar13);
    auVar14._8_4_ = (int)-(ulonglong)(dStack_410 != DAT_14c846498);
    auVar14._0_8_ = -(ulonglong)(local_418 != DAT_14c846490);
    auVar14._12_4_ = (int)(-(ulonglong)(dStack_410 != DAT_14c846498) >> 0x20);
    iVar26 = movmskpd(0,auVar14);
    uVar27 = iVar26 << 2 | uVar23;
    if (uVar27 != 0) {
      auVar8._8_8_ = -(ulonglong)(DAT_14c846488 + dStack_420 != 0.0);
      auVar8._0_8_ = -(ulonglong)(DAT_14c846480 + (double)local_428 != 0.0);
      uVar23 = movmskpd(uVar23,auVar8);
      lVar32 = -(ulonglong)(DAT_14c846498 + dStack_410 != 0.0);
      auVar6._8_4_ = (int)lVar32;
      auVar6._0_8_ = -(ulonglong)(DAT_14c846490 + local_418 != 0.0);
      auVar6._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar6);
      if ((uVar27 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_143bcc1ea;
    }
    auVar9._8_4_ = (int)-(ulonglong)(pdVar2[9] != DAT_14c8464c8);
    auVar9._0_8_ = -(ulonglong)(pdVar2[8] != DAT_14c8464c0);
    auVar9._12_4_ = (int)(-(ulonglong)(pdVar2[9] != DAT_14c8464c8) >> 0x20);
    iVar26 = movmskpd(uVar23,auVar9);
    auVar15._8_4_ = (int)-(ulonglong)(pdVar2[0xb] != dRam000000014c8464d8);
    auVar15._0_8_ = -(ulonglong)(pdVar2[10] != DAT_14c8464d0);
    auVar15._12_4_ = (int)(-(ulonglong)(pdVar2[0xb] != dRam000000014c8464d8) >> 0x20);
    uVar23 = movmskpd(0,auVar15);
    bVar34 = (uVar23 & 0x3fffffff) == 0 && iVar26 == 0;
  }
  else {
LAB_143bcc1ea:
    bVar34 = false;
  }
  local_408 = pdVar2[4];
  dStack_400 = pdVar2[5];
  local_3f8 = pdVar2[6];
  local_3f0 = *(undefined4 *)(pdVar2 + 8);
  uStack_3ec = *(undefined4 *)((longlong)pdVar2 + 0x44);
  uStack_3e8 = *(undefined4 *)(pdVar2 + 9);
  uStack_3e4 = *(undefined4 *)((longlong)pdVar2 + 0x4c);
  local_3e0 = pdVar2[10];
  local_448 = &local_298;
  if ((bVar33 & bVar34) == 1) {
    local_298 = (longlong *)0x7fefffffffffffff;
    local_288 = 0;
    local_278 = (longlong *)0x0;
    local_248 = 0;
    local_2f8 = 0x7fefffffffffffff;
    local_2e8 = 0;
    local_2d8 = (longlong *)0x0;
    local_2a8 = 0;
    local_348[0] = (code *)0x0;
    local_348[2] = (code *)0x0;
    uVar21 = (**(code **)(local_238[0] + 0x90))(local_238,local_168,local_348);
    *puVar3 = uVar21;
joined_r0x000143bcc520:
    if (local_348[0] == (code *)0x0) goto LAB_143bcc53b;
    pppuVar24 = &local_328;
  }
  else {
    if ((bVar33 | bVar34) != 1) {
      local_298 = (longlong *)0x7fefffffffffffff;
      local_288 = 0;
      local_278 = (longlong *)0x0;
      local_248 = 0;
      local_2f8 = 0x7fefffffffffffff;
      local_2e8 = 0;
      local_2d8 = (longlong *)0x0;
      local_2a8 = 0;
      local_348[2] = (code *)0x0;
      local_328 = &PTR_LAB_14af7ae40;
      local_318 = &local_428;
      local_348[0] = FUN_143bcc6b8;
      local_320 = &local_3d8;
      uVar21 = (**(code **)(local_238[0] + 0x90))(local_238,local_168,local_348);
      *puVar3 = uVar21;
      goto joined_r0x000143bcc520;
    }
    ppcVar30 = &local_428;
    if (bVar34 != false) {
      ppcVar30 = &local_3d8;
    }
    ppcVar31 = local_348;
    for (lVar32 = 10; lVar32 != 0; lVar32 = lVar32 + -1) {
      *ppcVar31 = *ppcVar30;
      ppcVar30 = ppcVar30 + 1;
      ppcVar31 = ppcVar31 + 1;
    }
    local_298 = (longlong *)0x7fefffffffffffff;
    local_288 = 0;
    local_278 = (longlong *)0x0;
    local_248 = 0;
    local_2f8 = 0x7fefffffffffffff;
    local_2e8 = 0;
    local_2d8 = (longlong *)0x0;
    local_2a8 = 0;
    local_378 = 0;
    local_368 = &PTR_LAB_14af7ae20;
    local_360 = local_348;
    local_388[0] = FUN_143bcc654;
    uVar21 = (**(code **)(local_238[(ulonglong)(bVar33 ^ 1) * 0x1a] + 0x90))
                       (local_238 + (ulonglong)(bVar33 ^ 1) * 0x1a,
                        local_238 + (ulonglong)bVar33 * 0x1a,local_388);
    *puVar3 = uVar21;
    if (local_388[0] == (code *)0x0) goto LAB_143bcc53b;
    pppuVar24 = &local_368;
  }
  pppuVar28 = (undefined ***)pppuVar24[-2];
  if ((undefined ***)pppuVar24[-2] == (undefined ***)0x0) {
    pppuVar28 = pppuVar24;
  }
  (*(code *)(*pppuVar28)[2])();
LAB_143bcc53b:
  if (local_2e8 != 0) {
    plVar29 = local_2d8;
    if (local_2d8 == (longlong *)0x0) {
      plVar29 = local_2c8;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  if (local_288 != 0) {
    plVar29 = local_278;
    if (local_278 == (longlong *)0x0) {
      plVar29 = local_268;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  lVar32 = 0xd0;
  do {
    FUN_1457e5b52((longlong)local_238 + lVar32);
    lVar32 = lVar32 + -0xd0;
  } while (lVar32 != -0xd0);
  if ((local_90 ^ (ulonglong)local_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcc5fe FUN_143bcc5fe body=86 status=ok
// SIG undefined FUN_143bcc5fe(void)

void FUN_143bcc5fe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)*param_2 * 0xd0;
  *(longlong *)(lVar1 + 8 + lVar3) = param_1[(ulonglong)((longlong)*param_2 != 0) + 1];
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  FUN_146bee918(lVar1 + lVar3,0);
  lVar2 = *(longlong *)(lVar1 + 8 + lVar3);
  *(ulonglong *)(lVar1 + 0x10 + lVar3) =
       (ulonglong)(uint)(*(int *)(lVar2 + 0x214) + *(int *)(lVar2 + 0x218));
  return;
}



// FUNCTION 143bcc654 FUN_143bcc654 body=28 status=ok
// SIG undefined FUN_143bcc654(void)

undefined8 FUN_143bcc654(undefined8 param_1,undefined8 *param_2)

{
  FUN_146bcb256(*param_2,param_1);
  return param_1;
}



// FUNCTION 143bcc68e FUN_143bcc68e body=12 status=ok
// SIG undefined FUN_143bcc68e(void)

void FUN_143bcc68e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143bcc697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143bcc69a FUN_143bcc69a body=29 status=ok
// SIG undefined FUN_143bcc69a(void)

undefined8 FUN_143bcc69a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bcc6b8 FUN_143bcc6b8 body=92 status=ok
// SIG undefined FUN_143bcc6b8(void)

undefined8 FUN_143bcc6b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  FUN_146bcb256(param_2[1],local_38);
  FUN_146ba22f0(uVar1,param_1,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcc734 FUN_143bcc734 body=12 status=ok
// SIG undefined FUN_143bcc734(void)

void FUN_143bcc734(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143bcc73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143bcc740 FUN_143bcc740 body=29 status=ok
// SIG undefined FUN_143bcc740(void)

undefined8 FUN_143bcc740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bcc75e FUN_143bcc75e body=414 status=ok
// SIG undefined FUN_143bcc75e(void)

void FUN_143bcc75e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_268 [32];
  undefined1 local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined8 local_210;
  code *local_208;
  undefined1 **local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [208];
  undefined1 local_118 [216];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_268;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  local_230 = param_1[4];
  local_228 = param_1[5];
  uVar3 = *(undefined8 *)(*(longlong *)*param_1 + 0x98);
  if (*(char *)param_1[1] == '\x01') {
    lVar4 = 0;
    do {
      FUN_1457e37e0(local_1e8 + lVar4);
      lVar4 = lVar4 + 0xd0;
    } while (lVar4 != 0x1a0);
    local_200 = &local_220;
    local_238 = &local_1f8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_208 = FUN_143bcc8fe;
    local_240 = CONCAT44(local_240._4_4_,2);
    local_220 = local_1e8;
    local_218 = param_2;
    local_210 = uVar3;
    FUN_1401f8d10(L"ParallelFor Task",2,1);
    local_248 = 1;
    local_240 = uVar1;
    local_238 = (undefined8 *)uVar2;
    FUN_1485bfaf2(param_2,local_118,uVar3,local_1e8);
    lVar4 = 0xd0;
    do {
      FUN_1457e5b52(local_1e8 + lVar4);
      lVar4 = lVar4 + -0xd0;
    } while (lVar4 != -0xd0);
  }
  else {
    FUN_146ba21d6(local_1e8,uVar3,1);
    local_248 = 0;
    local_240 = uVar1;
    local_238 = (undefined8 *)uVar2;
    FUN_1485bfaf2(param_2,local_1e8,0,0);
    FUN_1457e5b52(local_1e8);
  }
  if ((local_40 ^ (ulonglong)local_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcc8fe FUN_143bcc8fe body=86 status=ok
// SIG undefined FUN_143bcc8fe(void)

void FUN_143bcc8fe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)*param_2 * 0xd0;
  *(longlong *)(lVar1 + 8 + lVar3) = param_1[(ulonglong)((longlong)*param_2 != 0) + 1];
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  FUN_146bee918(lVar1 + lVar3,0);
  lVar2 = *(longlong *)(lVar1 + 8 + lVar3);
  *(ulonglong *)(lVar1 + 0x10 + lVar3) =
       (ulonglong)(uint)(*(int *)(lVar2 + 0x214) + *(int *)(lVar2 + 0x218));
  return;
}



// FUNCTION 143bcc954 FUN_143bcc954 body=356 status=ok
// SIG undefined FUN_143bcc954(void)

void FUN_143bcc954(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  void **local_d0;
  undefined1 *local_c8;
  undefined8 **local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_a0 = param_2;
  FUN_142984024(&local_a0);
  lVar7 = (longlong)(int)uStack_90;
  if (1 < lVar7) {
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar5);
      }
    }
    else {
      uStack_b0 = (ulonglong)uVar5;
      FUN_1446f48e2(&local_b8);
      memset(local_b8,0,(ulonglong)uVar5 << 2);
    }
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(local_98 + lVar3 * 8);
      lVar4 = (longlong)(int)plVar1[1];
      if (lVar4 != 0) {
        lVar2 = *plVar1;
        lVar6 = 0;
        do {
          *(int *)((longlong)local_b8 + (longlong)*(int *)(lVar2 + lVar6) * 4) = (int)lVar3;
          lVar6 = lVar6 + 4;
        } while (lVar4 * 4 != lVar6);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar7);
    local_d0 = &local_b8;
    local_c0 = &local_d0;
    local_c8 = &LAB_143bccaba;
    FUN_146bcec82(param_2,*param_1,&local_c8,0xffffffff);
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146be9400(&local_98);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bccac8 FUN_143bccac8 body=448 status=ok
// SIG undefined FUN_143bccac8(void)

void FUN_143bccac8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong **local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), local_40 = lVar2, lVar2 == 0)) {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(param_1,iVar1);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0;
  }
  else {
    uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar8 = 0;
    if ((uVar5 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar7 = 1;
      uVar3 = 1;
      if (1 < (int)uVar5) {
        uVar7 = uVar5;
      }
      do {
        uVar8 = uVar7;
        if (uVar7 == uVar3) break;
        uVar4 = uVar3 >> 9;
        uVar6 = uVar3 & 0x1ff;
        uVar8 = uVar3;
        uVar3 = uVar3 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar4] +
                                           (ulonglong)uVar6 * 2) - 1U));
    }
    if (uVar8 != uVar5) {
      do {
        local_50 = (undefined1 *)
                   CONCAT44(local_50._4_4_,
                            *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                             (ulonglong)(uVar8 & 0x1ff) * 4));
        FUN_1449e3bb0(*param_1,&local_50);
        uVar7 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar5) {
          uVar7 = uVar5;
        }
        do {
          uVar3 = uVar7;
          if (uVar7 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar3 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar3;
      } while (uVar8 != uVar5);
    }
    FUN_144958a06(*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1));
    local_60 = &local_40;
    local_48 = &local_60;
    local_58 = *param_1;
    local_50 = &LAB_143bccc8a;
    FUN_146bcec82(param_2,param_1[1],&local_50,0xffffffff);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcccda FUN_143bcccda body=1010 status=ok
// SIG undefined FUN_143bcccda(void)

void FUN_143bcccda(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  wchar_t **local_c0;
  int local_b4;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 ***local_a0;
  wchar_t *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    uVar11 = (ulonglong)*(byte *)*param_1;
    uVar10 = *(uint *)((byte *)*param_1 + 4);
    if (uVar11 == 0) {
      if (((-1 < (int)uVar10) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) &&
         (iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), (int)uVar10 < iVar1))
      goto LAB_143bcce0e;
    }
    else if (*(char *)(param_2 + 0x1a8) != '\0') {
LAB_143bcce0e:
      puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(puVar3,param_2,(ulonglong)uVar10 << 0x20 | uVar11);
      uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar10 = 0;
      if ((uVar7 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar9 = 1;
        uVar4 = 1;
        if (1 < (int)uVar7) {
          uVar9 = uVar7;
        }
        do {
          uVar10 = uVar9;
          if (uVar9 == uVar4) break;
          uVar6 = uVar4 >> 9;
          uVar8 = uVar4 & 0x1ff;
          uVar10 = uVar4;
          uVar4 = uVar4 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6] +
                                             (ulonglong)uVar8 * 2) - 1U));
      }
      local_b0 = puVar3;
      if (uVar10 != uVar7) {
        do {
          if (puVar3[1] == 0) {
            uVar2 = FUN_146bc96d4(*puVar3,uVar10);
          }
          else {
            uVar2 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(puVar3[1] + 0x20) + (ulonglong)(uVar10 >> 9) * 8)
                     + (ulonglong)(uVar10 & 0x1ff) * 4);
          }
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,uVar2);
          FUN_1449e3bb0(param_1[2],&local_98);
          uVar9 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar7) {
            uVar9 = uVar7;
          }
          do {
            uVar4 = uVar9;
            if (uVar9 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar4 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x148) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar4;
        } while (uVar10 != uVar7);
      }
      FUN_144958a06(*(undefined8 *)param_1[2],*(undefined4 *)((undefined8 *)param_1[2] + 1));
      local_78 = 0;
      local_70 = 0;
      local_98 = (wchar_t *)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_b4 = 0;
      plVar5 = (longlong *)param_1[2];
      if (0 < (int)plVar5[1]) {
        do {
          local_a8 = (code *)((longlong)local_b4 * 4 + *plVar5);
          local_a0 = (undefined8 ***)&local_b4;
          FUN_140263e2a(&local_98,&local_c8,&local_a8,0);
          local_b4 = local_b4 + 1;
          plVar5 = (longlong *)param_1[2];
        } while (local_b4 < (int)plVar5[1]);
      }
      local_c8 = &local_b0;
      local_a0 = &local_c8;
      local_a8 = FUN_143bcd0ce;
      local_c0 = &local_98;
      FUN_146bcec82(param_2,param_1[3],&local_a8,0xffffffff);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar11 != 0) {
        FUN_14472eb64(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143bccde0;
    }
  }
  local_98 = L"SplitMeshByPolygroups_MissingGroups";
  uStack_90._0_4_ = 0x23;
  FUN_1446e940c(&local_c8,&local_98);
  local_98 = L"UGeometryScriptLibrary_MeshDecompositionFunctions";
  uStack_90._0_4_ = 0x31;
  FUN_1446e940c(&local_b0,&local_98);
  local_98 = L"SplitMeshByPolygroups: Target Polygroup Layer does not exist";
  uStack_90 = CONCAT44(uStack_90._4_4_,0x3c);
  FUN_140208c1e(&local_a8,&local_b0,&local_c8,&local_98);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_a8);
  if (local_a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
LAB_143bccde0:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcd0ce FUN_143bcd0ce body=173 status=ok
// SIG undefined FUN_143bcd0ce(void)

undefined4 FUN_143bcd0ce(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = (*(undefined8 **)*param_1)[1];
  if (lVar1 == 0) {
    uVar3 = FUN_146bc96d4(**(undefined8 **)*param_1);
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                     (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  plVar2 = (longlong *)param_1[1];
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar4 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[9] - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *plVar2 + (longlong)iVar5 * 0x10;
        if (*(uint *)(*plVar2 + (longlong)iVar5 * 0x10) == uVar3) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar5 = *(int *)(lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 143bcd17c FUN_143bcd17c body=647 status=ok
// SIG undefined FUN_143bcd17c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143bcd17c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  undefined1 local_380;
  undefined8 local_370;
  undefined4 local_368;
  longlong local_360 [19];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined2 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*(longlong *)(param_2 + 0x208) != 0) {
    FUN_14582ed12(*param_1);
    FUN_146c02390(*(undefined8 *)(*param_1 + 0x208),*(undefined8 *)(param_2 + 0x208),1,0);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_360[0xf] = 0;
  local_360[0x10] = 0;
  local_2bc = 0xffffffff00000080;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_278 = 0;
  local_270 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_26c = 0xffffffff00000080;
  local_264 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0x101;
  local_220 = 0;
  local_218 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_214 = 0xffffffff00000080;
  local_20c = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c4 = 0xffffffff00000080;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0x101;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f7 = 1;
  local_f8 = 1;
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_4f = 1;
  local_50 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_360[0xd] = 0;
  local_360[0xe] = 0;
  local_360[0xb] = 0;
  local_360[0xc] = 0;
  local_360[9] = 0;
  local_360[10] = 0;
  local_360[7] = 0;
  local_360[8] = 0;
  local_360[5] = 0;
  local_360[6] = 0;
  local_360[3] = 0;
  local_360[4] = 0;
  local_360[1] = 0;
  local_360[2] = 0;
  local_360[0] = *param_1;
  local_370 = **(undefined8 **)(param_1[1] + 8);
  local_368 = *(undefined4 *)(*(undefined8 **)(param_1[1] + 8) + 1);
  local_380 = 1;
  local_388 = local_360 + 1;
  FUN_146bce922(local_360,param_2,&local_370,local_360 + 0xf);
  FUN_146bc8622(local_360 + 1);
  FUN_146bfdcfe(local_360 + 0xf);
  if ((local_28 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcd404 FUN_143bcd404 body=873 status=ok
// SIG undefined FUN_143bcd404(void)

void FUN_143bcd404(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined1 local_3c0;
  longlong local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined4 local_2e4;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined2 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_328 = 0;
  uStack_320 = 0;
  FUN_143bab15a(*param_1,param_2,&local_328,1);
  if (*(char *)param_1[1] == '\0') {
    FUN_14582f278(param_1[2]);
    FUN_146c03744(param_1[2],param_2,0,0);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2ec = 0xffffffff00000080;
  local_2e4 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0x101;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f4 = 0xffffffff00000080;
  local_1ec = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0x101;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_127 = 1;
  local_128 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a4 = 0xffffffff00000080;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x101;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c8 = &local_398;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a0 = param_1[2];
  local_3c0 = *(undefined1 *)param_1[3];
  local_3b0 = local_328;
  local_3a8 = (undefined4)uStack_320;
  FUN_146bce922(&local_3a0,param_2);
  lVar3 = local_388;
  if ((*(char *)param_1[3] == '\x01') && (lVar8 = (longlong)(int)uStack_380, lVar8 != 0)) {
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar7);
      uVar4 = FUN_146bc96d4(param_1[2],uVar1);
      iVar5 = FUN_146be9b2a(&local_1c8,uVar4);
      lVar2 = param_1[2];
      if (*(char *)(lVar2 + 0x1a8) == '\x01') {
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x198) + (ulonglong)(uVar1 >> 9) * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 4) = iVar5;
        iVar6 = iVar5 + 1;
        if (iVar5 + 1 <= *(int *)(lVar2 + 0x1b0)) {
          iVar6 = *(int *)(lVar2 + 0x1b0);
        }
        *(int *)(lVar2 + 0x1b0) = iVar6;
      }
      lVar7 = lVar7 + 4;
    } while (lVar8 * 4 != lVar7);
  }
  FUN_146bc8622(&local_398);
  FUN_146bfdcfe(&local_318);
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcd76e FUN_143bcd76e body=689 status=ok
// SIG undefined FUN_143bcd76e(void)

/* WARNING: Removing unreachable block (ram,0x000143bcd9f0) */
/* WARNING: Removing unreachable block (ram,0x000143bcd9fc) */
/* WARNING: Removing unreachable block (ram,0x000143bcda11) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bcd76e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  longlong *local_120;
  longlong *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149fab260;
  plVar7 = plVar8 + 2;
  local_1b8 = 0;
  FUN_1411b354a(plVar7,0,0,0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  FUN_146c00942(plVar7,param_2);
  FUN_14845abbc(&local_1a8);
  plStack_118 = (longlong *)0x0;
  local_110 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_108 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_100 = DAT_14c8464f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  local_1a8 = &PTR_FUN_14af7af30;
  local_48 = 90.0;
  local_40 = 0;
  local_120 = plVar7;
  plVar7 = plStack_118;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar7 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar7 = plStack_118;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar7 = plStack_118;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar7 = plStack_118;
        }
      }
    }
  }
  plStack_118 = plVar7;
  puVar4 = (undefined8 *)*param_1;
  local_e0 = puVar4[6];
  local_110 = *puVar4;
  uStack_108 = puVar4[1];
  local_100 = puVar4[2];
  uStack_f8 = puVar4[3];
  uStack_f0 = puVar4[4];
  uStack_e8 = puVar4[5];
  pcVar5 = (char *)param_1[1];
  if (*pcVar5 == '\x01') {
    pfVar9 = (float *)param_1[2];
    fVar3 = *pfVar9;
  }
  else {
    fVar3 = *(float *)(pcVar5 + 4);
    pfVar9 = (float *)param_1[2];
  }
  local_d8 = (double)-fVar3;
  local_d0 = (double)*pfVar9;
  local_48 = (double)*(float *)param_1[3];
  local_40 = pcVar5[8] ^ 1;
  FUN_1484697dc(&local_1a8,0);
  uVar6 = local_1a0;
  local_1a0 = 0;
  FUN_146c00942(param_2,uVar6);
  FUN_1485c0062(&local_1a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcda20 FUN_143bcda20 body=689 status=ok
// SIG undefined FUN_143bcda20(void)

/* WARNING: Removing unreachable block (ram,0x000143bcdca2) */
/* WARNING: Removing unreachable block (ram,0x000143bcdcae) */
/* WARNING: Removing unreachable block (ram,0x000143bcdcc3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bcda20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  longlong *local_120;
  longlong *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149fab260;
  plVar7 = plVar8 + 2;
  local_1b8 = 0;
  FUN_1411b354a(plVar7,0,0,0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  FUN_146c00942(plVar7,param_2);
  FUN_14845abbc(&local_1a8);
  plStack_118 = (longlong *)0x0;
  local_110 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_108 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_100 = DAT_14c8464f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  local_1a8 = &PTR_FUN_14af7af70;
  local_48 = 180.0;
  local_40 = 0;
  local_120 = plVar7;
  plVar7 = plStack_118;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar7 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar7 = plStack_118;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar7 = plStack_118;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar7 = plStack_118;
        }
      }
    }
  }
  plStack_118 = plVar7;
  puVar4 = (undefined8 *)*param_1;
  local_e0 = puVar4[6];
  local_110 = *puVar4;
  uStack_108 = puVar4[1];
  local_100 = puVar4[2];
  uStack_f8 = puVar4[3];
  uStack_f0 = puVar4[4];
  uStack_e8 = puVar4[5];
  pcVar5 = (char *)param_1[1];
  if (*pcVar5 == '\x01') {
    pfVar9 = (float *)param_1[2];
    fVar3 = *pfVar9;
  }
  else {
    fVar3 = *(float *)(pcVar5 + 4);
    pfVar9 = (float *)param_1[2];
  }
  local_d8 = (double)-fVar3;
  local_d0 = (double)*pfVar9;
  local_48 = (double)*(float *)param_1[3];
  local_40 = pcVar5[8] ^ 1;
  FUN_14846a4ba(&local_1a8,0);
  uVar6 = local_1a0;
  local_1a0 = 0;
  FUN_146c00942(param_2,uVar6);
  FUN_1485c0062(&local_1a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcdcd2 FUN_143bcdcd2 body=733 status=ok
// SIG undefined FUN_143bcdcd2(void)

/* WARNING: Removing unreachable block (ram,0x000143bcdf80) */
/* WARNING: Removing unreachable block (ram,0x000143bcdf8c) */
/* WARNING: Removing unreachable block (ram,0x000143bcdfa1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bcdcd2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined **local_1b8;
  undefined8 local_1b0;
  longlong *local_130;
  longlong *plStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_58;
  double local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149fab260;
  plVar7 = plVar8 + 2;
  local_1c8 = 0;
  FUN_1411b354a(plVar7,0,0,0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  FUN_146c00942(plVar7);
  FUN_14845abbc(&local_1b8);
  plStack_128 = (longlong *)0x0;
  local_120 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_118 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_110 = DAT_14c8464f0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0x3ff0000000000000;
  local_1b8 = &PTR_FUN_14af7af90;
  local_58 = 100.0;
  local_50 = 100.0;
  local_48 = 0;
  local_130 = plVar7;
  plVar7 = plStack_128;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar7 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar7 = plStack_128;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar7 = plStack_128;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar7 = plStack_128;
        }
      }
    }
  }
  plStack_128 = plVar7;
  puVar4 = (undefined8 *)*param_1;
  local_f0 = puVar4[6];
  local_120 = *puVar4;
  uStack_118 = puVar4[1];
  local_110 = puVar4[2];
  uStack_108 = puVar4[3];
  uStack_100 = puVar4[4];
  uStack_f8 = puVar4[5];
  pcVar5 = (char *)param_1[1];
  if (*pcVar5 == '\x01') {
    pfVar9 = (float *)param_1[2];
    fVar3 = *pfVar9;
  }
  else {
    fVar3 = *(float *)(pcVar5 + 4);
    pfVar9 = (float *)param_1[2];
  }
  local_e8 = (double)-fVar3;
  local_e0 = (double)*pfVar9;
  local_58 = (double)*(float *)param_1[3];
  local_50 = (double)*(float *)param_1[4];
  local_48 = (pcVar5[8] != '\x01') + 1;
  if (pcVar5[8] == '\0') {
    local_48 = 0;
  }
  FUN_14846a20a(&local_1b8,0);
  uVar6 = local_1b0;
  local_1b0 = 0;
  FUN_146c00942(param_2,uVar6);
  FUN_1485c0062(&local_1b8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcdfb0 FUN_143bcdfb0 body=182 status=ok
// SIG undefined FUN_143bcdfb0(void)

void FUN_143bcdfb0(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = &local_58;
  local_50 = *param_1;
  local_48 = param_1[1];
  local_40 = param_1[2];
  local_38 = param_1[3];
  local_30 = param_1[4];
  local_68 = &local_18;
  local_18 = 0;
  local_10 = 0;
  local_28 = FUN_143bce068;
  local_70 = 0;
  local_58 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),1);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bce068 FUN_143bce068 body=500 status=ok
// SIG undefined FUN_143bce068(void)

void FUN_143bce068(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  ulonglong uVar8;
  double *pdVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *param_2;
  if (((int)uVar3 < 0) ||
     (lVar4 = *param_1, *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar3))
  goto LAB_143bce0ca;
  uVar10 = (ulonglong)(uVar3 >> 9);
  uVar8 = (ulonglong)(uVar3 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar10 * 8) +
                                  uVar8 * 2) - 1U)) goto LAB_143bce0ca;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar10 * 8);
  local_78 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x18);
  local_88 = (double)*puVar1;
  uStack_80 = (double)puVar1[1];
  FUN_146ba22f0(param_1[1],&local_a0);
  if (*(char *)param_1[2] == '\0') {
    pdVar9 = (double *)param_1[4];
    uVar11 = (undefined4)*(undefined8 *)param_1[3];
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)param_1[3] >> 0x20);
    dVar6 = local_a0;
LAB_143bce178:
    dVar6 = sin((dVar6 + *(double *)param_1[5]) * *pdVar9);
    local_90 = dVar6 * (double)CONCAT44(uVar12,uVar11) + local_90;
  }
  else if (*(char *)param_1[2] == '\x01') {
    pdVar9 = (double *)param_1[4];
    uVar11 = (undefined4)*(undefined8 *)param_1[3];
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)param_1[3] >> 0x20);
    dVar6 = SQRT(local_a0 * local_a0 + local_98 * local_98);
    goto LAB_143bce178;
  }
  lVar4 = param_1[1];
  local_60 = local_90 * *(double *)(lVar4 + 0x48);
  local_68 = *(double *)(lVar4 + 0x40) * local_98;
  local_70 = *(double *)(lVar4 + 0x38) * local_a0;
  FUN_146bed047(&local_58,lVar4);
  local_78 = local_48 + *(double *)(lVar4 + 0x30);
  uStack_80 = local_50 + *(double *)(lVar4 + 0x28);
  local_88 = local_58 + *(double *)(lVar4 + 0x20);
  lVar4 = *param_1;
  cVar7 = FUN_146bfed03();
  if (cVar7 != '\0') {
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar10 * 8);
    *(double *)(lVar5 + 0x10 + uVar8 * 0x18) = local_78;
    puVar2 = (undefined4 *)(lVar5 + uVar8 * 0x18);
    *puVar2 = (undefined4)local_88;
    puVar2[1] = local_88._4_4_;
    puVar2[2] = (undefined4)uStack_80;
    puVar2[3] = uStack_80._4_4_;
    if (*(char *)(lVar4 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
      UNLOCK();
    }
  }
LAB_143bce0ca:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bce25e FUN_143bce25e body=495 status=ok
// SIG undefined FUN_143bce25e(void)

void FUN_143bce25e(longlong *param_1,code *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  code **local_f8;
  code *local_e8;
  code **local_e0;
  code *local_d8;
  longlong local_d0;
  double *local_c8;
  code **local_c0;
  char local_b8;
  code *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  code *local_98;
  code **local_90;
  code *local_88;
  undefined8 local_80;
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d0 = *param_1;
  uVar5 = *(uint *)(local_d0 + 0x20);
  dVar1 = *(double *)(local_d0 + 8);
  dVar2 = *(double *)(local_d0 + 0x10);
  dVar3 = *(double *)(local_d0 + 0x18);
  lVar6 = 0x10;
  do {
    uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
    dVar7 = (double)(((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * 10000.0);
    *(double *)((longlong)&local_88 + lVar6) = dVar1 + dVar7;
    *(double *)((longlong)local_78 + lVar6 + -8) = dVar2 + dVar7;
    *(double *)((longlong)local_78 + lVar6) = dVar7 + dVar3;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x58);
  local_a8 = 0;
  uStack_a0 = 0;
  cVar4 = *(char *)(local_d0 + 0x28);
  local_b0 = param_2;
  if (cVar4 != '\0') {
    FUN_146c37e28(&local_b0,1);
    local_d0 = *param_1;
  }
  local_c8 = local_78;
  local_c0 = &local_b0;
  lVar6 = *(longlong *)param_1[1];
  local_d8 = param_2;
  local_b8 = cVar4;
  if (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x3c)) {
    local_90 = &local_e8;
    local_e0 = &local_d8;
    local_f8 = &local_88;
    local_88 = (code *)0x0;
    local_80 = (code **)((ulonglong)local_80._4_4_ << 0x20);
    local_98 = FUN_143bce44e;
    local_100 = 0;
    local_e8 = param_2;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),1)
    ;
  }
  else {
    local_80 = &local_98;
    local_90 = &local_d8;
    local_88 = FUN_143bce75a;
    local_98 = param_2;
    FUN_143bad420((longlong *)param_1[1],param_2,&local_88,0);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bce44e FUN_143bce44e body=196 status=ok
// SIG undefined FUN_143bce44e(void)

void FUN_143bce44e(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar6 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 9) * 8)
                           + uVar6 * 2) - 1U) < 0xfffe) {
      FUN_143bce514(param_1[1],&local_40);
      cVar5 = FUN_146bfed03(&local_40);
      if (cVar5 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18) = local_30;
        puVar1 = (undefined4 *)(lVar4 + uVar6 * 0x18);
        *puVar1 = local_40;
        puVar1[1] = uStack_3c;
        puVar1[2] = uStack_38;
        puVar1[3] = uStack_34;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bce514 FUN_143bce514 body=580 status=ok
// SIG undefined FUN_143bce514(void)

double * FUN_143bce514(longlong *param_1,double *param_2,uint param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  param_2[2] = *(double *)(lVar9 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  pdVar10 = (double *)(lVar9 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  dVar2 = pdVar10[1];
  *param_2 = *pdVar10;
  param_2[1] = dVar2;
  if ((char)param_1[4] == '\x01') {
    pdVar10 = (double *)param_1[2];
    dVar2 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    local_88[0] = (double)((float *)param_1[1])[1];
    fVar1 = *(float *)param_1[1];
    local_88[2] = (pdVar10[2] + dVar2) * local_88[0] * local_88[0];
    local_88[1] = (pdVar10[1] + dVar4) * local_88[0] * local_88[0];
    local_88[0] = (*pdVar10 + dVar3) * local_88[0] * local_88[0];
    fVar11 = (float)FUN_1467f9650();
    lVar9 = *(longlong *)(param_1[3] + 8);
    lVar8 = (longlong)(int)param_3;
    dVar7 = (double)(fVar11 * fVar1);
    dVar5 = *(double *)(lVar9 + 0x10 + lVar8 * 0x18);
    dVar6 = *(double *)(lVar9 + 8 + lVar8 * 0x18);
    *param_2 = dVar7 * *(double *)(lVar9 + lVar8 * 0x18) + dVar3;
    param_2[1] = dVar6 * dVar7 + dVar4;
    param_2[2] = dVar5 * dVar7 + dVar2;
  }
  else {
    dVar2 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    lVar9 = 2;
    pdVar10 = local_88;
    do {
      lVar8 = param_1[2];
      local_a0 = (double)((float *)param_1[1])[1];
      fVar1 = *(float *)param_1[1];
      local_90 = (*(double *)(lVar8 + lVar9 * 8) + dVar2) * local_a0 * local_a0;
      local_98 = (*(double *)(lVar8 + -8 + lVar9 * 8) + dVar4) * local_a0 * local_a0;
      local_a0 = (*(double *)(lVar8 + -0x10 + lVar9 * 8) + dVar3) * local_a0 * local_a0;
      fVar11 = (float)FUN_1467f9650(&local_a0);
      *pdVar10 = (double)(fVar11 * fVar1);
      lVar9 = lVar9 + 3;
      pdVar10 = pdVar10 + 1;
    } while (lVar9 != 0xb);
    *param_2 = dVar3 + local_88[0];
    param_2[1] = dVar4 + local_88[1];
    param_2[2] = dVar2 + local_88[2];
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bce75a FUN_143bce75a body=147 status=ok
// SIG undefined FUN_143bce75a(void)

void FUN_143bce75a(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar3 = *param_1;
  FUN_143bce514(param_1[1],&local_38,uVar2);
  cVar5 = FUN_146bfed03(&local_38);
  if (cVar5 != '\0') {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18) = local_28;
    puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bce7ee FUN_143bce7ee body=805 status=ok
// SIG undefined FUN_143bce7ee(void)

void FUN_143bce7ee(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98 [3];
  code *local_80;
  longlong **local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = (int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_14051b394(local_98,uVar10,1);
  lVar2 = *(longlong *)*param_1;
  local_d0 = param_1;
  if (*(int *)(lVar2 + 0x3c) < *(int *)(lVar2 + 0x10)) {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_143bab15a((longlong *)*param_1,param_2,&local_a8,3);
    uVar9 = uStack_a0;
    if (0 < *(int *)param_1[1]) {
      iVar8 = 0;
      do {
        local_c8 = &local_a8;
        local_b8 = local_98;
        local_b0 = param_1[2];
        local_70 = 0;
        local_68 = 0;
        local_80 = FUN_143bceb14;
        local_78 = &local_c8;
        local_d8 = &local_70;
        local_e0 = 0;
        local_c0 = param_2;
        FUN_1401f8d10(L"ParallelFor Task",uVar9 & 0xffffffff,1,&local_80);
        lVar2 = local_a8;
        lVar15 = (longlong)(int)uStack_a0;
        if (lVar15 != 0) {
          lVar13 = 0;
          do {
            uVar10 = *(uint *)(lVar2 + lVar13);
            puVar12 = (undefined4 *)((longlong)(int)uVar10 * 0x18 + local_98[0]);
            cVar7 = FUN_146bfed03(puVar12);
            if (cVar7 != '\0') {
              lVar3 = *(longlong *)(param_2[2] + (ulonglong)(uVar10 >> 9) * 8);
              *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) =
                   *(undefined8 *)(puVar12 + 4);
              uVar4 = puVar12[1];
              uVar5 = puVar12[2];
              uVar6 = puVar12[3];
              puVar1 = (undefined4 *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              *puVar1 = *puVar12;
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              if ((char)param_2[0x42] == '\x01') {
                LOCK();
                *(int *)((longlong)param_2 + 0x214) = *(int *)((longlong)param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
            lVar13 = lVar13 + 4;
          } while (lVar15 * 4 != lVar13);
        }
        iVar8 = iVar8 + 1;
        param_1 = local_d0;
      } while (iVar8 < *(int *)local_d0[1]);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else if (0 < *(int *)param_1[1]) {
    iVar8 = 0;
    do {
      local_c0 = local_98;
      local_b8 = (longlong *)local_d0[2];
      local_70 = 0;
      local_68 = 0;
      local_80 = FUN_143bcebf4;
      local_78 = &local_c8;
      local_d8 = &local_70;
      local_e0 = 0;
      local_c8 = param_2;
      FUN_1401f8d10(L"ParallelFor Task",uVar10,1,&local_80);
      if (0 < (int)uVar10) {
        uVar9 = 0;
        do {
          if ((longlong)uVar9 <
              (longlong)((int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24))) {
            uVar14 = uVar9 >> 9 & 0x7fffff;
            uVar11 = (ulonglong)((uint)uVar9 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(param_2[5] + uVar14 * 8) + uVar11 * 2) - 1U) <
                0xfffe) {
              puVar12 = (undefined4 *)(uVar9 * 0x18 + local_98[0]);
              cVar7 = FUN_146bfed03(puVar12);
              if (cVar7 != '\0') {
                lVar2 = *(longlong *)(param_2[2] + uVar14 * 8);
                *(undefined8 *)(lVar2 + 0x10 + uVar11 * 0x18) = *(undefined8 *)(puVar12 + 4);
                uVar4 = puVar12[1];
                uVar5 = puVar12[2];
                uVar6 = puVar12[3];
                puVar1 = (undefined4 *)(lVar2 + uVar11 * 0x18);
                *puVar1 = *puVar12;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                if ((char)param_2[0x42] == '\x01') {
                  LOCK();
                  *(int *)((longlong)param_2 + 0x214) = *(int *)((longlong)param_2 + 0x214) + 1;
                  UNLOCK();
                }
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)local_d0[1]);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bceb14 FUN_143bceb14 body=223 status=ok
// SIG undefined FUN_143bceb14(void)

void FUN_143bceb14(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  lVar8 = (longlong)(int)uVar4;
  FUN_146c14004(param_1[1],uVar4,&local_38);
  dVar1 = *(double *)param_1[3];
  lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar7 = (ulonglong)(uVar4 & 0x1ff);
  dVar9 = 1.0 - dVar1;
  dVar2 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  dVar3 = *(double *)(lVar5 + 8 + uVar7 * 0x18);
  lVar6 = *(longlong *)param_1[2];
  *(double *)(lVar6 + lVar8 * 0x18) = dVar9 * *(double *)(lVar5 + uVar7 * 0x18) + dVar1 * local_38;
  *(double *)(lVar6 + 8 + lVar8 * 0x18) = dVar3 * dVar9 + local_30 * dVar1;
  *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = dVar2 * dVar9 + local_28 * dVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcebf4 FUN_143bcebf4 body=272 status=ok
// SIG undefined FUN_143bcebf4(void)

void FUN_143bcebf4(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_2;
  uVar7 = (ulonglong)uVar4;
  if ((-1 < (int)uVar4) &&
     (lVar5 = *param_1, (int)uVar4 < *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24))) {
    uVar8 = (ulonglong)(uVar4 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar4 >> 9) * 8)
                           + uVar8 * 2) - 1U) < 0xfffe) {
      FUN_146c14004(lVar5,uVar7,&local_48);
      dVar1 = *(double *)param_1[2];
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      dVar9 = 1.0 - dVar1;
      dVar2 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
      dVar3 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
      lVar6 = *(longlong *)param_1[1];
      *(double *)(lVar6 + uVar7 * 0x18) =
           dVar9 * *(double *)(lVar5 + uVar8 * 0x18) + dVar1 * local_48;
      *(double *)(lVar6 + 8 + uVar7 * 0x18) = dVar3 * dVar9 + local_40 * dVar1;
      *(double *)(lVar6 + 0x10 + uVar7 * 0x18) = dVar2 * dVar9 + local_38 * dVar1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bced06 FUN_143bced06 body=2006 status=ok
// SIG undefined FUN_143bced06(void)

void FUN_143bced06(undefined8 *param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_148 [44];
  uint local_11c;
  undefined8 local_118;
  undefined8 *local_110;
  float local_108 [4];
  float local_f8;
  int local_f4 [3];
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong **local_c8;
  longlong *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(longlong **)((longlong)param_2 + 0x208) == (longlong *)0x0) ||
     (iVar10 = *(int *)*param_1,
     iVar14 = (**(code **)(**(longlong **)((longlong)param_2 + 0x208) + 0xa0))(), iVar14 <= iVar10))
  {
    local_d8 = L"ApplyDisplaceFromTextureMap_InvalidUVLayer";
    uStack_d0._0_4_ = 0x2a;
    FUN_1446e940c(local_e8,&local_d8);
    local_d8 = L"UGeometryScriptLibrary_MeshDeformFunctions";
    uStack_d0._0_4_ = 0x2a;
    FUN_1446e940c(&local_118,&local_d8);
    local_d8 = L"ApplyDisplaceFromTextureMap: TargetMesh is missing requested UV Set";
    uStack_d0 = (double)CONCAT44(uStack_d0._4_4_,0x43);
    FUN_140208c1e(&local_b8,&local_118,local_e8,&local_d8);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_b8);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  else {
    lVar17 = *(longlong *)((longlong)param_2 + 0x208);
    iVar10 = *(int *)*param_1;
    lVar27 = 0;
    if ((-1 < (longlong)iVar10) && (iVar10 < *(int *)(lVar17 + 0x28))) {
      lVar27 = *(longlong *)(*(longlong *)(lVar17 + 0x20) + (longlong)iVar10 * 8);
    }
    if (*(int *)(lVar17 + 0x38) < 1) {
      lVar17 = 0;
    }
    else {
      lVar17 = **(longlong **)(lVar17 + 0x30);
    }
    lVar28 = param_1[2];
    dVar32 = *(double *)(lVar28 + 0x10);
    dVar5 = *(double *)(lVar28 + 8);
    dVar6 = *(double *)(lVar28 + 0x20);
    dVar7 = *(double *)(lVar28 + 0x18);
    iVar10 = *(int *)(param_1[3] + 0x20);
    fVar4 = *(float *)(param_1[3] + 0x34);
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    iVar14 = *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24);
    local_c8 = DAT_14c8464f0;
    local_d8._0_4_ = (undefined4)DAT_14c8464e0;
    local_d8._0_4_ = (undefined4)DAT_14c8464e0;
    local_d8._4_4_ = DAT_14c8464e0._4_4_;
    uStack_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    uStack_b0 = 0;
    iVar21 = 0;
    if (iVar14 != 0) {
      FUN_1447a8aa0(&local_b8,iVar14,0);
      do {
        uVar16 = uStack_b0;
        lVar28 = (longlong)(int)uStack_b0;
        uVar15 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
        if (uStack_b0._4_4_ < uVar15) {
          FUN_1403e3958(&local_b8,uVar16 & 0xffffffff);
        }
        local_b8[lVar28 * 3 + 2] = (longlong)local_c8;
        plVar1 = local_b8 + lVar28 * 3;
        *(undefined4 *)plVar1 = (undefined4)local_d8;
        *(uint *)((longlong)plVar1 + 4) = local_d8._4_4_;
        *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_d0._4_4_;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      iVar21 = *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24);
    }
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_d8 = (wchar_t *)((ulonglong)local_d8._4_4_ << 0x20);
    FUN_1448156a8(local_e8,&local_d8,iVar21);
    uVar15 = *(int *)((longlong)param_2 + 0x140) * 0x200 + *(int *)((longlong)param_2 + 0x144);
    uVar20 = 0;
    if ((uVar15 != 0) &&
       (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_2 + 0x148) - 1U)))
    {
      uVar24 = 1;
      uVar18 = 1;
      if (1 < (int)uVar15) {
        uVar24 = uVar15;
      }
      do {
        uVar20 = uVar24;
        if (uVar24 == uVar18) break;
        uVar19 = uVar18 >> 9;
        uVar22 = uVar18 & 0x1ff;
        uVar20 = uVar18;
        uVar18 = uVar18 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_2 + 0x148))[uVar19] +
                                           (ulonglong)uVar22 * 2) - 1U));
    }
    uVar24 = uVar15;
    if (uVar20 != uVar15) {
      do {
        local_11c = uVar24;
        uVar24 = uVar20 * 3;
        lVar28 = *(longlong *)(lVar27 + 0x78);
        iVar14 = *(int *)(*(longlong *)(lVar28 + (ulonglong)(uVar24 >> 9) * 8) +
                         (ulonglong)(uVar24 & 0x1ff) * 4);
        if (-1 < iVar14) {
          lVar11 = *(longlong *)(lVar17 + 0x78);
          iVar21 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar24 >> 9) * 8) +
                           (ulonglong)(uVar24 & 0x1ff) * 4);
          if (-1 < iVar21) {
            lVar23 = *(longlong *)
                      (*(longlong *)((longlong)param_2 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
            uStack_d0 = (double)CONCAT44(uStack_d0._4_4_,
                                         *(undefined4 *)
                                          (lVar23 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
            local_d8 = *(wchar_t **)(lVar23 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
            uVar26 = (ulonglong)(uVar24 + 2 >> 9);
            uVar25 = (ulonglong)((uVar24 + 2 & 0x1ff) << 2);
            uVar29 = (ulonglong)(uVar24 + 1 >> 9);
            uVar16 = (ulonglong)((uVar24 + 1 & 0x1ff) << 2);
            local_118 = (code *)CONCAT44(*(undefined4 *)
                                          (*(longlong *)(lVar28 + uVar29 * 8) + uVar16),iVar14);
            local_110 = (undefined8 *)
                        CONCAT44(local_110._4_4_,
                                 *(undefined4 *)(*(longlong *)(lVar28 + uVar26 * 8) + uVar25));
            local_f4[0] = iVar21;
            local_f4[1] = *(undefined4 *)(*(longlong *)(lVar11 + uVar29 * 8) + uVar16);
            local_f4[2] = *(undefined4 *)(*(longlong *)(lVar11 + uVar26 * 8) + uVar25);
            lVar28 = 0;
            do {
              uVar15 = *(uint *)((longlong)&local_d8 + lVar28 * 4);
              uVar24 = *(uint *)((longlong)&local_118 + lVar28 * 4);
              lVar11 = *(longlong *)
                        (*(longlong *)(lVar27 + 0x48) + (ulonglong)(uVar24 >> 5 & 0x3fffff8));
              uVar16 = (ulonglong)((uVar24 & 0xff) << 3);
              fVar30 = *(float *)(lVar11 + 4 + uVar16) * (float)dVar32 + (float)dVar6;
              local_108[3] = *(float *)(lVar11 + uVar16) * (float)dVar5 + (float)dVar7;
              auVar33 = roundps(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30),1);
              auVar34 = roundps(ZEXT416((uint)local_108[3]),ZEXT416((uint)local_108[3]),1);
              local_f8 = (fVar30 - auVar33._0_4_) * (float)iVar10 * fVar4;
              local_108[3] = local_108[3] - auVar34._0_4_;
              fVar31 = (float)FUN_1485c00fc(param_1[3],local_108 + 3);
              pfVar12 = (float *)param_1[2];
              fVar30 = pfVar12[10];
              iVar14 = local_f4[lVar28];
              lVar11 = *(longlong *)(lVar17 + 0x48);
              lVar23 = 0;
              do {
                uVar24 = iVar14 * 3 + (int)lVar23;
                local_108[lVar23] =
                     *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar24 >> 9) * 8) +
                               (ulonglong)(uVar24 & 0x1ff) * 4);
                lVar23 = lVar23 + 1;
              } while (lVar23 != 3);
              fVar30 = *pfVar12 * (fVar31 - fVar30);
              lVar11 = *(longlong *)
                        (*(longlong *)((longlong)param_2 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
              uVar16 = (ulonglong)(uVar15 & 0x1ff);
              dVar8 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
              dVar9 = *(double *)(lVar11 + 8 + uVar16 * 0x18);
              lVar23 = (longlong)(int)uVar15;
              local_b8[lVar23 * 3] =
                   (longlong)
                   ((double)(fVar30 * local_108[0]) + *(double *)(lVar11 + uVar16 * 0x18) +
                   (double)local_b8[lVar23 * 3]);
              local_b8[lVar23 * 3 + 1] =
                   (longlong)
                   ((double)(local_108[1] * fVar30) + dVar9 + (double)local_b8[lVar23 * 3 + 1]);
              local_b8[lVar23 * 3 + 2] =
                   (longlong)
                   ((double)(local_108[2] * fVar30) + dVar8 + (double)local_b8[lVar23 * 3 + 2]);
              piVar2 = (int *)(local_e8[0] + lVar23 * 4);
              *piVar2 = *piVar2 + 1;
              lVar28 = lVar28 + 1;
              uVar15 = local_11c;
            } while (lVar28 != 3);
          }
        }
        uVar24 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar15) {
          uVar24 = uVar15;
        }
        do {
          uVar18 = uVar24;
          if (uVar24 - 1 == uVar20) break;
          uVar20 = uVar20 + 1;
          uVar18 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)((longlong)param_2 + 0x148) +
                                               (ulonglong)(uVar20 >> 9) * 8) +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        uVar20 = uVar18;
        uVar24 = local_11c;
      } while (uVar20 != uVar15);
    }
    lVar17 = *(longlong *)param_1[4];
    if (*(int *)(lVar17 + 0x10) == *(int *)(lVar17 + 0x3c)) {
      uVar20 = *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24);
      uVar15 = 0;
      if ((uVar20 != 0) &&
         (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_2 + 0x28) - 1U))
         ) {
        uVar24 = 1;
        uVar18 = 1;
        if (1 < (int)uVar20) {
          uVar24 = uVar20;
        }
        do {
          uVar15 = uVar24;
          if (uVar24 == uVar18) break;
          uVar19 = uVar18 >> 9;
          uVar22 = uVar18 & 0x1ff;
          uVar15 = uVar18;
          uVar18 = uVar18 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_2 + 0x28))[uVar19] +
                                             (ulonglong)uVar22 * 2) - 1U));
      }
      if (uVar15 != uVar20) {
        do {
          lVar17 = (longlong)(int)uVar15;
          iVar10 = *(int *)(local_e8[0] + lVar17 * 4);
          if (iVar10 != 0) {
            dVar32 = 1.0 / (double)iVar10;
            local_c8 = (longlong **)((double)local_b8[lVar17 * 3 + 2] * dVar32);
            uStack_d0 = (double)local_b8[lVar17 * 3 + 1] * dVar32;
            local_d8 = (wchar_t *)(dVar32 * (double)local_b8[lVar17 * 3]);
            cVar13 = FUN_146bfed03(&local_d8);
            if (cVar13 != '\0') {
              lVar17 = *(longlong *)
                        (*(longlong *)((longlong)param_2 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
              *(longlong ***)(lVar17 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18) = local_c8;
              puVar3 = (undefined4 *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
              *puVar3 = (undefined4)local_d8;
              puVar3[1] = local_d8._4_4_;
              puVar3[2] = (undefined4)uStack_d0;
              puVar3[3] = uStack_d0._4_4_;
              if (*(char *)((longlong)param_2 + 0x210) == '\x01') {
                LOCK();
                *(int *)((longlong)param_2 + 0x214) = *(int *)((longlong)param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
          uVar24 = uVar15 + 1;
          if ((int)(uVar15 + 1) < (int)uVar20) {
            uVar24 = uVar20;
          }
          do {
            uVar18 = uVar24;
            if (uVar24 - 1 == uVar15) break;
            uVar15 = uVar15 + 1;
            uVar18 = uVar15;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)((longlong)param_2 + 0x28) +
                                                 (ulonglong)(uVar15 >> 9) * 8) +
                                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
          uVar15 = uVar18;
        } while (uVar15 != uVar20);
      }
    }
    else {
      local_d8 = (wchar_t *)local_e8;
      local_c8 = &local_b8;
      local_110 = &local_d8;
      local_118 = FUN_143bcf4de;
      uStack_d0 = param_2;
      FUN_143bad420((longlong *)param_1[4],param_2,&local_118,0);
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcf4de FUN_143bcf4de body=219 status=ok
// SIG undefined FUN_143bcf4de(void)

void FUN_143bcf4de(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar7 = (longlong)(int)uVar2;
  iVar3 = *(int *)(*(longlong *)*param_1 + lVar7 * 4);
  if (iVar3 != 0) {
    lVar4 = param_1[1];
    lVar5 = *(longlong *)param_1[2];
    local_30 = 1.0 / (double)iVar3;
    local_20 = *(double *)(lVar5 + 0x10 + lVar7 * 0x18) * local_30;
    dStack_28 = *(double *)(lVar5 + 8 + lVar7 * 0x18) * local_30;
    local_30 = local_30 * *(double *)(lVar5 + lVar7 * 0x18);
    cVar6 = FUN_146bfed03();
    if (cVar6 != '\0') {
      lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      *(double *)(lVar7 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18) = local_20;
      pdVar1 = (double *)(lVar7 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
      *pdVar1 = local_30;
      pdVar1[1] = dStack_28;
      if (*(char *)(lVar4 + 0x210) == '\x01') {
        LOCK();
        *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
        UNLOCK();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcf5ba FUN_143bcf5ba body=784 status=ok
// SIG undefined FUN_143bcf5ba(void)

void FUN_143bcf5ba(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b8 [40];
  longlong **local_90;
  longlong *local_88;
  float *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  code *local_68;
  longlong ***ppplStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)*param_1;
  if ((plVar2 == (longlong *)0x0) ||
     (uVar9 = (int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24),
     (int)plVar2[1] < (int)uVar9)) {
    local_68 = (code *)0x14af7b140;
    ppplStack_60._0_4_ = 0x35;
    FUN_1446e940c(&local_90,&local_68);
    local_68 = (code *)0x14af4a5a0;
    ppplStack_60._0_4_ = 0x2a;
    FUN_1446e940c(local_6c,&local_68);
    local_68 = (code *)0x14af7b08e;
    ppplStack_60 = (longlong ***)CONCAT44(ppplStack_60._4_4_,0x58);
    FUN_140208c1e(&local_88,local_6c,&local_90,&local_68);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_88);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  else {
    local_80 = (float *)param_1[2];
    lVar3 = *(longlong *)param_1[3];
    local_88 = param_2;
    local_78 = plVar2;
    if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) {
      uVar12 = 0;
      if ((uVar9 != 0) && (uVar12 = 0, 0xfffd < (ushort)(**(short **)param_2[5] - 1U))) {
        uVar11 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar12 = uVar11;
          if (uVar11 == uVar6) break;
          uVar7 = uVar6 >> 9;
          uVar10 = uVar6 & 0x1ff;
          uVar12 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_2[5])[uVar7] +
                                             (ulonglong)uVar10 * 2) - 1U));
      }
      if (uVar12 != uVar9) {
        do {
          plVar2 = local_88;
          lVar3 = *local_78;
          lVar8 = (longlong)(int)uVar12;
          dVar14 = (double)*local_80;
          dVar13 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18) * dVar14;
          dVar15 = *(double *)(lVar3 + 8 + lVar8 * 0x18) * dVar14;
          dVar14 = dVar14 * *(double *)(lVar3 + lVar8 * 0x18);
          if (SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15) < 1048576.0) {
            uVar5 = (ulonglong)(uVar12 & 0x1ff);
            lVar3 = *(longlong *)(local_88[2] + (ulonglong)(uVar12 >> 9) * 8);
            local_58 = dVar13 + *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
            ppplStack_60 = (longlong ***)(dVar15 + *(double *)(lVar3 + 8 + uVar5 * 0x18));
            local_68 = (code *)(dVar14 + *(double *)(lVar3 + uVar5 * 0x18));
            cVar4 = FUN_146bfed03(&local_68);
            if (cVar4 != '\0') {
              lVar3 = *(longlong *)(plVar2[2] + (ulonglong)(uVar12 >> 9) * 8);
              *(double *)(lVar3 + 0x10 + uVar5 * 0x18) = local_58;
              pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
              *pdVar1 = (double)local_68;
              pdVar1[1] = (double)ppplStack_60;
              if ((char)plVar2[0x42] == '\x01') {
                LOCK();
                *(int *)((longlong)plVar2 + 0x214) = *(int *)((longlong)plVar2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
          uVar11 = uVar12 + 1;
          if ((int)(uVar12 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar6 = uVar11;
            if (uVar11 - 1 == uVar12) break;
            uVar12 = uVar12 + 1;
            uVar6 = uVar12;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (param_2[5] + (ulonglong)(uVar12 >> 9) * 8) +
                                               (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
          uVar12 = uVar6;
        } while (uVar12 != uVar9);
      }
    }
    else {
      local_90 = &local_88;
      ppplStack_60 = &local_90;
      local_68 = FUN_143bcf8cc;
      FUN_143bad420((longlong *)param_1[3],param_2,&local_68,0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcf8cc FUN_143bcf8cc body=279 status=ok
// SIG undefined FUN_143bcf8cc(void)

void FUN_143bcf8cc(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar5 = (longlong)(int)uVar2;
  param_1 = (longlong *)*param_1;
  lVar3 = *(longlong *)param_1[2];
  dVar8 = (double)*(float *)param_1[1];
  dVar7 = *(double *)(lVar3 + 0x10 + lVar5 * 0x18) * dVar8;
  dVar9 = *(double *)(lVar3 + 8 + lVar5 * 0x18) * dVar8;
  dVar8 = dVar8 * *(double *)(lVar3 + lVar5 * 0x18);
  if (SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9) < 1048576.0) {
    uVar6 = (ulonglong)(uVar2 & 0x1ff);
    lVar3 = *param_1;
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    local_28 = dVar7 + *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
    dStack_30 = dVar9 + *(double *)(lVar5 + 8 + uVar6 * 0x18);
    local_38 = dVar8 + *(double *)(lVar5 + uVar6 * 0x18);
    cVar4 = FUN_146bfed03();
    if (cVar4 != '\0') {
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      *(double *)(lVar5 + 0x10 + uVar6 * 0x18) = local_28;
      pdVar1 = (double *)(lVar5 + uVar6 * 0x18);
      *pdVar1 = local_38;
      pdVar1[1] = dStack_30;
      if (*(char *)(lVar3 + 0x210) == '\x01') {
        LOCK();
        *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
        UNLOCK();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bcf9e4 FUN_143bcf9e4 body=442 status=ok
// SIG undefined FUN_143bcf9e4(void)

void FUN_143bcf9e4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined1 local_108 [16];
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
  undefined4 local_c8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_108 = (undefined1  [16])0x0;
  local_f8 = 0xffffffff;
  uStack_f4 = 0xffffffff;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0xffffffff;
  local_e8 = 0xffffffff;
  uStack_e4 = 0xffffffff;
  uStack_e0 = 0xffffffff;
  uStack_dc = 0xffffffff;
  local_d8 = 0xffffffff;
  uStack_d4 = 0xffffffff;
  uStack_d0 = 0xffffffff;
  uStack_cc = 0xffffffff;
  local_c8 = 0xffffffff;
  local_138 = (double)*(float *)param_1[3];
  local_110 = param_2;
  FUN_14830f4b8(&local_110,*(undefined4 *)*param_1,param_1[1],param_1[2]);
  uVar7 = (ulonglong)(uint)local_108._8_4_;
  *(undefined1 *)(param_1[4] + 0x10) = 0;
  if ((int)local_108._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  if (*(int *)(*(longlong *)param_1[4] + 0xc) < (int)local_108._8_4_) {
    FUN_1447a8aa0(*(longlong *)param_1[4],local_108._8_4_);
  }
  if (uVar7 != 0) {
    lVar8 = 0;
    do {
      uVar3 = *(uint *)(local_108._0_8_ + 0x10 + lVar8);
      if (uVar3 == 0xffffffff) goto LAB_143bcfb5f;
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        pdVar2 = (double *)(local_108._0_8_ + 0x38 + lVar8);
        local_138 = *pdVar2;
        dStack_130 = pdVar2[1];
        FUN_146c148ec(param_2,&local_128,uVar3,*(undefined8 *)(local_108._0_8_ + 0x30 + lVar8));
        plVar5 = *(longlong **)param_1[4];
        iVar4 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
          FUN_1403e3958(plVar5,iVar4);
        }
        lVar6 = *plVar5;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar4 * 0x18) = local_118;
        puVar1 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x18);
        *puVar1 = local_128;
        puVar1[1] = uStack_120;
      }
      lVar8 = lVar8 + 0x58;
    } while (uVar7 * 0x58 - lVar8 != 0);
  }
LAB_143bcfb5f:
  if (local_108._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcfba0 FUN_143bcfba0 body=126 status=ok
// SIG undefined FUN_143bcfba0(void)

void FUN_143bcfba0(undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 == 0) {
    if (*(char *)*param_1 != '\x01') {
      return;
    }
    FUN_14582ed12(param_2);
    lVar1 = *(longlong *)(param_2 + 0x208);
  }
  lVar1 = *(longlong *)(lVar1 + 0x48);
  if (lVar1 != 0) {
LAB_143bcfbc1:
    *(undefined1 *)param_1[1] = 1;
    UNRECOVERED_JUMPTABLE = *(code **)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x000143bcfbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)param_1[2])[1],param_2,lVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  if (*(char *)*param_1 == '\x01') {
    FUN_14582ed9a();
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
    if (lVar1 != 0) goto LAB_143bcfbc1;
  }
  return;
}



// FUNCTION 143bcfc20 FUN_143bcfc20 body=222 status=ok
// SIG undefined FUN_143bcfc20(void)

void FUN_143bcfc20(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar6 = 0;
  if ((uVar2 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar7 = 1;
    if (1 < (int)uVar2) {
      uVar5 = uVar2;
    }
    do {
      uVar6 = uVar5;
      if (uVar5 == uVar7) break;
      uVar3 = uVar7 >> 9;
      uVar4 = uVar7 & 0x1ff;
      uVar6 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                         (ulonglong)uVar4 * 2) - 1U));
  }
  if (uVar6 != uVar2) {
    uVar1 = *param_1;
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
       (ulonglong)(uVar6 & 0x1ff) * 4) = uVar1;
      uVar5 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar2) {
        uVar5 = uVar2;
      }
      do {
        uVar7 = uVar5;
        if (uVar5 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar7;
    } while (uVar6 != uVar2);
  }
  return;
}



// FUNCTION 143bcfcfe FUN_143bcfcfe body=243 status=ok
// SIG undefined FUN_143bcfcfe(void)

void FUN_143bcfcfe(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  uVar2 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar6 = 0;
  if ((uVar2 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar8 = 1;
    if (1 < (int)uVar2) {
      uVar5 = uVar2;
    }
    do {
      uVar6 = uVar5;
      if (uVar5 == uVar8) break;
      uVar3 = uVar8 >> 9;
      uVar4 = uVar8 & 0x1ff;
      uVar6 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                         (ulonglong)uVar4 * 2) - 1U));
  }
  if (uVar6 != uVar2) {
    piVar7 = (int *)*param_1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar6 >> 9) * 8);
      if (*(int *)(lVar1 + (ulonglong)(uVar6 & 0x1ff) * 4) == *piVar7) {
        *(undefined4 *)(lVar1 + (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)param_1[1];
        piVar7 = (int *)*param_1;
      }
      uVar5 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar2) {
        uVar5 = uVar2;
      }
      do {
        uVar8 = uVar5;
        if (uVar5 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar8 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar8;
    } while (uVar6 != uVar2);
  }
  return;
}



// FUNCTION 143bcfdf2 FUN_143bcfdf2 body=483 status=ok
// SIG undefined FUN_143bcfdf2(void)

void FUN_143bcfdf2(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar8 = 0;
  if ((uVar5 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar3 = 1;
    if (1 < (int)uVar5) {
      uVar7 = uVar5;
    }
    do {
      uVar8 = uVar7;
      if (uVar7 == uVar3) break;
      uVar4 = uVar3 >> 9;
      uVar6 = uVar3 & 0x1ff;
      uVar8 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  local_78 = param_3;
  if (uVar8 != uVar5) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(local_78 + 0x20) + (ulonglong)(uVar8 >> 9) * 8);
      iVar1 = *(int *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 4);
      if (((longlong)iVar1 < 0) || ((int)((longlong *)*param_1)[1] <= iVar1)) {
        local_58 = L"RemapToNewMaterialIDsByMaterial_InvalidMaterial";
        local_50 = 0x2f;
        FUN_1446e940c(local_6c,&local_58);
        local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
        local_50 = 0x2c;
        FUN_1446e940c(local_70,&local_58);
        local_58 = 
        L"RemapToNewMaterialIDsByMaterial: Invalid material ID in mesh was not a valid index into FromMaterialList, skipping"
        ;
        local_50 = 0x72;
        FUN_140208c1e(local_68,local_70,local_6c,&local_58);
        FUN_143ba9449(*(undefined8 *)param_1[1],2,local_68);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
      }
      else {
        *(undefined4 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 4) =
             *(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4);
      }
      uVar7 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar5) {
        uVar7 = uVar5;
      }
      do {
        uVar3 = uVar7;
        if (uVar7 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar3 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar3;
    } while (uVar8 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bcffd6 FUN_143bcffd6 body=528 status=ok
// SIG undefined FUN_143bcffd6(void)

void FUN_143bcffd6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  lVar3 = param_2;
  uVar4 = 0;
  lVar2 = local_78;
  if ((uVar7 != 0) &&
     (lVar3 = param_2, uVar4 = 0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar9 = 1;
    uVar6 = 1;
    if (1 < (int)uVar7) {
      uVar9 = uVar7;
    }
    do {
      uVar5 = uVar6;
      lVar3 = param_2;
      uVar4 = uVar9;
      if (uVar9 == uVar5) break;
      uVar6 = uVar5 + 1;
      lVar3 = param_2;
      uVar4 = uVar5;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar5 >> 9] +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar9 = uVar4;
    local_78 = lVar3;
    if (uVar9 == uVar7) {
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
        local_78 = lVar2;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar9 >> 9) * 8);
    iVar1 = *(int *)(lVar2 + (ulonglong)(uVar9 & 0x1ff) * 4);
    iVar8 = *(int *)*param_1;
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1[1] + 8))) {
      if (*(char *)param_1[2] == '\0') {
        iVar8 = iVar1 + *(int *)(param_1[3] + 8);
      }
      else {
        iVar8 = *(int *)(*(longlong *)param_1[4] + (longlong)iVar1 * 4);
      }
    }
    if (iVar8 < 0) {
      local_58 = L"RemapAndCombineMaterials_InvalidMaterial";
      local_50 = 0x28;
      FUN_1446e940c(local_6c,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
      local_50 = 0x2c;
      FUN_1446e940c(local_70,&local_58);
      local_58 = 
      L"RemapAndCombineMaterials: Invalid material ID in mesh was not a valid index into TargetMeshMaterials, skipping"
      ;
      local_50 = 0x6e;
      FUN_140208c1e(local_68,local_70,local_6c,&local_58);
      FUN_143ba9449(*(undefined8 *)param_1[5],2,local_68);
      param_2 = local_78;
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
        param_2 = local_78;
      }
    }
    else {
      *(int *)(lVar2 + (ulonglong)(uVar9 & 0x1ff) * 4) = iVar8;
    }
    uVar6 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)uVar7) {
      uVar6 = uVar7;
    }
    do {
      lVar3 = local_78;
      uVar4 = uVar6;
      lVar2 = local_78;
      if (uVar6 - 1 == uVar9) break;
      uVar9 = uVar9 + 1;
      uVar4 = uVar9;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bd01e8 FUN_143bd01e8 body=303 status=ok
// SIG undefined FUN_143bd01e8(void)

void FUN_143bd01e8(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  plVar4 = *(longlong **)(*param_1 + 8);
  iVar1 = *(int *)(*(longlong *)(param_1[3] + 8) + 8);
  iVar2 = (int)plVar4[1];
  if (iVar2 < iVar1) {
    *(int *)(plVar4 + 1) = iVar1;
    if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_1446f48e2(plVar4);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar4),0,(longlong)(iVar1 - iVar2) << 2);
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      *(int *)(plVar4 + 1) = iVar1;
      FUN_14479f406(plVar4);
    }
  }
  plVar7 = *(longlong **)(param_1[3] + 8);
  if (0 < (int)plVar7[1]) {
    lVar5 = 0;
    do {
      uVar3 = *(uint *)(*plVar7 + lVar5 * 4);
      if (((int)uVar3 < 0) ||
         (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar3)) {
LAB_143bd028f:
        *(undefined1 *)param_1[2] = 0;
        uVar6 = 0xffffffff;
      }
      else {
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(param_2 + 0x148) +
                                          (ulonglong)(uVar3 >> 9) * 8) +
                                        (ulonglong)(uVar3 & 0x1ff) * 2) - 1U)) goto LAB_143bd028f;
        uVar6 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 4);
      }
      *(undefined4 *)(*plVar4 + lVar5 * 4) = uVar6;
      lVar5 = lVar5 + 1;
      plVar7 = *(longlong **)(param_1[3] + 8);
    } while (lVar5 < (int)plVar7[1]);
  }
  return;
}



// FUNCTION 143bd0318 FUN_143bd0318 body=242 status=ok
// SIG undefined FUN_143bd0318(void)

void FUN_143bd0318(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U)) {
      uVar6 = 1;
      uVar8 = 1;
      if (1 < (int)uVar5) {
        uVar6 = uVar5;
      }
      do {
        uVar7 = uVar6;
        if (uVar6 == uVar8) break;
        uVar3 = uVar8 >> 9;
        uVar4 = uVar8 & 0x1ff;
        uVar7 = uVar8;
        uVar8 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar3] +
                                           (ulonglong)uVar4 * 2) - 1U));
    }
  }
  if (uVar7 != uVar5) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      uVar6 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar5) {
        uVar6 = uVar5;
      }
      do {
        uVar8 = uVar6;
        if (uVar6 - 1 == uVar7) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      uVar7 = uVar8;
    } while (uVar7 != uVar5);
  }
  return;
}



// FUNCTION 143bd040a FUN_143bd040a body=122 status=ok
// SIG undefined FUN_143bd040a(void)

undefined4 FUN_143bd040a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)param_1[1];
  uVar2 = 0;
  if (((int)uVar1 < 0) ||
     (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_1 = bVar3;
  if (*(char *)*param_1 == '\x01') {
    uVar2 = *(undefined4 *)
             (*(longlong *)
               (*(longlong *)(param_3 + 0x20) + (ulonglong)(*(uint *)param_1[1] >> 9) * 8) +
             (ulonglong)(*(uint *)param_1[1] & 0x1ff) * 4);
  }
  return uVar2;
}



// FUNCTION 143bd0484 FUN_143bd0484 body=173 status=ok
// SIG undefined FUN_143bd0484(void)

void FUN_143bd0484(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (0 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
    uVar3 = 0;
    do {
      uVar4 = 0xffffffff;
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar4 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 4);
      }
      plVar2 = (longlong *)*param_1;
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar2,iVar1);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = uVar4;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  }
  return;
}



// FUNCTION 143bd0532 FUN_143bd0532 body=187 status=ok
// SIG undefined FUN_143bd0532(void)

void FUN_143bd0532(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (0 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
    uVar3 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
        if (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 4) == *(int *)param_1[1]) {
          plVar2 = *(longlong **)(param_1[2] + 8);
          iVar1 = (int)plVar2[1];
          *(uint *)(plVar2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(plVar2,iVar1);
          }
          *(uint *)(*plVar2 + (longlong)iVar1 * 4) = uVar3;
        }
      }
      else {
        *(undefined1 *)*param_1 = 0;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  }
  return;
}



// FUNCTION 143bd0672 FUN_143bd0672 body=555 status=ok
// SIG undefined FUN_143bd0672(void)

void FUN_143bd0672(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(*param_1 + 8);
  if ((int)plVar1[1] < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
    local_38 = L"SetAllTriangleMaterialIDs_IncorrectCount";
    local_30 = 0x28;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_30 = 0x2c;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"SetAllTriangleMaterialIDs: size of provided TriangleMaterialIDList is smaller than MaxTriangleID of Mesh"
    ;
    local_30 = 0x68;
    FUN_140208c1e(local_48,local_50,local_4c,&local_38);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_48);
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x208);
    if (lVar2 == 0) {
      FUN_14582ed12(param_2);
      lVar2 = *(longlong *)(param_2 + 0x208);
    }
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (lVar2 == 0) {
      FUN_14582ed9a();
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
    }
    uVar3 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar6 = 0;
    if ((uVar3 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      do {
        uVar6 = uVar4;
        if (uVar4 == uVar5) break;
        uVar7 = uVar5 >> 9;
        uVar8 = uVar5 & 0x1ff;
        uVar6 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar7] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
LAB_143bd0850:
    if (uVar6 != uVar3) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
       (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)(*plVar1 + (longlong)(int)uVar6 * 4);
      uVar4 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar3) {
        uVar4 = uVar3;
      }
      uVar5 = uVar6;
      do {
        uVar6 = uVar4;
        if (uVar4 - 1 == uVar5) break;
        uVar6 = uVar5 + 1;
        uVar5 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      goto LAB_143bd0850;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd089e FUN_143bd089e body=228 status=ok
// SIG undefined FUN_143bd089e(void)

void FUN_143bd089e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_2 + 0x208);
  if (lVar4 == 0) {
    FUN_14582ed12(param_2);
    lVar4 = *(longlong *)(param_2 + 0x208);
  }
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    FUN_14582ed9a();
  }
  lVar4 = (longlong)(int)(*(longlong **)(*param_1 + 8))[1];
  if (lVar4 != 0) {
    lVar2 = **(longlong **)(*param_1 + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar5);
      if (((int)uVar1 < 0) ||
         (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar1)) {
LAB_143bd0955:
        *(undefined1 *)param_1[1] = 1;
        return;
      }
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_2 + 0x148) +
                                        (ulonglong)(uVar1 >> 9) * 8) +
                                      (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)) goto LAB_143bd0955;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
       (ulonglong)(uVar1 & 0x1ff) * 4) = *(undefined4 *)param_1[2];
      lVar5 = lVar5 + 4;
    } while (lVar4 * 4 != lVar5);
  }
  return;
}



// FUNCTION 143bd0982 FUN_143bd0982 body=169 status=ok
// SIG undefined FUN_143bd0982(void)

void FUN_143bd0982(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12(param_2);
    lVar1 = *(longlong *)(param_2 + 0x208);
  }
  local_20 = *(longlong *)(lVar1 + 0x48);
  if (local_20 == 0) {
    FUN_14582ed9a();
    local_20 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
  }
  local_40 = &local_20;
  local_28 = &local_40;
  local_38 = param_1[1];
  local_30 = &LAB_143bd0a2c;
  FUN_143bac7da(*param_1,param_2,&local_30,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd0a52 FUN_143bd0a52 body=714 status=ok
// SIG undefined FUN_143bd0a52(void)

void FUN_143bd0a52(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
LAB_143bd0b37:
    local_68 = L"SetPolygroupMaterialID_MissingGroups";
    local_60 = 0x24;
    FUN_1446e940c(local_4c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_60 = 0x2c;
    FUN_1446e940c(local_50,&local_68);
    local_68 = L"SetPolygroupMaterialID: Specified Polygroup Layer does not exist";
    local_60 = 0x40;
  }
  else {
    uVar9 = (ulonglong)*(byte *)*param_1;
    uVar6 = *(uint *)((byte *)*param_1 + 4);
    if (uVar9 == 0) {
      if ((((int)uVar6 < 0) || (*(longlong **)(param_2 + 0x208) == (longlong *)0x0)) ||
         (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), iVar2 <= (int)uVar6))
      goto LAB_143bd0b37;
    }
    else if (*(char *)(param_2 + 0x1a8) == '\0') goto LAB_143bd0b37;
    if ((*(longlong *)(param_2 + 0x208) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), lVar1 != 0)) {
      FUN_148376c0e(&local_68,param_2,(ulonglong)uVar6 << 0x20 | uVar9);
      uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar6 = 0;
      if ((uVar7 != 0) &&
         (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar4 = 1;
        uVar5 = 1;
        if (1 < (int)uVar7) {
          uVar4 = uVar7;
        }
        do {
          uVar6 = uVar4;
          if (uVar4 == uVar5) break;
          uVar3 = uVar5 >> 9;
          uVar8 = uVar5 & 0x1ff;
          uVar6 = uVar5;
          uVar5 = uVar5 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                             (ulonglong)uVar8 * 2) - 1U));
      }
LAB_143bd0c69:
      if (uVar6 != uVar7) {
        if (CONCAT44(uStack_5c,local_60) == 0) {
          iVar2 = FUN_146bc96d4(local_68,uVar6);
        }
        else {
          iVar2 = *(int *)(*(longlong *)
                            (*(longlong *)(CONCAT44(uStack_5c,local_60) + 0x20) +
                            (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
        }
        if (iVar2 == *(int *)param_1[2]) {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
           (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)param_1[3];
          *(undefined1 *)param_1[4] = 1;
        }
        uVar4 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar7) {
          uVar4 = uVar7;
        }
        uVar5 = uVar6;
        do {
          uVar6 = uVar4;
          if (uVar4 - 1 == uVar5) break;
          uVar6 = uVar5 + 1;
          uVar5 = uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar6 >> 9) * 8) +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        goto LAB_143bd0c69;
      }
      goto LAB_143bd0bcc;
    }
    local_68 = L"SetPolygroupMaterialID_NoMaterialID";
    local_60 = 0x23;
    FUN_1446e940c(local_4c,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    local_60 = 0x2c;
    FUN_1446e940c(local_50,&local_68);
    local_68 = L"SetPolygroupMaterialID: MaterialID Attribute is not enabled";
    local_60 = 0x3b;
  }
  FUN_140208c1e(local_48,local_50,local_4c,&local_68);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_143bd0bcc:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd0d1e FUN_143bd0d1e body=611 status=ok
// SIG undefined FUN_143bd0d1e(void)

void FUN_143bd0d1e(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), lVar11 == 0)) {
    local_58 = L"DeleteTrianglesByMaterialID_NoMaterialID";
    uStack_50._0_4_ = 0x28;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    uStack_50._0_4_ = 0x2c;
    FUN_1446e940c(local_70,&local_58);
    local_58 = L"DeleteTrianglesByMaterialID: MaterialID Attribute is not enabled";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x40);
    FUN_140208c1e(local_68,local_70,local_6c,&local_58);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,local_68);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
  }
  else {
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar9 = 0;
    if ((uVar7 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar5 = 1;
      if (1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      do {
        uVar9 = uVar3;
        if (uVar3 == uVar5) break;
        uVar6 = uVar5 >> 9;
        uVar8 = uVar5 & 0x1ff;
        uVar9 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        uVar2 = uStack_50;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
                    (ulonglong)(uVar9 & 0x1ff) * 4) == *(int *)param_1[1]) {
          lVar10 = (longlong)(int)uStack_50;
          uVar3 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          if (uStack_50._4_4_ < uVar3) {
            FUN_1446f48e2(&local_58,uVar2 & 0xffffffff);
          }
          *(uint *)(local_58 + lVar10 * 2) = uVar9;
        }
        pwVar1 = local_58;
        uVar3 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar3 = uVar7;
        }
        do {
          uVar5 = uVar3;
          if (uVar3 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar5 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar5;
      } while (uVar9 != uVar7);
      lVar11 = (longlong)(int)uStack_50;
      if (lVar11 != 0) {
        lVar10 = 0;
        do {
          iVar4 = FUN_146c0b65a(param_2,*(undefined4 *)((longlong)pwVar1 + lVar10),1,0);
          if (iVar4 == 0) {
            *(int *)param_1[2] = *(int *)param_1[2] + 1;
          }
          lVar10 = lVar10 + 4;
        } while (lVar11 * 4 != lVar10);
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd0f82 FUN_143bd0f82 body=1611 status=ok
// SIG undefined FUN_143bd0f82(void)

void FUN_143bd0f82(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_128 [36];
  int local_104;
  ulonglong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong *local_d0;
  int *local_c8;
  undefined1 local_bc [4];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_2 + 0x208) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), lVar2 == 0)) {
    local_b8 = L"CompactMaterialIDs_NoMaterialID";
    uStack_b0._0_4_ = 0x1f;
    FUN_1446e940c(&local_e8,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
    uStack_b0._0_4_ = 0x2c;
    FUN_1446e940c(&local_f8,&local_b8);
    local_b8 = L"CompactMaterialIDs: MaterialID Attribute is not enabled";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x37);
    FUN_140208c1e(&local_d0,&local_f8,&local_e8,&local_b8);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_d0);
    if (local_d0 != (ulonglong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_1403ed7b2(&local_e8,*(undefined4 *)(param_1[1] + 8),1);
    uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar11 = 0;
    if ((uVar14 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar10 = 1;
      if (1 < (int)uVar14) {
        uVar8 = uVar14;
      }
      do {
        uVar11 = uVar8;
        if (uVar8 == uVar10) break;
        uVar7 = uVar10 >> 9;
        uVar9 = uVar10 & 0x1ff;
        uVar11 = uVar10;
        uVar10 = uVar10 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar7] +
                                           (ulonglong)uVar9 * 2) - 1U));
    }
LAB_143bd10f8:
    if (uVar11 != uVar14) {
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
      if ((longlong)iVar5 < 0) {
        local_b8 = L"CompactMaterialIDs_InvalidMaterialID";
        uStack_b0._0_4_ = 0x24;
        FUN_1446e940c(&local_f8,&local_b8);
        local_b8 = L"UGeometryScriptLibrary_MeshMaterialFunctions";
        uStack_b0._0_4_ = 0x2c;
        FUN_1446e940c(&local_100,&local_b8);
        local_b8 = L"CompactMaterialIDs: Invalid MaterialIDs found, unsafe to Compact";
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x40);
        FUN_140208c1e(&local_d0,&local_100,&local_f8,&local_b8);
        FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_d0);
        if (local_d0 != (ulonglong *)0x0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        goto LAB_143bd11b9;
      }
      iVar4 = (int)uStack_e0;
      lVar12 = (longlong)(int)uStack_e0;
      if ((int)uStack_e0 < iVar5) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar5 + 1);
        uVar8 = (iVar5 + 1) - iVar4;
        if ((uint)(uStack_e0._4_4_ - iVar4) < uVar8) {
          FUN_1401c3474(&local_e8);
        }
        memset((void *)(lVar12 + local_e8),0,(longlong)(int)uVar8);
      }
      *(undefined1 *)(local_e8 + iVar5) = 1;
      uVar8 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar14) {
        uVar8 = uVar14;
      }
      uVar10 = uVar11;
      do {
        uVar11 = uVar8;
        if (uVar8 - 1 == uVar10) break;
        uVar11 = uVar10 + 1;
        uVar10 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto LAB_143bd10f8;
    }
    lVar12 = param_1[2];
    *(undefined4 *)(lVar12 + 8) = 0;
    if (*(int *)(lVar12 + 0xc) < 0) {
      FUN_1448831cc(lVar12,0);
    }
    local_f8 = 0;
    uStack_f0 = 0;
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,0xffffffff);
    FUN_1448156a8(&local_f8,&local_b8,*(undefined4 *)(param_1[1] + 8));
    uVar13 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if (0 < (int)uStack_e0) {
      lVar12 = 0;
      iVar5 = (int)uStack_e0;
      do {
        if (*(char *)(local_e8 + lVar12) == '\x01') {
          if (lVar12 < (int)((longlong *)param_1[1])[1]) {
            local_100 = *(ulonglong *)(*(longlong *)param_1[1] + lVar12 * 8);
          }
          else {
            local_100 = 0;
          }
          local_104 = -1;
          if (*(char *)param_1[3] == '\x01') {
            if ((int)uStack_b0 != local_84) {
              uVar11 = ((uint)(local_100 >> 0x14) & 0xffff ^ (uint)(local_100 >> 4)) * -0x7a143595;
              uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
              puVar6 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar6 = local_80;
              }
              iVar5 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
              while (iVar5 != -1) {
                pwVar1 = local_b8 + (longlong)iVar5 * 0xc;
                if (*(ulonglong *)pwVar1 == local_100) {
                  if ((pwVar1 != (wchar_t *)0x0) && (pwVar1 + 4 != (wchar_t *)0x0)) {
                    iVar5 = *(int *)(pwVar1 + 4);
                    goto LAB_143bd147f;
                  }
                  break;
                }
                iVar5 = *(int *)(pwVar1 + 8);
              }
            }
            plVar3 = (longlong *)param_1[2];
            iVar5 = (int)plVar3[1];
            *(uint *)(plVar3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
              FUN_144769b64(plVar3,iVar5);
            }
            *(ulonglong *)(*plVar3 + (longlong)iVar5 * 8) = local_100;
            local_d0 = &local_100;
            local_c8 = &local_104;
            local_104 = iVar5;
            FUN_1474bddaa(&local_b8,local_bc,&local_d0,0);
            iVar5 = local_104;
          }
          else {
            plVar3 = (longlong *)param_1[2];
            iVar5 = (int)plVar3[1];
            *(uint *)(plVar3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
              FUN_144769b64(plVar3,iVar5);
            }
            *(ulonglong *)(*plVar3 + (longlong)iVar5 * 8) = local_100;
          }
LAB_143bd147f:
          *(int *)(local_f8 + lVar12 * 4) = iVar5;
          iVar5 = (int)uStack_e0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar5);
    }
    uVar11 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    if ((uVar11 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar11) {
        uVar13 = (ulonglong)uVar11;
      }
      do {
        uVar8 = uVar14;
        if ((uint)uVar13 == uVar8) goto LAB_143bd158a;
        uVar14 = uVar8 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar13 = (ulonglong)uVar8;
    }
LAB_143bd158a:
    uVar14 = (uint)uVar13;
    if (uVar14 != uVar11) {
      lVar12 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar13 >> 9) * 8);
      iVar5 = *(int *)(lVar12 + (ulonglong)(uVar14 & 0x1ff) * 4);
      if ((-1 < (longlong)iVar5) && (iVar5 < (int)uStack_f0)) {
        *(undefined4 *)(lVar12 + (ulonglong)(uVar14 & 0x1ff) * 4) =
             *(undefined4 *)(local_f8 + (longlong)iVar5 * 4);
      }
      uVar8 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar11) {
        uVar8 = uVar11;
      }
      do {
        if (uVar8 - 1 == (int)uVar13) {
          uVar13 = (ulonglong)uVar8;
          break;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_143bd158a;
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_145cd3170(&local_b8);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
LAB_143bd11b9:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd15ce FUN_143bd15ce body=291 status=ok
// SIG undefined FUN_143bd15ce(void)

void FUN_143bd15ce(undefined8 *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  FUN_143bab15a(*param_1,param_2,plVar1,1);
  if ((int)uStack_40 == 0) {
    local_38 = L"ApplyMeshDisconnectFaces_NoTriangles";
    local_30 = 0x24;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    local_30 = 0x2c;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"ApplyMeshDisconnectFaces: Disconnect Area contains 0 triangles";
    local_30 = 0x3e;
    FUN_140208c1e(local_58,local_60,local_5c,&local_38);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_58);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  else {
    local_38 = param_2;
    FUN_146bc7c58(&local_38,&local_48,
                  CONCAT71((int7)((ulonglong)plVar1 >> 8),*(undefined1 *)param_1[2]) ^ 1);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd16f2 FUN_143bd16f2 body=514 status=ok
// SIG undefined FUN_143bd16f2(void)

void FUN_143bd16f2(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  int local_a0;
  wchar_t *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  FUN_143bab15a(*param_1,param_2,&local_b8,2);
  if ((int)uStack_b0 == 0) {
    local_98 = L"ApplyMeshDisconnectFaces_NoEdges";
    uStack_90._0_4_ = 0x20;
    FUN_1446e940c(&local_c8,&local_98);
    local_98 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    uStack_90._0_4_ = 0x2c;
    FUN_1446e940c(local_bc,&local_98);
    local_98 = L"ApplyMeshDisconnectEdges: Selection contains no edges";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x35);
    FUN_140208c1e(&local_a8,local_bc,&local_c8,&local_98);
    FUN_143ba9449(*(undefined8 *)param_1[1],2,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a8 = local_b8;
    local_a0 = (int)uStack_b0;
    local_c8 = param_2;
    FUN_146bc855c(&local_98);
    FUN_146bc86b0(&local_c8,&local_98,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar1 = uStack_90 >> 0x20;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_1447a08a2(&local_98,0);
    }
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      FUN_1446efbd8(local_88,0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd18f6 FUN_143bd18f6 body=957 status=ok
// SIG undefined FUN_143bd18f6(void)

void FUN_143bd18f6(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_3d8 [32];
  longlong **local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  int local_3a0;
  longlong *local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_320;
  longlong local_318;
  undefined8 uStack_310;
  wchar_t *local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_318 = 0;
  uStack_310 = 0;
  FUN_143bab15a(*param_1,param_2,&local_318,1);
  if ((int)uStack_310 == 0) {
    local_308 = L"ApplyMeshDuplicateFaces_NoTriangles";
    uStack_300._0_4_ = 0x23;
    FUN_1446e940c(&local_3a8,&local_308);
    local_308 = L"UGeometryScriptLibrary_MeshModelingFunctions";
    uStack_300._0_4_ = 0x2c;
    FUN_1446e940c(&local_320,&local_308);
    local_308 = L"ApplyMeshDuplicateFaces: Disconnect Area contains 0 triangles";
    uStack_300 = CONCAT44(uStack_300._4_4_,0x3d);
    FUN_140208c1e(&local_398,&local_320,&local_3a8,&local_308);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_398);
    if (local_398 != (longlong *)0x0) {
      (**(code **)(*local_398 + 0x10))();
    }
  }
  else {
    local_2e8 = 0;
    local_2e0 = 0;
    local_308 = (wchar_t *)0x0;
    uStack_300 = 0;
    local_2dc = 0xffffffff00000080;
    local_2d4 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_298 = 0;
    local_290 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_28c = 0xffffffff00000080;
    local_284 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0x101;
    local_240 = 0;
    local_238 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_234 = 0xffffffff00000080;
    local_22c = 0;
    local_220 = 0;
    local_218 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_1e4 = 0xffffffff00000080;
    local_1dc = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0x101;
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = 0;
    local_170 = 0;
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    local_117 = 1;
    local_118 = 1;
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0x101;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_388 = 0;
    uStack_380 = 0;
    local_398 = (longlong *)0x0;
    uStack_390 = 0;
    local_3a8 = local_318;
    local_3a0 = (int)uStack_310;
    local_3b0 = 1;
    local_3b8 = &local_398;
    local_320 = param_2;
    FUN_146bce922(&local_320,param_2);
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != &local_388) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *plVar1 = local_388;
      local_388 = 0;
      *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_380;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_380._4_4_;
      uStack_380 = 0;
      plVar1 = (longlong *)param_1[2];
    }
    FUN_143bd1cb4(param_2,plVar1,*(undefined8 *)param_1[3]);
    FUN_146bc8622(&local_398);
    FUN_146bfdcfe(&local_308);
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd1cb4 FUN_143bd1cb4 body=703 status=ok
// SIG undefined FUN_143bd1cb4(void)

void FUN_143bd1cb4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint local_b4;
  uint *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_3 != '\0') {
    if (((uint)param_3 & 0xff) == 2) {
      lVar4 = param_2[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar3 = *param_2;
        iVar6 = (int)((ulonglong)param_3 >> 0x20);
        iVar8 = iVar6 + 1;
        lVar9 = 0;
        do {
          if (*(char *)(param_1 + 0x1a8) == '\x01') {
            *(int *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x198) +
                      (ulonglong)(*(uint *)(lVar3 + lVar9) >> 9) * 8) +
                    (ulonglong)(*(uint *)(lVar3 + lVar9) & 0x1ff) * 4) = iVar6;
            iVar10 = *(int *)(param_1 + 0x1b0);
            if (*(int *)(param_1 + 0x1b0) < iVar8) {
              iVar10 = iVar8;
            }
            *(int *)(param_1 + 0x1b0) = iVar10;
          }
          lVar9 = lVar9 + 4;
        } while ((longlong)(int)lVar4 * 4 != lVar9);
      }
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      if ((longlong)(int)param_2[1] != 0) {
        puVar11 = (uint *)*param_2;
        puVar1 = puVar11 + (int)param_2[1];
        do {
          uVar2 = *puVar11;
          local_b4 = FUN_146bc96d4(param_1,uVar2);
          if ((int)uStack_90 != local_64) {
            puVar7 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar7 = local_60;
            }
            iVar6 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & local_b4) * 4);
            while (iVar6 != -1) {
              lVar4 = local_98 + (longlong)iVar6 * 0x10;
              if (*(uint *)(local_98 + (longlong)iVar6 * 0x10) == local_b4) {
                if ((int *)(lVar4 + 4) != (int *)0x0 && lVar4 != 0) {
                  if (*(char *)(param_1 + 0x1a8) != '\x01') goto LAB_143bd1e9d;
                  iVar6 = *(int *)(lVar4 + 4);
                  goto LAB_143bd1e6e;
                }
                break;
              }
              iVar6 = *(int *)(lVar4 + 8);
            }
          }
          local_b8 = *(int *)(param_1 + 0x1b0);
          *(int *)(param_1 + 0x1b0) = local_b8 + 1;
          local_b0 = &local_b4;
          local_a8 = &local_b8;
          FUN_140263e2a(&local_98,local_9c,&local_b0,0);
          iVar6 = local_b8;
          if (*(char *)(param_1 + 0x1a8) == '\x01') {
LAB_143bd1e6e:
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4) = iVar6;
            iVar8 = iVar6 + 1;
            if (iVar6 + 1 <= *(int *)(param_1 + 0x1b0)) {
              iVar8 = *(int *)(param_1 + 0x1b0);
            }
            *(int *)(param_1 + 0x1b0) = iVar8;
          }
LAB_143bd1e9d:
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar1);
        local_50 = 0;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar5 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        FUN_14472eb64(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd1f74 FUN_143bd1f74 body=448 status=ok
// SIG undefined FUN_143bd1f74(void)

void FUN_143bd1f74(undefined8 *param_1,longlong param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 uStack_2d8;
  undefined **local_2d0;
  longlong local_2c8;
  float local_2c0;
  double local_2b8;
  undefined1 local_2b0;
  double local_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [544];
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2d0 = &PTR_FUN_14af7bb60;
  local_2c0 = 1.4013e-45;
  local_2b8 = 0.1;
  local_2b0 = 0;
  local_2a8 = 0.2;
  local_2a0 = 0;
  local_298 = 0;
  local_2f8 = 0;
  FUN_1411b354a(local_290,0,0,0);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  pfVar1 = (float *)*param_1;
  local_2a0 = *(undefined1 *)(pfVar1 + 1);
  local_70 = (double)*pfVar1;
  local_2c0 = 1.4013e-42;
  if ((int)pfVar1[2] < 1000) {
    local_2c0 = pfVar1[2];
  }
  if ((int)local_2c0 < 2) {
    local_2c0 = 1.4013e-45;
  }
  local_2b8 = (double)pfVar1[3];
  if (1.0 <= local_2b8) {
    local_2b8 = 1.0;
  }
  if (local_2b8 <= 0.0) {
    local_2b8 = 0.0;
  }
  local_2b0 = *(undefined1 *)(pfVar1 + 4);
  local_2a8 = (double)pfVar1[5];
  if (0.9 <= local_2a8) {
    local_2a8 = 0.9;
  }
  if (local_2a8 <= 0.0) {
    local_2a8 = 0.0;
  }
  local_2c8 = param_2;
  FUN_1485c01f8(&local_2d0);
  FUN_146c00942(param_2,local_290);
  lVar2 = *(longlong *)(param_2 + 0x208);
  if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x38))) &&
     (lVar2 = **(longlong **)(lVar2 + 0x30), lVar2 != 0)) {
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2e8 = param_2;
    FUN_146c383fc(&local_2e8,lVar2,1,1);
    FUN_146c378c6(&local_2e8,lVar2,0);
    if (local_2e0 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1485c0560(&local_2d0);
  if ((local_30 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd2136 FUN_143bd2136 body=1543 status=ok
// SIG undefined FUN_143bd2136(void)

void FUN_143bd2136(longlong *param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  void **ppvVar5;
  undefined4 uVar6;
  longlong lVar7;
  void **ppvVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_9f8 [32];
  undefined8 *local_9d8;
  undefined1 local_9d0;
  longlong local_9c8;
  longlong local_9c0;
  longlong local_9b8;
  undefined8 uStack_9b0;
  void *local_948;
  ulonglong uStack_940;
  longlong local_930 [3];
  undefined8 local_918;
  undefined8 local_8e8 [2];
  undefined8 local_8d8;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_888;
  undefined4 local_880;
  undefined8 local_87c;
  undefined4 local_874;
  undefined8 local_868;
  undefined4 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_838;
  undefined4 local_830;
  undefined8 local_82c;
  undefined4 local_824;
  undefined8 local_818;
  undefined4 local_810;
  undefined2 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined8 local_7d4;
  undefined4 local_7cc;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_790;
  undefined4 local_788;
  undefined8 local_784;
  undefined4 local_77c;
  undefined8 local_770;
  undefined4 local_768;
  undefined2 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_738;
  undefined4 local_730;
  undefined8 local_72c;
  undefined4 local_724;
  undefined8 local_718;
  undefined4 local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined8 local_6dc;
  undefined4 local_6d4;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined1 local_6b8;
  undefined1 local_6b7;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_690;
  undefined4 local_688;
  undefined8 local_684;
  undefined4 local_67c;
  undefined8 local_670;
  undefined4 local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_640;
  undefined4 local_638;
  undefined8 local_634;
  undefined4 local_62c;
  undefined8 local_620;
  undefined4 local_618;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined **local_5e8;
  longlong local_5e0;
  float local_5d8;
  double local_5d0;
  undefined1 local_5c8;
  double local_5c0;
  undefined1 local_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8 [544];
  double local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined1 local_348 [544];
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined3 uStack_110;
  undefined5 local_10d;
  undefined3 uStack_108;
  undefined8 uStack_105;
  undefined1 *local_fc;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_9f8;
  lStack_120 = 0;
  uStack_108 = 0;
  uStack_105 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_10d = 0;
  local_fc = &DAT_100000002;
  local_e8 = 0;
  local_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_128 = param_2;
  FUN_146c68b4c();
  fVar1 = *(float *)*param_1;
  local_9d8 = (undefined8 *)((ulonglong)local_9d8 & 0xffffffffffffff00);
  FUN_1411b354a(local_348,0,0,0);
  local_9d0 = 1;
  local_9d8 = (undefined8 *)CONCAT71(local_9d8._1_7_,1);
  FUN_146c005f0(local_348,param_2,1,1);
  if (0.0 <= fVar1) {
    FUN_146c0aee0(local_348,1);
  }
  local_5e8 = &PTR_FUN_14af7bb60;
  local_5d8 = 1.4013e-45;
  local_5d0 = 0.1;
  local_5c8 = 0;
  local_5c0 = 0.2;
  local_5b8 = 0;
  local_5b0 = 0;
  local_9d8 = (undefined8 *)((ulonglong)local_9d8 & 0xffffffffffffff00);
  FUN_1411b354a(local_5a8,0,0,0);
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0;
  pfVar4 = (float *)*param_1;
  local_5b8 = *(undefined1 *)(pfVar4 + 1);
  local_388 = (double)*pfVar4;
  local_5d8 = 1.4013e-42;
  if ((int)pfVar4[2] < 1000) {
    local_5d8 = pfVar4[2];
  }
  if ((int)local_5d8 < 2) {
    local_5d8 = 1.4013e-45;
  }
  local_5d0 = (double)pfVar4[3];
  if (1.0 <= local_5d0) {
    local_5d0 = 1.0;
  }
  if (local_5d0 <= 0.0) {
    local_5d0 = 0.0;
  }
  local_5c8 = *(undefined1 *)(pfVar4 + 4);
  local_5c0 = (double)pfVar4[5];
  if (0.9 <= local_5c0) {
    local_5c0 = 0.9;
  }
  if (local_5c0 <= 0.0) {
    local_5c0 = 0.0;
  }
  local_5e0 = param_2;
  FUN_1485c01f8(&local_5e8);
  FUN_146c00942(param_2,local_5a8);
  if (fVar1 < 0.0) {
    FUN_146c0aee0(param_2,1);
  }
  local_888 = 0;
  local_880 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_87c = 0xffffffff00000080;
  local_874 = 0;
  local_868 = 0;
  local_860 = 0;
  local_838 = 0;
  local_830 = 0;
  local_858 = 0;
  uStack_850 = 0;
  local_82c = 0xffffffff00000080;
  local_824 = 0;
  local_818 = 0;
  local_810 = 0;
  local_808 = 0x101;
  local_7e0 = 0;
  local_7d8 = 0;
  local_800 = 0;
  uStack_7f8 = 0;
  local_7d4 = 0xffffffff00000080;
  local_7cc = 0;
  local_7c0 = 0;
  local_7b8 = 0;
  local_790 = 0;
  local_788 = 0;
  local_7b0 = 0;
  uStack_7a8 = 0;
  local_784 = 0xffffffff00000080;
  local_77c = 0;
  local_770 = 0;
  local_768 = 0;
  local_760 = 0x101;
  local_738 = 0;
  local_730 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_72c = 0xffffffff00000080;
  local_724 = 0;
  local_718 = 0;
  local_710 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_6dc = 0xffffffff00000080;
  local_6d4 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b7 = 1;
  local_6b8 = 1;
  local_690 = 0;
  local_688 = 0;
  local_6b0 = 0;
  uStack_6a8 = 0;
  local_684 = 0xffffffff00000080;
  local_67c = 0;
  local_670 = 0;
  local_668 = 0;
  local_640 = 0;
  local_638 = 0;
  local_660 = 0;
  uStack_658 = 0;
  local_634 = 0xffffffff00000080;
  local_62c = 0;
  local_620 = 0;
  local_618 = 0;
  local_610 = 0x101;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_9d8 = local_8e8;
  local_8e8[0] = 0;
  local_8d8 = 0;
  local_930[1] = 0;
  local_918 = 0;
  local_9d0 = 0;
  local_9c8 = param_2;
  local_930[0] = param_2;
  FUN_146bcbbdc();
  if ((longlong)(int)local_118 != 0) {
    cVar2 = *(char *)(*param_1 + 4);
    lVar10 = (longlong)(int)local_118 * 0x40 + lStack_120;
    lVar7 = lStack_120;
    do {
      uVar3 = *(uint *)(lVar7 + 0x10);
      uVar9 = (ulonglong)uVar3;
      local_948 = (void *)0x0;
      uStack_940 = 0;
      if ((int)uVar3 < 1) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar9);
        }
      }
      else {
        uStack_940 = (ulonglong)uVar3;
        FUN_1446f48e2(&local_948);
        memset(local_948,0,uVar9 * 4);
        uVar11 = 0;
        do {
          uVar6 = FUN_146bcd1d8(&local_8a8,*(undefined4 *)(*(longlong *)(lVar7 + 8) + uVar11 * 4));
          *(undefined4 *)((longlong)local_948 + uVar11 * 4) = uVar6;
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
      ppvVar8 = (void **)(lVar7 + 8);
      ppvVar5 = &local_948;
      if (0.0 <= fVar1) {
        ppvVar8 = &local_948;
        ppvVar5 = (void **)(lVar7 + 8);
      }
      if (cVar2 == '\0') {
        FUN_1482e5510(&local_9c0);
        FUN_1482e55de(&local_9c0);
        FUN_14830d41a(&local_9c0);
      }
      else {
        FUN_146bc57a8(local_930,ppvVar5,ppvVar8);
      }
      if (local_948 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != lVar10);
  }
  lVar7 = *(longlong *)(local_9c8 + 0x208);
  if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x38))) &&
     (lVar7 = **(longlong **)(lVar7 + 0x30), lVar7 != 0)) {
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_9c0 = local_9c8;
    FUN_146c383fc(&local_9c0,lVar7,1,1);
    FUN_146c378c6(&local_9c0,lVar7,0);
    if (local_9b8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146bfdcfe(&local_8a8);
  FUN_1485c0560(&local_5e8);
  FUN_141082778(local_348);
  FUN_1482f1656(&local_128);
  if ((local_80 ^ (ulonglong)auStack_9f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd2740 FUN_143bd2740 body=1463 status=ok
// SIG undefined FUN_143bd2740(void)

void FUN_143bd2740(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_148 [40];
  uint *local_120;
  undefined4 **local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined8 uStack_100;
  uint local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_bc [4];
  undefined4 *local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = *param_1;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  lVar20 = *(longlong *)param_1[1];
  local_d0 = param_2;
  if (*(int *)(lVar20 + 0x10) == *(int *)(lVar20 + 0x3c)) {
    uVar15 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar22 = 0;
    if ((uVar15 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar5 = 1;
      uVar21 = 1;
      if (1 < (int)uVar15) {
        uVar21 = uVar15;
      }
      do {
        uVar8 = uVar5;
        uVar22 = uVar21;
        if (uVar21 == uVar8) break;
        uVar5 = uVar8 + 1;
        uVar22 = uVar8;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
    if (uVar22 != uVar15) {
      do {
        uVar19 = uStack_e0;
        lVar20 = (longlong)(int)uStack_e0;
        uVar5 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
        if (uStack_e0._4_4_ < uVar5) {
          FUN_1446f48e2(&local_e8,uVar19 & 0xffffffff);
        }
        local_e8[lVar20] = uVar22;
        uVar5 = uVar22 + 1;
        if ((int)(uVar22 + 1) < (int)uVar15) {
          uVar5 = uVar15;
        }
        do {
          uVar21 = uVar5;
          if (uVar5 - 1 == uVar22) break;
          uVar22 = uVar22 + 1;
          uVar21 = uVar22;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar22 >> 9) * 8) +
                                             (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
        uVar22 = uVar21;
      } while (uVar22 != uVar15);
    }
  }
  else {
    FUN_143bab15a((longlong *)param_1[1],param_2,&local_e8,1);
  }
  puVar1 = local_e8;
  if (*(char *)(*param_1 + 0x20) == '\x02') {
    lVar20 = (longlong)(int)uStack_e0;
    if (lVar20 != 0) {
      lVar14 = 0;
      do {
        uVar3 = *(undefined4 *)((longlong)puVar1 + lVar14);
        local_b8 = (undefined4 *)0x0;
        uStack_b0 = 1;
        FUN_1446f48e2(&local_b8,0);
        *local_b8 = uVar3;
        FUN_143bd2cf8(&local_d0);
        if (local_b8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 4;
      } while (lVar20 * 4 != lVar14);
    }
  }
  else if (*(char *)(*param_1 + 0x20) == '\x01') {
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if ((longlong)(int)uStack_e0 != 0) {
      puVar1 = local_e8 + (int)uStack_e0;
      puVar13 = local_e8;
      do {
        uVar3 = *puVar13;
        local_ec = FUN_146bc96d4(param_2,uVar3);
        if ((int)uStack_b0 != local_84) {
          puVar11 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar11 = local_80;
          }
          iVar4 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & local_ec) * 4);
          while (iVar4 != -1) {
            puVar2 = local_b8 + (longlong)iVar4 * 8;
            if (local_b8[(longlong)iVar4 * 8] == local_ec) {
              if ((puVar2 != (undefined4 *)0x0) &&
                 (plVar17 = (longlong *)(puVar2 + 2), plVar17 != (longlong *)0x0)) {
                iVar4 = puVar2[4];
                puVar2[4] = iVar4 + 1U;
                if ((uint)puVar2[5] < iVar4 + 1U) {
                  FUN_1446f48e2(plVar17,iVar4);
                }
                *(undefined4 *)(*plVar17 + (longlong)iVar4 * 4) = uVar3;
                goto LAB_143bd29b0;
              }
              break;
            }
            iVar4 = puVar2[6];
          }
        }
        local_108 = (undefined4 *)0x0;
        uStack_100 = 1;
        FUN_1446f48e2(&local_108,0);
        *local_108 = uVar3;
        local_120 = &local_ec;
        local_118 = &local_108;
        FUN_1484a937c(&local_b8,local_bc,&local_120,0);
        if (local_108 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
LAB_143bd29b0:
        iVar4 = local_90;
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar1);
      if (local_90 != 0) {
        puVar7 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar7 = local_a8;
        }
        uVar22 = *puVar7;
        if (uVar22 == 0) {
          iVar16 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar16 = local_90 + -1;
          }
          uVar19 = 0;
          uVar12 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar12 = uVar19;
          }
          iVar16 = 0;
          do {
            if (uVar12 == uVar19) goto LAB_143bd2c7c;
            iVar16 = iVar16 + 0x20;
            uVar22 = puVar7[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar19 = 0;
          iVar16 = 0;
        }
        uVar18 = (ulonglong)(-uVar22 & uVar22);
        uVar12 = uVar18 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar6 < local_90) {
          uVar22 = 0xffffffff;
          do {
            lVar20 = (longlong)iVar6;
            local_120 = (uint *)CONCAT44(local_120._4_4_,local_b8[lVar20 * 8]);
            local_118 = (undefined4 **)0x0;
            local_110 = local_b8[lVar20 * 8 + 4];
            lVar14 = (longlong)local_110;
            _Src = *(void **)(local_b8 + lVar20 * 8 + 2);
            if (lVar14 == 0) {
              local_10c = 0;
            }
            else {
              FUN_144a06ca8(&local_118,local_110,0);
              memcpy(local_118,_Src,lVar14 << 2);
            }
            FUN_143bd2cf8(&local_d0,&local_118);
            if (local_118 != (undefined4 **)0x0) {
              FUN_1400020a8();
            }
            uVar22 = uVar22 & ~(uint)uVar18;
            puVar7 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar7 = local_a8;
            }
            iVar6 = (int)uVar19;
            lVar20 = (longlong)iVar6;
            uVar15 = puVar7[lVar20] & uVar22;
            if (uVar15 == 0) {
              iVar9 = local_90 + 0x1e;
              if (-1 < local_90 + -1) {
                iVar9 = local_90 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar6) {
                iVar10 = iVar6;
              }
              if (iVar6 < iVar9) {
                lVar14 = 0;
                do {
                  uVar15 = puVar7[lVar20 + lVar14 + 1];
                  if (uVar15 != 0) {
                    uVar19 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                    uVar22 = 0xffffffff;
                    goto LAB_143bd2c40;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar10 - lVar20 != lVar14);
                uVar22 = 0xffffffff;
                iVar6 = iVar10;
              }
              uVar19 = (ulonglong)(iVar6 + 1);
              iVar6 = local_90;
            }
            else {
LAB_143bd2c40:
              uVar18 = (ulonglong)(-uVar15 & uVar15);
              uVar12 = uVar18 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (local_90 <= iVar6) {
                iVar6 = local_90;
              }
            }
          } while (iVar6 != iVar4);
        }
      }
    }
LAB_143bd2c7c:
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14083ed90(&local_b8);
  }
  else {
    FUN_143bd2cf8(&local_d0,&local_e8);
  }
  if (local_e8 != (undefined4 *)0x0) {
    FUN_1400020a8(local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd2cf8 FUN_143bd2cf8 body=1060 status=ok
// SIG undefined FUN_143bd2cf8(void)

void FUN_143bd2cf8(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_238 [32];
  undefined1 **local_218;
  double local_210;
  undefined1 *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined ***local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined **local_1e8;
  undefined ***pppuStack_1e0;
  undefined **local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined1 *local_1a8;
  double dStack_1a0;
  undefined ***local_198;
  undefined8 uStack_190;
  undefined **local_188;
  undefined ***pppuStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  undefined ***local_130;
  float local_118;
  undefined2 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined ***pppuStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1c8 = &PTR_FUN_14ae73140;
  local_1c0 = *param_1;
  local_198 = (undefined ***)0x0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = &PTR_LAB_14ae73b70;
  pppuStack_180 = &local_1c8;
  local_1a8 = &LAB_14835041a;
  local_168 = 0x3ff0000000000000;
  local_160 = 0;
  local_148 = 0;
  local_138 = &PTR_LAB_14ae73b90;
  local_130 = pppuStack_180;
  local_158 = &LAB_1483504a6;
  local_118 = 1.0;
  local_114 = 0x101;
  local_110 = 0x4010000000000000;
  local_108 = 0x101010100000000;
  local_100 = 0x4066800000000000;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  if (&local_1b8 == param_2) goto LAB_143bd30cc;
  uVar1 = *(uint *)(param_2 + 1);
  lVar10 = *param_2;
  local_1b8 = lVar10;
  *param_2 = 0;
  uStack_1b0 = param_2[1];
  param_2[1] = 0;
  if ((int)uVar1 < 1) goto LAB_143bd30cc;
  pfVar8 = (float *)param_1[1];
  if (*(char *)(pfVar8 + 1) == '\x01') {
    lVar11 = 0;
    dVar5 = DAT_14c8464f0;
    dVar4 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    do {
      local_218 = &local_208;
      FUN_146c1477c(*param_1,*(undefined4 *)(lVar10 + lVar11),&local_c8,&local_210);
      dVar5 = dVar5 + (double)local_b8 * local_210;
      dVar4 = dVar4 + uStack_c0 * local_210;
      dVar3 = dVar3 + local_210 * (double)local_c8;
      lVar11 = lVar11 + 4;
    } while ((ulonglong)uVar1 << 2 != lVar11);
    dVar2 = SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4);
    if (dVar2 <= 0.0) {
      pfVar8 = (float *)param_1[1];
      goto LAB_143bd2f4b;
    }
    dVar2 = 1.0 / dVar2;
    dVar3 = dVar3 * dVar2;
    dVar4 = dVar4 * dVar2;
    dVar5 = dVar5 * dVar2;
    pfVar8 = (float *)param_1[1];
  }
  else {
LAB_143bd2f4b:
    dVar3 = *(double *)(pfVar8 + 2);
    dVar4 = *(double *)(pfVar8 + 4);
    dVar5 = *(double *)(pfVar8 + 6);
  }
  pppuStack_1e0 = pppuStack_180;
  local_1e8 = local_188;
  local_1f8 = local_198;
  local_208 = local_1a8;
  dVar2 = (double)*pfVar8;
  local_98 = local_178;
  dStack_90 = dStack_170;
  local_a8 = local_188;
  pppuStack_a0 = pppuStack_180;
  local_b8 = local_198;
  uStack_b0 = uStack_190;
  uVar7 = uStack_b0;
  local_c8 = local_1a8;
  uStack_c0 = dStack_1a0;
  dVar6 = uStack_c0;
  local_178 = dVar4 * dVar2;
  dStack_170 = dVar5 * dVar2;
  local_188 = &PTR_LAB_14af7bb70;
  pppuStack_180 = (undefined ***)(dVar3 * dVar2);
  local_198 = (undefined ***)0x0;
  local_1a8 = &LAB_143bd311e;
  uStack_c0._0_4_ = SUB84(dStack_1a0,0);
  uStack_c0._4_4_ = (undefined4)((ulonglong)dStack_1a0 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uStack_190;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_190 >> 0x20);
  uStack_1f0 = (undefined4)uStack_b0;
  uStack_1ec = uStack_b0._4_4_;
  uStack_200 = (undefined4)uStack_c0;
  uStack_1fc = uStack_c0._4_4_;
  uStack_c0 = dVar6;
  uStack_b0 = uVar7;
  if (local_208 != (undefined1 *)0x0) {
    pppuVar9 = local_1f8;
    if (local_1f8 == (undefined ***)0x0) {
      pppuVar9 = &local_1e8;
    }
    (*(code *)(*pppuVar9)[2])();
    pfVar8 = (float *)param_1[1];
  }
  local_118 = pfVar8[0xb];
  local_114 = CONCAT11(0.0 < *pfVar8,*(undefined1 *)(pfVar8 + 0xc));
  FUN_14831eb48(&local_1c8);
  if ((longlong)(int)local_e8 != 0) {
    lVar11 = (longlong)(int)local_e8 * 0x68;
    lVar10 = lStack_f0;
    do {
      FUN_143bd1cb4(*param_1,lVar10,*(undefined8 *)(param_1[1] + 0x24));
      lVar10 = lVar10 + 0x68;
      lVar11 = lVar11 + -0x68;
    } while (lVar11 != 0);
  }
LAB_143bd30cc:
  FUN_1483768e0(&local_1c8);
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd3182 FUN_143bd3182 body=29 status=ok
// SIG undefined FUN_143bd3182(void)

undefined8 FUN_143bd3182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bd31a0 FUN_143bd31a0 body=1463 status=ok
// SIG undefined FUN_143bd31a0(void)

void FUN_143bd31a0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_148 [40];
  uint *local_120;
  undefined4 **local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined8 uStack_100;
  uint local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_bc [4];
  undefined4 *local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = *param_1;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  lVar20 = *(longlong *)param_1[1];
  local_d0 = param_2;
  if (*(int *)(lVar20 + 0x10) == *(int *)(lVar20 + 0x3c)) {
    uVar15 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar22 = 0;
    if ((uVar15 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar5 = 1;
      uVar21 = 1;
      if (1 < (int)uVar15) {
        uVar21 = uVar15;
      }
      do {
        uVar8 = uVar5;
        uVar22 = uVar21;
        if (uVar21 == uVar8) break;
        uVar5 = uVar8 + 1;
        uVar22 = uVar8;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
    if (uVar22 != uVar15) {
      do {
        uVar19 = uStack_e0;
        lVar20 = (longlong)(int)uStack_e0;
        uVar5 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
        if (uStack_e0._4_4_ < uVar5) {
          FUN_1446f48e2(&local_e8,uVar19 & 0xffffffff);
        }
        local_e8[lVar20] = uVar22;
        uVar5 = uVar22 + 1;
        if ((int)(uVar22 + 1) < (int)uVar15) {
          uVar5 = uVar15;
        }
        do {
          uVar21 = uVar5;
          if (uVar5 - 1 == uVar22) break;
          uVar22 = uVar22 + 1;
          uVar21 = uVar22;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar22 >> 9) * 8) +
                                             (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
        uVar22 = uVar21;
      } while (uVar22 != uVar15);
    }
  }
  else {
    FUN_143bab15a((longlong *)param_1[1],param_2,&local_e8,1);
  }
  puVar1 = local_e8;
  if (*(char *)(*param_1 + 5) == '\x02') {
    lVar20 = (longlong)(int)uStack_e0;
    if (lVar20 != 0) {
      lVar14 = 0;
      do {
        uVar3 = *(undefined4 *)((longlong)puVar1 + lVar14);
        local_b8 = (undefined4 *)0x0;
        uStack_b0 = 1;
        FUN_1446f48e2(&local_b8,0);
        *local_b8 = uVar3;
        FUN_143bd3758(&local_d0);
        if (local_b8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 4;
      } while (lVar20 * 4 != lVar14);
    }
  }
  else if (*(char *)(*param_1 + 5) == '\x01') {
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if ((longlong)(int)uStack_e0 != 0) {
      puVar1 = local_e8 + (int)uStack_e0;
      puVar13 = local_e8;
      do {
        uVar3 = *puVar13;
        local_ec = FUN_146bc96d4(param_2,uVar3);
        if ((int)uStack_b0 != local_84) {
          puVar11 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar11 = local_80;
          }
          iVar4 = *(int *)(puVar11 + (ulonglong)(local_70 - 1U & local_ec) * 4);
          while (iVar4 != -1) {
            puVar2 = local_b8 + (longlong)iVar4 * 8;
            if (local_b8[(longlong)iVar4 * 8] == local_ec) {
              if ((puVar2 != (undefined4 *)0x0) &&
                 (plVar17 = (longlong *)(puVar2 + 2), plVar17 != (longlong *)0x0)) {
                iVar4 = puVar2[4];
                puVar2[4] = iVar4 + 1U;
                if ((uint)puVar2[5] < iVar4 + 1U) {
                  FUN_1446f48e2(plVar17,iVar4);
                }
                *(undefined4 *)(*plVar17 + (longlong)iVar4 * 4) = uVar3;
                goto LAB_143bd3410;
              }
              break;
            }
            iVar4 = puVar2[6];
          }
        }
        local_108 = (undefined4 *)0x0;
        uStack_100 = 1;
        FUN_1446f48e2(&local_108,0);
        *local_108 = uVar3;
        local_120 = &local_ec;
        local_118 = &local_108;
        FUN_1484a937c(&local_b8,local_bc,&local_120,0);
        if (local_108 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
LAB_143bd3410:
        iVar4 = local_90;
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar1);
      if (local_90 != 0) {
        puVar7 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar7 = local_a8;
        }
        uVar22 = *puVar7;
        if (uVar22 == 0) {
          iVar16 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar16 = local_90 + -1;
          }
          uVar19 = 0;
          uVar12 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar12 = uVar19;
          }
          iVar16 = 0;
          do {
            if (uVar12 == uVar19) goto LAB_143bd36dc;
            iVar16 = iVar16 + 0x20;
            uVar22 = puVar7[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar19 = 0;
          iVar16 = 0;
        }
        uVar18 = (ulonglong)(-uVar22 & uVar22);
        uVar12 = uVar18 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar6 < local_90) {
          uVar22 = 0xffffffff;
          do {
            lVar20 = (longlong)iVar6;
            local_120 = (uint *)CONCAT44(local_120._4_4_,local_b8[lVar20 * 8]);
            local_118 = (undefined4 **)0x0;
            local_110 = local_b8[lVar20 * 8 + 4];
            lVar14 = (longlong)local_110;
            _Src = *(void **)(local_b8 + lVar20 * 8 + 2);
            if (lVar14 == 0) {
              local_10c = 0;
            }
            else {
              FUN_144a06ca8(&local_118,local_110,0);
              memcpy(local_118,_Src,lVar14 << 2);
            }
            FUN_143bd3758(&local_d0,&local_118);
            if (local_118 != (undefined4 **)0x0) {
              FUN_1400020a8();
            }
            uVar22 = uVar22 & ~(uint)uVar18;
            puVar7 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar7 = local_a8;
            }
            iVar6 = (int)uVar19;
            lVar20 = (longlong)iVar6;
            uVar15 = puVar7[lVar20] & uVar22;
            if (uVar15 == 0) {
              iVar9 = local_90 + 0x1e;
              if (-1 < local_90 + -1) {
                iVar9 = local_90 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar6) {
                iVar10 = iVar6;
              }
              if (iVar6 < iVar9) {
                lVar14 = 0;
                do {
                  uVar15 = puVar7[lVar20 + lVar14 + 1];
                  if (uVar15 != 0) {
                    uVar19 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                    uVar22 = 0xffffffff;
                    goto LAB_143bd36a0;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar10 - lVar20 != lVar14);
                uVar22 = 0xffffffff;
                iVar6 = iVar10;
              }
              uVar19 = (ulonglong)(iVar6 + 1);
              iVar6 = local_90;
            }
            else {
LAB_143bd36a0:
              uVar18 = (ulonglong)(-uVar15 & uVar15);
              uVar12 = uVar18 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (local_90 <= iVar6) {
                iVar6 = local_90;
              }
            }
          } while (iVar6 != iVar4);
        }
      }
    }
LAB_143bd36dc:
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14083ed90(&local_b8);
  }
  else {
    FUN_143bd3758(&local_d0,&local_e8);
  }
  if (local_e8 != (undefined4 *)0x0) {
    FUN_1400020a8(local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd3758 FUN_143bd3758 body=768 status=ok
// SIG undefined FUN_143bd3758(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe78 : 0x000143bd398a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143bd3758(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1e8 [32];
  undefined ***local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188;
  undefined ***pppuStack_180;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined ***pppuStack_120;
  longlong local_118;
  longlong lStack_110;
  double local_108;
  uint local_100;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  undefined ***local_d0;
  float local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined ***pppuStack_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_168 = &PTR_FUN_14ae73140;
  local_160 = *param_1;
  local_138 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_128 = &PTR_LAB_14ae73b70;
  local_148 = &LAB_14835041a;
  local_108 = 1.0;
  local_100 = 0;
  local_e8 = 0;
  local_d8 = &PTR_LAB_14ae73b90;
  local_d0 = &local_168;
  local_f8 = &LAB_1483504a6;
  local_b8 = 1.0;
  local_b4 = 0x101;
  local_b0 = 0x4010000000000000;
  local_a8 = 0x101010100000000;
  local_a0 = 0x4066800000000000;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  pppuStack_120 = &local_168;
  if (&local_158 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    local_158 = *param_2;
    *param_2 = 0;
    uStack_150 = param_2[1];
    param_2[1] = 0;
    if (0 < iVar1) {
      plVar2 = (longlong *)param_1[1];
      local_1b8 = plVar2[2];
      local_1c8 = (undefined ***)*plVar2;
      lStack_1c0 = plVar2[1];
      local_48 = &PTR_LAB_14ae73b70;
      pppuStack_40 = &local_168;
      local_58 = 0;
      local_68 = &LAB_14835041a;
      local_128 = &PTR_LAB_14af7bb90;
      pppuStack_120 = local_1c8;
      local_138 = 0;
      local_148 = &LAB_143bd3a5a;
      local_118 = lStack_1c0;
      lStack_110 = local_1b8;
      uStack_60 = (undefined4)uStack_140;
      uStack_5c = (undefined4)((ulonglong)uStack_140 >> 0x20);
      uStack_50 = (undefined4)uStack_130;
      uStack_4c = (undefined4)((ulonglong)uStack_130 >> 0x20);
      local_1a8 = &LAB_14835041a;
      uStack_1a0 = uStack_60;
      uStack_19c = uStack_5c;
      local_198 = 0;
      uStack_190 = uStack_50;
      uStack_18c = uStack_4c;
      local_188 = &PTR_LAB_14ae73b70;
      pppuStack_180 = &local_168;
      (*(code *)&LAB_14835047c)();
      pfVar3 = (float *)param_1[1];
      local_100 = 1;
      if (*(char *)(pfVar3 + 1) != '\0') {
        local_100 = *(char *)(pfVar3 + 1) == '\x01' ^ 3;
      }
      local_108 = (double)*pfVar3;
      local_b8 = pfVar3[4];
      local_b4 = CONCAT11(0.0 < *pfVar3,*(undefined1 *)(pfVar3 + 5));
      FUN_14831eb48(&local_168);
      if ((longlong)(int)local_88 != 0) {
        lVar4 = (longlong)(int)local_88 * 0x68;
        lVar5 = lStack_90;
        do {
          FUN_143bd1cb4(*param_1,lVar5,*(undefined8 *)(param_1[1] + 8));
          lVar5 = lVar5 + 0x68;
          lVar4 = lVar4 + -0x68;
        } while (lVar4 != 0);
      }
    }
  }
  FUN_1483768e0(&local_168);
  if ((local_20 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd3acc FUN_143bd3acc body=29 status=ok
// SIG undefined FUN_143bd3acc(void)

undefined8 FUN_143bd3acc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bd3aea FUN_143bd3aea body=2332 status=ok
// SIG undefined FUN_143bd3aea(void)

void FUN_143bd3aea(longlong *param_1,undefined4 **param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  void *_Src;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_198 [40];
  ulonglong local_170;
  undefined4 *local_168;
  undefined4 *puStack_160;
  undefined8 local_158;
  uint local_14c;
  undefined4 *local_148;
  undefined8 uStack_140;
  undefined1 local_134 [4];
  undefined **local_130;
  undefined4 **local_128;
  undefined4 *local_120;
  int local_118;
  undefined4 local_114;
  double local_110;
  undefined4 local_108;
  ushort local_104;
  undefined8 local_100;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  uint local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pfVar4 = (float *)*param_1;
  local_148 = (undefined4 *)0x0;
  uStack_140 = 0;
  lVar22 = *(longlong *)param_1[1];
  if (*(int *)(lVar22 + 0x10) == *(int *)(lVar22 + 0x3c)) {
    uVar13 = *(int *)(param_2 + 0x28) * 0x200 + *(int *)((longlong)param_2 + 0x144);
    uVar18 = 0;
    if ((uVar13 != 0) && (0xfffd < (ushort)(**(short **)param_2[0x29] - 1U))) {
      uVar6 = 1;
      uVar17 = 1;
      if (1 < (int)uVar13) {
        uVar17 = uVar13;
      }
      do {
        uVar8 = uVar6;
        uVar18 = uVar17;
        if (uVar17 == uVar8) break;
        uVar6 = uVar8 + 1;
        uVar18 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             ((longlong)param_2[0x29] + (ulonglong)(uVar8 >> 9) * 8)
                                           + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
    if (uVar18 != uVar13) {
      do {
        uVar21 = uStack_140;
        lVar22 = (longlong)(int)uStack_140;
        uVar6 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar6);
        if (uStack_140._4_4_ < uVar6) {
          FUN_1446f48e2(&local_148,uVar21 & 0xffffffff);
        }
        local_148[lVar22] = uVar18;
        uVar6 = uVar18 + 1;
        if ((int)(uVar18 + 1) < (int)uVar13) {
          uVar6 = uVar13;
        }
        do {
          uVar17 = uVar6;
          if (uVar6 - 1 == uVar18) break;
          uVar18 = uVar18 + 1;
          uVar17 = uVar18;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_2[0x29] + (ulonglong)(uVar18 >> 9) * 2) +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        uVar18 = uVar17;
      } while (uVar18 != uVar13);
    }
  }
  else {
    FUN_143bab15a((longlong *)param_1[1],param_2,&local_148,1);
  }
  iVar15 = (int)uStack_140;
  if (*(char *)(*param_1 + 0x10) == '\x02') {
    if ((longlong)(int)uStack_140 != 0) {
      puVar1 = local_148 + (int)uStack_140;
      puVar16 = local_148;
      do {
        uVar3 = *puVar16;
        local_c8 = (undefined4 *)0x0;
        uStack_c0._0_4_ = 1;
        uStack_c0._4_4_ = 0;
        FUN_1446f48e2(&local_c8,0);
        iVar15 = (int)uStack_c0;
        *local_c8 = uVar3;
        local_130 = &PTR_FUN_14ae72ba0;
        local_110 = 1.0;
        local_108 = 0x3f800000;
        local_104 = 0x101;
        local_100 = 0x3f80000000000000;
        local_d0 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        lStack_e8 = 0;
        local_120 = local_c8;
        local_c8 = (undefined4 *)0x0;
        local_118 = (int)uStack_c0;
        local_114 = uStack_c0._4_4_;
        uStack_c0 = 0;
        local_128 = param_2;
        if (0 < iVar15) {
          local_110 = (double)*pfVar4;
          if (0.0 <= *pfVar4) {
            uVar5 = *(undefined1 *)(pfVar4 + 1);
          }
          else {
            uVar5 = 0;
          }
          local_104 = CONCAT11(*(undefined1 *)((longlong)pfVar4 + 5),uVar5) ^ 0x100;
          local_100 = *(undefined8 *)(pfVar4 + 2);
          FUN_1482df9a8(&local_130);
          if ((longlong)(int)local_e0 != 0) {
            lVar22 = (longlong)(int)local_e0 * 0x50;
            lVar23 = lStack_e8;
            do {
              FUN_143bd1cb4(param_2,lVar23,*(undefined8 *)(pfVar4 + 5));
              lVar23 = lVar23 + 0x50;
              lVar22 = lVar22 + -0x50;
            } while (lVar22 != 0);
          }
        }
        FUN_1482df938(&local_130);
        if (local_c8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar1);
    }
  }
  else if (*(char *)(*param_1 + 0x10) == '\x01') {
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    local_c8 = (undefined4 *)0x0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    if ((longlong)(int)uStack_140 != 0) {
      puVar1 = local_148 + (int)uStack_140;
      puVar16 = local_148;
      do {
        uVar3 = *puVar16;
        local_14c = FUN_146bc96d4(param_2,uVar3);
        if ((int)uStack_c0 != local_94) {
          puVar11 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar11 = local_90;
          }
          iVar15 = *(int *)(puVar11 + (ulonglong)(local_80 - 1U & local_14c) * 4);
          while (iVar15 != -1) {
            puVar2 = local_c8 + (longlong)iVar15 * 8;
            if (local_c8[(longlong)iVar15 * 8] == local_14c) {
              if ((puVar2 != (undefined4 *)0x0) &&
                 (plVar20 = (longlong *)(puVar2 + 2), plVar20 != (longlong *)0x0)) {
                iVar15 = puVar2[4];
                puVar2[4] = iVar15 + 1U;
                if ((uint)puVar2[5] < iVar15 + 1U) {
                  FUN_1446f48e2(plVar20,iVar15);
                }
                *(undefined4 *)(*plVar20 + (longlong)iVar15 * 4) = uVar3;
                goto LAB_143bd3d52;
              }
              break;
            }
            iVar15 = puVar2[6];
          }
        }
        local_168 = (undefined4 *)0x0;
        puStack_160 = (undefined4 *)0x1;
        FUN_1446f48e2(&local_168,0);
        *local_168 = uVar3;
        local_130 = (undefined **)&local_14c;
        local_128 = &local_168;
        FUN_1484a937c(&local_c8,local_134,&local_130,0);
        if (local_168 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
LAB_143bd3d52:
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar1);
      if (local_a0 != 0) {
        puVar7 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar7 = local_b8;
        }
        uVar18 = *puVar7;
        if (uVar18 == 0) {
          iVar15 = local_a0 + 0x1e;
          if (-1 < (int)(local_a0 - 1)) {
            iVar15 = local_a0 - 1;
          }
          uVar21 = 0;
          uVar12 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar12 = uVar21;
          }
          iVar15 = 0;
          do {
            if (uVar12 == uVar21) goto LAB_143bd4261;
            iVar15 = iVar15 + 0x20;
            uVar18 = puVar7[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar21 = 0;
          iVar15 = 0;
        }
        uVar14 = (ulonglong)(-uVar18 & uVar18);
        uVar12 = uVar14 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar18 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 < (int)local_a0) {
          uVar13 = 0xffffffff;
          local_170 = (ulonglong)local_a0;
          do {
            lVar22 = (longlong)(int)uVar18;
            local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_c8[lVar22 * 8]);
            puStack_160 = (undefined4 *)0x0;
            iVar19 = local_c8[lVar22 * 8 + 4];
            _Src = *(void **)(local_c8 + lVar22 * 8 + 2);
            if ((longlong)iVar19 == 0) {
              local_120 = (undefined4 *)0x0;
              local_114 = 0;
              local_118 = 0;
            }
            else {
              local_158._0_4_ = iVar19;
              FUN_144a06ca8(&puStack_160,iVar19,0);
              memcpy(puStack_160,_Src,(longlong)iVar19 << 2);
              local_120 = puStack_160;
              local_114 = local_158._4_4_;
              local_118 = (int)local_158;
            }
            local_130 = &PTR_FUN_14ae72ba0;
            local_110 = 1.0;
            local_108 = 0x3f800000;
            local_104 = 0x101;
            local_100 = 0x3f80000000000000;
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = 0;
            lStack_e8 = 0;
            local_d0 = 0;
            puStack_160 = (undefined4 *)0x0;
            local_158 = 0;
            local_128 = param_2;
            if (0 < local_118) {
              local_110 = (double)*pfVar4;
              if (0.0 <= *pfVar4) {
                uVar5 = *(undefined1 *)(pfVar4 + 1);
              }
              else {
                uVar5 = 0;
              }
              local_104 = CONCAT11(*(undefined1 *)((longlong)pfVar4 + 5),uVar5) ^ 0x100;
              local_100 = *(undefined8 *)(pfVar4 + 2);
              FUN_1482df9a8(&local_130);
              if ((longlong)(int)local_e0 != 0) {
                lVar22 = (longlong)(int)local_e0 * 0x50;
                lVar23 = lStack_e8;
                do {
                  FUN_143bd1cb4(param_2,lVar23,*(undefined8 *)(pfVar4 + 5));
                  lVar23 = lVar23 + 0x50;
                  lVar22 = lVar22 + -0x50;
                } while (lVar22 != 0);
              }
            }
            FUN_1482df938(&local_130);
            if (puStack_160 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
            uVar13 = uVar13 & ~(uint)uVar14;
            puVar7 = local_a8;
            if (local_a8 == (uint *)0x0) {
              puVar7 = local_b8;
            }
            iVar19 = (int)uVar21;
            lVar22 = (longlong)iVar19;
            uVar18 = puVar7[lVar22] & uVar13;
            if (uVar18 == 0) {
              iVar9 = local_a0 + 0x1e;
              if (-1 < (int)(local_a0 - 1)) {
                iVar9 = local_a0 - 1;
              }
              iVar9 = iVar9 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar19) {
                iVar10 = iVar19;
              }
              if (iVar19 < iVar9) {
                lVar23 = 0;
                do {
                  uVar18 = puVar7[lVar22 + lVar23 + 1];
                  if (uVar18 != 0) {
                    uVar21 = (ulonglong)(iVar19 + (int)lVar23 + 1);
                    uVar13 = 0xffffffff;
                    goto LAB_143bd421e;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar10 - lVar22 != lVar23);
                uVar13 = 0xffffffff;
                iVar19 = iVar10;
              }
              uVar21 = (ulonglong)(iVar19 + 1);
              uVar18 = local_a0;
            }
            else {
LAB_143bd421e:
              uVar14 = (ulonglong)(-uVar18 & uVar18);
              uVar12 = uVar14 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uVar18 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if ((int)local_a0 <= (int)uVar18) {
                uVar18 = local_a0;
              }
            }
          } while (uVar18 != (uint)local_170);
        }
      }
    }
LAB_143bd4261:
    local_80 = 0;
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14083ed90(&local_c8);
  }
  else {
    local_130 = &PTR_FUN_14ae72ba0;
    local_110 = 1.0;
    local_108 = 0x3f800000;
    local_104 = 0x101;
    local_100 = 0x3f80000000000000;
    local_f0 = 0;
    lStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_120 = local_148;
    local_148 = (undefined4 *)0x0;
    local_118 = (int)uStack_140;
    local_114 = uStack_140._4_4_;
    uStack_140 = 0;
    local_128 = param_2;
    if (0 < iVar15) {
      local_110 = (double)*pfVar4;
      if (0.0 <= *pfVar4) {
        uVar5 = *(undefined1 *)(pfVar4 + 1);
      }
      else {
        uVar5 = 0;
      }
      local_104 = CONCAT11(*(undefined1 *)((longlong)pfVar4 + 5),uVar5) ^ 0x100;
      local_100 = *(undefined8 *)(pfVar4 + 2);
      FUN_1482df9a8(&local_130);
      if ((longlong)(int)local_e0 != 0) {
        lVar22 = (longlong)(int)local_e0 * 0x50;
        lVar23 = lStack_e8;
        do {
          FUN_143bd1cb4(param_2,lVar23,*(undefined8 *)(pfVar4 + 5));
          lVar23 = lVar23 + 0x50;
          lVar22 = lVar22 + -0x50;
        } while (lVar22 != 0);
      }
    }
    FUN_1482df938(&local_130);
  }
  if (local_148 != (undefined4 *)0x0) {
    FUN_1400020a8(local_148);
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd4408 FUN_143bd4408 body=965 status=ok
// SIG undefined FUN_143bd4408(void)

void FUN_143bd4408(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint7 uVar12;
  longlong lVar11;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  double local_180;
  float local_178;
  double local_170;
  uint local_168;
  float local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_150 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_148 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  pfVar4 = (float *)*param_1;
  local_180 = (double)*pfVar4;
  local_168 = (uint)*(byte *)(pfVar4 + 1);
  local_164 = pfVar4[2];
  fVar2 = pfVar4[3];
  local_178 = 1.40116e-41;
  if ((int)fVar2 < 9999) {
    local_178 = fVar2;
  }
  if ((int)local_178 < 1) {
    local_178 = 0.0;
  }
  local_170 = (double)pfVar4[4];
  if (10.0 <= local_170) {
    local_170 = 10.0;
  }
  if (local_170 <= -10.0) {
    local_170 = -10.0;
  }
  cVar1 = *(char *)param_1[1];
  uVar12 = (uint7)(uint3)((uint)fVar2 >> 8);
  if (cVar1 == '\0') {
    local_198 = 0;
    uStack_190 = 0;
    FUN_143bab15a(param_1[2],param_2,&local_198,CONCAT71(uVar12,1));
    FUN_1482e82aa(&local_180,param_2,&local_198);
  }
  else {
    if (cVar1 != '\x03') {
      local_198 = 0;
      uStack_190 = 0;
      FUN_143bab15a(param_1[2],param_2,&local_198,CONCAT71(uVar12,5));
      puVar9 = (undefined8 *)FUN_14001cc68(0x170,0x10);
      FUN_1482aa55c(puVar9,param_2,1);
      local_1a8 = (undefined1 *)0x0;
      uStack_1a0 = (longlong *)0x0;
      iVar3 = *(int *)(puVar9 + 0xf);
      if (0 < (longlong)iVar3) {
        lVar13 = 0;
        do {
          plVar6 = uStack_1a0;
          lVar10 = (longlong)(int)uStack_190;
          if (lVar10 == 0) {
            bVar14 = false;
          }
          else {
            uVar5 = *(undefined8 *)(puVar9[0xe] + lVar13 * 0x50);
            lVar11 = 0;
            do {
              bVar14 = *(int *)(local_198 + lVar11) == (int)uVar5;
              if (bVar14) break;
              bVar15 = lVar10 * 4 + -4 != lVar11;
              lVar11 = lVar11 + 4;
            } while (bVar15);
            lVar11 = 0;
            do {
              if (*(int *)(local_198 + lVar11) == (int)((ulonglong)uVar5 >> 0x20)) {
                cVar7 = '\x01';
                goto LAB_143bd46a3;
              }
              lVar11 = lVar11 + 4;
            } while (lVar10 * 4 != lVar11);
          }
          cVar7 = '\0';
LAB_143bd46a3:
          if ((byte)((cVar1 == '\x02') + 1U) <= (byte)(bVar14 + cVar7)) {
            lVar10 = (longlong)(int)uStack_1a0;
            uVar8 = (int)uStack_1a0 + 1;
            uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar8);
            if (uStack_1a0._4_4_ < uVar8) {
              FUN_1446f48e2(&local_1a8,(ulonglong)plVar6 & 0xffffffff);
            }
            *(int *)(local_1a8 + lVar10 * 4) = (int)lVar13;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != iVar3);
      }
      FUN_1482e6f16(&local_180,param_2,puVar9,&local_1a8);
      if (local_1a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      FUN_1482e9466(&local_180,param_2,0);
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      goto LAB_143bd4790;
    }
    local_198 = 0;
    uStack_190 = 0;
    FUN_143bab15a(param_1[2],param_2,&local_198,CONCAT71(uVar12,2));
    if (*(char *)(param_2 + 0x1a8) == '\x01') {
      local_1a8 = &LAB_143bd47ce;
      local_1b0 = param_2;
    }
    else {
      local_1a8 = &LAB_143bd47d8;
    }
    uStack_1a0 = &local_1b0;
    local_1c0 = local_198;
    local_1b8 = (int)uStack_190;
    FUN_1482e709c(&local_180,param_2);
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_1482e9466(&local_180,param_2,0);
LAB_143bd4790:
  FUN_1485c17c6(&local_180);
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd47dc FUN_143bd47dc body=3754 status=ok
// SIG undefined FUN_143bd47dc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffce8 : 0x000143bd4a89 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143bd47dc(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined **ppuVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined ***pppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  longlong *plVar28;
  float fVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  undefined1 auStack_558 [40];
  undefined8 local_530;
  longlong *local_528;
  undefined1 local_520 [4];
  undefined1 local_51c [4];
  longlong *local_518 [2];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  code *local_4d8;
  undefined8 uStack_4d0;
  undefined1 *local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  undefined **local_4a8;
  undefined8 *puStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 *local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined **local_468;
  undefined *puStack_460;
  code *local_448;
  int iStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined **local_428;
  undefined *puStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined **local_3e8;
  undefined *puStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined4 local_3a0;
  code *local_398;
  ulonglong uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined **local_378;
  int iStack_370;
  uint uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  longlong local_358;
  undefined4 local_350;
  undefined1 local_348;
  code *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined **local_318;
  undefined1 *puStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [208];
  longlong local_228;
  ulonglong uStack_220;
  uint local_218 [4];
  uint *local_208;
  int local_200;
  uint local_1fc;
  undefined4 uStack_1f8;
  int local_1f4;
  undefined1 local_1f0 [8];
  undefined1 *local_1e8;
  int local_1e0;
  undefined1 local_1d8 [112];
  longlong local_168;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_558;
  FUN_1482aa55c(local_1d8,param_2,1);
  local_4d8 = (code *)0x0;
  uStack_4d0 = 0;
  pfVar16 = (float *)*param_1;
  if (*(char *)(pfVar16 + 5) == '\x01') {
    if (*(char *)(pfVar16 + 0x12) == '\0') {
      local_508 = 0x7fefffffffffffff;
      uStack_500 = 0x7fefffffffffffff;
      local_4f8 = 0x7fefffffffffffff;
      local_4e0 = 0xffefffffffffffff;
      local_4f0 = 0xffefffffffffffff;
      uStack_4e8 = 0xffefffffffffffff;
    }
    else {
      local_4f8 = *(undefined8 *)(pfVar16 + 10);
      local_508 = *(undefined8 *)(pfVar16 + 6);
      uStack_500 = *(undefined8 *)(pfVar16 + 8);
      local_4f0 = *(undefined8 *)(pfVar16 + 0xc);
      uStack_4e8 = *(undefined8 *)(pfVar16 + 0xe);
      local_4e0 = *(undefined8 *)(pfVar16 + 0x10);
    }
    local_208 = (uint *)0x0;
    local_200 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1fc = 0x80;
    uStack_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_1e8 = (undefined1 *)0x0;
    local_1e0 = 0;
    FUN_146ba21d6(local_2f8,param_2,1);
    local_478 = 0;
    local_468 = &PTR_LAB_14aef06f0;
    puStack_460 = &DAT_1484c14e0;
    local_488 = &LAB_1484c14e2;
    uStack_438 = 0;
    uStack_434 = 0;
    local_428 = &PTR_LAB_14aef0710;
    puStack_420 = &DAT_1484c1538;
    local_448 = (code *)&LAB_1484c153a;
    local_3f8 = 0;
    local_3e8 = &PTR_LAB_14aef0710;
    puStack_3e0 = &DAT_1484c158a;
    local_408 = &LAB_1484c153a;
    local_398 = (code *)&LAB_1484c1488;
    uStack_368 = (undefined4)local_498;
    uStack_364 = local_498._4_4_;
    local_378 = &PTR_LAB_14aef06d0;
    iStack_370 = 0x484c1484;
    uStack_36c = 1;
    local_388 = 0;
    uVar4 = CONCAT44(uStack_304,local_308);
    uVar5 = CONCAT44(uStack_2fc,uStack_300);
    local_4a8 = &PTR_LAB_14af7bcd0;
    uVar3 = CONCAT44(uStack_31c,uStack_320);
    local_4b8 = 0.0;
    local_4c8 = &LAB_143bd5688;
    uVar2 = CONCAT44(uStack_32c,iStack_330);
    local_338 = (code *)&LAB_1484c1488;
    iStack_330 = (undefined4)uStack_4c0;
    uStack_32c = uStack_4c0._4_4_;
    local_318 = &PTR_LAB_14aef06d0;
    puStack_310 = &LAB_1484c1484;
    local_308 = (undefined4)local_498;
    uStack_304 = local_498._4_4_;
    uStack_300 = (undefined4)uStack_490;
    uStack_2fc = uStack_490._4_4_;
    local_328 = (undefined ***)0x0;
    uStack_320 = (undefined4)uStack_4b0;
    uStack_31c = uStack_4b0._4_4_;
    uStack_4c0 = uVar2;
    uStack_4b0 = uVar3;
    puStack_4a0 = &local_508;
    local_498 = uVar4;
    uStack_490 = uVar5;
    (*(code *)&LAB_1484c14b6)();
    lVar30 = *param_1;
    local_338 = (code *)0x0;
    local_328 = (undefined ***)0x0;
    puVar13 = (undefined8 *)FUN_14001cc68(0x28,8);
    puVar10 = puStack_420;
    ppuVar15 = local_428;
    uVar9 = uStack_434;
    uVar8 = uStack_438;
    uVar7 = uStack_43c;
    iVar27 = iStack_440;
    pcVar6 = local_448;
    *puVar13 = &PTR_FUN_14af7bcf0;
    puVar13[1] = &local_508;
    puVar13[2] = &local_228;
    puVar13[3] = param_2;
    puVar13[4] = lVar30;
    if (puVar13 + 1 != (longlong *)0x0) {
      local_338 = FUN_143bd571e;
    }
    uStack_368 = (undefined4)local_418;
    uStack_364 = (undefined4)((ulonglong)local_418 >> 0x20);
    uStack_360 = uStack_410;
    uVar5 = uStack_360;
    local_378 = local_428;
    iStack_370 = (int)puStack_420;
    uStack_36c = (uint)((ulonglong)puStack_420 >> 0x20);
    local_388 = CONCAT44(uStack_434,uStack_438);
    uStack_380 = uStack_430;
    uVar4 = uStack_380;
    local_398 = local_448;
    uVar2 = CONCAT44(uStack_31c,uStack_320);
    local_418 = CONCAT44(uStack_304,local_308);
    uVar3 = CONCAT44(uStack_2fc,uStack_300);
    local_428 = local_318;
    puStack_420 = puStack_310;
    uStack_438 = SUB84(puVar13,0);
    uStack_434 = (undefined4)((ulonglong)puVar13 >> 0x20);
    local_448 = local_338;
    iStack_440 = iStack_330;
    uStack_43c = uStack_32c;
    uStack_380._0_4_ = (undefined4)uStack_430;
    uStack_380._4_4_ = (undefined4)((ulonglong)uStack_430 >> 0x20);
    uStack_360._0_4_ = (undefined4)uStack_410;
    uStack_360._4_4_ = (undefined4)((ulonglong)uStack_410 >> 0x20);
    local_308 = uStack_368;
    uStack_304 = uStack_364;
    uStack_300 = (undefined4)uStack_360;
    uStack_2fc = uStack_360._4_4_;
    local_318 = ppuVar15;
    puStack_310 = puVar10;
    local_328 = (undefined ***)CONCAT44(uVar9,uVar8);
    uStack_320 = (undefined4)uStack_380;
    uStack_31c = uStack_380._4_4_;
    local_338 = pcVar6;
    iStack_330 = iVar27;
    uStack_32c = uVar7;
    uStack_430 = uVar2;
    uStack_410 = uVar3;
    uStack_380 = uVar4;
    uStack_360 = uVar5;
    if (pcVar6 != (code *)0x0) {
      pppuVar23 = &local_318;
      if (local_328 != (undefined ***)0x0) {
        pppuVar23 = local_328;
      }
      (*(code *)(*pppuVar23)[2])(pppuVar23);
    }
    local_398 = (code *)0x7fefffffffffffff;
    iVar27 = 0;
    local_388 = 0;
    local_378 = (undefined **)0x0;
    local_348 = 0;
    local_530 = param_2;
    local_528 = param_1;
    FUN_146bde40e(local_2f8,&local_4c8,&local_398);
    if (local_388 != 0) {
      ppuVar15 = local_378;
      if (local_378 == (undefined **)0x0) {
        ppuVar15 = (undefined **)&uStack_368;
      }
      (**(code **)((longlong)*ppuVar15 + 0x10))();
    }
    iVar20 = local_200;
    local_378 = (undefined **)0x0;
    iStack_370 = 0;
    local_398 = (code *)0x0;
    uStack_390 = 0;
    uStack_36c = 0x80;
    uStack_368 = 0xffffffff;
    uStack_364 = 0;
    local_358 = 0;
    local_350 = 0;
    uVar25 = 1;
    uVar24 = 0;
    iVar11 = 0;
    if (local_200 != 0) {
      puVar14 = local_208;
      if (local_208 == (uint *)0x0) {
        puVar14 = local_218;
      }
      uVar32 = *puVar14;
      if (uVar32 == 0) {
        iVar27 = local_200 + 0x1e;
        if (-1 < local_200 + -1) {
          iVar27 = local_200 + -1;
        }
        uVar24 = 0;
        uVar25 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar25 = 0;
        }
        iVar27 = 0;
        do {
          if (uVar25 == uVar24) goto LAB_143bd4cf2;
          iVar27 = iVar27 + 0x20;
          uVar32 = puVar14[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar32 == 0);
      }
      else {
        iVar27 = 0;
        uVar24 = 0;
      }
      uVar25 = (ulonglong)(-uVar32 & uVar32);
      uVar26 = uVar25 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar11 = (iVar27 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (local_200 <= iVar11) {
        iVar11 = local_200;
      }
    }
    if (iVar11 != local_200) {
      uVar32 = 0xffffffff;
      do {
        iVar11 = FUN_1482abca2(local_1d8,*(undefined4 *)(local_228 + (longlong)iVar11 * 0xc));
        local_338 = (code *)CONCAT44(local_338._4_4_,iVar11);
        if (-1 < iVar11) {
          FUN_1447cbafe(&local_398,local_518,&local_338,0);
        }
        uVar32 = uVar32 & ~(uint)uVar25;
        puVar14 = local_208;
        if (local_208 == (uint *)0x0) {
          puVar14 = local_218;
        }
        iVar11 = (int)uVar24;
        lVar30 = (longlong)iVar11;
        uVar12 = puVar14[lVar30] & uVar32;
        if (uVar12 == 0) {
          iVar17 = local_200 + 0x1e;
          if (-1 < local_200 + -1) {
            iVar17 = local_200 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar27 = iVar27 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar11) {
            iVar18 = iVar11;
          }
          if (iVar11 < iVar17) {
            lVar31 = 0;
            do {
              uVar12 = puVar14[lVar30 + lVar31 + 1];
              if (uVar12 != 0) {
                uVar24 = (ulonglong)(iVar11 + (int)lVar31 + 1);
                uVar32 = 0xffffffff;
                goto LAB_143bd4e69;
              }
              iVar27 = iVar27 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar18 - lVar30 != lVar31);
            uVar32 = 0xffffffff;
            lVar30 = (longlong)iVar18;
          }
          uVar24 = lVar30 + 1U & 0xffffffff;
          iVar11 = local_200;
        }
        else {
LAB_143bd4e69:
          uVar25 = (ulonglong)(-uVar12 & uVar12);
          uVar26 = uVar25 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          iVar11 = (iVar27 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          if (local_200 <= iVar11) {
            iVar11 = local_200;
          }
        }
      } while (iVar11 != iVar20);
    }
LAB_143bd4cf2:
    iVar27 = iStack_370;
    plVar28 = local_528;
    if (*(char *)(*local_528 + 0xb0) == '\0') {
      FUN_140619b9c(&local_398,&local_338);
      param_2 = local_530;
      if (local_4d8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_4d8 = local_338;
      uStack_4d0 = CONCAT44(uStack_32c,iStack_330);
      iVar27 = iStack_330;
    }
    else {
      if (iStack_370 == 0) {
        uVar26 = 1;
        uVar24 = 0;
        iVar11 = 0;
        iVar20 = 0;
      }
      else {
        ppuVar15 = local_378;
        if (local_378 == (undefined **)0x0) {
          ppuVar15 = (undefined **)&local_388;
        }
        uVar32 = *(uint *)ppuVar15;
        if (uVar32 == 0) {
          iVar11 = iStack_370 + 0x1e;
          if (-1 < iStack_370 + -1) {
            iVar11 = iStack_370 + -1;
          }
          uVar24 = 0;
          uVar25 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar25 = uVar24;
          }
          iVar11 = 0;
          do {
            if (uVar25 == uVar24) goto LAB_143bd4f14;
            iVar11 = iVar11 + 0x20;
            uVar32 = *(uint *)((longlong)ppuVar15 + (uVar24 + 1) * 4);
            uVar24 = uVar24 + 1;
          } while (uVar32 == 0);
        }
        else {
          uVar24 = 0;
          iVar11 = 0;
        }
        uVar26 = (ulonglong)(-uVar32 & uVar32);
        uVar25 = uVar26 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar20 = (iVar11 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if (iStack_370 <= iVar20) {
          iVar20 = iStack_370;
        }
      }
      if (iVar20 != iStack_370) {
        uVar32 = 0xffffffff;
        iVar17 = iStack_370;
        do {
          uVar25 = uStack_4d0;
          iVar20 = *(int *)(local_398 + (longlong)iVar20 * 0xc);
          lVar30 = (longlong)iVar20 * 0x50;
          lVar31 = (longlong)*(int *)(local_168 + 0x28 + lVar30);
          if (lVar31 == 0) {
LAB_143bd54cc:
            lVar30 = (longlong)(int)uStack_4d0;
            uVar12 = (int)uStack_4d0 + 1;
            uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar12);
            if (uStack_4d0._4_4_ < uVar12) {
              FUN_1446f48e2(&local_4d8,uVar25 & 0xffffffff);
            }
            *(int *)(local_4d8 + lVar30 * 4) = iVar20;
            iVar17 = iStack_370;
          }
          else {
            puVar21 = local_1e8;
            if (local_1e8 == (undefined1 *)0x0) {
              puVar21 = local_1f0;
            }
            if ((int)uStack_220 != local_1f4) {
              puVar22 = *(uint **)(local_168 + 0x20 + lVar30);
              puVar14 = puVar22 + lVar31;
              do {
                iVar18 = *(int *)(puVar21 + (ulonglong)(*puVar22 & local_1e0 - 1U) * 4);
                while( true ) {
                  if (iVar18 == -1) goto LAB_143bd550b;
                  if (*(uint *)(local_228 + (longlong)iVar18 * 0xc) == *puVar22) break;
                  iVar18 = *(int *)(local_228 + (longlong)iVar18 * 0xc + 4);
                }
                puVar22 = puVar22 + 1;
              } while (puVar22 != puVar14);
              goto LAB_143bd54cc;
            }
          }
LAB_143bd550b:
          uVar32 = uVar32 & ~(uint)uVar26;
          ppuVar15 = local_378;
          if (local_378 == (undefined **)0x0) {
            ppuVar15 = (undefined **)&local_388;
          }
          iVar20 = (int)uVar24;
          lVar30 = (longlong)iVar20;
          uVar12 = *(uint *)((longlong)ppuVar15 + lVar30 * 4) & uVar32;
          if (uVar12 == 0) {
            iVar18 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar18 = iVar17 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar19 = iVar18;
            if (iVar18 < iVar20) {
              iVar19 = iVar20;
            }
            if (iVar20 < iVar18) {
              lVar31 = 0;
              do {
                uVar12 = *(uint *)((longlong)ppuVar15 + (lVar30 + lVar31 + 1) * 4);
                if (uVar12 != 0) {
                  uVar24 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                  uVar32 = 0xffffffff;
                  goto LAB_143bd5580;
                }
                iVar11 = iVar11 + 0x20;
                lVar31 = lVar31 + 1;
              } while (iVar19 - lVar30 != lVar31);
              uVar32 = 0xffffffff;
              lVar30 = (longlong)iVar19;
            }
            uVar24 = lVar30 + 1U & 0xffffffff;
            iVar20 = iVar17;
          }
          else {
LAB_143bd5580:
            uVar26 = (ulonglong)(-uVar12 & uVar12);
            uVar25 = uVar26 * 2 + 1;
            lVar30 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            iVar20 = (iVar11 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar20) {
              iVar20 = iVar17;
            }
          }
        } while (iVar20 != iVar27);
      }
LAB_143bd4f14:
      plVar28 = local_528;
      param_2 = local_530;
      iVar27 = (int)uStack_4d0;
    }
    if (iVar27 == 0) {
      local_338 = (code *)0x14af7bc78;
      iStack_330 = 0x25;
      FUN_1446e940c(local_51c,&local_338);
      local_338 = (code *)0x14af52fc0;
      iStack_330 = 0x2c;
      FUN_1446e940c(local_520,&local_338);
      local_338 = (code *)0x14af7bbb0;
      iStack_330 = 99;
      FUN_140208c1e(local_518,local_520,local_51c,&local_338);
      FUN_143ba90d7(*(undefined8 *)plVar28[1],2,local_518);
      if (local_518[0] != (longlong *)0x0) {
        (**(code **)(*local_518[0] + 0x10))();
      }
      local_350 = 0;
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_390 >> 0x20;
      uStack_390 = uStack_390 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_398,0);
      }
      uStack_368 = 0xffffffff;
      uStack_364 = 0;
      iStack_370 = 0;
      if (0x80 < uStack_36c) {
        uStack_36c = 0x80;
        FUN_1446efbd8(&local_388,0);
      }
      if (local_378 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_398 != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_1484c1188(&local_4c8);
      FUN_1457e5b52(local_2f8);
      local_1e0 = 0;
      if (local_1e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_220 >> 0x20;
      uStack_220 = uStack_220 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_228,0);
      }
      uStack_1f8 = 0xffffffff;
      local_1f4 = 0;
      local_200 = 0;
      if (0x80 < local_1fc) {
        local_1fc = 0x80;
        FUN_1446efbd8(local_218,0);
      }
      if (local_208 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_228 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143bd53c5;
    }
    local_350 = 0;
    if (local_358 != 0) {
      FUN_1400020a8();
    }
    uVar24 = uStack_390 >> 0x20;
    uStack_390 = uStack_390 & 0xffffffff00000000;
    if ((int)uVar24 != 0) {
      FUN_1447a08a2(&local_398,0);
    }
    uStack_368 = 0xffffffff;
    uStack_364 = 0;
    iStack_370 = 0;
    if (0x80 < uStack_36c) {
      uStack_36c = 0x80;
      FUN_1446efbd8(&local_388,0);
    }
    if (local_378 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_398 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1484c1188(&local_4c8);
    FUN_1457e5b52(local_2f8);
    local_1e0 = 0;
    if (local_1e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar24 = uStack_220 >> 0x20;
    uStack_220 = uStack_220 & 0xffffffff00000000;
    if ((int)uVar24 != 0) {
      FUN_1447a08a2(&local_228,0);
    }
    uStack_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_200 = 0;
    if (0x80 < local_1fc) {
      local_1fc = 0x80;
      FUN_1446efbd8(local_218,0);
    }
    if (local_208 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    pfVar16 = (float *)*plVar28;
    bVar1 = 0 < (int)uStack_4d0;
  }
  else {
    bVar1 = false;
  }
  local_4a8 = (undefined **)0x0;
  puStack_4a0 = (undefined8 *)0x0;
  local_498 = 0;
  local_488 = (undefined1 *)0x0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  uStack_490 = CONCAT44(uStack_490._4_4_,1);
  local_448 = (code *)0x0;
  iStack_440 = 0;
  local_468 = (undefined **)0x0;
  puStack_460 = (undefined *)0x0;
  uStack_43c = 0x80;
  uStack_438 = 0xffffffff;
  uStack_434 = 0;
  local_428 = (undefined **)0x0;
  puStack_420 = (undefined *)((ulonglong)puStack_420 & 0xffffffff00000000);
  local_3c8 = 0;
  local_3c0 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = (undefined1 *)0x0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = (undefined **)0x0;
  puStack_3e0 = (undefined *)0x0;
  local_3bc = 0xffffffff00000080;
  local_3b4 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_4c8 = (undefined1 *)(double)*pfVar16;
  uStack_4b0 = CONCAT44(pfVar16[2],(uint)*(byte *)(pfVar16 + 1));
  fVar29 = 1.40116e-41;
  if ((int)pfVar16[3] < 9999) {
    fVar29 = pfVar16[3];
  }
  if ((int)fVar29 < 1) {
    fVar29 = 0.0;
  }
  uStack_4c0 = CONCAT44(uStack_4c0._4_4_,fVar29);
  local_4b8 = (double)pfVar16[4];
  if (10.0 <= local_4b8) {
    local_4b8 = 10.0;
  }
  if (local_4b8 <= -10.0) {
    local_4b8 = -10.0;
  }
  if (bVar1) {
    FUN_1482e6f16(&local_4c8,param_2,local_1d8,&local_4d8);
  }
  else {
    FUN_1482e6354(&local_4c8,param_2,local_1d8);
  }
  FUN_1482e9466(&local_4c8,param_2,0);
  FUN_1485c17c6(&local_4c8);
LAB_143bd53c5:
  if (local_4d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_145aba0b4(local_1d8);
  if ((local_60 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd5700 FUN_143bd5700 body=29 status=ok
// SIG undefined FUN_143bd5700(void)

undefined8 FUN_143bd5700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bd571e FUN_143bd571e body=1414 status=ok
// SIG undefined FUN_143bd571e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bd571e(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
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
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_128 [32];
  double local_108;
  double dStack_100;
  undefined1 local_f4 [4];
  undefined8 local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)local_128;
  lVar18 = *(longlong *)(*(longlong *)(param_1[2] + 0x180) + (ulonglong)(*param_2 >> 9) * 8);
  uVar17 = (ulonglong)(*param_2 & 0x1ff);
  local_e8 = *(undefined4 *)(lVar18 + 8 + uVar17 * 0xc);
  local_f0 = *(undefined8 *)(lVar18 + uVar17 * 0xc);
  lVar18 = 0;
  do {
    plVar3 = (longlong *)param_1[1];
    uVar2 = *(uint *)((longlong)&local_f0 + lVar18 * 4);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar15 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar3[8];
      }
      iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar3[9] - 1U & uVar2) * 4);
      if (iVar16 != -1) {
        do {
          if (*(uint *)(*plVar3 + (longlong)iVar16 * 0xc) == uVar2) goto LAB_143bd5c1f;
          iVar16 = *(int *)(*plVar3 + (longlong)iVar16 * 0xc + 4);
        } while (iVar16 != -1);
      }
    }
    lVar4 = param_1[2];
    cVar14 = FUN_146c13702(lVar4,uVar2);
    if (cVar14 != '\0') {
      uVar17 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                (ulonglong)((uVar2 & 0x1ff) << 4));
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar17 >> 9 & 0x7fffff) * 8);
      pdVar1 = (double *)(lVar5 + (uVar17 & 0x1ff) * 0x18);
      lVar6 = param_1[3];
      dVar13 = *(double *)(lVar6 + 0x50);
      dVar7 = *pdVar1 - *(double *)(lVar6 + 0x70);
      dVar25 = pdVar1[1] - *(double *)(lVar6 + 0x78);
      dVar9 = *(double *)(lVar5 + 0x10 + (uVar17 & 0x1ff) * 0x18) - *(double *)(lVar6 + 0x80);
      dVar24 = -dVar13;
      local_108 = -*(double *)(lVar6 + 0x58);
      dStack_100 = *(double *)(lVar6 + 0x60) * -1.0;
      dVar22 = *(double *)(lVar6 + 0x68) * 1.0;
      dVar28 = dVar25 * dVar24 - dVar7 * local_108;
      dVar32 = dVar9 * local_108 - dVar25 * dStack_100;
      dVar26 = dVar7 * dStack_100 - dVar9 * dVar24;
      dVar32 = dVar32 + dVar32;
      dVar26 = dVar26 + dVar26;
      dVar28 = dVar28 + dVar28;
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar17 >> 0x29) * 8);
      uVar17 = uVar17 >> 0x20 & 0x1ff;
      pdVar1 = (double *)(lVar4 + uVar17 * 0x18);
      auVar31 = *(undefined1 (*) [16])(lVar6 + 0x90);
      auVar30 = divpd(_DAT_149934d80,auVar31);
      dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_)) & auVar30._0_8_);
      dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_)) & auVar30._8_8_);
      auVar31 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(lVar6 + 0xa0));
      dVar27 = (double)(-(ulonglong)
                         (9.99999993922529e-09 < ABS(SUB168(*(undefined1 (*) [16])(lVar6 + 0xa0),0))
                         ) & auVar31._0_8_);
      dVar19 = *pdVar1 - *(double *)(lVar6 + 0x70);
      dVar8 = pdVar1[1] - *(double *)(lVar6 + 0x78);
      dVar29 = *(double *)(lVar4 + 0x10 + uVar17 * 0x18) - *(double *)(lVar6 + 0x80);
      dVar11 = dVar8 * dVar24 - dVar19 * local_108;
      dVar12 = dVar29 * local_108 - dVar8 * dStack_100;
      dVar20 = dVar19 * dStack_100 - dVar29 * dVar24;
      dVar12 = dVar12 + dVar12;
      dVar20 = dVar20 + dVar20;
      dVar11 = dVar11 + dVar11;
      dVar10 = ((dVar28 * local_108 - dVar26 * dStack_100) + dVar22 * dVar32 + dVar7) * dVar21;
      dVar25 = (dVar13 * dVar28 + dStack_100 * dVar32 + dVar22 * dVar26 + dVar25) * dVar23;
      dVar21 = ((dVar11 * local_108 - dVar20 * dStack_100) + dVar22 * dVar12 + dVar19) * dVar21;
      dVar23 = (dVar13 * dVar11 + dStack_100 * dVar12 + dVar22 * dVar20 + dVar8) * dVar23;
      pdVar1 = (double *)*param_1;
      dVar19 = (dVar28 * dVar22 + dVar9 + (dVar26 * dVar24 - dVar32 * local_108)) * dVar27;
      dVar27 = (dVar11 * dVar22 + dVar29 + (dVar20 * dVar24 - dVar12 * local_108)) * dVar27;
      dVar7 = *pdVar1;
      if (*(char *)(lVar6 + 0xb0) == '\x01') {
        if ((((((dVar7 <= dVar10) && (pdVar1[1] <= dVar25)) && (pdVar1[2] <= dVar19)) &&
             ((dVar10 <= pdVar1[3] && (dVar25 <= pdVar1[4])))) &&
            ((dVar25 = pdVar1[5], dVar19 <= dVar25 && ((dVar7 <= dVar21 && (pdVar1[1] <= dVar23)))))
            ) && ((pdVar1[2] <= dVar27 && ((dVar21 <= pdVar1[3] && (dVar23 <= pdVar1[4])))))) {
LAB_143bd5c02:
          if (dVar27 <= dVar25) goto LAB_143bd5c09;
        }
      }
      else if (((((dVar10 < dVar7) || (dVar25 < pdVar1[1])) || (dVar19 < pdVar1[2])) ||
               ((pdVar1[3] < dVar10 || (pdVar1[4] < dVar25)))) || (pdVar1[5] < dVar19)) {
        if (((dVar7 <= dVar21) && (pdVar1[1] <= dVar23)) &&
           ((pdVar1[2] <= dVar27 && ((dVar21 <= pdVar1[3] && (dVar23 <= pdVar1[4])))))) {
          dVar25 = pdVar1[5];
          goto LAB_143bd5c02;
        }
      }
      else {
LAB_143bd5c09:
        FUN_1447cbafe(plVar3,local_f4,(longlong)&local_f0 + lVar18 * 4,0);
      }
    }
LAB_143bd5c1f:
    lVar18 = lVar18 + 1;
    if (lVar18 == 3) {
      if ((local_e0 ^ (ulonglong)local_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 143bd5ca6 FUN_143bd5ca6 body=70 status=ok
// SIG undefined FUN_143bd5ca6(void)

undefined8 * FUN_143bd5ca6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14af7bcf0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143bd5cf2 FUN_143bd5cf2 body=29 status=ok
// SIG undefined FUN_143bd5cf2(void)

void FUN_143bd5cf2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143bd5d10 FUN_143bd5d10 body=29 status=ok
// SIG undefined FUN_143bd5d10(void)

undefined8 FUN_143bd5d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bd5d2e FUN_143bd5d2e body=443 status=ok
// SIG undefined FUN_143bd5d2e(void)

void FUN_143bd5d2e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_48 [32];
  uint local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146c0aee0(param_2);
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x38))) &&
     (lVar1 = **(longlong **)(lVar1 + 0x30), lVar1 != 0)) {
    uVar2 = *(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc);
    uVar8 = 0;
    if ((uVar2 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x10) - 1U))) {
      uVar3 = 1;
      uVar4 = 1;
      if (1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      do {
        uVar5 = uVar4;
        uVar8 = uVar3;
        if (uVar3 == uVar5) break;
        uVar4 = uVar5 + 1;
        uVar8 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x10))[uVar5 >> 9] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143bd5de0:
    uVar3 = uVar8;
    if (uVar3 != uVar2) {
      lVar6 = *(longlong *)(lVar1 + 0x48);
      lVar7 = 0;
      do {
        uVar8 = uVar3 * 3 + (int)lVar7;
        local_28[lVar7 + 3] =
             *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      local_28[0] = local_28[3] ^ 0x80000000;
      local_28[1] = local_28[4] ^ 0x80000000;
      local_28[2] = local_28[5] ^ 0x80000000;
      lVar6 = 0;
      do {
        uVar8 = uVar3 * 3 + (int)lVar6;
        *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4) = local_28[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      uVar4 = uVar3 + 1;
      if ((int)(uVar3 + 1) < (int)uVar2) {
        uVar4 = uVar2;
      }
      do {
        uVar8 = uVar4;
        if (uVar4 - 1 == uVar3) break;
        uVar3 = uVar3 + 1;
        uVar8 = uVar3;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x10) +
                                             (ulonglong)(uVar3 >> 9) * 8) +
                                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143bd5de0;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd5eea FUN_143bd5eea body=172 status=ok
// SIG undefined FUN_143bd5eea(void)

void FUN_143bd5eea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = &PTR_FUN_14aee4ca8;
  local_108 = 0;
  uStack_100 = 0;
  local_110 = param_2;
  FUN_148329528(&local_118);
  FUN_146ba21d6(local_f8,param_2,1);
  FUN_148329cfa(&local_118,local_f8);
  FUN_1457e5b52(local_f8);
  local_118 = &PTR_FUN_14aee4ca8;
  FUN_148360edd(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd5f98 FUN_143bd5f98 body=66 status=ok
// SIG undefined FUN_143bd5f98(void)

void FUN_143bd5f98(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12(param_2);
    lVar1 = *(longlong *)(param_2 + 0x208);
  }
  if (*(int *)(lVar1 + 0x38) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(lVar1 + 0x30);
  }
  FUN_146c39810(uVar2,0);
  return;
}



// FUNCTION 143bd5fe2 FUN_143bd5fe2 body=441 status=ok
// SIG undefined FUN_143bd5fe2(void)

void FUN_143bd5fe2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12(param_2);
    lVar1 = *(longlong *)(param_2 + 0x208);
  }
  local_50 = 0;
  uStack_48 = 0;
  iVar2 = *(int *)(lVar1 + 0x38);
  if (iVar2 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(lVar1 + 0x30);
  }
  local_58 = param_2;
  if (*(int *)(lVar4 + 0x38) == 0) {
    local_40 = L"RecomputeNormals_NothingToRecompute";
    local_38._0_4_ = 0x23;
    FUN_1446e940c(local_6c,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_38._0_4_ = 0x2b;
    FUN_1446e940c(local_70,&local_40);
    local_40 = 
    L"RecomputeNormals: TargetMesh did not have normals to recompute; falling back to per-vertex normals. Consider using \'Set Mesh To Per Vertex Normals\' or \'Compute Split Normals\' instead."
    ;
    local_38 = (longlong **)CONCAT44(local_38._4_4_,0xb7);
    FUN_140208c1e(local_68,local_70,local_6c,&local_40);
    FUN_143ba9449(*(undefined8 *)*param_1,2,local_68);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    local_40 = L"ư쳃坁噁坖䡓\xec81°";
    local_38 = local_68;
    FUN_146c2fed0(uVar3,&local_40,0);
    lVar1 = *(longlong *)(param_2 + 0x208);
    iVar2 = *(int *)(lVar1 + 0x38);
  }
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(lVar1 + 0x30);
  }
  FUN_146c383fc(&local_58,uVar3,((undefined1 *)param_1[1])[1],*(undefined1 *)param_1[1]);
  if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
  }
  FUN_146c378c6(&local_58,uVar3,0);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd61a0 FUN_143bd61a0 body=652 status=ok
// SIG undefined FUN_143bd61a0(void)

void FUN_143bd61a0(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  wchar_t **local_a8;
  longlong local_a0;
  code *local_98;
  longlong **local_90;
  wchar_t *local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_2 + 0x208);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x38) < 1)) ||
     (lVar3 = **(longlong **)(lVar3 + 0x30), lVar3 == 0)) {
    local_88 = L"RecomputeNormalsForMeshSelection_NoAttributes";
    uStack_80._0_4_ = 0x2d;
    FUN_1446e940c(&local_b0,&local_88);
    local_88 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    uStack_80._0_4_ = 0x2b;
    FUN_1446e940c(&local_a0,&local_88);
    local_88 = L"RecomputeNormalsForMeshSelection: TargetMesh has no Normals attribute enabled";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x4d);
    FUN_140208c1e(&local_98,&local_a0,&local_b0,&local_88);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_98);
    if (local_98 != (code *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
  }
  else {
    uVar4 = param_1[1];
    cVar6 = FUN_143ba9b82();
    if ((cVar6 == '\x03') || (cVar6 == '\0')) {
      local_b0 = &local_a0;
      local_68 = 0;
      local_60 = 0;
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      local_5c = 0x80;
      uStack_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_90 = &local_b0;
      local_98 = FUN_143bd642e;
      local_a8 = &local_88;
      local_a0 = lVar3;
      FUN_143bad420(uVar4,param_2,&local_98,0);
      uVar1 = *(undefined1 *)param_1[2];
      uVar2 = ((undefined1 *)param_1[2])[1];
      FUN_140619b9c(&local_88,&local_b0);
      FUN_146c392f8(param_2,&local_b0,CONCAT71((int7)((ulonglong)param_1 >> 8),uVar2) & 0xffffffff,
                    CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar1) & 0xffffffff);
      if (local_b0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      uVar5 = uStack_80 >> 0x20;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        FUN_1447a08a2(&local_88,0);
      }
      uStack_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        FUN_1446efbd8(local_78,0);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      FUN_143bab15a(uVar4,param_2,&local_88,1);
      FUN_146c390fc(param_2,&local_88,((undefined1 *)param_1[2])[1],*(undefined1 *)param_1[2]);
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd642e FUN_143bd642e body=96 status=ok
// SIG undefined FUN_143bd642e(void)

void FUN_143bd642e(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[1];
  local_10 = &local_20;
  local_18 = FUN_143bd6490;
  FUN_146c3584c(*(undefined8 *)*param_1,*param_2,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd6490 FUN_143bd6490 body=75 status=ok
// SIG undefined FUN_143bd6490(void)

undefined8 FUN_143bd6490(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_3;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd64dc FUN_143bd64dc body=1351 status=ok
// SIG undefined FUN_143bd64dc(void)

void FUN_143bd64dc(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  code **ppcVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148 [2];
  longlong *local_138;
  ulonglong uStack_130;
  longlong *local_128;
  code *local_120;
  longlong **local_118;
  char local_10d;
  undefined4 local_10c;
  longlong *local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar6 = *(longlong *)(param_2 + 0x208);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 0x38) < 1)) || (**(longlong **)(lVar6 + 0x30) == 0)) {
    local_b8 = L"SetSplitNormalsAlongSelectedEdges_NoAttributes";
    uStack_b0._0_4_ = 0x2e;
    FUN_1446e940c(&local_120,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    uStack_b0._0_4_ = 0x2b;
    FUN_1446e940c(&local_138,&local_b8);
    local_b8 = L"SetSplitNormalsAlongSelectedEdges: TargetMesh has no Normals attribute enabled";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x4e);
    FUN_140208c1e(&local_108,&local_138,&local_120,&local_b8);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  else {
    local_138 = (longlong *)0x0;
    uStack_130 = 0;
    FUN_143bab15a(param_1[1],param_2,&local_138,2);
    ppcVar4 = (code **)(uStack_130 & 0xffffffff);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    local_8c = 0x80;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_108 = local_138;
    uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_130);
    FUN_146bc855c();
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xb0))();
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(param_2 + 0x208);
        if (*(char *)param_1[2] == '\x01') {
          if (lVar6 < *(int *)(lVar1 + 0x38)) {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + lVar6 * 8);
          }
          else {
            uVar3 = 0;
          }
          ppcVar4 = (code **)0x0;
          FUN_146bd0278(&local_b8,uVar3);
        }
        else {
          if (lVar6 < *(int *)(lVar1 + 0x38)) {
            ppcVar4 = *(code ***)(*(longlong *)(lVar1 + 0x30) + lVar6 * 8);
          }
          else {
            ppcVar4 = (code **)0x0;
          }
          FUN_146bcf888(&local_b8,*ppcVar4);
        }
        lVar6 = lVar6 + 1;
        iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xb0))();
      } while (lVar6 < iVar2);
    }
    if (*(char *)param_1[3] != '\0') {
      if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
        local_160 = 0;
      }
      else {
        local_160 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      local_dc = 0x80;
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_148[0] = 0;
      local_148[1] = 0;
      local_158 = (longlong)(int)uStack_130;
      if (local_158 != 0) {
        local_150 = local_138;
        local_158 = local_158 << 2;
        lVar6 = 0;
        do {
          uVar3 = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(param_2 + 0x1c0) +
                     (ulonglong)(*(uint *)((longlong)local_150 + lVar6) >> 9) * 8) +
                   (ulonglong)((*(uint *)((longlong)local_150 + lVar6) & 0x1ff) << 4));
          local_10c = (undefined4)uVar3;
          local_10d = '\0';
          FUN_1447cbafe(&local_108,&local_120,&local_10c,&local_10d);
          if (local_10d == '\0') {
            local_128 = local_148;
            local_118 = &local_128;
            local_120 = FUN_143bd6a24;
            FUN_146c3584c(local_160,local_10c,&local_120,1);
          }
          local_10c = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_10d = '\0';
          ppcVar4 = (code **)&local_10c;
          FUN_1447cbafe(&local_108,&local_120,&local_10c,&local_10d);
          if (local_10d == '\0') {
            local_128 = local_148;
            local_118 = &local_128;
            local_120 = FUN_143bd6a24;
            ppcVar4 = &local_120;
            FUN_146c3584c(local_160,local_10c,&local_120,1);
          }
          lVar6 = lVar6 + 4;
        } while (local_158 != lVar6);
      }
      uVar5 = CONCAT71((int7)((ulonglong)ppcVar4 >> 8),*(undefined1 *)param_1[4]);
      FUN_146c392f8(param_2,local_148,uVar5,uVar5 & 0xffffffff);
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      uVar5 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        FUN_1447a08a2(&local_108,0);
      }
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        FUN_1446efbd8(local_f8,0);
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar5 = uStack_b0 >> 0x20;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      FUN_1447a08a2(&local_b8,0);
    }
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      FUN_1446efbd8(local_a8,0);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd6a24 FUN_143bd6a24 body=54 status=ok
// SIG undefined FUN_143bd6a24(void)

undefined8 FUN_143bd6a24(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 143bd6a5a FUN_143bd6a5a body=667 status=ok
// SIG undefined FUN_143bd6a5a(void)

void FUN_143bd6a5a(longlong *param_1,wchar_t *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [40];
  wchar_t *local_90;
  longlong *local_88;
  float *pfStack_80;
  longlong *local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  code *local_68;
  wchar_t **local_60;
  longlong local_58;
  wchar_t *local_50;
  longlong local_48 [2];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_2 + 0x104) == 0) {
    FUN_14582ed12(param_2);
  }
  local_34 = cosf(*(float *)(*param_1 + 4) * 0.017453292);
  local_48[0] = 0;
  local_48[1] = 0;
  local_50 = param_2;
  FUN_146c38358();
  local_58 = 0;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 8) == '\x01') {
    if (param_2 != (wchar_t *)0x0) {
      bVar1 = *(byte *)(lVar4 + 0xc);
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((ulonglong)bVar1 == 0) {
        if (((-1 < (int)uVar2) && (*(longlong **)(param_2 + 0x104) != (longlong *)0x0)) &&
           (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xc0))(), (int)uVar2 < iVar3))
        goto LAB_143bd6bba;
      }
      else if ((char)param_2[0xd4] != '\0') {
LAB_143bd6bba:
        lVar4 = FUN_14001cc68(0x18,0x10);
        FUN_148376c0e(lVar4,param_2,(ulonglong)uVar2 << 0x20 | (ulonglong)bVar1);
        local_58 = lVar4;
        goto LAB_143bd6be6;
      }
    }
    local_90 = L"ComputeSplitNormals_MissingGroups";
    local_88._0_4_ = 0x21;
    FUN_1446e940c(local_6c,&local_90);
    local_90 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    local_88._0_4_ = 0x2b;
    FUN_1446e940c(local_70,&local_90);
    local_90 = L"ComputeSplitNormals: Polygroup Layer does not exist";
    local_88 = (longlong *)CONCAT44(local_88._4_4_,0x33);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_90);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_68);
    if (local_68 != (code *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  else {
LAB_143bd6be6:
    local_88 = local_48;
    if (*(int *)(*(longlong *)(param_2 + 0x104) + 0x38) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(*(longlong *)(param_2 + 0x104) + 0x30);
    }
    local_90 = (wchar_t *)*param_1;
    local_60 = &local_90;
    pfStack_80 = &local_34;
    local_78 = &local_58;
    local_68 = FUN_143bd6cf6;
    FUN_146c2fed0(uVar5,&local_68,0);
    local_88 = (longlong *)0x0;
    pfStack_80 = (float *)0x0;
    if (*(int *)(*(longlong *)(param_2 + 0x104) + 0x38) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(*(longlong *)(param_2 + 0x104) + 0x30);
    }
    local_90 = param_2;
    FUN_146c383fc(&local_90,uVar5,((undefined1 *)param_1[2])[1],*(undefined1 *)param_1[2]);
    if (*(int *)(*(longlong *)(param_2 + 0x104) + 0x38) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(*(longlong *)(param_2 + 0x104) + 0x30);
    }
    FUN_146c378c6(&local_90,uVar5,0);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd6cf6 FUN_143bd6cf6 body=233 status=ok
// SIG undefined FUN_143bd6cf6(void)

undefined8 FUN_143bd6cf6(undefined8 *param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = *param_4;
  lVar8 = (longlong)(int)uVar1;
  uVar2 = *param_3;
  lVar7 = (longlong)(int)uVar2;
  if (*(char *)*param_1 == '\x01') {
    lVar3 = *(longlong *)param_1[1];
    if ((double)*(float *)param_1[2] <=
        *(double *)(lVar3 + 0x10 + lVar7 * 0x18) * *(double *)(lVar3 + 0x10 + lVar8 * 0x18) +
        *(double *)(lVar3 + lVar7 * 0x18) * *(double *)(lVar3 + lVar8 * 0x18) +
        *(double *)(lVar3 + 8 + lVar7 * 0x18) * *(double *)(lVar3 + 8 + lVar8 * 0x18))
    goto LAB_143bd6d5f;
LAB_143bd6da9:
    uVar6 = 0;
  }
  else {
LAB_143bd6d5f:
    if (((char *)*param_1)[8] == '\x01') {
      lVar7 = (*(undefined8 **)param_1[3])[1];
      if (lVar7 == 0) {
        iVar4 = FUN_146bc96d4(**(undefined8 **)param_1[3]);
        lVar7 = (*(undefined8 **)param_1[3])[1];
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20);
          goto LAB_143bd6d8d;
        }
        iVar5 = FUN_146bc96d4(**(undefined8 **)param_1[3],uVar1);
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x20);
        iVar4 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)(uVar2 & 0x1ff) * 4);
LAB_143bd6d8d:
        iVar5 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
      }
      if (iVar4 != iVar5) goto LAB_143bd6da9;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143bd6de0 FUN_143bd6de0 body=60 status=ok
// SIG undefined FUN_143bd6de0(void)

void FUN_143bd6de0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x208);
  if ((((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x38), 0 < (int)uVar1)) && (uVar1 != 1)) &&
     (((plVar3 = *(longlong **)(lVar2 + 0x30), *plVar3 != 0 && (2 < uVar1)) &&
      ((plVar3[1] != 0 && (plVar3[2] != 0)))))) {
    *(undefined1 *)*param_1 = 1;
  }
  return;
}



// FUNCTION 143bd6e64 FUN_143bd6e64 body=458 status=ok
// SIG undefined FUN_143bd6e64(void)

void FUN_143bd6e64(longlong *param_1,wchar_t *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_2 + 0x104) != (longlong *)0x0) {
    iVar4 = *(int *)(*param_1 + 4);
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xa0))();
    if (iVar4 < iVar3) {
      iVar4 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xb0))();
      if (iVar4 != 0) {
        plVar5 = *(longlong **)(param_2 + 0x104);
        uVar1 = *(uint *)(plVar5 + 7);
        if ((((((int)uVar1 < 1) || (uVar1 == 1)) || (plVar2 = (longlong *)plVar5[6], *plVar2 == 0))
            || ((uVar1 < 3 || (plVar2[1] == 0)))) || (plVar2[2] == 0)) {
          (**(code **)(*plVar5 + 0xb8))(plVar5,3);
          plVar5 = *(longlong **)(param_2 + 0x104);
        }
        uStack_37 = 1;
        local_38 = *(char *)*param_1 == '\0';
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        uStack_68 = 0;
        iVar4 = *(int *)((char *)*param_1 + 4);
        uVar7 = 0;
        if ((-1 < (longlong)iVar4) && (iVar4 < (int)plVar5[5])) {
          uVar7 = *(undefined8 *)(plVar5[4] + (longlong)iVar4 * 8);
        }
        if ((int)plVar5[7] < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)plVar5[6];
        }
        local_78 = param_2;
        FUN_146c3b74a(&local_78,uVar6,uVar7,&local_38);
        FUN_146c3c1f6(&local_78,param_2);
        FUN_146c3c4a6(&local_78);
        goto LAB_143bd6f4e;
      }
    }
  }
  local_78 = L"ComputeTangents_NoUVLayers";
  local_70._0_4_ = 0x1a;
  FUN_1446e940c(local_3c,&local_78);
  local_78 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
  local_70._0_4_ = 0x2b;
  FUN_1446e940c(local_40,&local_78);
  local_78 = 
  L"ComputeTangents: TargetMesh is missing UV Set or Normals required to compute Tangents";
  local_70 = CONCAT44(local_70._4_4_,0x55);
  FUN_140208c1e(&local_38,local_40,local_3c,&local_78);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_38);
  plVar5 = (longlong *)CONCAT62(uStack_36,CONCAT11(uStack_37,local_38));
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
LAB_143bd6f4e:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd7030 FUN_143bd7030 body=387 status=ok
// SIG undefined FUN_143bd7030(void)

void FUN_143bd7030(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)*param_1;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (((lVar2 = *(longlong *)(param_2 + 0x208), lVar2 != 0 && (0 < *(int *)(lVar2 + 0x38))) &&
      (**(longlong **)(lVar2 + 0x30) != 0)))) {
    *(undefined1 *)param_1[1] = 1;
    if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    pdVar3 = (double *)param_1[2];
    local_34 = (float)pdVar3[2];
    local_38 = (float)pdVar3[1];
    local_3c = (float)*pdVar3;
    fVar4 = (float)FUN_146c2f9e2(uVar6,&local_3c);
    lVar2 = param_1[2];
    local_34 = (float)*(double *)(lVar2 + 0x28);
    local_38 = (float)*(double *)(lVar2 + 0x20);
    local_3c = (float)*(double *)(lVar2 + 0x18);
    uVar5 = FUN_146c2f9e2(uVar6,&local_3c);
    lVar2 = param_1[2];
    local_34 = (float)*(double *)(lVar2 + 0x40);
    local_38 = (float)*(double *)(lVar2 + 0x38);
    local_3c = (float)*(double *)(lVar2 + 0x30);
    local_34 = (float)FUN_146c2f9e2(uVar6,&local_3c);
    local_3c = fVar4;
    local_38 = (float)uVar5;
    FUN_146c01580(uVar6,*(undefined4 *)*param_1,&local_3c,1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd71b4 FUN_143bd71b4 body=932 status=ok
// SIG undefined FUN_143bd71b4(void)

void FUN_143bd71b4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  float local_68;
  float fStack_64;
  float local_60;
  wchar_t *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)*param_1;
  if ((int)plVar1[1] < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
    local_58 = L"SetMeshPerVertexNormals_IncorrectCount";
    uStack_50._0_4_ = 0x26;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    uStack_50._0_4_ = 0x2b;
    FUN_1446e940c(local_70,&local_58);
    local_58 = 
    L"SetMeshPerVertexNormals: size of provided VertexNormalList is smaller than MaxVertexID of Mesh"
    ;
    uStack_50 = CONCAT44(uStack_50._4_4_,0x5e);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_58);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_68);
    if ((longlong *)CONCAT44(fStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(fStack_64,local_68) + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x208);
    if (lVar3 == 0) {
      FUN_14582ed12(param_2);
      lVar3 = *(longlong *)(param_2 + 0x208);
    }
    if (*(int *)(lVar3 + 0x38) < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar3 + 0x30);
    }
    FUN_146c19dca(uVar9);
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    uVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
    }
    else {
      uStack_50 = (ulonglong)uVar12;
      FUN_1446f48e2(&local_58);
      memset(local_58,0,(ulonglong)uVar12 << 2);
      uVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
      if (uVar12 != 0) {
        uVar8 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U)) {
          uVar7 = 1;
          uVar4 = 1;
          if (1 < (int)uVar12) {
            uVar7 = uVar12;
          }
          do {
            uVar8 = uVar7;
            if (uVar7 == uVar4) break;
            uVar6 = uVar4 >> 9;
            uVar10 = uVar4 & 0x1ff;
            uVar8 = uVar4;
            uVar4 = uVar4 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar6] +
                                               (ulonglong)uVar10 * 2) - 1U));
        }
        if (uVar8 != uVar12) {
          do {
            lVar3 = *plVar1;
            lVar11 = (longlong)(int)uVar8;
            local_60 = (float)*(double *)(lVar3 + 0x10 + lVar11 * 0x18);
            fStack_64 = (float)*(double *)(lVar3 + 8 + lVar11 * 0x18);
            local_68 = (float)*(double *)(lVar3 + lVar11 * 0x18);
            uVar2 = FUN_146c2f9e2(uVar9,&local_68);
            *(undefined4 *)(local_58 + lVar11 * 2) = uVar2;
            uVar7 = uVar8 + 1;
            if ((int)(uVar8 + 1) < (int)uVar12) {
              uVar7 = uVar12;
            }
            do {
              uVar4 = uVar7;
              if (uVar7 - 1 == uVar8) break;
              uVar8 = uVar8 + 1;
              uVar4 = uVar8;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_2 + 0x28) +
                                                   (ulonglong)(uVar8 >> 9) * 8) +
                                                 (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
            uVar8 = uVar4;
          } while (uVar8 != uVar12);
        }
      }
    }
    uVar8 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar12 = 0;
    if ((uVar8 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar7 = 1;
      uVar4 = 1;
      if (1 < (int)uVar8) {
        uVar7 = uVar8;
      }
      do {
        uVar12 = uVar7;
        if (uVar7 == uVar4) break;
        uVar6 = uVar4 >> 9;
        uVar10 = uVar4 & 0x1ff;
        uVar12 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6] +
                                           (ulonglong)uVar10 * 2) - 1U));
    }
    if (uVar12 != uVar8) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar12 >> 9) * 8);
        uVar5 = (ulonglong)(uVar12 & 0x1ff);
        local_60 = *(float *)(local_58 + (longlong)*(int *)(lVar3 + 8 + uVar5 * 0xc) * 2);
        fStack_64 = *(float *)(local_58 + (longlong)*(int *)(lVar3 + 4 + uVar5 * 0xc) * 2);
        local_68 = *(float *)(local_58 + (longlong)*(int *)(lVar3 + uVar5 * 0xc) * 2);
        FUN_146c01580(uVar9,uVar12,&local_68,1);
        uVar7 = uVar12 + 1;
        if ((int)(uVar12 + 1) < (int)uVar8) {
          uVar7 = uVar8;
        }
        do {
          uVar4 = uVar7;
          if (uVar7 - 1 == uVar12) break;
          uVar12 = uVar12 + 1;
          uVar4 = uVar12;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar12 >> 9) * 8) +
                                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
        uVar12 = uVar4;
      } while (uVar12 != uVar8);
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd755a FUN_143bd755a body=1129 status=ok
// SIG undefined FUN_143bd755a(void)

void FUN_143bd755a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  float local_68;
  float fStack_64;
  float local_60;
  wchar_t *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)*param_1;
  if ((int)plVar2[1] < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
    local_58 = L"SetMeshPerVertexTangents_IncorrectCount";
    uStack_50._0_4_ = 0x27;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshNormalsFunctions";
    uStack_50._0_4_ = 0x2b;
    FUN_1446e940c(local_70,&local_58);
    local_58 = 
    L"SetMeshPerVertexTangents: size of provided TangentXList is smaller than MaxVertexID of Mesh";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x5b);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_58);
    FUN_143ba90d7(*(undefined8 *)param_1[2],2,&local_68);
    if ((longlong *)CONCAT44(fStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(fStack_64,local_68) + 0x10))();
    }
    goto LAB_143bd7629;
  }
  local_78 = *(longlong **)param_1[1];
  plVar7 = *(longlong **)(param_2 + 0x208);
  if (plVar7 == (longlong *)0x0) {
    FUN_14582ed12(param_2);
    plVar7 = *(longlong **)(param_2 + 0x208);
  }
  uVar12 = *(uint *)(plVar7 + 7);
  if (((((int)uVar12 < 1) || (uVar12 == 1)) || (plVar3 = (longlong *)plVar7[6], *plVar3 == 0)) ||
     ((lVar15 = plVar3[1], uVar12 < 3 || lVar15 == 0 || (lVar17 = plVar3[2], lVar17 == 0)))) {
    (**(code **)(*plVar7 + 0xb8))();
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x38);
    if (iVar1 < 2) {
      lVar15 = 0;
    }
    else {
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x30);
      lVar15 = *(longlong *)(lVar17 + 8);
      if (iVar1 != 2) {
        lVar17 = *(longlong *)(lVar17 + 0x10);
        goto LAB_143bd76e3;
      }
    }
    lVar17 = 0;
  }
LAB_143bd76e3:
  FUN_146c19dca(lVar15);
  FUN_146c19dca(lVar17);
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  uVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if ((int)uVar12 < 1) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
  }
  else {
    uStack_50 = (ulonglong)uVar12;
    FUN_1446f48e2(&local_58);
    memset(local_58,0,(ulonglong)uVar12 << 2);
  }
  local_88 = lVar17;
  local_80 = lVar15;
  bVar5 = true;
  do {
    bVar4 = bVar5;
    lVar15 = local_88;
    plVar7 = local_78;
    if (bVar4) {
      lVar15 = local_80;
      plVar7 = plVar2;
    }
    uVar14 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar12 = 0;
    if ((uVar14 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar11 = 1;
      if (1 < (int)uVar14) {
        uVar10 = uVar14;
      }
      do {
        uVar12 = uVar10;
        if (uVar10 == uVar11) break;
        uVar9 = uVar11 >> 9;
        uVar13 = uVar11 & 0x1ff;
        uVar12 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar9] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_143bd7832:
    if (uVar12 != uVar14) {
      lVar17 = *plVar7;
      lVar16 = (longlong)(int)uVar12;
      local_60 = (float)*(double *)(lVar17 + 0x10 + lVar16 * 0x18);
      fStack_64 = (float)*(double *)(lVar17 + 8 + lVar16 * 0x18);
      local_68 = (float)*(double *)(lVar17 + lVar16 * 0x18);
      uVar6 = FUN_146c2f9e2(lVar15,&local_68);
      *(undefined4 *)(local_58 + lVar16 * 2) = uVar6;
      uVar10 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar14) {
        uVar10 = uVar14;
      }
      uVar11 = uVar12;
      do {
        uVar12 = uVar10;
        if (uVar10 - 1 == uVar11) break;
        uVar12 = uVar11 + 1;
        uVar11 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      goto LAB_143bd7832;
    }
    uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar12 = 0;
    if ((uVar14 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar11 = 1;
      if (1 < (int)uVar14) {
        uVar10 = uVar14;
      }
      do {
        uVar12 = uVar10;
        if (uVar10 == uVar11) break;
        uVar9 = uVar11 >> 9;
        uVar13 = uVar11 & 0x1ff;
        uVar12 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_143bd795a:
    if (uVar12 != uVar14) {
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar12 >> 9) * 8);
      uVar8 = (ulonglong)(uVar12 & 0x1ff);
      local_60 = *(float *)(local_58 + (longlong)*(int *)(lVar17 + 8 + uVar8 * 0xc) * 2);
      fStack_64 = *(float *)(local_58 + (longlong)*(int *)(lVar17 + 4 + uVar8 * 0xc) * 2);
      local_68 = *(float *)(local_58 + (longlong)*(int *)(lVar17 + uVar8 * 0xc) * 2);
      FUN_146c01580(lVar15,uVar12,&local_68,1);
      uVar10 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar14) {
        uVar10 = uVar14;
      }
      uVar11 = uVar12;
      do {
        uVar12 = uVar10;
        if (uVar10 - 1 == uVar11) break;
        uVar12 = uVar11 + 1;
        uVar11 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      goto LAB_143bd795a;
    }
    bVar5 = false;
  } while (bVar4);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143bd7629:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd79c6 FUN_143bd79c6 body=467 status=ok
// SIG undefined FUN_143bd79c6(void)

void FUN_143bd79c6(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 0x208);
  if ((lVar3 == 0) || (uVar1 = *(uint *)(lVar3 + 0x38), (int)uVar1 < 1)) goto LAB_143bd7b74;
  plVar4 = *(longlong **)(lVar3 + 0x30);
  if ((((*plVar4 == 0) || (*(int *)(*plVar4 + 0x38) == 0)) ||
      ((*(char *)*param_1 == '\x01' &&
       ((((uVar1 == 1 || (uVar1 < 3)) || (plVar4[1] == 0)) || (plVar4[2] == 0)))))) ||
     (((uVar1 = *(uint *)param_1[1], (int)uVar1 < 0 ||
       (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar1)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                                   (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))))) goto LAB_143bd7b74;
  *(undefined1 *)param_1[2] = 1;
  if (*(char *)param_1[3] == '\x01') {
    if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    puVar5 = (undefined4 *)param_1[5];
    local_38 = *(undefined8 *)(puVar5 + 4);
    local_48 = *puVar5;
    uStack_44 = puVar5[1];
    uStack_40 = puVar5[2];
    uStack_3c = puVar5[3];
    cVar6 = FUN_143bd7b9a(param_1[4],param_2,uVar9);
    if (cVar6 == '\0') {
      *(undefined1 *)param_1[2] = 0;
    }
  }
  if (*(char *)*param_1 != '\x01') goto LAB_143bd7b74;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x38);
  if (iVar2 < 2) {
    uVar9 = 0;
LAB_143bd7b15:
    uVar8 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x30);
    uVar9 = *(undefined8 *)(lVar3 + 8);
    if (iVar2 == 2) goto LAB_143bd7b15;
    uVar8 = *(undefined8 *)(lVar3 + 0x10);
  }
  puVar5 = (undefined4 *)param_1[6];
  local_58 = *(undefined8 *)(puVar5 + 4);
  local_68 = *puVar5;
  uStack_64 = puVar5[1];
  uStack_60 = puVar5[2];
  uStack_5c = puVar5[3];
  cVar6 = FUN_143bd7b9a(param_1[4],param_2,uVar9);
  puVar5 = (undefined4 *)param_1[7];
  local_78 = *(undefined8 *)(puVar5 + 4);
  local_88 = *puVar5;
  uStack_84 = puVar5[1];
  uStack_80 = puVar5[2];
  uStack_7c = puVar5[3];
  cVar7 = FUN_143bd7b9a(param_1[4],param_2,uVar8);
  if ((cVar6 == '\0') || (cVar7 == '\0')) {
    *(undefined1 *)param_1[2] = 0;
  }
LAB_143bd7b74:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd7b9a FUN_143bd7b9a body=664 status=ok
// SIG undefined FUN_143bd7b9a(void)

bool FUN_143bd7b9a(undefined4 *param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar8 + 8) = 0;
  local_48 = param_3;
  if (*(int *)(lVar8 + 0xc) < 0) {
    FUN_146be7820(lVar8,0);
  }
  lVar8 = *(longlong *)(param_1 + 4);
  *(undefined4 *)(lVar8 + 8) = 0;
  if (*(int *)(lVar8 + 0xc) < 0) {
    FUN_14481578e(lVar8,0);
  }
  local_80 = &local_48;
  local_50 = &local_80;
  local_68 = *(undefined8 *)(param_1 + 2);
  local_60 = *(undefined8 *)(param_1 + 4);
  local_58 = FUN_143bd7e34;
  local_78 = param_2;
  local_70 = param_1;
  FUN_146c03fd0(param_2,*param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 8);
  if (iVar1 == 0) goto LAB_143bd7dfc;
  puVar4 = *(undefined8 **)(param_1 + 4);
  iVar2 = *(int *)(puVar4 + 1);
  if ((longlong)iVar2 == 1) {
    piVar6 = (int *)*puVar4;
    piVar7 = piVar6 + 1;
  }
  else {
    if (*(char *)(param_1 + 6) != '\0') {
      local_80 = (longlong *)CONCAT44((float)param_4[1],(float)*param_4);
      local_78 = CONCAT44(local_78._4_4_,(float)param_4[2]);
      iVar2 = *(int *)*puVar4;
      lVar8 = 0;
      do {
        uVar9 = iVar2 * 3 + (int)lVar8;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(local_48 + 0x48) + (ulonglong)(uVar9 >> 9) * 8) +
         (ulonglong)(uVar9 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_80 + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      lVar8 = (longlong)*(int *)(*(undefined8 **)(param_1 + 2) + 1);
      if (lVar8 != 0) {
        piVar6 = (int *)**(undefined8 **)(param_1 + 2);
        piVar7 = piVar6 + lVar8 * 3;
        do {
          lVar5 = local_48;
          iVar2 = *piVar6;
          uVar9 = iVar2 * 3 + 2;
          lVar8 = *(longlong *)(local_48 + 0x78);
          uVar3 = *(undefined4 *)
                   (*(longlong *)(lVar8 + (ulonglong)(uVar9 >> 9) * 8) +
                   (ulonglong)(uVar9 & 0x1ff) * 4);
          uVar9 = iVar2 * 3 + 1;
          local_80 = (longlong *)
                     CONCAT44(*(undefined4 *)
                               (*(longlong *)(lVar8 + (ulonglong)(uVar9 >> 9) * 8) +
                               (ulonglong)(uVar9 & 0x1ff) * 4),
                              *(undefined4 *)
                               (*(longlong *)(lVar8 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
                               (ulonglong)(iVar2 * 3 & 0x1ff) * 4));
          local_78 = CONCAT44(local_78._4_4_,uVar3);
          *(undefined4 *)((longlong)&local_80 + (longlong)piVar6[1] * 4) =
               *(undefined4 *)**(undefined8 **)(param_1 + 4);
          FUN_146c01580(lVar5,iVar2,&local_80,CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1));
          piVar6 = piVar6 + 3;
        } while (piVar6 != piVar7);
      }
      goto LAB_143bd7dfc;
    }
    if (iVar2 == 0) goto LAB_143bd7dfc;
    piVar6 = (int *)*puVar4;
    piVar7 = piVar6 + iVar2;
  }
  do {
    iVar2 = *piVar6;
    local_80 = (longlong *)CONCAT44((float)param_4[1],(float)*param_4);
    local_78 = CONCAT44(local_78._4_4_,(float)param_4[2]);
    lVar8 = 0;
    do {
      uVar9 = iVar2 * 3 + (int)lVar8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(local_48 + 0x48) + (ulonglong)(uVar9 >> 9) * 8) +
       (ulonglong)(uVar9 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_80 + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    piVar6 = piVar6 + 1;
  } while (piVar6 != piVar7);
LAB_143bd7dfc:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 != 0;
}



// FUNCTION 143bd7e34 FUN_143bd7e34 body=337 status=ok
// SIG undefined FUN_143bd7e34(void)

void FUN_143bd7e34(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  int aiStack_50 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_2;
  uVar6 = uVar1 * 3;
  lVar9 = *(longlong *)(*(longlong *)*param_1 + 0x78);
  iVar2 = *(int *)(*(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8) +
                  (ulonglong)(uVar6 & 0x1ff) * 4);
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
    uVar8 = (ulonglong)(uVar1 & 0x1ff);
    iVar3 = *(int *)param_1[2];
    iVar7 = 0;
    if ((*(int *)(lVar4 + uVar8 * 0xc) != iVar3) &&
       (iVar7 = 1, *(int *)(lVar4 + uVar8 * 0xc + 4) != iVar3)) {
      iVar7 = (uint)(*(int *)(lVar4 + 8 + uVar8 * 0xc) == iVar3) * 3 + -1;
    }
    aiStack_50[1] = iVar2;
    aiStack_50[2] =
         *(undefined4 *)
          (*(longlong *)(lVar9 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
          (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
    aiStack_50[3] =
         *(undefined4 *)
          (*(longlong *)(lVar9 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
          (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
    plVar5 = (longlong *)param_1[3];
    iVar2 = aiStack_50[(longlong)iVar7 + 1];
    iVar3 = (int)plVar5[1];
    lVar9 = (longlong)iVar3;
    *(uint *)(plVar5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
      FUN_146bd78c8(plVar5,iVar3);
    }
    lVar4 = *plVar5;
    *(uint *)(lVar4 + lVar9 * 0xc) = uVar1;
    *(int *)(lVar4 + 4 + lVar9 * 0xc) = iVar7;
    *(int *)(lVar4 + 8 + lVar9 * 0xc) = iVar2;
    FUN_1449e3bb0(param_1[4],aiStack_50 + (longlong)iVar7 + 1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd7f9a FUN_143bd7f9a body=92 status=ok
// SIG undefined FUN_143bd7f9a(void)

void FUN_143bd7f9a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x208);
  if (plVar2 == (longlong *)0x0) {
    FUN_14582ed12(param_2);
    plVar2 = *(longlong **)(param_2 + 0x208);
  }
  iVar1 = (**(code **)(*plVar2 + 0xc0))();
  if (iVar1 == *(int *)*param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143bd7fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x208) + 200))();
  return;
}



// FUNCTION 143bd7ff6 FUN_143bd7ff6 body=559 status=ok
// SIG undefined FUN_143bd7ff6(void)

void FUN_143bd7ff6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar9 = (ulonglong)*(byte *)*param_1;
    uVar8 = *(uint *)((byte *)*param_1 + 4);
    if (uVar9 == 0) {
      if (((-1 < (int)uVar8) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) &&
         (iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), (int)uVar8 < iVar1))
      goto LAB_143bd8116;
    }
    else if (*(char *)(param_2 + 0x1a8) != '\0') {
LAB_143bd8116:
      lVar2 = FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(lVar2,param_2,(ulonglong)uVar8 << 0x20 | uVar9);
      uVar4 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar8 = 0;
      if ((uVar4 != 0) &&
         (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar6 = 1;
        uVar7 = 1;
        if (1 < (int)uVar4) {
          uVar6 = uVar4;
        }
        do {
          uVar8 = uVar6;
          if (uVar6 == uVar7) break;
          uVar3 = uVar7 >> 9;
          uVar5 = uVar7 & 0x1ff;
          uVar8 = uVar7;
          uVar7 = uVar7 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                             (ulonglong)uVar5 * 2) - 1U));
      }
LAB_143bd820b:
      if (uVar8 != uVar4) {
        FUN_14837b7e4(lVar2,uVar8,*(undefined4 *)param_1[2],param_2);
        uVar6 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar4) {
          uVar6 = uVar4;
        }
        uVar7 = uVar8;
        do {
          uVar8 = uVar6;
          if (uVar6 - 1 == uVar7) break;
          uVar8 = uVar7 + 1;
          uVar7 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        goto LAB_143bd820b;
      }
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
      goto LAB_143bd80f2;
    }
  }
  local_48 = L"ClearPolygroups_MissingGroups";
  local_40 = 0x1d;
  FUN_1446e940c(local_5c,&local_48);
  local_48 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
  local_40 = 0x2d;
  FUN_1446e940c(local_60,&local_48);
  local_48 = L"ClearPolygroups: Target Polygroup Layer does not exist";
  local_40 = 0x36;
  FUN_140208c1e(local_58,local_60,local_5c,&local_48);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
LAB_143bd80f2:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd823a FUN_143bd823a body=974 status=ok
// SIG undefined FUN_143bd823a(void)

void FUN_143bd823a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)*(byte *)*param_1;
  uVar11 = *(uint *)((byte *)*param_1 + 4);
  uVar12 = (ulonglong)*(byte *)param_1[1];
  uVar6 = *(uint *)((byte *)param_1[1] + 4);
  if (uVar8 == 0) {
    if ((uVar12 == 0) && (uVar11 == uVar6)) goto LAB_143bd832b;
    if ((param_2 == 0) ||
       ((((int)uVar11 < 0 || (*(longlong **)(param_2 + 0x208) == (longlong *)0x0)) ||
        (iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), iVar1 <= (int)uVar11))))
    goto LAB_143bd849c;
    if (uVar12 == 0) goto LAB_143bd829b;
    if (*(char *)(param_2 + 0x1a8) != '\0') goto LAB_143bd83d6;
LAB_143bd82be:
    local_50 = L"CopyPolygroupsLayer_MissingToGroups";
    local_48 = 0x23;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = 0x2d;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"CopyPolygroupsLayer: To Polygroup Layer does not exist";
    local_48 = 0x36;
  }
  else if (uVar12 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x1a8) != '\0')) {
LAB_143bd829b:
      if (((-1 < (int)uVar6) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) &&
         (iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), (int)uVar6 < iVar1)) {
LAB_143bd83d6:
        puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        FUN_148376c0e(puVar3,param_2,(ulonglong)uVar11 << 0x20 | uVar8);
        lVar4 = FUN_14001cc68(0x18,0x10);
        FUN_148376c0e(lVar4,param_2,(ulonglong)uVar6 << 0x20 | uVar12);
        uVar6 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
        uVar11 = 0;
        if ((uVar6 != 0) &&
           (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
          uVar9 = 1;
          uVar10 = 1;
          if (1 < (int)uVar6) {
            uVar9 = uVar6;
          }
          do {
            uVar11 = uVar9;
            if (uVar9 == uVar10) break;
            uVar5 = uVar10 >> 9;
            uVar7 = uVar10 & 0x1ff;
            uVar11 = uVar10;
            uVar10 = uVar10 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar5] +
                                               (ulonglong)uVar7 * 2) - 1U));
        }
LAB_143bd85dd:
        if (uVar11 != uVar6) {
          if (puVar3[1] == 0) {
            uVar2 = FUN_146bc96d4(*puVar3,uVar11);
          }
          else {
            uVar2 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(puVar3[1] + 0x20) + (ulonglong)(uVar11 >> 9) * 8)
                     + (ulonglong)(uVar11 & 0x1ff) * 4);
          }
          FUN_14837b7e4(lVar4,uVar11,uVar2,param_2);
          uVar9 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar6) {
            uVar9 = uVar6;
          }
          uVar10 = uVar11;
          do {
            uVar11 = uVar9;
            if (uVar9 - 1 == uVar10) break;
            uVar11 = uVar10 + 1;
            uVar10 = uVar11;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x148) +
                                                 (ulonglong)(uVar11 >> 9) * 8) +
                                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
          goto LAB_143bd85dd;
        }
        if (lVar4 != 0) {
          FUN_1400020a8(lVar4);
        }
        if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
        goto LAB_143bd8531;
      }
      goto LAB_143bd82be;
    }
LAB_143bd849c:
    local_50 = L"CopyPolygroupsLayer_MissingFromGroups";
    local_48 = 0x25;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = 0x2d;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"CopyPolygroupsLayer: From Polygroup Layer does not exist";
    local_48 = 0x38;
  }
  else {
LAB_143bd832b:
    local_50 = L"CopyPolygroupsLayer_SameGroups";
    local_48 = 0x1e;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_48 = 0x2d;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"CopyPolygroupsLayer: tried to copy Polygroup Layer to itself";
    local_48 = 0x3c;
  }
  FUN_140208c1e(local_60,local_68,local_64,&local_50);
  FUN_143ba90d7(*(undefined8 *)param_1[2],2,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
LAB_143bd8531:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd8620 FUN_143bd8620 body=564 status=ok
// SIG undefined FUN_143bd8620(void)

void FUN_143bd8620(undefined8 *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  wchar_t *local_80;
  uint local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_2 + 0x104) == (longlong *)0x0) ||
     (iVar3 = *(int *)*param_1, iVar2 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xa0))(),
     iVar2 <= iVar3)) {
    local_80 = L"ConvertUVIslandsToPolygroups_InvalidUVLayers";
    local_78 = 0x2c;
    FUN_1446e940c(local_44,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_78 = 0x2d;
    FUN_1446e940c(local_48,&local_80);
    local_80 = L"ConvertUVIslandsToPolygroups: Requested UV layer does not exist";
    local_78 = 0x3f;
  }
  else {
    if (param_2 != (wchar_t *)0x0) {
      uVar5 = (ulonglong)*(byte *)param_1[2];
      uVar1 = *(uint *)((byte *)param_1[2] + 4);
      if (uVar5 == 0) {
        if (((-1 < (int)uVar1) && (*(longlong **)(param_2 + 0x104) != (longlong *)0x0)) &&
           (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xc0))(), (int)uVar1 < iVar3))
        goto LAB_143bd87ce;
      }
      else if ((char)param_2[0xd4] != '\0') {
LAB_143bd87ce:
        lVar4 = FUN_14001cc68(0x18,0x10);
        FUN_148376c0e(lVar4,param_2,(ulonglong)uVar1 << 0x20 | uVar5);
        local_74 = 0;
        local_6c = 0;
        uStack_64 = 0;
        local_5c = 0;
        uStack_54 = 0;
        local_4c = 0;
        local_78 = local_78 & 0xffffff00;
        local_70 = 0;
        local_80 = param_2;
        FUN_148376e1a(&local_80,*(undefined4 *)*param_1);
        FUN_14837b76a(&local_80,lVar4,param_2);
        FUN_148345e5a(&local_80);
        if (lVar4 != 0) {
          FUN_1400020a8(lVar4);
        }
        goto LAB_143bd87a8;
      }
    }
    local_80 = L"ConvertUVIslandsToPolygroups_MissingGroups";
    local_78 = 0x2a;
    FUN_1446e940c(local_44,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
    local_78 = 0x2d;
    FUN_1446e940c(local_48,&local_80);
    local_80 = L"ConvertUVIslandsToPolygroups: Target Polygroup Layer does not exist";
    local_78 = 0x43;
  }
  FUN_140208c1e(local_40,local_48,local_44,&local_80);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
LAB_143bd87a8:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd8856 FUN_143bd8856 body=402 status=ok
// SIG undefined FUN_143bd8856(void)

void FUN_143bd8856(undefined8 *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (wchar_t *)0x0) {
    uVar4 = (ulonglong)*(byte *)*param_1;
    uVar1 = *(uint *)((byte *)*param_1 + 4);
    if (uVar4 == 0) {
      if (((-1 < (int)uVar1) && (*(longlong **)(param_2 + 0x104) != (longlong *)0x0)) &&
         (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xc0))(), (int)uVar1 < iVar2))
      goto LAB_143bd896d;
    }
    else if ((char)param_2[0xd4] != '\0') {
LAB_143bd896d:
      lVar3 = FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(lVar3,param_2,(ulonglong)uVar1 << 0x20 | uVar4);
      local_6c = 0;
      local_64 = 0;
      uStack_5c = 0;
      local_54 = 0;
      uStack_4c = 0;
      local_44 = 0;
      local_70 = local_70 & 0xffffff00;
      local_68 = 0;
      local_78 = param_2;
      FUN_1483771b2(&local_78);
      FUN_14837b76a(&local_78,lVar3,param_2);
      FUN_148345e5a(&local_78);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      goto LAB_143bd894c;
    }
  }
  local_78 = L"ConvertUVIslandsToPolygroups_MissingGroups";
  local_70 = 0x2a;
  FUN_1446e940c(local_3c,&local_78);
  local_78 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
  local_70 = 0x2d;
  FUN_1446e940c(local_40,&local_78);
  local_78 = L"ConvertUVIslandsToPolygroups: Target Polygroup Layer does not exist";
  local_70 = 0x43;
  FUN_140208c1e(local_38,local_40,local_3c,&local_78);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
LAB_143bd894c:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd89ea FUN_143bd89ea body=490 status=ok
// SIG undefined FUN_143bd89ea(void)

void FUN_143bd89ea(undefined8 *param_1,wchar_t *param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  wchar_t *local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (wchar_t *)0x0) {
    uVar5 = (ulonglong)*(byte *)*param_1;
    uVar1 = *(uint *)((byte *)*param_1 + 4);
    if (uVar5 == 0) {
      if (((-1 < (int)uVar1) && (*(longlong **)(param_2 + 0x104) != (longlong *)0x0)) &&
         (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xc0))(), (int)uVar1 < iVar3))
      goto LAB_143bd8b16;
    }
    else if ((char)param_2[0xd4] != '\0') {
LAB_143bd8b16:
      lVar4 = FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(lVar4,param_2,(ulonglong)uVar1 << 0x20 | uVar5);
      local_64 = 0;
      uStack_5c = 0;
      local_74 = 0;
      uStack_6c = 0;
      local_54 = 0;
      local_7c = *(int *)param_1[2];
      local_80 = CONCAT31(local_80._1_3_,1 < local_7c);
      local_78 = 0;
      local_88 = param_2;
      dVar2 = cos((double)*(float *)param_1[3] * 0.017453292519943295);
      local_98 = 0;
      FUN_1483796d4(&local_88,1.0 - dVar2,0,0);
      FUN_14837b76a(&local_88,lVar4,param_2);
      FUN_148345e5a(&local_88);
      if (lVar4 != 0) {
        FUN_1400020a8(lVar4);
      }
      goto LAB_143bd8aec;
    }
  }
  local_88 = L"ComputePolygroupsFromAngleThreshold_MissingGroups";
  local_80 = 0x31;
  FUN_1446e940c(local_4c,&local_88);
  local_88 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
  local_80 = 0x2d;
  FUN_1446e940c(local_50,&local_88);
  local_88 = L"ComputePolygroupsFromAngleThreshold: Target Polygroup Layer does not exist";
  local_80 = 0x4a;
  FUN_140208c1e(local_48,local_50,local_4c,&local_88);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_143bd8aec:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd8bd6 FUN_143bd8bd6 body=472 status=ok
// SIG undefined FUN_143bd8bd6(void)

void FUN_143bd8bd6(undefined8 *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  wchar_t *local_80;
  uint local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (wchar_t *)0x0) {
    uVar4 = (ulonglong)*(byte *)*param_1;
    uVar1 = *(uint *)((byte *)*param_1 + 4);
    if (uVar4 == 0) {
      if (((-1 < (int)uVar1) && (*(longlong **)(param_2 + 0x104) != (longlong *)0x0)) &&
         (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x104) + 0xc0))(), (int)uVar1 < iVar2))
      goto LAB_143bd8d00;
    }
    else if ((char)param_2[0xd4] != '\0') {
LAB_143bd8d00:
      lVar3 = FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(lVar3,param_2,(ulonglong)uVar1 << 0x20 | uVar4);
      local_74 = 0;
      local_6c = 0;
      uStack_64 = 0;
      local_5c = 0;
      uStack_54 = 0;
      local_4c = 0;
      local_78 = local_78 & 0xffffff00;
      local_70 = 0;
      local_90 = *(undefined4 *)param_1[6];
      local_98 = *(undefined8 *)param_1[5];
      local_80 = param_2;
      FUN_148377598(&local_80,CONCAT71((int7)((ulonglong)param_1[3] >> 8),*(undefined1 *)param_1[2])
                    ,*(undefined1 *)param_1[3],*(undefined8 *)param_1[4]);
      FUN_14837b76a(&local_80,lVar3,param_2);
      FUN_148345e5a(&local_80);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      goto LAB_143bd8cd7;
    }
  }
  local_80 = L"ComputePolygroupsFromPolygonDetection_MissingGroups";
  local_78 = 0x33;
  FUN_1446e940c(local_44,&local_80);
  local_80 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
  local_78 = 0x2d;
  FUN_1446e940c(local_48,&local_80);
  local_80 = L"ComputePolygroupsFromPolygonDetection: Target Polygroup Layer does not exist";
  local_78 = 0x4c;
  FUN_140208c1e(local_40,local_48,local_44,&local_80);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
LAB_143bd8cd7:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd8e3c FUN_143bd8e3c body=688 status=ok
// SIG undefined FUN_143bd8e3c(void)

void FUN_143bd8e3c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar9 = (ulonglong)*(byte *)*param_1;
    uVar6 = *(uint *)((byte *)*param_1 + 4);
    if (uVar9 == 0) {
      if (((-1 < (int)uVar6) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) &&
         (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), (int)uVar6 < iVar3))
      goto LAB_143bd8f59;
    }
    else if (*(char *)(param_2 + 0x1a8) != '\0') {
LAB_143bd8f59:
      FUN_148376c0e(&local_68,param_2,(ulonglong)uVar6 << 0x20 | uVar9);
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar6 = 0;
      if ((uVar7 != 0) &&
         (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar2 = 1;
        uVar4 = 1;
        if (1 < (int)uVar7) {
          uVar2 = uVar7;
        }
        do {
          uVar6 = uVar2;
          if (uVar2 == uVar4) break;
          uVar5 = uVar4 >> 9;
          uVar8 = uVar4 & 0x1ff;
          uVar6 = uVar4;
          uVar4 = uVar4 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar5] +
                                             (ulonglong)uVar8 * 2) - 1U));
      }
      if (uVar6 != uVar7) {
        do {
          if (CONCAT44(uStack_5c,local_60) == 0) {
            iVar3 = FUN_146bc96d4(local_68,uVar6);
          }
          else {
            iVar3 = *(int *)(*(longlong *)
                              (*(longlong *)(CONCAT44(uStack_5c,local_60) + 0x20) +
                              (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
          }
          uVar9 = uStack_40;
          if (iVar3 == *(int *)param_1[2]) {
            lVar10 = (longlong)(int)uStack_40;
            uVar2 = (int)uStack_40 + 1;
            uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
            if (uStack_40._4_4_ < uVar2) {
              FUN_1446f48e2(&local_48,uVar9 & 0xffffffff);
            }
            *(uint *)((longlong)local_48 + lVar10 * 4) = uVar6;
          }
          plVar1 = local_48;
          uVar2 = uVar6 + 1;
          if ((int)(uVar6 + 1) < (int)uVar7) {
            uVar2 = uVar7;
          }
          do {
            uVar4 = uVar2;
            if (uVar2 - 1 == uVar6) break;
            uVar6 = uVar6 + 1;
            uVar4 = uVar6;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x148) +
                                                 (ulonglong)(uVar6 >> 9) * 8) +
                                               (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
          uVar6 = uVar4;
        } while (uVar6 != uVar7);
        lVar10 = (longlong)(int)uStack_40;
        if (lVar10 != 0) {
          lVar11 = 0;
          do {
            iVar3 = FUN_146c0b65a(param_2,*(undefined4 *)((longlong)plVar1 + lVar11),1,0);
            if (iVar3 == 0) {
              *(int *)param_1[3] = *(int *)param_1[3] + 1;
            }
            lVar11 = lVar11 + 4;
          } while (lVar10 * 4 != lVar11);
        }
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8(local_48);
        }
      }
      goto LAB_143bd8f35;
    }
  }
  local_68 = L"DeleteTrianglesInPolygroup_MissingGroups";
  local_60 = 0x28;
  FUN_1446e940c(local_4c,&local_68);
  local_68 = L"UGeometryScriptLibrary_MeshPolygroupFunctions";
  local_60 = 0x2d;
  FUN_1446e940c(local_50,&local_68);
  local_68 = L"DeleteTrianglesInPolygroup: Specified Polygroup Layer does not exist";
  local_60 = 0x44;
  FUN_140208c1e(&local_48,local_50,local_4c,&local_68);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
LAB_143bd8f35:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd90ee FUN_143bd90ee body=223 status=ok
// SIG undefined FUN_143bd90ee(void)

undefined8 FUN_143bd90ee(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  if (0 < (int)uVar5) {
    uVar4 = 0;
    do {
      uVar3 = 0xffffffff;
      if ((int)uVar4 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                               (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
          if (param_3[1] == 0) {
            uVar3 = FUN_146bc96d4(*param_3,uVar4);
          }
          else {
            uVar3 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_3[1] + 0x20) + (ulonglong)(uVar4 >> 9) * 8)
                     + (ulonglong)(uVar4 & 0x1ff) * 4);
          }
        }
      }
      plVar2 = (longlong *)*param_1;
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar2,iVar1);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return 0;
}



// FUNCTION 143bd91ce FUN_143bd91ce body=480 status=ok
// SIG undefined FUN_143bd91ce(void)

undefined8 FUN_143bd91ce(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar2 = 1;
    if (1 < (int)uVar9) {
      uVar7 = uVar9;
    }
    do {
      uVar8 = uVar7;
      if (uVar7 == uVar2) break;
      uVar3 = uVar2 >> 9;
      uVar5 = uVar2 & 0x1ff;
      uVar8 = uVar2;
      uVar2 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                         (ulonglong)uVar5 * 2) - 1U));
  }
  if (uVar8 != uVar9) {
    do {
      if (param_3[1] == 0) {
        local_4c = FUN_146bc96d4(*param_3,uVar8);
      }
      else {
        local_4c = *(uint *)(*(longlong *)
                              (*(longlong *)(param_3[1] + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                            (ulonglong)(uVar8 & 0x1ff) * 4);
      }
      plVar1 = (longlong *)*param_1;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar4 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar4 = (longlong *)plVar1[8];
        }
        iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar1[9] - 1U & local_4c) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*plVar1 + (longlong)iVar6 * 0xc) == local_4c) goto LAB_143bd9345;
            iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
        }
      }
      FUN_1447cbafe(plVar1,local_50,&local_4c,0);
      plVar1 = (longlong *)param_1[1];
      iVar6 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar6 + 1U) {
        FUN_1446f48e2(plVar1,iVar6);
      }
      *(uint *)(*plVar1 + (longlong)iVar6 * 4) = local_4c;
LAB_143bd9345:
      uVar7 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar9) {
        uVar7 = uVar9;
      }
      do {
        uVar2 = uVar7;
        if (uVar7 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar2 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar2;
    } while (uVar8 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 143bd93b0 FUN_143bd93b0 body=331 status=ok
// SIG undefined FUN_143bd93b0(void)

undefined8 FUN_143bd93b0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar8 = 0;
  if ((uVar4 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar4) {
      uVar6 = uVar4;
    }
    do {
      uVar8 = uVar6;
      if (uVar6 == uVar7) break;
      uVar3 = uVar7 >> 9;
      uVar5 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                         (ulonglong)uVar5 * 2) - 1U));
  }
  do {
    if (uVar8 == uVar4) {
      return 0;
    }
    if (param_3[1] == 0) {
      iVar2 = FUN_146bc96d4(*param_3,uVar8);
    }
    else {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3[1] + 0x20) + (ulonglong)(uVar8 >> 9) * 8)
                      + (ulonglong)(uVar8 & 0x1ff) * 4);
    }
    if (iVar2 == *(int *)*param_1) {
      plVar1 = (longlong *)param_1[1];
      iVar2 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar1,iVar2);
      }
      *(uint *)(*plVar1 + (longlong)iVar2 * 4) = uVar8;
    }
    uVar6 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar4) {
      uVar6 = uVar4;
    }
    uVar7 = uVar8;
    do {
      uVar8 = uVar6;
      if (uVar6 - 1 == uVar7) break;
      uVar8 = uVar7 + 1;
      uVar7 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bd94fc FUN_143bd94fc body=245 status=ok
// SIG undefined FUN_143bd94fc(void)

void FUN_143bd94fc(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined1 **local_48;
  undefined1 local_40 [20];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar3 = (ulonglong)*(byte *)*param_1;
    uVar1 = *(uint *)((byte *)*param_1 + 4);
    if (uVar3 == 0) {
      if ((((int)uVar1 < 0) || (*(longlong **)(param_2 + 0x208) == (longlong *)0x0)) ||
         (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), iVar2 <= (int)uVar1))
      goto LAB_143bd9556;
    }
    else if (*(char *)(param_2 + 0x1a8) == '\0') goto LAB_143bd9556;
    FUN_148376c0e(local_40,param_2,(ulonglong)uVar1 << 0x20 | uVar3);
    if (*(char *)param_1[1] == '\x01') {
      *(int *)param_1[2] = local_2c;
      *(undefined4 *)param_1[3] = *(undefined4 *)param_1[2];
      local_2c = local_2c + 1;
    }
    local_48 = &local_68;
    local_60 = param_1[2];
    local_50 = &LAB_143bd95f2;
    local_68 = local_40;
    local_58 = param_2;
    FUN_143bac7da(param_1[4],param_2,&local_50,0);
  }
LAB_143bd9556:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bd9712 FUN_143bd9712 body=147 status=ok
// SIG undefined FUN_143bd9712(void)

void FUN_143bd9712(undefined8 *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_2;
  local_10 = (*(double *)(lVar1 + 8 + (longlong)*param_3 * 0x10) +
              *(double *)(lVar1 + 8 + (longlong)param_3[1] * 0x10) +
             *(double *)(lVar1 + 8 + (longlong)param_3[2] * 0x10)) * 0.3333333333333333;
  local_18 = (*(double *)(lVar1 + (longlong)*param_3 * 0x10) +
              *(double *)(lVar1 + (longlong)param_3[1] * 0x10) +
             *(double *)(lVar1 + (longlong)param_3[2] * 0x10)) * 0.3333333333333333;
  FUN_1485c1cec(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd97a6 FUN_143bd97a6 body=102 status=ok
// SIG undefined FUN_143bd97a6(void)

void FUN_143bd97a6(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (0 < *(int *)(*param_1 + 8)) {
    uVar2 = 0;
    do {
      uVar1 = FUN_146bb28d2(*(undefined8 *)(param_1[1] + 0x10),uVar2 & 0xffffffff);
      if (uVar2 != uVar1) {
        FUN_146c0b0ee(param_2,*(undefined4 *)(*(longlong *)*param_1 + uVar2 * 4),0);
        *(undefined4 *)(*(longlong *)*param_1 + uVar2 * 4) = 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(*param_1 + 8));
  }
  return;
}



// FUNCTION 143bd980c FUN_143bd980c body=141 status=ok
// SIG undefined FUN_143bd980c(void)

void FUN_143bd980c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_38;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  uVar1 = *(undefined8 *)param_1[2];
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_143bb8bf2(*(undefined8 *)*param_1,param_4,local_98,uVar1);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd989a FUN_143bd989a body=32 status=ok
// SIG undefined FUN_143bd989a(void)

undefined8 FUN_143bd989a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  (**(code **)(*param_3 + 0xc0))(param_3,param_1);
  return param_1;
}



// FUNCTION 143bd98ba FUN_143bd98ba body=50 status=ok
// SIG undefined FUN_143bd98ba(void)

undefined4 FUN_143bd98ba(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0) &&
     (*(int *)(param_1 + 0x1e8) * 0x200 + *(int *)(param_1 + 0x1ec) == 0)) {
    iVar1 = *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return 0;
}



// FUNCTION 143bd98ec FUN_143bd98ec body=152 status=ok
// SIG undefined FUN_143bd98ec(void)

double * FUN_143bd98ec(double *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c688c4(param_2,&local_48,1);
  param_1[5] = local_20;
  param_1[3] = local_30;
  param_1[4] = dStack_28;
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = dStack_40;
  if (local_48 <= local_30) {
    if (dStack_40 <= dStack_28) {
      bVar1 = local_38 <= local_20;
      goto LAB_143bd9961;
    }
  }
  bVar1 = false;
LAB_143bd9961:
  *(bool *)(param_1 + 6) = bVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd9986 FUN_143bd9986 body=121 status=ok
// SIG undefined FUN_143bd9986(void)

void FUN_143bd9986(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1485c1eb4(&local_48,param_2,&local_38);
  *(float *)*param_1 = (float)local_48;
  *(float *)param_1[1] = (float)local_40;
  puVar1 = (undefined4 *)param_1[2];
  *(undefined8 *)(puVar1 + 4) = local_28;
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd9a00 FUN_143bd9a00 body=252 status=ok
// SIG undefined FUN_143bd9a00(void)

int FUN_143bd9a00(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0;
  uVar2 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U)) {
      uVar4 = 1;
      uVar6 = 1;
      if (1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      do {
        uVar5 = uVar4;
        if (uVar4 == uVar6) break;
        uVar7 = uVar6 >> 9;
        uVar3 = uVar6 & 0x1ff;
        uVar5 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar7] +
                                           (ulonglong)uVar3 * 2) - 1U));
    }
  }
  if (uVar5 != uVar2) {
    iVar1 = 0;
    do {
      iVar1 = (uint)(*(int *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) + 0xc
                             + (ulonglong)((uVar5 & 0x1ff) << 4)) == -1) + iVar1;
      uVar4 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar2) {
        uVar4 = uVar2;
      }
      do {
        uVar6 = uVar4;
        if (uVar4 - 1 == uVar5) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x1d8) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      uVar5 = uVar6;
    } while (uVar5 != uVar2);
  }
  return iVar1;
}



// FUNCTION 143bd9afc FUN_143bd9afc body=153 status=ok
// SIG undefined FUN_143bd9afc(void)

ulonglong FUN_143bd9afc(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined3 uStack_a0;
  undefined5 local_9d;
  undefined3 uStack_98;
  undefined8 uStack_95;
  undefined1 *local_8c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_95 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_9d = 0;
  local_8c = &DAT_100000002;
  local_78 = 0;
  local_68 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_b8 = param_2;
  bVar2 = FUN_146c68b4c(&local_b8);
  uVar1 = local_a8;
  *(byte *)*param_1 = bVar2 ^ 1;
  FUN_1482f1656(&local_b8);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd9b96 FUN_143bd9b96 body=117 status=ok
// SIG undefined FUN_143bd9b96(void)

ulonglong FUN_143bd9b96(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_142984024(&local_70);
  uVar1 = uStack_60;
  FUN_146be9400(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bd9c0c FUN_143bd9c0c body=323 status=ok
// SIG undefined FUN_143bd9c0c(void)

void FUN_143bd9c0c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x170);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(*(longlong *)(*param_1 + 8) + 0xc) < iVar1) {
    FUN_14481578e();
  }
  uVar4 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar8 = 0;
  if ((uVar4 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar4) {
      uVar6 = uVar4;
    }
    do {
      uVar8 = uVar6;
      if (uVar6 == uVar7) break;
      uVar3 = uVar7 >> 9;
      uVar5 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar3] +
                                         (ulonglong)uVar5 * 2) - 1U));
  }
  do {
    if (uVar8 == uVar4) {
      *(bool *)param_1[1] = *(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0;
      return;
    }
    plVar2 = *(longlong **)(*param_1 + 8);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(uint *)(*plVar2 + (longlong)iVar1 * 4) = uVar8;
    uVar6 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar4) {
      uVar6 = uVar4;
    }
    uVar7 = uVar8;
    do {
      uVar8 = uVar6;
      if (uVar6 - 1 == uVar7) break;
      uVar8 = uVar7 + 1;
      uVar7 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bd9d50 FUN_143bd9d50 body=161 status=ok
// SIG undefined FUN_143bd9d50(void)

void FUN_143bd9d50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)param_2[1];
  if (((int)uVar1 < 0) ||
     (*(int *)(param_3 + 0x140) * 0x200 + *(int *)(param_3 + 0x144) <= (int)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_2 = bVar5;
  if (*(char *)*param_2 == '\x01') {
    lVar3 = *(longlong *)
             (*(longlong *)(param_3 + 0x130) + (ulonglong)(*(uint *)param_2[1] >> 9) * 8);
    uVar4 = (ulonglong)(*(uint *)param_2[1] & 0x1ff);
    uVar2 = *(undefined4 *)(lVar3 + 8 + uVar4 * 0xc);
    *param_1 = *(undefined8 *)(lVar3 + uVar4 * 0xc);
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cb4e158;
  *param_1 = DAT_14cb4e150;
  return;
}



// FUNCTION 143bd9df2 FUN_143bd9df2 body=731 status=ok
// SIG undefined FUN_143bd9df2(void)

void FUN_143bd9df2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  if (*(char *)*param_1 == '\x01') {
    iVar1 = *(int *)(param_2 + 0x170);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1[1] + 0xc) < iVar1) {
      FUN_146ea3024();
    }
    uVar11 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar7 = 0;
    if ((uVar11 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar13 = 1;
      uVar9 = 1;
      if (1 < (int)uVar11) {
        uVar13 = uVar11;
      }
      do {
        uVar8 = uVar9;
        uVar7 = uVar13;
        if (uVar13 == uVar8) break;
        uVar9 = uVar8 + 1;
        uVar7 = uVar8;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143bd9e99:
    uVar13 = uVar7;
    if (uVar13 != uVar11) {
      plVar5 = (longlong *)param_1[1];
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
      uVar10 = (ulonglong)(uVar13 & 0x1ff);
      uVar2 = *(undefined4 *)(lVar12 + uVar10 * 0xc);
      uVar3 = *(undefined4 *)(lVar12 + 4 + uVar10 * 0xc);
      uVar4 = *(undefined4 *)(lVar12 + 8 + uVar10 * 0xc);
      iVar1 = (int)plVar5[1];
      lVar12 = (longlong)iVar1;
      *(uint *)(plVar5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
        FUN_146ddc768(plVar5,iVar1);
      }
      lVar6 = *plVar5;
      *(undefined4 *)(lVar6 + lVar12 * 0xc) = uVar2;
      *(undefined4 *)(lVar6 + 4 + lVar12 * 0xc) = uVar3;
      *(undefined4 *)(lVar6 + 8 + lVar12 * 0xc) = uVar4;
      uVar9 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar11) {
        uVar9 = uVar11;
      }
      do {
        uVar7 = uVar9;
        if (uVar9 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar7 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143bd9e99;
    }
    *(undefined1 *)param_1[2] = 0;
  }
  else {
    FUN_1485c2374(param_1[1],&DAT_14cb4e150,
                  *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
    uVar11 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar7 = 0;
    if ((uVar11 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar13 = 1;
      uVar9 = 1;
      if (1 < (int)uVar11) {
        uVar13 = uVar11;
      }
      do {
        uVar8 = uVar9;
        uVar7 = uVar13;
        if (uVar13 == uVar8) break;
        uVar9 = uVar8 + 1;
        uVar7 = uVar8;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143bda018:
    uVar13 = uVar7;
    if (uVar13 != uVar11) {
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
      uVar2 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
      lVar6 = *(longlong *)param_1[1];
      *(undefined8 *)(lVar6 + (longlong)(int)uVar13 * 0xc) =
           *(undefined8 *)(lVar12 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
      *(undefined4 *)(lVar6 + 8 + (longlong)(int)uVar13 * 0xc) = uVar2;
      uVar9 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar11) {
        uVar9 = uVar11;
      }
      do {
        uVar7 = uVar9;
        if (uVar9 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar7 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143bda018;
    }
    *(bool *)param_1[2] = *(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0;
  }
  return;
}



// FUNCTION 143bda0ce FUN_143bda0ce body=346 status=ok
// SIG undefined FUN_143bda0ce(void)

undefined8 FUN_143bda0ce(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar3 = *(uint *)param_1[1];
  if (((int)uVar3 < 0) ||
     (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar3)) {
    bVar12 = false;
  }
  else {
    bVar12 = (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                                (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_1 = bVar12;
  puVar9 = (undefined8 *)param_1[4];
  if (*(char *)*param_1 == '\x01') {
    puVar4 = (undefined8 *)param_1[3];
    puVar5 = (undefined8 *)param_1[2];
    lVar6 = *(longlong *)
             (*(longlong *)(param_2 + 0x130) + (ulonglong)(*(uint *)param_1[1] >> 9) * 8);
    uVar11 = (ulonglong)*(uint *)param_1[1] & 0x1ff;
    uVar3 = *(uint *)(lVar6 + uVar11 * 0xc);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    puVar5[2] = *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18);
    puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x18);
    uVar8 = puVar1[1];
    *puVar5 = *puVar1;
    puVar5[1] = uVar8;
    uVar3 = *(uint *)(lVar6 + 4 + uVar11 * 0xc);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    puVar4[2] = *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18);
    puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x18);
    uVar8 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar8;
    uVar3 = *(uint *)(lVar6 + 8 + uVar11 * 0xc);
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    puVar9[2] = *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18);
    puVar2 = (undefined4 *)(lVar6 + uVar10 * 0x18);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar15 = puVar2[2];
    uVar16 = puVar2[3];
  }
  else {
    puVar9[2] = DAT_14c8464f0;
    uVar8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *puVar9 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    puVar9[1] = uVar8;
    uVar8 = DAT_14c8464f0;
    uVar16 = DAT_14c8464e8._4_4_;
    uVar15 = (undefined4)DAT_14c8464e8;
    uVar14 = DAT_14c8464e0._4_4_;
    uVar13 = (undefined4)DAT_14c8464e0;
    puVar2 = (undefined4 *)param_1[3];
    *(undefined8 *)(puVar2 + 4) = DAT_14c8464f0;
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar9 = (undefined8 *)param_1[2];
    puVar9[2] = uVar8;
  }
  *(undefined4 *)puVar9 = uVar13;
  *(undefined4 *)((longlong)puVar9 + 4) = uVar14;
  *(undefined4 *)(puVar9 + 1) = uVar15;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar16;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1);
}



// FUNCTION 143bda228 FUN_143bda228 body=326 status=ok
// SIG undefined FUN_143bda228(void)

undefined8 FUN_143bda228(undefined8 *param_1,longlong param_2)

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
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  double *pdVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar10 = *(uint *)*param_1;
  if ((-1 < (int)uVar10) &&
     ((int)uVar10 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
    uVar18 = (ulonglong)(uVar10 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar10 >> 9) * 8) +
                           uVar18 * 2) - 1U) < 0xfffe) {
      lVar12 = *(longlong *)(param_2 + 0x10);
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar10 >> 9) * 8);
      uVar10 = *(uint *)(lVar13 + uVar18 * 0xc);
      uVar11 = *(uint *)(lVar13 + 4 + uVar18 * 0xc);
      lVar14 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
      uVar19 = (ulonglong)uVar10 & 0x1ff;
      lVar15 = *(longlong *)(lVar12 + (ulonglong)(uVar11 >> 9) * 8);
      uVar20 = (ulonglong)uVar11 & 0x1ff;
      uVar10 = *(uint *)(lVar13 + 8 + uVar18 * 0xc);
      lVar12 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
      uVar18 = (ulonglong)uVar10 & 0x1ff;
      pdVar16 = (double *)param_1[1];
      pdVar17 = (double *)param_1[2];
      dVar1 = *pdVar17;
      dVar2 = *(double *)(lVar14 + 0x10 + uVar19 * 0x18);
      dVar3 = *(double *)(lVar14 + 8 + uVar19 * 0x18);
      dVar4 = pdVar17[1];
      dVar5 = *(double *)(lVar15 + 0x10 + uVar20 * 0x18);
      dVar6 = *(double *)(lVar15 + 8 + uVar20 * 0x18);
      dVar7 = pdVar17[2];
      dVar8 = *(double *)(lVar12 + 0x10 + uVar18 * 0x18);
      dVar9 = *(double *)(lVar12 + 8 + uVar18 * 0x18);
      *pdVar16 = dVar7 * *(double *)(lVar12 + uVar18 * 0x18) +
                 dVar4 * *(double *)(lVar15 + uVar20 * 0x18) +
                 dVar1 * *(double *)(lVar14 + uVar19 * 0x18);
      pdVar16[1] = dVar9 * dVar7 + dVar6 * dVar4 + dVar3 * dVar1;
      pdVar16[2] = dVar8 * dVar7 + dVar5 * dVar4 + dVar2 * dVar1;
      return CONCAT71((int7)((ulonglong)pdVar16 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143bda36e FUN_143bda36e body=144 status=ok
// SIG undefined FUN_143bda36e(void)

undefined8 * FUN_143bda36e(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)param_2[1];
  if (((int)uVar1 < 0) ||
     (*(int *)(param_3 + 0x140) * 0x200 + *(int *)(param_3 + 0x144) <= (int)uVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_2 = bVar3;
  if (*(char *)*param_2 == '\x01') {
    FUN_146c13dec(param_3,param_1,*(undefined4 *)param_2[1]);
  }
  else {
    param_1[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar2;
  }
  return param_1;
}



// FUNCTION 143bda3fe FUN_143bda3fe body=607 status=ok
// SIG undefined FUN_143bda3fe(void)

double * FUN_143bda3fe(double *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar2 = *(uint *)param_2[1];
  if (((int)uVar2 < 0) ||
     (*(int *)(param_3 + 0x140) * 0x200 + *(int *)(param_3 + 0x144) <= (int)uVar2)) {
    bVar15 = false;
  }
  else {
    bVar15 = (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                                (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_2 = bVar15;
  if (*(char *)*param_2 == '\x01') {
    puVar3 = (undefined8 *)param_2[4];
    puVar4 = (undefined8 *)param_2[3];
    puVar5 = (undefined8 *)param_2[2];
    lVar6 = *(longlong *)
             (*(longlong *)(param_3 + 0x130) + (ulonglong)(*(uint *)param_2[1] >> 9) * 8);
    uVar13 = (ulonglong)*(uint *)param_2[1] & 0x1ff;
    uVar2 = *(uint *)(lVar6 + uVar13 * 0xc);
    lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar14 = (ulonglong)uVar2 & 0x1ff;
    puVar5[2] = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar7 + uVar14 * 0x18);
    uVar12 = puVar1[1];
    *puVar5 = *puVar1;
    puVar5[1] = uVar12;
    uVar2 = *(uint *)(lVar6 + 4 + uVar13 * 0xc);
    lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar14 = (ulonglong)uVar2 & 0x1ff;
    puVar4[2] = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar7 + uVar14 * 0x18);
    uVar12 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar12;
    uVar2 = *(uint *)(lVar6 + 8 + uVar13 * 0xc);
    lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    puVar3[2] = *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
    puVar1 = (undefined8 *)(lVar6 + uVar13 * 0x18);
    uVar12 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    pdVar8 = (double *)param_2[4];
    pdVar9 = (double *)param_2[2];
    pdVar10 = (double *)param_2[3];
    dVar20 = pdVar8[2] - pdVar9[2];
    dVar18 = pdVar8[1] - pdVar9[1];
    dVar19 = *pdVar8 - *pdVar9;
    dVar23 = pdVar10[2] - pdVar9[2];
    dVar11 = pdVar10[1] - pdVar9[1];
    dVar22 = *pdVar10 - *pdVar9;
    dVar21 = dVar19 * dVar11 - dVar22 * dVar18;
    dVar22 = dVar20 * dVar22 - dVar23 * dVar19;
    dVar19 = dVar18 * dVar23 - dVar11 * dVar20;
    if (1e-08 < dVar21 * dVar21 + dVar19 * dVar19 + dVar22 * dVar22) {
      FUN_146c7de05(param_1,param_2[5],pdVar9,pdVar10,pdVar8);
      dVar19 = *param_1;
      dVar21 = param_1[1];
      dVar23 = 1.0;
      if (dVar19 <= 1.0) {
        dVar23 = dVar19;
      }
      *param_1 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar23);
      uVar16 = 0;
      uVar17 = 0x3ff00000;
      if (dVar21 <= 1.0) {
        uVar16 = SUB84(dVar21,0);
        uVar17 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      param_1[1] = (double)(~-(ulonglong)(dVar21 < 0.0) & CONCAT44(uVar17,uVar16));
      dVar19 = param_1[2];
      dVar21 = 1.0;
      if (dVar19 <= 1.0) {
        dVar21 = dVar19;
      }
      param_1[2] = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar21);
      return param_1;
    }
  }
  param_1[2] = DAT_14c8464f0;
  dVar19 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar19;
  return param_1;
}



// FUNCTION 143bda65e FUN_143bda65e body=302 status=ok
// SIG undefined FUN_143bda65e(void)

void FUN_143bda65e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(*(longlong *)(*param_1 + 8) + 0xc) < iVar1) {
    FUN_14481578e();
  }
  uVar4 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar8 = 0;
  if ((uVar4 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar6 = 1;
    uVar7 = 1;
    if (1 < (int)uVar4) {
      uVar6 = uVar4;
    }
    do {
      uVar8 = uVar6;
      if (uVar6 == uVar7) break;
      uVar3 = uVar7 >> 9;
      uVar5 = uVar7 & 0x1ff;
      uVar8 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar3] +
                                         (ulonglong)uVar5 * 2) - 1U));
  }
  do {
    if (uVar8 == uVar4) {
      *(bool *)param_1[1] = *(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0;
      return;
    }
    plVar2 = *(longlong **)(*param_1 + 8);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(uint *)(*plVar2 + (longlong)iVar1 * 4) = uVar8;
    uVar6 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar4) {
      uVar6 = uVar4;
    }
    uVar7 = uVar8;
    do {
      uVar8 = uVar6;
      if (uVar6 - 1 == uVar7) break;
      uVar8 = uVar7 + 1;
      uVar7 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x28) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bda78e FUN_143bda78e body=151 status=ok
// SIG undefined FUN_143bda78e(void)

void FUN_143bda78e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = *(uint *)param_2[1];
  if (((int)uVar2 < 0) ||
     (*(int *)(param_3 + 0x20) * 0x200 + *(int *)(param_3 + 0x24) <= (int)uVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_3 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  *(bool *)*param_2 = bVar5;
  if (*(char *)*param_2 == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(*(uint *)param_2[1] >> 9) * 8)
    ;
    uVar4 = (ulonglong)(*(uint *)param_2[1] & 0x1ff);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar3 + 0x10 + uVar4 * 0x18);
    puVar1 = (undefined4 *)(lVar3 + uVar4 * 0x18);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
  }
  else {
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  return;
}



// FUNCTION 143bda826 FUN_143bda826 body=787 status=ok
// SIG undefined FUN_143bda826(void)

void FUN_143bda826(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)param_1[1];
  if (*(char *)*param_1 == '\x01') {
    iVar12 = *(int *)(param_2 + 0x50);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (*(int *)((longlong)plVar3 + 0xc) < iVar12) {
      FUN_1447a8aa0(plVar3);
    }
    uVar11 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar16 = 0;
    if ((uVar11 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar14 = 1;
      uVar15 = 1;
      if (1 < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar16 = uVar14;
        if (uVar14 == uVar15) break;
        uVar10 = uVar15 >> 9;
        uVar13 = uVar15 & 0x1ff;
        uVar16 = uVar15;
        uVar15 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar10] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_143bda986:
    if (uVar16 != uVar11) {
      plVar3 = (longlong *)param_1[1];
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
      local_48 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar12 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar12 + 1U) {
        FUN_1403e3958(plVar3,iVar12);
      }
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar12 * 0x18) = local_48;
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar12 * 0x18);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      uVar14 = uVar16 + 1;
      if ((int)(uVar16 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      uVar15 = uVar16;
      do {
        uVar16 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar16 = uVar15 + 1;
        uVar15 = uVar16;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      goto LAB_143bda986;
    }
    *(undefined1 *)param_1[2] = 0;
  }
  else {
    iVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    *(undefined4 *)(plVar3 + 1) = 0;
    if (*(int *)((longlong)plVar3 + 0xc) != iVar12) {
      FUN_1447a8aa0(plVar3,iVar12);
    }
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1403e3958(plVar3,iVar2);
      }
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = DAT_14c8464f0;
      uVar8 = DAT_14c8464e8._4_4_;
      uVar7 = (undefined4)DAT_14c8464e8;
      uVar6 = DAT_14c8464e0._4_4_;
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
      *puVar1 = (undefined4)DAT_14c8464e0;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
    }
    uVar11 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar16 = 0;
    if ((uVar11 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar14 = 1;
      uVar15 = 1;
      if (1 < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar16 = uVar14;
        if (uVar14 == uVar15) break;
        uVar10 = uVar15 >> 9;
        uVar13 = uVar15 & 0x1ff;
        uVar16 = uVar15;
        uVar15 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar10] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_143bdaaf3:
    if (uVar16 != uVar11) {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
      lVar5 = *(longlong *)param_1[1];
      puVar1 = (undefined4 *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar16 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + (longlong)(int)uVar16 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      uVar14 = uVar16 + 1;
      if ((int)(uVar16 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      uVar15 = uVar16;
      do {
        uVar16 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar16 = uVar15 + 1;
        uVar15 = uVar16;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      goto LAB_143bdaaf3;
    }
    *(bool *)param_1[2] = *(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bdab3c FUN_143bdab3c body=112 status=ok
// SIG undefined FUN_143bdab3c(void)

void FUN_143bdab3c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  longlong local_20;
  code **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1[1];
  local_28 = &local_38;
  local_18 = &local_30;
  local_30 = FUN_143bdabae;
  local_10 = *(undefined4 *)*param_1;
  local_20 = param_2;
  FUN_146c58f20(param_2 + 0xb8,local_10);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdabae FUN_143bdabae body=51 status=ok
// SIG undefined FUN_143bdabae(void)

void FUN_143bdabae(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143bdabe2 FUN_143bdabe2 body=420 status=ok
// SIG undefined FUN_143bdabe2(void)

void FUN_143bdabe2(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = (longlong)(int)(*(longlong **)(*param_1 + 8))[1];
  if (lVar11 != 0) {
    lVar5 = **(longlong **)(*param_1 + 8);
    lVar10 = 0;
    do {
      uVar3 = *(uint *)(lVar5 + lVar10);
      if ((-1 < (int)uVar3) &&
         ((int)uVar3 < *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar8 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                   (ulonglong)((uVar3 & 0x1ff) << 4));
          plVar6 = *(longlong **)param_1[1];
          lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar8 >> 9 & 0x7fffff) * 8);
          uVar9 = (ulonglong)((uint)uVar8 & 0x1ff);
          local_58 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
          puVar1 = (undefined4 *)(lVar7 + uVar9 * 0x18);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          iVar4 = (int)plVar6[1];
          *(uint *)(plVar6 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
            FUN_1403e3958(plVar6,iVar4);
          }
          lVar7 = *plVar6;
          *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18) = local_58;
          puVar2 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x18);
          *puVar2 = CONCAT44(uStack_64,local_68);
          puVar2[1] = CONCAT44(uStack_5c,uStack_60);
          plVar6 = *(longlong **)param_1[2];
          lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar8 >> 0x29) * 8);
          uVar8 = (ulonglong)((uint)(uVar8 >> 0x20) & 0x1ff);
          local_58 = *(undefined8 *)(lVar7 + 0x10 + uVar8 * 0x18);
          puVar1 = (undefined4 *)(lVar7 + uVar8 * 0x18);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          iVar4 = (int)plVar6[1];
          *(uint *)(plVar6 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
            FUN_1403e3958(plVar6,iVar4);
          }
          lVar7 = *plVar6;
          *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18) = local_58;
          puVar1 = (undefined4 *)(lVar7 + (longlong)iVar4 * 0x18);
          *puVar1 = local_68;
          puVar1[1] = uStack_64;
          puVar1[2] = uStack_60;
          puVar1[3] = uStack_5c;
        }
      }
      lVar10 = lVar10 + 4;
    } while (lVar11 * 4 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdad88 FUN_143bdad88 body=655 status=ok
// SIG undefined FUN_143bdad88(void)

double * FUN_143bdad88(double *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = *(int *)(param_3 + 0x140) * 0x200 + *(int *)(param_3 + 0x144);
  uVar15 = 0;
  if ((uVar11 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_3 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar9 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar15 = uVar14;
      if (uVar14 == uVar9) break;
      uVar10 = uVar9 >> 9;
      uVar12 = uVar9 & 0x1ff;
      uVar15 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_3 + 0x148))[uVar10] +
                                         (ulonglong)uVar12 * 2) - 1U));
  }
  if (uVar15 == uVar11) {
    *(undefined1 *)*param_2 = 1;
  }
  else {
    dVar3 = 1.79769313486232e+308;
    dVar4 = 1.79769313486232e+308;
    dVar2 = -1.79769313486232e+308;
    iVar13 = 0;
    dVar18 = dVar2;
    do {
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)(param_4 + 0x78) + (ulonglong)(uVar15 * 3 >> 9) * 8) +
                       (ulonglong)(uVar15 * 3 & 0x1ff) * 4)) {
        local_b8 = &local_a8;
        FUN_146c35244(param_4,uVar15,&local_98,&local_a0);
        dVar1 = (double)local_94;
        dVar16 = (double)local_98;
        dVar17 = dVar16;
        if (dVar4 <= dVar16) {
          dVar17 = dVar4;
        }
        if (dVar16 <= dVar18) {
          dVar16 = dVar18;
        }
        dVar18 = dVar1;
        if (dVar3 <= dVar1) {
          dVar18 = dVar3;
        }
        dVar19 = (double)local_9c;
        if (dVar1 <= dVar2) {
          dVar1 = dVar2;
        }
        dVar20 = (double)local_a0;
        dVar3 = dVar20;
        if (dVar17 <= dVar20) {
          dVar3 = dVar17;
        }
        if (dVar20 <= dVar16) {
          dVar20 = dVar16;
        }
        dVar16 = dVar19;
        if (dVar18 <= dVar19) {
          dVar16 = dVar18;
        }
        dVar2 = (double)local_a4;
        dVar18 = (double)local_a8;
        if (dVar19 <= dVar1) {
          dVar19 = dVar1;
        }
        dVar4 = dVar18;
        if (dVar3 <= dVar18) {
          dVar4 = dVar3;
        }
        if (dVar18 <= dVar20) {
          dVar18 = dVar20;
        }
        dVar3 = dVar2;
        if (dVar16 <= dVar2) {
          dVar3 = dVar16;
        }
        if (dVar2 <= dVar19) {
          dVar2 = dVar19;
        }
        iVar13 = iVar13 + 1;
      }
      uVar14 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar9 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar9 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_3 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar15 = uVar9;
    } while (uVar15 != uVar11);
    *(bool *)*param_2 = iVar13 == 0;
    if (0 < iVar13) {
      *param_1 = dVar4;
      param_1[1] = dVar3;
      param_1[2] = dVar18;
      param_1[3] = dVar2;
      bVar8 = -(dVar4 <= dVar18) & -(dVar3 <= dVar2) & 1;
      goto LAB_143bdafce;
    }
  }
  dVar2 = (double)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[2] = (double)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[3] = dVar2;
  uVar7 = DAT_14c8463f8._4_4_;
  uVar6 = (undefined4)DAT_14c8463f8;
  uVar5 = DAT_14c8463f0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
  bVar8 = 0;
LAB_143bdafce:
  *(byte *)(param_1 + 4) = bVar8;
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bdb018 FUN_143bdb018 body=535 status=ok
// SIG undefined FUN_143bdb018(void)

double FUN_143bdb018(undefined8 param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  float *local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar5 = 0;
  if ((uVar6 != 0) &&
     (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar8 = 1;
    uVar3 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    do {
      uVar5 = uVar8;
      if (uVar8 == uVar3) break;
      uVar4 = uVar3 >> 9;
      uVar7 = uVar3 & 0x1ff;
      uVar5 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar4] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  dVar1 = 0.0;
  dVar2 = 0.0;
  if (uVar5 != uVar6) {
    do {
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar5 * 3 >> 9) * 8) +
                       (ulonglong)(uVar5 * 3 & 0x1ff) * 4)) {
        local_a8 = &local_88;
        FUN_146c35244(param_3,uVar5,&local_98,&local_90);
        fVar9 = ((local_88 * local_94 - local_98 * local_84) +
                (local_90 * local_84 - local_8c * local_88) +
                (local_98 * local_8c - local_90 * local_94)) * 0.5;
        uVar8 = -(uint)(-fVar9 <= fVar9);
        dVar1 = dVar1 + (double)(float)(~uVar8 & (uint)-fVar9 | (uint)fVar9 & uVar8);
      }
      uVar8 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar6) {
        uVar8 = uVar6;
      }
      do {
        uVar3 = uVar8;
        if (uVar8 - 1 == uVar5) break;
        uVar5 = uVar5 + 1;
        uVar3 = uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      uVar5 = uVar3;
      dVar2 = dVar1;
    } while (uVar5 != uVar6);
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar2;
}



// FUNCTION 143bdb230 FUN_143bdb230 body=314 status=ok
// SIG undefined FUN_143bdb230(void)

undefined8 FUN_143bdb230(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  float *local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)*param_1;
  if (((((int)uVar1 < 0) ||
       (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar1)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8)
                                   + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) ||
     (uVar5 = (ulonglong)uVar1 * 3,
     *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x78) + (uVar5 >> 9) * 8) +
             (ulonglong)((uint)uVar5 & 0x1ff) * 4) < 0)) {
    puVar2 = (undefined8 *)param_1[3];
    uVar10 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    *puVar2 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    puVar2[1] = uVar10;
    uVar9 = DAT_14c8463f8._4_4_;
    uVar8 = (undefined4)DAT_14c8463f8;
    uVar7 = DAT_14c8463f0._4_4_;
    uVar6 = (undefined4)DAT_14c8463f0;
    puVar3 = (undefined4 *)param_1[2];
    *puVar3 = (undefined4)DAT_14c8463f0;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3 = (undefined4 *)param_1[1];
    *puVar3 = uVar6;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    uVar10 = 0;
  }
  else {
    local_48 = &local_40;
    FUN_146c35244(param_3,(ulonglong)uVar1,&local_30,&local_38);
    pdVar4 = (double *)param_1[1];
    *pdVar4 = (double)local_30;
    pdVar4[1] = (double)local_2c;
    pdVar4 = (double *)param_1[2];
    *pdVar4 = (double)local_38;
    pdVar4[1] = (double)local_34;
    pdVar4 = (double *)param_1[3];
    *pdVar4 = (double)local_40;
    pdVar4[1] = (double)local_3c;
    uVar10 = CONCAT71((int7)((ulonglong)pdVar4 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdb36c FUN_143bdb36c body=177 status=ok
// SIG undefined FUN_143bdb36c(void)

ulonglong FUN_143bdb36c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)*param_1;
  if ((((int)uVar1 < 0) ||
      (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
    uVar2 = 0;
  }
  else {
    local_30 = param_1[1];
    local_18 = &local_30;
    local_28 = param_1[2];
    local_20 = FUN_143bdb41e;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    FUN_146c35346(param_3,uVar1,&local_20,CONCAT71((int7)((ulonglong)local_18 >> 8),1));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdb41e FUN_143bdb41e body=153 status=ok
// SIG undefined FUN_143bdb41e(void)

undefined8 FUN_143bdb41e(longlong *param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar3 = *param_3;
  plVar5 = (longlong *)*param_1;
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_1446f48e2(plVar5,iVar4);
  }
  *(undefined4 *)(*plVar5 + (longlong)iVar4 * 4) = uVar3;
  plVar5 = (longlong *)param_1[1];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_14489624a(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  *(double *)(lVar6 + (longlong)iVar4 * 0x10) = (double)fVar1;
  *(double *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = (double)fVar2;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 143bdb4b8 FUN_143bdb4b8 body=308 status=ok
// SIG undefined FUN_143bdb4b8(void)

undefined8 FUN_143bdb4b8(undefined8 *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  float *local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(uint *)*param_1;
  if (((((int)uVar4 < 0) ||
       (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar4)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar4 >> 9) * 8)
                                   + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U))) ||
     (uVar7 = (ulonglong)uVar4 * 3,
     *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x78) + (uVar7 >> 9) * 8) +
             (ulonglong)((uint)uVar7 & 0x1ff) * 4) < 0)) {
    uVar8 = 0;
  }
  else {
    local_48 = &local_40;
    FUN_146c35244(param_3,(ulonglong)uVar4,&local_30,&local_38);
    pdVar5 = (double *)param_1[1];
    pdVar6 = (double *)param_1[2];
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    dVar3 = pdVar6[2];
    *pdVar5 = (double)local_40 * dVar3 + (double)local_38 * dVar2 + (double)local_30 * dVar1;
    pdVar5[1] = (double)local_3c * dVar3 + (double)local_34 * dVar2 + (double)local_2c * dVar1;
    uVar8 = CONCAT71((int7)((ulonglong)pdVar5 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdb5ee FUN_143bdb5ee body=299 status=ok
// SIG undefined FUN_143bdb5ee(void)

undefined8 FUN_143bdb5ee(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4);
  uVar9 = 0;
  if ((uVar5 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x1d8) - 1U))) {
    uVar7 = 1;
    uVar8 = 1;
    if (1 < (int)uVar5) {
      uVar7 = uVar5;
    }
    do {
      uVar9 = uVar7;
      if (uVar7 == uVar8) break;
      uVar4 = uVar8 >> 9;
      uVar6 = uVar8 & 0x1ff;
      uVar9 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x1d8))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  do {
    if (uVar9 == uVar5) {
      return 1;
    }
    cVar3 = FUN_146c1a770(param_3,uVar9,0);
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(*param_1 + 8);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar2,iVar1);
      }
      *(uint *)(*plVar2 + (longlong)iVar1 * 4) = uVar9;
    }
    uVar7 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)uVar5) {
      uVar7 = uVar5;
    }
    uVar8 = uVar9;
    do {
      uVar9 = uVar7;
      if (uVar7 - 1 == uVar8) break;
      uVar9 = uVar8 + 1;
      uVar8 = uVar9;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x1d8) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 143bdb71a FUN_143bdb71a body=241 status=ok
// SIG undefined FUN_143bdb71a(void)

int FUN_143bdb71a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_48 = &PTR_LAB_14af7ccf0;
  local_68 = &LAB_143bdb80c;
  local_80 = param_2;
  local_40 = param_3;
  FUN_142984024(&local_80);
  iVar2 = 0;
  if ((longlong)(int)uStack_70 != 0) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(*(undefined8 **)(local_78 + lVar3) + 1) == 0) {
        bVar4 = false;
      }
      else {
        uVar1 = *(int *)**(undefined8 **)(local_78 + lVar3) * 3;
        bVar4 = -1 < *(int *)(*(longlong *)
                               (*(longlong *)(param_3 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 4);
      }
      iVar2 = iVar2 + (uint)bVar4;
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)uStack_70 * 8 != lVar3);
  }
  FUN_146be9400(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdb844 FUN_143bdb844 body=29 status=ok
// SIG undefined FUN_143bdb844(void)

undefined8 FUN_143bdb844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bdb862 FUN_143bdb862 body=281 status=ok
// SIG undefined FUN_143bdb862(void)

undefined8 FUN_143bdb862(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  double *pdVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  float *local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if ((((lVar1 == 0) || (*(int *)(lVar1 + 0x38) < 1)) ||
      (lVar1 = **(longlong **)(lVar1 + 0x30), lVar1 == 0)) ||
     (uVar3 = *(int *)*param_1 * 3,
     *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)(uVar3 >> 9) * 8) +
             (ulonglong)(uVar3 & 0x1ff) * 4) < 0)) {
    uVar4 = 0;
  }
  else {
    local_58 = &local_4c;
    FUN_146c3574a(lVar1,*(int *)*param_1,&local_34,&local_40);
    pdVar2 = (double *)param_1[1];
    *pdVar2 = (double)local_34;
    pdVar2[1] = (double)local_30;
    pdVar2[2] = (double)local_2c;
    pdVar2 = (double *)param_1[2];
    *pdVar2 = (double)local_40;
    pdVar2[1] = (double)local_3c;
    pdVar2[2] = (double)local_38;
    pdVar2 = (double *)param_1[3];
    *pdVar2 = (double)local_4c;
    pdVar2[1] = (double)local_48;
    pdVar2[2] = (double)local_44;
    uVar4 = CONCAT71((int7)((ulonglong)pdVar2 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdb97c FUN_143bdb97c body=378 status=ok
// SIG undefined FUN_143bdb97c(void)

double * FUN_143bdb97c(double *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  float *local_78;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_3 + 0x208);
  if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x38))) &&
     (lVar4 = **(longlong **)(lVar4 + 0x30), lVar4 != 0)) {
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(lVar4 + 0x78) +
                       (ulonglong)((uint)(*(int *)*param_2 * 3) >> 9) * 8) +
                     (ulonglong)(*(int *)*param_2 * 3 & 0x1ff) * 4)) {
      *(undefined1 *)param_2[1] = 1;
      local_78 = &local_64;
      FUN_146c3574a(lVar4,*(undefined4 *)*param_2,&local_4c,&local_58);
      pdVar5 = (double *)param_2[2];
      dVar1 = *pdVar5;
      dVar2 = pdVar5[1];
      dVar3 = pdVar5[2];
      *param_1 = (double)local_64 * dVar3 + (double)local_58 * dVar2 + (double)local_4c * dVar1;
      param_1[1] = (double)local_60 * dVar3 + (double)local_54 * dVar2 + (double)local_48 * dVar1;
      param_1[2] = (double)local_5c * dVar3 + (double)local_50 * dVar2 + (double)local_44 * dVar1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
  }
  param_1[2] = DAT_14c8463c8;
  uVar8 = DAT_14c8463c0._4_4_;
  uVar7 = (undefined4)DAT_14c8463c0;
  uVar6 = DAT_14c8463b8._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8463b8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdbafc FUN_143bdbafc body=693 status=ok
// SIG undefined FUN_143bdbafc(void)

undefined8 FUN_143bdbafc(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  float *local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_2 + 0x208);
  if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x38), 0 < (int)uVar1)) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    lVar2 = *plVar3;
    if ((uVar1 != 1 && lVar2 != 0) &&
       ((lVar4 = plVar3[1], 2 < uVar1 && lVar4 != 0 && (lVar5 = plVar3[2], lVar5 != 0)))) {
      uVar1 = *(int *)*param_1 * 3;
      uVar9 = (ulonglong)(uVar1 >> 9);
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      if ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar9 * 8) + uVar7 * 4)) &&
         ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar9 * 8) + uVar7 * 4) &&
          (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x78) + uVar9 * 8) + uVar7 * 4))))) {
        local_68 = &local_5c;
        FUN_146c3574a(lVar2,*(int *)*param_1,&local_44,&local_50);
        pdVar6 = (double *)param_1[1];
        *pdVar6 = (double)local_44;
        pdVar6[1] = (double)local_40;
        pdVar6[2] = (double)local_3c;
        lVar2 = param_1[1];
        *(double *)(lVar2 + 0x18) = (double)local_50;
        *(double *)(lVar2 + 0x20) = (double)local_4c;
        *(double *)(lVar2 + 0x28) = (double)local_48;
        lVar2 = param_1[1];
        *(double *)(lVar2 + 0x30) = (double)local_5c;
        *(double *)(lVar2 + 0x38) = (double)local_58;
        *(double *)(lVar2 + 0x40) = (double)local_54;
        local_68 = &local_5c;
        FUN_146c3574a(lVar4,*(undefined4 *)*param_1,&local_44,&local_50);
        pdVar6 = (double *)param_1[2];
        *pdVar6 = (double)local_44;
        pdVar6[1] = (double)local_40;
        pdVar6[2] = (double)local_3c;
        lVar2 = param_1[2];
        *(double *)(lVar2 + 0x18) = (double)local_50;
        *(double *)(lVar2 + 0x20) = (double)local_4c;
        *(double *)(lVar2 + 0x28) = (double)local_48;
        lVar2 = param_1[2];
        *(double *)(lVar2 + 0x30) = (double)local_5c;
        *(double *)(lVar2 + 0x38) = (double)local_58;
        *(double *)(lVar2 + 0x40) = (double)local_54;
        local_68 = &local_5c;
        FUN_146c3574a(lVar5,*(undefined4 *)*param_1,&local_44,&local_50);
        pdVar6 = (double *)param_1[3];
        *pdVar6 = (double)local_44;
        pdVar6[1] = (double)local_40;
        pdVar6[2] = (double)local_3c;
        lVar2 = param_1[3];
        *(double *)(lVar2 + 0x18) = (double)local_50;
        *(double *)(lVar2 + 0x20) = (double)local_4c;
        *(double *)(lVar2 + 0x28) = (double)local_48;
        lVar2 = param_1[3];
        *(double *)(lVar2 + 0x30) = (double)local_5c;
        *(double *)(lVar2 + 0x38) = (double)local_58;
        *(double *)(lVar2 + 0x40) = (double)local_54;
        uVar8 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        goto LAB_143bdbbae;
      }
    }
  }
  uVar8 = 0;
LAB_143bdbbae:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdbdb2 FUN_143bdbdb2 body=818 status=ok
// SIG undefined FUN_143bdbdb2(void)

undefined8 FUN_143bdbdb2(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  float *local_88;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_2 + 0x208);
  if ((lVar5 != 0) && (uVar4 = *(uint *)(lVar5 + 0x38), 0 < (int)uVar4)) {
    plVar6 = *(longlong **)(lVar5 + 0x30);
    lVar5 = *plVar6;
    if ((uVar4 != 1 && lVar5 != 0) &&
       ((lVar7 = plVar6[1], 2 < uVar4 && lVar7 != 0 && (lVar8 = plVar6[2], lVar8 != 0)))) {
      uVar4 = *(int *)*param_1 * 3;
      uVar13 = (ulonglong)(uVar4 >> 9);
      uVar11 = (ulonglong)(uVar4 & 0x1ff);
      if ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x78) + uVar13 * 8) + uVar11 * 4)) &&
         ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + uVar13 * 8) + uVar11 * 4) &&
          (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + uVar13 * 8) + uVar11 * 4))))) {
        local_88 = &local_74;
        FUN_146c3574a(lVar5,*(int *)*param_1,&local_5c,&local_68);
        pdVar9 = (double *)param_1[1];
        pdVar10 = (double *)param_1[2];
        dVar1 = *pdVar10;
        dVar2 = pdVar10[1];
        dVar3 = pdVar10[2];
        *pdVar9 = (double)local_74 * dVar3 + (double)local_68 * dVar2 + (double)local_5c * dVar1;
        pdVar9[1] = (double)local_70 * dVar3 + (double)local_64 * dVar2 + (double)local_58 * dVar1;
        pdVar9[2] = (double)local_6c * dVar3 + (double)local_60 * dVar2 + (double)local_54 * dVar1;
        local_88 = &local_74;
        FUN_146c3574a(lVar7,*(undefined4 *)*param_1,&local_5c,&local_68);
        pdVar9 = (double *)param_1[2];
        pdVar10 = (double *)param_1[3];
        dVar1 = *pdVar9;
        dVar2 = pdVar9[1];
        dVar3 = pdVar9[2];
        *pdVar10 = (double)local_74 * dVar3 + (double)local_68 * dVar2 + (double)local_5c * dVar1;
        pdVar10[1] = (double)local_70 * dVar3 + (double)local_64 * dVar2 + (double)local_58 * dVar1;
        pdVar10[2] = (double)local_6c * dVar3 + (double)local_60 * dVar2 + (double)local_54 * dVar1;
        local_88 = &local_74;
        FUN_146c3574a(lVar8,*(undefined4 *)*param_1,&local_5c,&local_68);
        pdVar9 = (double *)param_1[2];
        pdVar10 = (double *)param_1[4];
        dVar1 = *pdVar9;
        dVar2 = pdVar9[1];
        dVar3 = pdVar9[2];
        *pdVar10 = (double)local_74 * dVar3 + (double)local_68 * dVar2 + (double)local_5c * dVar1;
        pdVar10[1] = (double)local_70 * dVar3 + (double)local_64 * dVar2 + (double)local_58 * dVar1;
        pdVar10[2] = (double)local_6c * dVar3 + (double)local_60 * dVar2 + (double)local_54 * dVar1;
        uVar12 = CONCAT71((int7)((ulonglong)pdVar10 >> 8),1);
        goto LAB_143bdbe6a;
      }
    }
  }
  uVar12 = 0;
LAB_143bdbe6a:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdc0e6 FUN_143bdc0e6 body=200 status=ok
// SIG undefined FUN_143bdc0e6(void)

undefined8 FUN_143bdc0e6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_2 + 0x208) == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar1 == 0)) ||
     (uVar4 = *(int *)*param_1 * 3,
     *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)(uVar4 >> 9) * 8) +
             (ulonglong)(uVar4 & 0x1ff) * 4) < 0)) {
    uVar5 = 0;
  }
  else {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    local_68 = &local_58;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    FUN_146c35c54(lVar1,*(int *)*param_1,&local_38,&local_48);
    puVar2 = (undefined8 *)param_1[1];
    *puVar2 = CONCAT44(uStack_34,local_38);
    puVar2[1] = CONCAT44(uStack_2c,uStack_30);
    puVar2 = (undefined8 *)param_1[2];
    *puVar2 = CONCAT44(uStack_44,local_48);
    puVar2[1] = CONCAT44(uStack_3c,uStack_40);
    puVar3 = (undefined4 *)param_1[3];
    *puVar3 = local_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
    uVar5 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdc1b0 FUN_143bdc1b0 body=503 status=ok
// SIG undefined FUN_143bdc1b0(void)

float * FUN_143bdc1b0(float *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  float *pfVar5;
  double *pdVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_3 + 0x208) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x208) + 0x40), lVar4 != 0)) {
    uVar7 = *(int *)*param_2 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4)) {
      local_68 = 0.0;
      fStack_64 = 0.0;
      fStack_60 = 0.0;
      fStack_5c = 1.0;
      local_78 = 0.0;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      local_98 = &local_88;
      local_88 = 0.0;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 1.0;
      FUN_146c35c54(lVar4,*(int *)*param_2,&local_68,&local_78);
      pdVar6 = (double *)param_2[1];
      dVar1 = *pdVar6;
      dVar2 = pdVar6[1];
      dVar3 = pdVar6[2];
      *(undefined1 *)param_2[2] = 1;
      *param_1 = (float)((double)local_88 * dVar3) +
                 (float)((double)local_78 * dVar2) + (float)((double)local_68 * dVar1);
      param_1[1] = (float)((double)fStack_84 * dVar3) +
                   (float)((double)fStack_74 * dVar2) + (float)((double)fStack_64 * dVar1);
      param_1[2] = (float)((double)fStack_80 * dVar3) +
                   (float)((double)fStack_70 * dVar2) + (float)((double)fStack_60 * dVar1);
      param_1[3] = (float)((double)fStack_7c * dVar3) +
                   (float)((double)fStack_6c * dVar2) + (float)((double)fStack_5c * dVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
    }
  }
  pfVar5 = (float *)param_2[3];
  fVar8 = pfVar5[1];
  fVar9 = pfVar5[2];
  fVar10 = pfVar5[3];
  *param_1 = *pfVar5;
  param_1[1] = fVar8;
  param_1[2] = fVar9;
  param_1[3] = fVar10;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdc3ae FUN_143bdc3ae body=1392 status=ok
// SIG undefined FUN_143bdc3ae(void)

void FUN_143bdc3ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte *pbVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 auStack_378 [40];
  undefined1 local_350 [4];
  undefined1 local_34c [4];
  longlong *local_348 [2];
  wchar_t *local_338;
  undefined4 local_330;
  undefined1 local_328 [8];
  undefined8 *local_320;
  int local_2c8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  byte local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined8 local_268;
  float local_260;
  double local_258;
  undefined1 local_250;
  byte local_24f;
  byte local_24e;
  byte local_24d;
  byte local_24c;
  byte local_24b;
  byte local_24a;
  byte local_249;
  byte local_248;
  undefined1 local_247;
  undefined8 local_240;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined2 local_178;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  plVar7 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149fab260;
  plVar1 = plVar7 + 2;
  FUN_146bffece(plVar1,param_2);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(char *)(*param_1 + 1) == '\x01') {
    plVar8 = (longlong *)FUN_14001cc68(0xe0,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14af7cde0;
    plVar11 = plVar8 + 2;
    FUN_146ba21d6(plVar11,plVar1,1);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_143bdc49f;
    }
  }
  else {
    plVar11 = (longlong *)0x0;
  }
  plVar8 = (longlong *)0x0;
LAB_143bdc49f:
  FUN_1485c2682(local_328);
  plVar3 = local_298;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_2a0 = plVar1;
  plVar6 = plVar7;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_298 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      puVar5 = (undefined8 *)*local_298;
      local_298 = plVar7;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar6 = local_298;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar6 = local_298;
      }
    }
  }
  local_298 = plVar6;
  plVar3 = local_288;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_290 = plVar11;
  plVar11 = plVar8;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_288 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      puVar5 = (undefined8 *)*local_288;
      local_288 = plVar8;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar11 = local_288;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar11 = local_288;
      }
    }
  }
  local_288 = plVar11;
  pbVar9 = (byte *)*param_1;
  local_24f = *pbVar9;
  local_280 = pbVar9[0x10];
  local_27c = *(undefined4 *)(pbVar9 + 0x14);
  local_268 = 0;
  local_260 = *(float *)(pbVar9 + 4);
  if (1.0 <= local_260) {
    local_260 = 1.0;
  }
  if (local_260 <= 0.0) {
    local_260 = 0.0;
  }
  local_250 = 2;
  if (pbVar9[2] != 2) {
    local_250 = pbVar9[2] == 1;
  }
  pcVar10 = (char *)param_1[1];
  local_278 = local_27c;
  if (*pcVar10 == '\0') {
    local_258 = (double)FUN_14845dcce(plVar1,*(undefined4 *)(pcVar10 + 4),0);
    pbVar9 = (byte *)*param_1;
  }
  else {
    local_258 = (double)*(float *)(pcVar10 + 8);
  }
  local_24e = local_24f ^ 1;
  local_24d = pbVar9[0xb];
  local_24c = pbVar9[0xc];
  local_24b = pbVar9[0xd];
  local_249 = pbVar9[0xe];
  local_248 = pbVar9[0xf];
  local_230 = 1;
  local_234 = 1;
  if ((ulonglong)pbVar9[8] < 4) {
    local_234 = *(undefined4 *)(&DAT_14af7d0fc + (ulonglong)pbVar9[8] * 4);
  }
  if ((ulonglong)pbVar9[9] < 4) {
    local_230 = *(undefined4 *)(&DAT_14af7d0fc + (ulonglong)pbVar9[9] * 4);
  }
  local_22c = 1;
  if ((ulonglong)pbVar9[10] < 4) {
    local_22c = *(undefined4 *)(&DAT_14af7d0fc + (ulonglong)pbVar9[10] * 4);
  }
  local_24a = pbVar9[1];
  local_247 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_240 = 0x4046800000000000;
  local_1e0 = DAT_14c846510;
  uStack_1d8 = DAT_14c846518;
  local_1d0 = DAT_14c846520;
  local_1f8 = (undefined4)DAT_14c8464e0;
  uStack_1f4 = DAT_14c8464e0._4_4_;
  uStack_1f0 = (undefined4)DAT_14c8464e8;
  uStack_1ec = DAT_14c8464e8._4_4_;
  local_1e8 = DAT_14c8464f0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0x3ff0000000000000;
  local_190 = DAT_14c846510;
  uStack_188 = DAT_14c846518;
  local_180 = DAT_14c846520;
  local_198 = DAT_14c8464f0;
  local_1a8 = (undefined4)DAT_14c8464e0;
  uStack_1a4 = DAT_14c8464e0._4_4_;
  uStack_1a0 = (undefined4)DAT_14c8464e8;
  uStack_19c = DAT_14c8464e8._4_4_;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0x3ff0000000000000;
  local_178 = 0x100;
  FUN_143b56d04(local_328,0);
  puVar5 = local_320;
  if (local_2c8 == 0) {
    local_320 = (undefined8 *)0x0;
    FUN_146c00942(param_2,puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    FUN_146c00942(param_2,plVar1);
    local_338 = L"ApplyUniformRemesh_ComputeError";
    local_330 = 0x1f;
    FUN_1446e940c(local_34c,&local_338);
    local_338 = L"UGeometryScriptLibrary_MeshRemeshFunctions";
    local_330 = 0x2a;
    FUN_1446e940c(local_350,&local_338);
    local_338 = L"ApplyUniformRemesh: Error computing result, returning input mesh";
    local_330 = 0x40;
    FUN_140208c1e(local_348,local_350,local_34c,&local_338);
    FUN_143ba90d7(*(undefined8 *)param_1[2],2,local_348);
    if (local_348[0] != (longlong *)0x0) {
      (**(code **)(*local_348[0] + 0x10))();
    }
  }
  pcVar10 = (char *)*param_1;
  if (pcVar10[0x18] == '\x01') {
    FUN_146c09afc(param_2,0);
    pcVar10 = (char *)*param_1;
  }
  if (*pcVar10 == '\x01') {
    uVar12 = 0;
    FUN_14582eef4(param_2,0);
    FUN_14582ed12(param_2);
    if (0 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x38)) {
      uVar12 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    FUN_146c39810(uVar12,0);
    FUN_14582ed9a(*(undefined8 *)(param_2 + 0x208));
  }
  FUN_1485c289c(local_328);
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdc932 FUN_143bdc932 body=476 status=ok
// SIG undefined FUN_143bdc932(void)

void FUN_143bdc932(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  wchar_t *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  double local_48;
  undefined8 local_40;
  undefined4 local_38;
  float local_34;
  undefined1 local_30;
  undefined1 local_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0x3ff0000000000000;
  local_38 = 0;
  local_2f = 1;
  pfVar1 = (float *)*param_1;
  local_48 = (double)(*pfVar1 + *pfVar1);
  local_34 = pfVar1[2];
  local_30 = *(undefined1 *)(pfVar1 + 1);
  local_a0 = param_2;
  cVar3 = FUN_14831a1be();
  if (cVar3 == '\0') {
    local_b0 = L"SnapMeshOpenBoundaries_Error";
    local_a8 = 0x1c;
    FUN_1446e940c(local_c4,&local_b0);
    local_b0 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_a8 = 0x2a;
    FUN_1446e940c(local_c8,&local_b0);
    local_b0 = L"SnapMeshOpenBoundaries: SnapMeshOpenBoundaries Operation returned error flag";
    local_a8 = 0x4c;
    FUN_140208c1e(local_c0,local_c8,local_c4,&local_b0);
    FUN_143ba90d7(*(undefined8 *)param_1[1],3,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdcb10 FUN_143bdcb10 body=446 status=ok
// SIG undefined FUN_143bdcb10(void)

void FUN_143bdcb10(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  longlong *local_b0 [2];
  wchar_t *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  double local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0x80;
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = (double)(*(float *)*param_1 + *(float *)*param_1);
  local_90 = param_2;
  cVar2 = FUN_148319268();
  if (cVar2 == '\0') {
    local_a0 = L"ResolveMeshTJunctions_Error";
    local_98 = 0x1b;
    FUN_1446e940c(local_b4,&local_a0);
    local_a0 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_98 = 0x2a;
    FUN_1446e940c(local_b8,&local_a0);
    local_a0 = L"ResolveMeshTJunctions: ResolveTJunctions Operation returned error flag";
    local_98 = 0x46;
    FUN_140208c1e(local_b0,local_b8,local_b4,&local_a0);
    FUN_143ba90d7(*(undefined8 *)param_1[1],3,local_b0);
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_80 >> 0x20;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_1447a08a2(&local_88,0);
  }
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    FUN_1446efbd8(local_78,0);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdccd0 FUN_143bdccd0 body=305 status=ok
// SIG undefined FUN_143bdccd0(void)

void FUN_143bdccd0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined **local_90;
  undefined8 local_88;
  double local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_48;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = &PTR_FUN_149f36300;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_80 = (double)*(float *)*param_1;
  local_78 = *(undefined1 *)((float *)*param_1 + 1);
  local_88 = param_2;
  cVar1 = FUN_146c3d996();
  if (cVar1 == '\0') {
    local_38 = L"WeldMeshEdges_Error";
    local_30 = 0x13;
    FUN_1446e940c(local_a4,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_30 = 0x2a;
    FUN_1446e940c(local_a8,&local_38);
    local_38 = L"WeldMeshEdges: Weld Operation returned error flag";
    local_30 = 0x31;
    FUN_140208c1e(local_a0,local_a8,local_a4,&local_38);
    FUN_143ba90d7(*(undefined8 *)param_1[1],3,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdce02 FUN_143bdce02 body=78 status=ok
// SIG undefined FUN_143bdce02(void)

void FUN_143bdce02(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pfVar1 = (float *)*param_1;
  local_10 = param_2;
  FUN_146bc6318(&local_10,(double)*pfVar1,(double)pfVar1[1],pfVar1[2]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdce52 FUN_143bdce52 body=1548 status=ok
// SIG undefined FUN_143bdce52(void)

void FUN_143bdce52(longlong *param_1,wchar_t *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_358 [32];
  undefined8 **local_338;
  undefined1 local_330;
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  undefined8 *local_318;
  undefined4 local_310;
  longlong *local_308;
  undefined4 local_300;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 *local_2e8;
  undefined4 local_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  undefined8 *local_2b8;
  undefined8 uStack_2b0;
  undefined **local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  double local_288;
  double local_280;
  uint local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int local_258;
  undefined4 uStack_254;
  undefined1 local_250;
  undefined8 local_248;
  int iStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  longlong local_228 [5];
  wchar_t *local_200;
  undefined1 *local_1f8;
  ulonglong uStack_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  longlong local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_2a0 = &PTR_FUN_14ae73d90;
  local_268 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  local_258 = 0;
  uStack_254 = 0;
  local_250 = 0;
  pbVar1 = (byte *)*param_1;
  local_278 = (uint)*pbVar1;
  local_290 = 2;
  local_280 = (double)*(float *)(pbVar1 + 0xc);
  local_288 = (double)*(float *)(pbVar1 + 0x14);
  local_274 = *(undefined4 *)(pbVar1 + 0x10);
  local_270 = *(undefined4 *)(pbVar1 + 4);
  local_2b8 = (undefined8 *)0x0;
  local_198 = DAT_14c846520;
  local_1a8 = (undefined4 *)DAT_14c846510;
  uStack_1a0 = DAT_14c846518;
  local_138 = (undefined4)DAT_14c8464e0;
  uStack_134 = DAT_14c8464e0._4_4_;
  uStack_130 = (undefined4)DAT_14c8464e8;
  uStack_12c = DAT_14c8464e8._4_4_;
  local_128 = DAT_14c8464f0;
  uStack_2b0 = 1;
  local_298 = param_2;
  FUN_1485c29b8(&local_2b8,0);
  local_2b8[2] = 0;
  *local_2b8 = 0;
  local_2b8[1] = 0;
  local_2b8[3] = 0x3ff0000000000000;
  local_2b8[4] = CONCAT44(uStack_134,local_138);
  local_2b8[5] = CONCAT44(uStack_12c,uStack_130);
  local_2b8[6] = local_128;
  *(undefined4 *)(local_2b8 + 7) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)local_2b8 + 0x3c) = local_1a8._4_4_;
  *(undefined4 *)(local_2b8 + 8) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)local_2b8 + 0x44) = uStack_1a0._4_4_;
  local_2b8[9] = local_198;
  FUN_146ba21d6(&local_138,param_2,1);
  local_2c8 = (longlong *)0x0;
  uStack_2c0 = 1;
  FUN_148474558(&local_2c8,0);
  *local_2c8 = (longlong)&local_138;
  local_180 = 0;
  local_178 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_174 = 0xffffffff00000080;
  local_16c = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0x4000000000000000;
  local_140 = 2;
  local_2d8 = 0;
  uStack_2d0 = 0;
  iVar6 = 0;
  uVar5 = 0;
  local_1a8 = &local_138;
  if (*(char *)*param_1 == '\0') {
    FUN_146bef8a8(&local_1a8,1);
    iVar6 = (int)uStack_2d0;
    uVar5 = uStack_2d0._4_4_;
  }
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,iVar6 + 1U);
  if (uVar5 < iVar6 + 1U) {
    FUN_14847467a(&local_2d8,iVar6);
  }
  *(undefined8 **)(local_2d8 + (longlong)iVar6 * 8) = &local_1a8;
  local_338 = &local_2e8;
  local_2e8 = local_2b8;
  local_2e0 = (undefined4)uStack_2b0;
  local_2f8 = local_2d8;
  local_2f0 = (int)uStack_2d0;
  local_308 = local_2c8;
  local_300 = (undefined4)uStack_2c0;
  local_318 = local_2b8;
  local_310 = (undefined4)uStack_2b0;
  local_330 = 0;
  FUN_14835ec30(&local_2a0);
  if (0 < *(int *)(*param_1 + 8)) {
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (undefined1 *)0x0;
    uStack_1f0 = 0;
    local_1cc = 0x80;
    uStack_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_200 = param_2;
    FUN_148331be6(&local_200,&uStack_260);
    local_248 = (wchar_t *)0x0;
    local_238 = (longlong *)0x0;
    FUN_146c83692(&local_200,*(undefined4 *)(*param_1 + 8),0,&local_248);
    if (local_248 != (wchar_t *)0x0) {
      plVar4 = local_238;
      if (local_238 == (longlong *)0x0) {
        plVar4 = local_228;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_140619b9c(&local_1f8,&local_248);
    if (CONCAT44(uStack_25c,uStack_260) != 0) {
      FUN_1400020a8();
    }
    uStack_260 = (undefined4)local_248;
    uStack_25c = local_248._4_4_;
    local_258 = iStack_240;
    uStack_254 = uStack_23c;
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    uVar2 = uStack_1f0 >> 0x20;
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_1447a08a2(&local_1f8,0);
    }
    uStack_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1d0 = 0;
    if (0x80 < local_1cc) {
      local_1cc = 0x80;
      FUN_1446efbd8(local_1e8,0);
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < local_258) {
    local_248 = local_298;
    local_1f8 = local_31c;
    local_200 = (wchar_t *)&DAT_142971dd8;
    cVar3 = FUN_146bc6232(&local_248,&uStack_260,1);
    if (cVar3 == '\0') {
      local_250 = 1;
    }
    if (*(int *)(param_2 + 0xb8) == 0) {
      local_200 = L"RemoveHiddenTriangles_EmptyMesh";
      local_1f8._0_4_ = 0x1f;
      FUN_1446e940c(local_31c,&local_200);
      local_200 = L"UGeometryScriptLibrary_MeshRepairFunctions";
      local_1f8._0_4_ = 0x2a;
      FUN_1446e940c(local_320,&local_200);
      local_200 = L"RemoveHiddenTriangles: Operation resulted in an empty mesh";
      local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,0x3a);
      FUN_140208c1e(&local_248,local_320,local_31c,&local_200);
      FUN_143ba90d7(*(undefined8 *)param_1[1],3,&local_248);
      if (local_248 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_248 + 0x10))();
      }
    }
    if (*(char *)(*param_1 + 0x18) == '\x01') {
      FUN_146c09afc(param_2,0);
    }
  }
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  local_158 = 0;
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(&uStack_1a0);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1457e5b52(&local_138);
  if (local_2b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_2a0 = &PTR_FUN_14ae73d90;
  if (CONCAT44(uStack_25c,uStack_260) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdd460 FUN_143bdd460 body=173 status=ok
// SIG undefined FUN_143bdd460(void)

void FUN_143bdd460(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)*param_1 == '\x01') {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_28 = param_2;
    FUN_146bc8e62(&local_28,&local_98);
    FUN_146bc8622(&local_98);
  }
  if ((*(char *)param_1[1] == '\x01') && (*(longlong *)(param_2 + 0x208) != 0)) {
    FUN_146c196fe(*(longlong *)(param_2 + 0x208),1);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdd50e FUN_143bdd50e body=1434 status=ok
// SIG undefined FUN_143bdd50e(void)

void FUN_143bdd50e(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined1 local_4b0;
  undefined1 local_4a8;
  undefined1 local_4a0;
  undefined1 local_498;
  longlong *local_490;
  longlong local_488;
  undefined1 local_479;
  undefined1 local_478 [80];
  undefined1 local_428 [80];
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined1 local_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1a4;
  undefined1 local_1a2;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  cVar2 = *(char *)*param_1;
  if (cVar2 != '\0') {
    FUN_1482c3c14(&local_2f8,param_2);
    local_1c0 = 0;
    local_1bc = 0;
    local_1a4 = 0;
    if (*(longlong *)(param_2 + 0x208) != 0) {
      local_1a2 = 1;
      local_1b8 = 0x3ee4f8b588e368f1;
      FUN_146c196fe(*(longlong *)(param_2 + 0x208),1);
    }
    local_398 = 0;
    local_390 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_38c = 0xffffffff00000080;
    local_384 = 0;
    local_378 = 0;
    local_370 = 0;
    local_348 = 0;
    local_340 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_33c = 0xffffffff00000080;
    local_334 = 0;
    local_328 = 0;
    local_320 = 0;
    local_318 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_498 = 1;
    local_4a0 = 1;
    local_4a8 = 0;
    local_4b0 = 0;
    local_4b8 = 0;
    FUN_1482af724(&local_3b8,param_2,1,0);
    FUN_148349f0e(local_478,&local_3b8);
    FUN_14834a01c(local_428,&local_368);
    local_3d8 = local_318;
    local_3d0 = (undefined4)local_310;
    uStack_3cc = local_310._4_4_;
    uStack_3c8 = (undefined4)uStack_308;
    uStack_3c4 = uStack_308._4_4_;
    local_310 = 0;
    uStack_308 = 0;
    local_3c0 = 1;
    FUN_14831cf9c(&local_2f8,local_478);
    local_180 = *(undefined8 *)(*param_1 + 0x10);
    local_178 = 0x200000001;
    local_188 = 0x7f7fffff;
    (**(code **)(local_2f8 + 0x60))(&local_2f8);
    *(undefined1 *)param_1[1] = 1;
    FUN_1482f5f8c(&local_3b8);
    FUN_1482fed12(&local_2f8);
    if (cVar2 == '\x02') goto LAB_143bdda56;
  }
  puVar3 = (undefined8 *)param_1[2];
  local_3b8 = 0;
  uStack_3b0 = 0;
  uVar12 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar11 = 0;
  if ((uVar12 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar6 = 1;
    uVar8 = 1;
    if (1 < (int)uVar12) {
      uVar6 = uVar12;
    }
    do {
      uVar11 = uVar6;
      if (uVar6 == uVar8) break;
      uVar10 = uVar8 >> 9;
      uVar13 = uVar8 & 0x1ff;
      uVar11 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar11 != uVar12) {
    do {
      dVar15 = (double)FUN_146c14650(param_2,uVar11);
      uVar5 = uStack_3b0;
      if (dVar15 < *(double *)(puVar3[1] + 8)) {
        lVar14 = (longlong)(int)uStack_3b0;
        uVar6 = (int)uStack_3b0 + 1;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar6);
        if (uStack_3b0._4_4_ < uVar6) {
          FUN_1446f48e2(&local_3b8,uVar5 & 0xffffffff);
        }
        *(uint *)(local_3b8 + lVar14 * 4) = uVar11;
      }
      uVar6 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar8 = uVar6;
        if (uVar6 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar8 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar8;
    } while (uVar11 != uVar12);
  }
  uStack_2f0 = &local_479;
  local_2f8 = &DAT_142971dd8;
  local_488 = param_2;
  FUN_146bc6232(&local_488,&local_3b8,1);
  *(undefined1 *)*puVar3 = 1;
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[3];
  local_3b8 = 0;
  uStack_3b0 = 0;
  uVar12 = *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4);
  uVar11 = 0;
  if ((uVar12 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x1d8) - 1U))) {
    uVar6 = 1;
    uVar8 = 1;
    if (1 < (int)uVar12) {
      uVar6 = uVar12;
    }
    do {
      uVar11 = uVar6;
      if (uVar6 == uVar8) break;
      uVar10 = uVar8 >> 9;
      uVar13 = uVar8 & 0x1ff;
      uVar11 = uVar8;
      uVar8 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x1d8))[uVar10] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  local_490 = param_1;
  if (uVar11 != uVar12) {
    do {
      puVar1 = (ulonglong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)((uVar11 & 0x1ff) << 4));
      uVar5 = *puVar1;
      uStack_2f0 = (undefined1 *)puVar1[1];
      local_2f8._4_4_ = (uint)(uVar5 >> 0x20);
      lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_2f8._4_4_ >> 9) * 8);
      uVar9 = (ulonglong)local_2f8._4_4_ & 0x1ff;
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar5 >> 9 & 0x7fffff) * 8);
      uVar7 = uVar5 & 0x1ff;
      dVar15 = *(double *)(lVar14 + uVar9 * 0x18) - *(double *)(lVar4 + uVar7 * 0x18);
      dVar16 = *(double *)(lVar14 + 8 + uVar9 * 0x18) - *(double *)(lVar4 + 8 + uVar7 * 0x18);
      dVar17 = *(double *)(lVar14 + 0x10 + uVar9 * 0x18) - *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
      if (SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar16 * dVar16) < *(double *)(puVar3[1] + 0x10))
      {
        local_2f8 = (undefined *)uVar5;
        FUN_1449e3bb0(&local_3b8,&uStack_2f0);
        if (uStack_2f0._4_4_ != -1) {
          FUN_1449e3bb0(&local_3b8,(longlong)&uStack_2f0 + 4);
        }
      }
      uVar6 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar8 = uVar6;
        if (uVar6 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar8 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x1d8) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar8;
    } while (uVar11 != uVar12);
  }
  uStack_2f0 = &local_479;
  local_2f8 = &DAT_142971dd8;
  local_488 = param_2;
  FUN_146bc6232(&local_488,&local_3b8,1);
  *(undefined1 *)*puVar3 = 1;
  param_1 = local_490;
  if (local_3b8 != 0) {
    FUN_1400020a8();
    param_1 = local_490;
  }
LAB_143bdda56:
  if ((*(char *)param_1[1] == '\x01') && (*(char *)(*param_1 + 0x18) == '\x01')) {
    FUN_146c09afc(param_2,0);
  }
  if ((local_60 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bddb3e FUN_143bddb3e body=1598 status=ok
// SIG undefined FUN_143bddb3e(void)

void FUN_143bddb3e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_10c [4];
  ulonglong local_108;
  uint local_fc;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar1 = *(char *)*param_1;
  local_118 = param_1;
  if (cVar1 == '\x03') {
    local_a0 = &DAT_100000002;
    uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar9 = 0;
    if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar7) {
        uVar4 = uVar7;
      }
      do {
        uVar6 = uVar10;
        uVar9 = uVar4;
        if (uVar4 == uVar6) break;
        uVar10 = uVar6 + 1;
        uVar9 = uVar6;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6 >> 9] +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        local_f8 = (ulonglong)(uVar9 & 0x3fffffff);
        FUN_1483b983a(&local_98,&local_108,&local_f8,0);
        local_f8 = (ulonglong)(uVar9 & 0x3fffffff | 0x40000000);
        FUN_1483b983a(&local_98,&local_108,&local_f8);
        local_f8 = (ulonglong)(uVar9 & 0x3fffffff | 0x80000000);
        FUN_1483b983a(&local_98,&local_108,&local_f8);
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar10 = uVar7;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar7);
    }
  }
  else if (cVar1 == '\x01') {
    local_a0 = &DAT_100000004;
    uVar7 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar9 = 0;
    if ((uVar7 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar6 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        local_f8 = (ulonglong)uVar9;
        FUN_1483b983a(&local_98,&local_108,&local_f8,0);
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar10 = uVar7;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar7);
    }
  }
  else if (cVar1 == '\0') {
    local_a0 = &DAT_100000001;
    uVar7 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar9 = 0;
    if ((uVar7 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar7) {
        uVar10 = uVar7;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar6 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar6] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar7) {
      do {
        local_f8 = (ulonglong)uVar9;
        FUN_1483b983a(&local_98,&local_108,&local_f8,0);
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar7) {
          uVar10 = uVar7;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x28) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar7);
    }
  }
  else {
    local_a0 = (undefined1 *)0x200000004;
    uVar11 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0x80;
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    uVar9 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar7 = 1;
      if (1 < (int)uVar9) {
        uVar11 = (ulonglong)uVar9;
      }
      do {
        uVar10 = uVar7;
        if ((uint)uVar11 == uVar10) goto LAB_143bddf6f;
        uVar7 = uVar10 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10 >> 9] +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar11 = (ulonglong)uVar10;
    }
LAB_143bddf6f:
    if ((uint)uVar11 != uVar9) {
      do {
        local_fc = FUN_146bc96d4(param_2,uVar11);
        if ((int)uStack_f0 != local_c4) {
          puVar5 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar5 = local_c0;
          }
          for (iVar2 = *(int *)(puVar5 + (ulonglong)(local_b0 - 1U & local_fc) * 4); iVar2 != -1;
              iVar2 = *(int *)(local_f8 + (longlong)iVar2 * 0xc + 4)) {
            if (*(uint *)(local_f8 + (longlong)iVar2 * 0xc) == local_fc) goto LAB_143bde01a;
          }
        }
        local_108 = uVar11 | (ulonglong)local_fc << 0x20;
        FUN_1483b983a(&local_98,local_10c,&local_108,0);
        FUN_1447cbafe(&local_f8,&local_108,&local_fc);
LAB_143bde01a:
        uVar7 = (int)uVar11 + 1;
        if ((int)uVar7 < (int)uVar9) {
          uVar7 = uVar9;
        }
        do {
          if (uVar7 - 1 == (int)uVar11) {
            uVar11 = (ulonglong)uVar7;
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar11 != uVar9);
      local_b0 = 0;
      if (local_b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar11 = uStack_f0 >> 0x20;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    if ((int)uVar11 != 0) {
      FUN_1447a08a2(&local_f8,0);
    }
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      FUN_1446efbd8(local_e8,0);
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  puVar3 = *(undefined8 **)local_118[1];
  *puVar3 = local_a0;
  FUN_1484d24e8(puVar3 + 1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bde17d FUN_143bde17d body=1762 status=ok
// SIG undefined FUN_143bde17d(void)

void FUN_143bde17d(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 *local_110;
  undefined1 local_108 [4];
  uint local_104;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_118 = param_1;
  local_110 = param_2;
  if (param_3 == '\x03') {
    local_a0 = &DAT_100000002;
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar9 = 0;
    if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar3 = 1;
      if (1 < (int)uVar6) {
        uVar3 = uVar6;
      }
      do {
        uVar5 = uVar11;
        uVar9 = uVar3;
        if (uVar3 == uVar5) break;
        uVar11 = uVar5 + 1;
        uVar9 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5 >> 9] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
    if (uVar9 != uVar6) {
      do {
        local_f8 = CONCAT44(local_f8._4_4_,uVar9);
        cVar2 = (*(code *)*param_4)(param_4[1],&local_f8);
        if (cVar2 != '\0') {
          iVar7 = 0;
          do {
            local_f8 = (ulonglong)(iVar7 << 0x1e | iVar7 + uVar9 * 4 >> 2);
            FUN_1483b983a(&local_98,&local_100,&local_f8,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 != 3);
        }
        uVar11 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar6) {
          uVar11 = uVar6;
        }
        do {
          uVar3 = uVar11;
          if (uVar11 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar3 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_118 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar3;
      } while (uVar9 != uVar6);
    }
  }
  else if (param_3 == '\x01') {
    local_a0 = &DAT_100000004;
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar9 = 0;
    if ((uVar6 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar3 = 1;
      if (1 < (int)uVar6) {
        uVar11 = uVar6;
      }
      do {
        uVar9 = uVar11;
        if (uVar11 == uVar3) break;
        uVar5 = uVar3 >> 9;
        uVar10 = uVar3 & 0x1ff;
        uVar9 = uVar3;
        uVar3 = uVar3 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar10 * 2) - 1U));
    }
    if (uVar9 != uVar6) {
      do {
        local_f8 = CONCAT44(local_f8._4_4_,uVar9);
        cVar2 = (*(code *)*param_4)(param_4[1],&local_f8);
        if (cVar2 != '\0') {
          local_f8 = (ulonglong)uVar9;
          FUN_1483b983a(&local_98,&local_100,&local_f8,0);
        }
        uVar11 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar6) {
          uVar11 = uVar6;
        }
        do {
          uVar3 = uVar11;
          if (uVar11 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar3 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_118 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar3;
      } while (uVar9 != uVar6);
    }
  }
  else if (param_3 == '\0') {
    local_a0 = &DAT_100000001;
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar9 = 0;
    if ((uVar6 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar3 = 1;
      if (1 < (int)uVar6) {
        uVar11 = uVar6;
      }
      do {
        uVar9 = uVar11;
        if (uVar11 == uVar3) break;
        uVar5 = uVar3 >> 9;
        uVar10 = uVar3 & 0x1ff;
        uVar9 = uVar3;
        uVar3 = uVar3 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar10 * 2) - 1U));
    }
    if (uVar9 != uVar6) {
      do {
        local_f8 = CONCAT44(local_f8._4_4_,uVar9);
        cVar2 = (*(code *)*param_4)(param_4[1],&local_f8);
        if (cVar2 != '\0') {
          lVar8 = *(longlong *)(*(longlong *)(local_118 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
          uStack_f0 = CONCAT44(uStack_f0._4_4_,
                               *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc));
          local_f8 = *(ulonglong *)(lVar8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          lVar8 = 0;
          do {
            local_100 = (ulonglong)*(uint *)((longlong)&local_f8 + lVar8 * 4);
            FUN_1483b983a(&local_98,&local_104,&local_100,0);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
        }
        uVar11 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar6) {
          uVar11 = uVar6;
        }
        do {
          uVar3 = uVar11;
          if (uVar11 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar3 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_118 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar3;
      } while (uVar9 != uVar6);
    }
  }
  else {
    local_a0 = (undefined1 *)0x200000004;
    uVar12 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0x80;
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    uVar9 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar12 = 1;
      uVar6 = 1;
      if (1 < (int)uVar9) {
        uVar12 = (ulonglong)uVar9;
      }
      do {
        uVar11 = uVar6;
        if ((uint)uVar12 == uVar11) goto LAB_143bde630;
        uVar6 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar11 >> 9] +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar12 = (ulonglong)uVar11;
    }
LAB_143bde630:
    if ((uint)uVar12 != uVar9) {
      do {
        local_100 = CONCAT44(local_100._4_4_,(int)uVar12);
        cVar2 = (*(code *)*param_4)(param_4[1],&local_100);
        if (cVar2 != '\0') {
          local_104 = FUN_146bc96d4(param_1,uVar12);
          if ((int)uStack_f0 != local_c4) {
            puVar4 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar4 = local_c0;
            }
            for (iVar7 = *(int *)(puVar4 + (ulonglong)(local_b0 - 1U & local_104) * 4); iVar7 != -1;
                iVar7 = *(int *)(local_f8 + (longlong)iVar7 * 0xc + 4)) {
              if (*(uint *)(local_f8 + (longlong)iVar7 * 0xc) == local_104) goto LAB_143bde65f;
            }
          }
          local_100 = uVar12 | (ulonglong)local_104 << 0x20;
          FUN_1483b983a(&local_98,local_108,&local_100,0);
          FUN_1447cbafe(&local_f8,&local_100,&local_104);
        }
LAB_143bde65f:
        uVar6 = (int)uVar12 + 1;
        if ((int)uVar6 < (int)uVar9) {
          uVar6 = uVar9;
        }
        do {
          if (uVar6 - 1 == (int)uVar12) {
            uVar12 = (ulonglong)uVar6;
            break;
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar12 != uVar9);
      local_b0 = 0;
      if (local_b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar12 = uStack_f0 >> 0x20;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    if ((int)uVar12 != 0) {
      FUN_1447a08a2(&local_f8,0);
    }
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      FUN_1446efbd8(local_e8,0);
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  puVar1 = (undefined8 *)*local_110;
  *puVar1 = local_a0;
  FUN_1484d24e8(puVar1 + 1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bde886 FUN_143bde886 body=30 status=ok
// SIG undefined FUN_143bde886(void)

bool FUN_143bde886(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_146bc96d4(*param_1,*param_2);
  return iVar1 == *(int *)(param_1 + 1);
}



// FUNCTION 143bde8ca FUN_143bde8ca body=76 status=ok
// SIG undefined FUN_143bde8ca(void)

void FUN_143bde8ca(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bde918 FUN_143bde918 body=201 status=ok
// SIG undefined FUN_143bde918(void)

void FUN_143bde918(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *param_2;
  FUN_1447cbafe(*param_1,&local_30,&local_24,0);
  lVar1 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(local_24 >> 9) * 8);
  local_30 = *(undefined8 *)(lVar1 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  local_28 = *(undefined4 *)(lVar1 + 8 + (ulonglong)(local_24 & 0x1ff) * 0xc);
  FUN_1447cbafe(param_1[1],local_34,&local_30,0);
  FUN_1447cbafe(param_1[1],local_34,(longlong)&local_30 + 4,0);
  FUN_1447cbafe(param_1[1],local_34,&local_28,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdea44 FUN_143bdea44 body=168 status=ok
// SIG undefined FUN_143bdea44(void)

void FUN_143bdea44(undefined8 *param_1,uint *param_2)

{
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *param_2;
  FUN_1447cbafe(*param_1,&local_30,&local_24,0);
  local_30 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1[2] + 0x1c0) + (ulonglong)(local_24 >> 9) * 8) +
              (ulonglong)((local_24 & 0x1ff) << 4));
  FUN_1447cbafe(param_1[1],local_34,&local_30,0);
  FUN_1447cbafe(param_1[1],local_34,(longlong)&local_30 + 4,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdeb50 FUN_143bdeb50 body=90 status=ok
// SIG undefined FUN_143bdeb50(void)

void FUN_143bdeb50(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[1];
  local_10 = &local_20;
  local_18 = FUN_143bdebac;
  FUN_14838980a(*param_1,*param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdebac FUN_143bdebac body=79 status=ok
// SIG undefined FUN_143bdebac(void)

void FUN_143bdebac(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdebfc FUN_143bdebfc body=72 status=ok
// SIG undefined FUN_143bdebfc(void)

void FUN_143bdebfc(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdec46 FUN_143bdec46 body=253 status=ok
// SIG undefined FUN_143bdec46(void)

void FUN_143bdec46(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8) +
             (ulonglong)((*param_2 & 0x1ff) << 4));
    plVar7 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar1[8];
    }
    uVar4 = (int)plVar1[9] - 1;
    uVar6 = (uint)uVar2;
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)(uVar4 & uVar6) * 4);
    if (iVar5 != -1) {
      lVar3 = *plVar1;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0xc) == uVar6) {
          uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
          iVar5 = *(int *)((longlong)plVar7 + (ulonglong)(uVar4 & uVar6) * 4);
          goto LAB_143bdecfe;
        }
        iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
LAB_143bdecd9:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143bdecfe:
  if (iVar5 == -1) goto LAB_143bdecd9;
  if (*(uint *)(lVar3 + (longlong)iVar5 * 0xc) == uVar6) {
    local_30 = param_1[2];
    local_20 = &local_30;
    local_28 = FUN_143bded44;
    FUN_14838980a(param_1[1]);
    goto LAB_143bdecd9;
  }
  iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0xc + 4);
  goto LAB_143bdecfe;
}



// FUNCTION 143bded44 FUN_143bded44 body=79 status=ok
// SIG undefined FUN_143bded44(void)

void FUN_143bded44(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bded94 FUN_143bded94 body=72 status=ok
// SIG undefined FUN_143bded94(void)

void FUN_143bded94(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdedde FUN_143bdedde body=261 status=ok
// SIG undefined FUN_143bdedde(void)

void FUN_143bdedde(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8) + 8
             + (ulonglong)((*param_2 & 0x1ff) << 4));
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    uVar7 = (int)plVar1[9] - 1;
    uVar4 = (uint)uVar2;
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar7 & uVar4) * 4);
    if (iVar5 != -1) {
      lVar3 = *plVar1;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0xc) == uVar4) {
          uVar4 = (uint)((ulonglong)uVar2 >> 0x20);
          if (uVar4 == 0xffffffff) goto LAB_143bdeebb;
          iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar7 & uVar4) * 4);
          goto LAB_143bdee9e;
        }
        iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
LAB_143bdee73:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143bdee9e:
  if (iVar5 == -1) goto LAB_143bdee73;
  if (*(uint *)(lVar3 + (longlong)iVar5 * 0xc) == uVar4) goto LAB_143bdeebb;
  iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0xc + 4);
  goto LAB_143bdee9e;
LAB_143bdeebb:
  local_30 = param_1[2];
  local_20 = &local_30;
  local_28 = FUN_143bdeee4;
  FUN_14838980a(param_1[1]);
  goto LAB_143bdee73;
}



// FUNCTION 143bdeee4 FUN_143bdeee4 body=79 status=ok
// SIG undefined FUN_143bdeee4(void)

void FUN_143bdeee4(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdef34 FUN_143bdef34 body=76 status=ok
// SIG undefined FUN_143bdef34(void)

void FUN_143bdef34(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)*param_2;
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdef82 FUN_143bdef82 body=72 status=ok
// SIG undefined FUN_143bdef82(void)

void FUN_143bdef82(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdefcc FUN_143bdefcc body=287 status=ok
// SIG undefined FUN_143bdefcc(void)

void FUN_143bdefcc(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)*param_1;
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    uVar1 = *param_2;
    lVar6 = *(longlong *)(*(longlong *)(param_1[2] + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
    uVar8 = (ulonglong)(uVar1 & 0x1ff);
    uVar2 = *(uint *)(lVar6 + uVar8 * 0xc);
    plVar9 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar5[8];
    }
    uVar10 = (int)plVar5[9] - 1;
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar2) * 4);
    if (iVar7 != -1) {
      uVar3 = *(uint *)(lVar6 + 4 + uVar8 * 0xc);
      uVar4 = *(uint *)(lVar6 + 8 + uVar8 * 0xc);
      lVar6 = *plVar5;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar2) {
          iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar3) * 4);
          goto LAB_143bdf08b;
        }
        iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
    }
  }
LAB_143bdf062:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143bdf08b:
  if (iVar7 == -1) goto LAB_143bdf062;
  if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar3) {
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar4) * 4);
    goto LAB_143bdf0ad;
  }
  iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
  goto LAB_143bdf08b;
LAB_143bdf0ad:
  if (iVar7 == -1) goto LAB_143bdf062;
  if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar4) {
    local_28 = (ulonglong)uVar1;
    FUN_1483b983a(param_1[1] + 8,local_2c,&local_28,0);
    goto LAB_143bdf062;
  }
  iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
  goto LAB_143bdf0ad;
}



// FUNCTION 143bdf0ec FUN_143bdf0ec body=72 status=ok
// SIG undefined FUN_143bdf0ec(void)

void FUN_143bdf0ec(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf136 FUN_143bdf136 body=287 status=ok
// SIG undefined FUN_143bdf136(void)

void FUN_143bdf136(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)param_1[1];
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    uVar1 = *param_2;
    lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(uVar1 >> 9) * 8);
    uVar8 = (ulonglong)(uVar1 & 0x1ff);
    uVar2 = *(uint *)(lVar6 + uVar8 * 0xc);
    plVar9 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar5[8];
    }
    uVar10 = (int)plVar5[9] - 1;
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar2) * 4);
    if (iVar7 != -1) {
      uVar3 = *(uint *)(lVar6 + 4 + uVar8 * 0xc);
      uVar4 = *(uint *)(lVar6 + 8 + uVar8 * 0xc);
      lVar6 = *plVar5;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar2) {
          iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar3) * 4);
          goto LAB_143bdf1f5;
        }
        iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
    }
  }
LAB_143bdf1cc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143bdf1f5:
  if (iVar7 == -1) goto LAB_143bdf1cc;
  if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar3) {
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)(uVar10 & uVar4) * 4);
    goto LAB_143bdf217;
  }
  iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
  goto LAB_143bdf1f5;
LAB_143bdf217:
  if (iVar7 == -1) goto LAB_143bdf1cc;
  if (*(uint *)(lVar6 + (longlong)iVar7 * 0xc) == uVar4) {
    local_28 = (ulonglong)uVar1;
    FUN_1483b983a(param_1[2] + 8,local_2c,&local_28,0);
    goto LAB_143bdf1cc;
  }
  iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0xc + 4);
  goto LAB_143bdf217;
}



// FUNCTION 143bdf256 FUN_143bdf256 body=86 status=ok
// SIG undefined FUN_143bdf256(void)

void FUN_143bdf256(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  local_14 = FUN_146bc96d4(param_1[1],*param_2);
  FUN_144984904(uVar1,local_18,&local_14,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf2ae FUN_143bdf2ae body=128 status=ok
// SIG undefined FUN_143bdf2ae(void)

void FUN_143bdf2ae(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *param_2;
  FUN_1447cbafe(*param_1,&local_30,&local_2c,0);
  uVar1 = param_1[1];
  local_30 = FUN_146bc96d4(param_1[2],local_2c);
  FUN_144984904(uVar1,local_34,&local_30,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf330 FUN_143bdf330 body=79 status=ok
// SIG undefined FUN_143bdf330(void)

void FUN_143bdf330(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf380 FUN_143bdf380 body=79 status=ok
// SIG undefined FUN_143bdf380(void)

void FUN_143bdf380(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf4f6 FUN_143bdf4f6 body=79 status=ok
// SIG undefined FUN_143bdf4f6(void)

void FUN_143bdf4f6(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf546 FUN_143bdf546 body=72 status=ok
// SIG undefined FUN_143bdf546(void)

void FUN_143bdf546(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf590 FUN_143bdf590 body=79 status=ok
// SIG undefined FUN_143bdf590(void)

void FUN_143bdf590(longlong *param_1,uint *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (ulonglong)(*param_2 << 0x1e | *param_2 >> 2);
  FUN_1483b983a(*param_1 + 8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdf5e0 FUN_143bdf5e0 body=567 status=ok
// SIG undefined FUN_143bdf5e0(void)

undefined8 FUN_143bdf5e0(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  double dVar9;
  double extraout_XMM0_Qa;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_168 [40];
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 local_118;
  undefined8 local_108;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  longlong *local_b8;
  longlong local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar10 = *param_2 * (double)param_1[10];
  dVar11 = param_2[1] * (double)param_1[0xb];
  dVar9 = param_2[2] * (double)param_1[0xc];
  dVar3 = (double)param_1[2];
  dVar4 = (double)param_1[3];
  dVar2 = (double)param_1[4];
  dVar1 = (double)param_1[5];
  dVar12 = dVar11 * dVar3 - dVar10 * dVar4;
  dVar13 = dVar9 * dVar4 - dVar11 * dVar2;
  dVar14 = dVar10 * dVar2 - dVar3 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  local_d8 = (dVar12 * dVar4 - dVar14 * dVar2) + dVar1 * dVar13 + dVar10 + (double)param_1[6];
  dVar2 = (dVar2 * dVar13 - dVar3 * dVar12) + (double)param_1[5] * dVar14 + dVar11 +
          (double)param_1[7];
  local_128 = dVar12 * dVar1 + dVar9 + (dVar14 * dVar3 - dVar13 * dVar4) + (double)param_1[8];
  local_138._8_4_ = SUB84(dVar2,0);
  local_138._0_8_ = local_d8;
  local_138._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar1 = (double)param_1[0xe];
  uStack_d0 = local_138._8_8_;
  local_c8 = local_128;
  uVar6 = FUN_146bed438((longlong *)param_1[1],*(undefined4 *)(*(longlong *)param_1[1] + 0xcc));
  uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
  cVar5 = '\x01';
  if (extraout_XMM0_Qa <= dVar1) {
    if (0.0 < (double)param_1[0xf]) {
      uVar6 = *param_1;
      local_118 = 0;
      local_108 = 0;
      FUN_146bee698(&local_d8);
      uVar7 = FUN_146bdde3a(uVar6,local_138,&local_140,&local_d8);
      uVar6 = uVar7;
      if (local_c8 != 0.0) {
        if (local_b8 == (longlong *)0x0) {
          local_b8 = local_a8;
        }
        uVar6 = (**(code **)(*local_b8 + 0x10))();
      }
      if ((-1 < (int)uVar7) && (local_140 < (double)param_1[0xf] * (double)param_1[0xf])) {
        uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
        cVar5 = '\x01';
        goto LAB_143bdf74a;
      }
    }
    cVar5 = '\0';
    uVar8 = 0;
  }
LAB_143bdf74a:
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return CONCAT71(uVar8,*(char *)(param_1 + 0x10) != cVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


