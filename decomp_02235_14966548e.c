// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14966548e FUN_14966548e body=51 status=ok
// SIG undefined FUN_14966548e(void)

void FUN_14966548e(longlong param_1)

{
  FUN_148441000();
  memcpy((void *)(param_1 + 0x4f8),(void *)(param_1 + 0x110),0x140);
  *(undefined1 *)(param_1 + 0x638) = 1;
  return;
}



// FUNCTION 1496654c2 FUN_1496654c2 body=218 status=ok
// SIG undefined FUN_1496654c2(void)

longlong FUN_1496654c2(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x3a8) == '\0') {
    _Dst = (void *)FUN_14001cc68(0x208);
    memset(_Dst,0,0x208);
    FUN_1458481c0(_Dst);
    *(undefined8 *)((longlong)_Dst + 0x1d8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1e0) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1e8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1f0) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x1f8) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)_Dst + 0x200) = 0xffefffffffffffff;
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    *(void **)(param_1 + 0x3a0) = _Dst;
    if (lVar1 != 0) {
      FUN_145820e5c(lVar1);
      FUN_1400020a8(lVar1);
      _Dst = *(void **)(param_1 + 0x3a0);
    }
    uVar2 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1460286e0(_Dst,uVar2);
    *(undefined1 *)(param_1 + 0x3a8) = 1;
  }
  return param_1 + 0x3a0;
}



// FUNCTION 14966559c FUN_14966559c body=925 status=ok
// SIG undefined FUN_14966559c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14966559c(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1485063a5(&local_118,param_1[0x14]);
  dVar4 = *(double *)(param_2 + 8) - local_f8;
  dVar5 = *(double *)(param_2 + 0x10) - dStack_f0;
  dVar3 = *(double *)(param_2 + 0x18) - local_e8;
  dVar16 = (double)(**(code **)(*param_1 + 0x428))(param_1);
  lVar8 = FUN_14851bd54(param_1[0x54]);
  uVar12 = *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24);
  uVar14 = 0;
  if ((uVar12 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x28) - 1U))) {
    uVar15 = 1;
    uVar9 = 1;
    if (1 < (int)uVar12) {
      uVar15 = uVar12;
    }
    do {
      uVar14 = uVar15;
      if (uVar15 == uVar9) break;
      uVar11 = uVar9 >> 9;
      uVar13 = uVar9 & 0x1ff;
      uVar14 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x28))[uVar11] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar14 != uVar12) {
    dVar21 = -local_118;
    dVar23 = -dStack_110;
    dVar6 = local_108 * -1.0;
    dVar7 = dStack_100 * 1.0;
    dVar24 = dVar4 * dVar6 - dVar21 * dVar3;
    dVar17 = dVar5 * dVar21 - dVar4 * dVar23;
    dVar19 = dVar3 * dVar23 - dVar5 * dVar6;
    dVar19 = dVar19 + dVar19;
    dVar24 = dVar24 + dVar24;
    dVar17 = dVar17 + dVar17;
    auVar25 = divpd(_DAT_149934d80,local_d8);
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
      uVar10 = (ulonglong)(uVar14 & 0x1ff);
      dVar22 = *(double *)(lVar2 + 0x10 + uVar10 * 0x18) -
               (dVar7 * dVar17 + dVar3 + (dVar24 * dVar21 - dVar23 * dVar19)) *
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8)) &
                       (ulonglong)(1.0 / local_c8));
      dVar20 = *(double *)(lVar2 + 8 + uVar10 * 0x18) -
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar25._8_8_) *
               (local_118 * dVar17 + dVar6 * dVar19 + dVar24 * dVar7 + dVar5);
      dVar18 = *(double *)(lVar2 + uVar10 * 0x18) -
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) & auVar25._0_8_) *
               ((dVar17 * dVar23 - dVar6 * dVar24) + dVar19 * dVar7 + dVar4);
      if (dVar22 * dVar22 + dVar18 * dVar18 + dVar20 * dVar20 <
          (double)((float)dVar16 * (float)dVar16)) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(uint *)(*param_3 + (longlong)iVar1 * 4) = uVar14;
      }
      uVar15 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar12) {
        uVar15 = uVar12;
      }
      do {
        uVar9 = uVar15;
        if (uVar15 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar9 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar8 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar9;
    } while (uVar14 != uVar12);
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14966593a FUN_14966593a body=1181 status=ok
// SIG undefined FUN_14966593a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14966593a(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  undefined8 *puVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  undefined1 auStack_198 [32];
  longlong *local_178;
  code **local_170;
  code *local_168;
  double *local_160;
  undefined4 *local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1485063a5(&local_108,param_1[0x14]);
  local_e8 = *(double *)(param_2 + 8) - local_e8;
  dStack_e0 = *(double *)(param_2 + 0x10) - dStack_e0;
  local_d8 = *(double *)(param_2 + 0x18) - local_d8;
  local_f8 = local_f8 * -1.0;
  dStack_f0 = dStack_f0 * 1.0;
  dVar9 = -local_108;
  dStack_100 = -dStack_100;
  dVar14 = local_e8 * local_f8 - dVar9 * local_d8;
  dVar7 = dStack_e0 * dVar9 - local_e8 * dStack_100;
  dVar12 = local_d8 * dStack_100 - dStack_e0 * local_f8;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  dVar7 = dVar7 + dVar7;
  auVar13 = divpd(_DAT_149934d80,local_c8);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar13._0_8_) *
          ((dVar7 * dStack_100 - dVar14 * local_f8) + dStack_f0 * dVar12 + local_e8);
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_)) & auVar13._8_8_) *
          (local_108 * dVar7 + local_f8 * dVar12 + dStack_f0 * dVar14 + dStack_e0);
  dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_b8)) & (ulonglong)(1.0 / local_b8))
          * (dStack_f0 * dVar7 + local_d8 + (dVar14 * dVar9 - dVar12 * dStack_100));
  dVar9 = (double)FUN_14851bd54(param_1[0x54]);
  dVar12 = (double)(**(code **)(*param_1 + 0x428))(param_1);
  fVar15 = (float)dVar12;
  if (*(int *)(param_1[0x5e] + 0xa8) == 1) {
    uVar1 = *(uint *)(param_2 + 0x38);
    if (((-1 < (int)uVar1) &&
        ((int)uVar1 < *(int *)((longlong)dVar9 + 0x140) * 0x200 + *(int *)((longlong)dVar9 + 0x144))
        ) && ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)((longlong)dVar9 + 0x148) +
                                   (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) -
                      1U) < 0xfffe)) {
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_3,iVar2);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_2 + 0x38);
    }
    dVar12 = (double)fVar15;
    local_110 = dVar7 + DAT_14c846520 * dVar12;
    local_118 = dVar6 + DAT_14c846518 * dVar12;
    local_130 = dVar6 - DAT_14c846518 * dVar12;
    local_138 = dVar5 - dVar12 * DAT_14c846510;
    local_128._8_8_ = dVar5 + dVar12 * DAT_14c846510;
    local_128._0_8_ = dVar7 - DAT_14c846520 * dVar12;
    *(undefined4 *)(param_1 + 0xcb) = 0;
    if (*(int *)((longlong)param_1 + 0x65c) < 0) {
      FUN_14481578e(param_1 + 0xca,0);
    }
    puVar10 = (undefined8 *)FUN_1496654c2(param_1);
    FUN_146c88a30(*puVar10,&local_138,param_1 + 0xca);
    lVar8 = param_1[0xcb];
    if ((longlong)(int)lVar8 != 0) {
      lVar4 = param_1[0xca];
      lVar11 = 0;
      do {
        uVar3 = *(undefined4 *)(lVar4 + lVar11);
        FUN_146c149e0(dVar9,&local_158,uVar3);
        if ((local_148 - dVar7) * (local_148 - dVar7) +
            ((double)local_158 - dVar5) * ((double)local_158 - dVar5) +
            (dStack_150 - dVar6) * (dStack_150 - dVar6) < (double)(fVar15 * fVar15)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_3,iVar2);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar3;
        }
        lVar11 = lVar11 + 4;
      } while ((longlong)(int)lVar8 * 4 != lVar11);
    }
  }
  else {
    local_158 = (undefined4 *)0x0;
    dStack_150 = 4.94065645841247e-324;
    FUN_1446f48e2(&local_158,0);
    *local_158 = *(undefined4 *)(param_2 + 0x38);
    local_160 = &local_138;
    local_130 = (double)CONCAT44(local_130._4_4_,fVar15 * fVar15);
    local_128._8_4_ = SUB84(dVar6,0);
    local_128._0_8_ = dVar5;
    local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_170 = &local_168;
    local_168 = FUN_14456e71e;
    local_178 = param_1 + 0xcc;
    local_138 = dVar9;
    local_118 = dVar7;
    FUN_146c81c82(dVar9,&local_158,param_3,param_1 + 0xca);
    if (local_158 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149665dd8 FUN_149665dd8 body=428 status=ok
// SIG undefined FUN_149665dd8(void)

void FUN_149665dd8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x640;
  *(undefined4 *)(param_1 + 0x648) = 0;
  if (*(int *)(param_1 + 0x64c) < 0) {
    FUN_14481578e(lVar1,0);
  }
  if (*(int *)(param_1 + 0x3ac) == 1) {
    FUN_14966593a(param_1,param_2,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  cVar2 = *(char *)(param_1 + 0x3b0);
  FUN_14966559c(param_1,param_2,lVar1);
  if ((longlong)*(int *)(param_1 + 0x648) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x640);
    lVar10 = (longlong)*(int *)(param_1 + 0x648) << 2;
    lVar9 = 0;
    local_58 = lVar10;
    do {
      uVar3 = *(uint *)(lVar1 + lVar9);
      uVar5 = 1 << ((byte)uVar3 & 0x1f);
      lVar6 = *(longlong *)(param_1 + 0x6d0);
      if (*(longlong *)(param_1 + 0x6d0) == 0) {
        lVar6 = param_1 + 0x6c0;
      }
      uVar8 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar8 = uVar3;
      }
      lVar7 = (longlong)((int)uVar8 >> 5);
      uVar8 = *(uint *)(lVar6 + lVar7 * 4);
      if (((uVar8 >> (uVar3 & 0x1f) & 1) != 0) == (bool)cVar2) {
        local_4c = uVar3;
        if (cVar2 == '\0') {
          *(uint *)(lVar6 + lVar7 * 4) = uVar8 | uVar5;
          lVar10 = *(longlong *)(param_1 + 0x380);
          iVar4 = *(int *)(lVar10 + 0x48);
          *(uint *)(lVar10 + 0x48) = iVar4 + 1U;
          if (*(uint *)(lVar10 + 0x4c) < iVar4 + 1U) {
            FUN_1446f48e2((longlong *)(lVar10 + 0x40),iVar4);
          }
          *(uint *)(*(longlong *)(lVar10 + 0x40) + (longlong)iVar4 * 4) = local_4c;
          lVar10 = local_58;
        }
        else {
          uVar8 = uVar8 & ~uVar5;
          *(uint *)(lVar6 + lVar7 * 4) = uVar8;
          FUN_1406b43d8(*(longlong *)(param_1 + 0x380) + 0x40,&local_4c,
                        CONCAT71((uint7)(uint3)(uVar8 >> 8),1));
        }
        if (*(longlong *)(param_1 + 0x718) != 0) {
          FUN_1484cbdcc(*(longlong *)(param_1 + 0x718),uVar3);
        }
      }
      lVar9 = lVar9 + 4;
    } while (lVar10 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149666b98 FUN_149666b98 body=311 status=ok
// SIG undefined FUN_149666b98(void)

void FUN_149666b98(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1484410f4();
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  FUN_149666cd0(param_1,&local_58);
  if (local_58 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_50 = L"MeshSelectionChange";
    local_48 = 0x13;
    FUN_1446e940c(local_5c,&local_50);
    local_50 = L"UMeshSelectionTool";
    local_48 = 0x12;
    FUN_1446e940c(local_60,&local_50);
    FUN_140208bae(&local_50,local_60,local_5c,L"Mesh Selection");
    local_68 = local_58;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,param_1[0x70],&local_68,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148558a82(param_1 + 0x5c,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149666cd0 FUN_149666cd0 body=108 status=ok
// SIG undefined FUN_149666cd0(void)

undefined8 * FUN_149666cd0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x718);
  if (puVar1 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    *puVar1 = 0;
    plVar2 = *(longlong **)(param_1 + 0x718);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x40))(plVar3,1);
      }
      FUN_1400020a8(plVar2);
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 149666d3c FUN_149666d3c body=229 status=ok
// SIG undefined FUN_149666d3c(void)

undefined8 FUN_149666d3c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = param_1 + -0xb0;
  FUN_148441104();
  memset(local_128,0,0x100);
  local_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  cVar3 = FUN_14962d3a8(lVar1,param_2,local_128);
  if (cVar3 != '\0') {
    lVar2 = param_1 + 0x600;
    *(undefined4 *)(param_1 + 0x608) = 0;
    if (*(int *)(param_1 + 0x60c) < 0) {
      FUN_14481578e(lVar2,0);
    }
    if (*(int *)(param_1 + 0x2fc) == 1) {
      FUN_14966593a(lVar1,param_1 + 0x60,lVar2);
    }
    else {
      FUN_14966559c(lVar1,param_1 + 0x60,lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149666e22 FUN_149666e22 body=1316 status=ok
// SIG undefined FUN_149666e22(void)

double * FUN_149666e22(longlong param_1,double *param_2)

{
  double *pdVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
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
  undefined1 auStack_1b8 [32];
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  uint *local_e0;
  int local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  puVar7 = (undefined8 *)FUN_148452262(*(undefined8 *)(param_1 + 0x2e8),1);
  local_e0 = (uint *)0x0;
  local_d8 = *(int *)(puVar7 + 1);
  lVar8 = (longlong)local_d8;
  _Src = (void *)*puVar7;
  if (lVar8 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_144a06ca8(&local_e0,local_d8,0);
    memcpy(local_e0,_Src,lVar8 << 2);
    if (0 < local_d8) {
      lVar8 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x208));
      FUN_14851b8ac(*(undefined8 *)(param_1 + 0x208),&local_148);
      if ((longlong)local_d8 == 0) {
        dVar14 = -1.79769313486232e+308;
        dVar12 = 1.79769313486232e+308;
        dVar15 = dVar14;
        dVar17 = dVar12;
        dVar19 = dVar12;
        dVar21 = dVar14;
      }
      else {
        dVar12 = 1.79769313486232e+308;
        dVar21 = -1.79769313486232e+308;
        dVar15 = -1.79769313486232e+308;
        dVar14 = -1.79769313486232e+308;
        dVar17 = 1.79769313486232e+308;
        dVar19 = 1.79769313486232e+308;
        local_168 = local_108;
        uStack_164 = uStack_104;
        uStack_160 = uStack_100;
        uStack_15c = uStack_fc;
        local_178 = local_128;
        dStack_170 = dStack_120;
        local_188 = local_148;
        dStack_180 = dStack_140;
        local_198 = local_118;
        puVar9 = local_e0;
        do {
          lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + (ulonglong)(*puVar9 >> 9) * 8);
          uVar11 = (ulonglong)(*puVar9 & 0x1ff);
          local_150 = *(undefined4 *)(lVar10 + 8 + uVar11 * 0xc);
          local_158 = *(undefined8 *)(lVar10 + uVar11 * 0xc);
          lVar10 = 0;
          dVar13 = dVar12;
          dVar22 = dVar14;
          dVar16 = dVar15;
          dVar18 = dVar17;
          dVar20 = dVar19;
          do {
            local_190 = dVar21;
            uVar2 = *(uint *)((longlong)&local_158 + lVar10 * 4);
            lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
            uVar11 = (ulonglong)(uVar2 & 0x1ff);
            pdVar1 = (double *)(lVar3 + uVar11 * 0x18);
            dVar14 = *pdVar1 * (double)CONCAT44(uStack_104,local_108);
            dVar15 = pdVar1[1] * (double)CONCAT44(uStack_fc,uStack_100);
            dVar12 = *(double *)(lVar3 + 0x10 + uVar11 * 0x18) * local_f8;
            dVar21 = dVar15 * local_148 - dStack_140 * dVar14;
            dVar5 = dVar12 * dStack_140 - local_138 * dVar15;
            dVar6 = dVar14 * local_138 - local_148 * dVar12;
            dVar5 = dVar5 + dVar5;
            dVar6 = dVar6 + dVar6;
            dVar21 = dVar21 + dVar21;
            dVar14 = (dVar21 * dStack_140 - dVar6 * local_138) + dStack_130 * dVar5 + dVar14 +
                     local_128;
            dVar15 = (local_138 * dVar5 - local_148 * dVar21) + dStack_130 * dVar6 + dVar15 +
                     dStack_120;
            dVar17 = dVar14;
            if (dVar18 <= dVar14) {
              dVar17 = dVar18;
            }
            if (dVar14 <= dVar22) {
              dVar14 = dVar22;
            }
            dVar19 = dVar15;
            if (dVar20 <= dVar15) {
              dVar19 = dVar20;
            }
            dVar21 = dVar21 * dStack_130 + dVar12 + (dVar6 * local_148 - dVar5 * dStack_140) +
                     local_118;
            if (dVar15 <= dVar16) {
              dVar15 = dVar16;
            }
            dVar12 = dVar21;
            if (dVar13 <= dVar21) {
              dVar12 = dVar13;
            }
            if (dVar21 <= local_190) {
              dVar21 = local_190;
            }
            lVar10 = lVar10 + 1;
            dVar13 = dVar12;
            dVar22 = dVar14;
            dVar16 = dVar15;
            dVar18 = dVar17;
            dVar20 = dVar19;
          } while (lVar10 != 3);
          puVar9 = puVar9 + 1;
        } while (puVar9 != local_e0 + local_d8);
      }
      dVar22 = (double)(-(ulonglong)(0.0 <= dVar21 - dVar12) & (ulonglong)(dVar21 - dVar12));
      dVar13 = (double)(-(ulonglong)(0.0 <= dVar15 - dVar19) & (ulonglong)(dVar15 - dVar19));
      uVar11 = -(ulonglong)(dVar22 <= dVar13);
      dVar22 = (double)(~uVar11 & (ulonglong)dVar22 | uVar11 & (ulonglong)dVar13);
      dVar13 = (double)(-(ulonglong)(0.0 <= dVar14 - dVar17) & (ulonglong)(dVar14 - dVar17));
      uVar11 = -(ulonglong)(dVar22 <= dVar13);
      if (9.999999974752427e-07 < (double)(uVar11 & (ulonglong)dVar13 | ~uVar11 & (ulonglong)dVar22)
         ) {
        *param_2 = dVar17;
        param_2[1] = dVar19;
        param_2[2] = dVar12;
        param_2[3] = dVar14;
        param_2[4] = dVar15;
        param_2[5] = dVar21;
        *(char *)(param_2 + 6) = dVar12 <= dVar21 & -(dVar17 <= dVar14) & -(dVar19 <= dVar15);
        goto LAB_149667294;
      }
    }
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x48);
  (**(code **)(*plVar4 + 0x520))(plVar4,param_2,0,0);
LAB_149667294:
  if (local_e0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149667364 FUN_149667364 body=57 status=ok
// SIG undefined FUN_149667364(void)

undefined4 FUN_149667364(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if (((char)uVar1 != '\0') && (param_1[0x86] == 0)) {
    FUN_14966739e(param_1 + -0x5d);
  }
  return uVar1;
}



// FUNCTION 14966739e FUN_14966739e body=454 status=ok
// SIG undefined FUN_14966739e(void)

void FUN_14966739e(longlong *param_1)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar1 + 1);
  lVar2 = (longlong)local_58;
  _Src = (void *)*puVar1;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 << 2);
    if (local_58 != 0) {
      lVar2 = FUN_14001cc68(8,0x10);
      FUN_1484cbd7e(lVar2,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
      param_1[0xe3] = lVar2;
      FUN_1484cbe04(lVar2,&local_60);
      FUN_14845246c(param_1[0x70],1,&local_60);
      FUN_149666cd0(param_1,&local_68);
      lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_50 = L"ClearSelection";
      local_48 = 0xe;
      FUN_1446e940c(local_6c,&local_50);
      local_50 = L"UMeshSelectionTool";
      local_48 = 0x12;
      FUN_1446e940c(local_70,&local_50);
      FUN_140208bae(&local_50,local_70,local_6c,L"Clear Selection");
      local_78 = local_68;
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))
                (lVar2 + 0x28,param_1[0x70],&local_78,&local_50);
      if (local_50 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_50 + 0x10))();
      }
      FUN_149663c04(param_1);
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149667566 FUN_149667566 body=149 status=ok
// SIG undefined FUN_149667566(void)

undefined4 * FUN_149667566(longlong param_1,undefined4 *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2f0) + 0xb4);
  if (iVar1 == 3) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x708) + (longlong)(int)(uint)param_4 * 4);
  }
  else {
    if (iVar1 == 2) {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x48) + 0x20);
    }
    else {
      if (iVar1 != 1) {
        *param_2 = 0xffff0000;
        return param_2;
      }
      lVar3 = (*(undefined8 **)(param_1 + 0x728))[1];
      if (lVar3 == 0) {
        uVar2 = FUN_146bc96d4(**(undefined8 **)(param_1 + 0x728),param_4 & 0xffffffff);
        goto LAB_1496675c4;
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
    }
    uVar2 = *(undefined4 *)
             (*(longlong *)(lVar3 + (param_4 >> 9 & 0x7fffff) * 8) +
             (ulonglong)((uint)param_4 & 0x1ff) * 4);
  }
LAB_1496675c4:
  FUN_146c89f40(param_2,uVar2);
  return param_2;
}



// FUNCTION 1496675fc FUN_1496675fc body=356 status=ok
// SIG undefined FUN_1496675fc(void)

void FUN_1496675fc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 local_108 [96];
  undefined1 local_a8 [64];
  float local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148441296();
  FUN_1485063a5(local_108,*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
  if (*(char *)(*(longlong *)(param_1 + 0x2f0) + 0xb1) == '\x01') {
    (**(code **)(*param_2 + 0x18))(param_2,local_a8);
    iVar1 = *(int *)(param_1 + 0x3ac);
    local_118 = (**(code **)(*param_2 + 8))(param_2);
    local_68 = local_68 / 90.0;
    local_110 = local_108;
    if (iVar1 == 0) {
      FUN_1484dcad4(uVar2,*(longlong *)(param_1 + 0x380) + 0x40,local_68 * 12.0,0xfff39c12);
      local_118 = (**(code **)(*param_2 + 8))(param_2);
      local_110 = local_108;
      FUN_1484dcad4(uVar2,param_1 + 0x6b0,local_68 * 8.0,0xff28c828);
    }
    else {
      FUN_1484dcd49(uVar2,param_1 + 0x6b0,local_68 * 4.0,0xff28c828);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149667762 FUN_149667762 body=147 status=ok
// SIG undefined FUN_149667762(void)

void FUN_149667762(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[199] == '\x01') {
    (**(code **)(*param_1 + 0x490))(param_1,param_1 + 0x9f);
    *(undefined1 *)(param_1 + 199) = 0;
  }
  if ((char)param_1[0xe4] == '\x01') {
    (**(code **)(*param_1 + 0x498))(param_1,*(undefined4 *)((longlong)param_1 + 0x724));
    *(undefined1 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  }
  if ((char)param_1[0xe0] == '\x01') {
    FUN_149663e3a(param_1,0);
  }
  lVar1 = param_1[0x62];
  if (*(char *)(lVar1 + 0x130) == '\x01') {
    FUN_1484de806(lVar1);
    *(undefined1 *)(lVar1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 149667b32 FUN_149667b32 body=1309 status=ok
// SIG undefined FUN_149667b32(void)

void FUN_149667b32(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_14851bd54(param_1[0x54]);
  if (((*(int *)(param_1[0x70] + 0x68) == 0) || (*(longlong *)(lVar3 + 0x208) == 0)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x48) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  lVar4 = FUN_14001cc68(8,0x10);
  FUN_1484cbd7e(lVar4,*(undefined4 *)((longlong)param_1 + 0x3ac),1);
  param_1[0xe3] = lVar4;
  uVar12 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar9 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if (1 < (int)uVar9) {
      uVar12 = (ulonglong)uVar9;
    }
    do {
      uVar2 = uVar11;
      if ((uint)uVar12 == uVar2) goto LAB_149667c54;
      uVar11 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar2 >> 9] +
                                         (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
    uVar12 = (ulonglong)uVar2;
  }
LAB_149667c54:
  local_d8 = *(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x48);
  if ((uint)uVar12 != uVar9) {
    do {
      plVar5 = (longlong *)param_1[0xde];
      if ((longlong *)param_1[0xde] == (longlong *)0x0) {
        plVar5 = param_1 + 0xdc;
      }
      uVar11 = (uint)uVar12;
      uVar2 = uVar11 + 0x1f;
      if (-1 < (int)uVar11) {
        uVar2 = uVar11;
      }
      if ((*(uint *)((longlong)plVar5 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar11 & 0x1f) & 1) !=
          0) {
        local_a8 = (wchar_t *)
                   CONCAT44(local_a8._4_4_,
                            *(undefined4 *)
                             (*(longlong *)(*(longlong *)(local_d8 + 0x20) + (uVar12 >> 9) * 8) +
                             (ulonglong)(uVar11 & 0x1ff) * 4));
        FUN_144984904(&local_98,&local_b8,&local_a8,0);
      }
      uVar2 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar2 = uVar9;
      }
      do {
        if (uVar2 - 1 == (int)uVar12) {
          uVar12 = (ulonglong)uVar2;
          break;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar12 != uVar9);
    uVar9 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uVar11 = 0;
  if ((uVar9 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
    uVar2 = 1;
    uVar6 = 1;
    if (1 < (int)uVar9) {
      uVar2 = uVar9;
    }
    do {
      uVar11 = uVar2;
      if (uVar2 == uVar6) break;
      uVar8 = uVar6 >> 9;
      uVar10 = uVar6 & 0x1ff;
      uVar11 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar11 != uVar9) {
    do {
      uVar12 = uStack_b0;
      plVar5 = (longlong *)param_1[0xde];
      if ((longlong *)param_1[0xde] == (longlong *)0x0) {
        plVar5 = param_1 + 0xdc;
      }
      uVar2 = uVar11 + 0x1f;
      if (-1 < (int)uVar11) {
        uVar2 = uVar11;
      }
      if (((*(uint *)((longlong)plVar5 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar11 & 0x1f) & 1) ==
           0) && ((int)uStack_90 != local_64)) {
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_d8 + 0x20) + (ulonglong)(uVar11 >> 9) * 8) +
                         (ulonglong)(uVar11 & 0x1ff) * 4);
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        for (iVar1 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar2) * 4); iVar1 != -1;
            iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar1 * 0xc) == uVar2) {
            lVar4 = (longlong)(int)uStack_b0;
            uVar2 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
            if (uStack_b0._4_4_ < uVar2) {
              FUN_1446f48e2(&local_b8,uVar12 & 0xffffffff);
            }
            *(uint *)(local_b8 + lVar4 * 4) = uVar11;
            break;
          }
        }
      }
      uVar2 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar2 = uVar9;
      }
      do {
        uVar6 = uVar2;
        if (uVar2 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar6;
    } while (uVar11 != uVar9);
  }
  FUN_1484cbe04(param_1[0xe3],&local_b8);
  FUN_148452282(param_1[0x70],1,&local_b8);
  FUN_149666cd0(param_1,&local_c0);
  lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_a8 = L"ExpandToMaterial";
  local_a0 = 0x10;
  FUN_1446e940c(local_c4,&local_a8);
  local_a8 = L"UMeshSelectionTool";
  local_a0 = 0x12;
  FUN_1446e940c(local_c8,&local_a8);
  FUN_140208bae(&local_a8,local_c8,local_c4,L"Select Materials");
  local_d0 = local_c0;
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1[0x70],&local_d0,&local_a8);
  if (local_a8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
  FUN_149663c04(param_1);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966806c FUN_14966806c body=1214 status=ok
// SIG undefined FUN_14966806c(void)

void FUN_14966806c(longlong *param_1)

{
  void *_Src;
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_68 = (void *)0x0;
  local_60 = *(int *)(puVar3 + 1);
  lVar8 = (longlong)local_60;
  _Src = (void *)*puVar3;
  if (lVar8 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar8 << 2);
    if (local_60 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      lVar8 = FUN_14851bd54(param_1[0x54]);
      uVar7 = *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144);
      uVar11 = 0;
      if ((uVar7 != 0) &&
         (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x148) - 1U))) {
        uVar2 = 1;
        uVar5 = 1;
        if (1 < (int)uVar7) {
          uVar2 = uVar7;
        }
        do {
          uVar11 = uVar2;
          if (uVar2 == uVar5) break;
          uVar6 = uVar5 >> 9;
          uVar9 = uVar5 & 0x1ff;
          uVar11 = uVar5;
          uVar5 = uVar5 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x148))[uVar6] +
                                             (ulonglong)uVar9 * 2) - 1U));
      }
      if (uVar11 != uVar7) {
        do {
          uVar1 = uStack_70;
          plVar4 = (longlong *)param_1[0xde];
          if ((longlong *)param_1[0xde] == (longlong *)0x0) {
            plVar4 = param_1 + 0xdc;
          }
          uVar2 = uVar11 + 0x1f;
          if (-1 < (int)uVar11) {
            uVar2 = uVar11;
          }
          if ((*(uint *)((longlong)plVar4 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
              == 0) {
            lVar10 = (longlong)(int)uStack_70;
            uVar2 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
            if (uStack_70._4_4_ < uVar2) {
              FUN_1446f48e2(&local_78,uVar1 & 0xffffffff);
            }
            *(uint *)(local_78 + lVar10 * 4) = uVar11;
          }
          uVar2 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar7) {
            uVar2 = uVar7;
          }
          do {
            uVar5 = uVar2;
            if (uVar2 - 1 == uVar11) break;
            uVar11 = uVar11 + 1;
            uVar5 = uVar11;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar8 + 0x148) +
                                                 (ulonglong)(uVar11 >> 9) * 8) +
                                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
          uVar11 = uVar5;
        } while (uVar11 != uVar7);
      }
      lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_58 = L"InvertSelection";
      local_50 = 0xf;
      FUN_1446e940c(&local_80,&local_58);
      local_58 = L"UMeshSelectionTool";
      local_50 = 0x12;
      FUN_1446e940c(&local_98,&local_58);
      FUN_140208bae(&local_58,&local_98,&local_80,L"Invert Selection");
      (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      lVar8 = FUN_14001cc68(8,0x10);
      FUN_1484cbd7e(lVar8,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
      param_1[0xe3] = lVar8;
      FUN_1484cbe04(lVar8,&local_68);
      FUN_14845246c(param_1[0x70],1,&local_68);
      FUN_149666cd0(param_1,&local_80);
      lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_58 = L"InvertSelection";
      local_50 = 0xf;
      FUN_1446e940c(&local_98,&local_58);
      local_58 = L"UMeshSelectionTool";
      local_50 = 0x12;
      FUN_1446e940c(local_84,&local_58);
      FUN_140208bae(&local_58,local_84,&local_98,L"Invert Selection");
      local_90 = local_80;
      (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
                (lVar8 + 0x28,param_1[0x70],&local_90,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      lVar8 = FUN_14001cc68(8,0x10);
      FUN_1484cbd7e(lVar8,*(undefined4 *)((longlong)param_1 + 0x3ac),1);
      param_1[0xe3] = lVar8;
      FUN_1484cbe04(lVar8,&local_78);
      FUN_148452282(param_1[0x70],1,&local_78);
      FUN_149666cd0(param_1,&local_98);
      lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_58 = L"InvertSelection";
      local_50 = 0xf;
      FUN_1446e940c(local_84,&local_58);
      local_58 = L"UMeshSelectionTool";
      local_50 = 0x12;
      FUN_1446e940c(local_9c,&local_58);
      FUN_140208bae(&local_58,local_9c,local_84,L"Invert Selection");
      local_a8 = local_98;
      (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
                (lVar8 + 0x28,param_1[0x70],&local_a8,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x18))(lVar8 + 0x28);
      FUN_149663c04(param_1);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14966852c FUN_14966852c body=3470 status=ok
// SIG undefined FUN_14966852c(void)

void FUN_14966852c(longlong *param_1,char param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  code **ppcVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_348 [47];
  char local_319;
  longlong local_318;
  longlong *local_310;
  code *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined4 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2cc [4];
  undefined4 *local_2c8;
  undefined8 uStack_2c0;
  void *local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  ulonglong local_268;
  int local_260;
  undefined8 uStack_25c;
  int iStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  ulonglong local_240;
  undefined8 local_238;
  undefined4 local_22c;
  longlong local_228 [2];
  longlong *local_218;
  longlong local_208 [4];
  code *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined4 local_18c;
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  code **local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  code *local_108;
  undefined8 uStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  puVar6 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_2b8 = (void *)0x0;
  local_2b0 = *(int *)(puVar6 + 1);
  lVar13 = (longlong)local_2b0;
  _Src = (void *)*puVar6;
  if (lVar13 == 0) {
    local_2ac = 0;
  }
  else {
    puVar10 = (undefined4 *)0x0;
    FUN_144a06ca8(&local_2b8,local_2b0,0);
    memcpy(local_2b8,_Src,lVar13 << 2);
    if (local_2b0 != 0) {
      local_319 = param_2;
      lVar13 = FUN_14851bd54(param_1[0x54]);
      local_2c8 = (undefined4 *)0x0;
      uStack_2c0 = 0;
      FUN_146c36aac(lVar13,&local_2b8,&local_2c8);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)uStack_2c0 != 0) {
        local_2e8 = local_2c8 + (int)uStack_2c0;
        local_308 = (code *)(lVar13 + 0xb8);
        local_300 = param_1 + 0xdc;
        local_2f8 = local_208;
        local_2f0 = local_168;
        puVar10 = local_2c8;
        local_318 = lVar13;
        local_310 = param_1;
LAB_1496686b4:
        uVar4 = *puVar10;
        local_1d8 = 0;
        local_1c8 = &PTR_LAB_149f3aae0;
        local_1c0 = (int)local_318;
        uStack_1bc = (undefined4)((ulonglong)local_318 >> 0x20);
        local_1e8 = FUN_146be9588;
        local_288 = local_308;
        uStack_280 = CONCAT44(uStack_280._4_4_,uVar4);
        ppcVar8 = (code **)&local_288;
        uStack_1b8 = uVar4;
        FUN_146be94ac(&local_148,ppcVar8,&local_1e8);
        local_198 = 0xffffffffffffffff;
        local_188[0] = 0;
        local_178 = (longlong *)0x0;
        local_1c8 = (undefined **)local_e8;
        uStack_1d0 = CONCAT44(uStack_ec,uStack_f0);
        local_1e8 = local_108;
        uStack_1e0 = uStack_100;
        local_1c0 = local_e0;
        uStack_1bc = uStack_dc;
        uStack_1b8 = uStack_d8;
        iStack_1b4 = iStack_d4;
        local_1b0 = local_d0;
        uStack_1ac = uStack_cc;
        uStack_1a8 = CONCAT44(uStack_c4,uStack_c8);
        local_1a0 = local_c0;
        FUN_146be971a(local_188,&local_148);
        param_1 = local_310;
        local_18c = 0;
        FUN_146bfd1f0(&local_1e8);
        local_238 = 0xffffffffffffffff;
        local_228[0] = 0;
        local_218 = (longlong *)0x0;
        local_268 = local_c0;
        local_288 = (code *)CONCAT44(uStack_dc,local_e0);
        uStack_280 = CONCAT44(iStack_d4,uStack_d8);
        uStack_270 = CONCAT44(uStack_c4,uStack_c8);
        local_260 = local_e0;
        uStack_25c = CONCAT44(uStack_d8,uStack_dc);
        iStack_254 = iStack_d4;
        local_250 = local_d0;
        uStack_24c = uStack_cc;
        uStack_248 = (undefined4 *)CONCAT44(uStack_c4,uStack_c8);
        local_240 = local_c0;
        FUN_146be971a(local_228,&local_148);
        local_22c = 0;
        iVar15 = 0;
        do {
          FUN_146bfd1f0(ppcVar8);
          if (local_1e8 == local_288) {
            if ((int)uStack_1e0 == (int)uStack_280) {
              if ((int)uStack_1d0 == (int)uStack_270) {
                if (uStack_1d0._4_4_ == uStack_270._4_4_) goto LAB_1496688a6;
              }
            }
          }
          plVar9 = (longlong *)param_1[0xde];
          if ((longlong *)param_1[0xde] == (longlong *)0x0) {
            plVar9 = local_300;
          }
          uVar16 = local_190 + 0x1f;
          if (-1 < (int)local_190) {
            uVar16 = local_190;
          }
          iVar15 = (iVar15 + 1) -
                   (uint)((*(uint *)((longlong)plVar9 + (longlong)((int)uVar16 >> 5) * 4) >>
                           (local_190 & 0x1f) & 1) != 0);
          ppcVar8 = &local_1e8;
        } while( true );
      }
LAB_149668bc0:
      uVar4 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),local_319);
      if (*(int *)(param_1[0x5e] + 0xa8) == 5) {
        local_1c8 = (undefined **)0x0;
        local_1c0 = 0;
        local_1e8 = (code *)0x0;
        uStack_1e0 = 0;
        uStack_1bc = 0x80;
        uStack_1b8 = 0xffffffff;
        iStack_1b4 = 0;
        uStack_1a8 = 0;
        local_1a0 = local_1a0 & 0xffffffff00000000;
        local_318 = lVar13;
        FUN_145c3f772(&local_1e8,&local_b8);
        local_268 = 0;
        local_260 = 0;
        local_288 = (code *)0x0;
        uStack_280 = 0;
        uStack_25c = 0xffffffff00000080;
        iStack_254 = 0;
        uStack_248 = (undefined4 *)0x0;
        local_240 = local_240 & 0xffffffff00000000;
        FUN_14068ded2(&local_b8,0);
        local_2a8 = 0x100000000;
        local_298 = 0xffffffff;
        local_290 = 0;
        iVar15 = 0;
        local_2a0 = &local_1d8;
        if (local_1c0 != 0) {
          FUN_1449c0562(&local_2a8);
          iVar15 = local_1c0;
        }
        local_130 = local_298;
        uVar2 = local_130;
        local_128 = local_290;
        uStack_124 = local_28c;
        local_140 = local_2a8;
        local_138 = local_2a0;
        local_148 = &local_1e8;
        local_130._4_4_ = (int)((ulonglong)local_298 >> 0x20);
        if ((local_130._4_4_ != iVar15) || (local_2a0 != &local_1d8)) {
          iVar3 = local_130._4_4_;
          local_130 = uVar2;
          do {
            lVar13 = ((undefined8 *)param_1[0xe5])[1];
            if (lVar13 == 0) {
              uVar4 = FUN_146bc96d4(*(undefined8 *)param_1[0xe5]);
            }
            else {
              uVar4 = *(undefined4 *)
                       (*(longlong *)
                         (*(longlong *)(lVar13 + 0x20) +
                         (ulonglong)(*(uint *)(*local_148 + (longlong)iVar3 * 0xc) >> 9) * 8) +
                       (ulonglong)(*(uint *)(*local_148 + (longlong)iVar3 * 0xc) & 0x1ff) * 4);
            }
            local_2a8 = CONCAT44(local_2a8._4_4_,uVar4);
            FUN_144984904(&local_288,local_2cc,&local_2a8,0);
            local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~local_140._4_4_);
            FUN_1449c0562(&local_140);
            iVar3 = local_130._4_4_;
            uVar2 = local_130;
          } while (local_148 != &local_1e8 || (local_138 != &local_1d8 || local_130._4_4_ != iVar15)
                  );
        }
        local_130 = uVar2;
        uVar12 = *(int *)(local_318 + 0x140) * 0x200 + *(int *)(local_318 + 0x144);
        uVar16 = 0;
        if ((uVar12 != 0) &&
           (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_318 + 0x148) - 1U))) {
          uVar5 = 1;
          uVar7 = 1;
          if (1 < (int)uVar12) {
            uVar5 = uVar12;
          }
          do {
            uVar16 = uVar5;
            if (uVar5 == uVar7) break;
            uVar11 = uVar7 >> 9;
            uVar14 = uVar7 & 0x1ff;
            uVar16 = uVar7;
            uVar7 = uVar7 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_318 + 0x148))[uVar11] +
                                               (ulonglong)uVar14 * 2) - 1U));
        }
        if (uVar16 != uVar12) {
          lVar13 = local_318;
          do {
            local_148 = (code **)CONCAT44(local_148._4_4_,uVar16);
            lVar1 = ((undefined8 *)param_1[0xe5])[1];
            if (lVar1 == 0) {
              uVar5 = FUN_146bc96d4(*(undefined8 *)param_1[0xe5],uVar16);
              lVar13 = local_318;
            }
            else {
              uVar5 = *(uint *)(*(longlong *)
                                 (*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar16 >> 9) * 8) +
                               (ulonglong)(uVar16 & 0x1ff) * 4);
            }
            if ((int)uStack_280 != iStack_254) {
              puVar10 = uStack_248;
              if (uStack_248 == (undefined4 *)0x0) {
                puVar10 = &local_250;
              }
              for (iVar15 = puVar10[(int)local_240 - 1U & uVar5]; iVar15 != -1;
                  iVar15 = *(int *)(local_288 + (longlong)iVar15 * 0xc + 4)) {
                if (*(uint *)(local_288 + (longlong)iVar15 * 0xc) == uVar5) {
                  FUN_1447cbafe(&local_b8,&local_2a8,&local_148,0);
                  lVar13 = local_318;
                  break;
                }
              }
            }
            uVar5 = uVar16 + 1;
            if ((int)(uVar16 + 1) < (int)uVar12) {
              uVar5 = uVar12;
            }
            do {
              uVar7 = uVar5;
              if (uVar5 - 1 == uVar16) break;
              uVar16 = uVar16 + 1;
              uVar7 = uVar16;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar13 + 0x148) +
                                                   (ulonglong)(uVar16 >> 9) * 8) +
                                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
            uVar16 = uVar7;
          } while (uVar16 != uVar12);
        }
        local_240 = local_240 & 0xffffffff00000000;
        if (uStack_248 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_288);
        local_1a0 = local_1a0 & 0xffffffff00000000;
        uVar4 = CONCAT31((int3)(uVar12 >> 8),local_319);
        if (uStack_1a8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_1e8);
      }
      if ((int)uStack_b0 != local_84) {
        lVar13 = FUN_14001cc68(8,0x10);
        FUN_1484cbd7e(lVar13,*(undefined4 *)((longlong)param_1 + 0x3ac),uVar4);
        param_1[0xe3] = lVar13;
        FUN_1484cbe6a(lVar13,&local_b8);
        if ((char)uVar4 == '\0') {
          FUN_14845252a(param_1[0x70],1,&local_b8);
          FUN_149666cd0(param_1,&local_288);
          lVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
          local_1e8 = (code *)0x14bda10b2;
          uStack_1e0._0_4_ = 0xf;
          FUN_1446e940c(&local_148,&local_1e8);
          local_1e8 = (code *)0x14bdae78a;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x12);
          FUN_1446e940c(&local_2a8,&local_1e8);
          FUN_140208bae(&local_1e8,&local_2a8,&local_148,L"Shrink Selection");
          puVar6 = &local_2e0;
        }
        else {
          FUN_14845230c();
          FUN_149666cd0(param_1,&local_288);
          lVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
          local_1e8 = (code *)0x14bda111a;
          uStack_1e0._0_4_ = 0xd;
          FUN_1446e940c(&local_148,&local_1e8);
          local_1e8 = (code *)0x14bdae78a;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x12);
          FUN_1446e940c(&local_2a8,&local_1e8);
          FUN_140208bae(&local_1e8,&local_2a8,&local_148,L"Grow Selection");
          puVar6 = &local_2d8;
        }
        *puVar6 = local_288;
        (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x20))
                  (lVar13 + 0x28,param_1[0x70],puVar6,&local_1e8);
        if (local_1e8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_1e8 + 0x10))();
        }
        FUN_149663c04(param_1);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_b8);
      if (local_2c8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_2b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1496688a6:
  if (local_228[0] != 0) {
    plVar9 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar9 = local_2f8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_188[0] != 0) {
    plVar9 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar9 = local_2f0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_148 != (code **)0x0) {
    plVar9 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_128;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (iVar15 != 0) {
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_149f3aae0;
    local_1c0 = (int)local_318;
    uStack_1bc = (undefined4)((ulonglong)local_318 >> 0x20);
    local_1e8 = FUN_146be9588;
    local_288 = local_308;
    uStack_280 = CONCAT44(uStack_280._4_4_,uVar4);
    ppcVar8 = (code **)&local_288;
    uStack_1b8 = uVar4;
    FUN_146be94ac(&local_148,ppcVar8,&local_1e8);
    local_198 = 0xffffffffffffffff;
    local_188[0] = 0;
    local_178 = (longlong *)0x0;
    local_1e8 = local_108;
    uStack_1e0 = uStack_100;
    uStack_1d0 = CONCAT44(uStack_ec,uStack_f0);
    local_1c8 = (undefined **)local_e8;
    local_1c0 = local_e0;
    uStack_1bc = uStack_dc;
    uStack_1b8 = uStack_d8;
    iStack_1b4 = iStack_d4;
    local_1b0 = local_d0;
    uStack_1ac = uStack_cc;
    uStack_1a8 = CONCAT44(uStack_c4,uStack_c8);
    local_1a0 = local_c0;
    FUN_146be971a(local_188,&local_148);
    param_1 = local_310;
    local_18c = 0;
    FUN_146bfd1f0(&local_1e8);
    local_238 = 0xffffffffffffffff;
    local_228[0] = 0;
    local_218 = (longlong *)0x0;
    local_288 = (code *)CONCAT44(uStack_dc,local_e0);
    uStack_280 = CONCAT44(iStack_d4,uStack_d8);
    uStack_270 = CONCAT44(uStack_c4,uStack_c8);
    local_268 = local_c0;
    local_260 = local_e0;
    uStack_25c = CONCAT44(uStack_d8,uStack_dc);
    iStack_254 = iStack_d4;
    local_250 = local_d0;
    uStack_24c = uStack_cc;
    uStack_248 = (undefined4 *)CONCAT44(uStack_c4,uStack_c8);
    local_240 = local_c0;
    FUN_146be971a(local_228,&local_148);
    local_22c = 0;
    do {
      FUN_146bfd1f0(ppcVar8);
      if (local_1e8 == local_288) {
        if ((int)uStack_1e0 == (int)uStack_280) {
          if ((int)uStack_1d0 == (int)uStack_270) {
            if (uStack_1d0._4_4_ == uStack_270._4_4_) goto LAB_149668b71;
          }
        }
      }
      local_2a8 = CONCAT44(local_2a8._4_4_,local_190);
      plVar9 = (longlong *)param_1[0xde];
      if ((longlong *)param_1[0xde] == (longlong *)0x0) {
        plVar9 = local_300;
      }
      uVar16 = local_190 + 0x1f;
      if (-1 < (int)local_190) {
        uVar16 = local_190;
      }
      if (((*(uint *)((longlong)plVar9 + (longlong)((int)uVar16 >> 5) * 4) >> (local_190 & 0x1f) & 1
           ) == 0) == (bool)local_319) {
        FUN_1447cbafe(&local_b8,local_2cc,&local_2a8,0);
      }
      ppcVar8 = &local_1e8;
    } while( true );
  }
LAB_149668917:
  puVar10 = puVar10 + 1;
  lVar13 = local_318;
  if (puVar10 == local_2e8) goto LAB_149668bc0;
  goto LAB_1496686b4;
LAB_149668b71:
  if (local_228[0] != 0) {
    plVar9 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar9 = local_208;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_188[0] != 0) {
    plVar9 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar9 = local_168;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_148 != (code **)0x0) {
    plVar9 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_128;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  goto LAB_149668917;
}



// FUNCTION 1496692bc FUN_1496692bc body=839 status=ok
// SIG undefined FUN_1496692bc(void)

void FUN_1496692bc(longlong *param_1,char param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStack_138 [39];
  char local_111;
  longlong *local_110;
  undefined8 local_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar5 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(puVar5 + 1);
  lVar8 = (longlong)local_d0;
  _Src = (void *)*puVar5;
  if (lVar8 == 0) {
    local_cc = 0;
  }
  else {
    FUN_144a06ca8(&local_d8,local_d0,0);
    memcpy(local_d8,_Src,lVar8 << 2);
    if (local_d0 != 0) {
      uVar6 = FUN_14851bd54(param_1[0x54]);
      local_e8 = (longlong *)0x0;
      uStack_e0 = 0;
      local_b8 = 0;
      local_a8 = 0;
      local_f0 = uVar6;
      FUN_142984384(&local_f0,&local_d8);
      if ((longlong)(int)uStack_e0 == 0) {
        FUN_14966739e(param_1);
      }
      else {
        plVar1 = local_e8 + (int)uStack_e0;
        plVar11 = (longlong *)0x0;
        plVar9 = local_e8;
        local_111 = param_2;
        local_110 = param_1;
        do {
          plVar2 = (longlong *)*plVar9;
          if (plVar11 == (longlong *)0x0) {
LAB_1496694a1:
            plVar11 = plVar2;
          }
          else {
            if (param_2 == '\0') {
              dVar3 = (double)(int)plVar2[1];
              dVar4 = (double)(int)plVar11[1];
            }
            else {
              lVar8 = plVar2[1];
              dVar4 = 0.0;
              dVar3 = 0.0;
              if ((longlong)(int)lVar8 != 0) {
                lVar10 = *plVar2;
                lVar7 = 0;
                dVar3 = 0.0;
                do {
                  dVar12 = (double)FUN_146c14650(uVar6,*(undefined4 *)(lVar10 + lVar7));
                  dVar3 = dVar3 + dVar12;
                  lVar7 = lVar7 + 4;
                } while ((longlong)(int)lVar8 * 4 != lVar7);
              }
              lVar8 = plVar11[1];
              param_2 = local_111;
              if ((longlong)(int)lVar8 != 0) {
                lVar10 = *plVar11;
                dVar4 = 0.0;
                lVar7 = 0;
                do {
                  dVar12 = (double)FUN_146c14650(uVar6,*(undefined4 *)(lVar10 + lVar7));
                  dVar4 = dVar4 + dVar12;
                  lVar7 = lVar7 + 4;
                  param_2 = local_111;
                } while ((longlong)(int)lVar8 * 4 != lVar7);
              }
            }
            if (dVar4 < dVar3) goto LAB_1496694a1;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
        lVar8 = FUN_14001cc68(8,0x10);
        plVar1 = local_110;
        FUN_1484cbd7e(lVar8,*(undefined4 *)((longlong)local_110 + 0x3ac),0);
        plVar9 = local_e8;
        plVar1[0xe3] = lVar8;
        lVar8 = (longlong)(int)uStack_e0;
        if (lVar8 != 0) {
          lVar10 = 0;
          do {
            plVar2 = *(longlong **)((longlong)plVar9 + lVar10);
            if (plVar2 != plVar11) {
              FUN_1484cbe04(plVar1[0xe3],plVar2);
              FUN_14845246c(plVar1[0x70],1,plVar2);
            }
            lVar10 = lVar10 + 8;
          } while (lVar8 * 8 != lVar10);
        }
        FUN_149666cd0(plVar1,&local_f8);
        lVar8 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
        local_c8 = L"SelectLargestComponentByArea";
        local_c0 = 0x1c;
        FUN_1446e940c(local_fc,&local_c8);
        local_c8 = L"UMeshSelectionTool";
        local_c0 = 0x12;
        FUN_1446e940c(local_100,&local_c8);
        plVar1 = local_110;
        FUN_140208bae(&local_c8,local_100,local_fc,L"Select Largest Component By Area");
        local_108 = local_f8;
        (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))
                  (lVar8 + 0x28,plVar1[0x70],&local_108,&local_c8);
        if (local_c8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_c8 + 0x10))();
        }
        FUN_149663c04(plVar1);
      }
      FUN_146be9400(&local_e8);
    }
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149669604 FUN_149669604 body=1709 status=ok
// SIG undefined FUN_149669604(void)

void FUN_149669604(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_15c [4];
  wchar_t *local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined1 local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1[0x70] + 0x68) != 0) {
    local_a0 = FUN_14851bd54(param_1[0x54]);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_158 = *(wchar_t **)(param_1[0x70] + 0x60);
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    local_150._0_4_ = *(undefined4 *)(param_1[0x70] + 0x68);
    FUN_146bc855c(&local_f8,&local_158);
    FUN_148331be6(&local_a0,param_1[0x70] + 0x60);
    FUN_14967e242(&local_a0);
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_158 = L"OptimizeSelection";
    local_150._0_4_ = 0x11;
    FUN_1446e940c(&local_118,&local_158);
    local_158 = L"UMeshSelectionTool";
    local_150 = CONCAT44(local_150._4_4_,0x12);
    FUN_1446e940c(&local_120,&local_158);
    FUN_140208bae(&local_158,&local_120,&local_118,L"Optimize Selection");
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_158);
    if (local_158 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_158 + 0x10))();
    }
    lVar6 = FUN_14001cc68(8,0x10);
    FUN_1484cbd7e(lVar6,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
    param_1[0xe3] = lVar6;
    lVar6 = param_1[0x70];
    if (0 < (longlong)*(int *)(lVar6 + 0x68)) {
      uVar9 = (longlong)*(int *)(lVar6 + 0x68);
      do {
        lVar6 = param_1[0x70];
        lVar2 = *(longlong *)(lVar6 + 0x60);
        uVar1 = *(uint *)(lVar2 + -4 + uVar9 * 4);
        if ((int)uStack_90 != local_64) {
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          for (iVar10 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar1) * 4); iVar10 != -1;
              iVar10 = *(int *)(local_98 + (longlong)iVar10 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar10 * 0xc) == uVar1) goto LAB_149669850;
          }
        }
        uVar8 = *(uint *)(lVar6 + 0x68);
        if (uVar9 != uVar8) {
          iVar10 = uVar8 - (int)uVar9;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          memmove((void *)(lVar2 + uVar9 * 4 + -4),
                  (void *)(lVar2 + (longlong)(int)(uVar8 - iVar10) * 4),(longlong)iVar10 << 2);
          uVar8 = *(uint *)(lVar6 + 0x68);
        }
        *(uint *)(lVar6 + 0x68) = uVar8 - 1;
        FUN_1484cbdcc(param_1[0xe3],uVar1);
LAB_149669850:
        bVar3 = 1 < (longlong)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar3);
      lVar6 = param_1[0x70];
    }
    FUN_1484575e6(lVar6 + 0x28);
    FUN_149666cd0(param_1,&local_120);
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_158 = L"OptimizeSelection";
    local_150._0_4_ = 0x11;
    FUN_1446e940c(&local_118,&local_158);
    local_158 = L"UMeshSelectionTool";
    local_150 = CONCAT44(local_150._4_4_,0x12);
    FUN_1446e940c(local_124,&local_158);
    FUN_140208bae(&local_158,local_124,&local_118,L"Optimize Selection");
    local_130 = local_120;
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))
              (lVar6 + 0x28,param_1[0x70],&local_130,&local_158);
    if (local_158 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_158 + 0x10))();
    }
    lVar6 = FUN_14001cc68(8,0x10);
    FUN_1484cbd7e(lVar6,*(undefined4 *)((longlong)param_1 + 0x3ac),1);
    param_1[0xe3] = lVar6;
    iVar10 = (int)uStack_90 - local_64;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (*(int *)(param_1[0x70] + 0x6c) < iVar10) {
      FUN_14481578e(param_1[0x70] + 0x60);
    }
    local_118 = 0x100000000;
    local_108 = 0xffffffff;
    local_100 = 0;
    iVar10 = 0;
    local_110 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_118);
      iVar10 = local_70;
    }
    local_140 = local_108;
    uVar4 = local_140;
    local_138 = local_100;
    local_134 = local_fc;
    local_150 = local_118;
    local_148 = local_110;
    local_158 = (wchar_t *)&local_98;
    local_140._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    if ((local_140._4_4_ != iVar10) || (local_110 != local_88)) {
      iVar5 = local_140._4_4_;
      local_140 = uVar4;
      do {
        uVar1 = *(uint *)(*(longlong *)local_158 + (longlong)iVar5 * 0xc);
        if ((int)uStack_f0 != local_c4) {
          puVar7 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar7 = local_c0;
          }
          for (iVar5 = *(int *)(puVar7 + (ulonglong)(local_b0 - 1U & uVar1) * 4); iVar5 != -1;
              iVar5 = *(int *)(local_f8 + (longlong)iVar5 * 0xc + 4)) {
            if (*(uint *)(local_f8 + (longlong)iVar5 * 0xc) == uVar1) goto LAB_149669c13;
          }
        }
        FUN_1484cbdcc(param_1[0xe3],uVar1);
        lVar6 = param_1[0x70];
        iVar5 = *(int *)(lVar6 + 0x68);
        *(uint *)(lVar6 + 0x68) = iVar5 + 1U;
        if (*(uint *)(lVar6 + 0x6c) < iVar5 + 1U) {
          FUN_1446f48e2((longlong *)(lVar6 + 0x60),iVar5);
        }
        *(uint *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar5 * 4) = uVar1;
LAB_149669c13:
        local_140 = CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
        FUN_1449c0562(&local_150);
        iVar5 = local_140._4_4_;
        uVar4 = local_140;
      } while (local_158 != (wchar_t *)&local_98 ||
               (local_148 != local_88 || local_140._4_4_ != iVar10));
    }
    local_140 = uVar4;
    FUN_1484575e6(param_1[0x70] + 0x28);
    FUN_149666cd0(param_1,&local_118);
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_158 = L"OptimizeSelection";
    local_150._0_4_ = 0x11;
    FUN_1446e940c(local_124,&local_158);
    local_158 = L"UMeshSelectionTool";
    local_150 = CONCAT44(local_150._4_4_,0x12);
    FUN_1446e940c(local_15c,&local_158);
    FUN_140208bae(&local_158,local_15c,local_124,L"Optimize Selection");
    local_168 = local_118;
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))
              (lVar6 + 0x28,param_1[0x70],&local_168,&local_158);
    if (local_158 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_158 + 0x10))();
    }
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
    FUN_149663c04(param_1);
    local_b0 = 0;
    if (local_b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_f8);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149669cb4 FUN_149669cb4 body=1033 status=ok
// SIG undefined FUN_149669cb4(void)

void FUN_149669cb4(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_dc [4];
  uint local_d8;
  undefined4 uStack_d4;
  undefined1 local_cc [4];
  void *local_c8;
  uint local_c0;
  uint local_bc;
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar4 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_b8 = (void *)0x0;
  local_b0 = *(uint *)(puVar4 + 1);
  lVar9 = (longlong)(int)local_b0;
  pvVar2 = (void *)*puVar4;
  if (lVar9 == 0) {
    local_ac = 0;
  }
  else {
    FUN_144a06ca8(&local_b8,local_b0,0);
    memcpy(local_b8,pvVar2,lVar9 << 2);
    if (local_b0 != 0) {
      local_f0 = FUN_14851bd54();
      pvVar2 = local_b8;
      local_c8 = (void *)0x0;
      lVar9 = (longlong)(int)local_b0;
      local_c0 = local_b0;
      if (lVar9 == 0) {
        local_bc = 0;
        uVar3 = 0;
      }
      else {
        FUN_144a06ca8(&local_c8,local_b0,0);
        memcpy(local_c8,pvVar2,lVar9 << 2);
        uVar3 = local_c0;
      }
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      if (0 < (int)uVar3) {
        local_c0 = uVar3;
        do {
          uVar7 = (ulonglong)local_c0;
          local_c0 = local_c0 - 1;
          FUN_146c03f0e(local_f0,&local_a8,*(undefined4 *)((longlong)local_c8 + uVar7 * 4 + -4));
          lVar9 = 0;
          do {
            local_d8 = *(uint *)((longlong)&local_a8 + lVar9 * 4);
            if (local_d8 != 0xffffffff) {
              plVar5 = (longlong *)param_1[0xde];
              if ((longlong *)param_1[0xde] == (longlong *)0x0) {
                plVar5 = param_1 + 0xdc;
              }
              uVar3 = local_d8 + 0x1f;
              if (-1 < (int)local_d8) {
                uVar3 = local_d8;
              }
              if ((*(uint *)((longlong)plVar5 + (longlong)((int)uVar3 >> 5) * 4) >>
                   (local_d8 & 0x1f) & 1) == 0) {
                if ((int)uStack_90 != local_64) {
                  puVar6 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar6 = local_60;
                  }
                  for (iVar1 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & local_d8) * 4);
                      iVar1 != -1; iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0xc + 4)) {
                    if (*(uint *)(local_98 + (longlong)iVar1 * 0xc) == local_d8) goto LAB_149669e55;
                  }
                }
                FUN_1447cbafe(&local_98,local_cc,&local_d8,0);
                uVar3 = local_c0;
                lVar8 = (longlong)(int)local_c0;
                local_c0 = local_c0 + 1;
                if (local_bc < local_c0) {
                  FUN_1446f48e2(&local_c8,uVar3);
                }
                *(uint *)((longlong)local_c8 + lVar8 * 4) = local_d8;
              }
            }
LAB_149669e55:
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
        } while (0 < (int)local_c0);
        if ((int)uStack_90 != local_64) {
          lVar9 = FUN_14001cc68(8,0x10);
          FUN_1484cbd7e(lVar9,*(undefined4 *)((longlong)param_1 + 0x3ac),1);
          param_1[0xe3] = lVar9;
          FUN_1484cbe6a(lVar9,&local_98);
          FUN_14845230c(param_1[0x70],1,&local_98);
          FUN_149666cd0(param_1,&local_d8);
          lVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
          local_a8 = L"ExpandToConnected";
          local_a0 = 0x11;
          FUN_1446e940c(local_cc,&local_a8);
          local_a8 = L"UMeshSelectionTool";
          local_a0 = 0x12;
          FUN_1446e940c(local_dc,&local_a8);
          FUN_140208bae(&local_a8,local_dc,local_cc,L"Expand Selection");
          local_e8 = CONCAT44(uStack_d4,local_d8);
          (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x20))
                    (lVar9 + 0x28,param_1[0x70],&local_e8,&local_a8);
          if (local_a8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_a8 + 0x10))();
          }
          FUN_149663c04(param_1);
        }
        local_50 = 0;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a082e(&local_98);
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966a0be FUN_14966a0be body=688 status=ok
// SIG undefined FUN_14966a0be(void)

void FUN_14966a0be(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  code *local_80;
  wchar_t **local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void **local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_58;
  pvVar1 = (void *)*puVar3;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar4 << 2);
    iVar2 = local_58;
    if (local_58 != 0) {
      lVar4 = FUN_14851bd54(param_1[0x54]);
      if (iVar2 < *(int *)(lVar4 + 0x170)) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar3 = &PTR_LAB_14bdae7d0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        lVar4 = FUN_14001cc68(8,0x10);
        FUN_1484cbd7e(lVar4,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
        pvVar1 = local_60;
        param_1[0xe3] = lVar4;
        lVar4 = (longlong)local_58;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            FUN_1484cbdcc(param_1[0xe3],*(undefined4 *)((longlong)pvVar1 + lVar5));
            lVar5 = lVar5 + 4;
          } while (lVar4 * 4 != lVar5);
        }
        FUN_14845246c(param_1[0x70],1,&local_60);
        FUN_149666cd0(param_1,local_68);
        FUN_14966b386(puVar3,param_1[0x70],local_68);
        local_78 = (wchar_t **)&local_50;
        local_80 = FUN_14456eb04;
        local_50 = &local_60;
        FUN_14851c46c(param_1[0x54],&local_70);
        local_88 = local_70;
        local_70 = (longlong *)0x0;
        FUN_14966b386(puVar3,param_1[0x54]);
        lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_50 = (void **)0x14bda13ae;
        local_48 = 0x1c;
        FUN_1446e940c(local_8c,&local_50);
        local_50 = (void **)0x14bdae78a;
        local_48 = 0x12;
        FUN_1446e940c(local_90,&local_50);
        FUN_140208bae(&local_50,local_90,local_8c,L"Delete Faces");
        local_98 = puVar3;
        (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28,param_1,&local_98,&local_50);
        if (local_50 != (void **)0x0) {
          (**(code **)((longlong)*local_50 + 0x10))();
        }
        *(undefined1 *)(param_1 + 0xe0) = 1;
        FUN_149663c04(param_1);
        *(undefined1 *)(param_1 + 0xe7) = 1;
        *(undefined1 *)(param_1 + 0x75) = 0;
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x40))(local_70,1);
        }
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966a370 FUN_14966a370 body=506 status=ok
// SIG undefined FUN_14966a370(void)

void FUN_14966a370(longlong *param_1)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80;
  code *local_78;
  wchar_t **local_70;
  longlong *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void **local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar1 + 1);
  lVar2 = (longlong)local_58;
  _Src = (void *)*puVar1;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 << 2);
    if (local_58 != 0) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar1 = &PTR_LAB_14bdae7d0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_70 = (wchar_t **)&local_50;
      local_78 = FUN_14456eb72;
      local_50 = &local_60;
      FUN_14851c46c(param_1[0x54],&local_68);
      local_80 = local_68;
      local_68 = (longlong *)0x0;
      FUN_14966b386(puVar1,param_1[0x54]);
      lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_50 = (void **)0x14bda140a;
      local_48 = 0x20;
      FUN_1446e940c(local_84,&local_50);
      local_50 = (void **)0x14bdae78a;
      local_48 = 0x12;
      FUN_1446e940c(local_88,&local_50);
      FUN_140208bae(&local_50,local_88,local_84,L"Disconnect Faces");
      local_90 = puVar1;
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_90,&local_50);
      if (local_50 != (void **)0x0) {
        (**(code **)((longlong)*local_50 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0xe0) = 1;
      *(undefined1 *)(param_1 + 0xe7) = 1;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x40))(local_68,1);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966a56c FUN_14966a56c body=572 status=ok
// SIG undefined FUN_14966a56c(void)

void FUN_14966a56c(longlong *param_1)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_1b8 [40];
  undefined8 *local_190;
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  longlong *local_180;
  code *local_178;
  wchar_t **local_170;
  longlong *local_168;
  void *local_160;
  int local_158;
  undefined4 local_154;
  wchar_t *local_150;
  longlong *local_148;
  wchar_t local_140 [8];
  int local_130;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  puVar1 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_160 = (void *)0x0;
  local_158 = *(int *)(puVar1 + 1);
  lVar3 = (longlong)local_158;
  _Src = (void *)*puVar1;
  if (lVar3 == 0) {
    local_154 = 0;
  }
  else {
    FUN_144a06ca8(&local_160,local_158,0);
    memcpy(local_160,_Src,lVar3 << 2);
    if (local_158 != 0) {
      uVar2 = FUN_14851bd54(param_1[0x54]);
      FUN_146c6a7a4(local_140,uVar2,&local_160,1);
      if (local_130 != 0) {
        puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar1 = &PTR_LAB_14bdae7d0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        local_170 = &local_150;
        local_178 = FUN_14456ee1a;
        local_150 = local_140;
        local_148 = param_1;
        FUN_14851c46c(param_1[0x54],&local_168);
        local_180 = local_168;
        local_168 = (longlong *)0x0;
        FUN_14966b386(puVar1,param_1[0x54]);
        lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_150 = L"MeshSelectionToolSmoothBoundary";
        local_148._0_4_ = 0x1f;
        FUN_1446e940c(local_184,&local_150);
        local_150 = L"UMeshSelectionTool";
        local_148 = (longlong *)CONCAT44(local_148._4_4_,0x12);
        FUN_1446e940c(local_188,&local_150);
        FUN_140208bae(&local_150,local_188,local_184,L"Smooth Selection Boundary");
        local_190 = puVar1;
        (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))
                  (lVar3 + 0x28,param_1,&local_190,&local_150);
        if (local_150 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_150 + 0x10))();
        }
        FUN_149663c04(param_1);
        *(undefined1 *)(param_1 + 0xe7) = 1;
        if (local_168 != (longlong *)0x0) {
          (**(code **)(*local_168 + 0x40))(local_168,1);
        }
      }
      FUN_146bc7b3e(local_140);
    }
  }
  if (local_160 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966a7aa FUN_14966a7aa body=1735 status=ok
// SIG undefined FUN_14966a7aa(void)

void FUN_14966a7aa(longlong *param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_cf8 [32];
  undefined8 *local_cd8;
  undefined1 local_cd0;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  longlong local_ca8;
  int local_ca0;
  void *local_c98;
  int local_c90;
  undefined4 local_c8c;
  void *local_c88;
  int local_c80;
  undefined8 local_c78 [12];
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined1 *local_ba0;
  wchar_t *local_b98;
  int local_b90;
  undefined4 local_b8c;
  wchar_t *local_b88;
  int local_b80;
  longlong local_b68;
  undefined8 local_b58 [12];
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined1 local_ae8 [1488];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4ec;
  undefined4 local_4e4;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined4 local_494;
  undefined8 local_488;
  undefined4 local_480;
  undefined2 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined2 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_34c;
  undefined4 local_344;
  undefined8 local_338;
  undefined4 local_330;
  undefined1 local_328;
  undefined1 local_327;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_290;
  undefined4 local_288;
  undefined2 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [520];
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_cf8;
  puVar3 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_b98 = (wchar_t *)0x0;
  local_b90 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_b90;
  pvVar2 = (void *)*puVar3;
  if (lVar5 == 0) {
    local_b8c = 0;
  }
  else {
    FUN_144a06ca8(&local_b98,local_b90,0);
    memcpy(local_b98,pvVar2,lVar5 << 2);
    if (local_b90 != 0) {
      lVar5 = FUN_14851bd54(param_1[0x54]);
      if (local_b90 != *(int *)(lVar5 + 0x170)) {
        local_cd8 = (undefined8 *)((ulonglong)local_cd8 & 0xffffffffffffff00);
        FUN_1411b354a(local_258,0,0,0);
        FUN_14582eef4(local_258,0);
        FUN_14582ed12(local_258);
        FUN_146c02390(local_50,*(undefined8 *)(lVar5 + 0x208),1,0);
        local_4f8 = 0;
        local_4f0 = 0;
        local_518 = 0;
        uStack_510 = 0;
        local_4ec = 0xffffffff00000080;
        local_4e4 = 0;
        local_4d8 = 0;
        local_4d0 = 0;
        local_4a8 = 0;
        local_4a0 = 0;
        local_4c8 = 0;
        uStack_4c0 = 0;
        local_49c = 0xffffffff00000080;
        local_494 = 0;
        local_488 = 0;
        local_480 = 0;
        local_478 = 0x101;
        local_450 = 0;
        local_448 = 0;
        local_470 = 0;
        uStack_468 = 0;
        local_444 = 0xffffffff00000080;
        local_43c = 0;
        local_430 = 0;
        local_428 = 0;
        local_400 = 0;
        local_3f8 = 0;
        local_420 = 0;
        uStack_418 = 0;
        local_3f4 = 0xffffffff00000080;
        local_3ec = 0;
        local_3e0 = 0;
        local_3d8 = 0;
        local_3d0 = 0x101;
        local_3a8 = 0;
        local_3a0 = 0;
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_39c = 0xffffffff00000080;
        local_394 = 0;
        local_388 = 0;
        local_380 = 0;
        local_358 = 0;
        local_350 = 0;
        local_378 = 0;
        uStack_370 = 0;
        local_34c = 0xffffffff00000080;
        local_344 = 0;
        local_338 = 0;
        local_330 = 0;
        local_327 = 1;
        local_328 = 1;
        local_300 = 0;
        local_2f8 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_2f4 = 0xffffffff00000080;
        local_2ec = 0;
        local_2e0 = 0;
        local_2d8 = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_2a4 = 0xffffffff00000080;
        local_29c = 0;
        local_290 = 0;
        local_288 = 0;
        local_280 = 0x101;
        local_278 = 0;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_cd8 = &local_c18;
        local_bb8 = 0;
        uStack_bb0 = 0;
        local_bc8 = 0;
        uStack_bc0 = 0;
        local_bd8 = 0;
        uStack_bd0 = 0;
        local_be8 = 0;
        uStack_be0 = 0;
        local_bf8 = 0;
        uStack_bf0 = 0;
        local_c08 = 0;
        uStack_c00 = 0;
        local_c18 = 0;
        uStack_c10 = 0;
        local_b88 = local_b98;
        local_b80 = local_b90;
        local_cd0 = 1;
        local_ba0 = local_258;
        FUN_146bce922(&local_ba0,lVar5);
        FUN_14851b8ac(param_1[0x54],local_c78);
        lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
        if (param_2 == '\0') {
          local_b88 = L"MeshSelectionToolDuplicate";
          local_b80 = 0x1a;
          FUN_1446e940c(&local_cc8,&local_b88);
          local_b88 = L"UMeshSelectionTool";
          local_b80 = 0x12;
          FUN_1446e940c(&local_c88,&local_b88);
          pwVar7 = L"Duplicate";
        }
        else {
          local_b88 = L"MeshSelectionToolSeparate";
          local_b80 = 0x19;
          FUN_1446e940c(&local_cc8,&local_b88);
          local_b88 = L"UMeshSelectionTool";
          local_b80 = 0x12;
          FUN_1446e940c(&local_c88,&local_b88);
          pwVar7 = L"Separate";
        }
        FUN_140208bae(&local_b88,&local_c88,&local_cc8,pwVar7);
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))((longlong *)(lVar5 + 0x28),&local_b88);
        if (local_b88 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_b88 + 0x10))();
        }
        FUN_148506417(&local_c88,param_1[0x14],0);
        pvVar2 = local_c88;
        local_c98 = (void *)0x0;
        local_c90 = local_c80;
        if ((longlong)local_c80 == 0) {
          local_c8c = 0;
        }
        else {
          FUN_1411312f2(&local_c98,local_c80,0);
          memcpy(local_c98,pvVar2,(longlong)local_c80 << 3);
        }
        lVar5 = FUN_1485062af(param_1[0x14]);
        local_b88 = *(wchar_t **)(lVar5 + 0x18);
        FUN_1400021e4(&local_b88,&local_ca8);
        FUN_14850577a(&local_b88,1);
        local_b68 = param_1[0x73];
        if ((local_b68 != 0) && (DAT_14c950c29 != 0)) {
          FUN_14689c22e(local_b68);
        }
        puVar3 = local_c78;
        puVar6 = local_b58;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        if (local_ca0 < 2) {
          FUN_140056680(&local_cc8,L"Submesh");
        }
        else {
          FUN_1449b8608(&local_cc8,&local_ca8,L"_Submesh");
        }
        if (CONCAT44(uStack_af4,local_af8) != 0) {
          FUN_1400020a8();
        }
        local_af8 = local_cc8;
        uStack_af4 = uStack_cc4;
        uStack_af0 = uStack_cc0;
        uStack_aec = uStack_cbc;
        FUN_1457c8d02(local_ae8,&local_c98);
        FUN_148505bae(&local_b88,local_258);
        uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
        FUN_148505c7a(&local_cc8,uVar4,&local_b88);
        if (((char)local_cc8 == '\0') && (lVar5 = CONCAT44(uStack_cbc,uStack_cc0), lVar5 != 0)) {
          iVar1 = (int)param_1[0x72];
          *(uint *)(param_1 + 0x72) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x394) < iVar1 + 1U) {
            FUN_140b51998(param_1 + 0x71,iVar1);
            lVar5 = CONCAT44(uStack_cbc,uStack_cc0);
          }
          *(longlong *)(param_1[0x71] + (longlong)iVar1 * 8) = lVar5;
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
        }
        lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
        if (param_2 != '\0') {
          FUN_14966a0be(param_1);
        }
        *(undefined1 *)(param_1 + 0xe7) = 1;
        FUN_1484c7624(&local_b88);
        if (local_ca8 != 0) {
          FUN_1400020a8();
        }
        if (local_c98 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c88 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_146bc8622(&local_c18);
        FUN_146bfdcfe(&local_518);
        FUN_141082778(local_258);
      }
    }
  }
  if (local_b98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_cf8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966ae72 FUN_14966ae72 body=642 status=ok
// SIG undefined FUN_14966ae72(void)

void FUN_14966ae72(longlong *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  code *local_80;
  wchar_t **local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void **local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_58;
  pvVar1 = (void *)*puVar2;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar3 << 2);
    if (local_58 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar2 = &PTR_LAB_14bdae7d0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      lVar3 = FUN_14001cc68(8,0x10);
      FUN_1484cbd7e(lVar3,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
      pvVar1 = local_60;
      param_1[0xe3] = lVar3;
      lVar3 = (longlong)local_58;
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          FUN_1484cbdcc(param_1[0xe3],*(undefined4 *)((longlong)pvVar1 + lVar4));
          lVar4 = lVar4 + 4;
        } while (lVar3 * 4 != lVar4);
      }
      FUN_14845246c(param_1[0x70],1,&local_60);
      FUN_149666cd0(param_1,local_68);
      FUN_14966b386(puVar2,param_1[0x70],local_68);
      local_78 = (wchar_t **)&local_50;
      local_80 = FUN_14456ec7e;
      local_50 = &local_60;
      FUN_14851c46c(param_1[0x54],&local_70);
      local_88 = local_70;
      local_70 = (longlong *)0x0;
      FUN_14966b386(puVar2,param_1[0x54]);
      lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_50 = (void **)0x14bda1518;
      local_48 = 0x1a;
      FUN_1446e940c(local_8c,&local_50);
      local_50 = (void **)0x14bdae78a;
      local_48 = 0x12;
      FUN_1446e940c(local_90,&local_50);
      FUN_140208bae(&local_50,local_90,local_8c,L"Flip Face Orientations");
      local_98 = puVar2;
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1,&local_98,&local_50);
      if (local_50 != (void **)0x0) {
        (**(code **)((longlong)*local_50 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0xe7) = 1;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x40))(local_70,1);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966b0f6 FUN_14966b0f6 body=654 status=ok
// SIG undefined FUN_14966b0f6(void)

void FUN_14966b0f6(longlong *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  code *local_80;
  wchar_t **local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void **local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)FUN_148452262(param_1[0x70],1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_58;
  pvVar1 = (void *)*puVar2;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar3 << 2);
    if (local_58 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar2 = &PTR_LAB_14bdae7d0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      lVar3 = FUN_14001cc68(8,0x10);
      FUN_1484cbd7e(lVar3,*(undefined4 *)((longlong)param_1 + 0x3ac),0);
      pvVar1 = local_60;
      param_1[0xe3] = lVar3;
      lVar3 = (longlong)local_58;
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          FUN_1484cbdcc(param_1[0xe3],*(undefined4 *)((longlong)pvVar1 + lVar4));
          lVar4 = lVar4 + 4;
        } while (lVar3 * 4 != lVar4);
      }
      FUN_14845246c(param_1[0x70],1,&local_60);
      FUN_149666cd0(param_1,local_68);
      FUN_14966b386(puVar2,param_1[0x70],local_68);
      local_78 = (wchar_t **)&local_50;
      local_80 = FUN_14456ed0a;
      local_50 = &local_60;
      local_48 = param_1;
      FUN_14851c46c(param_1[0x54],&local_70);
      local_88 = local_70;
      local_70 = (longlong *)0x0;
      FUN_14966b386(puVar2,param_1[0x54]);
      lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_50 = (void **)0x14bda1570;
      local_48._0_4_ = 0x1c;
      FUN_1446e940c(local_8c,&local_50);
      local_50 = (void **)0x14bdae78a;
      local_48 = (longlong *)CONCAT44(local_48._4_4_,0x12);
      FUN_1446e940c(local_90,&local_50);
      FUN_140208bae(&local_50,local_90,local_8c,L"Create Polygroup");
      local_98 = puVar2;
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1,&local_98,&local_50);
      if (local_50 != (void **)0x0) {
        (**(code **)((longlong)*local_50 + 0x10))();
      }
      FUN_149663c04(param_1);
      *(undefined1 *)(param_1 + 0xe7) = 1;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x40))(local_70,1);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966b386 FUN_14966b386 body=308 status=ok
// SIG undefined FUN_14966b386(void)

void FUN_14966b386(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14bdae7b0;
  plVar1 = plVar6 + 3;
  plVar6[2] = 0;
  plVar6[3] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_14485c47a(plVar6 + 2,param_2);
  if (plVar1 != param_3) {
    plVar4 = (longlong *)*plVar1;
    *plVar1 = *param_3;
    *param_3 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x40))(plVar4,1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14967e986((longlong *)(param_1 + 8),iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014966b49b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x40))(param_3,1);
    return;
  }
  return;
}



// FUNCTION 14966b4ea FUN_14966b4ea body=76 status=ok
// SIG undefined FUN_14966b4ea(void)

void FUN_14966b4ea(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(int *)(lVar2 + 0x128) == 0) {
      *(undefined4 *)(lVar2 + 0x128) = 1;
    }
  }
  return;
}



// FUNCTION 14966b54b FUN_14966b54b body=148 status=ok
// SIG undefined FUN_14966b54b(void)

undefined8 FUN_14966b54b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459faf6e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966b5e0 FUN_14966b5e0 body=753 status=ok
// SIG undefined FUN_14966b5e0(void)

undefined8 * FUN_14966b5e0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *_Dst;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  cVar2 = *(char *)(*(longlong *)(lVar6 + 0xb8) + 0xa8);
  if (cVar2 == '\x02') {
    _Dst = (undefined8 *)FUN_14001cc68(0x170);
    memset(_Dst,0,0x170);
    FUN_14845abbc(_Dst);
    _Dst[0x11] = 0;
    _Dst[0x12] = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(_Dst + 0x13) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)_Dst + 0x9c) = uVar3;
    *(undefined4 *)(_Dst + 0x14) = uVar4;
    *(undefined4 *)((longlong)_Dst + 0xa4) = uVar5;
    _Dst[0x15] = DAT_14c8464f0;
    _Dst[0x16] = 0;
    _Dst[0x17] = 0;
    _Dst[0x18] = 0;
    _Dst[0x19] = 0x3ff0000000000000;
    *_Dst = &PTR_FUN_14af7af70;
    _Dst[0x2c] = 0x4066800000000000;
    *(undefined1 *)(_Dst + 0x2d) = 0;
    lVar6 = *(longlong *)(param_1 + 8);
    fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb8) + 0xb8);
  }
  else {
    if (cVar2 == '\x01') {
      _Dst = (undefined8 *)FUN_14001cc68(0x180);
      memset(_Dst,0,0x180);
      FUN_14845abbc(_Dst);
      _Dst[0x11] = 0;
      _Dst[0x12] = 0;
      uVar5 = DAT_14c8464e8._4_4_;
      uVar4 = (undefined4)DAT_14c8464e8;
      uVar3 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(_Dst + 0x13) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)_Dst + 0x9c) = uVar3;
      *(undefined4 *)(_Dst + 0x14) = uVar4;
      *(undefined4 *)((longlong)_Dst + 0xa4) = uVar5;
      _Dst[0x15] = DAT_14c8464f0;
      _Dst[0x16] = 0;
      _Dst[0x17] = 0;
      _Dst[0x18] = 0;
      _Dst[0x19] = 0x3ff0000000000000;
      *_Dst = &PTR_FUN_14af7af90;
      _Dst[0x2c] = 0x4059000000000000;
      _Dst[0x2d] = 0x4059000000000000;
      *(undefined4 *)(_Dst + 0x2e) = 0;
      lVar6 = *(longlong *)(param_1 + 8);
      _Dst[0x2d] = (double)*(float *)(*(longlong *)(lVar6 + 0xb8) + 0xc0);
      _Dst[0x2c] = (double)*(float *)(*(longlong *)(lVar6 + 0xb8) + 0xc0 +
                                     (ulonglong)(*(byte *)(*(longlong *)(lVar6 + 0xb8) + 0xc4) ^ 1)
                                     * 8);
      cVar2 = *(char *)(*(longlong *)(lVar6 + 0xb8) + 0xbc);
      if (cVar2 == '\x01') {
        *(undefined4 *)(_Dst + 0x2e) = 1;
      }
      else if (cVar2 == '\0') {
        *(undefined4 *)(_Dst + 0x2e) = 0;
      }
      else {
        *(undefined4 *)(_Dst + 0x2e) = 2;
      }
      goto LAB_14966b89f;
    }
    if (cVar2 != '\0') {
      _Dst = (undefined8 *)0x0;
      goto LAB_14966b89f;
    }
    _Dst = (undefined8 *)FUN_14001cc68(0x170);
    memset(_Dst,0,0x170);
    FUN_14845abbc(_Dst);
    _Dst[0x11] = 0;
    _Dst[0x12] = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(_Dst + 0x13) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)_Dst + 0x9c) = uVar3;
    *(undefined4 *)(_Dst + 0x14) = uVar4;
    *(undefined4 *)((longlong)_Dst + 0xa4) = uVar5;
    _Dst[0x15] = DAT_14c8464f0;
    _Dst[0x16] = 0;
    _Dst[0x17] = 0;
    _Dst[0x18] = 0;
    _Dst[0x19] = 0x3ff0000000000000;
    *_Dst = &PTR_FUN_14af7af30;
    _Dst[0x2c] = 0x4056800000000000;
    *(undefined1 *)(_Dst + 0x2d) = 0;
    lVar6 = *(longlong *)(param_1 + 8);
    fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb8) + 0xb4);
  }
  _Dst[0x2c] = (double)fVar1;
  *(undefined1 *)(_Dst + 0x2d) = *(undefined1 *)(*(longlong *)(lVar6 + 0xb8) + 0xcc);
LAB_14966b89f:
  FUN_14966b8d2(lVar6,_Dst);
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 14966b8d2 FUN_14966b8d2 body=447 status=ok
// SIG undefined FUN_14966b8d2(void)

void FUN_14966b8d2(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar12 = *(undefined8 *)(param_1 + 0xe0);
  plVar13 = *(longlong **)(param_1 + 0xe8);
  if (plVar13 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = uVar12;
    plVar14 = *(longlong **)(param_2 + 0x90);
    if (plVar14 == (longlong *)0x0) goto LAB_14966b985;
    *(undefined8 *)(param_2 + 0x90) = 0;
LAB_14966b94d:
    LOCK();
    plVar13 = plVar14 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_14966b985;
    (**(code **)*plVar14)();
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar13 = plVar14;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x88) = uVar12;
    plVar14 = *(longlong **)(param_2 + 0x90);
    if (plVar13 != plVar14) {
      *(longlong **)(param_2 + 0x90) = plVar13;
      if (plVar14 == (longlong *)0x0) goto LAB_14966b985;
      goto LAB_14966b94d;
    }
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 != 0) goto LAB_14966b985;
    (**(code **)*plVar13)();
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
LAB_14966b985:
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    uVar12 = FUN_145a7b1c0();
    plVar13 = (longlong *)FUN_144718840(lVar3,uVar12);
  }
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_d8);
  local_78 = local_d8;
  uStack_70 = uStack_d0;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  local_58 = local_b8;
  uStack_54 = uStack_b4;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  local_48 = local_a8;
  local_40 = local_98;
  uStack_3c = uStack_94;
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  local_30 = local_88;
  FUN_14846a4a6(param_2);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_1 + 0x178);
  uVar12 = *(undefined8 *)(param_1 + 0x148);
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  uVar4 = *(undefined4 *)(param_1 + 0x158);
  uVar5 = *(undefined4 *)(param_1 + 0x15c);
  uVar6 = *(undefined4 *)(param_1 + 0x160);
  uVar7 = *(undefined4 *)(param_1 + 0x164);
  uVar8 = *(undefined4 *)(param_1 + 0x16c);
  uVar9 = *(undefined4 *)(param_1 + 0x170);
  uVar10 = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_2 + 0xbc) = uVar8;
  *(undefined4 *)(param_2 + 0xc0) = uVar9;
  *(undefined4 *)(param_2 + 0xc4) = uVar10;
  *(undefined4 *)(param_2 + 0xa8) = uVar4;
  *(undefined4 *)(param_2 + 0xac) = uVar5;
  *(undefined4 *)(param_2 + 0xb0) = uVar6;
  *(undefined4 *)(param_2 + 0xb4) = uVar7;
  *(undefined8 *)(param_2 + 0x98) = uVar12;
  *(undefined8 *)(param_2 + 0xa0) = uVar11;
  *(double *)(param_2 + 0xd8) = (double)*(float *)(*(longlong *)(param_1 + 0xb8) + 0xac);
  *(double *)(param_2 + 0xd0) = (double)*(float *)(*(longlong *)(param_1 + 0xb8) + 0xb0);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966ba92 FUN_14966ba92 body=53 status=ok
// SIG undefined FUN_14966ba92(void)

undefined8 FUN_14966ba92(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x388))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x1b];
    if (lVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x91));
    }
  }
  return uVar3;
}



// FUNCTION 14966bac8 FUN_14966bac8 body=5531 status=ok
// SIG undefined FUN_14966bac8(void)

void FUN_14966bac8(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  code *pcVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  float fVar28;
  double dVar29;
  undefined1 auStack_448 [32];
  ulonglong local_428;
  longlong local_420;
  undefined1 local_414 [4];
  void *local_410;
  int local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  code *local_3a8;
  undefined8 uStack_3a0;
  code *local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  code *local_348;
  longlong lStack_340;
  longlong *local_338;
  longlong lStack_330;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_1484416be();
  plVar20 = (longlong *)FUN_14966d064(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0x17] = (longlong)plVar20;
  FUN_140056680(&local_308,&DAT_149dfb77a);
  (**(code **)(*plVar20 + 0x2a8))(plVar20,param_1,&local_308);
  if (CONCAT44(uStack_304,local_308) != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  lVar21 = FUN_14966d0f9(param_1);
  if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar21);
  }
  param_1[0x18] = lVar21;
  FUN_14485c47a(lVar21 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  plVar20 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar20[1] = (longlong)&DAT_100000001;
  *plVar20 = (longlong)&PTR_FUN_149fab260;
  local_428 = local_428 & 0xffffffffffffff00;
  FUN_1411b354a(plVar20 + 2,0,0,0);
  if (plVar20 == (longlong *)0x0) {
    param_1[0x1c] = 0x10;
    plVar24 = (longlong *)param_1[0x1d];
    if (plVar24 == (longlong *)0x0) goto LAB_14966bcf7;
    param_1[0x1d] = 0;
LAB_14966bc74:
    LOCK();
    plVar26 = plVar24 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
    if (plVar20 == (longlong *)0x0) goto LAB_14966bcf7;
  }
  else {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)(plVar20 + 2);
    plVar24 = (longlong *)param_1[0x1d];
    if (plVar20 == plVar24) {
      LOCK();
      plVar24 = plVar20 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    else {
      param_1[0x1d] = (longlong)plVar20;
      if (plVar24 != (longlong *)0x0) goto LAB_14966bc74;
    }
  }
  LOCK();
  plVar24 = plVar20 + 1;
  *(int *)plVar24 = (int)*plVar24 + -1;
  UNLOCK();
  if ((int)*plVar24 == 0) {
    (**(code **)*plVar20)(plVar20);
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
LAB_14966bcf7:
  uStack_3a0 = (code *)((ulonglong)uStack_3a0._4_4_ << 0x20);
  local_3a8 = (code *)0x3e800000000;
  FUN_148506727(&local_308,param_1[0x14]);
  FUN_146c00942(param_1[0x1c],&local_308);
  FUN_141082778(&local_308);
  lVar21 = param_1[0x14];
  if (lVar21 == 0) {
    plVar20 = (longlong *)0x0;
  }
  else {
    uVar22 = FUN_145a7b1c0();
    plVar20 = (longlong *)FUN_144718840(lVar21,uVar22);
  }
  (**(code **)(*plVar20 + 0x28))(plVar20,&local_308);
  (**(code **)(*plVar20 + 0x20))(plVar20,0);
  uVar22 = FUN_1409ffe1d();
  lVar21 = FUN_1484e47e5(uVar22);
  if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar21);
  }
  param_1[0x1e] = lVar21;
  uVar22 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_14851b11a(lVar21,uVar22,&local_308);
  FUN_148558526(param_1[0x1e],param_1[0x14]);
  FUN_14851bbe8(param_1[0x1e],param_1[0x1c],1,0xf);
  lVar21 = param_1[0x1e];
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar22 = FUN_14855822c(uVar22,&DAT_149e1e2f8,0xbf000000,0x3ecccccd);
  FUN_14851b37c(lVar21,0,uVar22);
  FUN_14851bab8(param_1[0x1e],*(undefined1 *)(param_1[0x17] + 0xcd));
  FUN_145c688c4(param_1[0x1c],&local_3d8,0);
  dVar6 = DAT_14c8464f0;
  dVar8 = DAT_14c8464e8;
  dVar7 = DAT_14c8464e0;
  dVar4 = DAT_14c8464e0;
  dVar5 = DAT_14c8464e8;
  dVar9 = DAT_14c8464f0;
  if (((local_3d8 <= local_3c0) && (local_3d0 <= local_3b8)) && (local_3c8 <= local_3b0)) {
    dVar14 = (double)CONCAT44(uStack_304,local_308);
    dVar15 = (double)CONCAT44(uStack_2fc,uStack_300);
    dVar16 = (double)CONCAT44(uStack_2f4,local_2f8);
    auVar17._8_4_ = uStack_2c0;
    auVar17._0_8_ = CONCAT44(uStack_2c4,local_2c8);
    auVar17._12_4_ = uStack_2bc;
    dVar4 = (local_3c0 + local_3d8) * 0.5 * (double)CONCAT44(uStack_2c4,local_2c8);
    dVar5 = (local_3b8 + local_3d0) * 0.5 * auVar17._8_8_;
    dVar29 = (local_3b0 + local_3c8) * 0.5 * (double)CONCAT44(uStack_2b4,local_2b8);
    dVar9 = dVar5 * dVar14 - dVar4 * dVar15;
    dVar10 = dVar29 * dVar15 - dVar5 * dVar16;
    dVar12 = dVar4 * dVar16 - dVar14 * dVar29;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = local_3b0 - local_3c8;
    dVar8 = local_3b8 - local_3d0;
    dVar7 = local_3c0 - local_3d8;
    dVar4 = (dVar9 * dVar15 - dVar12 * dVar16) +
            (double)CONCAT44(uStack_2ec,uStack_2f0) * dVar10 + dVar4 + local_2e8;
    dVar5 = (dVar16 * dVar10 - dVar14 * dVar9) +
            (double)CONCAT44(uStack_2ec,uStack_2f0) * dVar12 + dVar5 + dStack_2e0;
    dVar9 = dVar9 * (double)CONCAT44(uStack_2ec,uStack_2f0) + dVar29 +
            (dVar12 * dVar14 - dVar10 * dVar15) + local_2d8;
  }
  plVar24 = param_1 + 0x26;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x26) = auVar11;
  param_1[0x28] = (longlong)dVar9;
  dVar6 = ABS((double)CONCAT44(uStack_2b4,local_2b8)) * dVar6;
  dVar8 = ABS((double)CONCAT44(uStack_2bc,uStack_2c0)) * dVar8;
  dVar7 = ABS((double)CONCAT44(uStack_2c4,local_2c8)) * dVar7;
  if ((dVar6 < dVar8) || (dVar6 < dVar7)) {
    if (dVar7 <= dVar8) {
      local_3f8 = *plVar24;
      uStack_3f0 = param_1[0x27];
      local_3e8 = param_1[0x28];
      local_3a8 = DAT_14c8463b8;
      uStack_3a0 = DAT_14c8463a0;
      local_398 = DAT_14c846388;
      lStack_390 = DAT_14c8463c0;
      local_388 = DAT_14c8463a8;
      lStack_380 = DAT_14c846390;
      local_378 = DAT_14c8463c8;
      uStack_370 = DAT_14c8463b0;
      local_368 = DAT_14c846398;
      local_348 = (code *)0x0;
      lStack_340 = 0;
      local_338 = (longlong *)0x0;
      lStack_330 = 0x3ff0000000000000;
      FUN_146bfbbda(&local_348);
      param_1[0x2b] = local_3e8;
      *(undefined4 *)(param_1 + 0x29) = (undefined4)local_3f8;
      *(undefined4 *)((longlong)param_1 + 0x14c) = local_3f8._4_4_;
      *(undefined4 *)(param_1 + 0x2a) = (undefined4)uStack_3f0;
      *(undefined4 *)((longlong)param_1 + 0x154) = uStack_3f0._4_4_;
      param_1[0x2c] = (longlong)local_348;
      param_1[0x2d] = lStack_340;
      param_1[0x2e] = (longlong)local_338;
      param_1[0x2f] = lStack_330;
    }
    else {
      local_3f8 = *plVar24;
      uStack_3f0 = param_1[0x27];
      local_3e8 = param_1[0x28];
      local_3a8 = DAT_14c846388;
      uStack_3a0 = DAT_14c8463b8;
      local_398 = DAT_14c8463a0;
      lStack_390 = DAT_14c846390;
      local_388 = DAT_14c8463c0;
      lStack_380 = DAT_14c8463a8;
      local_378 = DAT_14c846398;
      uStack_370 = DAT_14c8463c8;
      local_368 = DAT_14c8463b0;
      local_348 = (code *)0x0;
      lStack_340 = 0;
      local_338 = (longlong *)0x0;
      lStack_330 = 0x3ff0000000000000;
      FUN_146bfbbda(&local_348);
      param_1[0x2b] = local_3e8;
      *(undefined4 *)(param_1 + 0x29) = (undefined4)local_3f8;
      *(undefined4 *)((longlong)param_1 + 0x14c) = local_3f8._4_4_;
      *(undefined4 *)(param_1 + 0x2a) = (undefined4)uStack_3f0;
      *(undefined4 *)((longlong)param_1 + 0x154) = uStack_3f0._4_4_;
      param_1[0x2c] = (longlong)local_348;
      param_1[0x2d] = lStack_340;
      param_1[0x2e] = (longlong)local_338;
      param_1[0x2f] = lStack_330;
      dVar8 = dVar7;
    }
  }
  else {
    local_3f8 = *plVar24;
    uStack_3f0 = param_1[0x27];
    local_3e8 = param_1[0x28];
    local_3a8 = DAT_14c8463a0;
    uStack_3a0 = DAT_14c846388;
    local_398 = DAT_14c8463b8;
    lStack_390 = DAT_14c8463a8;
    local_388 = DAT_14c846390;
    lStack_380 = DAT_14c8463c0;
    local_378 = DAT_14c8463b0;
    uStack_370 = DAT_14c846398;
    local_368 = DAT_14c8463c8;
    local_348 = (code *)0x0;
    lStack_340 = 0;
    local_338 = (longlong *)0x0;
    lStack_330 = 0x3ff0000000000000;
    FUN_146bfbbda(&local_348);
    param_1[0x2b] = local_3e8;
    *(undefined4 *)(param_1 + 0x29) = (undefined4)local_3f8;
    *(undefined4 *)((longlong)param_1 + 0x14c) = local_3f8._4_4_;
    *(undefined4 *)(param_1 + 0x2a) = (undefined4)uStack_3f0;
    *(undefined4 *)((longlong)param_1 + 0x154) = uStack_3f0._4_4_;
    param_1[0x2c] = (longlong)local_348;
    param_1[0x2d] = lStack_340;
    param_1[0x2e] = (longlong)local_338;
    param_1[0x2f] = lStack_330;
    dVar8 = dVar6;
  }
  FUN_1482ff674(param_1 + 0x29);
  param_1[0x30] = (longlong)dVar8;
  puVar23 = (undefined8 *)FUN_14001cc68(0xe0);
  *puVar23 = FUN_14968495a;
  memset(puVar23 + 1,0,0xd8);
  puVar23[2] = &PTR_FUN_14af11bc0;
  puVar23[0x10] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[0x16] = 0;
  puVar23[0x17] = 0;
  puVar23[0x18] = 0;
  puVar23[0x19] = 0;
  *(undefined1 *)(puVar23 + 0x1a) = 0;
  lVar21 = param_1[0x31];
  param_1[0x31] = (longlong)(puVar23 + 2);
  if (lVar21 != 0) {
    (**(code **)(lVar21 + -0x10))(lVar21 + -0x10);
  }
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar22 = FUN_148452156(uVar22);
  *(undefined8 *)(param_1[0x31] + 8) = uVar22;
  lVar21 = param_1[0x31];
  uVar22 = (**(code **)(*plVar20 + 0x10))(plVar20);
  iVar3 = *(int *)(lVar21 + 0xb8);
  *(uint *)(lVar21 + 0xb8) = iVar3 + 1U;
  if (*(uint *)(lVar21 + 0xbc) < iVar3 + 1U) {
    FUN_140097524((longlong *)(lVar21 + 0xb0),iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar21 + 0xb0) + (longlong)iVar3 * 8) = uVar22;
  lVar21 = param_1[0x31];
  local_3a8 = *(code **)(lVar21 + 0x20);
  uStack_3a0 = *(code **)(lVar21 + 0x28);
  local_398 = *(code **)(lVar21 + 0x30);
  lStack_390 = *(longlong *)(lVar21 + 0x38);
  local_388 = *(longlong *)(lVar21 + 0x40);
  lStack_380 = *(undefined8 *)(lVar21 + 0x48);
  uVar22 = *(undefined8 *)(lVar21 + 0x50);
  uVar13 = *(undefined8 *)(lVar21 + 0x58);
  *(ulonglong *)(lVar21 + 0x50) = CONCAT44(uStack_314,local_318);
  *(ulonglong *)(lVar21 + 0x58) = CONCAT44(uStack_30c,uStack_310);
  *(undefined ***)(lVar21 + 0x40) = &PTR_LAB_14bdad210;
  *(longlong **)(lVar21 + 0x48) = param_1;
  *(undefined8 *)(lVar21 + 0x30) = 0;
  *(longlong *)(lVar21 + 0x38) = lStack_330;
  *(undefined1 **)(lVar21 + 0x20) = &LAB_14456f4bc;
  *(longlong *)(lVar21 + 0x28) = lStack_340;
  local_378._0_4_ = (undefined4)uVar22;
  local_378._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
  uStack_370._0_4_ = (undefined4)uVar13;
  uStack_370._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_318 = (undefined4)local_378;
  uStack_314 = local_378._4_4_;
  uStack_310 = (undefined4)uStack_370;
  uStack_30c = uStack_370._4_4_;
  local_328 = local_388;
  lStack_320 = lStack_380;
  local_378 = uVar22;
  uStack_370 = uVar13;
  local_348 = local_3a8;
  lStack_340 = (longlong)uStack_3a0;
  local_338 = (longlong *)local_398;
  lStack_330 = lStack_390;
  if (local_3a8 != (code *)0x0) {
    plVar24 = (longlong *)local_398;
    if (local_398 == (code *)0x0) {
      plVar24 = &local_328;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  uVar22 = FUN_1409ffe1d();
  plVar24 = (longlong *)FUN_14843c80f(uVar22);
  local_3a8 = (code *)plVar24[0x10];
  uStack_3a0 = (code *)plVar24[0x11];
  local_398 = (code *)plVar24[0x12];
  lStack_390 = plVar24[0x13];
  local_388 = plVar24[0x14];
  lStack_380 = plVar24[0x15];
  lVar21 = plVar24[0x16];
  lVar25 = plVar24[0x17];
  plVar24[0x16] = CONCAT44(uStack_314,local_318);
  plVar24[0x17] = CONCAT44(uStack_30c,uStack_310);
  plVar24[0x14] = (longlong)&PTR_LAB_14aedb970;
  plVar24[0x15] = (longlong)&LAB_148441f18;
  plVar24[0x12] = 0;
  plVar24[0x13] = lStack_330;
  plVar24[0x10] = (longlong)&LAB_14844e6fa;
  plVar24[0x11] = lStack_340;
  local_378._0_4_ = (undefined4)lVar21;
  local_378._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
  uStack_370._0_4_ = (undefined4)lVar25;
  uStack_370._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
  local_318 = (undefined4)local_378;
  uStack_314 = local_378._4_4_;
  uStack_310 = (undefined4)uStack_370;
  uStack_30c = uStack_370._4_4_;
  local_328 = local_388;
  lStack_320 = lStack_380;
  local_378 = lVar21;
  uStack_370 = lVar25;
  local_348 = local_3a8;
  lStack_340 = (longlong)uStack_3a0;
  local_338 = (longlong *)local_398;
  lStack_330 = lStack_390;
  if (local_3a8 != (code *)0x0) {
    plVar26 = &local_328;
    if (local_398 != (code *)0x0) {
      plVar26 = (longlong *)local_398;
    }
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  (**(code **)(*plVar24 + 0x358))(plVar24,param_1[0x31]);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar24,0);
  plVar24 = (longlong *)FUN_1484c6256(param_1);
  if ((plVar24 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar24);
  }
  param_1[0x21] = (longlong)plVar24;
  local_3a8 = (code *)param_1[0x2c];
  uStack_3a0 = (code *)param_1[0x2d];
  local_398 = (code *)param_1[0x2e];
  lStack_390 = param_1[0x2f];
  local_388 = param_1[0x29];
  lStack_380 = param_1[0x2a];
  local_378 = param_1[0x2b];
  uStack_370 = 0;
  local_368 = 0x3ff0000000000000;
  uStack_360 = 0x3ff0000000000000;
  local_358 = 0x3ff0000000000000;
  uStack_350 = 0;
  (**(code **)(*plVar24 + 0x2b8))(plVar24,&local_3a8);
  local_3a8 = (code *)0x0;
  uStack_3a0 = (code *)0x0;
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar24 = (longlong *)FUN_14843d0eb(uVar22,0x3fe,param_1,&local_3a8);
  if ((plVar24 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar24);
  }
  param_1[0x20] = (longlong)plVar24;
  if (local_3a8 != (code *)0x0) {
    FUN_1400020a8();
    plVar24 = (longlong *)param_1[0x20];
  }
  lVar25 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar21 = lVar25 + 0x28;
  if (lVar25 == 0) {
    lVar21 = 0;
  }
  (**(code **)(*plVar24 + 800))(plVar24,param_1[0x21],lVar21);
  local_3a8 = FUN_14966d26a;
  uStack_3a0 = (code *)((ulonglong)uStack_3a0 & 0xffffffff00000000);
  FUN_14966d18e(param_1[0x21] + 0x28,&local_348,param_1);
  lVar21 = FUN_148410375(param_1);
  if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar21);
  }
  param_1[0x22] = lVar21;
  lVar21 = FUN_148410375(param_1);
  if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar21);
  }
  param_1[0x23] = lVar21;
  lVar21 = FUN_148410375(param_1);
  if ((lVar21 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar21);
  }
  param_1[0x24] = lVar21;
  *(float *)(param_1[0x22] + 0x48) = (float)(dVar8 * 0.5);
  *(float *)(param_1[0x23] + 0x48) = (float)(dVar8 * -0.5);
  bVar2 = *(byte *)(param_1[0x17] + 0xa8);
  fVar28 = 0.0;
  if (bVar2 < 3) {
    lVar21 = (ulonglong)bVar2 * 8;
    fVar28 = (float)(((double)*(float *)(param_1[0x17] + *(longlong *)(&DAT_14bdae890 + lVar21)) *
                     (double)param_1[0x30]) / *(double *)(&DAT_14bdae8a8 + lVar21));
  }
  *(float *)(param_1[0x24] + 0x48) = fVar28;
  *(undefined4 *)(param_1[0x17] + 0xac) = *(undefined4 *)(param_1[0x22] + 0x48);
  *(undefined4 *)(param_1[0x17] + 0xb0) = *(undefined4 *)(param_1[0x23] + 0x48);
  lVar21 = param_1[0x22];
  local_3a8 = (code *)0x0;
  uStack_3a0 = (code *)((ulonglong)uStack_3a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_3a8,0,2,0x10);
  pcVar18 = local_3a8;
  uStack_3a0._0_4_ = 2;
  *(undefined ***)local_3a8 = &PTR_LAB_14aedb1c0;
  uVar22 = FUN_144a3f946();
  *(undefined8 *)(pcVar18 + 0x10) = uVar22;
  *(undefined ***)pcVar18 = &PTR_FUN_14bdad2a0;
  *(longlong **)(pcVar18 + 0x18) = param_1;
  FUN_14844dce0(lVar21 + 0x30,&local_348,&local_3a8);
  FUN_1449db362(&local_3a8);
  lVar21 = param_1[0x23];
  local_3a8 = (code *)0x0;
  uStack_3a0._0_4_ = 0;
  FUN_1446efa72(&local_3a8,0,2,0x10);
  pcVar18 = local_3a8;
  uStack_3a0._0_4_ = 2;
  *(undefined ***)local_3a8 = &PTR_LAB_14aedb1c0;
  uVar22 = FUN_144a3f946();
  *(undefined8 *)(pcVar18 + 0x10) = uVar22;
  *(undefined ***)pcVar18 = &PTR_FUN_14bdad310;
  *(longlong **)(pcVar18 + 0x18) = param_1;
  FUN_14844dce0(lVar21 + 0x30,&local_348,&local_3a8);
  FUN_1449db362(&local_3a8);
  lVar21 = param_1[0x24];
  local_3a8 = (code *)0x0;
  uStack_3a0._0_4_ = 0;
  FUN_1446efa72(&local_3a8,0,2,0x10);
  pcVar18 = local_3a8;
  uStack_3a0 = (code *)CONCAT44(uStack_3a0._4_4_,2);
  *(undefined ***)local_3a8 = &PTR_LAB_14aedb1c0;
  uVar22 = FUN_144a3f946();
  *(undefined8 *)(pcVar18 + 0x10) = uVar22;
  *(undefined ***)pcVar18 = &PTR_FUN_14bdad380;
  *(longlong **)(pcVar18 + 0x18) = param_1;
  FUN_14844dce0(lVar21 + 0x30,&local_348,&local_3a8);
  FUN_1449db362(&local_3a8);
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar24 = (longlong *)FUN_148451354(uVar22);
  uVar22 = FUN_1409ffe1d();
  uVar22 = FUN_14966d334(uVar22);
  (**(code **)(*plVar24 + 0x2b0))(plVar24,&DAT_14cb4b158,uVar22);
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar24 = (longlong *)FUN_148451354(uVar22);
  FUN_140056680(&local_3a8,L"MeshSpaceDefomerInterval");
  plVar24 = (longlong *)(**(code **)(*plVar24 + 0x2c0))(plVar24,&DAT_14cb4b158,&local_3a8,param_1);
  if ((plVar24 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar24);
  }
  param_1[0x1f] = (longlong)plVar24;
  if (local_3a8 != (code *)0x0) {
    FUN_1400020a8();
    plVar24 = (longlong *)param_1[0x1f];
  }
  lVar21 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_420 = lVar21 + 0x28;
  if (lVar21 == 0) {
    local_420 = 0;
  }
  local_428 = param_1[0x24];
  (**(code **)(*plVar24 + 0x2f8))(plVar24,param_1[0x21],param_1[0x22],param_1[0x23]);
  lVar21 = param_1[0x1f];
  lVar25 = *(longlong *)(lVar21 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar25 == 0) {
      lVar25 = 0;
    }
    else {
      FUN_14689c22e();
      lVar25 = *(longlong *)(lVar21 + 0x38);
    }
  }
  param_1[0x19] = lVar25;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x36] = (longlong)&DAT_3f8000003f800000;
  param_1[0x37] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x38) = 0x40800000;
  local_3a8 = (code *)param_1[0x2c];
  uStack_3a0 = (code *)param_1[0x2d];
  local_398 = (code *)param_1[0x2e];
  lStack_390 = param_1[0x2f];
  local_388 = param_1[0x29];
  lStack_380 = param_1[0x2a];
  local_378 = param_1[0x2b];
  uStack_370 = 0;
  local_368 = 0x3ff0000000000000;
  uStack_360 = 0x3ff0000000000000;
  local_358 = 0x3ff0000000000000;
  uStack_350 = 0;
  FUN_148453434(param_1 + 0x34);
  lVar21 = FUN_14966d3c9(param_1);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar21 + 0x30) = param_1;
  FUN_1446ddc76(&local_400,"Preview",1);
  local_420 = 0;
  local_428 = local_428 & 0xffffffffffffff00;
  lVar25 = FUN_1484c90fb(lVar21,local_400,0,0);
  if ((lVar25 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar25);
  }
  param_1[0x1b] = lVar25;
  lVar27 = lVar21 + 0x28;
  if (lVar21 == 0) {
    lVar27 = 0;
  }
  uVar22 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar25,uVar22,lVar27);
  FUN_148558526(*(undefined8 *)(param_1[0x1b] + 0x58),param_1[0x14]);
  FUN_14851b65c(*(undefined8 *)(param_1[0x1b] + 0x58),1);
  FUN_1485054da(param_1[0x1b],1,5);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x1b] + 0x58),param_1[0x1c],1,0xf);
  FUN_14851b91a(*(undefined8 *)(param_1[0x1b] + 0x58),&local_308);
  FUN_148506417(&local_3a8,param_1[0x14],0);
  uVar19 = (ulonglong)uStack_3a0;
  pcVar18 = local_3a8;
  iVar3 = (int)uStack_3a0;
  lVar25 = (longlong)(int)uStack_3a0;
  lVar21 = param_1[0x1b];
  uVar22 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar22 = FUN_1485578f6(uVar22);
  local_410 = (void *)0x0;
  local_408 = iVar3;
  if (lVar25 == 0) {
    local_404 = 0;
  }
  else {
    FUN_1411312f2(&local_410,uVar19 & 0xffffffff,0);
    memcpy(local_410,pcVar18,lVar25 << 3);
  }
  FUN_1485053d2(lVar21,&local_410,uVar22,0);
  FUN_1485054ca(param_1[0x1b],1);
  FUN_14966d45e(param_1);
  if (pcVar18 != (code *)0x0) {
    FUN_1400020a8(pcVar18);
  }
  plVar24 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar24 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar24);
  }
  param_1[0x1a] = (longlong)plVar24;
  (**(code **)(*plVar24 + 0x2a0))(plVar24,param_1);
  uVar22 = (**(code **)(*plVar20 + 0x10))(plVar20);
  local_348 = (code *)0x0;
  lStack_340 = CONCAT44(lStack_340._4_4_,1);
  FUN_1485177cc(&local_348,1,0);
  *(undefined8 *)local_348 = uVar22;
  FUN_1484f6c9e(param_1[0x1a] + 0x30,param_1[0x20],0,&local_348);
  FUN_1484f7282(param_1[0x1a] + 0x30,param_1[0x1f],0,&local_348);
  local_3a8 = (code *)0x14ba1690c;
  uStack_3a0._0_4_ = 8;
  FUN_1446e940c(&local_3f8,&local_3a8);
  local_3a8 = (code *)0x14bda34d0;
  uStack_3a0 = (code *)CONCAT44(uStack_3a0._4_4_,0x15);
  FUN_1446e940c(local_414,&local_3a8);
  FUN_140208bae(&local_3a8,local_414,&local_3f8,L"Space Warp");
  (**(code **)(*param_1 + 0x370))(param_1,&local_3a8);
  if (local_3a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_3a8 + 0x10))();
  }
  plVar20 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_3a8 = (code *)0x14bda36ae;
  uStack_3a0._0_4_ = 0x20;
  FUN_1446e940c(&local_3f8,&local_3a8);
  local_3a8 = (code *)0x14bda34d0;
  uStack_3a0 = (code *)CONCAT44(uStack_3a0._4_4_,0x15);
  FUN_1446e940c(local_414,&local_3a8);
  FUN_140208bae(&local_3a8,local_414,&local_3f8,
                L"Deform the vertices of the selected Mesh using various spatial deformations. Use the in-viewport Gizmo to control the extents/strength of the deformation. Hold Ctrl while translating/rotating gizmo to align to world."
               );
  (**(code **)(*plVar20 + 0x340))(plVar20,&local_3a8,2);
  if (local_3a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_3a8 + 0x10))();
  }
  if (local_348 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14966d064 FUN_14966d064 body=148 status=ok
// SIG undefined FUN_14966d064(void)

undefined8 FUN_14966d064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fae82();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d0f9 FUN_14966d0f9 body=148 status=ok
// SIG undefined FUN_14966d0f9(void)

undefined8 FUN_14966d0f9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599d59e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d18e FUN_14966d18e body=218 status=ok
// SIG undefined FUN_14966d18e(void)

undefined8
FUN_14966d18e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdad230;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d26a FUN_14966d26a body=201 status=ok
// SIG undefined FUN_14966d26a(void)

void FUN_14966d26a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uStack_70 = *(undefined4 *)(param_3 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_68 = *(undefined4 *)(param_3 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_60 = *(undefined4 *)(param_3 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_48 = param_3[6];
  uVar1 = param_3[3];
  *(undefined4 *)(param_1 + 0x148) = local_58;
  *(undefined4 *)(param_1 + 0x14c) = uStack_54;
  *(undefined4 *)(param_1 + 0x150) = uStack_50;
  *(undefined4 *)(param_1 + 0x154) = uStack_4c;
  *(undefined8 *)(param_1 + 0x158) = local_48;
  *(undefined8 *)(param_1 + 0x160) = local_78;
  *(undefined4 *)(param_1 + 0x168) = uStack_70;
  *(undefined4 *)(param_1 + 0x16c) = uStack_6c;
  *(undefined4 *)(param_1 + 0x170) = local_68;
  *(undefined4 *)(param_1 + 0x174) = uStack_64;
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  FUN_148453434(param_1 + 0x1a0);
  FUN_14966d45e(param_1);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d334 FUN_14966d334 body=148 status=ok
// SIG undefined FUN_14966d334(void)

undefined8 FUN_14966d334(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b73aa6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d3c9 FUN_14966d3c9 body=148 status=ok
// SIG undefined FUN_14966d3c9(void)

undefined8 FUN_14966d3c9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b14ef0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d45e FUN_14966d45e body=594 status=ok
// SIG undefined FUN_14966d45e(void)

void FUN_14966d45e(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  
  if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xa8) == '\0') {
    FUN_140b463b8(param_1 + 400,0x1e,1);
    lVar7 = *(longlong *)(param_1 + 0xb8);
    dVar2 = (double)(*(float *)(lVar7 + 0xac) - *(float *)(lVar7 + 0xb0));
    dVar3 = (double)((*(float *)(lVar7 + 0xb4) * 3.1415927) / 180.0);
    dVar4 = dVar2 / dVar3;
    if (*(char *)(lVar7 + 0xcc) == '\0') {
      dVar6 = 0.0;
    }
    else {
      dVar6 = (double)*(float *)(lVar7 + 0xb0);
    }
    dVar5 = 0.0 - dVar4;
    lVar8 = 0;
    lVar7 = 0;
    do {
      dVar10 = ((((double)(int)lVar7 * (dVar2 / 29.0) +
                 (double)*(float *)(*(longlong *)(param_1 + 0xb8) + 0xb0)) - dVar6) * -dVar3) /
               dVar2;
      dVar9 = cos(dVar10);
      dVar10 = sin(dVar10);
      lVar1 = *(longlong *)(param_1 + 400);
      *(undefined8 *)(lVar1 + lVar8) = 0;
      *(double *)(lVar1 + 8 + lVar8) = (dVar9 * dVar5 - (dVar6 - dVar6) * dVar10) + dVar4;
      *(double *)(lVar1 + 0x10 + lVar8) = dVar10 * dVar5 + (dVar6 - dVar6) * dVar9 + dVar6;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar7 != 0x1e);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1485051e4();
    return;
  }
  return;
}



// FUNCTION 14966d6b0 FUN_14966d6b0 body=584 status=ok
// SIG undefined FUN_14966d6b0(void)

void FUN_14966d6b0(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined8 *local_a0 [11];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)param_1[0x17];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x14];
  if (lVar3 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,1);
  FUN_14851bab8(param_1[0x1e],0);
  FUN_14851b2ea(param_1[0x1e]);
  param_1[0x1e] = 0;
  if (param_1[0x1b] != 0) {
    FUN_143b84538(param_1[0x1b],local_a0);
    if (param_2 == '\x01') {
      lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_48 = L"MeshSpaceDeformer";
      local_40 = 0x11;
      FUN_1446e940c(local_a4,&local_48);
      local_48 = L"MeshSpaceDeformerTool";
      local_40 = 0x15;
      FUN_1446e940c(local_a8,&local_48);
      FUN_140208bae(&local_48,local_a8,local_a4,L"Space Deformer");
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
      local_48 = (wchar_t *)0x1000000010101;
      local_b8 = 0;
      FUN_148506f34(param_1[0x14],local_a0[0],1);
      lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])(local_a0[0],1);
    }
  }
  (**(code **)(*(longlong *)param_1[0x1a] + 0x2a8))();
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x2b8))(plVar2,&DAT_14cb4b158);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966d8fa FUN_14966d8fa body=182 status=ok
// SIG undefined FUN_14966d8fa(void)

void FUN_14966d8fa(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0x48) =
       *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0xac);
  *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x48) =
       *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0xb0);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xb8) + 0xa8);
  fVar3 = 0.0;
  if (bVar1 < 3) {
    lVar2 = (ulonglong)bVar1 * 8;
    fVar3 = (float)(((double)*(float *)(*(longlong *)(param_1 + 0xb8) +
                                       *(longlong *)(&DAT_14bdae890 + lVar2)) *
                    *(double *)(param_1 + 0x180)) / *(double *)(&DAT_14bdae8a8 + lVar2));
  }
  *(float *)(*(longlong *)(param_1 + 0x120) + 0x48) = fVar3;
  FUN_14966d45e(param_1);
  FUN_14851bab8(*(undefined8 *)(param_1 + 0xf0),
                *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 0xcd));
  return;
}



// FUNCTION 14966d9b0 FUN_14966d9b0 body=200 status=ok
// SIG undefined FUN_14966d9b0(void)

void FUN_14966d9b0(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x128) == 1) {
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x138);
    local_78 = *(undefined8 *)(param_1 + 0x160);
    uStack_70 = *(undefined8 *)(param_1 + 0x168);
    local_68 = *(undefined4 *)(param_1 + 0x170);
    uStack_64 = *(undefined4 *)(param_1 + 0x174);
    uStack_60 = *(undefined4 *)(param_1 + 0x178);
    uStack_5c = *(undefined4 *)(param_1 + 0x17c);
    local_58 = *(undefined4 *)(param_1 + 0x148);
    uStack_54 = *(undefined4 *)(param_1 + 0x14c);
    uStack_50 = *(undefined4 *)(param_1 + 0x150);
    uStack_4c = *(undefined4 *)(param_1 + 0x154);
    local_48 = *(undefined8 *)(param_1 + 0x158);
    uStack_40 = 0;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0x3ff0000000000000;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0;
    FUN_148415b4c(*(undefined8 *)(param_1 + 0x100),&local_78,1);
    FUN_14966d45e(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966da7a FUN_14966da7a body=757 status=ok
// SIG undefined FUN_14966da7a(void)

void FUN_14966da7a(longlong param_1,undefined8 *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  *(undefined8 *)(param_1 + 0x158) = param_2[2];
  *(undefined8 *)(param_1 + 0x148) = uVar5;
  *(undefined8 *)(param_1 + 0x150) = uVar6;
  if (param_4 == '\0') {
    uVar7 = (undefined4)*(undefined8 *)(param_1 + 0x160);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x160) >> 0x20);
    uVar9 = (undefined4)*(undefined8 *)(param_1 + 0x168);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x168) >> 0x20);
    local_f8 = *(double *)(param_1 + 0x170);
    dStack_f0 = *(double *)(param_1 + 0x178);
  }
  else {
    local_f8 = *param_3;
    dStack_e0 = param_3[1];
    local_c8 = param_3[2];
    dStack_d0 = local_f8 * DAT_14c8463c0 - DAT_14c8463b8 * dStack_e0;
    dVar1 = local_c8 * DAT_14c8463b8 - DAT_14c8463c8 * local_f8;
    dVar3 = dStack_e0 * DAT_14c8463c8 - DAT_14c8463c0 * local_c8;
    dVar4 = SQRT(dStack_d0 * dStack_d0 + dVar3 * dVar3 + dVar1 * dVar1);
    local_e8 = 0.0;
    dVar2 = 1.0 / dVar4;
    uStack_100 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar3 * dVar2));
    if (0.0 < dVar4) {
      dStack_d0 = dStack_d0 * dVar2;
      local_e8 = dVar1 * dVar2;
    }
    else {
      dStack_d0 = 0.0;
    }
    local_d8 = uStack_100 * dStack_e0 - local_f8 * local_e8;
    dStack_f0 = dStack_d0 * local_f8 - local_c8 * uStack_100;
    local_108 = local_e8 * local_c8 - dStack_e0 * dStack_d0;
    local_98 = param_2[2];
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0x3ff0000000000000;
    FUN_146bfbbda(&local_88);
    uVar7 = (undefined4)local_88;
    uVar8 = (undefined4)((ulonglong)local_88 >> 0x20);
    uVar9 = (undefined4)uStack_80;
    uVar10 = (undefined4)((ulonglong)uStack_80 >> 0x20);
    *(undefined8 *)(param_1 + 0x158) = local_98;
    *(undefined8 *)(param_1 + 0x148) = local_a8;
    *(undefined8 *)(param_1 + 0x150) = uStack_a0;
    *(undefined8 *)(param_1 + 0x160) = local_88;
    *(undefined8 *)(param_1 + 0x168) = uStack_80;
    *(undefined8 *)(param_1 + 0x170) = local_78;
    *(undefined8 *)(param_1 + 0x178) = local_70;
    local_f8 = (double)local_78;
    dStack_f0 = (double)local_70;
  }
  local_e8 = *(double *)(param_1 + 0x148);
  dStack_e0 = *(double *)(param_1 + 0x150);
  local_d8 = *(double *)(param_1 + 0x158);
  local_108 = (double)CONCAT44(uVar8,uVar7);
  uStack_100 = (double)CONCAT44(uVar10,uVar9);
  dStack_d0 = 0.0;
  local_c8 = 1.0;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_148415b4c(*(undefined8 *)(param_1 + 0x100),&local_108,1);
  FUN_14966d45e(param_1);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966dd70 FUN_14966dd70 body=86 status=ok
// SIG undefined FUN_14966dd70(void)

void FUN_14966dd70(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_14966d9b0(param_1);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_148505016(*(longlong *)(param_1 + 0xd8),param_2);
    return;
  }
  return;
}



// FUNCTION 14966ddc6 FUN_14966ddc6 body=219 status=ok
// SIG undefined FUN_14966ddc6(void)

void FUN_14966ddc6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x2b0))();
  if ((*(char *)(*(longlong *)(param_1 + 0xb8) + 0xce) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xa8) == '\0')) {
    lVar1 = param_1 + 0x1a0;
    (**(code **)(*param_2 + 0x18))(param_2,local_78);
    FUN_148453350(lVar1,param_2,local_78);
    if (1 < *(int *)(param_1 + 0x198)) {
      lVar2 = 1;
      lVar3 = 0x18;
      do {
        FUN_148527000(lVar1,*(longlong *)(param_1 + 400) + lVar3 + -0x18,
                      *(longlong *)(param_1 + 400) + lVar3);
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar2 < *(int *)(param_1 + 0x198));
    }
    FUN_14845342a(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966dea2 FUN_14966dea2 body=115 status=ok
// SIG undefined FUN_14966dea2(void)

void FUN_14966dea2(longlong param_1,double param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb8);
  cVar1 = *(char *)(lVar2 + 0xa8);
  if (cVar1 == '\x02') {
    *(float *)(lVar2 + 0xb8) = (float)((param_2 * 360.0) / *(double *)(param_1 + 0x180));
  }
  else {
    if (cVar1 == '\x01') {
      *(float *)(lVar2 + 0xc0) = (float)((param_2 * 100.0) / *(double *)(param_1 + 0x180));
      return;
    }
    if (cVar1 == '\0') {
      *(float *)(lVar2 + 0xb4) = (float)((param_2 * 180.0) / *(double *)(param_1 + 0x180));
      return;
    }
  }
  return;
}



// FUNCTION 14966df46 FUN_14966df46 body=84 status=ok
// SIG undefined FUN_14966df46(void)

void FUN_14966df46(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,2,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14966df9a FUN_14966df9a body=84 status=ok
// SIG undefined FUN_14966df9a(void)

void FUN_14966df9a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966dfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,3,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14966dfee FUN_14966dfee body=84 status=ok
// SIG undefined FUN_14966dfee(void)

void FUN_14966dfee(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966e038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,4,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14966e042 FUN_14966e042 body=84 status=ok
// SIG undefined FUN_14966e042(void)

void FUN_14966e042(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966e08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,1,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14966e09a FUN_14966e09a body=84 status=ok
// SIG undefined FUN_14966e09a(void)

void FUN_14966e09a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966e0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,5,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14966e10e FUN_14966e10e body=117 status=ok
// SIG undefined FUN_14966e10e(void)

void FUN_14966e10e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14966e184(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966e184 FUN_14966e184 body=84 status=ok
// SIG undefined FUN_14966e184(void)

undefined8 * FUN_14966e184(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14966e1e8 FUN_14966e1e8 body=46 status=ok
// SIG undefined FUN_14966e1e8(void)

longlong * FUN_14966e1e8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14966e216(param_2[1]);
  (**(code **)(*plVar1 + 1000))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 14966e216 FUN_14966e216 body=148 status=ok
// SIG undefined FUN_14966e216(void)

undefined8 FUN_14966e216(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145bad4f0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966e2ac FUN_14966e2ac body=142 status=ok
// SIG undefined FUN_14966e2ac(void)

bool FUN_14966e2ac(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148441d74();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14456fa44;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966e33c FUN_14966e33c body=349 status=ok
// SIG undefined FUN_14966e33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14966e33c(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21318) {
    FUN_144b3d300(&DAT_14cc21318);
    if (DAT_14cc21318 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc21308 = (undefined *)0x0;
      _DAT_14cc21314 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc21310 = local_48;
      FUN_1484d23fc(&DAT_14cc212e0,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc212e0;
        if (DAT_14cc21308 != (undefined *)0x0) {
          _Dst = DAT_14cc21308;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144565deb);
      _Init_thread_footer(&DAT_14cc21318);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc212e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966e49a FUN_14966e49a body=7476 status=ok
// SIG undefined FUN_14966e49a(void)

/* WARNING: Removing unreachable block (ram,0x00014966fd1e) */
/* WARNING: Removing unreachable block (ram,0x00014966ffad) */

void FUN_14966e49a(code *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  uint uVar9;
  char cVar10;
  code cVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined ***pppuVar21;
  uint uVar22;
  longlong lVar23;
  code *pcVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  code *pcVar28;
  uint uVar29;
  float fVar30;
  undefined1 auStack_538 [32];
  wchar_t **local_518;
  code *local_508;
  code *local_500;
  longlong *local_4f8;
  code *local_4f0;
  longlong *local_4e8;
  code *local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined1 local_4c8 [16];
  undefined8 *local_4b8;
  undefined1 local_4b0 [16];
  undefined8 *local_4a0;
  undefined1 local_498 [16];
  undefined8 *local_488;
  undefined1 local_480 [16];
  undefined8 *local_470;
  undefined8 *local_468;
  undefined1 local_460 [48];
  undefined1 *local_430;
  code **local_428;
  undefined1 *local_420;
  undefined8 *local_418;
  undefined1 *local_410;
  undefined8 *local_408;
  longlong local_400;
  longlong local_3f8;
  int local_3f0;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  code *local_3c0;
  undefined1 *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  code *local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  code *local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  code *local_300;
  code *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  code *local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  code *local_280;
  longlong local_268;
  longlong *local_258;
  longlong local_248 [4];
  longlong local_228;
  longlong *local_218;
  longlong local_208 [4];
  longlong local_1e8;
  longlong *local_1d8;
  longlong local_1c8 [4];
  wchar_t *local_1a8;
  undefined4 local_1a0;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  code *local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  code *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  FUN_1496b32c4();
  local_1a8 = L"ToolName";
  local_1a0 = 8;
  FUN_1446e940c(&local_e8,&local_1a8);
  local_1a8 = L"UMeshVertexPaintTool";
  local_1a0 = 0x14;
  FUN_1446e940c(&local_128,&local_1a8);
  FUN_140208bae(&local_1a8,&local_128,&local_e8,L"Paint Vertex Colors");
  (**(code **)(*(longlong *)param_1 + 0x370))(param_1,&local_1a8);
  if (local_1a8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1a8 + 0x10))();
  }
  FUN_1411371f6(&local_1a8);
  lVar14 = *(longlong *)(param_1 + 0x110);
  uVar13 = FUN_14120ac06();
  local_518 = &local_1a8;
  lVar14 = FUN_141137228(lVar14,uVar13,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(param_1 + 0xbf0) = lVar14;
  lVar14 = FUN_14851b239(lVar14);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(param_1 + 0xbf8) = lVar14;
  FUN_1496b409c(param_1,lVar14,*(longlong *)(param_1 + 0xbf0));
  FUN_148506417(&local_3f8,*(longlong *)(param_1 + 0xa0),0);
  if (0 < local_3f0) {
    uVar25 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0xbf8) + 0x638))
                (*(longlong **)(param_1 + 0xbf8),uVar25 & 0xffffffff,
                 *(undefined8 *)(local_3f8 + uVar25 * 8));
      uVar25 = uVar25 + 1;
    } while ((longlong)uVar25 < (longlong)local_3f0);
  }
  FUN_1484b501a(*(longlong *)(param_1 + 0xbf8),0);
  local_e8 = FUN_1496702ac;
  uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
  FUN_1496701d0(*(longlong *)(param_1 + 0xbf8) + 0x6c8,&local_128,param_1,&local_e8);
  *(code **)(param_1 + 0xc08) = local_128;
  local_400 = (**(code **)(*(longlong *)param_1 + 0x420))(param_1);
  if (*(longlong *)(local_400 + 0x208) == 0) {
    *(longlong *)(param_1 + 0xc30) = 0;
LAB_14966e6e6:
    lVar14 = *(longlong *)(local_400 + 0x208);
    if (lVar14 == 0) {
      FUN_14582ed12(local_400);
      lVar14 = *(longlong *)(local_400 + 0x208);
    }
    lVar23 = *(longlong *)(lVar14 + 0x40);
    if (lVar23 == 0) {
      FUN_146c17f82(lVar14);
      lVar23 = *(longlong *)(*(longlong *)(local_400 + 0x208) + 0x40);
      *(longlong *)(param_1 + 0xc30) = lVar23;
      if (lVar23 == 0) {
        plVar15 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
        local_e8 = (code *)0x14bda6fe6;
        uStack_e0._0_4_ = 2.8026e-44;
        FUN_1446e940c(&local_128,&local_e8);
        local_e8 = (code *)0x14bda61e8;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,0x14);
        FUN_1446e940c(local_460,&local_e8);
        FUN_140208bae(&local_e8,local_460,&local_128,L"Target Mesh does not support Vertex Colors");
        local_518 = (wchar_t **)&local_e8;
        (**(code **)(*plVar15 + 0x370))(plVar15,param_1,2,1);
        if (local_e8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_e8 + 0x10))();
        }
        goto LAB_149670140;
      }
    }
    else {
      *(longlong *)(param_1 + 0xc30) = lVar23;
    }
    local_410 = &LAB_14456fa7e;
    local_408 = &local_e8;
    FUN_146c3345c(lVar23,&local_410,0x3f800000);
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(local_400 + 0x208) + 0x40);
    *(longlong *)(param_1 + 0xc30) = lVar14;
    if (lVar14 == 0) goto LAB_14966e6e6;
    local_420 = &LAB_14456fa86;
    local_430 = &LAB_14456fa82;
    local_428 = &local_128;
    local_418 = &local_e8;
    local_e8 = param_1;
    FUN_146c33a40();
  }
  pcVar24 = param_1 + 0xc30;
  FUN_14056a44c(param_1 + 0xd78,
                *(int *)(*(longlong *)pcVar24 + 8) * 0x200 + *(int *)(*(longlong *)pcVar24 + 0xc),1)
  ;
  FUN_14056a44c(param_1 + 0xd88,
                *(int *)(*(longlong *)(param_1 + 0xc30) + 8) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0xc30) + 0xc),1);
  lVar14 = *(longlong *)(param_1 + 0xc30);
  uVar22 = *(int *)(lVar14 + 8) * 0x200 + *(int *)(lVar14 + 0xc);
  uVar9 = 0;
  if ((uVar22 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x10) - 1U))) {
    uVar25 = 1;
    uVar29 = 1;
    if (1 < (int)uVar22) {
      uVar29 = uVar22;
    }
    do {
      uVar18 = (uint)uVar25;
      uVar9 = uVar29;
      if (uVar29 == uVar18) break;
      uVar27 = uVar25 >> 9;
      uVar25 = (ulonglong)(uVar18 + 1);
      uVar9 = uVar18;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar14 + 0x10))[uVar27] +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
  }
joined_r0x00014966e8d2:
  uVar29 = uVar9;
  if (uVar29 != uVar22) {
    uVar27 = (ulonglong)(uVar29 >> 7 & 0x7fffff);
    uVar25 = (ulonglong)((uVar29 & 0x7f) << 4);
    puVar16 = (undefined8 *)
              (*(longlong *)(*(longlong *)(*(longlong *)pcVar24 + 0x48) + uVar27 * 8) + uVar25);
    local_e8 = (code *)*puVar16;
    uStack_e0 = puVar16[1];
    if ((float)local_e8 <= 0.04045) {
      fVar30 = (float)local_e8 / 12.92;
    }
    else {
      fVar30 = powf(((float)local_e8 + 0.055) / 1.055,2.4);
    }
    local_e8 = (code *)CONCAT44(local_e8._4_4_,fVar30);
    if (local_e8._4_4_ <= 0.04045) {
      fVar30 = local_e8._4_4_ / 12.92;
    }
    else {
      fVar30 = powf((local_e8._4_4_ + 0.055) / 1.055,2.4);
    }
    local_e8 = (code *)CONCAT44(fVar30,(float)local_e8);
    if ((float)uStack_e0 <= 0.04045) {
      fVar30 = (float)uStack_e0 / 12.92;
    }
    else {
      fVar30 = powf(((float)uStack_e0 + 0.055) / 1.055,2.4);
    }
    uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar30);
    lVar23 = *(longlong *)pcVar24;
    lVar19 = 0;
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar23 + 0x48) + uVar27 * 8) + uVar25 + lVar19 * 4) =
           *(undefined4 *)((longlong)&local_e8 + lVar19 * 4);
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    uVar18 = uVar29 + 1;
    if ((int)(uVar29 + 1) < (int)uVar22) {
      uVar18 = uVar22;
    }
    do {
      uVar9 = uVar18;
      if (uVar18 - 1 == uVar29) break;
      uVar29 = uVar29 + 1;
      uVar9 = uVar29;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar14 + 0x10) +
                                           (ulonglong)(uVar29 >> 9) * 8) +
                                         (ulonglong)(uVar29 & 0x1ff) * 2) - 1U));
    goto joined_r0x00014966e8d2;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xbf8) + 0x68c) = 1;
  FUN_145c688c4(local_400,local_460,1);
  local_1e8 = 0;
  local_1d8 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdad460;
  local_e8 = FUN_14456faba;
  local_508 = param_1;
  pcStack_c0 = param_1;
  FUN_14170b918(&local_128);
  local_4d8 = uStack_120;
  local_118 = (undefined ***)CONCAT71(local_118._1_7_,1);
  local_4e0 = local_128;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  cVar10 = FUN_144a53f06();
  pcVar24 = local_e8;
  plVar15 = DAT_14c8442c0;
  if (cVar10 == '\0') {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    uVar13 = (*(code *)(*pppuVar21)[1])();
    (*pcVar24)(uVar13);
    *(undefined4 *)(local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar16[1] = 0;
    *puVar16 = TAsyncQueuedWork<void>::vftable;
    puVar16[2] = local_e8;
    puVar16[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    *(undefined4 *)(puVar16 + 8) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar16 + 0x44) = local_b8._4_4_;
    *(undefined4 *)(puVar16 + 9) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar16 + 0x4c) = uStack_b0._4_4_;
    puVar16[6] = local_c8;
    puVar16[7] = pcStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar16[10] = local_128;
    puVar16[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar16 + 0xc) = 0;
    (**(code **)(*plVar15 + 0x18))(plVar15,puVar16,3);
  }
  plVar15 = uStack_120;
  pcVar24 = local_508;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar20 = uStack_120 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  if (local_1e8 != 0) {
    plVar15 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar15 = local_1c8;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_228 = 0;
  local_218 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdad480;
  local_b8 = pcVar24;
  local_e8 = FUN_14456faf6;
  pcStack_c0 = (code *)&local_400;
  uStack_b0 = local_460;
  FUN_14170b918(&local_128);
  plVar15 = uStack_120;
  local_118 = (undefined ***)CONCAT71(local_118._1_7_,1);
  local_500 = local_128;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  cVar10 = FUN_144a53f06();
  pcVar24 = local_e8;
  plVar20 = DAT_14c8442c0;
  if (cVar10 == '\0') {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    uVar13 = (*(code *)(*pppuVar21)[1])();
    (*pcVar24)(uVar13);
    *(undefined4 *)(local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar16[1] = 0;
    *puVar16 = TAsyncQueuedWork<void>::vftable;
    puVar16[2] = local_e8;
    puVar16[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    *(undefined4 *)(puVar16 + 8) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar16 + 0x44) = local_b8._4_4_;
    *(undefined4 *)(puVar16 + 9) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar16 + 0x4c) = uStack_b0._4_4_;
    puVar16[6] = local_c8;
    puVar16[7] = pcStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar16[10] = local_128;
    puVar16[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar16 + 0xc) = 0;
    (**(code **)(*plVar20 + 0x18))(plVar20,puVar16,3);
  }
  plVar20 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar17 = uStack_120 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  pcVar24 = local_508;
  if (local_e8 != (code *)0x0) {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  if (local_228 != 0) {
    plVar20 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar20 = local_208;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  local_268 = 0;
  local_258 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdad4a0;
  pcStack_c0 = pcVar24;
  local_e8 = FUN_14456fbfe;
  local_b8 = (code *)&local_400;
  FUN_14170b918(&local_128);
  plVar20 = uStack_120;
  local_118 = (undefined ***)CONCAT71(local_118._1_7_,1);
  local_4f0 = local_128;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  cVar10 = FUN_144a53f06();
  pcVar24 = local_e8;
  plVar17 = DAT_14c8442c0;
  if (cVar10 == '\0') {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    uVar13 = (*(code *)(*pppuVar21)[1])();
    (*pcVar24)(uVar13);
    *(undefined4 *)(local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar16 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar16[1] = 0;
    *puVar16 = TAsyncQueuedWork<void>::vftable;
    puVar16[2] = local_e8;
    puVar16[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    *(undefined4 *)(puVar16 + 8) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar16 + 0x44) = local_b8._4_4_;
    *(undefined4 *)(puVar16 + 9) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar16 + 0x4c) = uStack_b0._4_4_;
    puVar16[6] = local_c8;
    puVar16[7] = pcStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar16[10] = local_128;
    puVar16[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar16 + 0xc) = 0;
    (**(code **)(*plVar17 + 0x18))(plVar17,puVar16,3);
  }
  plVar17 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  pcVar24 = local_508;
  if (local_e8 != (code *)0x0) {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_c8;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  if (local_268 != 0) {
    plVar17 = local_258;
    if (local_258 == (longlong *)0x0) {
      plVar17 = local_248;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  FUN_1484b78ec(local_400,&local_3f8,puVar16,0x4000);
  FUN_1484b74d4(puVar16,local_400);
  local_468 = puVar16;
  (**(code **)(**(longlong **)(pcVar24 + 0xbf8) + 0xc28))();
  FUN_1496b8318(pcVar24,local_460);
  plVar17 = (longlong *)FUN_149658890(pcVar24);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  *(longlong **)(pcVar24 + 0xbe8) = plVar17;
  (**(code **)(*plVar17 + 0x2a0))(plVar17,pcVar24);
  FUN_1484fe310(*(longlong *)(pcVar24 + 0xbe8),0);
  *(undefined4 *)(*(longlong *)(pcVar24 + 0xbe8) + 0x88) = 0x41200000;
  local_e8 = FUN_1496703a6;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  FUN_1496702ca(*(longlong *)(pcVar24 + 0xbe8) + 0x70,&local_128,pcVar24);
  plVar17 = (longlong *)FUN_148f7334e(pcVar24);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  *(longlong **)(pcVar24 + 0xba8) = plVar17;
  FUN_140056680(&local_e8,L"MeshVertexPaintTool");
  (**(code **)(*plVar17 + 0x2a8))(plVar17,pcVar24,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = *(longlong *)(pcVar24 + 0xba8);
  uVar13 = (**(code **)(*(longlong *)pcVar24 + 0x420))(pcVar24);
  FUN_14851d694(lVar14,uVar13);
  local_298 = 0;
  local_288 = &PTR_LAB_14bdad530;
  local_280 = pcVar24;
  local_2a8 = &LAB_14456fc82;
  FUN_1484c9a28(*(longlong *)(pcVar24 + 0xba8) + 0x28,*(longlong *)(pcVar24 + 0xba8) + 0xa8);
  FUN_149670ae8(pcVar24);
  plVar17 = (longlong *)FUN_149670bf7(pcVar24);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  *(longlong **)(pcVar24 + 0xbb0) = plVar17;
  FUN_140056680(&local_e8,&DAT_149dfb77a);
  (**(code **)(*plVar17 + 0x2a8))(plVar17,pcVar24,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14bdad5b0;
  local_2c0 = local_508;
  local_2e8 = FUN_14456fcd2;
  FUN_149670c8c(*(longlong *)(pcVar24 + 0xbb0) + 0x28,*(longlong *)(pcVar24 + 0xbb0) + 0xa9);
  local_318 = 0;
  local_308 = &PTR_LAB_14bdad630;
  local_300 = local_508;
  local_328 = &LAB_14456fd66;
  FUN_149670d62(*(longlong *)(local_508 + 0xbb0) + 0x28,*(longlong *)(local_508 + 0xbb0) + 0xd4);
  pcVar24 = local_508;
  local_358 = 0;
  local_348 = &PTR_LAB_14bdad6b0;
  local_340 = local_508;
  local_368 = &LAB_14456fdb6;
  FUN_149670e38(*(longlong *)(local_508 + 0xbb0) + 0x28,*(longlong *)(local_508 + 0xbb0) + 0xbd);
  plVar17 = (longlong *)FUN_149670f0d(pcVar24);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  *(longlong **)(pcVar24 + 3000) = plVar17;
  FUN_140056680(&local_e8,&DAT_149dfb77a);
  (**(code **)(*plVar17 + 0x2a8))(plVar17,pcVar24,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_398 = 0;
  local_388 = &PTR_LAB_14bdad730;
  local_380 = pcVar24;
  local_3a8 = &LAB_14456fe12;
  FUN_149670fa2(*(longlong *)(pcVar24 + 3000) + 0x28,*(longlong *)(pcVar24 + 3000) + 0xb8);
  (**(code **)(*(longlong *)pcVar24 + 0x5e0))(pcVar24);
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0xbb0));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0x100));
  *(undefined1 *)(*(longlong *)(pcVar24 + 0x100) + 0xd8) = 0;
  *(undefined1 *)(*(longlong *)(pcVar24 + 0x100) + 0xc0) = 1;
  *(undefined1 *)(*(longlong *)(pcVar24 + 0x100) + 0xd9) = 1;
  *(undefined1 *)(*(longlong *)(pcVar24 + 0x100) + 0xda) = 1;
  *(undefined1 *)(*(longlong *)(pcVar24 + 0x100) + 0xdb) = 0;
  *(undefined4 *)(*(longlong *)(pcVar24 + 0x100) + 0xbc) = 0x3f28f5c3;
  (**(code **)(*(longlong *)pcVar24 + 0x470))(pcVar24);
  lVar14 = FUN_149671077(pcVar24);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  local_4e8 = plVar20;
  local_4f8 = plVar15;
  *(longlong *)(pcVar24 + 0xbc0) = lVar14;
  local_470 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_470 = &PTR_FUN_14bdaca18;
  local_470[2] = 0;
  local_470[4] = 0;
  local_e8 = (code *)local_470[2];
  uStack_e0 = local_470[3];
  local_d8 = (undefined ***)local_470[4];
  local_d0 = local_470[5];
  local_c8 = (undefined **)local_470[6];
  pcStack_c0 = (code *)local_470[7];
  local_b8 = (code *)local_470[8];
  uStack_b0 = (undefined1 *)local_470[9];
  uVar13 = local_b8;
  uVar8 = uStack_b0;
  uStack_100._0_4_ = SUB84(pcVar24,0);
  uVar12 = (undefined4)uStack_100;
  uStack_100._4_4_ = (undefined4)((ulonglong)pcVar24 >> 0x20);
  uVar6 = uStack_100._4_4_;
  *(undefined4 *)(local_470 + 8) = local_f8;
  *(undefined4 *)((longlong)local_470 + 0x44) = uStack_f4;
  *(undefined4 *)(local_470 + 9) = uStack_f0;
  *(undefined4 *)((longlong)local_470 + 0x4c) = uStack_ec;
  *(undefined4 *)(local_470 + 6) = 0x4bdad750;
  *(undefined4 *)((longlong)local_470 + 0x34) = 1;
  *(undefined4 *)(local_470 + 7) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_470 + 0x3c) = uStack_100._4_4_;
  local_470[4] = 0;
  local_470[5] = uStack_110;
  local_470[2] = FUN_14456fe62;
  local_470[3] = uStack_120;
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = pcStack_c0;
  local_118 = local_d8;
  uStack_110 = local_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  local_b8 = (code *)uVar13;
  uStack_b0 = (undefined1 *)uVar8;
  if (local_e8 != (code *)0x0) {
    pppuVar21 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar21 = &local_108;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  local_e8 = (code *)0x149eeead0;
  uStack_e0._0_4_ = 7.00649e-45;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda61e8;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x14);
  FUN_1446e940c(&local_4d0,&local_e8);
  FUN_140208bae(local_480,&local_4d0,&local_128,L"Paint");
  local_518 = (wchar_t **)lVar14;
  FUN_1496b438e(pcVar24,0,local_480,&local_470);
  lVar14 = FUN_149671077(pcVar24);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(pcVar24 + 0xbc8) = lVar14;
  local_488 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_488 = &PTR_FUN_14bdaca18;
  local_488[2] = 0;
  local_488[4] = 0;
  local_e8 = (code *)local_488[2];
  uStack_e0 = local_488[3];
  local_d8 = (undefined ***)local_488[4];
  local_d0 = local_488[5];
  local_c8 = (undefined **)local_488[6];
  pcStack_c0 = (code *)local_488[7];
  local_b8 = (code *)local_488[8];
  uStack_b0 = (undefined1 *)local_488[9];
  uVar13 = local_b8;
  uVar8 = uStack_b0;
  *(undefined4 *)(local_488 + 8) = local_f8;
  *(undefined4 *)((longlong)local_488 + 0x44) = uStack_f4;
  *(undefined4 *)(local_488 + 9) = uStack_f0;
  *(undefined4 *)((longlong)local_488 + 0x4c) = uStack_ec;
  *(undefined4 *)(local_488 + 6) = 0x4bdad7d0;
  *(undefined4 *)((longlong)local_488 + 0x34) = 1;
  *(undefined4 *)(local_488 + 7) = uVar12;
  *(undefined4 *)((longlong)local_488 + 0x3c) = uVar6;
  local_488[4] = 0;
  local_488[5] = uStack_110;
  local_488[2] = FUN_14456ff0a;
  local_488[3] = uStack_120;
  local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  local_108 = local_c8;
  uStack_100 = pcStack_c0;
  local_118 = local_d8;
  uStack_110 = local_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  local_b8 = (code *)uVar13;
  uStack_b0 = (undefined1 *)uVar8;
  if (local_e8 != (code *)0x0) {
    pppuVar21 = &local_108;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar21 = local_d8;
    }
    (*(code *)(*pppuVar21)[2])(pppuVar21);
  }
  local_e8 = (code *)0x14bd9c030;
  uStack_e0._0_4_ = 7.00649e-45;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda61e8;
  uStack_e0._0_4_ = 2.8026e-44;
  FUN_1446e940c(&local_4d0,&local_e8);
  FUN_140208bae(local_498,&local_4d0,&local_128,L"Erase");
  local_518 = (wchar_t **)lVar14;
  FUN_1496b454e(pcVar24,1,local_498,&local_488);
  uVar13 = FUN_14967110c(pcVar24);
  local_4a0 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_4a0 = &PTR_FUN_14bdad7f0;
  local_e8 = (code *)0x14bda7038;
  uStack_e0._0_4_ = 8.40779e-45;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda61e8;
  uStack_e0._0_4_ = 2.8026e-44;
  FUN_1446e940c(&local_4d0,&local_e8);
  FUN_140208bae(local_4b0,&local_4d0,&local_128,L"Soften");
  local_518 = (wchar_t **)uVar13;
  FUN_1496b454e(local_508,2,local_4b0,&local_4a0);
  puVar16 = (undefined8 *)FUN_1496711a1(local_508);
  local_4b8 = (undefined8 *)FUN_14001cc68(8,0x10);
  pcVar24 = local_508;
  *local_4b8 = &PTR_FUN_14bdad860;
  local_e8 = (code *)0x14bdae77c;
  uStack_e0._0_4_ = 8.40779e-45;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda61e8;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x14);
  FUN_1446e940c(&local_4d0,&local_e8);
  FUN_140208bae(local_4c8,&local_4d0,&local_128,L"Smooth");
  local_518 = (wchar_t **)puVar16;
  FUN_1496b454e(pcVar24,3,local_4c8,&local_4b8);
  FUN_1496b523c(pcVar24);
  lVar14 = FUN_149671236(pcVar24);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(pcVar24 + 0xbd0) = lVar14;
  FUN_14485c47a(lVar14 + 0xa8,pcVar24);
  lVar14 = FUN_1496712cb(pcVar24);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(pcVar24 + 0xbd8) = lVar14;
  FUN_14485c47a(lVar14 + 0xa8,pcVar24);
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 3000));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0xa10));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0xbd0));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0xbd8));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0xba8));
  (**(code **)(*(longlong *)pcVar24 + 0x308))(pcVar24,*(longlong *)(pcVar24 + 0x108));
  (**(code **)(*(longlong *)pcVar24 + 0x328))(pcVar24,*(longlong *)(pcVar24 + 0x108),0);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bdad930;
  local_3c0 = pcVar24;
  local_3e8 = &LAB_14456ffb2;
  FUN_149671360(*(longlong *)(pcVar24 + 0xbb0) + 0x28,*(longlong *)(pcVar24 + 0xbb0) + 0xa8);
  FUN_1496b3abe(pcVar24);
  FUN_149671436(pcVar24,*(undefined1 *)(*(longlong *)(pcVar24 + 0xbb0) + 0xa8));
  if (*(byte *)(*(longlong *)(pcVar24 + 0xbb0) + 0xbd) < 3) {
    FUN_1496b4e36(pcVar24,*(byte *)(*(longlong *)(pcVar24 + 0xbb0) + 0xbd) + 1);
  }
  (**(code **)(*(longlong *)pcVar24 + 0x460))(pcVar24,0);
  lVar14 = FUN_1484e487a(pcVar24);
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar14);
  }
  *(longlong *)(pcVar24 + 0xc00) = lVar14;
  lVar23 = *(longlong *)(pcVar24 + 0xbf8);
  lVar19 = *(longlong *)(lVar23 + 0xb0);
  if (lVar19 == 0) {
    lVar19 = FUN_1448abda6();
  }
  FUN_1484e0ce2(lVar14,lVar19,lVar23 + 0x240);
  lVar14 = *(longlong *)(pcVar24 + 0xc00);
  if (*(longlong *)(lVar14 + 0x120) != 0) {
    *(undefined1 *)(*(longlong *)(lVar14 + 0x120) + 0xae) = 0;
    plVar15 = *(longlong **)(*(longlong *)(pcVar24 + 0xc00) + 0x120);
    FUN_140056680(&local_e8,L"MeshVertexPaintTool");
    (**(code **)(*plVar15 + 0x2a8))(plVar15,pcVar24,&local_e8);
    if (local_e8 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*(longlong *)pcVar24 + 0x308))
              (pcVar24,*(undefined8 *)(*(longlong *)(pcVar24 + 0xc00) + 0x120));
    lVar14 = *(longlong *)(pcVar24 + 0xc00);
  }
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdad950;
  pcStack_c0 = pcVar24;
  local_e8 = FUN_144570004;
  FUN_1484de4b4(lVar14,&local_e8);
  if (local_e8 != (code *)0x0) {
    pppuVar21 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar21 = local_d8;
    }
    (*(code *)(*pppuVar21)[2])(pppuVar21);
  }
  local_e8 = (code *)0x0;
  uStack_e0 = 0;
  uStack_120 = (longlong *)((ulonglong)uStack_120 & 0xffffffff00000000);
  local_128 = (code *)0x3e800000000;
  uVar13 = FUN_14850658d(*(longlong *)(pcVar24 + 0xa0));
  FUN_14855bc06(uVar13,&local_e8);
  pwVar7 = (wchar_t *)local_e8;
  lVar14 = (longlong)(int)(float)uStack_e0;
  if (lVar14 != 0) {
    lVar23 = 0;
    pcVar24 = local_128;
    plVar15 = uStack_120;
    do {
      uStack_120 = plVar15;
      local_128 = pcVar24;
      local_4d0 = *(undefined8 *)((longlong)pwVar7 + lVar23);
      lVar19 = *(longlong *)(local_508 + 0xbd8);
      FUN_1400021e4(&local_4d0,&local_128);
      iVar4 = *(int *)(lVar19 + 0xd0);
      *(uint *)(lVar19 + 0xd0) = iVar4 + 1U;
      if (*(uint *)(lVar19 + 0xd4) < iVar4 + 1U) {
        FUN_1447a1bd6((longlong *)(lVar19 + 200),iVar4);
      }
      lVar19 = *(longlong *)(lVar19 + 200);
      lVar26 = (longlong)iVar4 * 0x10;
      *(undefined8 *)(lVar19 + lVar26) = 0;
      *(code **)(lVar19 + lVar26) = local_128;
      local_128 = (code *)0x0;
      pcVar24 = local_128;
      *(undefined4 *)(lVar19 + 8 + lVar26) = (undefined4)uStack_120;
      *(undefined4 *)(lVar19 + 0xc + lVar26) = uStack_120._4_4_;
      uStack_120 = (longlong *)0x0;
      plVar15 = uStack_120;
      uStack_120 = (longlong *)0x0;
      local_128 = (code *)0x0;
      lVar23 = lVar23 + 8;
    } while (lVar14 * 8 != lVar23);
  }
  pcVar24 = local_508;
  if (0 < *(int *)(*(longlong *)(local_508 + 0xbd8) + 0xd0)) {
    puVar16 = *(undefined8 **)(*(longlong *)(local_508 + 0xbd8) + 200);
    iVar4 = *(int *)(puVar16 + 1);
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    FUN_1446f82e2(&local_128,iVar5,*puVar16,1);
    *(code **)(*(longlong *)(pcVar24 + 0xbd8) + 0xbc) = local_128;
  }
  pcVar3 = pcVar24 + 0xc28;
  uVar12 = FUN_14850653a(*(longlong *)(pcVar24 + 0xa0),pcVar3);
  plVar15 = local_4f8;
  pcVar28 = local_500;
  *(undefined4 *)(pcVar24 + 0xc10) = uVar12;
  cVar11 = pcVar24[0xc28];
  if (cVar11 == (code)0x1) {
    local_518 = (wchar_t **)CONCAT71(local_518._1_7_,1);
    FUN_1485064b0(&local_128,*(longlong *)(pcVar24 + 0xa0),pcVar3,0);
    if ((code **)(pcVar24 + 0xc18) == &local_128) {
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(pcVar24 + 0xc18) != 0) {
        FUN_1400020a8();
      }
      *(code **)(local_508 + 0xc18) = local_128;
      *(undefined4 *)(local_508 + 0xc20) = (undefined4)uStack_120;
      *(undefined4 *)(local_508 + 0xc24) = uStack_120._4_4_;
    }
    local_128 = pcVar24 + 0xc10;
    FUN_14968751e(pcVar24 + 0xc18);
    cVar11 = *pcVar3;
    pcVar24 = local_508;
  }
  if ((((byte)cVar11 & 1) != 0) && (0 < *(int *)(pcVar24 + 0xc20))) {
    lVar14 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(pcVar24 + 0xc18) + lVar14 * 4);
      if (iVar4 != *(int *)(pcVar24 + 0xc10)) {
        lVar23 = *(longlong *)(pcVar24 + 0xbd8);
        if (iVar4 == 100) {
          FUN_140056680(&local_128,L"HiRes");
        }
        else {
          FUN_140002266(&local_128,L"LOD %d");
        }
        iVar4 = *(int *)(lVar23 + 0xf8);
        *(uint *)(lVar23 + 0xf8) = iVar4 + 1U;
        if (*(uint *)(lVar23 + 0xfc) < iVar4 + 1U) {
          FUN_1447a1bd6((longlong *)(lVar23 + 0xf0),iVar4);
        }
        lVar23 = *(longlong *)(lVar23 + 0xf0);
        lVar19 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar23 + lVar19) = 0;
        *(code **)(lVar23 + lVar19) = local_128;
        local_128 = (code *)0x0;
        *(undefined4 *)(lVar23 + 8 + lVar19) = (undefined4)uStack_120;
        *(undefined4 *)(lVar23 + 0xc + lVar19) = uStack_120._4_4_;
        uStack_120 = (longlong *)0x0;
        pcVar24 = local_508;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(pcVar24 + 0xc20));
    puVar16 = *(undefined8 **)(*(longlong *)(pcVar24 + 0xbd8) + 0xf0);
    iVar4 = *(int *)(puVar16 + 1);
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(*(longlong *)(pcVar24 + 0xbd8) + 0xe0,*puVar16,iVar5);
    plVar15 = local_4f8;
    pcVar28 = local_500;
  }
  (**(code **)(*(longlong *)pcVar24 + 0x590))(pcVar24,0);
  (**(code **)(*(longlong *)pcVar24 + 0x598))(pcVar24,0);
  (**(code **)(*(longlong *)pcVar24 + 0x5a8))(pcVar24,1);
  FUN_1496715d2(pcVar24);
  cVar10 = *(char *)(*(longlong *)(pcVar24 + 0xbb0) + 0xa9);
  *(char *)(*(longlong *)(pcVar24 + 3000) + 0xba) = cVar10;
  (**(code **)(*(longlong *)pcVar24 + 0x328))
            (pcVar24,*(longlong *)(pcVar24 + 0x100),cVar10 != '\x04');
  FUN_1496b51e2(pcVar24,0);
  FUN_149671664(pcVar24);
  pcVar24 = local_4e0;
  if (local_4e0 != (code *)0x0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(pcVar24 + 0x70) + 0x20))
                         (*(longlong **)(pcVar24 + 0x70),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  plVar20 = local_4d8;
  if (pcVar28 != (code *)0x0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(pcVar28 + 0x70) + 0x20))
                         (*(longlong **)(pcVar28 + 0x70),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  pcVar24 = local_4f0;
  if (local_4f0 != (code *)0x0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(pcVar24 + 0x70) + 0x20))
                         (*(longlong **)(pcVar24 + 0x70),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  plVar17 = local_4e8;
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar20 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_149670140:
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != 0) {
    if (local_158 == (longlong *)0x0) {
      local_158 = local_148;
    }
    (**(code **)(*local_158 + 0x10))();
  }
  if ((local_a0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496701d0 FUN_1496701d0 body=218 status=ok
// SIG undefined FUN_1496701d0(void)

undefined8
FUN_1496701d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdad3f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496702ac FUN_1496702ac body=30 status=ok
// SIG undefined FUN_1496702ac(void)

void FUN_1496702ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x420))();
  *(undefined1 *)(param_1 + 0x192) = 1;
  return;
}



// FUNCTION 1496702ca FUN_1496702ca body=218 status=ok
// SIG undefined FUN_1496702ca(void)

undefined8
FUN_1496702ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14bdac7f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdad4c0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_149682f40(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496703a6 FUN_1496703a6 body=1856 status=ok
// SIG undefined FUN_1496703a6(void)

void FUN_1496703a6(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  uint uVar10;
  undefined8 ***pppuVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_208 [40];
  undefined4 local_1e0;
  undefined8 *local_1d8;
  void ***local_1c8;
  uint local_1bc;
  double *local_1b8;
  uint local_1b0;
  uint local_1ac;
  code *local_1a8;
  void ****ppppvStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int local_188;
  int local_15c;
  longlong local_150;
  undefined4 local_148;
  undefined8 ***local_138;
  longlong *local_130;
  longlong lStack_128;
  double **local_120;
  uint *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b8 = (double *)0x0;
  local_1b0 = *(uint *)(param_2 + 0x78);
  lVar12 = (longlong)(int)local_1b0;
  _Src = *(void **)(param_2 + 0x70);
  if (lVar12 == 0) {
    local_1ac = 0;
    goto LAB_149670678;
  }
  FUN_144721d4c(&local_1b8,local_1b0,0);
  memcpy(local_1b8,_Src,lVar12 << 4);
  lVar12 = (longlong)(int)local_1b0;
  if (lVar12 < 2) goto LAB_149670678;
  cVar9 = FUN_1484fecf6(&local_1b8);
  pdVar1 = local_1b8;
  if (cVar9 == '\0') {
    dVar2 = local_1b8[1];
    dVar6 = dVar2 - local_1b8[3];
    dVar3 = *local_1b8;
    dVar15 = dVar3 - local_1b8[2];
    dVar17 = SQRT(dVar15 * dVar15 + dVar6 * dVar6);
    if (0.0 < dVar17) {
      dVar6 = dVar6 * (1.0 / dVar17);
    }
    else {
      dVar6 = 0.0;
    }
    dVar7 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar15 * (1.0 / dVar17)));
    dVar15 = local_1b8[lVar12 * 2 + -2];
    dVar17 = local_1b8[lVar12 * 2 + -1];
    dVar5 = dVar17 - local_1b8[lVar12 * 2 + -3];
    dVar8 = dVar15 - local_1b8[lVar12 * 2 + -4];
    dVar16 = SQRT(dVar8 * dVar8 + dVar5 * dVar5);
    if (0.0 < dVar16) {
      dVar5 = dVar5 * (1.0 / dVar16);
    }
    else {
      dVar5 = 0.0;
    }
    local_138 = (undefined8 ***)0x0;
    lVar12 = (longlong)(int)local_1b0;
    local_130 = (longlong *)CONCAT44(local_130._4_4_,local_1b0);
    if (lVar12 == 0) {
      local_130 = (longlong *)(ulonglong)local_1b0;
LAB_1496708be:
      uVar18 = 0;
      uVar19 = 0x408f4000;
    }
    else {
      FUN_144721d4c(&local_138,local_1b0,0);
      memcpy(local_138,pdVar1,lVar12 << 4);
      if ((longlong)(int)local_130 < 1) goto LAB_1496708be;
      iVar13 = (int)local_130 + -1;
      pppuVar11 = local_138 + 1;
      dVar4 = 0.0;
      lVar12 = 0;
      do {
        dVar4 = dVar4 + ((double)local_138[(longlong)iVar13 * 2] * (double)*pppuVar11 -
                        (double)pppuVar11[-1] * (double)local_138[(longlong)iVar13 * 2 + 1]);
        iVar13 = (int)lVar12;
        lVar12 = lVar12 + 1;
        pppuVar11 = pppuVar11 + 2;
      } while ((int)local_130 != lVar12);
      uVar18 = (undefined4)*(undefined8 *)(&DAT_14bd8f900 + (ulonglong)(dVar4 * 0.5 < 0.0) * 8);
      uVar19 = (undefined4)
               ((ulonglong)*(undefined8 *)(&DAT_14bd8f900 + (ulonglong)(dVar4 * 0.5 < 0.0) * 8) >>
               0x20);
    }
    dVar8 = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar8 * (1.0 / dVar16)));
    uVar14 = (ulonglong)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar14);
    }
    pdVar1 = local_1b8;
    memmove(local_1b8 + 2,local_1b8,uVar14 << 4);
    *pdVar1 = dVar3 + dVar7 * 10000.0;
    pdVar1[1] = dVar2 + dVar6 * 10000.0;
    dVar2 = local_1b8[1];
    dVar3 = *local_1b8;
    uVar14 = (ulonglong)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar14);
    }
    pdVar1 = local_1b8;
    memmove(local_1b8 + 2,local_1b8,uVar14 << 4);
    uVar10 = local_1b0;
    *pdVar1 = dVar6 * (double)CONCAT44(uVar19,uVar18) + dVar3;
    pdVar1[1] = dVar2 - dVar7 * (double)CONCAT44(uVar19,uVar18);
    lVar12 = (longlong)(int)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar10);
    }
    uVar10 = local_1b0;
    local_1b8[lVar12 * 2] = dVar15 + dVar8 * 10000.0;
    local_1b8[lVar12 * 2 + 1] = dVar17 + dVar5 * 10000.0;
    lVar12 = (longlong)(int)local_1b0;
    dVar2 = local_1b8[(longlong)(int)(local_1b0 - 1) * 2 + 1];
    dVar3 = local_1b8[(longlong)(int)(local_1b0 - 1) * 2];
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar10);
    }
    uVar10 = local_1b0;
    local_1b8[lVar12 * 2] = dVar5 * (double)CONCAT44(uVar19,uVar18) + dVar3;
    local_1b8[lVar12 * 2 + 1] = dVar2 - dVar8 * (double)CONCAT44(uVar19,uVar18);
    local_198 = *local_1b8;
    uStack_190 = *(undefined4 *)(local_1b8 + 1);
    uStack_18c = *(undefined4 *)((longlong)local_1b8 + 0xc);
    lVar12 = (longlong)(int)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar10);
    }
    pdVar1 = local_1b8 + lVar12 * 2;
    *(undefined4 *)pdVar1 = (undefined4)local_198;
    *(undefined4 *)((longlong)pdVar1 + 4) = local_198._4_4_;
    *(undefined4 *)(pdVar1 + 1) = uStack_190;
    *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_18c;
    if (local_138 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
  }
  local_1bc = local_1b0;
  pppuVar11 = (undefined8 ***)(**(code **)(*param_1 + 0x420))(param_1);
  local_1c8 = pppuVar11;
  FUN_144a1a59e(param_1 + 0x195,
                *(int *)(pppuVar11 + 4) * 0x200 + *(int *)((longlong)pppuVar11 + 0x24),1);
  ppppvStack_1a0 = &local_138;
  local_1d8 = &local_198;
  local_198 = 0.0;
  uStack_190 = 0;
  local_1a8 = FUN_144570492;
  local_1e0 = 0;
  local_138 = &local_1c8;
  local_130 = param_1;
  lStack_128 = param_2;
  local_120 = &local_1b8;
  local_118 = &local_1bc;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(pppuVar11 + 4) * 0x200 + *(int *)((longlong)pppuVar11 + 0x24),1);
  local_110 = 0;
  local_108 = 0;
  local_130 = (longlong *)0x0;
  lStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_138 = local_1c8;
  uVar10 = *(int *)(local_1c8 + 4) * 0x200 + *(int *)((longlong)local_1c8 + 0x24);
  if (0 < (int)uVar10) {
    uVar14 = 0;
    do {
      if ((((longlong)uVar14 <
            (longlong)(*(int *)(local_138 + 4) * 0x200 + *(int *)((longlong)local_138 + 0x24))) &&
          ((ushort)(*(short *)((longlong)local_138[5][uVar14 >> 9 & 0x7fffff] +
                              (ulonglong)((uint)uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (*(int *)(param_1[0x195] + uVar14 * 4) == 1)) {
        local_198 = (double)CONCAT44(local_198._4_4_,(uint)uVar14);
        FUN_1447cbafe(&local_130,&local_1a8,&local_198,0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar10 != uVar14);
  }
  FUN_146c82564(&local_198,local_1c8,&local_138,*(undefined4 *)(param_1[0x177] + 0xb4));
  if (local_188 != local_15c) {
    cVar9 = (**(code **)(*param_1 + 0x520))(param_1);
    lVar12 = 0xac;
    if (cVar9 != '\0') {
      lVar12 = 0xc0;
    }
    local_1a8 = *(code **)(param_1[0x176] + lVar12);
    ppppvStack_1a0 = (void ****)((undefined8 *)(param_1[0x176] + lVar12))[1];
    FUN_1496736cc(param_1,&uStack_190);
  }
  local_148 = 0;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&uStack_190);
  local_e8 = 0;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_130);
LAB_149670678:
  if (local_1b8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149670ae8 FUN_149670ae8 body=271 status=ok
// SIG undefined FUN_149670ae8(void)

void FUN_149670ae8(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  cVar1 = FUN_14851db82(param_1[0x175]);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar6[1] = 0;
    *puVar6 = uVar3;
    puVar6[2] = 0xffffffff;
    FUN_148376a28(puVar6);
    lVar7 = param_1[0x187];
    param_1[0x187] = (longlong)puVar6;
  }
  else {
    uVar3 = *(undefined8 *)(param_1[0x175] + 0xa8);
    uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    uVar3 = FUN_14837b9bf(uVar2,uVar3);
    uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    lVar4 = FUN_14001cc68(0x18,0x10);
    FUN_148376c7c(lVar4,uVar2,uVar3);
    lVar7 = param_1[0x187];
    param_1[0x187] = lVar4;
  }
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  FUN_1484b2d8e(param_1[0x17f],2);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000149670ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x348))(plVar5);
  return;
}



// FUNCTION 149670bf7 FUN_149670bf7 body=148 status=ok
// SIG undefined FUN_149670bf7(void)

undefined8 FUN_149670bf7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fb05a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149670c8c FUN_149670c8c body=212 status=ok
// SIG undefined FUN_149670c8c(void)

void FUN_149670c8c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14968522e(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149670d62 FUN_149670d62 body=212 status=ok
// SIG undefined FUN_149670d62(void)

void FUN_149670d62(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14968554c(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149670e38 FUN_149670e38 body=212 status=ok
// SIG undefined FUN_149670e38(void)

void FUN_149670e38(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14968588a(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149670f0d FUN_149670f0d body=148 status=ok
// SIG undefined FUN_149670f0d(void)

undefined8 FUN_149670f0d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fb146();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149670fa2 FUN_149670fa2 body=212 status=ok
// SIG undefined FUN_149670fa2(void)

void FUN_149670fa2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_149685ba8(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149671077 FUN_149671077 body=148 status=ok
// SIG undefined FUN_149671077(void)

undefined8 FUN_149671077(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14595ecd6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967110c FUN_14967110c body=148 status=ok
// SIG undefined FUN_14967110c(void)

undefined8 FUN_14967110c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baa47e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496711a1 FUN_1496711a1 body=148 status=ok
// SIG undefined FUN_1496711a1(void)

undefined8 FUN_1496711a1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baa568();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149671236 FUN_149671236 body=148 status=ok
// SIG undefined FUN_149671236(void)

undefined8 FUN_149671236(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599d68a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496712cb FUN_1496712cb body=148 status=ok
// SIG undefined FUN_1496712cb(void)

undefined8 FUN_1496712cb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599d776();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149671360 FUN_149671360 body=212 status=ok
// SIG undefined FUN_149671360(void)

void FUN_149671360(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_149687200(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149671436 FUN_149671436 body=411 status=ok
// SIG undefined FUN_149671436(void)

void FUN_149671436(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  wchar_t *local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21330) {
    FUN_144b3d300(&DAT_14cc21330);
    if (DAT_14cc21330 == -1) {
      local_48 = L"OnStartTool";
      uStack_40._0_4_ = 0xb;
      FUN_1446e940c(local_58,&local_48);
      local_48 = L"UMeshVertexPaintTool";
      uStack_40 = CONCAT44(uStack_40._4_4_,0x14);
      FUN_1446e940c(local_2c,&local_48);
      FUN_140208bae(&DAT_14cc21320,local_2c,local_58,
                    L"Hold Shift to Erase. [/] and S/D change Size (+Shift to small-step). Shift+G to pick Paint Color, +Ctrl for Erase Color."
                   );
      atexit((_func_5014 *)&LAB_144567d4f);
      _Init_thread_footer(&DAT_14cc21330);
    }
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14615b4b0(&local_48,&DAT_14cc21320);
  FUN_1496b4c26(param_1,param_2);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14598dd3c(&local_48,local_58);
  (**(code **)(*plVar1 + 0x340))(plVar1,local_58,2);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  FUN_1401b9920(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496715d2 FUN_1496715d2 body=146 status=ok
// SIG undefined FUN_1496715d2(void)

void FUN_1496715d2(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1[0x177] + 0xb8) == '\x02') {
    (**(code **)(*param_1 + 0x5a0))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 0x5a0))(param_1,6);
    if ((DAT_14cb0d2b0 != 0 && *(char *)(param_1[0x177] + 0xb8) == '\x01') &&
       (*(longlong *)(DAT_14cb0d2b0 + 0x5a0) != 0)) {
      plVar1 = (longlong *)(**(code **)(*param_1 + 0x410))(param_1);
      (**(code **)(*plVar1 + 0xb30))(plVar1,*(undefined8 *)(DAT_14cb0d2b0 + 0x5a0));
    }
  }
  FUN_149671664(param_1);
  return;
}



// FUNCTION 149671664 FUN_149671664 body=341 status=ok
// SIG undefined FUN_149671664(void)

void FUN_149671664(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 **ppuVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98 [2];
  undefined8 local_88;
  undefined **local_78;
  undefined4 local_70;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(*(longlong *)(param_1 + 3000) + 0xb8) == '\x02') {
LAB_149671696:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
  }
  lVar2 = *(longlong *)(param_1 + 0xbb0);
  pbVar1 = (byte *)(lVar2 + 0xd4);
  if ((*pbVar1 & 1) == 0) {
    if (((*(byte *)(lVar2 + 0xd6) & 1) == 0) && ((*(byte *)(lVar2 + 0xd5) & 1) == 0)) {
      plVar3 = *(longlong **)(param_1 + 0xbf8);
      if ((*(byte *)(lVar2 + 0xd7) & 1) == 0) goto LAB_149671696;
      ppuVar4 = local_98;
      local_88 = 0;
      local_78 = &PTR_LAB_14bdad9f0;
      local_98[0] = &LAB_144570ace;
      lVar2 = *plVar3;
      local_70 = *(undefined4 *)pbVar1;
      goto LAB_14967174c;
    }
  }
  else if (((*(byte *)(lVar2 + 0xd5) & 1) != 0) && ((*(byte *)(lVar2 + 0xd6) & 1) != 0))
  goto LAB_149671696;
  plVar3 = *(longlong **)(param_1 + 0xbf8);
  ppuVar4 = local_58;
  local_48 = 0;
  local_38 = &PTR_LAB_14bdad9d0;
  local_58[0] = &LAB_144570a60;
  lVar2 = *plVar3;
  local_30 = *(undefined4 *)pbVar1;
LAB_14967174c:
  (**(code **)(lVar2 + 0xc00))(plVar3,ppuVar4,2);
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496717d2 FUN_1496717d2 body=1173 status=ok
// SIG undefined FUN_1496717d2(void)

void FUN_1496717d2(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_e8 [47];
  char local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1[0x17f] != 0) && (param_1[0x181] != 0)) {
    FUN_14480f766(param_1[0x17f] + 0x6c8);
  }
  lVar5 = param_1[0x180];
  plVar2 = *(longlong **)(lVar5 + 0x120);
  if (plVar2 != (longlong *)0x0) {
    FUN_140056680(&local_b8,L"MeshVertexPaintTool");
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_b8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar5 = param_1[0x180];
  }
  FUN_1484e0e5e(lVar5);
  plVar2 = (longlong *)param_1[0x176];
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_b8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x177];
  FUN_140056680(&local_b8,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_b8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x175];
  FUN_140056680(&local_b8,L"MeshVertexPaintTool");
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_b8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17e] != 0) {
    FUN_140aeefbc(param_1[0x17e],0,1);
    param_1[0x17e] = 0;
  }
  local_b9 = param_2;
  if (param_2 == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x420))(param_1);
    uVar9 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
    uVar12 = 0;
    if ((uVar9 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
      uVar13 = 1;
      uVar4 = 1;
      if (1 < (int)uVar9) {
        uVar13 = uVar9;
      }
      do {
        uVar12 = uVar13;
        if (uVar13 == uVar4) break;
        uVar7 = uVar4 >> 9;
        uVar10 = uVar4 & 0x1ff;
        uVar12 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar7] +
                                           (ulonglong)uVar10 * 2) - 1U));
    }
    lVar3 = param_1[0x186];
joined_r0x0001496719aa:
    uVar13 = uVar12;
    if (uVar13 != uVar9) {
      FUN_146c3fdcc(uVar13,lVar3,0x322bcc77);
      uVar4 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar9) {
        uVar4 = uVar9;
      }
      do {
        uVar12 = uVar4;
        if (uVar4 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar12 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x28) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      goto joined_r0x0001496719aa;
    }
    FUN_146c09afc(lVar5,0);
    lVar5 = param_1[0x186];
    uVar9 = *(int *)(lVar5 + 8) * 0x200 + *(int *)(lVar5 + 0xc);
    uVar12 = 0;
    if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x10) - 1U))) {
      uVar13 = 1;
      uVar4 = 1;
      if (1 < (int)uVar9) {
        uVar13 = uVar9;
      }
      do {
        uVar7 = uVar4;
        uVar12 = uVar13;
        if (uVar13 == uVar7) break;
        uVar4 = uVar7 + 1;
        uVar12 = uVar7;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x10))[uVar7 >> 9] +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    }
joined_r0x000149671a40:
    uVar13 = uVar12;
    if (uVar13 != uVar9) {
      uVar11 = (ulonglong)(uVar13 >> 7 & 0x7fffff);
      uVar8 = (ulonglong)((uVar13 & 0x7f) << 4);
      puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar11 * 8) + uVar8);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      if ((float)local_b8 <= 0.0031308) {
        fVar14 = (float)local_b8 * 12.92;
      }
      else {
        fVar14 = powf((float)local_b8,0.41666666);
        fVar14 = fVar14 * 1.055 + -0.055;
      }
      local_b8 = CONCAT44(local_b8._4_4_,fVar14);
      if (local_b8._4_4_ <= 0.0031308) {
        fVar14 = local_b8._4_4_ * 12.92;
      }
      else {
        fVar14 = powf(local_b8._4_4_,0.41666666);
        fVar14 = fVar14 * 1.055 + -0.055;
      }
      local_b8 = CONCAT44(fVar14,(float)local_b8);
      if ((float)uStack_b0 <= 0.0031308) {
        fVar14 = (float)uStack_b0 * 12.92;
      }
      else {
        fVar14 = powf((float)uStack_b0,0.41666666);
        fVar14 = fVar14 * 1.055 + -0.055;
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar14);
      lVar6 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar11 * 8) + uVar8 + lVar6 * 4)
             = *(undefined4 *)((longlong)&local_b8 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      uVar4 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar9) {
        uVar4 = uVar9;
      }
      do {
        uVar12 = uVar4;
        if (uVar4 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar12 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x10) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      goto joined_r0x000149671a40;
    }
  }
  FUN_144575542(param_1,local_b9);
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149671c68 FUN_149671c68 body=277 status=ok
// SIG undefined FUN_149671c68(void)

void FUN_149671c68(wchar_t *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  wchar_t **local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  local_50 = L"VertexPaintToolTransactionName";
  local_48 = 0x1e;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UMeshVertexPaintTool";
  local_48 = 0x14;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"Paint Vertex Colors");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  local_68 = FUN_144570064;
  local_60 = &local_50;
  local_50 = param_1;
  (**(code **)(*param_2 + 0xa90))(param_2);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149671d7e FUN_149671d7e body=838 status=ok
// SIG undefined FUN_149671d7e(void)

void FUN_149671d7e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [32];
  wchar_t **local_138;
  longlong **local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 **local_118;
  undefined8 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1496b9d04();
  local_78 = 0;
  local_68 = &PTR_LAB_14bdad970;
  local_88[0] = &LAB_1445700c0;
  local_d8 = L"PickColorUnderCursorTooltip";
  local_d0 = 0x1b;
  local_60 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UMeshVertexPaintTool";
  local_d0 = 0x14;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,
                L"Switch the Paint Color to the color currently under the cursor");
  local_d8 = L"PickColorUnderCursor";
  local_d0 = 0x14;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UMeshVertexPaintTool";
  local_d0 = 0x14;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Pick Color");
  FUN_140056680(local_108,L"PickColorUnderCursor");
  local_118 = local_88;
  local_120 = &DAT_14c965010;
  local_128 = 4;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_110 = param_2;
  FUN_148450124(param_2,param_1,0x2904,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdad990;
  local_c8[0] = &LAB_144570114;
  local_d8 = L"PickEraseColorUnderCursorTooltip";
  local_d0 = 0x20;
  local_a0 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UMeshVertexPaintTool";
  local_d0 = 0x14;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,
                L"Switch the Erase Color to the color currently under the cursor");
  local_d8 = L"PickEraseColorUnderCursor";
  local_d0 = 0x19;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UMeshVertexPaintTool";
  local_d0 = 0x14;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Pick Erase Color");
  FUN_140056680(local_108,L"PickEraseColorUnderCursor");
  local_120 = &DAT_14c965010;
  local_128 = 5;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_118 = local_c8;
  FUN_148450124(local_110,param_1,0x2905,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496720c6 FUN_1496720c6 body=38 status=ok
// SIG undefined FUN_1496720c6(void)

longlong * FUN_1496720c6(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x520))();
  return param_1 + (ulonglong)bVar1 * 2 + 0x6e;
}



// FUNCTION 1496720f6 FUN_1496720f6 body=1109 status=ok
// SIG undefined FUN_1496720f6(void)

void FUN_1496720f6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14967254c();
  lVar1 = param_1[0x178];
  if (lVar1 != 0) {
    lVar2 = param_1[0x176];
    uVar19 = *(undefined4 *)(lVar2 + 0xb0);
    uVar18 = *(undefined4 *)(lVar2 + 0xb4);
    uVar17 = *(undefined4 *)(lVar2 + 0xb8);
    *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(lVar2 + 0xac);
    *(undefined4 *)(lVar1 + 0xbc) = uVar19;
    *(undefined4 *)(lVar1 + 0xc0) = uVar18;
    *(undefined4 *)(lVar1 + 0xc4) = uVar17;
    *(uint *)(param_1[0x178] + 0xb0) = (uint)*(byte *)(param_1[0x176] + 0xbc);
    *(bool *)(param_1[0x178] + 0xb4) = *(char *)(param_1[0x176] + 0xa9) == '\0';
  }
  lVar1 = param_1[0x179];
  if (lVar1 != 0) {
    lVar2 = param_1[0x176];
    uVar19 = *(undefined4 *)(lVar2 + 0xc4);
    uVar18 = *(undefined4 *)(lVar2 + 200);
    uVar17 = *(undefined4 *)(lVar2 + 0xcc);
    *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(lVar2 + 0xc0);
    *(undefined4 *)(lVar1 + 0xbc) = uVar19;
    *(undefined4 *)(lVar1 + 0xc0) = uVar18;
    *(undefined4 *)(lVar1 + 0xc4) = uVar17;
    *(undefined4 *)(param_1[0x179] + 0xb0) = 0;
    *(bool *)(param_1[0x179] + 0xb4) = *(char *)(param_1[0x176] + 0xa9) == '\0';
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x458))(param_1);
  cVar6 = (**(code **)(*param_1 + 0x520))(param_1);
  if ((cVar6 == '\0') || (*(char *)(param_1[0x176] + 0xbd) != '\x02')) {
    plVar8 = (longlong *)FUN_14479d2ce(*plVar7 + 8);
    fVar15 = *(float *)(param_1[0x20] + 0xcc) * *(float *)(param_1[0x20] + 0xcc);
  }
  else {
    plVar8 = (longlong *)FUN_14479d2ce(*plVar7 + 8);
    fVar15 = *(float *)(param_1[0x176] + 0xd0) * 0.5 + 0.01;
  }
  (**(code **)(*plVar8 + 0x2d0))(plVar8,fVar15);
  plVar8 = (longlong *)FUN_14479d2ce(*plVar7 + 8);
  (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined4 *)(param_1[0x20] + 0xbc));
  param_1[0x108] = param_1[0x82];
  param_1[0x106] = param_1[0x80];
  param_1[0x107] = param_1[0x81];
  param_1[0x104] = param_1[0x7e];
  param_1[0x105] = param_1[0x7f];
  param_1[0x102] = param_1[0x7c];
  param_1[0x103] = param_1[0x7d];
  param_1[0x109] = param_1[0x83];
  param_1[0x10a] = param_1[0x84];
  param_1[0x10b] = param_1[0x85];
  param_1[0x10c] = param_1[0x86];
  *(int *)(param_1 + 0x10d) = (int)param_1[0x87];
  *(undefined4 *)((longlong)param_1 + 0x86c) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(int *)(param_1 + 0x10e) = (int)param_1[0x88];
  *(undefined4 *)((longlong)param_1 + 0x874) = *(undefined4 *)((longlong)param_1 + 0x444);
  param_1[0x10f] = param_1[0x89];
  lVar1 = (**(code **)(*param_1 + 0x478))(param_1);
  param_1[0x110] = lVar1;
  lVar1 = (**(code **)(*param_1 + 0x480))(param_1);
  param_1[0x111] = lVar1;
  cVar6 = (**(code **)(*param_1 + 0x528))(param_1);
  if (cVar6 == '\0') {
    uVar14 = 0x3ff00000;
  }
  else {
    uVar14 = 0xbff00000;
  }
  param_1[0x113] = (ulonglong)uVar14 << 0x20;
  lVar1 = (**(code **)(*param_1 + 0x498))(param_1);
  param_1[0x114] = lVar1;
  dVar5 = (double)(**(code **)(*param_1 + 0x488))(param_1);
  dVar4 = (double)(**(code **)(*param_1 + 0x490))(param_1);
  param_1[0x112] = (longlong)(dVar4 * dVar5);
  FUN_1402160b8(&local_78);
  param_1[0x124] = CONCAT44(uStack_74,local_78);
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x578))(param_1);
  local_78 = *puVar9;
  uStack_74 = puVar9[1];
  uStack_70 = puVar9[2];
  uStack_6c = puVar9[3];
  local_68 = puVar9[4];
  uStack_64 = puVar9[5];
  uStack_60 = puVar9[6];
  uStack_5c = puVar9[7];
  local_58 = puVar9[8];
  uStack_54 = puVar9[9];
  uStack_50 = puVar9[10];
  uStack_4c = puVar9[0xb];
  local_48 = *(undefined8 *)(puVar9 + 0xc);
  cVar6 = (**(code **)(*param_1 + 0x520))(param_1);
  if (((cVar6 == '\0') && (*(int *)(param_1[0x178] + 0xb0) == 1)) &&
     (lVar1 = param_1[0x1b2], 0 < (longlong)(int)lVar1)) {
    lVar2 = param_1[0x186];
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar3 = param_1[0x1b1];
      *(undefined8 *)(lVar3 + lVar11) = 0;
      ((undefined8 *)(lVar3 + lVar11))[1] = 0;
      uVar16 = 0x3f800000;
      uVar17 = 0x3f800000;
      uVar18 = 0x3f800000;
      uVar19 = 0x3f800000;
      if ((longlong)uVar12 < (longlong)(*(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) {
        uVar16 = 0x3f800000;
        uVar17 = 0x3f800000;
        uVar18 = 0x3f800000;
        uVar19 = 0x3f800000;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x10) + (uVar12 >> 9 & 0x7fffff) * 8) +
                               (ulonglong)((uint)uVar12 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar13 = (ulonglong)((uint)lVar11 & 0x7f0);
          lVar3 = *(longlong *)
                   (*(longlong *)(lVar2 + 0x48) + (ulonglong)((uint)(uVar12 >> 4) & 0x3fffff8));
          uVar19 = *(undefined4 *)(lVar3 + uVar13);
          uVar18 = *(undefined4 *)(lVar3 + 4 + uVar13);
          uVar17 = *(undefined4 *)(lVar3 + 8 + uVar13);
          uVar16 = *(undefined4 *)(lVar3 + 0xc + uVar13);
        }
      }
      lVar3 = param_1[0x1af];
      *(undefined4 *)(lVar3 + lVar11) = uVar19;
      *(undefined4 *)(lVar3 + 4 + lVar11) = uVar18;
      *(undefined4 *)(lVar3 + 8 + lVar11) = uVar17;
      *(undefined4 *)(lVar3 + 0xc + lVar11) = uVar16;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar1 != uVar12);
  }
  (**(code **)(*(longlong *)*plVar7 + 8))((longlong *)*plVar7,&local_78);
  plVar7 = (longlong *)*plVar7;
  uVar10 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar7 + 0x10))(plVar7,uVar10,param_1 + 0x102,param_1 + 0x197);
  FUN_1402226aa(param_1 + 0x188);
  FUN_1496725b4(param_1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967254c FUN_14967254c body=104 status=ok
// SIG undefined FUN_14967254c(void)

void FUN_14967254c(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  bVar1 = (**(code **)(*(longlong *)*puVar3 + 0x30))();
  if ((bVar1 < 2) || (bVar1 == 2)) {
    cVar2 = (**(code **)(*param_1 + 0x500))(param_1,param_2,0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x38))();
      if (cVar2 != '\0') {
        FUN_1496b6976(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1496725b4 FUN_1496725b4 body=306 status=ok
// SIG undefined FUN_1496725b4(void)

void FUN_1496725b4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  lVar1 = param_1[0x221];
  param_1[0x221] = (longlong)puVar2;
  if (lVar1 != 0) {
    FUN_149684c92(lVar1);
    FUN_1400020a8(lVar1);
    puVar2 = (undefined8 *)param_1[0x221];
  }
  FUN_14967620a(puVar2);
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"VertexPaintChange";
  local_38 = 0x11;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"UMeshVertexPaintTool";
  local_38 = 0x14;
  FUN_1446e940c(local_58,&local_40);
  FUN_140208bae(local_50,local_58,local_54,L"Paint Stroke");
  FUN_148558a3c((longlong)param_1 + 0xb94,local_50,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496726e8 FUN_1496726e8 body=86 status=ok
// SIG undefined FUN_1496726e8(void)

void FUN_1496726e8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  plVar1 = (longlong *)*puVar2;
  uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_1 + 0x102,param_1 + 0x197);
  FUN_14967273e(param_1);
  return;
}



// FUNCTION 14967273e FUN_14967273e body=1080 status=ok
// SIG undefined FUN_14967273e(void)

void FUN_14967273e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_cc [4];
  wchar_t *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)param_1[0x221];
  *(longlong *)param_1[0x221] = 0;
  lVar1 = param_1[0x221];
  param_1[0x221] = 0;
  if (lVar1 != 0) {
    FUN_149684c92(lVar1);
    FUN_1400020a8(lVar1);
  }
  local_c8 = *(wchar_t **)(lVar5 + 0x40);
  uStack_80 = *(undefined8 *)(lVar5 + 0x48);
  local_b8 = *(longlong **)(lVar5 + 0x50);
  uStack_70 = *(undefined8 *)(lVar5 + 0x58);
  local_68 = *(longlong *)(lVar5 + 0x60);
  uStack_60 = *(undefined8 *)(lVar5 + 0x68);
  local_58 = *(undefined8 *)(lVar5 + 0x70);
  uStack_50 = *(undefined8 *)(lVar5 + 0x78);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar6 = uStack_70;
  local_88 = local_c8;
  *(ulonglong *)(lVar5 + 0x70) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar5 + 0x78) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar5 + 0x60) = &PTR_LAB_14bdadb20;
  *(code **)(lVar5 + 0x68) = FUN_144570b16;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(ulonglong *)(lVar5 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar5 + 0x40) = &LAB_14968782c;
  *(undefined8 *)(lVar5 + 0x48) = uStack_c0;
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = uStack_80;
  if (local_c8 != (wchar_t *)0x0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = &local_a8;
    }
    uStack_70 = uVar6;
    local_58 = uVar2;
    uStack_50 = uVar3;
    (**(code **)(*plVar7 + 0x10))();
  }
  local_c8 = *(wchar_t **)(lVar5 + 0x80);
  uStack_80 = *(undefined8 *)(lVar5 + 0x88);
  local_b8 = *(longlong **)(lVar5 + 0x90);
  uStack_70 = *(undefined8 *)(lVar5 + 0x98);
  local_68 = *(longlong *)(lVar5 + 0xa0);
  uStack_60 = *(undefined8 *)(lVar5 + 0xa8);
  local_58 = *(undefined8 *)(lVar5 + 0xb0);
  uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar6 = uStack_70;
  local_88 = local_c8;
  *(ulonglong *)(lVar5 + 0xb0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar5 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar5 + 0xa0) = &PTR_LAB_14bdadb20;
  *(code **)(lVar5 + 0xa8) = FUN_144570b98;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(ulonglong *)(lVar5 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar5 + 0x80) = &LAB_14968782c;
  *(undefined8 *)(lVar5 + 0x88) = uStack_c0;
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = uStack_80;
  uStack_70 = uVar6;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = &local_a8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  *puVar4 = &PTR_LAB_14bdadb40;
  puVar4[2] = 0;
  puVar4[1] = lVar5;
  local_c8 = (wchar_t *)puVar4[2];
  uStack_80 = puVar4[3];
  local_b8 = (longlong *)puVar4[4];
  uStack_70 = puVar4[5];
  local_68 = puVar4[6];
  uStack_60 = puVar4[7];
  local_58 = puVar4[8];
  uStack_50 = puVar4[9];
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar6 = uStack_70;
  local_88 = local_c8;
  puVar4[8] = CONCAT44(uStack_94,local_98);
  puVar4[9] = CONCAT44(uStack_8c,uStack_90);
  puVar4[6] = &PTR_LAB_14bdadb90;
  puVar4[7] = param_1;
  puVar4[4] = 0;
  puVar4[5] = CONCAT44(uStack_ac,uStack_b0);
  puVar4[2] = &LAB_144570c1a;
  puVar4[3] = uStack_c0;
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = uStack_80;
  uStack_70 = uVar6;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar7 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar7 = local_b8;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"VertexPaintChange";
  uStack_80._0_4_ = 0x11;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UMeshVertexPaintTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x14);
  FUN_1446e940c(local_cc,&local_88);
  FUN_140208bae(&local_88,local_cc,&local_c8,L"Paint Stroke");
  local_d8 = puVar4;
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,param_1,&local_d8,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148558a82((longlong)param_1 + 0xb94,uVar6);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149672b78 FUN_149672b78 body=79 status=ok
// SIG undefined FUN_149672b78(void)

void FUN_149672b78(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  (**(code **)(*(longlong *)*puVar2 + 0x20))();
  lVar1 = param_1[0x221];
  if (lVar1 == 0) {
    return;
  }
  param_1[0x221] = 0;
  FUN_149684c92(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 149672bc8 FUN_149672bc8 body=493 status=ok
// SIG undefined FUN_149672bc8(void)

void FUN_149672bc8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a1a59e(param_3,0,0);
  iVar6 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
    FUN_14481578e(param_3);
  }
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_98 = param_4;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar6) || (local_60 != plVar1)) {
    do {
      uVar2 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0xc);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar6));
  }
  plVar1 = local_98;
  *(undefined4 *)(local_98 + 1) = 0;
  if (*(int *)((longlong)local_98 + 0xc) < 0) {
    FUN_14481578e(local_98,0);
  }
  FUN_149673b76(param_1,param_1 + 0xca8,plVar1);
  FUN_1402226aa(param_2);
  lVar5 = plVar1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *plVar1;
    lVar7 = 0;
    do {
      local_90 = (longlong *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar4 + lVar7));
      FUN_1447cbafe(param_1 + 0xd28,&local_68,&local_90,0);
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149672db8 FUN_149672db8 body=736 status=ok
// SIG undefined FUN_149672db8(void)

undefined8 FUN_149672db8(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x470))();
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  bVar7 = (**(code **)(*(longlong *)*puVar9 + 0x30))();
  if (bVar7 < 2) {
    (**(code **)(*param_1 + 0x500))(param_1,param_2,1);
  }
  else if (bVar7 == 2) {
    (**(code **)(*param_1 + 0x4f0))(param_1,param_2);
  }
  cVar8 = (**(code **)(*(longlong *)*puVar9 + 0x38))();
  if (cVar8 != '\0') {
    FUN_1496b6976(param_1);
  }
  memcpy(param_1 + 0xd0,param_1 + 0x102,0x150);
  FUN_14967e05c(param_1 + 0xfa,param_1 + 300);
  FUN_1402160b8(&local_88);
  dVar5 = (double)(local_88 - param_1[0x124]) / 10000000.0;
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  param_1[0xe3] = (longlong)dVar5;
  param_1[0xd6] = param_1[0x82];
  param_1[0xd4] = param_1[0x80];
  param_1[0xd5] = param_1[0x81];
  param_1[0xd2] = param_1[0x7e];
  param_1[0xd3] = param_1[0x7f];
  param_1[0xd0] = param_1[0x7c];
  param_1[0xd1] = param_1[0x7d];
  param_1[0xd7] = param_1[0x83];
  param_1[0xd8] = param_1[0x84];
  param_1[0xd9] = param_1[0x85];
  param_1[0xda] = param_1[0x86];
  *(int *)(param_1 + 0xdb) = (int)param_1[0x87];
  *(undefined4 *)((longlong)param_1 + 0x6dc) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(int *)(param_1 + 0xdc) = (int)param_1[0x88];
  *(undefined4 *)((longlong)param_1 + 0x6e4) = *(undefined4 *)((longlong)param_1 + 0x444);
  param_1[0xdd] = param_1[0x89];
  dVar6 = (double)(**(code **)(*param_1 + 0x488))(param_1);
  dVar5 = (double)(**(code **)(*param_1 + 0x490))(param_1);
  param_1[0xe0] = (longlong)(dVar5 * dVar6);
  param_1[0xed] = param_1[0x10b];
  param_1[0xee] = param_1[0x10c];
  param_1[0xeb] = param_1[0x109];
  param_1[0xec] = param_1[0x10a];
  param_1[0xef] = param_1[0x10d];
  param_1[0xf0] = param_1[0x10e];
  param_1[0xf1] = param_1[0x10f];
  param_1[0xea] = param_1[0x108];
  param_1[0xe8] = param_1[0x106];
  param_1[0xe9] = param_1[0x107];
  param_1[0xe6] = param_1[0x104];
  param_1[0xe7] = param_1[0x105];
  *(int *)(param_1 + 0xe4) = (int)param_1[0x102];
  *(undefined4 *)((longlong)param_1 + 0x724) = *(undefined4 *)((longlong)param_1 + 0x814);
  *(int *)(param_1 + 0xe5) = (int)param_1[0x103];
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)((longlong)param_1 + 0x81c);
  dVar5 = (double)param_1[0xd9];
  dVar6 = (double)param_1[0xed];
  dVar1 = (double)param_1[0xd7];
  dVar2 = (double)param_1[0xd8];
  dVar3 = (double)param_1[0xeb];
  dVar4 = (double)param_1[0xec];
  cVar8 = (**(code **)(*(longlong *)*puVar9 + 0x40))();
  if ((cVar8 == '\0') ||
     (1e-08 <= (dVar5 - dVar6) * (dVar5 - dVar6) +
               (dVar1 - dVar3) * (dVar1 - dVar3) + (dVar2 - dVar4) * (dVar2 - dVar4))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967309a FUN_14967309a body=1175 status=ok
// SIG undefined FUN_14967309a(void)

void FUN_14967309a(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_e8 [47];
  char local_b9;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint *local_98;
  longlong local_90;
  uint *local_88;
  longlong *local_80;
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + 0x21d;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  local_b9 = param_3;
  if (*(int *)((longlong)param_1 + 0x10f4) < 0) {
    FUN_14481578e(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  local_a0 = plVar1;
  if (*(int *)((longlong)param_1 + 0x1104) < 0) {
    FUN_14499148c(param_1 + 0x21f,0);
  }
  plVar1 = param_1 + 0x213;
  local_b0 = param_1 + 0x21f;
  FUN_1402226aa(plVar1);
  local_90 = (**(code **)(*param_1 + 0x420))(param_1);
  lVar9 = param_1[0x186];
  local_b8 = lVar9;
  if (*(char *)(param_1[0x176] + 0xd8) == '\x01') {
    lVar11 = param_2[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar16 = *param_2;
      lVar15 = 0;
      do {
        uVar4 = *(int *)(lVar16 + lVar15) * 3;
        lVar5 = *(longlong *)(lVar9 + 0x78);
        iVar14 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 4);
        if (-1 < iVar14) {
          local_58 = CONCAT44(*(undefined4 *)
                               (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                               (ulonglong)(uVar4 + 1 & 0x1ff) * 4),iVar14);
          uStack_50 = CONCAT44(uStack_50._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                                (ulonglong)(uVar4 + 2 & 0x1ff) * 4));
          FUN_1447cbafe(plVar1,&local_68,&local_58,0);
          FUN_1447cbafe(plVar1,&local_68,(longlong)&local_58 + 4,0);
          FUN_1447cbafe(plVar1,&local_68,&uStack_50,0);
          lVar9 = local_b8;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar15);
    }
  }
  else {
    local_a8 = param_1 + 0x19b;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1402226aa();
    if ((longlong)(int)param_2[1] != 0) {
      puVar12 = (uint *)*param_2;
      local_98 = puVar12 + (int)param_2[1];
      local_80 = param_1 + 0x1a2;
      do {
        lVar9 = *(longlong *)(*(longlong *)(local_90 + 0x130) + (ulonglong)(*puVar12 >> 9) * 8);
        uVar10 = (ulonglong)(*puVar12 & 0x1ff);
        local_60 = *(undefined4 *)(lVar9 + 8 + uVar10 * 0xc);
        local_68 = *(undefined8 *)(lVar9 + uVar10 * 0xc);
        lVar9 = 0;
        local_88 = puVar12;
        do {
          local_6c = *(uint *)((longlong)&local_68 + lVar9 * 4);
          if ((int)param_1[0x19c] != *(int *)((longlong)param_1 + 0xd0c)) {
            plVar13 = (longlong *)param_1[0x1a3];
            if ((longlong *)param_1[0x1a3] == (longlong *)0x0) {
              plVar13 = local_80;
            }
            iVar14 = *(int *)((longlong)plVar13 +
                             (ulonglong)((int)param_1[0x1a4] - 1U & local_6c) * 4);
            if (iVar14 != -1) {
              do {
                if (*(uint *)(*local_a8 + (longlong)iVar14 * 0xc) == local_6c) goto LAB_149673483;
                iVar14 = *(int *)(*local_a8 + (longlong)iVar14 * 0xc + 4);
              } while (iVar14 != -1);
            }
          }
          FUN_1447cbafe(local_a8,&local_70,&local_6c,0);
          bVar17 = (longlong)uStack_50 < 0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (bVar17) {
            FUN_14481578e(&local_58,0);
          }
          FUN_146c349b4(local_b8,local_6c,&local_58);
          lVar11 = local_58;
          lVar16 = (longlong)(int)uStack_50;
          if (lVar16 != 0) {
            lVar15 = 0;
            do {
              local_70 = *(undefined4 *)(lVar11 + lVar15);
              FUN_1447cbafe(plVar1,local_74,&local_70,0);
              lVar15 = lVar15 + 4;
            } while (lVar16 * 4 != lVar15);
          }
LAB_149673483:
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        puVar12 = local_88 + 1;
      } while (puVar12 != local_98);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_b9 != '\0') {
    FUN_140619b9c(plVar1,&local_58);
    plVar1 = local_b0;
    if (local_a0 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      param_1[0x21d] = local_58;
      local_58 = 0;
      *(int *)(param_1 + 0x21e) = (int)uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x10f4) = uStack_50._4_4_;
    }
    FUN_14056a44c(plVar1,(int)param_1[0x21e],1);
    if (0 < (int)param_1[0x21e]) {
      lVar9 = 0xc;
      lVar11 = 0;
      do {
        uVar4 = *(uint *)(param_1[0x21d] + lVar11 * 4);
        puVar2 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(local_b8 + 0x48) + (ulonglong)(uVar4 >> 4 & 0x3fffff8)) +
                 (ulonglong)((uVar4 & 0x7f) << 4));
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(param_1[0x21f] + -0xc + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar11 < (int)param_1[0x21e]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149673532 FUN_149673532 body=409 status=ok
// SIG undefined FUN_149673532(void)

void FUN_149673532(longlong *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar8 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[9];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar3 = param_1[1];
      do {
        lVar2 = lVar3 + (longlong)iVar7 * 0x10;
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x10) == param_2) {
          if ((int *)(lVar2 + 4) != (int *)0x0 && lVar2 != 0) {
            uVar4 = param_4[1];
            uVar5 = param_4[2];
            uVar6 = param_4[3];
            puVar1 = (undefined4 *)
                     (*(longlong *)(*param_1 + 0x28) + (longlong)*(int *)(lVar2 + 4) * 0x10);
            *puVar1 = *param_4;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 8);
      } while (iVar7 != -1);
    }
  }
  local_50 = *(undefined4 *)(*param_1 + 0x10);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a(param_1 + 1,local_34,&local_48,0);
  lVar3 = *param_1;
  iVar7 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar7 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar7 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 8),iVar7);
  }
  *(uint *)(*(longlong *)(lVar3 + 8) + (longlong)iVar7 * 4) = local_4c;
  lVar3 = *param_1;
  iVar7 = *(int *)(lVar3 + 0x20);
  *(uint *)(lVar3 + 0x20) = iVar7 + 1U;
  if (*(uint *)(lVar3 + 0x24) < iVar7 + 1U) {
    FUN_1449e2712((longlong *)(lVar3 + 0x18),iVar7);
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar7 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  lVar3 = *param_1;
  iVar7 = *(int *)(lVar3 + 0x30);
  *(uint *)(lVar3 + 0x30) = iVar7 + 1U;
  if (*(uint *)(lVar3 + 0x34) < iVar7 + 1U) {
    FUN_1449e2712((longlong *)(lVar3 + 0x28),iVar7);
  }
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar7 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1496736cc FUN_1496736cc body=376 status=ok
// SIG undefined FUN_1496736cc(void)

void FUN_1496736cc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + 0xca8);
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  local_98 = param_3;
  if (*(int *)(param_1 + 0xcb4) < 0) {
    FUN_14481578e(plVar2,0);
  }
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (local_60 != plVar1)) {
    do {
      uVar3 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0xc);
      iVar4 = *(int *)(param_1 + 0xcb0);
      *(uint *)(param_1 + 0xcb0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xcb4) < iVar4 + 1U) {
        FUN_1446f48e2(plVar2,iVar4);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar4 * 4) = uVar3;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar5));
  }
  FUN_149673846(param_1,plVar2,local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149673846 FUN_149673846 body=813 status=ok
// SIG undefined FUN_149673846(void)

void FUN_149673846(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b8 [6];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  undefined8 *puVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x420))();
  lVar3 = param_1[0x186];
  local_78[0] = 0;
  local_78[1] = 0;
  plVar8 = param_2;
  if (*(char *)(param_1[0x177] + 0xb2) != '\0') {
    iVar9 = (int)param_2[1];
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_14481578e(local_78);
    }
    plVar8 = local_78;
    FUN_149673b76(param_1,param_2,plVar8);
  }
  iVar9 = 0;
  FUN_14967309a(param_1,plVar8,0);
  if (*(int *)((longlong)param_1 + 0x10cc) < (int)param_1[0x214]) {
    plVar1 = param_1 + 0x213;
    FUN_1496725b4(param_1);
    local_c0 = param_1 + 0x215;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    uStack_60 = local_c0;
    if ((int)param_1[0x218] != 0) {
      FUN_1449c0562(&local_68);
      iVar9 = (int)param_1[0x218];
    }
    puVar11 = &local_98;
    local_88 = local_58;
    uVar4 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = uStack_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_88._4_4_;
    local_a0 = plVar1;
    if ((local_88._4_4_ != iVar9) || (local_88 = uVar4, uStack_60 != local_c0)) {
      do {
        local_88 = uVar4;
        uVar2 = *(uint *)(*local_a0 + (longlong)iVar6 * 0xc);
        uVar13 = (ulonglong)(uVar2 >> 7 & 0x7fffff);
        uVar12 = (ulonglong)((uVar2 & 0x7f) << 4);
        puVar11 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar13 * 8) + uVar12);
        uVar4 = *puVar11;
        plVar5 = (longlong *)puVar11[1];
        local_b8[0] = *param_3;
        local_b8[1] = param_3[1];
        local_b8[2] = param_3[2];
        local_b8[3] = param_3[3];
        lVar7 = param_1[0x176];
        if (*(char *)(lVar7 + 0xd4) == '\0') {
          local_68._0_4_ = (undefined4)uVar4;
          local_b8[0] = (undefined4)local_68;
        }
        if (*(char *)(lVar7 + 0xd5) == '\0') {
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_b8[1] = local_68._4_4_;
        }
        if (*(char *)(lVar7 + 0xd6) == '\0') {
          uStack_60._0_4_ = SUB84(plVar5,0);
          local_b8[2] = (undefined4)uStack_60;
        }
        if (*(char *)(lVar7 + 0xd7) == '\0') {
          uStack_60._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
          local_b8[3] = uStack_60._4_4_;
        }
        local_68 = uVar4;
        uStack_60 = plVar5;
        FUN_149673532(param_1[0x221],uVar2,&local_68,local_b8);
        lVar7 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar13 * 8) + uVar12 + lVar7 * 4) =
               local_b8[lVar7];
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        bVar10 = local_90 != local_c0 || local_88._4_4_ != iVar9;
        puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)local_c0 >> 8),bVar10);
        iVar6 = local_88._4_4_;
        uVar4 = local_88;
      } while (local_a0 != plVar1 || bVar10);
    }
    FUN_143b6e60e(param_1[0x17f],plVar8,CONCAT71((int7)((ulonglong)puVar11 >> 8),2));
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar8 + 0x348))(plVar8);
    FUN_14967273e(param_1);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149673b76 FUN_149673b76 body=408 status=ok
// SIG undefined FUN_149673b76(void)

void FUN_149673b76(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 *local_108;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  code *local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1[0x177] + 0xb2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x378))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4,local_98);
  FUN_146ba22f0(param_1 + 0x38,local_d0,local_98);
  local_d8 = (**(code **)(*param_1 + 0x420))(param_1);
  uVar1 = *(uint *)(param_2 + 1);
  FUN_1448c4dd6(param_1 + 0x199,(ulonglong)uVar1,0);
  local_b0 = &local_f8;
  local_108 = &local_a8;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = FUN_1445706e4;
  local_110 = 0;
  local_f8 = param_1;
  local_f0 = &local_d8;
  local_e8 = param_2;
  local_e0 = local_d0;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (*(char *)(param_1[0x199] + uVar5) == '\x01') {
        lVar3 = *param_2;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + uVar5 * 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149673d2e FUN_149673d2e body=422 status=ok
// SIG undefined FUN_149673d2e(void)

undefined8 FUN_149673d2e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  code *local_108;
  longlong **local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  longlong **local_d0;
  longlong *local_c0;
  undefined8 local_b8;
  longlong **local_b0;
  code **local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 **local_90;
  code *local_88;
  longlong **pplStack_80;
  undefined8 local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = 0xffffffff;
  if (*(byte *)(param_1[0x176] + 0xa9) < 4) {
    if (*(char *)(param_1[0x20] + 200) == '\x01') {
      local_f8 = param_1 + 0x1b4;
      pplStack_80 = &local_f8;
      local_88 = FUN_14963f300;
      local_d0 = &local_98;
      puVar4 = &local_d8;
      pcVar2 = FUN_14963f376;
      local_98 = local_f8;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x420))(param_1);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x378))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_88);
      local_e8 = (undefined8 *)local_78;
      FUN_146ba22f0(param_1 + 0x38,&local_d8,&local_f8);
      local_c0 = param_1 + 0x1b4;
      local_a8 = &local_108;
      local_108 = FUN_14457097a;
      local_90 = &local_a8;
      local_98 = (longlong *)&LAB_14967e180;
      local_b0 = &local_c0;
      puVar4 = &local_b8;
      pcVar2 = FUN_14967e21c;
      local_100 = &local_f8;
      local_f8 = param_1;
      uStack_f0 = uVar1;
      local_e8 = &local_d8;
      local_a0 = local_c0;
    }
    *puVar4 = pcVar2;
    local_118 = 0x7fefffffffffffff;
    uVar1 = FUN_146c87396(param_1 + 0x1b4,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149673edc FUN_149673edc body=177 status=ok
// SIG undefined FUN_149673edc(void)

undefined8 FUN_149673edc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = param_1 + -0xb0;
  *(undefined1 *)(param_1 + 0xce8) = *(undefined1 *)(*(longlong *)(param_1 + 0xb00) + 0xa8);
  cVar3 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x518))(lVar1);
  if (cVar3 == '\0') {
    FUN_14967254c(lVar1,param_2);
    plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0xb0) + 0x458))(lVar1);
    plVar5 = (longlong *)FUN_14479d2ce(*plVar4 + 8);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x50) + 0xcc);
    (**(code **)(*plVar5 + 0x2d0))(plVar5,fVar2 * fVar2);
    plVar4 = (longlong *)FUN_14479d2ce(*plVar4 + 8);
    (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0xbc));
  }
  return 1;
}



// FUNCTION 149673f8e FUN_149673f8e body=1196 status=ok
// SIG undefined FUN_149673f8e(void)

void FUN_149673f8e(longlong *param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_248 [32];
  double local_228;
  undefined8 *local_220;
  undefined4 *local_218;
  wchar_t *local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  int local_1f0;
  wchar_t *local_1e8;
  double local_1e0;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_190;
  double dStack_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1[0x17d] != 0) {
    cVar7 = (**(code **)(*param_1 + 0x520))(param_1);
    puVar14 = (undefined4 *)&DAT_149e1dd14;
    if (cVar7 != '\0') {
      puVar14 = (undefined4 *)&DAT_149e1dd34;
    }
    lVar11 = param_1[0x17d];
    uVar4 = puVar14[1];
    uVar5 = puVar14[2];
    uVar6 = puVar14[3];
    *(undefined4 *)(lVar11 + 0x90) = *puVar14;
    *(undefined4 *)(lVar11 + 0x94) = uVar4;
    *(undefined4 *)(lVar11 + 0x98) = uVar5;
    *(undefined4 *)(lVar11 + 0x9c) = uVar6;
    (**(code **)(*(longlong *)param_1[0x17d] + 0x2d0))((longlong *)param_1[0x17d],param_2,param_3);
  }
  if (*(char *)(param_2 + 0xa0) == '\0') {
    dVar1 = (double)*(float *)(param_2 + 0xb0);
  }
  else {
    dVar1 = 1.0;
  }
  uVar9 = FUN_14375bb6e();
  (**(code **)(*param_3 + 0x18))(param_3,&local_c8);
  uVar10 = (**(code **)(*param_3 + 0x10))(param_3);
  local_158 = local_b8;
  local_168 = (code *)CONCAT44(uStack_c4,local_c8);
  uStack_160 = (wchar_t **)CONCAT44(uStack_bc,uStack_c0);
  FUN_146ba22f0(param_1 + 0x38,&local_190);
  lVar11 = (**(code **)(*param_1 + 0x420))(param_1);
  if (*(char *)(param_1[0x177] + 0xb9) == '\x01') {
    local_1a0 = (double)param_1[0xa7] - local_180;
    dVar15 = (double)param_1[0xa6] - dStack_188;
    dVar2 = (double)param_1[0xa5] - local_190;
    dVar3 = SQRT(local_1a0 * local_1a0 + dVar2 * dVar2 + dVar15 * dVar15);
    local_1a8 = 0.0;
    dVar16 = 1.0 / dVar3;
    local_1b0 = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar2 * dVar16));
    if (0.0 < dVar3) {
      local_1a0 = local_1a0 * dVar16;
      local_1a8 = dVar15 * dVar16;
    }
    else {
      local_1a0 = 0.0;
    }
    local_1c8 = local_190;
    dStack_1c0 = dStack_188;
    local_1b8 = local_180;
    dVar15 = local_1a0 * local_1a0 + local_1b0 * local_1b0 + local_1a8 * local_1a8;
    if (9.99999993922529e-09 < dVar15) {
      dVar15 = 1.0 / SQRT(dVar15);
      local_1b0 = local_1b0 * dVar15;
      local_1a8 = local_1a8 * dVar15;
      local_1a0 = local_1a0 * dVar15;
    }
    local_1f8 = (wchar_t *)(param_1 + 0x1b4);
    uStack_160 = &local_1e8;
    local_168 = FUN_14963f300;
    uStack_170 = &local_1f8;
    local_178 = FUN_14963f376;
    local_228 = 1.79769313486232e+308;
    local_1e8 = local_1f8;
    uVar8 = FUN_146c87396(local_1f8,&local_1c8);
    if (((-1 < (int)uVar8) &&
        ((int)uVar8 < *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar11 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      uVar12 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_1484e6d92(&local_168,uVar12,uVar8,&local_1c8);
      local_1cc = (float)local_d8;
      local_1d0 = (float)local_e0;
      local_1d4 = (float)local_e8;
      local_178 = (code *)0x0;
      uStack_170 = (wchar_t **)0x3f80000000000000;
      FUN_14967443c(param_1[0x186],uVar8,&local_1d4,&local_178);
      FUN_147cf049a(uVar10,param_1 + 0x9e,&local_1e8);
      local_220 = (undefined8 *)(double)uStack_170._4_4_;
      local_228 = (double)(float)uStack_170;
      FUN_140002266(&local_1f8,L"%.3f %.3f %.3f %.3f",(double)(float)local_178,
                    (double)local_178._4_4_);
      local_208 = local_1f8;
      if (local_1f0 == 0) {
        local_208 = L"";
      }
      local_200 = 0;
      if (local_208 != (wchar_t *)0x0) {
        sVar13 = wcslen(local_208);
        local_200 = (int)sVar13;
      }
      local_218 = &DAT_149e1e308;
      local_220 = &DAT_149e1e2f8;
      local_228 = (double)uVar9;
      FUN_147d8e230(param_2,(double)local_1e8 / dVar1,SUB84(local_1e0 / dVar1,0));
      if (local_1f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14967443c FUN_14967443c body=237 status=ok
// SIG undefined FUN_14967443c(void)

void FUN_14967443c(longlong param_1,int param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  uVar8 = param_2 * 3 + 1;
  uVar8 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  uVar6 = param_2 * 3 + 2;
  uVar6 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)(param_1 + 0x48);
    *(float *)(param_4 + lVar7 * 4) =
         *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar6 >> 7 & 0x7fffff) * 8) +
                    (ulonglong)((uVar6 & 0x7f) << 4) + lVar7 * 4) * fVar3 +
         *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 7 & 0x7fffff) * 8) +
                    (ulonglong)((uVar4 & 0x7f) << 4) + lVar7 * 4) * fVar1 +
         *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar8 >> 7 & 0x7fffff) * 8) +
                    (ulonglong)((uVar8 & 0x7f) << 4) + lVar7 * 4) * fVar2;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return;
}



// FUNCTION 14967452a FUN_14967452a body=376 status=ok
// SIG undefined FUN_14967452a(void)

void FUN_14967452a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0xbf8) + 0xa88))();
  plVar1 = (longlong *)(param_1 + 0xca8);
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  if (*(int *)(param_1 + 0xcb4) < 0) {
    FUN_14481578e(plVar1,0);
  }
  iVar2 = *(int *)(lVar3 + 0x170);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0xcb4) < iVar2) {
    FUN_14481578e(plVar1);
  }
  uVar5 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  uVar9 = 0;
  if ((uVar5 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
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
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  do {
    if (uVar9 == uVar5) {
      FUN_149673846(param_1,plVar1,param_2);
      return;
    }
    iVar2 = *(int *)(param_1 + 0xcb0);
    *(uint *)(param_1 + 0xcb0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xcb4) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(uint *)(*plVar1 + (longlong)iVar2 * 4) = uVar9;
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
                                           (*(longlong *)(lVar3 + 0x148) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1496746f0 FUN_1496746f0 body=725 status=ok
// SIG undefined FUN_1496746f0(void)

void FUN_1496746f0(longlong *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  bool bVar20;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88 [4];
  uint *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1496725b4();
  local_78 = (uint *)0x0;
  uStack_70 = 0;
  local_a0 = param_1;
  lVar7 = (**(code **)(*(longlong *)param_1[0x17f] + 0xa88))();
  uVar14 = *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24);
  uVar12 = 0;
  if ((uVar14 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x28) - 1U))) {
    uVar13 = 1;
    uVar10 = 1;
    if (1 < (int)uVar14) {
      uVar13 = uVar14;
    }
    do {
      uVar12 = uVar13;
      if (uVar13 == uVar10) break;
      uVar11 = uVar10 >> 9;
      uVar16 = uVar10 & 0x1ff;
      uVar12 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x28))[uVar11] +
                                         (ulonglong)uVar16 * 2) - 1U));
  }
  if (uVar12 != uVar14) {
    lVar3 = local_a0[0x186];
    do {
      bVar20 = (longlong)uStack_70 < 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (bVar20) {
        FUN_14481578e(&local_78,0);
      }
      FUN_146c349b4(lVar3);
      lVar8 = (longlong)(int)uStack_70;
      if (1 < lVar8) {
        puVar1 = local_78 + lVar8;
        local_88[0] = 0.0;
        lVar17 = 0;
        local_88[1] = 0.0;
        local_88[2] = 0.0;
        local_88[3] = 0.0;
        do {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar3 + 0x48) +
                   (ulonglong)(*(uint *)((longlong)local_78 + lVar17) >> 4 & 0x3fffff8));
          uVar15 = (ulonglong)((*(uint *)((longlong)local_78 + lVar17) & 0x7f) << 4);
          local_88[0] = local_88[0] + *(float *)(lVar4 + uVar15);
          local_88[1] = local_88[1] + *(float *)(lVar4 + 4 + uVar15);
          local_88[2] = local_88[2] + *(float *)(lVar4 + 8 + uVar15);
          local_88[3] = local_88[3] + *(float *)(lVar4 + 0xc + uVar15);
          lVar17 = lVar17 + 4;
        } while (lVar8 * 4 - lVar17 != 0);
        fVar5 = 1.0 / (float)(int)uStack_70;
        local_88[0] = local_88[0] * fVar5;
        local_88[1] = local_88[1] * fVar5;
        local_88[2] = local_88[2] * fVar5;
        local_88[3] = local_88[3] * fVar5;
        puVar19 = local_78;
        do {
          uVar13 = *puVar19;
          uVar18 = (ulonglong)(uVar13 >> 7 & 0x7fffff);
          uVar15 = (ulonglong)((uVar13 & 0x7f) << 4);
          puVar2 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar18 * 8) + uVar15);
          local_98 = *puVar2;
          uStack_94 = puVar2[1];
          uStack_90 = puVar2[2];
          uStack_8c = puVar2[3];
          FUN_149673532(local_a0[0x221],uVar13,&local_98,local_88);
          lVar8 = 0;
          do {
            *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar18 * 8) + uVar15 + lVar8 * 4)
                 = local_88[lVar8];
            lVar8 = lVar8 + 1;
          } while (lVar8 != 4);
          puVar19 = puVar19 + 1;
        } while (puVar19 != puVar1);
      }
      uVar13 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar14) {
        uVar13 = uVar14;
      }
      do {
        uVar10 = uVar13;
        if (uVar13 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar10 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x28) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar10;
    } while (uVar12 != uVar14);
  }
  plVar6 = local_a0;
  FUN_1484b2d8e(local_a0[0x17f],2);
  plVar9 = (longlong *)(**(code **)(*plVar6 + 0x2c8))(plVar6);
  (**(code **)(*plVar9 + 0x348))(plVar9);
  FUN_14967273e(plVar6);
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496749c6 FUN_1496749c6 body=752 status=ok
// SIG undefined FUN_1496749c6(void)

void FUN_1496749c6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_c8 [46];
  char local_9a;
  char local_99;
  undefined4 local_98 [7];
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = param_1[0x17b];
  local_99 = *(char *)(lVar5 + 0xdb);
  cVar3 = *(char *)(lVar5 + 0xda);
  cVar4 = *(char *)(lVar5 + 0xd9);
  local_9a = *(char *)(lVar5 + 0xd8);
  if ((cVar4 == '\0' && local_9a == '\0') && (cVar3 == '\0' && local_99 == '\0')) {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_78 = L"NoChannelsSelectedMessage";
    uStack_70._0_4_ = 0x19;
    FUN_1446e940c(local_98,&local_78);
    local_78 = L"UMeshVertexPaintTool";
    uStack_70 = CONCAT44(uStack_70._4_4_,0x14);
    FUN_1446e940c(local_7c,&local_78);
    FUN_140208bae(&local_78,local_7c,local_98,L"At least one Target Channel must be selected");
    (**(code **)(*plVar8 + 0x340))(plVar8,&local_78,4);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  uVar2 = *(undefined4 *)(lVar5 + 0xb8);
  FUN_1496725b4(param_1);
  lVar5 = param_1[0x186];
  uVar17 = *(int *)(lVar5 + 8) * 0x200 + *(int *)(lVar5 + 0xc);
  uVar14 = 0;
  if ((uVar17 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x10) - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar17) {
      uVar12 = uVar17;
    }
    do {
      uVar14 = uVar12;
      if (uVar12 == uVar13) break;
      uVar10 = uVar13 >> 9;
      uVar15 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x10))[uVar10] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  do {
    if (uVar14 == uVar17) {
      FUN_1484b2d8e(param_1[0x17f],2);
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar8 + 0x348))(plVar8);
      if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_14967273e(param_1);
      return;
    }
    uVar11 = (ulonglong)(uVar14 >> 7 & 0x7fffff);
    uVar16 = (ulonglong)((uVar14 & 0x7f) << 4);
    puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + uVar11 * 8) + uVar16);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    local_98[3] = uVar2;
    if (local_99 == '\0') {
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_98[3] = uStack_70._4_4_;
    }
    local_98[2] = uVar2;
    if (cVar3 == '\0') {
      uStack_70._0_4_ = (undefined4)uVar7;
      local_98[2] = (undefined4)uStack_70;
    }
    local_78._0_4_ = (undefined4)uVar6;
    local_98[1] = uVar2;
    if (cVar4 == '\0') {
      local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_98[1] = local_78._4_4_;
    }
    local_98[0] = (undefined4)local_78;
    if (local_9a != '\0') {
      local_98[0] = uVar2;
    }
    local_78 = (wchar_t *)uVar6;
    uStack_70 = uVar7;
    FUN_149673532(param_1[0x221],uVar14,&local_78,local_98);
    lVar9 = 0;
    do {
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + uVar11 * 8) + uVar16 + lVar9 * 4)
           = local_98[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    uVar12 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar17) {
      uVar12 = uVar17;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar12;
      if (uVar12 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x10) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 149674cd0 FUN_149674cd0 body=855 status=ok
// SIG undefined FUN_149674cd0(void)

void FUN_149674cd0(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_d8 [46];
  char local_aa;
  char local_a9;
  float local_a8 [7];
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = param_1[0x17b];
  local_a9 = *(char *)(lVar4 + 0xdb);
  cVar2 = *(char *)(lVar4 + 0xda);
  local_aa = *(char *)(lVar4 + 0xd8);
  cVar3 = *(char *)(lVar4 + 0xd9);
  if ((cVar3 == '\0' && local_aa == '\0') && (cVar2 == '\0' && local_a9 == '\0')) {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_88 = L"NoChannelsSelectedMessage";
    uStack_80._0_4_ = 3.50325e-44;
    FUN_1446e940c(local_a8,&local_88);
    local_88 = L"UMeshVertexPaintTool";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x14);
    FUN_1446e940c(local_8c,&local_88);
    FUN_140208bae(&local_88,local_8c,local_a8,L"At least one Target Channel must be selected");
    (**(code **)(*plVar9 + 0x340))(plVar9,&local_88,4);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
  FUN_1496725b4(param_1);
  lVar4 = param_1[0x186];
  uVar15 = *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc);
  uVar7 = 0;
  if ((uVar15 != 0) &&
     (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x10) - 1U))) {
    uVar13 = 1;
    uVar8 = 1;
    if (1 < (int)uVar15) {
      uVar13 = uVar15;
    }
    do {
      uVar11 = uVar8;
      uVar7 = uVar13;
      if (uVar13 == uVar11) break;
      uVar8 = uVar11 + 1;
      uVar7 = uVar11;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x10))[uVar11 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar13 = uVar7;
    if (uVar13 == uVar15) {
      FUN_1484b2d8e(param_1[0x17f],2);
      plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar9 + 0x348))(plVar9);
      if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_14967273e(param_1);
      return;
    }
    uVar12 = (ulonglong)(uVar13 >> 7 & 0x7fffff);
    uVar14 = (ulonglong)((uVar13 & 0x7f) << 4);
    puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar12 * 8) + uVar14);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uStack_80._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    if (local_a9 != '\0') {
      uStack_80._4_4_ = 1.0 - uStack_80._4_4_;
      fVar16 = 1.0;
      if (uStack_80._4_4_ <= 1.0) {
        fVar16 = uStack_80._4_4_;
      }
      uStack_80._4_4_ = (float)(~-(uint)(uStack_80._4_4_ < 0.0) & (uint)fVar16);
    }
    uStack_80._0_4_ = (float)uVar6;
    if (cVar2 != '\0') {
      uStack_80._0_4_ = 1.0 - (float)uStack_80;
      fVar16 = 1.0;
      if ((float)uStack_80 <= 1.0) {
        fVar16 = (float)uStack_80;
      }
      uStack_80._0_4_ = (float)(~-(uint)((float)uStack_80 < 0.0) & (uint)fVar16);
    }
    local_88._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    if (cVar3 != '\0') {
      local_88._4_4_ = 1.0 - local_88._4_4_;
      fVar16 = 1.0;
      if (local_88._4_4_ <= 1.0) {
        fVar16 = local_88._4_4_;
      }
      local_88._4_4_ = (float)(~-(uint)(local_88._4_4_ < 0.0) & (uint)fVar16);
    }
    local_88._0_4_ = (float)uVar5;
    if (local_aa != '\0') {
      local_88._0_4_ = 1.0 - (float)local_88;
      fVar16 = 1.0;
      if ((float)local_88 <= 1.0) {
        fVar16 = (float)local_88;
      }
      local_88._0_4_ = (float)(~-(uint)((float)local_88 < 0.0) & (uint)fVar16);
    }
    local_a8[0] = (float)local_88;
    local_a8[1] = local_88._4_4_;
    local_a8[2] = (float)uStack_80;
    local_a8[3] = uStack_80._4_4_;
    local_88 = (wchar_t *)uVar5;
    uStack_80 = uVar6;
    FUN_149673532(param_1[0x221],uVar13,&local_88,local_a8);
    lVar10 = 0;
    do {
      *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar12 * 8) + uVar14 + lVar10 * 4) =
           local_a8[lVar10];
      lVar10 = lVar10 + 1;
    } while (lVar10 != 4);
    uVar8 = uVar13 + 1;
    if ((int)(uVar13 + 1) < (int)uVar15) {
      uVar8 = uVar15;
    }
    do {
      uVar7 = uVar8;
      if (uVar8 - 1 == uVar13) break;
      uVar13 = uVar13 + 1;
      uVar7 = uVar13;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar4 + 0x10) +
                                           (ulonglong)(uVar13 >> 9) * 8) +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14967504a FUN_14967504a body=822 status=ok
// SIG undefined FUN_14967504a(void)

void FUN_14967504a(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_b8 [42];
  byte local_8e;
  byte local_8d;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_6c [4];
  uint local_68 [4];
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = param_1[0x17b];
  uVar10 = 3;
  if ((byte)*(uint *)(lVar2 + 0xb4) < 3) {
    uVar10 = (ulonglong)*(uint *)(lVar2 + 0xb4);
  }
  local_68[0] = (uint)*(byte *)(lVar2 + 0xd8);
  local_68[1] = (uint)*(byte *)(lVar2 + 0xd9);
  local_68[2] = (uint)*(byte *)(lVar2 + 0xda);
  local_68[3] = (uint)*(byte *)(lVar2 + 0xdb);
  local_68[uVar10 & 0xff] = 0;
  if ((((local_68[0] == 0) && (local_68[1] == 0)) && (local_68[2] == 0)) && (local_68[3] == 0)) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_58 = L"NoChannelsSelectedMessage";
    uStack_50._0_4_ = 0x19;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UMeshVertexPaintTool";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x14);
    FUN_1446e940c(local_6c,&local_58);
    FUN_140208bae(&local_58,local_6c,&local_88,L"At least one Target Channel must be selected");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_58,4);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  puVar7 = (undefined8 *)FUN_1496725b4(param_1);
  lVar2 = param_1[0x186];
  uVar12 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
  uVar13 = 0;
  if ((uVar12 != 0) &&
     (puVar7 = *(undefined8 **)(lVar2 + 0x10), uVar13 = 0, 0xfffd < (ushort)(*(short *)*puVar7 - 1U)
     )) {
    uVar14 = 1;
    uVar5 = 1;
    if (1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar5) break;
      uVar9 = uVar5 >> 9;
      uVar15 = uVar5 & 0x1ff;
      uVar13 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)(puVar7[uVar9] + (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar13 != uVar12) {
    auVar17._0_4_ = -(uint)(local_68[0] == 0);
    auVar17._4_4_ = -(uint)(local_68[1] == 0);
    auVar17._8_4_ = -(uint)(local_68[2] == 0);
    auVar17._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == local_68[3]);
    local_8c = movmskps((int)puVar7,auVar17);
    local_8c = local_8c ^ 0xf;
    local_8d = ((byte)local_8c & 2) >> 1;
    uVar14 = local_8c & 4;
    local_8e = (byte)local_8c >> 3;
    do {
      uVar11 = (ulonglong)(uVar13 >> 7 & 0x7fffff);
      lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar11 * 8);
      uVar16 = (ulonglong)((uVar13 & 0x7f) << 4);
      puVar7 = (undefined8 *)(lVar8 + uVar16);
      local_58 = (wchar_t *)*puVar7;
      uStack_50 = puVar7[1];
      puVar7 = (undefined8 *)(lVar8 + uVar16);
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      local_88 = uVar3;
      uStack_80 = uVar4;
      uVar1 = *(undefined4 *)((longlong)&local_58 + (uVar10 & 0xff) * 4);
      if ((local_8c & 1) != 0) {
        local_88 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),uVar1);
      }
      if (local_8d != 0) {
        local_88 = CONCAT44(uVar1,(undefined4)local_88);
      }
      if (uVar14 != 0) {
        uStack_80 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),uVar1);
      }
      if (local_8e != 0) {
        uStack_80 = CONCAT44(uVar1,(undefined4)uStack_80);
      }
      FUN_149673532(param_1[0x221],uVar13,&local_58,&local_88);
      lVar8 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar11 * 8) + uVar16 + lVar8 * 4) =
             *(undefined4 *)((longlong)&local_88 + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      uVar5 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar12) {
        uVar5 = uVar12;
      }
      do {
        uVar9 = uVar5;
        if (uVar5 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar9 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x10) +
                                             (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar13 = uVar9;
    } while (uVar13 != uVar12);
  }
  FUN_1484b2d8e(param_1[0x17f],2);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar6 + 0x348))(plVar6);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14967273e(param_1);
  return;
}



// FUNCTION 149675394 FUN_149675394 body=664 status=ok
// SIG undefined FUN_149675394(void)

void FUN_149675394(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = *(uint *)(param_1[0x17b] + 0xdc);
  bVar8 = (byte)*(undefined4 *)(param_1[0x17b] + 0xb4);
  if (2 < bVar8) {
    bVar8 = 3;
  }
  uVar14 = 3;
  if ((byte)uVar11 < 3) {
    uVar14 = uVar11;
  }
  if (bVar8 == (byte)uVar14) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_58 = L"SameSourceDestMessage";
    uStack_50._0_4_ = 0x15;
    FUN_1446e940c(&local_78,&local_58);
    local_58 = L"UMeshVertexPaintTool";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x14);
    FUN_1446e940c(local_5c,&local_58);
    FUN_140208bae(&local_58,local_5c,&local_78,L"Source and Destination must be different Channels")
    ;
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_58,4);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  FUN_1496725b4(param_1);
  lVar3 = param_1[0x186];
  uVar10 = *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc);
  uVar11 = 0;
  if ((uVar10 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x10) - 1U))) {
    uVar12 = 1;
    uVar6 = 1;
    if (1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar13 = uVar6 & 0x1ff;
      uVar11 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x10))[uVar7] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar11 != uVar10) {
    do {
      uVar9 = (ulonglong)(uVar11 >> 7 & 0x7fffff);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar9 * 8);
      uVar15 = (ulonglong)((uVar11 & 0x7f) << 4);
      puVar1 = (undefined8 *)(lVar5 + uVar15);
      local_58 = (wchar_t *)*puVar1;
      uStack_50 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + uVar15);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      uVar2 = *(undefined4 *)((longlong)&local_78 + (ulonglong)bVar8 * 4);
      *(undefined4 *)((longlong)&local_78 + (ulonglong)bVar8 * 4) =
           *(undefined4 *)((longlong)&local_78 + (ulonglong)(uVar14 & 0xff) * 4);
      *(undefined4 *)((longlong)&local_78 + (ulonglong)(uVar14 & 0xff) * 4) = uVar2;
      FUN_149673532(param_1[0x221],uVar11,&local_58,&local_78);
      lVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar9 * 8) + uVar15 + lVar5 * 4)
             = *(undefined4 *)((longlong)&local_78 + lVar5 * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar10) {
        uVar12 = uVar10;
      }
      do {
        uVar6 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x10) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar6;
    } while (uVar11 != uVar10);
  }
  FUN_1484b2d8e(param_1[0x17f],2);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar4 + 0x348))(plVar4);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14967273e(param_1);
  return;
}



// FUNCTION 149675640 FUN_149675640 body=1116 status=ok
// SIG undefined FUN_149675640(void)

void FUN_149675640(longlong *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  wchar_t **ppwVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  undefined1 auStack_e8 [45];
  char local_bb;
  char local_ba;
  char local_b9;
  uint local_b8 [5];
  undefined1 local_a4 [4];
  wchar_t *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = param_1[0x17b];
  cVar3 = *(char *)(lVar7 + 0xdb);
  cVar4 = *(char *)(lVar7 + 0xda);
  cVar5 = *(char *)(lVar7 + 0xd8);
  cVar6 = *(char *)(lVar7 + 0xd9);
  if ((cVar6 == '\0' && cVar5 == '\0') && (cVar4 == '\0' && cVar3 == '\0')) {
    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_a0 = L"NoChannelsSelectedMessage";
    local_98._0_4_ = 0x19;
    FUN_1446e940c(&local_88,&local_a0);
    local_a0 = L"UMeshVertexPaintTool";
    local_98 = CONCAT44(local_98._4_4_,0x14);
    FUN_1446e940c(local_b8,&local_a0);
    FUN_140208bae(&local_a0,local_b8,&local_88,L"At least one Target Channel must be selected");
    (**(code **)(*plVar14 + 0x340))(plVar14,&local_a0,4);
    if (local_a0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a0 + 0x10))();
    }
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    uVar8 = *(undefined8 *)(lVar7 + 0xbc);
    uStack_80 = uStack_80 & 0xffffffff00000000;
    local_88 = (wchar_t *)0x3e800000000;
    uVar13 = FUN_14850658d(param_1[0x14]);
    cVar11 = FUN_14855bd44(uVar13,uVar8,&local_a0,0x3f800000);
    if (cVar11 == '\0') {
      plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_88 = L"NoWeightMapMessage";
      uStack_80._0_4_ = 0x12;
      FUN_1446e940c(local_b8,&local_88);
      local_88 = L"UMeshVertexPaintTool";
      uStack_80 = CONCAT44(uStack_80._4_4_,0x14);
      FUN_1446e940c(local_a4,&local_88);
      FUN_140208bae(&local_88,local_a4,local_b8,
                    L"Selected Weight Map could not be found on the Target Mesh");
      (**(code **)(*plVar14 + 0x340))(plVar14,&local_88,4);
      if (local_88 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
    }
    else {
      local_ba = cVar5;
      FUN_1496725b4(param_1);
      lVar7 = param_1[0x186];
      uVar21 = *(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc);
      local_b9 = cVar3;
      uVar22 = 0;
      cVar3 = local_bb;
      if ((uVar21 != 0) &&
         (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x10) - 1U))) {
        uVar18 = 1;
        uVar12 = 1;
        if (1 < (int)uVar21) {
          uVar18 = uVar21;
        }
        do {
          uVar16 = uVar12;
          uVar22 = uVar18;
          if (uVar18 == uVar16) break;
          uVar12 = uVar16 + 1;
          uVar22 = uVar16;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x10))[uVar16 >> 9] +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      }
joined_r0x0001496758c5:
      uVar18 = uVar22;
      local_bb = cVar4;
      if (uVar18 != uVar21) {
        uVar22 = *(uint *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(uVar18 >> 9) * 8)
                          + (ulonglong)(uVar18 & 0x1ff) * 4);
        ppwVar17 = (wchar_t **)((ulonglong)uVar22 * 4 + local_98);
        if ((int)uStack_90 <= (int)uVar22) {
          ppwVar17 = &local_a0;
        }
        if ((int)uVar22 < 0) {
          ppwVar17 = &local_a0;
        }
        uVar20 = (ulonglong)(uVar18 >> 7 & 0x7fffff);
        uVar19 = (ulonglong)((uVar18 & 0x7f) << 4);
        fVar2 = *(float *)ppwVar17;
        puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar20 * 8) + uVar19);
        pwVar9 = (wchar_t *)*puVar1;
        uVar10 = puVar1[1];
        fVar23 = 1.0;
        if (fVar2 <= 1.0) {
          fVar23 = fVar2;
        }
        uVar22 = ~-(uint)(fVar2 < 0.0) & (uint)fVar23;
        local_b8[3] = uVar22;
        if (local_b9 == '\0') {
          uStack_80._4_4_ = (uint)(uVar10 >> 0x20);
          local_b8[3] = uStack_80._4_4_;
        }
        local_b8[2] = uVar22;
        if (local_bb == '\0') {
          uStack_80._0_4_ = (uint)uVar10;
          local_b8[2] = (uint)uStack_80;
        }
        local_88._0_4_ = (uint)pwVar9;
        local_b8[1] = uVar22;
        if (cVar6 == '\0') {
          local_88._4_4_ = (uint)((ulonglong)pwVar9 >> 0x20);
          local_b8[1] = local_88._4_4_;
        }
        local_b8[0] = (uint)local_88;
        if (local_ba != '\0') {
          local_b8[0] = uVar22;
        }
        local_88 = pwVar9;
        uStack_80 = uVar10;
        FUN_149673532(param_1[0x221],uVar18,&local_88,local_b8);
        lVar15 = 0;
        do {
          *(uint *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar20 * 8) + uVar19 + lVar15 * 4) =
               local_b8[lVar15];
          lVar15 = lVar15 + 1;
        } while (lVar15 != 4);
        uVar12 = uVar18 + 1;
        if ((int)(uVar18 + 1) < (int)uVar21) {
          uVar12 = uVar21;
        }
        do {
          cVar4 = local_bb;
          uVar22 = uVar12;
          cVar3 = local_bb;
          if (uVar12 - 1 == uVar18) break;
          uVar18 = uVar18 + 1;
          uVar22 = uVar18;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar7 + 0x10) +
                                               (ulonglong)(uVar18 >> 9) * 8) +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        goto joined_r0x0001496758c5;
      }
      local_bb = cVar3;
      FUN_1484b2d8e(param_1[0x17f],2);
      plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar14 + 0x348))(plVar14);
      FUN_14967273e(param_1);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149675a9e FUN_149675a9e body=1111 status=ok
// SIG undefined FUN_149675a9e(void)

void FUN_149675a9e(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  wchar_t **local_178;
  undefined4 *local_170;
  longlong local_168;
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  ulonglong uStack_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((char)param_1[0x185] == '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_118 = L"NoLODsErrorMessage";
    local_110 = 0x12;
    FUN_1446e940c(&local_128,&local_118);
    local_118 = L"UMeshVertexPaintTool";
    local_110 = 0x14;
    FUN_1446e940c(&local_138,&local_118);
    FUN_140208bae(&local_118,&local_138,&local_128,L"Target Mesh does not support LODs");
    (**(code **)(*plVar2 + 0x340))(plVar2,&local_118,4);
    if (local_118 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_118 + 0x10))();
    }
  }
  else {
    local_138 = (void *)0x0;
    local_130 = (int)param_1[0x184];
    lVar4 = (longlong)local_130;
    _Src = (void *)param_1[0x183];
    if (lVar4 == 0) {
      local_12c = 0;
    }
    else {
      FUN_14851afda(&local_138,local_130,0);
      memcpy(local_138,_Src,lVar4 << 2);
    }
    if (*(char *)(param_1[0x17b] + 0xdd) == '\0') {
      local_118 = (wchar_t *)&local_128;
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,100);
      FUN_14968751e(&local_138);
    }
    if (local_130 == 0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_118 = L"NoLODsToCopyToMessage";
      local_110 = 0x15;
      FUN_1446e940c(&local_128,&local_118);
      local_118 = L"UMeshVertexPaintTool";
      local_110 = 0x14;
      FUN_1446e940c(&local_148,&local_118);
      FUN_140208bae(&local_118,&local_148,&local_128,
                    L"Target Mesh does not have any other editable LODs");
      (**(code **)(*plVar2 + 0x340))(plVar2,&local_118,4);
      if (local_118 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_118 + 0x10))();
      }
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
      lVar4 = param_1[0x186];
      FUN_146ba21d6(&local_118,uVar3,1);
      local_148 = 0;
      uStack_140 = 0;
      FUN_1493d5bfc(&local_148,local_130,1);
      if (0 < local_130) {
        lVar6 = 0;
        lVar5 = 0;
        do {
          local_168 = local_148 + lVar6;
          lVar1 = param_1[0x176];
          local_158 = *(undefined4 *)(lVar1 + 0xac);
          local_154 = *(undefined4 *)(lVar1 + 0xb0);
          local_150 = *(undefined4 *)(lVar1 + 0xb4);
          local_14c = *(undefined4 *)(lVar1 + 0xb8);
          local_178 = &local_118;
          local_170 = &local_158;
          FUN_144567698(param_1[0x14],*(undefined4 *)((longlong)local_138 + lVar5 * 4),uVar3,lVar4);
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 0x2c0;
        } while (lVar5 < local_130);
      }
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_128 = L"CopyToOtherLODs";
      local_120 = 0xf;
      FUN_1446e940c(local_15c,&local_128);
      local_128 = L"UMeshVertexPaintTool";
      local_120 = 0x14;
      FUN_1446e940c(local_160,&local_128);
      FUN_140208bae(&local_128,local_160,local_15c,L"Copy Vertex Colors To LODs");
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_128);
      if (local_128 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_128 + 0x10))();
      }
      if (0 < local_130) {
        lVar4 = 0;
        lVar5 = 0;
        do {
          local_128 = (wchar_t *)CONCAT71(local_128._1_7_,1);
          local_128 = (wchar_t *)
                      CONCAT44(*(undefined4 *)((longlong)local_138 + lVar5 * 4),
                               (undefined4)local_128);
          FUN_148506a2a(param_1[0x14],local_148 + lVar4,0,&local_128);
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x2c0;
        } while (lVar5 < local_130);
      }
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
      FUN_145cb3fa6(local_148,uStack_140 & 0xffffffff);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      FUN_1457e5b52(&local_118);
    }
    if (local_138 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149675ef6 FUN_149675ef6 body=786 status=ok
// SIG undefined FUN_149675ef6(void)

void FUN_149675ef6(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_438 [32];
  undefined1 *local_418;
  undefined4 *local_410;
  wchar_t **local_408;
  undefined1 local_400 [4];
  undefined1 local_3fc [4];
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  wchar_t *local_3d8;
  undefined4 local_3d0;
  undefined1 local_118 [216];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if ((char)param_1[0x185] == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_3d8 = L"NoLODsErrorMessage";
    local_3d0 = 0x12;
    FUN_1446e940c(local_118,&local_3d8);
    local_3d8 = L"UMeshVertexPaintTool";
    local_3d0 = 0x14;
    FUN_1446e940c(&local_3e8,&local_3d8);
    pwVar7 = L"Target Mesh does not support LODs";
  }
  else {
    iVar3 = FUN_140e1307c(param_1[0x17b] + 0xf0,param_1[0x17b] + 0xe0);
    if (iVar3 != -1) {
      uVar5 = (**(code **)(*param_1 + 0x420))(param_1);
      lVar6 = param_1[0x186];
      FUN_146ba21d6(local_118,uVar5,1);
      FUN_1458c1dca(&local_3d8);
      lVar2 = param_1[0x176];
      uVar1 = *(undefined4 *)(param_1[0x183] + (longlong)iVar3 * 4);
      local_3f8 = *(undefined4 *)(lVar2 + 0xac);
      local_410 = &local_3f8;
      local_3f4 = *(undefined4 *)(lVar2 + 0xb0);
      local_3f0 = *(undefined4 *)(lVar2 + 0xb4);
      local_3ec = *(undefined4 *)(lVar2 + 0xb8);
      local_418 = local_118;
      local_408 = &local_3d8;
      FUN_144567698(param_1[0x14],uVar1,uVar5,lVar6);
      lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_3e8 = L"CopyToSpecificLOD";
      local_3e0 = 0x11;
      FUN_1446e940c(local_3fc,&local_3e8);
      local_3e8 = L"UMeshVertexPaintTool";
      local_3e0 = 0x14;
      FUN_1446e940c(local_400,&local_3e8);
      FUN_140208bae(&local_3e8,local_400,local_3fc,L"Copy Vertex Colors To LOD");
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_3e8);
      if (local_3e8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_3e8 + 0x10))();
      }
      local_3e8 = (wchar_t *)CONCAT71(local_3e8._1_7_,1);
      local_3e8 = (wchar_t *)CONCAT44(uVar1,(undefined4)local_3e8);
      FUN_148506a2a(param_1[0x14],&local_3d8,0);
      lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
      FUN_145838e00(&local_3d8);
      FUN_1457e5b52(local_118);
      goto LAB_149675fe7;
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_3d8 = L"MissingLODMessage";
    local_3d0 = 0x11;
    FUN_1446e940c(local_118,&local_3d8);
    local_3d8 = L"UMeshVertexPaintTool";
    local_3d0 = 0x14;
    FUN_1446e940c(&local_3e8,&local_3d8);
    pwVar7 = L"Could not find selected LOD on Target Mesh";
  }
  FUN_140208bae(&local_3d8,&local_3e8,local_118,pwVar7);
  (**(code **)(*plVar4 + 0x340))(plVar4,&local_3d8,4);
  if (local_3d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_3d8 + 0x10))();
  }
LAB_149675fe7:
  if ((local_40 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967620a FUN_14967620a body=94 status=ok
// SIG undefined FUN_14967620a(void)

void FUN_14967620a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0);
  memset(puVar2 + 1,0,0xb8);
  *puVar2 = &PTR_LAB_14bdada10;
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)puVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  }
  FUN_1407058ce(param_1 + 1);
  return;
}



// FUNCTION 149676268 FUN_149676268 body=469 status=ok
// SIG undefined FUN_149676268(void)

void FUN_149676268(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  code **local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  code **local_50;
  code *local_48;
  code **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x420))();
  local_60 = lVar1;
  FUN_14051b394(param_1 + 0x222,*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144),1);
  local_40 = &local_58;
  local_90 = (code *)0x0;
  uVar2 = 0;
  local_88 = (longlong *)((ulonglong)local_88._4_4_ << 0x20);
  local_48 = FUN_144570cdc;
  local_a0 = 0;
  local_98 = &local_90;
  local_58 = (code *)&local_60;
  local_50 = (code **)param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144),1,
                &local_48);
  lVar1 = *(longlong *)(local_60 + 0x208);
  if (0 < *(int *)(lVar1 + 0x38)) {
    uVar2 = **(undefined8 **)(lVar1 + 0x30);
  }
  if (*(int *)(lVar1 + 0x28) < 1) {
    local_70 = 0;
  }
  else {
    local_70 = **(undefined8 **)(lVar1 + 0x20);
  }
  local_68 = uVar2;
  FUN_144a1a59e(param_1 + 0x224,*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),1);
  FUN_144a1a59e(param_1 + 0x226,*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),1);
  local_78 = &local_68;
  local_48 = (code *)0x0;
  local_40 = (code **)((ulonglong)local_40 & 0xffffffff00000000);
  local_58 = FUN_144570d8e;
  local_a0 = 0;
  local_98 = &local_48;
  local_90 = (code *)&local_60;
  local_88 = param_1;
  local_80 = &local_70;
  local_50 = &local_90;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),
                1);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967643e FUN_14967643e body=736 status=ok
// SIG undefined FUN_14967643e(void)

void FUN_14967643e(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_cc [4];
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = (**(code **)(*param_1 + 0x2c8))();
  local_88 = L"ChangeActiveGroupLayer";
  uStack_80._0_4_ = 0x16;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UMeshVertexPaintTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x14);
  FUN_1446e940c(local_cc,&local_88);
  FUN_140208bae(&local_88,local_cc,&local_c8,L"Change Polygroup Layer");
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  iVar8 = -1;
  iVar9 = -1;
  if (param_1[0x187] != 0) {
    iVar9 = *(int *)(param_1[0x187] + 0x10);
  }
  FUN_149670ae8(param_1);
  if (param_1[0x187] != 0) {
    iVar8 = *(int *)(param_1[0x187] + 0x10);
  }
  if (iVar9 != iVar8) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    *puVar6 = &PTR_LAB_14bdacd00;
    *(int *)(puVar6 + 1) = iVar9;
    *(int *)((longlong)puVar6 + 0xc) = iVar8;
    local_c8 = (wchar_t *)puVar6[2];
    uStack_80 = puVar6[3];
    local_b8 = (longlong *)puVar6[4];
    uStack_70 = puVar6[5];
    local_68 = puVar6[6];
    uStack_60 = puVar6[7];
    local_58 = puVar6[8];
    uStack_50 = puVar6[9];
    uVar3 = local_58;
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar2 = uStack_70;
    local_88 = local_c8;
    uVar1 = uStack_80;
    puVar6[8] = CONCAT44(uStack_94,local_98);
    puVar6[9] = CONCAT44(uStack_8c,uStack_90);
    puVar6[6] = &PTR_LAB_14bdadbb0;
    puVar6[7] = param_1;
    puVar6[4] = 0;
    puVar6[5] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[2] = FUN_144570e28;
    puVar6[3] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar1;
    uStack_70 = uVar2;
    local_58 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != (wchar_t *)0x0) {
      plVar7 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar7 = &local_a8;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_88 = L"ChangeActiveGroupLayer";
    uStack_80._0_4_ = 0x16;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UMeshVertexPaintTool";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x14);
    FUN_1446e940c(local_cc,&local_88);
    FUN_140208bae(&local_88,local_cc,&local_c8,L"Change Polygroup Layer");
    local_d8 = puVar6;
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,param_1,&local_d8,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149676738 FUN_149676738 body=174 status=ok
// SIG undefined FUN_149676738(void)

void FUN_149676738(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 1:
    lVar1 = *(longlong *)(param_1 + 0xbb0);
    uVar3 = *(undefined4 *)(lVar1 + 0xac);
    uVar4 = *(undefined4 *)(lVar1 + 0xb0);
    uVar5 = *(undefined4 *)(lVar1 + 0xb4);
    uVar6 = *(undefined4 *)(lVar1 + 0xb8);
    puVar2 = local_28;
    break;
  case 2:
    lVar1 = *(longlong *)(param_1 + 0xbb0);
    uVar3 = *(undefined4 *)(lVar1 + 0xc0);
    uVar4 = *(undefined4 *)(lVar1 + 0xc4);
    uVar5 = *(undefined4 *)(lVar1 + 200);
    uVar6 = *(undefined4 *)(lVar1 + 0xcc);
    puVar2 = local_38;
    break;
  case 3:
    goto LAB_1496767c5;
  case 4:
LAB_1496767c5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  default:
    goto switchD_149676783_default;
  }
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  FUN_14967452a(param_1);
switchD_149676783_default:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14967683a FUN_14967683a body=46 status=ok
// SIG undefined FUN_14967683a(void)

longlong * FUN_14967683a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_149676868(param_2[1]);
  (**(code **)(*plVar1 + 1000))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 149676868 FUN_149676868 body=148 status=ok
// SIG undefined FUN_149676868(void)

undefined8 FUN_149676868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14595ef96();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496768fe FUN_1496768fe body=349 status=ok
// SIG undefined FUN_1496768fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1496768fe(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21418) {
    FUN_144b3d300(&DAT_14cc21418);
    if (DAT_14cc21418 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74cee();
      uVar3 = FUN_145b74c04();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc21408 = (undefined *)0x0;
      _DAT_14cc21414 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc21410 = local_48;
      FUN_1484d23fc(&DAT_14cc213e0,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc213e0;
        if (DAT_14cc21408 != (undefined *)0x0) {
          _Dst = DAT_14cc21408;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144567dd1);
      _Init_thread_footer(&DAT_14cc21418);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc213e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149676a5c FUN_149676a5c body=9510 status=ok
// SIG undefined FUN_149676a5c(void)

void FUN_149676a5c(undefined **param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  code *pcVar21;
  char cVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined ***pppuVar29;
  undefined1 uVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_698 [32];
  wchar_t **local_678;
  undefined **local_668;
  longlong *local_660;
  longlong *local_658;
  longlong *local_650;
  longlong *local_648;
  longlong *local_640;
  undefined1 local_638 [16];
  double local_628;
  undefined1 local_620 [16];
  undefined8 *local_610;
  undefined1 local_608 [16];
  undefined8 *local_5f8;
  undefined1 local_5f0 [16];
  undefined8 *local_5e0;
  undefined1 local_5d8 [16];
  undefined8 *local_5c8;
  undefined1 local_5c0 [16];
  undefined8 *local_5b0;
  undefined1 local_5a8 [16];
  undefined8 *local_598;
  undefined1 local_590 [16];
  undefined8 *local_580;
  undefined1 local_578 [16];
  undefined8 *local_568;
  undefined1 local_560 [16];
  undefined8 *local_550;
  undefined1 local_548 [16];
  undefined8 *local_538;
  undefined1 local_530 [16];
  undefined8 *local_520;
  undefined1 local_518 [16];
  undefined8 *local_508;
  undefined1 local_500 [16];
  undefined8 *local_4f0;
  undefined1 local_4e8 [16];
  undefined8 *local_4d8;
  undefined1 local_4d0 [16];
  undefined8 *local_4c0;
  undefined1 local_4b8 [16];
  undefined8 *local_4a8;
  undefined1 local_4a0 [16];
  undefined8 *local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined **local_478;
  undefined **ppuStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  longlong local_458;
  undefined8 uStack_450;
  longlong local_448;
  longlong *plStack_440;
  undefined1 local_438;
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  undefined **local_400;
  code *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  undefined **local_3c0;
  code *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  undefined **local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  undefined **local_340;
  longlong local_328;
  longlong *local_318;
  longlong local_308 [4];
  longlong local_2e8;
  longlong *local_2d8;
  longlong local_2c8 [4];
  longlong local_2a8;
  longlong *local_298;
  longlong local_288 [4];
  longlong local_268;
  longlong *local_258;
  longlong local_248 [4];
  longlong local_228;
  longlong *local_218;
  longlong local_208 [4];
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  wchar_t *local_1a8;
  undefined4 local_1a0;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined **ppuStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined *puStack_d0;
  undefined **local_c8;
  undefined **ppuStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_698;
  FUN_1496b32c4();
  local_1a8 = L"ToolName";
  local_1a0 = 8;
  FUN_1446e940c(&local_e8,&local_1a8);
  local_1a8 = L"UMeshVertexSculptTool";
  local_1a0 = 0x15;
  FUN_1446e940c(&local_128,&local_1a8);
  FUN_140208bae(&local_1a8,&local_128,&local_e8,L"Sculpt");
  (**(code **)(*param_1 + 0x370))(param_1,&local_1a8);
  if (local_1a8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1a8 + 0x10))();
  }
  FUN_1411371f6(&local_1a8);
  puVar24 = param_1[0x22];
  uVar23 = FUN_14120ac06();
  local_678 = &local_1a8;
  puVar24 = (undefined *)FUN_141137228(puVar24,uVar23,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((puVar24 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(puVar24);
  }
  param_1[0x17c] = puVar24;
  puVar24 = (undefined *)FUN_14851b239(puVar24);
  if ((puVar24 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(puVar24);
  }
  param_1[0x17d] = puVar24;
  FUN_1496b409c(param_1,puVar24,param_1[0x17c]);
  local_458 = 0;
  uStack_450 = 0;
  puVar24 = param_1[0x14];
  if (puVar24 == (undefined *)0x0) {
    plVar27 = (longlong *)0x0;
  }
  else {
    uVar23 = FUN_145b7126e();
    plVar27 = (longlong *)FUN_144718840(puVar24,uVar23);
  }
  (**(code **)(*plVar27 + 0x20))(plVar27,&local_458,0);
  if (0 < (int)uStack_450) {
    uVar31 = 0;
    do {
      (**(code **)(*(longlong *)param_1[0x17d] + 0x638))
                (param_1[0x17d],uVar31 & 0xffffffff,*(undefined8 *)(local_458 + uVar31 * 8));
      uVar31 = uVar31 + 1;
    } while ((longlong)uVar31 < (longlong)(int)uStack_450);
  }
  FUN_1484b501a(param_1[0x17d],0);
  local_e8 = FUN_149679060;
  uStack_e0 = (undefined *)((ulonglong)uStack_e0._4_4_ << 0x20);
  FUN_149678f84(param_1[0x17d] + 0x6e0,&local_128,param_1,&local_e8);
  param_1[0x17e] = local_128;
  ppuVar25 = (undefined **)(**(code **)(*param_1 + 0x420))(param_1);
  FUN_145c688c4(ppuVar25,&local_488,1);
  local_1e8[0] = 0;
  local_1d8 = (longlong *)0x0;
  local_108._0_4_ = local_468;
  local_108._4_4_ = uStack_464;
  uStack_100._0_4_ = uStack_460;
  uStack_100._4_4_ = uStack_45c;
  local_118 = local_478;
  ppuStack_110 = ppuStack_470;
  local_128 = (code *)CONCAT44(uStack_484,local_488);
  uStack_120 = (longlong *)CONCAT44(uStack_47c,uStack_480);
  local_e8 = (code *)0x0;
  local_d8 = (undefined ***)0x0;
  local_d8 = (undefined ***)FUN_14001cc68(0x48,8);
  *local_d8 = &PTR_LAB_14bdadcb0;
  local_d8[1] = ppuVar25;
  *(undefined4 *)(local_d8 + 6) = (undefined4)local_108;
  *(undefined4 *)((longlong)local_d8 + 0x34) = local_108._4_4_;
  *(undefined4 *)(local_d8 + 7) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_d8 + 0x3c) = uStack_100._4_4_;
  local_d8[4] = local_118;
  local_d8[5] = ppuStack_110;
  *(undefined4 *)(local_d8 + 2) = (undefined4)local_128;
  *(undefined4 *)((longlong)local_d8 + 0x14) = local_128._4_4_;
  *(undefined4 *)(local_d8 + 3) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)local_d8 + 0x1c) = uStack_120._4_4_;
  local_d8[8] = param_1;
  if (local_d8 + 1 != (undefined ***)0x0) {
    local_e8 = FUN_144570eb6;
  }
  FUN_14170b918(&local_448,local_1e8);
  lVar28 = local_448;
  local_438 = 1;
  if (plStack_440 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_440 + 1) = (int)plStack_440[1] + 1;
    UNLOCK();
  }
  local_640 = plStack_440;
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar27 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)(local_448 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_448;
    puVar26[0xb] = plStack_440;
    local_448 = 0;
    plStack_440 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar27 + 0x18))(plVar27,puVar26,3);
  }
  plVar27 = plStack_440;
  if (plStack_440 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_440 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_440)(plStack_440);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_1e8[0] != 0) {
    plVar27 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar27 = local_1c8;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_228 = 0;
  local_218 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdadcd0;
  local_e8 = FUN_144570fca;
  ppuStack_c0 = ppuVar25;
  local_b8 = param_1;
  FUN_14170b918(&local_128);
  local_648 = uStack_120;
  lVar14 = (longlong)local_128;
  local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar27 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)((longlong)local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_128;
    puVar26[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar27 + 0x18))(plVar27,puVar26,3);
  }
  plVar27 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_228 != 0) {
    plVar27 = local_218;
    if (local_218 == (longlong *)0x0) {
      plVar27 = local_208;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_268 = 0;
  local_258 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdadcf0;
  local_e8 = FUN_144571158;
  ppuStack_c0 = ppuVar25;
  local_b8 = param_1;
  FUN_14170b918(&local_128);
  lVar15 = (longlong)local_128;
  local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  local_650 = uStack_120;
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar27 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)((longlong)local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_128;
    puVar26[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar27 + 0x18))(plVar27,puVar26,3);
  }
  plVar27 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_268 != 0) {
    plVar27 = local_258;
    if (local_258 == (longlong *)0x0) {
      plVar27 = local_248;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_2a8 = 0;
  local_298 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdadd10;
  local_e8 = FUN_144571196;
  local_668 = ppuVar25;
  ppuStack_c0 = ppuVar25;
  local_b8 = param_1;
  FUN_14170b918(&local_128);
  plVar27 = uStack_120;
  lVar16 = (longlong)local_128;
  local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar1 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)((longlong)local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_128;
    puVar26[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar26,3);
  }
  plVar1 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_120 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  local_658 = plVar27;
  if (local_2a8 != 0) {
    plVar27 = local_298;
    if (local_298 == (longlong *)0x0) {
      plVar27 = local_288;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_2e8 = 0;
  local_2d8 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdadd30;
  local_e8 = FUN_144571232;
  ppuStack_c0 = param_1;
  FUN_14170b918(&local_128);
  lVar17 = (longlong)local_128;
  local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  local_660 = uStack_120;
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar27 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)((longlong)local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_128;
    puVar26[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar27 + 0x18))(plVar27,puVar26,3);
  }
  plVar27 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_2e8 != 0) {
    plVar27 = local_2d8;
    if (local_2d8 == (longlong *)0x0) {
      plVar27 = local_2c8;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_328 = 0;
  local_318 = (longlong *)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14bdadd50;
  ppuStack_c0 = local_668;
  local_b8 = (undefined **)&local_458;
  local_e8 = FUN_144571286;
  uStack_b0 = param_1;
  FUN_14170b918(&local_128);
  lVar18 = (longlong)local_128;
  local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  local_668 = (undefined **)uStack_120;
  cVar22 = FUN_144a53f06();
  pcVar21 = local_e8;
  plVar27 = DAT_14c8442c0;
  if (cVar22 == '\0') {
    pppuVar29 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar29 = &local_c8;
    }
    uVar23 = (*(code *)(*pppuVar29)[1])();
    (*pcVar21)(uVar23);
    *(undefined4 *)((longlong)local_128 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_e8;
    puVar26[4] = local_d8;
    local_d8 = (undefined ***)0x0;
    puVar26[8] = local_b8;
    puVar26[9] = uStack_b0;
    puVar26[6] = local_c8;
    puVar26[7] = ppuStack_c0;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    puVar26[10] = local_128;
    puVar26[0xb] = uStack_120;
    local_128 = (code *)0x0;
    uStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar27 + 0x18))(plVar27,puVar26,3);
  }
  plVar27 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (local_e8 != (code *)0x0) {
    pppuVar29 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar29 = local_d8;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  if (local_328 != 0) {
    plVar27 = local_318;
    if (local_318 == (longlong *)0x0) {
      plVar27 = local_308;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if (lVar28 != 0) {
    do {
      plVar27 = *(longlong **)(lVar28 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  if (lVar14 != 0) {
    do {
      plVar27 = *(longlong **)(lVar14 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  if (lVar16 != 0) {
    do {
      plVar27 = *(longlong **)(lVar16 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  if (lVar17 != 0) {
    do {
      plVar27 = *(longlong **)(lVar17 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  if (lVar18 != 0) {
    do {
      plVar27 = *(longlong **)(lVar18 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  if (lVar15 != 0) {
    do {
      plVar27 = *(longlong **)(lVar15 + 0x70);
      cVar22 = (**(code **)(*plVar27 + 0x20))(plVar27,0xffffffff,0);
    } while (cVar22 == '\0');
  }
  FUN_1496b8318(param_1,&local_488);
  puVar24 = (undefined *)FUN_149679721(param_1);
  if ((puVar24 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(puVar24);
  }
  param_1[0x175] = puVar24;
  FUN_14485c47a(puVar24 + 0xac,param_1);
  param_1[0x29e] = (undefined *)0x0;
  (**(code **)(*param_1 + 0x5e0))(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  param_1[0x20][0xd8] = 0;
  param_1[0x20][0xc0] = 0;
  plVar27 = (longlong *)param_1[0x175];
  FUN_140056680(&local_e8,&DAT_149dfb77a);
  (**(code **)(*plVar27 + 0x2a8))(plVar27,param_1,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x175]);
  (**(code **)(*param_1 + 0x470))(param_1);
  plVar27 = (longlong *)FUN_1496797b6(param_1);
  if ((plVar27 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar27);
  }
  param_1[0x176] = (undefined *)plVar27;
  FUN_140056680(&local_e8,&DAT_149dfb77a);
  (**(code **)(*plVar27 + 0x2a8))(plVar27,param_1,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14485c47a(param_1[0x176] + 0xbc,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x176]);
  plVar27 = (longlong *)FUN_14967984b(param_1);
  if ((plVar27 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar27);
  }
  param_1[0x178] = (undefined *)plVar27;
  FUN_140056680(&local_e8,&DAT_149dfb77a);
  (**(code **)(*plVar27 + 0x2a8))(plVar27,param_1,&local_e8);
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  param_1[0x178][0xa9] = 0;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x178]);
  local_e8 = (code *)param_1[0x240];
  uStack_e0 = param_1[0x241];
  local_d8 = (undefined ***)param_1[0x242];
  puStack_d0 = param_1[0x243];
  local_c8 = (undefined **)param_1[0x244];
  ppuStack_c0 = (undefined **)param_1[0x245];
  puVar24 = param_1[0x246];
  puVar13 = param_1[0x247];
  local_b8 = (undefined **)puVar24;
  puVar24 = (undefined *)local_b8;
  uStack_b0 = (undefined **)puVar13;
  puVar13 = (undefined *)uStack_b0;
  param_1[0x246] = local_f8;
  param_1[0x247] = uStack_f0;
  param_1[0x244] = (undefined *)&PTR_LAB_14bdadd70;
  param_1[0x245] = (undefined *)param_1;
  param_1[0x242] = (undefined *)0x0;
  param_1[0x243] = (undefined *)ppuStack_110;
  param_1[0x240] = &LAB_14457134a;
  param_1[0x241] = (undefined *)uStack_120;
  local_b8._4_4_ = (undefined4)((ulonglong)puVar24 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
  local_108 = local_c8;
  uStack_100 = (undefined *)ppuStack_c0;
  local_f8._0_4_ = (int)puVar24;
  local_f8._4_4_ = local_b8._4_4_;
  uStack_f0._0_4_ = (int)puVar13;
  uStack_f0._4_4_ = uStack_b0._4_4_;
  local_118 = (undefined **)local_d8;
  ppuStack_110 = (undefined **)puStack_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  local_b8 = (undefined **)puVar24;
  uStack_b0 = (undefined **)puVar13;
  if (local_e8 != (code *)0x0) {
    plVar27 = (longlong *)local_d8;
    if (local_d8 == (undefined ***)0x0) {
      plVar27 = &local_108;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  uVar23 = FUN_1496798e0(param_1);
  local_490 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_490 = &PTR_FUN_14bdadd90;
  local_e8 = (code *)0x14bda96d6;
  uStack_e0._0_4_ = 0xb;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_4a0,&local_448,&local_128,L"Smooth");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,3,local_4a0,&local_490);
  uVar23 = FUN_149679975(param_1);
  local_4a8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_4a8 = &PTR_FUN_14bdaddf8;
  local_e8 = (code *)0x14bda96ee;
  uStack_e0._0_4_ = 10;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_4b8,&local_448,&local_128,L"SmoothFill");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,4,local_4b8,&local_4a8);
  uVar23 = FUN_149679a0a(param_1);
  local_4c0 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_4c0 = &PTR_FUN_14bdade68;
  local_e8 = (code *)0x14ab9fb1a;
  uStack_e0._0_4_ = 4;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x15);
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_4d0,&local_448,&local_128,L"Move");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0,local_4d0,&local_4c0);
  uVar23 = FUN_149679a9f(param_1);
  local_4d8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_4d8 = &PTR_FUN_14bdaca18;
  local_4d8[2] = 0;
  local_4d8[4] = 0;
  local_e8 = (code *)local_4d8[2];
  uStack_e0 = (undefined *)local_4d8[3];
  local_d8 = (undefined ***)local_4d8[4];
  puStack_d0 = (undefined *)local_4d8[5];
  local_c8 = (undefined **)local_4d8[6];
  ppuStack_c0 = (undefined **)local_4d8[7];
  local_b8 = (undefined **)local_4d8[8];
  uStack_b0 = (undefined **)local_4d8[9];
  uStack_100._0_4_ = SUB84(param_1,0);
  uVar19 = (undefined4)uStack_100;
  uStack_100._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar20 = uStack_100._4_4_;
  *(undefined4 *)(local_4d8 + 8) = (undefined4)local_f8;
  *(undefined4 *)((longlong)local_4d8 + 0x44) = local_f8._4_4_;
  *(undefined4 *)(local_4d8 + 9) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)local_4d8 + 0x4c) = uStack_f0._4_4_;
  *(undefined4 *)(local_4d8 + 6) = 0x4bdadee0;
  *(undefined4 *)((longlong)local_4d8 + 0x34) = 1;
  *(undefined4 *)(local_4d8 + 7) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)local_4d8 + 0x3c) = uStack_100._4_4_;
  local_4d8[4] = 0;
  local_4d8[5] = ppuStack_110;
  local_4d8[2] = FUN_144571414;
  local_4d8[3] = uStack_120;
  local_f8 = (undefined *)local_b8;
  uStack_f0 = (undefined *)uStack_b0;
  local_108 = local_c8;
  uStack_100 = (undefined *)ppuStack_c0;
  local_118 = (undefined **)local_d8;
  ppuStack_110 = (undefined **)puStack_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  if (local_e8 != (code *)0x0) {
    plVar27 = (longlong *)local_d8;
    if (local_d8 == (undefined ***)0x0) {
      plVar27 = &local_108;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_e8 = (code *)0x149f2df3e;
  uStack_e0._0_4_ = 6;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x15);
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_4e8,&local_448,&local_128,L"SculptN");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,5,local_4e8,&local_4d8);
  uVar23 = FUN_149679b34(param_1);
  local_4f0 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_4f0 = &PTR_FUN_14bdaca18;
  local_4f0[2] = 0;
  local_4f0[4] = 0;
  local_e8 = (code *)local_4f0[2];
  uStack_e0 = (undefined *)local_4f0[3];
  local_d8 = (undefined ***)local_4f0[4];
  puStack_d0 = (undefined *)local_4f0[5];
  local_c8 = (undefined **)local_4f0[6];
  ppuStack_c0 = (undefined **)local_4f0[7];
  local_b8 = (undefined **)local_4f0[8];
  uStack_b0 = (undefined **)local_4f0[9];
  *(undefined4 *)(local_4f0 + 8) = (undefined4)local_f8;
  *(undefined4 *)((longlong)local_4f0 + 0x44) = local_f8._4_4_;
  *(undefined4 *)(local_4f0 + 9) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)local_4f0 + 0x4c) = uStack_f0._4_4_;
  *(undefined4 *)(local_4f0 + 6) = 0x4bdadf60;
  *(undefined4 *)((longlong)local_4f0 + 0x34) = 1;
  *(undefined4 *)(local_4f0 + 7) = uVar19;
  *(undefined4 *)((longlong)local_4f0 + 0x3c) = uVar20;
  local_4f0[4] = 0;
  local_4f0[5] = ppuStack_110;
  local_4f0[2] = FUN_1445714e4;
  local_4f0[3] = uStack_120;
  local_f8 = (undefined *)local_b8;
  uStack_f0 = (undefined *)uStack_b0;
  local_108 = local_c8;
  uStack_100 = (undefined *)ppuStack_c0;
  local_118 = (undefined **)local_d8;
  ppuStack_110 = (undefined **)puStack_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  if (local_e8 != (code *)0x0) {
    plVar27 = (longlong *)local_d8;
    if (local_d8 == (undefined ***)0x0) {
      plVar27 = &local_108;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  local_e8 = (code *)0x14bda9724;
  uStack_e0._0_4_ = 10;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x15);
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_500,&local_448,&local_128,L"SculptV");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,6,local_500,&local_4f0);
  uVar23 = FUN_149679bc9(param_1);
  local_508 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_508 = &PTR_FUN_14bdaca18;
  local_508[2] = 0;
  local_508[4] = 0;
  local_e8 = (code *)local_508[2];
  uStack_e0 = (undefined *)local_508[3];
  local_d8 = (undefined ***)local_508[4];
  puStack_d0 = (undefined *)local_508[5];
  local_c8 = (undefined **)local_508[6];
  ppuStack_c0 = (undefined **)local_508[7];
  local_b8 = (undefined **)local_508[8];
  uStack_b0 = (undefined **)local_508[9];
  *(undefined4 *)(local_508 + 8) = (undefined4)local_f8;
  *(undefined4 *)((longlong)local_508 + 0x44) = local_f8._4_4_;
  *(undefined4 *)(local_508 + 9) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)local_508 + 0x4c) = uStack_f0._4_4_;
  *(undefined4 *)(local_508 + 6) = 0x4bdadfe0;
  *(undefined4 *)((longlong)local_508 + 0x34) = 1;
  *(undefined4 *)(local_508 + 7) = uVar19;
  *(undefined4 *)((longlong)local_508 + 0x3c) = uVar20;
  local_508[4] = 0;
  local_508[5] = ppuStack_110;
  local_508[2] = FUN_1445715b4;
  local_508[3] = uStack_120;
  local_f8 = (undefined *)local_b8;
  uStack_f0 = (undefined *)uStack_b0;
  local_108 = local_c8;
  uStack_100 = (undefined *)ppuStack_c0;
  local_118 = (undefined **)local_d8;
  ppuStack_110 = (undefined **)puStack_d0;
  local_128 = local_e8;
  uStack_120 = (longlong *)uStack_e0;
  if (local_e8 != (code *)0x0) {
    plVar27 = &local_108;
    if (local_d8 != (undefined ***)0x0) {
      plVar27 = (longlong *)local_d8;
    }
    (**(code **)(*plVar27 + 0x10))(plVar27);
  }
  local_e8 = (code *)0x14bda974c;
  uStack_e0._0_4_ = 9;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_518,&local_448,&local_128,L"SculptMx");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,7,local_518,&local_508);
  uVar23 = FUN_149679c5e(param_1);
  local_520 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_520 = &PTR_FUN_14bdae058;
  local_e8 = (code *)0x14bda9760;
  uStack_e0._0_4_ = 7;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_530,&local_448,&local_128,L"Inflate");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,8,local_530,&local_520);
  uVar23 = FUN_149679cf3(param_1);
  local_538 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_538 = &PTR_FUN_14bdae0c8;
  local_e8 = (code *)0x149ebf3f6;
  uStack_e0._0_4_ = 5;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_548,&local_448,&local_128,L"Pinch");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,10,local_548,&local_538);
  uVar23 = FUN_149679d88(param_1);
  local_550 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_550 = &PTR_FUN_14bdae138;
  local_e8 = (code *)0x14bda9770;
  uStack_e0._0_4_ = 7;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_560,&local_448,&local_128,L"Flatten");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0xc,local_560,&local_550);
  uVar23 = FUN_149679e1d(param_1);
  local_568 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_568 = &PTR_FUN_14bdae1a8;
  local_e8 = (code *)0x149e3c982;
  uStack_e0._0_4_ = 5;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_578,&local_448,&local_128,L"PlaneN");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0xd,local_578,&local_568);
  uVar23 = FUN_149679eb2(param_1);
  local_580 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_580 = &PTR_FUN_14bdae1a8;
  local_e8 = (code *)0x14bda979c;
  uStack_e0._0_4_ = 0x10;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_590,&local_448,&local_128,L"PlaneV");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0xe,local_590,&local_580);
  uVar23 = FUN_149679f47(param_1);
  local_598 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_598 = &PTR_FUN_14bdae1a8;
  local_e8 = (code *)0x14bda97cc;
  uStack_e0._0_4_ = 10;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_5a8,&local_448,&local_128,L"PlaneW");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0xf,local_5a8,&local_598);
  uVar23 = FUN_149679fdc(param_1);
  local_5b0 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_5b0 = &PTR_FUN_14bdae238;
  local_e8 = (code *)0x14bda97e2;
  uStack_e0._0_4_ = 0xb;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_5c0,&local_448,&local_128,L"Scale");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,9,local_5c0,&local_5b0);
  uVar23 = FUN_14967a071(param_1);
  local_5c8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_5c8 = &PTR_FUN_14bdae2a8;
  local_e8 = (code *)0x14bda9804;
  uStack_e0._0_4_ = 10;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_5d8,&local_448,&local_128,L"Grab");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,1,local_5d8,&local_5c8);
  uVar23 = FUN_14967a106(param_1);
  local_5e0 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_5e0 = &PTR_FUN_14bdae318;
  local_e8 = (code *)0x14bda982e;
  uStack_e0._0_4_ = 0xf;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_5f0,&local_448,&local_128,L"GrabSharp");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,2,local_5f0,&local_5e0);
  uVar23 = FUN_14967a19b(param_1);
  local_5f8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_5f8 = &PTR_FUN_14bdae388;
  local_e8 = (code *)0x14bda984e;
  uStack_e0._0_4_ = 0xb;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0._0_4_ = 0x15;
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_608,&local_448,&local_128,L"Twist");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b438e(param_1,0xb,local_608,&local_5f8);
  uVar23 = FUN_14967a230(param_1);
  local_610 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_610 = &PTR_FUN_14bdadd90;
  local_e8 = (code *)0x14bdae77c;
  uStack_e0._0_4_ = 6;
  FUN_1446e940c(&local_128,&local_e8);
  local_e8 = (code *)0x14bda8bd8;
  uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x15);
  FUN_1446e940c(&local_448,&local_e8);
  FUN_140208bae(local_620,&local_448,&local_128,L"Smooth");
  local_678 = (wchar_t **)uVar23;
  FUN_1496b454e(param_1,3,local_620,&local_610);
  FUN_1496b523c(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  uVar30 = 0;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
  dVar32 = (double)CONCAT44(uStack_45c,uStack_460) - (double)local_478;
  puVar24 = param_1[0x21];
  dVar32 = (double)(-(ulonglong)(0.0 <= dVar32) & (ulonglong)dVar32);
  dVar33 = (double)CONCAT44(uStack_464,local_468) - (double)CONCAT44(uStack_47c,uStack_480);
  dVar33 = (double)(-(ulonglong)(0.0 <= dVar33) & (ulonglong)dVar33);
  uVar31 = -(ulonglong)(dVar32 <= dVar33);
  dVar9 = (double)(~uVar31 & (ulonglong)dVar32 | uVar31 & (ulonglong)dVar33);
  dVar33 = (double)ppuStack_470 - (double)CONCAT44(uStack_484,local_488);
  dVar33 = (double)(-(ulonglong)(0.0 <= dVar33) & (ulonglong)dVar33);
  uVar8 = -(uint)(dVar9 <= dVar33);
  lVar28 = (**(code **)(*param_1 + 0x410))(param_1);
  dVar6 = ((double)CONCAT44(uStack_484,local_488) + (double)ppuStack_470) * 0.5 *
          *(double *)(lVar28 + 0x280);
  dVar7 = ((double)CONCAT44(uStack_47c,uStack_480) + (double)CONCAT44(uStack_464,local_468)) * 0.5 *
          *(double *)(lVar28 + 0x288);
  dVar34 = ((double)local_478 + (double)CONCAT44(uStack_45c,uStack_460)) * 0.5 *
           *(double *)(lVar28 + 0x290);
  dVar10 = *(double *)(lVar28 + 0x240);
  dVar11 = *(double *)(lVar28 + 0x248);
  dVar12 = *(double *)(lVar28 + 0x250);
  dVar32 = *(double *)(lVar28 + 600);
  dVar35 = dVar7 * dVar10 - dVar6 * dVar11;
  dVar36 = dVar34 * dVar11 - dVar7 * dVar12;
  dVar37 = dVar6 * dVar12 - dVar10 * dVar34;
  dVar36 = dVar36 + dVar36;
  dVar37 = dVar37 + dVar37;
  dVar35 = dVar35 + dVar35;
  dVar7 = (dVar12 * dVar36 - dVar10 * dVar35) + *(double *)(lVar28 + 600) * dVar37 + dVar7 +
          *(double *)(lVar28 + 0x268);
  local_628 = dVar35 * dVar32 + dVar34 + (dVar37 * dVar10 - dVar36 * dVar11) +
              *(double *)(lVar28 + 0x270);
  local_638._8_4_ = SUB84(dVar7,0);
  local_638._0_8_ =
       (dVar35 * dVar11 - dVar37 * dVar12) + dVar32 * dVar36 + dVar6 + *(double *)(lVar28 + 0x260);
  local_638._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  FUN_14967a2c6(puVar24,local_638,uVar8 & SUB84(dVar33,0) | ~uVar8 & SUB84(dVar9,0));
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x142]);
  local_358 = 0;
  local_348 = &PTR_LAB_14bdae460;
  local_368 = &LAB_144571684;
  local_340 = param_1;
  FUN_14967a50e(param_1[0x175] + 0x28,param_1[0x175] + 0xa8);
  local_398 = 0;
  local_388 = &PTR_LAB_14bdae4e0;
  local_3a8 = FUN_1445716d6;
  local_380 = param_1;
  FUN_14967a5e4(param_1[0x175] + 0x28,param_1[0x175] + 0xa9);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bdae500;
  local_3e8 = FUN_144571748;
  local_3c0 = param_1;
  FUN_1495f6e50(param_1[0x175] + 0x28,param_1[0x176] + 0xa8);
  FUN_1496b3abe(param_1);
  FUN_14967a6ba(param_1,param_1[0x175][0xa8]);
  (**(code **)(*param_1 + 0x460))(param_1,param_1[0x175][0xa9]);
  (**(code **)(*param_1 + 0x650))(param_1,*(undefined8 *)(param_1[0x176] + 0xa8));
  FUN_1496b4e36(param_1,3);
  *(undefined8 *)((longlong)param_1 + 0xdb4) = 0x7a6900007a69;
  cVar22 = *(char *)(param_1 + 0x297);
  param_1[0x178][0xa9] = cVar22;
  puVar24 = param_1[0x178];
  if (cVar22 != '\0') {
    uVar30 = puVar24[0xa8];
  }
  *(undefined1 *)((longlong)param_1 + 0x14b9) = uVar30;
  local_418 = 0;
  local_408 = &PTR_LAB_14bdae520;
  local_428 = &LAB_1445717c6;
  local_400 = param_1;
  FUN_1484c9b00(puVar24 + 0x28,puVar24 + 0xa8);
  plVar3 = local_640;
  plVar1 = local_648;
  plVar27 = local_658;
  ppuVar25 = local_668;
  if (local_668 != (undefined **)0x0) {
    LOCK();
    plVar4 = (longlong *)(local_668 + 1);
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_668)(local_668);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar25 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*ppuVar25 + 0x10))(ppuVar25);
      }
    }
  }
  plVar4 = local_650;
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_660 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar2 = (int *)((longlong)local_660 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_660 + 0x10))();
      }
    }
  }
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar27 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar27 = plVar4 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
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
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar27 = plVar1 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar27 = plVar3 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
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
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != 0) {
    if (local_158 == (longlong *)0x0) {
      local_158 = local_148;
    }
    (**(code **)(*local_158 + 0x10))();
  }
  if ((local_a0 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149678f84 FUN_149678f84 body=218 status=ok
// SIG undefined FUN_149678f84(void)

undefined8
FUN_149678f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14bdadc40;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdadbd0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_149687a80(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679060 FUN_149679060 body=1728 status=ok
// SIG undefined FUN_149679060(void)

void FUN_149679060(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *plStack_150;
  undefined1 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((char)param_1[0x19c] == '\x01') {
    lVar4 = param_1[0x19a];
    if (param_1[0x19a] != 0) {
      while( true ) {
        do {
          lVar9 = lVar4;
          lVar4 = 0;
        } while (lVar9 == 0);
        plVar12 = *(longlong **)(lVar9 + 0x70);
        cVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0);
        if (cVar5 != '\0') break;
        lVar4 = param_1[0x19a];
      }
    }
    *(undefined1 *)(param_1 + 0x19c) = 1;
  }
  FUN_14967b170(param_1);
  uVar7 = (**(code **)(*param_1 + 0x420))(param_1);
  FUN_1402226aa(param_1 + 0x183);
  FUN_146c36e11(uVar7,param_3 + 0x10,param_1 + 0x183);
  local_b8 = 0;
  local_a8 = (longlong *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14bdae6e0;
  local_78 = FUN_1445720c8;
  plStack_50 = param_1;
  local_48 = uVar7;
  FUN_1405d8960(&local_158);
  plVar12 = plStack_150;
  lVar4 = local_158;
  local_148 = 1;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_144a53f06();
  pcVar3 = local_78;
  plVar2 = DAT_14c8442c0;
  if (cVar5 == '\0') {
    pppuVar11 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar11 = &local_58;
    }
    uVar10 = (*(code *)(*pppuVar11)[1])();
    uVar6 = (*pcVar3)(uVar10);
    *(undefined1 *)(local_158 + 0x80) = uVar6;
    FUN_140b576f0();
  }
  else {
    puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar8[1] = 0;
    *puVar8 = TAsyncQueuedWork<bool>::vftable;
    puVar8[2] = local_78;
    puVar8[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar8 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar8 + 0x44) = local_48._4_4_;
    *(undefined4 *)(puVar8 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_3c;
    puVar8[6] = local_58;
    puVar8[7] = plStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar8[10] = local_158;
    puVar8[0xb] = plStack_150;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    *(undefined1 *)(puVar8 + 0xc) = local_148;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,3);
  }
  plVar2 = plStack_150;
  local_168 = lVar4;
  local_160 = plVar12;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_150 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar11 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar11 = &local_58;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_b8 != 0) {
    plVar12 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar12 = local_98;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_1405d88fe(param_1 + 0x18e,&local_168);
  plVar12 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14bdae700;
  local_78 = FUN_144572124;
  plStack_50 = param_1;
  local_48 = uVar7;
  FUN_1405d8960(&local_158);
  plVar12 = plStack_150;
  lVar4 = local_158;
  local_148 = 1;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_144a53f06();
  pcVar3 = local_78;
  plVar2 = DAT_14c8442c0;
  if (cVar5 == '\0') {
    pppuVar11 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar11 = &local_58;
    }
    uVar10 = (*(code *)(*pppuVar11)[1])();
    uVar6 = (*pcVar3)(uVar10);
    *(undefined1 *)(local_158 + 0x80) = uVar6;
    FUN_140b576f0();
  }
  else {
    puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar8[1] = 0;
    *puVar8 = TAsyncQueuedWork<bool>::vftable;
    puVar8[2] = local_78;
    puVar8[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar8 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar8 + 0x44) = local_48._4_4_;
    *(undefined4 *)(puVar8 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_3c;
    puVar8[6] = local_58;
    puVar8[7] = plStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar8[10] = local_158;
    puVar8[0xb] = plStack_150;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    *(undefined1 *)(puVar8 + 0xc) = local_148;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,3);
  }
  plVar2 = plStack_150;
  local_168 = lVar4;
  local_160 = plVar12;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_150 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar11 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar11 = &local_58;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_f8 != 0) {
    plVar12 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar12 = local_d8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_1405d88fe(param_1 + 400,&local_168);
  plVar12 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_138 = 0;
  local_128 = (longlong *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14bdae720;
  local_78 = FUN_14457217a;
  plStack_50 = param_1;
  local_48 = uVar7;
  FUN_1405d8960(&local_158);
  plVar12 = plStack_150;
  lVar4 = local_158;
  local_148 = 1;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_144a53f06();
  pcVar3 = local_78;
  plVar2 = DAT_14c8442c0;
  if (cVar5 == '\0') {
    pppuVar11 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar11 = &local_58;
    }
    uVar7 = (*(code *)(*pppuVar11)[1])();
    uVar6 = (*pcVar3)(uVar7);
    *(undefined1 *)(local_158 + 0x80) = uVar6;
    FUN_140b576f0();
  }
  else {
    puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar8[1] = 0;
    *puVar8 = TAsyncQueuedWork<bool>::vftable;
    puVar8[2] = local_78;
    puVar8[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar8 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar8 + 0x44) = local_48._4_4_;
    *(undefined4 *)(puVar8 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_3c;
    puVar8[6] = local_58;
    puVar8[7] = plStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar8[10] = local_158;
    puVar8[0xb] = plStack_150;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    *(undefined1 *)(puVar8 + 0xc) = local_148;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,3);
  }
  plVar2 = plStack_150;
  local_168 = lVar4;
  local_160 = plVar12;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_150 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar11 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar11 = local_68;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if (local_138 != 0) {
    plVar12 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar12 = local_118;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_1405d88fe(param_1 + 0x192,&local_168);
  plVar12 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18d) = 1;
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679721 FUN_149679721 body=148 status=ok
// SIG undefined FUN_149679721(void)

undefined8 FUN_149679721(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fb31e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496797b6 FUN_1496797b6 body=148 status=ok
// SIG undefined FUN_1496797b6(void)

undefined8 FUN_1496797b6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fb40a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967984b FUN_14967984b body=148 status=ok
// SIG undefined FUN_14967984b(void)

undefined8 FUN_14967984b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fb4f6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496798e0 FUN_1496798e0 body=148 status=ok
// SIG undefined FUN_1496798e0(void)

undefined8 FUN_1496798e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9fec();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679975 FUN_149679975 body=148 status=ok
// SIG undefined FUN_149679975(void)

undefined8 FUN_149679975(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baa1c0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679a0a FUN_149679a0a body=148 status=ok
// SIG undefined FUN_149679a0a(void)

undefined8 FUN_149679a0a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba989c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679a9f FUN_149679a9f body=148 status=ok
// SIG undefined FUN_149679a9f(void)

undefined8 FUN_149679a9f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9d2e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679b34 FUN_149679b34 body=148 status=ok
// SIG undefined FUN_149679b34(void)

undefined8 FUN_149679b34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9e18();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679bc9 FUN_149679bc9 body=148 status=ok
// SIG undefined FUN_149679bc9(void)

undefined8 FUN_149679bc9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9f02();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679c5e FUN_149679c5e body=148 status=ok
// SIG undefined FUN_149679c5e(void)

undefined8 FUN_149679c5e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba97b2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679cf3 FUN_149679cf3 body=148 status=ok
// SIG undefined FUN_149679cf3(void)

undefined8 FUN_149679cf3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9986();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679d88 FUN_149679d88 body=148 status=ok
// SIG undefined FUN_149679d88(void)

undefined8 FUN_149679d88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baa2aa();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679e1d FUN_149679e1d body=148 status=ok
// SIG undefined FUN_149679e1d(void)

undefined8 FUN_149679e1d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9a70();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679eb2 FUN_149679eb2 body=148 status=ok
// SIG undefined FUN_149679eb2(void)

undefined8 FUN_149679eb2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9b5a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679f47 FUN_149679f47 body=148 status=ok
// SIG undefined FUN_149679f47(void)

undefined8 FUN_149679f47(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba9c44();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149679fdc FUN_149679fdc body=148 status=ok
// SIG undefined FUN_149679fdc(void)

undefined8 FUN_149679fdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba940a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a071 FUN_14967a071 body=148 status=ok
// SIG undefined FUN_14967a071(void)

undefined8 FUN_14967a071(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba94f4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a106 FUN_14967a106 body=148 status=ok
// SIG undefined FUN_14967a106(void)

undefined8 FUN_14967a106(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba95de();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a19b FUN_14967a19b body=148 status=ok
// SIG undefined FUN_14967a19b(void)

undefined8 FUN_14967a19b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba96c8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a230 FUN_14967a230 body=148 status=ok
// SIG undefined FUN_14967a230(void)

undefined8 FUN_14967a230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baa0d6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a2c6 FUN_14967a2c6 body=583 status=ok
// SIG undefined FUN_14967a2c6(void)

void FUN_14967a2c6(longlong param_1,double *param_2,double param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar11 = *(double *)(param_1 + 0xb0) - dVar1;
  dVar5 = *(double *)(param_1 + 0xb8) - dVar2;
  dVar3 = param_2[2];
  dVar6 = *(double *)(param_1 + 0xc0) - dVar3;
  if ((param_3 + 1000.0) * (param_3 + 1000.0) < dVar6 * dVar6 + dVar5 * dVar5 + dVar11 * dVar11) {
    dVar5 = *(double *)(param_1 + 0xe0);
    dVar6 = *(double *)(param_1 + 0xd0);
    dVar11 = *(double *)(param_1 + 0xd8);
    dVar8 = dVar6 * 0.0 + dVar11 * -0.0;
    dVar9 = dVar11 - dVar5 * 0.0;
    dVar7 = dVar5 * 0.0 - dVar6;
    dVar8 = dVar8 + dVar8;
    dVar7 = dVar7 + dVar7;
    dVar9 = dVar9 + dVar9;
    dVar4 = *(double *)(param_1 + 0xe8);
    dVar10 = (dVar6 * dVar7 - dVar9 * dVar11) + dVar4 * dVar8 + 1.0;
    dVar6 = (dVar5 * dVar9 - dVar8 * dVar6) + dVar4 * dVar7 + 0.0;
    dVar5 = (dVar11 * dVar8 - dVar7 * dVar5) + dVar9 * dVar4 + 0.0;
    dVar11 = (dVar3 - *(double *)(param_1 + 0xc0)) * dVar10 +
             (dVar1 - *(double *)(param_1 + 0xb0)) * dVar5 +
             (dVar2 - *(double *)(param_1 + 0xb8)) * dVar6;
    *(double *)(param_1 + 0xb0) = dVar1 - dVar11 * dVar5;
    *(double *)(param_1 + 0xb8) = dVar2 - dVar6 * dVar11;
    *(double *)(param_1 + 0xc0) = dVar3 - dVar10 * dVar11;
  }
  return;
}



// FUNCTION 14967a50e FUN_14967a50e body=212 status=ok
// SIG undefined FUN_14967a50e(void)

void FUN_14967a50e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14968d462(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a5e4 FUN_14967a5e4 body=212 status=ok
// SIG undefined FUN_14967a5e4(void)

void FUN_14967a5e4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14968d780(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a6ba FUN_14967a6ba body=615 status=ok
// SIG undefined FUN_14967a6ba(void)

void FUN_14967a6ba(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  wchar_t *local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc21448) {
    FUN_144b3d300(&DAT_14cc21448);
    if (DAT_14cc21448 == -1) {
      local_58 = L"OnStartSculptTool";
      uStack_50._0_4_ = 0x11;
      FUN_1446e940c(&local_38,&local_58);
      local_58 = L"UMeshVertexSculptTool";
      uStack_50 = CONCAT44(uStack_50._4_4_,0x15);
      FUN_1446e940c(local_3c,&local_58);
      FUN_140208bae(&DAT_14cc21438,local_3c,&local_38,
                    L"Hold Shift to Smooth, Ctrl to Invert (where applicable). [/] and S/D change Size (+Shift to small-step), W/E changes Strength."
                   );
      atexit((_func_5014 *)&LAB_14456a6c5);
      _Init_thread_footer(&DAT_14cc21448);
    }
  }
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_14615b4b0(&local_58,&DAT_14cc21438);
  FUN_1496b4c26(param_1,param_2);
  uVar2 = 0;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
  if (param_2 - 5 < 3) {
    uVar2 = 1;
  }
  else if (param_2 == 0xf) {
    local_38 = L"FixedPlaneTip";
    local_30 = 0xd;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UMeshVertexSculptTool";
    local_30 = 0x15;
    FUN_1446e940c(local_5c,&local_38);
    FUN_140208bae(&local_38,local_5c,local_3c,
                  L"Use T to reposition Work Plane at cursor, Shift+T to align to Normal, Ctrl+Shift+T to align to View"
                 );
    FUN_14615b4b0(&local_58,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],1);
    uVar2 = 0;
  }
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x176],uVar2);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14598dd3c(&local_58,&local_38);
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  FUN_1401b9920(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967a922 FUN_14967a922 body=314 status=ok
// SIG undefined FUN_14967a922(void)

void FUN_14967a922(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xbe8) != 0) && (*(longlong *)(param_1 + 0xbf0) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0xbe8) + 0x6c8);
  }
  plVar1 = *(longlong **)(param_1 + 0xba8);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xbb0);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xbc0);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0xbe0),0,1);
    *(undefined8 *)(param_1 + 0xbe0) = 0;
  }
  FUN_144575542(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967aa68 FUN_14967aa68 body=694 status=ok
// SIG undefined FUN_14967aa68(void)

longlong FUN_14967aa68(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_358 [40];
  undefined1 local_330 [200];
  undefined8 local_268;
  undefined8 local_260;
  undefined1 *local_258;
  undefined1 local_240 [520];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar4 = FUN_1484e47e5(param_2);
  FUN_14851b11a(lVar4,param_3,&DAT_14c846480);
  FUN_146c6027e(local_330);
  local_260 = 0x4000000000000000;
  local_268 = 0x4000000000000000;
  local_258 = &DAT_100000001;
  uVar5 = FUN_142978942(local_330);
  FUN_146c00d92(local_240,uVar5);
  if (*(int *)(local_38 + 0x28) < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = **(longlong **)(local_38 + 0x20);
  }
  uVar8 = *(int *)(lVar6 + 8) * 0x200 + *(int *)(lVar6 + 0xc);
  uVar12 = 0;
  if ((uVar8 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x10) - 1U))) {
    uVar11 = 1;
    uVar7 = 1;
    if (1 < (int)uVar8) {
      uVar7 = uVar8;
    }
    do {
      uVar10 = (uint)uVar11;
      uVar12 = uVar7;
      if (uVar7 == uVar10) break;
      uVar3 = uVar11 >> 9;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar10;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar6 + 0x10))[uVar3] +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  }
joined_r0x00014967ab38:
  uVar7 = uVar12;
  if (uVar7 != uVar8) {
    uVar11 = (ulonglong)(uVar7 >> 5 & 0x3fffff8);
    lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar11);
    uVar12 = (uVar7 & 0xff) << 3;
    fVar1 = *(float *)(lVar2 + (ulonglong)(uVar12 | 4));
    *(float *)(lVar2 + (ulonglong)uVar12) = 1.0 - *(float *)(lVar2 + (ulonglong)uVar12);
    *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar11) + (ulonglong)(uVar12 | 4)) =
         1.0 - fVar1;
    uVar10 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar8) {
      uVar10 = uVar8;
    }
    do {
      uVar12 = uVar10;
      if (uVar10 - 1 == uVar7) break;
      uVar7 = uVar7 + 1;
      uVar12 = uVar7;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar6 + 0x10) +
                                           (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    goto joined_r0x00014967ab38;
  }
  FUN_14851bbe8(lVar4,local_240,1,0xf);
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar6 = FUN_148557aea(uVar5);
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x146] = lVar6;
    if (lVar6 != 0) goto LAB_14967ac31;
  }
  else {
    FUN_14689c22e(lVar6);
    param_1[0x146] = lVar6;
LAB_14967ac31:
    FUN_14851b338(lVar4,lVar6);
  }
  plVar9 = *(longlong **)(lVar4 + 0x50);
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_1411674f6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) goto LAB_14967ac67;
  }
  plVar9 = (longlong *)0x0;
LAB_14967ac67:
  (**(code **)(*plVar9 + 0xb80))(plVar9,0);
  FUN_14851b89a(lVar4,0);
  FUN_141082778(local_240);
  FUN_146bd8050(local_330);
  if ((local_20 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14967ad20 FUN_14967ad20 body=30 status=ok
// SIG undefined FUN_14967ad20(void)

void FUN_14967ad20(longlong param_1)

{
  FUN_1496b8f2a();
  *(undefined1 *)(*(longlong *)(param_1 + 0xa20) + 0x79) = 1;
  return;
}



// FUNCTION 14967ad3e FUN_14967ad3e body=104 status=ok
// SIG undefined FUN_14967ad3e(void)

void FUN_14967ad3e(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0xa8) != param_2) {
    *(char *)(*(longlong *)(param_1 + 0xba8) + 0xa8) = param_2;
    FUN_14967a6ba(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0xba8) + 0xa8));
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xba8) + 0x30);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xba8) + 0x28);
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x10))();
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
  }
  return;
}



// FUNCTION 14967ada6 FUN_14967ada6 body=106 status=ok
// SIG undefined FUN_14967ada6(void)

void FUN_14967ada6(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1[0x175] + 0xa9) != param_2) {
    *(char *)(param_1[0x175] + 0xa9) = param_2;
    (**(code **)(*param_1 + 0x460))(param_1,*(undefined1 *)(param_1[0x175] + 0xa9));
    lVar3 = (longlong)*(int *)(param_1[0x175] + 0x30);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(param_1[0x175] + 0x28);
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x10))();
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
  }
  return;
}



// FUNCTION 14967ae1e FUN_14967ae1e body=848 status=ok
// SIG undefined FUN_14967ae1e(void)

void FUN_14967ae1e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14967b170();
  FUN_14967b23a(param_1,param_2);
  if (*(byte *)(param_1[0x175] + 0xa8) - 0xd < 2) {
    FUN_144567de2(param_1,param_1 + 0x83);
    (**(code **)(*param_1 + 0x580))
              (param_1,param_1 + 0x83,param_1 + 0x1ad,*(char *)(param_1[0x175] + 0xa8) == '\x0e');
  }
  else if (*(byte *)(param_1[0x175] + 0xa8) == 0xf) {
    (**(code **)(*param_1 + 0x588))(param_1);
  }
  param_1[0x108] = param_1[0x82];
  param_1[0x106] = param_1[0x80];
  param_1[0x107] = param_1[0x81];
  param_1[0x104] = param_1[0x7e];
  param_1[0x105] = param_1[0x7f];
  param_1[0x102] = param_1[0x7c];
  param_1[0x103] = param_1[0x7d];
  param_1[0x109] = param_1[0x83];
  param_1[0x10a] = param_1[0x84];
  param_1[0x10b] = param_1[0x85];
  param_1[0x10c] = param_1[0x86];
  *(int *)(param_1 + 0x10d) = (int)param_1[0x87];
  *(undefined4 *)((longlong)param_1 + 0x86c) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(int *)(param_1 + 0x10e) = (int)param_1[0x88];
  *(undefined4 *)((longlong)param_1 + 0x874) = *(undefined4 *)((longlong)param_1 + 0x444);
  param_1[0x10f] = param_1[0x89];
  lVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  param_1[0x110] = lVar3;
  lVar3 = (**(code **)(*param_1 + 0x480))(param_1);
  param_1[0x111] = lVar3;
  cVar6 = (**(code **)(*param_1 + 0x528))(param_1);
  if (cVar6 == '\0') {
    uVar10 = 0x3ff00000;
  }
  else {
    uVar10 = 0xbff00000;
  }
  plVar1 = param_1 + 0x102;
  param_1[0x113] = (ulonglong)uVar10 << 0x20;
  lVar3 = (**(code **)(*param_1 + 0x498))(param_1);
  param_1[0x114] = lVar3;
  dVar5 = (double)(**(code **)(*param_1 + 0x488))(param_1);
  dVar4 = (double)(**(code **)(*param_1 + 0x490))(param_1);
  param_1[0x112] = (longlong)(dVar4 * dVar5);
  FUN_1402160b8(&local_78);
  param_1[0x124] = CONCAT44(uStack_74,local_78);
  if (*(char *)((longlong)param_1 + 0x14b9) == '\x01') {
    plVar2 = param_1 + 0x109;
    local_88 = param_1[0x10f];
    local_b8 = (undefined4)*plVar2;
    uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x84c);
    uStack_b0 = (undefined4)param_1[0x10a];
    uStack_ac = *(undefined4 *)((longlong)param_1 + 0x854);
    local_a8 = (undefined4)param_1[0x10b];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x85c);
    uStack_a0 = (undefined4)param_1[0x10c];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x864);
    local_98 = (undefined4)param_1[0x10d];
    uStack_94 = *(undefined4 *)((longlong)param_1 + 0x86c);
    uStack_90 = (undefined4)param_1[0x10e];
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0x874);
    FUN_148341426(param_1[0x296],&local_78);
    param_1[0x10f] = local_48;
    param_1[0x10d] = CONCAT44(uStack_54,local_58);
    param_1[0x10e] = CONCAT44(uStack_4c,uStack_50);
    param_1[0x10b] = CONCAT44(uStack_64,local_68);
    param_1[0x10c] = CONCAT44(uStack_5c,uStack_60);
    *plVar2 = CONCAT44(uStack_74,local_78);
    param_1[0x10a] = CONCAT44(uStack_6c,uStack_70);
    param_1[0x108] = param_1[0x10f];
    *(int *)(param_1 + 0x106) = (int)param_1[0x10d];
    *(undefined4 *)((longlong)param_1 + 0x834) = *(undefined4 *)((longlong)param_1 + 0x86c);
    *(int *)(param_1 + 0x107) = (int)param_1[0x10e];
    *(undefined4 *)((longlong)param_1 + 0x83c) = *(undefined4 *)((longlong)param_1 + 0x874);
    *(int *)(param_1 + 0x104) = (int)param_1[0x10b];
    *(undefined4 *)((longlong)param_1 + 0x824) = *(undefined4 *)((longlong)param_1 + 0x85c);
    *(int *)(param_1 + 0x105) = (int)param_1[0x10c];
    *(undefined4 *)((longlong)param_1 + 0x82c) = *(undefined4 *)((longlong)param_1 + 0x864);
    *(int *)plVar1 = (int)*plVar2;
    *(undefined4 *)((longlong)param_1 + 0x814) = *(undefined4 *)((longlong)param_1 + 0x84c);
    *(int *)(param_1 + 0x103) = (int)param_1[0x10a];
    *(undefined4 *)((longlong)param_1 + 0x81c) = *(undefined4 *)((longlong)param_1 + 0x854);
    FUN_146bcb256(param_1 + 0x38,&local_78,plVar1);
    param_1[0x104] = CONCAT44(uStack_64,local_68);
    *(undefined4 *)plVar1 = local_78;
    *(undefined4 *)((longlong)param_1 + 0x814) = uStack_74;
    *(undefined4 *)(param_1 + 0x103) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x81c) = uStack_6c;
    FUN_1482ff674(plVar1,param_1 + 0x38);
  }
  *(int *)(param_1 + 0x182) = (int)param_1[0x8a];
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x578))(param_1);
  local_78 = *puVar7;
  uStack_74 = puVar7[1];
  uStack_70 = puVar7[2];
  uStack_6c = puVar7[3];
  local_68 = puVar7[4];
  uStack_64 = puVar7[5];
  uStack_60 = puVar7[6];
  uStack_5c = puVar7[7];
  local_58 = puVar7[8];
  uStack_54 = puVar7[9];
  uStack_50 = puVar7[10];
  uStack_4c = puVar7[0xb];
  local_48 = *(longlong *)(puVar7 + 0xc);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,&local_78);
  plVar2 = (longlong *)*puVar8;
  uVar9 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar9,plVar1,param_1 + 0x1ab);
  FUN_1402226aa(param_1 + 0x183);
  FUN_14967b2bc(param_1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967b170 FUN_14967b170 body=202 status=ok
// SIG undefined FUN_14967b170(void)

void FUN_14967b170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0xc68) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0xc70);
    if (*(longlong *)(param_1 + 0xc70) != 0) {
      while( true ) {
        do {
          lVar4 = lVar2;
          lVar2 = 0;
        } while (lVar4 == 0);
        plVar1 = *(longlong **)(lVar4 + 0x70);
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
        if (cVar3 != '\0') break;
        lVar2 = *(longlong *)(param_1 + 0xc70);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0xc80);
    if (*(longlong *)(param_1 + 0xc80) != 0) {
      while( true ) {
        do {
          lVar4 = lVar2;
          lVar2 = 0;
        } while (lVar4 == 0);
        plVar1 = *(longlong **)(lVar4 + 0x70);
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
        if (cVar3 != '\0') break;
        lVar2 = *(longlong *)(param_1 + 0xc80);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0xc90);
    if (*(longlong *)(param_1 + 0xc90) != 0) {
      while( true ) {
        do {
          lVar4 = lVar2;
          lVar2 = 0;
        } while (lVar4 == 0);
        plVar1 = *(longlong **)(lVar4 + 0x70);
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
        if (cVar3 != '\0') break;
        lVar2 = *(longlong *)(param_1 + 0xc90);
      }
    }
    *(undefined1 *)(param_1 + 0xc68) = 0;
  }
  return;
}



// FUNCTION 14967b23a FUN_14967b23a body=129 status=ok
// SIG undefined FUN_14967b23a(void)

void FUN_14967b23a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  cVar1 = (**(code **)(*(longlong *)*puVar2 + 0x30))();
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    cVar1 = (**(code **)(*param_1 + 0x500))(param_1,param_2,0);
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0x4f8))(param_1,param_2,0);
  }
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(longlong *)*puVar2 + 0x38))(), cVar1 != '\0')) {
    FUN_1496b6976(param_1);
    return;
  }
  return;
}



// FUNCTION 14967b2bc FUN_14967b2bc body=231 status=ok
// SIG undefined FUN_14967b2bc(void)

void FUN_14967b2bc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14001cc68(0x150,0x10);
  FUN_1484ad2ac(lVar1);
  param_1[0x29e] = lVar1;
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"VertexSculptChange";
  local_38 = 0x12;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"UMeshVertexSculptTool";
  local_38 = 0x15;
  FUN_1446e940c(local_58,&local_40);
  FUN_140208bae(local_50,local_58,local_54,L"Brush Stroke");
  FUN_148558a3c((longlong)param_1 + 0xb94,local_50,uVar2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967b3a4 FUN_14967b3a4 body=93 status=ok
// SIG undefined FUN_14967b3a4(void)

void FUN_14967b3a4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x1b6) = 1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  plVar1 = (longlong *)*puVar2;
  uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_1 + 0x102,param_1 + 0x1ab);
  FUN_14967b402(param_1);
  return;
}



// FUNCTION 14967b402 FUN_14967b402 body=886 status=ok
// SIG undefined FUN_14967b402(void)

void FUN_14967b402(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 local_cc [4];
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar5 = (undefined8 *)FUN_14001cc68(0x90,0x10);
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
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  *puVar5 = &PTR_LAB_14bdae620;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar1 = (undefined8 *)param_1[0x29e];
  if (puVar5 + 1 != puVar1) {
    puVar5[1] = *puVar1;
    *puVar1 = 0;
  }
  local_c8 = (wchar_t *)puVar5[2];
  uStack_80 = puVar5[3];
  local_b8 = (longlong *)puVar5[4];
  uStack_70 = puVar5[5];
  local_68 = puVar5[6];
  uStack_60 = puVar5[7];
  local_58 = puVar5[8];
  uStack_50 = puVar5[9];
  uVar3 = local_58;
  uVar4 = uStack_50;
  local_78 = local_b8;
  uVar2 = uStack_70;
  local_88 = local_c8;
  uVar7 = uStack_80;
  puVar5[8] = CONCAT44(uStack_94,local_98);
  puVar5[9] = CONCAT44(uStack_8c,uStack_90);
  puVar5[6] = &PTR_LAB_14bdae670;
  puVar5[7] = param_1;
  puVar5[4] = 0;
  puVar5[5] = CONCAT44(uStack_ac,uStack_b0);
  puVar5[2] = &LAB_14457208c;
  puVar5[3] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar7;
  uStack_70 = uVar2;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if (local_c8 != (wchar_t *)0x0) {
    plVar8 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar8 = &local_a8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"VertexSculptChange";
  uStack_80._0_4_ = 0x12;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UMeshVertexSculptTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_cc,&local_88);
  FUN_140208bae(&local_88,local_cc,&local_c8,L"Brush Stroke");
  local_d8 = puVar5;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(lVar6 + 0x28,param_1[0x17d],&local_d8,&local_88)
  ;
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  if (((char)param_1[0x297] == '\x01') && (*(char *)((longlong)param_1 + 0x14b9) == '\0')) {
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_88 = L"DisableSymmetryChange";
    uStack_80._0_4_ = 0x15;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UMeshVertexSculptTool";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
    FUN_1446e940c(local_cc,&local_88);
    FUN_140208bae(&local_88,local_cc,&local_c8,L"Disable Symmetry");
    local_e0 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_e0 = &PTR_LAB_14bdae690;
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(lVar6 + 0x28,param_1,&local_e0,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x297) = 0;
    *(undefined1 *)(param_1[0x178] + 0xa9) = 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148558a82((longlong)param_1 + 0xb94,uVar7);
  lVar6 = param_1[0x29e];
  if (lVar6 != 0) {
    FUN_14854b8a8(lVar6);
    FUN_1400020a8(lVar6);
  }
  param_1[0x29e] = 0;
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967b77a FUN_14967b77a body=75 status=ok
// SIG undefined FUN_14967b77a(void)

void FUN_14967b77a(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  (**(code **)(*(longlong *)*puVar2 + 0x20))();
  lVar1 = param_1[0x29e];
  if (lVar1 != 0) {
    FUN_14854b8a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[0x29e] = 0;
  return;
}



// FUNCTION 14967b7c6 FUN_14967b7c6 body=278 status=ok
// SIG undefined FUN_14967b7c6(void)

bool FUN_14967b7c6(longlong *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined1 local_d8 [8];
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == -1) {
    bVar1 = false;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_88);
    local_a8 = local_78;
    local_b8 = local_88;
    uStack_b4 = uStack_84;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    FUN_146ba22f0(param_1 + 0x38,&local_a0);
    local_e8 = &local_d0;
    FUN_146c1477c(param_3,param_2,&local_b8,local_d8);
    bVar1 = 0.0 <= (local_c0 - local_90) * local_a8 +
                   (local_d0 - local_a0) * (double)CONCAT44(uStack_b4,local_b8) +
                   (local_c8 - local_98) * (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967b8de FUN_14967b8de body=269 status=ok
// SIG undefined FUN_14967b8de(void)

undefined4 FUN_14967b8de(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x19c] == '\x01') {
    lVar2 = param_1[0x19a];
    if (param_1[0x19a] != 0) {
      while( true ) {
        do {
          lVar5 = lVar2;
          lVar2 = 0;
        } while (lVar5 == 0);
        plVar1 = *(longlong **)(lVar5 + 0x70);
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
        if (cVar3 != '\0') break;
        lVar2 = param_1[0x19a];
      }
    }
    *(undefined1 *)(param_1 + 0x19c) = 1;
  }
  local_48 = param_1 + 0x248;
  local_20 = &local_30;
  local_28 = FUN_14963f300;
  local_38 = &local_48;
  local_40 = FUN_14963f376;
  local_58 = 0x7fefffffffffffff;
  local_30 = local_48;
  uVar4 = FUN_146c87396(local_48,param_2);
  if (*(char *)(param_1[0x20] + 200) == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x420))(param_1);
    cVar3 = FUN_14967b7c6(param_1,uVar4,uVar6);
    if (cVar3 != '\0') {
      uVar4 = 0xffffffff;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14967b9ec FUN_14967b9ec body=191 status=ok
// SIG undefined FUN_14967b9ec(void)

undefined4 FUN_14967b9ec(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1 + 0x1fc;
  local_20 = &local_30;
  local_28 = FUN_14963f300;
  local_38 = &local_48;
  local_40 = FUN_14963f376;
  local_58 = 0x7fefffffffffffff;
  local_30 = local_48;
  uVar2 = FUN_146c87396();
  if (*(char *)(param_1[0x20] + 200) == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x430))(param_1);
    cVar1 = FUN_14967b7c6(param_1,uVar2,uVar3);
    if (cVar1 != '\0') {
      uVar2 = 0xffffffff;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14967baac FUN_14967baac body=443 status=ok
// SIG undefined FUN_14967baac(void)

void FUN_14967baac(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double _X;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = *(double *)(param_2 + 0xc);
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  local_98 = *(undefined8 *)(param_2 + 4);
  dStack_90 = *(double *)(param_2 + 6);
  local_88 = *(double *)(param_2 + 8);
  dStack_80 = *(double *)(param_2 + 10);
  if (*(char *)(param_1 + 0x1450) == '\x01') {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0xbb0) + 0xb0);
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      dVar8 = dStack_90 * (dStack_90 + dStack_90);
      dVar3 = (dStack_90 + dStack_90) * local_78;
      dVar7 = local_78 * (local_88 + local_88);
      dVar4 = dStack_90 * (dStack_80 + dStack_80);
      dVar6 = (local_88 + local_88) * local_88;
      dVar5 = (dStack_80 + dStack_80) * local_88;
      _X = (double)fVar1 * 0.017453292519943295 * 0.5;
      dVar2 = sin(_X);
      local_b0 = cos(_X);
      local_c8 = (dVar4 + dVar7) * dVar2;
      local_c0 = (dVar5 - dVar3) * dVar2;
      local_b8 = (1.0 - (dVar6 + dVar8)) * dVar2;
      FUN_1482ff674(&local_a8);
    }
  }
  FUN_1496b7664(param_1,&local_a8);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967bc68 FUN_14967bc68 body=573 status=ok
// SIG undefined FUN_14967bc68(void)

undefined8 FUN_14967bc68(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  double dVar4;
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
  char cVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + -0xb0;
  uVar17 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x30) = param_2[8];
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x38) = uVar13;
  *(undefined4 *)(param_1 + 0x3c) = uVar14;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined1 *)(param_1 + 0xd01) = *(undefined1 *)(*(longlong *)(param_1 + 0xaf8) + 0xa8);
  cVar15 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x518))(lVar1);
  if (cVar15 != '\0') goto LAB_14967bcce;
  FUN_14967b23a(lVar1,param_2);
  lVar3 = *(longlong *)(param_1 + 0x980);
  if (lVar3 == 0) goto LAB_14967bcce;
  dVar4 = (double)(**(code **)(*(longlong *)(param_1 + -0xb0) + 0x480))(lVar1);
  FUN_1446f470e(&local_38,L"FalloffRatio",1);
  FUN_14472da24(lVar3,local_38,(float)dVar4);
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0xaf8) + 0xa9);
  if (bVar2 < 8) {
    if ((0x22U >> (bVar2 & 0x1f) & 1) == 0) {
      if ((0x44U >> (bVar2 & 0x1f) & 1) == 0) {
        if ((0x88U >> (bVar2 & 0x1f) & 1) == 0) goto LAB_14967be7a;
        uVar16 = *(undefined8 *)(param_1 + 0x980);
        FUN_1446f470e(&local_58,L"FalloffMode",1);
        uVar17 = 0x3f800000;
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 0x980);
        FUN_1446f470e(&local_50,L"FalloffMode",1);
        uVar17 = 0x3f2aaaaa;
        local_58 = local_50;
      }
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x980);
      FUN_1446f470e(&local_48,L"FalloffMode",1);
      uVar17 = 0x3eaaaaaa;
      local_58 = local_48;
    }
  }
  else {
LAB_14967be7a:
    uVar16 = *(undefined8 *)(param_1 + 0x980);
    FUN_1446f470e(&local_40,L"FalloffMode",1);
    uVar17 = 0;
    local_58 = local_40;
  }
  FUN_14472da24(uVar16,local_58,uVar17);
  uVar16 = *(undefined8 *)(param_1 + 0x980);
  if ((*(byte *)(*(longlong *)(param_1 + 0xaf8) + 0xa9) & 0xfc) == 4) {
    FUN_1446f470e(&local_68,L"FalloffShape",1);
    uVar17 = 0x3f800000;
  }
  else {
    FUN_1446f470e(&local_60,L"FalloffShape",1);
    uVar17 = 0;
    local_68 = local_60;
  }
  FUN_14472da24(uVar16,local_68,uVar17);
LAB_14967bcce:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967bea6 FUN_14967bea6 body=642 status=ok
// SIG undefined FUN_14967bea6(void)

void FUN_14967bea6(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  longlong local_198 [24];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1496b3ef8();
  if (*(char *)(param_1 + 0x14b9) == '\x01') {
    FUN_141300fc0(local_198);
    FUN_14845339e(local_198,param_2);
    FUN_148341572(*(undefined8 *)(param_1 + 0x14b0),&local_1e8,param_1 + 0x528);
    local_1c0 = *(double *)(param_1 + 0x208) * local_1d8;
    dStack_1c8 = *(double *)(param_1 + 0x200) * local_1e0;
    local_1d0 = *(double *)(param_1 + 0x1f8) * local_1e8;
    FUN_146bed047(local_1b8,param_1 + 0x1c0,&local_1d0);
    local_98 = ((double)local_1b8._0_8_ + *(double *)(param_1 + 0x1e0)) * local_98;
    dStack_90 = ((double)local_1b8._8_8_ + *(double *)(param_1 + 0x1e8)) * dStack_90;
    local_88 = (local_1a8 + *(double *)(param_1 + 0x1f0)) * local_88;
    local_1d0 = 5.2386907257919585e-11;
    dStack_1c8 = 0.007812501798616723;
    dVar1 = dStack_90 * local_d8 - local_98 * dStack_d0;
    dVar2 = local_88 * dStack_d0 - dStack_90 * local_c8;
    dVar3 = local_98 * local_c8 - local_d8 * local_88;
    dVar2 = dVar2 + dVar2;
    dVar3 = dVar3 + dVar3;
    dVar1 = dVar1 + dVar1;
    dStack_b0 = (local_c8 * dVar2 - local_d8 * dVar1) + dStack_c0 * dVar3 + dStack_90 + dStack_b0;
    local_1b8._8_4_ = SUB84(dStack_b0,0);
    local_1b8._0_8_ =
         (dVar1 * dStack_d0 - dVar3 * local_c8) + dStack_c0 * dVar2 + local_98 + local_b8;
    local_1b8._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
    local_1a8 = dVar1 * dStack_c0 + local_88 + (dVar3 * local_d8 - dVar2 * dStack_d0) + local_a8;
    local_1f8 = 0;
    (**(code **)(local_198[0] + 0x10))(local_198,local_1b8,&local_1d0,&DAT_40a00000);
    FUN_14845342a(local_198);
    FUN_14008cd94(local_198);
  }
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967c12a FUN_14967c12a body=145 status=ok
// SIG undefined FUN_14967c12a(void)

void FUN_14967c12a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x458))();
  plVar2 = (longlong *)FUN_14479d2ce(*plVar1 + 8);
  fVar4 = (float)(**(code **)(*plVar2 + 0x2b8))(plVar2);
  fVar4 = fVar4 + 0.05;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(*plVar1 + 8);
  (**(code **)(*plVar2 + 0x2d0))(plVar2,fVar4);
  uVar3 = FUN_14479d2ce(*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014967c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,uVar3,*(code **)(*param_1 + 0x330));
  return;
}



// FUNCTION 14967c1bc FUN_14967c1bc body=145 status=ok
// SIG undefined FUN_14967c1bc(void)

void FUN_14967c1bc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x458))();
  plVar2 = (longlong *)FUN_14479d2ce(*plVar1 + 8);
  fVar4 = (float)(**(code **)(*plVar2 + 0x2b8))(plVar2);
  fVar4 = fVar4 + -0.05;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(*plVar1 + 8);
  (**(code **)(*plVar2 + 0x2d0))(plVar2,fVar4);
  uVar3 = FUN_14479d2ce(*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014967c24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,uVar3,*(code **)(*param_1 + 0x330));
  return;
}



// FUNCTION 14967c24e FUN_14967c24e body=593 status=ok
// SIG undefined FUN_14967c24e(void)

void FUN_14967c24e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 3000) == param_2) goto LAB_14967c465;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 3000) = param_2;
    if (param_2 != 0) goto LAB_14967c2a3;
  }
  else {
    FUN_14689c22e(param_2);
    *(longlong *)(param_1 + 3000) = param_2;
LAB_14967c2a3:
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    lStack_60 = 0;
    cVar2 = FUN_1484c23e9(param_2,&local_68,0);
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0x1458) = local_68;
      if ((undefined8 *)(param_1 + 0x1458) != &local_68) {
        if (*(longlong *)(param_1 + 0x1460) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x1460) = lStack_60;
        lStack_60 = 0;
        *(undefined8 *)(param_1 + 0x1468) = local_58;
        *(undefined8 *)(param_1 + 0x1470) = uStack_50;
        local_58 = 0;
        uStack_50 = 0;
      }
      *(undefined4 *)(param_1 + 0x1478) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x147c) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x1480) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x1484) = uStack_40._4_4_;
      *(undefined8 *)(param_1 + 0x1488) = local_68;
      *(undefined1 *)(param_1 + 0x1450) = 1;
      uVar1 = *(undefined8 *)(param_1 + 0xa30);
      FUN_1446f470e(&local_70,L"BrushAlpha",1);
      FUN_14016d8b0(uVar1,local_70,param_2);
      uVar1 = *(undefined8 *)(param_1 + 0xa30);
      FUN_1446f470e(&local_78,L"AlphaPower",1);
      FUN_14472da24(uVar1,local_78,0x3f800000);
    }
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') goto LAB_14967c465;
  }
  *(undefined1 *)(param_1 + 0x1450) = 0;
  *(undefined8 *)(param_1 + 0x1458) = 0;
  if (*(longlong *)(param_1 + 0x1460) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x1480) = 0;
  *(undefined8 *)(param_1 + 0x1488) = 0;
  *(undefined8 *)(param_1 + 0x1470) = 0;
  *(undefined8 *)(param_1 + 0x1478) = 0;
  *(undefined8 *)(param_1 + 0x1460) = 0;
  *(undefined8 *)(param_1 + 0x1468) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa30);
  FUN_1446f470e(&local_80,L"BrushAlpha",1);
  FUN_14016d8b0(uVar1,local_80,0);
  uVar1 = *(undefined8 *)(param_1 + 0xa30);
  FUN_1446f470e(&local_88,L"AlphaPower",1);
  FUN_14472da24(uVar1,local_88,0);
LAB_14967c465:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14967c4a0 FUN_14967c4a0 body=450 status=ok
// SIG undefined FUN_14967c4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14967c4a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  float local_78 [6];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x1450) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc21430) && (FUN_144b3d300(&DAT_14cc21430), DAT_14cc21430 == -1)) {
      _DAT_14cc21420 = 0;
      uRam000000014cc21428 = 0;
      _Init_thread_footer(&DAT_14cc21430);
    }
    FUN_146bca7ae(param_2 + 0x38,&local_60,param_3,2);
    dVar2 = 1.0 - (local_60 / *(double *)(param_2 + 0x70) + 1.0) * 0.5;
    uVar1 = 0;
    if ((0.0 <= dVar2) && (dVar2 <= 1.0)) {
      dVar3 = 1.0 - (local_58 / *(double *)(param_2 + 0x70) + 1.0) * 0.5;
      uVar1 = 0;
      if ((0.0 <= dVar3) && (dVar3 <= 1.0)) {
        local_48 = dVar3 * (double)*(int *)(param_1 + 0x145c);
        local_50 = dVar2 * (double)*(int *)(param_1 + 0x1458);
        FUN_1483b7358(param_1 + 0x1458,local_78,&local_50,&DAT_14cc21420);
        uVar1 = 0;
        if ((0.0 <= local_78[0]) && (uVar1 = 0, (double)local_78[0] <= 1.0)) {
          uVar1 = SUB84((double)local_78[0],0);
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar1);
  }
  return;
}



// FUNCTION 14967c664 FUN_14967c664 body=1051 status=ok
// SIG undefined FUN_14967c664(void)

void FUN_14967c664(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1c8 [32];
  double **local_1a8;
  double *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c0 [48];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar7 = (**(code **)(*param_1 + 0x420))();
  FUN_145c688c4(uVar7,local_c0,1);
  local_d8 = (double *)0x0;
  dVar1 = (double)param_1[0x2e];
  dVar2 = (double)param_1[0x2f];
  dVar16 = dVar2 + dVar2;
  dVar3 = (double)param_1[0x30];
  dVar15 = dVar3 + dVar3;
  dVar4 = (double)param_1[0x31];
  uStack_d0 = 1;
  uStack_cc = 0;
  FUN_1403e3958(&local_d8,0);
  uVar5 = uStack_d0;
  *local_d8 = 1.0 - (dVar15 * dVar3 + dVar2 * dVar16);
  local_d8[1] = dVar16 * dVar1 + dVar4 * dVar15;
  local_d8[2] = dVar1 * dVar15 - dVar16 * dVar4;
  dVar1 = (double)param_1[0x2e];
  dVar2 = (double)param_1[0x2f];
  dVar3 = (double)param_1[0x30];
  dVar16 = dVar3 + dVar3;
  dVar4 = (double)param_1[0x31];
  lVar10 = (longlong)(int)uStack_d0;
  uStack_d0 = uStack_d0 + 1;
  if (uStack_cc < uStack_d0) {
    FUN_1403e3958(&local_d8,uVar5);
  }
  local_d8[lVar10 * 3] = (dVar2 + dVar2) * dVar1 - dVar4 * dVar16;
  local_d8[lVar10 * 3 + 1] = 1.0 - (dVar16 * dVar3 + dVar1 * (dVar1 + dVar1));
  local_d8[lVar10 * 3 + 2] = dVar2 * dVar16 + (dVar1 + dVar1) * dVar4;
  local_150[0]._0_1_ = 1;
  local_150[1] = 0;
  local_140 = (undefined4)DAT_14c8464e0;
  uStack_13c = DAT_14c8464e0._4_4_;
  uStack_138 = (undefined4)DAT_14c8464e8;
  uStack_134 = DAT_14c8464e8._4_4_;
  local_130 = DAT_14c8464f0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0x3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  local_178 = DAT_14c8464f0;
  local_188 = (undefined4)DAT_14c8464e0;
  uStack_184 = DAT_14c8464e0._4_4_;
  uStack_180 = (undefined4)DAT_14c8464e8;
  uStack_17c = DAT_14c8464e8._4_4_;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0x3ff0000000000000;
  local_198 = local_d8;
  local_190 = uStack_d0;
  uVar7 = (**(code **)(*param_1 + 0x420))(param_1);
  local_1a8 = &local_198;
  cVar6 = FUN_14833e30c(local_150,uVar7,local_c0,&local_188);
  if (cVar6 == '\0') goto LAB_14967ca06;
  puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar8 = FUN_14968dc68;
  puVar14 = puVar8 + 2;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  *(undefined1 *)(puVar8 + 2) = 1;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar8[4] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar8[5] = uVar7;
  puVar8[6] = DAT_14c8464f0;
  puVar8[9] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[10] = 0x3ff0000000000000;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0x3ff0000000000000;
  lVar10 = param_1[0x296];
  param_1[0x296] = (longlong)puVar14;
  if (lVar10 == 0) {
    plVar13 = puVar8 + 0xe;
    puVar9 = local_150;
    puVar11 = puVar14;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = puVar8 + 0xf;
    puVar12 = (undefined4 *)((longlong)puVar8 + 0x7c);
LAB_14967c9bf:
    *plVar13 = local_f0;
    local_f0 = 0;
    *(undefined4 *)puVar9 = (undefined4)uStack_e8;
    *puVar12 = uStack_e8._4_4_;
    uStack_e8 = 0;
  }
  else {
    (**(code **)(lVar10 + -0x10))(lVar10 + -0x10);
    puVar14 = (undefined8 *)param_1[0x296];
    puVar8 = local_150;
    puVar9 = puVar14;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    if (puVar14 != local_150) {
      plVar13 = puVar14 + 0xc;
      puVar9 = puVar14 + 0xd;
      puVar12 = (undefined4 *)((longlong)puVar14 + 0x6c);
      if (puVar14[0xc] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14967c9bf;
    }
  }
  puVar14[0xe] = local_e0;
  *(undefined1 *)(param_1 + 0x297) = 1;
LAB_14967ca06:
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967ca94 FUN_14967ca94 body=108 status=ok
// SIG undefined FUN_14967ca94(void)

void FUN_14967ca94(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_14595ef96();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = FUN_14595ef96();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        param_2 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014967cafd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x670))(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14967cb00 FUN_14967cb00 body=108 status=ok
// SIG undefined FUN_14967cb00(void)

void FUN_14967cb00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_14595ef96();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar2 = FUN_14595ef96();
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(param_2[2] + 0x38) < iVar1) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar1 * 8) != lVar2 + 0x30)) {
        param_2 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014967cb69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x670))(param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 14967cb6c FUN_14967cb6c body=45 status=ok
// SIG undefined FUN_14967cb6c(void)

longlong FUN_14967cb6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cb9e FUN_14967cb9e body=45 status=ok
// SIG undefined FUN_14967cb9e(void)

longlong FUN_14967cb9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461a9508(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cbd2 FUN_14967cbd2 body=48 status=ok
// SIG undefined FUN_14967cbd2(void)

longlong FUN_14967cbd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1461a9508(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cc0a FUN_14967cc0a body=48 status=ok
// SIG undefined FUN_14967cc0a(void)

longlong FUN_14967cc0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_1461a9508(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cc4e FUN_14967cc4e body=45 status=ok
// SIG undefined FUN_14967cc4e(void)

longlong FUN_14967cc4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d86eda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cc82 FUN_14967cc82 body=48 status=ok
// SIG undefined FUN_14967cc82(void)

longlong FUN_14967cc82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d86eda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ccba FUN_14967ccba body=48 status=ok
// SIG undefined FUN_14967ccba(void)

longlong FUN_14967ccba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145d86eda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ccea FUN_14967ccea body=48 status=ok
// SIG undefined FUN_14967ccea(void)

longlong FUN_14967ccea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_145d86eda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cd2e FUN_14967cd2e body=45 status=ok
// SIG undefined FUN_14967cd2e(void)

longlong FUN_14967cd2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d09836(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cd62 FUN_14967cd62 body=48 status=ok
// SIG undefined FUN_14967cd62(void)

longlong FUN_14967cd62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d09836(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cd9a FUN_14967cd9a body=48 status=ok
// SIG undefined FUN_14967cd9a(void)

longlong FUN_14967cd9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145d09836(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cdca FUN_14967cdca body=48 status=ok
// SIG undefined FUN_14967cdca(void)

longlong FUN_14967cdca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145d09836(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cdfa FUN_14967cdfa body=48 status=ok
// SIG undefined FUN_14967cdfa(void)

longlong FUN_14967cdfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x100;
  FUN_145d09836(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ce36 FUN_14967ce36 body=68 status=ok
// SIG undefined FUN_14967ce36(void)

undefined8 * FUN_14967ce36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd93990;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ce88 FUN_14967ce88 body=45 status=ok
// SIG undefined FUN_14967ce88(void)

longlong FUN_14967ce88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cebe FUN_14967cebe body=45 status=ok
// SIG undefined FUN_14967cebe(void)

longlong FUN_14967cebe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d5b106(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ceec FUN_14967ceec body=48 status=ok
// SIG undefined FUN_14967ceec(void)

longlong FUN_14967ceec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d5b106(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cf20 FUN_14967cf20 body=45 status=ok
// SIG undefined FUN_14967cf20(void)

longlong FUN_14967cf20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cf56 FUN_14967cf56 body=45 status=ok
// SIG undefined FUN_14967cf56(void)

longlong FUN_14967cf56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146113930(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cf8a FUN_14967cf8a body=48 status=ok
// SIG undefined FUN_14967cf8a(void)

longlong FUN_14967cf8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_146113930(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967cfc2 FUN_14967cfc2 body=48 status=ok
// SIG undefined FUN_14967cfc2(void)

longlong FUN_14967cfc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe8;
  FUN_146113930(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d006 FUN_14967d006 body=45 status=ok
// SIG undefined FUN_14967d006(void)

longlong FUN_14967d006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bc94be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d03a FUN_14967d03a body=48 status=ok
// SIG undefined FUN_14967d03a(void)

longlong FUN_14967d03a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145bc94be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d072 FUN_14967d072 body=48 status=ok
// SIG undefined FUN_14967d072(void)

longlong FUN_14967d072(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145bc94be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d0a2 FUN_14967d0a2 body=48 status=ok
// SIG undefined FUN_14967d0a2(void)

longlong FUN_14967d0a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145bc94be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d0d2 FUN_14967d0d2 body=48 status=ok
// SIG undefined FUN_14967d0d2(void)

longlong FUN_14967d0d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e8;
  FUN_145bc94be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d118 FUN_14967d118 body=45 status=ok
// SIG undefined FUN_14967d118(void)

longlong FUN_14967d118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457e5ac2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d146 FUN_14967d146 body=48 status=ok
// SIG undefined FUN_14967d146(void)

longlong FUN_14967d146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457e5ac2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d18a FUN_14967d18a body=30 status=ok
// SIG undefined FUN_14967d18a(void)

void FUN_14967d18a(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x410))();
                    /* WARNING: Could not recover jumptable at 0x00014967d1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa88))(plVar1);
  return;
}



// FUNCTION 14967d1a8 FUN_14967d1a8 body=30 status=ok
// SIG undefined FUN_14967d1a8(void)

void FUN_14967d1a8(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x410))();
                    /* WARNING: Could not recover jumptable at 0x00014967d1bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa88))(plVar1);
  return;
}



// FUNCTION 14967d22c FUN_14967d22c body=45 status=ok
// SIG undefined FUN_14967d22c(void)

longlong FUN_14967d22c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14598c266(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d25a FUN_14967d25a body=48 status=ok
// SIG undefined FUN_14967d25a(void)

longlong FUN_14967d25a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14598c266(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d28a FUN_14967d28a body=48 status=ok
// SIG undefined FUN_14967d28a(void)

longlong FUN_14967d28a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_14598c266(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d2ba FUN_14967d2ba body=48 status=ok
// SIG undefined FUN_14967d2ba(void)

longlong FUN_14967d2ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_14598c266(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d2ee FUN_14967d2ee body=45 status=ok
// SIG undefined FUN_14967d2ee(void)

longlong FUN_14967d2ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14614cc1a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d322 FUN_14967d322 body=48 status=ok
// SIG undefined FUN_14967d322(void)

longlong FUN_14967d322(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14614cc1a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d35a FUN_14967d35a body=48 status=ok
// SIG undefined FUN_14967d35a(void)

longlong FUN_14967d35a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_14614cc1a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d3aa FUN_14967d3aa body=45 status=ok
// SIG undefined FUN_14967d3aa(void)

longlong FUN_14967d3aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461b267e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d3de FUN_14967d3de body=48 status=ok
// SIG undefined FUN_14967d3de(void)

longlong FUN_14967d3de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1461b267e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d416 FUN_14967d416 body=48 status=ok
// SIG undefined FUN_14967d416(void)

longlong FUN_14967d416(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1461b267e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d446 FUN_14967d446 body=48 status=ok
// SIG undefined FUN_14967d446(void)

longlong FUN_14967d446(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1461b267e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d476 FUN_14967d476 body=48 status=ok
// SIG undefined FUN_14967d476(void)

longlong FUN_14967d476(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e8;
  FUN_1461b267e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d4ba FUN_14967d4ba body=45 status=ok
// SIG undefined FUN_14967d4ba(void)

longlong FUN_14967d4ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d4f0 FUN_14967d4f0 body=45 status=ok
// SIG undefined FUN_14967d4f0(void)

longlong FUN_14967d4f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ed24ca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d524 FUN_14967d524 body=48 status=ok
// SIG undefined FUN_14967d524(void)

longlong FUN_14967d524(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145ed24ca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d55c FUN_14967d55c body=48 status=ok
// SIG undefined FUN_14967d55c(void)

longlong FUN_14967d55c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145ed24ca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d5c6 FUN_14967d5c6 body=45 status=ok
// SIG undefined FUN_14967d5c6(void)

longlong FUN_14967d5c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1462036f0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d5fa FUN_14967d5fa body=48 status=ok
// SIG undefined FUN_14967d5fa(void)

longlong FUN_14967d5fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1462036f0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d632 FUN_14967d632 body=48 status=ok
// SIG undefined FUN_14967d632(void)

longlong FUN_14967d632(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1462036f0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d662 FUN_14967d662 body=48 status=ok
// SIG undefined FUN_14967d662(void)

longlong FUN_14967d662(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1462036f0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d692 FUN_14967d692 body=48 status=ok
// SIG undefined FUN_14967d692(void)

longlong FUN_14967d692(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xba0;
  FUN_1462036f0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d700 FUN_14967d700 body=45 status=ok
// SIG undefined FUN_14967d700(void)

longlong FUN_14967d700(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145820a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d734 FUN_14967d734 body=48 status=ok
// SIG undefined FUN_14967d734(void)

longlong FUN_14967d734(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145820a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d76c FUN_14967d76c body=48 status=ok
// SIG undefined FUN_14967d76c(void)

longlong FUN_14967d76c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145820a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d79c FUN_14967d79c body=48 status=ok
// SIG undefined FUN_14967d79c(void)

longlong FUN_14967d79c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145820a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d7cc FUN_14967d7cc body=48 status=ok
// SIG undefined FUN_14967d7cc(void)

longlong FUN_14967d7cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xba0;
  FUN_145820a32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967d830 FUN_14967d830 body=54 status=ok
// SIG undefined FUN_14967d830(void)

undefined1 FUN_14967d830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14967d92e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14967d88e FUN_14967d88e body=59 status=ok
// SIG undefined FUN_14967d88e(void)

undefined8 FUN_14967d88e(longlong *param_1)

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



// FUNCTION 14967d92e FUN_14967d92e body=91 status=ok
// SIG undefined FUN_14967d92e(void)

longlong * FUN_14967d92e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14967d98a FUN_14967d98a body=68 status=ok
// SIG undefined FUN_14967d98a(void)

void FUN_14967d98a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14967d9ce();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14967d9ce FUN_14967d9ce body=322 status=ok
// SIG undefined FUN_14967d9ce(void)

void FUN_14967d9ce(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14967db12 FUN_14967db12 body=181 status=ok
// SIG undefined FUN_14967db12(void)

longlong FUN_14967db12(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_14967dbaa;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14967dbc8(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_14967dbaa:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 14967dbc8 FUN_14967dbc8 body=275 status=ok
// SIG undefined FUN_14967dbc8(void)

undefined4 * FUN_14967dbc8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14967dcdc(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  cVar1 = FUN_14967ddc2(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14967deb4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967dcdc FUN_14967dcdc body=229 status=ok
// SIG undefined FUN_14967dcdc(void)

int * FUN_14967dcdc(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 14967ddc2 FUN_14967ddc2 body=127 status=ok
// SIG undefined FUN_14967ddc2(void)

undefined8 FUN_14967ddc2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14967de42(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14967de42 FUN_14967de42 body=114 status=ok
// SIG undefined FUN_14967de42(void)

void FUN_14967de42(longlong *param_1,int param_2)

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



// FUNCTION 14967deb4 FUN_14967deb4 body=422 status=ok
// SIG undefined FUN_14967deb4(void)

void FUN_14967deb4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 14967e05c FUN_14967e05c body=290 status=ok
// SIG undefined FUN_14967e05c(void)

longlong * FUN_14967e05c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14967e188 FUN_14967e188 body=147 status=ok
// SIG undefined FUN_14967e188(void)

void FUN_14967e188(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_e8 [40];
  undefined4 local_c0 [30];
  undefined8 local_48;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = param_1[1];
  local_c0[0] = param_2;
  cVar2 = (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((cVar2 == '\0') ||
     (FUN_1483b309a(local_c0,*(undefined8 *)(lVar1 + 0x1d0),param_2,param_3), local_28 != 1)) {
    local_48 = 0x7fefffffffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48);
  }
  return;
}



// FUNCTION 14967e21c FUN_14967e21c body=38 status=ok
// SIG undefined FUN_14967e21c(void)

undefined8 FUN_14967e21c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  FUN_146c14aac(*(undefined8 *)(*param_2 + 0x1d0),param_1,*param_3);
  return param_1;
}



// FUNCTION 14967e242 FUN_14967e242 body=86 status=ok
// SIG undefined FUN_14967e242(void)

void FUN_14967e242(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  do {
    bVar1 = FUN_14834b760(param_1,1);
    bVar2 = FUN_14834b916(param_1,1);
    bVar3 = FUN_14967e298(param_1);
    if ((byte)(bVar3 | bVar2 | bVar1) != 1) break;
    bVar5 = uVar4 < 0x19;
    uVar4 = uVar4 + 1;
  } while (bVar5);
  FUN_14967e298(param_1);
  return;
}



// FUNCTION 14967e298 FUN_14967e298 body=1113 status=ok
// SIG undefined FUN_14967e298(void)

ulonglong FUN_14967e298(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_188 [40];
  longlong *local_160;
  ulonglong local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined1 local_134 [4];
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [4];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar11 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  plVar1 = param_1 + 1;
  local_150 = param_1 + 3;
  local_160 = param_1;
  do {
    plVar7 = local_150;
    local_158 = uVar11;
    FUN_14068ded2(local_e8,0);
    local_108 = (longlong *)0x100000000;
    local_f8._0_4_ = 0xffffffff;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    iVar12 = 0;
    plStack_100 = plVar7;
    if ((int)param_1[6] != 0) {
      FUN_1449c0562(&local_108);
      iVar12 = (int)param_1[6];
    }
    plVar6 = local_160;
    local_118._0_4_ = (uint)local_f8;
    local_118._4_4_ = local_f8._4_4_;
    uStack_110 = CONCAT44(uStack_ec,uStack_f0);
    local_128 = local_108;
    plStack_120 = plStack_100;
    local_130 = plVar1;
    if ((local_f8._4_4_ != iVar12) || (plStack_100 != plVar7)) {
      do {
        uVar2 = *(uint *)(*local_130 + (longlong)local_118._4_4_ * 0xc);
        lVar4 = *(longlong *)(*(longlong *)(*plVar6 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
        uVar11 = (ulonglong)(uVar2 & 0x1ff);
        plStack_100 = (longlong *)
                      CONCAT44(plStack_100._4_4_,*(undefined4 *)(lVar4 + 8 + uVar11 * 0xc));
        local_108 = *(longlong **)(lVar4 + uVar11 * 0xc);
        FUN_1447cbafe(local_e8,local_134,&local_108,0);
        FUN_1447cbafe(local_e8,local_134,(longlong)&local_108 + 4,0);
        FUN_1447cbafe(local_e8,local_134,&plStack_100,0);
        local_118._0_4_ = (uint)local_118 & ~local_128._4_4_;
        FUN_1449c0562(&local_128);
      } while (local_130 != plVar1 || (plStack_120 != plVar7 || local_118._4_4_ != iVar12));
    }
    local_108 = (longlong *)&DAT_100000000;
    plStack_100 = local_e8 + 2;
    local_f8 = 0xffffffff;
    uStack_f0 = 0;
    if (local_c0 == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      iVar12 = local_c0;
    }
    param_1 = local_160;
    uStack_110 = CONCAT44(uStack_ec,uStack_f0);
    local_118 = local_f8;
    uVar8 = local_118;
    local_128 = local_108;
    plStack_120 = plStack_100;
    local_118._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    local_130 = local_e8;
    if ((local_118._4_4_ == iVar12) && (uVar11 = local_158, plStack_100 == local_e8 + 2)) break;
    bVar5 = true;
    iVar10 = local_118._4_4_;
    local_118 = uVar8;
    do {
      uVar3 = *(undefined4 *)(*local_130 + (longlong)iVar10 * 0xc);
      cVar9 = FUN_14967e6f2(param_1,uVar3);
      if (cVar9 != '\0') {
        local_108 = param_1;
        local_140 = &local_108;
        local_148 = &LAB_14967e940;
        FUN_146c03fd0(*param_1,uVar3,&local_148);
        bVar5 = false;
      }
      local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
      FUN_1449c0562(&local_128);
      iVar10 = local_118._4_4_;
    } while (local_130 != local_e8 || (plStack_120 != local_e8 + 2 || local_118._4_4_ != iVar12));
    uVar11 = CONCAT71((int7)(local_158 >> 8),(byte)local_158 | !bVar5);
    uVar8 = local_118;
  } while (!bVar5);
  local_118 = uVar8;
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 14967e6f2 FUN_14967e6f2 body=588 status=ok
// SIG undefined FUN_14967e6f2(void)

int FUN_14967e6f2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = *param_1 + 0xb8;
  iVar5 = 0;
  FUN_146be983e(&local_70,lVar10,param_2,0);
  if ((((local_70 != lVar10) || (local_68 != param_2)) || ((int)local_58 != -1)) ||
     (local_58._4_4_ != -1)) {
    lVar2 = local_70;
    iVar3 = local_68;
    do {
      uVar1 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_50 >> 9) * 8) + 8
               + (ulonglong)((local_50 & 0x1ff) << 4));
      uVar4 = 0;
      uVar6 = (uint)uVar1;
      if (uVar1 >> 0x20 == 0xffffffff) {
        uVar4 = 0;
        if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
          plVar7 = (longlong *)param_1[9];
          if ((longlong *)param_1[9] == (longlong *)0x0) {
            plVar7 = param_1 + 8;
          }
          iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[10] - 1U & uVar6) * 4);
          uVar4 = 0;
          if (iVar11 != -1) {
            do {
              if (*(uint *)(param_1[1] + (longlong)iVar11 * 0xc) == uVar6) {
                uVar4 = 1;
                break;
              }
              iVar11 = *(int *)(param_1[1] + (longlong)iVar11 * 0xc + 4);
            } while (iVar11 != -1);
          }
        }
      }
      else {
        uVar8 = 0;
        if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
          plVar7 = (longlong *)param_1[9];
          if ((longlong *)param_1[9] == (longlong *)0x0) {
            plVar7 = param_1 + 8;
          }
          uVar9 = (int)param_1[10] - 1;
          iVar11 = *(int *)((longlong)plVar7 + (ulonglong)(uVar9 & uVar6) * 4);
          uVar8 = 0;
          uVar4 = 0;
          if (iVar11 != -1) {
            do {
              if (*(uint *)(param_1[1] + (longlong)iVar11 * 0xc) == uVar6) {
                uVar4 = 1;
                goto LAB_14967e8ad;
              }
              iVar11 = *(int *)((longlong)iVar11 * 0xc + param_1[1] + 4);
            } while (iVar11 != -1);
            uVar4 = 0;
          }
LAB_14967e8ad:
          uVar6 = (uint)(uVar1 >> 0x20);
          iVar11 = *(int *)((longlong)plVar7 + (ulonglong)(uVar9 & uVar6) * 4);
          if (iVar11 != -1) {
            do {
              if (*(uint *)(param_1[1] + (longlong)iVar11 * 0xc) == uVar6) {
                uVar8 = 1;
                break;
              }
              iVar11 = *(int *)(param_1[1] + (longlong)iVar11 * 0xc + 4);
            } while (iVar11 != -1);
          }
        }
        uVar4 = uVar4 ^ uVar8;
      }
      if (local_60 == 0) {
        local_64 = 0xffffffff;
        local_58 = 0xffffffffffffffff;
        local_58._4_4_ = -1;
        local_58._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_70);
        lVar2 = local_70;
        iVar3 = local_68;
      }
      iVar5 = iVar5 + uVar4;
    } while (((lVar2 != lVar10) || (iVar3 != param_2)) ||
            (((int)local_58 != -1 || (local_58._4_4_ != -1))));
    iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),2 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14967e94e FUN_14967e94e body=25 status=ok
// SIG undefined FUN_14967e94e(void)

void FUN_14967e94e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014967e963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14967e968 FUN_14967e968 body=29 status=ok
// SIG undefined FUN_14967e968(void)

undefined8 FUN_14967e968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967e986 FUN_14967e986 body=132 status=ok
// SIG undefined FUN_14967e986(void)

void FUN_14967e986(longlong param_1,int param_2)

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



// FUNCTION 14967ea0c FUN_14967ea0c body=208 status=ok
// SIG undefined FUN_14967ea0c(void)

undefined4 * FUN_14967ea0c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_146c40eae(param_1 + 6,param_2 + 6);
  FUN_146c40f34(param_1 + 0xc,param_2 + 0xc);
  param_1[0x12] = param_2[0x12];
  FUN_14967eadc(param_1 + 0x14,param_2 + 0x14);
  FUN_146c00bee(param_1 + 0x1a,param_2 + 0x1a);
  FUN_145be27ca(param_1 + 0x36,param_2 + 0x36);
  FUN_14967eba8(param_1 + 0x4a,param_2 + 0x4a);
  FUN_14967ec30(param_1 + 0x50,param_2 + 0x50);
  if (param_1 != param_2) {
    FUN_14967ed2a(param_1 + 0x5a,param_2 + 0x5a);
    uVar1 = param_2[0x6f];
    uVar2 = param_2[0x70];
    uVar3 = param_2[0x71];
    param_1[0x6e] = param_2[0x6e];
    param_1[0x6f] = uVar1;
    param_1[0x70] = uVar2;
    param_1[0x71] = uVar3;
    *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
    FUN_145821290(param_2 + 0x5a);
  }
  return param_1;
}



// FUNCTION 14967eadc FUN_14967eadc body=203 status=ok
// SIG undefined FUN_14967eadc(void)

undefined4 * FUN_14967eadc(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  
  FUN_14967ec8a(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x6800);
  memset(_Dst,0,0x6800);
  lVar3 = 0x14;
  do {
    *(undefined4 *)((longlong)_Dst + lVar3 + -0x14) = 0xffffffff;
    *(undefined1 *)((longlong)_Dst + lVar3 + -0x10) = 0;
    *(undefined8 *)((longlong)_Dst + lVar3 + -0xc) = 0;
    *(undefined4 *)((longlong)_Dst + lVar3 + -4) = 0;
    puVar1 = (undefined4 *)((longlong)_Dst + lVar3);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((longlong)_Dst + lVar3 + 0x10);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    lVar3 = lVar3 + 0x34;
  } while (lVar3 != 0x6814);
  iVar2 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar2 + 1U) {
    FUN_1458483b0(param_2 + 1,iVar2);
  }
  *(void **)(param_2[1] + (longlong)iVar2 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14967eba8 FUN_14967eba8 body=136 status=ok
// SIG undefined FUN_14967eba8(void)

undefined4 * FUN_14967eba8(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  FUN_14967ecda(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_14584832c(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14967ec30 FUN_14967ec30 body=90 status=ok
// SIG undefined FUN_14967ec30(void)

undefined4 * FUN_14967ec30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0;
  }
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 14967ec8a FUN_14967ec8a body=79 status=ok
// SIG undefined FUN_14967ec8a(void)

longlong * FUN_14967ec8a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_1458210b4(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14967ecda FUN_14967ecda body=79 status=ok
// SIG undefined FUN_14967ecda(void)

longlong * FUN_14967ecda(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_145820f70(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}


