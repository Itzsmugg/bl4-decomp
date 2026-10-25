// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140094833 FUN_140094833 body=1201 status=ok
// SIG undefined FUN_140094833(void)

void FUN_140094833(ulonglong *param_1,float param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,longlong *param_12,
                  int param_13,undefined4 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  lVar8 = 0;
  iVar14 = 0;
  if (param_3 <= 0.0) {
    iVar14 = param_13;
  }
  if (0.0 < param_2) {
    iVar14 = 0;
  }
  lVar7 = FUN_144821ef4(param_1);
  FUN_144a98398(lVar7,*param_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11);
  if (*param_12 != 0) {
    lVar12 = (longlong)*(int *)(*param_12 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_12[1] + 8) + 0x50) + lVar12 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(*(longlong *)(param_12[1] + 8),lVar12,1);
    }
  }
  iVar5 = *(int *)(lVar7 + 0x30) + *(int *)(lVar7 + 0x20);
  iVar6 = iVar5 + *(int *)(lVar7 + 0x40);
  if (iVar6 != 0 && SCARRY4(iVar5,*(int *)(lVar7 + 0x40)) == iVar6 < 0) {
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 0xb;
    if ((undefined8 *)param_1[1] < puVar10) {
      FUN_140023dd8(param_1,0x60);
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar9 + 0xb;
    }
    *param_1 = (ulonglong)puVar10;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar9;
    param_1[6] = (ulonglong)(puVar9 + 1);
    uVar13 = *(undefined8 *)(lVar7 + 0x38);
    uVar11 = *(undefined4 *)(lVar7 + 0x40);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    uVar15 = *(undefined4 *)(lVar7 + 0x30);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    uVar16 = *(undefined4 *)(lVar7 + 0x20);
    uVar3 = *(undefined8 *)(lVar7 + 8);
    uVar17 = *(undefined4 *)(lVar7 + 0x10);
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_14a1e7fd8;
    puVar9[2] = lVar8;
    puVar9[3] = uVar3;
    *(undefined4 *)(puVar9 + 4) = uVar17;
    puVar9[5] = uVar2;
    *(undefined4 *)(puVar9 + 6) = uVar16;
    puVar9[7] = uVar1;
    *(undefined4 *)(puVar9 + 8) = uVar15;
    puVar9[9] = uVar13;
    *(undefined4 *)(puVar9 + 10) = uVar11;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined4 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined4 *)(lVar7 + 0x40) = 0;
  }
  uVar13 = DAT_14ca89240;
  if (iVar14 == 1) {
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 5;
    if ((undefined8 *)param_1[1] < puVar10) {
      FUN_140023dd8(param_1,0x30);
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar9 + 5;
    }
    *param_1 = (ulonglong)puVar10;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar9;
    param_1[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a1fb5a8;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9[3] = uVar13;
    *(undefined4 *)(puVar9 + 4) = 0;
    uVar4 = *param_1;
    uVar15 = 1;
    uVar16 = 6;
    uVar17 = 3;
    uVar11 = 6;
    uVar13 = DAT_14ca89258;
  }
  else {
    if (iVar14 == 2) {
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar9 + 5;
      if ((undefined8 *)param_1[1] < puVar10) {
        FUN_140023dd8(param_1,0x30);
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar9 + 5;
      }
      *param_1 = (ulonglong)puVar10;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar9;
      param_1[6] = (ulonglong)(puVar9 + 1);
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_14a1fb5a8;
      *(undefined4 *)(puVar9 + 2) = 0;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      uVar4 = *param_1;
      uVar15 = 0x500;
      uVar17 = 0x2b5;
      uVar13 = DAT_14ca35ac8;
    }
    else {
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar9 + 5;
      if ((undefined8 *)param_1[1] < puVar10) {
        FUN_140023dd8(param_1,0x30);
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar9 + 5;
      }
      *param_1 = (ulonglong)puVar10;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar9;
      param_1[6] = (ulonglong)(puVar9 + 1);
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_14a1fb5a8;
      *(undefined4 *)(puVar9 + 2) = 0;
      puVar9[3] = uVar13;
      *(undefined4 *)(puVar9 + 4) = 0;
      uVar4 = *param_1;
      uVar15 = 2;
      uVar17 = 4;
      uVar13 = DAT_14ca89258;
    }
    uVar16 = 0;
    uVar11 = 0;
  }
  puVar9 = (undefined8 *)(uVar4 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar9 + 6;
  if ((undefined8 *)param_1[1] < puVar10) {
    FUN_140023dd8(param_1,0x38);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 6;
    uVar11 = uVar16;
  }
  *param_1 = (ulonglong)puVar10;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb5b0;
  puVar9[2] = uVar13;
  puVar9[3] = 0;
  *(undefined4 *)(puVar9 + 4) = uVar17;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar11;
  *(undefined4 *)(puVar9 + 5) = uVar15;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = param_14;
  return;
}



// FUNCTION 140094ce4 FUN_140094ce4 body=1211 status=ok
// SIG undefined FUN_140094ce4(void)

void FUN_140094ce4(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_c8 [32];
  float local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  if ((param_1[0x1e] != 0) && (lVar4 = (**(code **)(*param_1 + 0x1f8))(param_1), lVar4 != 0)) {
    FUN_1448830cc(param_1[0x1e] + 0x8e8,param_1 + 0x1d,lVar4);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cacbb10 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1463a1b5a;
      local_78 = &LAB_147903fa7;
      local_80 = &LAB_1459b1fdd;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 6.83834e-43;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if (((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cacbb10 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) !=
         DAT_14cacbb10 + 0x30)) && (plVar5[8] != 0)) {
      fVar7 = (float)(**(code **)(*param_1 + 0x1c0))(param_1);
      fVar8 = (float)(**(code **)(*param_1 + 0x1b8))(param_1);
      fVar9 = *(float *)(param_2 + 0x28);
      fVar7 = (float)(~-(uint)(ABS(fVar8) <= 1e-08) & (uint)(fVar7 / fVar8));
      pcVar6 = (char *)(**(code **)(*param_1 + 0x1c8))(param_1);
      if (*pcVar6 == '\x01') {
        fVar8 = *(float *)(pcVar6 + 8) - *(float *)(pcVar6 + 4);
        if (ABS(fVar8) <= 1e-08) {
          fVar8 = (float)(-(uint)(*(float *)(pcVar6 + 8) <= fVar7) & 0x3f800000);
        }
        else {
          fVar8 = (fVar7 - *(float *)(pcVar6 + 4)) / fVar8;
        }
        fVar7 = (*(float *)(pcVar6 + 0x10) - *(float *)(pcVar6 + 0xc)) * fVar8 +
                *(float *)(pcVar6 + 0xc);
      }
      fVar7 = fVar7 * *(float *)(pcVar6 + 0x14) + *(float *)(pcVar6 + 0x18);
      if (pcVar6[1] == '\x01') {
        if (*(float *)(pcVar6 + 0x20) <= fVar7) {
          fVar7 = *(float *)(pcVar6 + 0x20);
        }
        if (fVar7 <= *(float *)(pcVar6 + 0x1c)) {
          fVar7 = *(float *)(pcVar6 + 0x1c);
        }
      }
      if (pcVar6[2] == '\x01') {
        if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
          fVar8 = *(float *)(param_1 + 8);
          if ((0.0 < *(float *)(pcVar6 + (ulonglong)(fVar7 < fVar8) * 4 + 0x24)) &&
             (fVar10 = fVar7 - fVar8, 1e-08 <= fVar10 * fVar10)) {
            fVar9 = fVar9 * *(float *)(pcVar6 + (ulonglong)(fVar7 < fVar8) * 4 + 0x24);
            if (1.0 <= fVar9) {
              fVar9 = 1.0;
            }
            if (fVar9 <= 0.0) {
              fVar9 = 0.0;
            }
            fVar7 = fVar8 + fVar10 * fVar9;
          }
        }
        *(float *)(param_1 + 8) = fVar7;
      }
      *(undefined1 *)((longlong)param_1 + 0x44) = 1;
      if (param_1[0x1f] != 0) {
        fVar9 = *(float *)(plVar5 + 0x3f);
        fVar8 = *(float *)(param_1[0x1f] + 0x8c8);
        if ((char)param_1[0x15] == '\x01') {
          if (0.0 < fVar9) {
            fVar8 = fVar8 / fVar9;
            fVar7 = (float)(~-(uint)(0.0 < fVar7) & (uint)-fVar8 |
                           (uint)fVar8 & -(uint)(0.0 < fVar7));
            fVar9 = fVar7;
            if (2.0 <= fVar7) {
              fVar9 = 2.0;
            }
            auVar11._4_4_ = 0x80000000;
            auVar11._0_4_ = fVar9;
            auVar11._8_4_ = 0x80000000;
            auVar11._12_4_ = 0x80000000;
            if (fVar9 <= 0.0) {
              auVar1._12_4_ = 0;
              auVar1._0_12_ = auVar11._4_12_;
              auVar11 = auVar1 << 0x20;
            }
            *(int *)(param_1 + 0x1c) = auVar11._0_4_;
            fVar7 = (float)(~-(uint)(0.0 < fVar9) & 0x3f800000 |
                           (uint)(fVar7 / fVar9) & -(uint)(0.0 < fVar9));
          }
        }
        else if (*(float *)(param_1 + 0x14) <= 0.0) {
          if ((0.0 < fVar9) && (*(char *)((longlong)param_1 + 0xa4) == '\x01')) {
            fVar8 = fVar8 / fVar9;
            fVar7 = (float)(~-(uint)(0.0 < fVar7) & (uint)-fVar8 |
                           (uint)fVar8 & -(uint)(0.0 < fVar7));
          }
        }
        else {
          fVar9 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
          fVar7 = (float)(~-(uint)(0.0 < fVar7) & (uint)-(fVar9 / *(float *)(param_1 + 0x14)) |
                         (uint)(fVar9 / *(float *)(param_1 + 0x14)) & -(uint)(0.0 < fVar7));
        }
      }
      fVar9 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      fVar8 = (fVar9 * 3.0) / *(float *)(param_2 + 0x28);
      fVar9 = 1.0;
      if (1.0 <= fVar8) {
        fVar9 = fVar8;
      }
      if (fVar9 < ABS(fVar7)) {
        fVar7 = (float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000) * fVar9;
      }
      fVar8 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      fVar9 = *(float *)((longlong)param_1 + 0x2c);
      if (fVar8 <= *(float *)((longlong)param_1 + 0x2c)) {
        fVar9 = fVar8;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x2c) = fVar9;
      uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
      local_a0 = local_a0 & 0xffffff00;
      local_a8 = fVar7;
      FUN_1447a9f5a(param_1,param_2,plVar5,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400951a0 FUN_1400951a0 body=796 status=ok
// SIG undefined FUN_1400951a0(void)

void FUN_1400951a0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  float local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14477dc2a();
  FUN_14477dadc(uVar2,param_2);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cacbb10 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1463a1b5a;
      local_78 = &LAB_147903fa7;
      local_80 = &LAB_1459b1fdd;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 6.83834e-43;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if (((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14cacbb10 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) !=
         DAT_14cacbb10 + 0x30)) && (plVar3[8] != 0)) {
      fVar5 = (float)(**(code **)(*param_1 + 0x1c0))(param_1);
      fVar6 = (float)(**(code **)(*param_1 + 0x1b8))(param_1);
      fVar7 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
      fVar8 = *(float *)((longlong)param_1 + 0x2c);
      if (fVar7 <= *(float *)((longlong)param_1 + 0x2c)) {
        fVar8 = fVar7;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x2c) = fVar8;
      fVar8 = *(float *)(param_2 + 0x28);
      fVar5 = (float)(~-(uint)(ABS(fVar6) <= 1e-08) & (uint)(fVar5 / fVar6));
      pcVar4 = (char *)(**(code **)(*param_1 + 0x1c8))(param_1);
      if (*pcVar4 == '\x01') {
        fVar6 = *(float *)(pcVar4 + 8) - *(float *)(pcVar4 + 4);
        if (ABS(fVar6) <= 1e-08) {
          fVar6 = (float)(-(uint)(*(float *)(pcVar4 + 8) <= fVar5) & 0x3f800000);
        }
        else {
          fVar6 = (fVar5 - *(float *)(pcVar4 + 4)) / fVar6;
        }
        fVar5 = (*(float *)(pcVar4 + 0x10) - *(float *)(pcVar4 + 0xc)) * fVar6 +
                *(float *)(pcVar4 + 0xc);
      }
      fVar5 = fVar5 * *(float *)(pcVar4 + 0x14) + *(float *)(pcVar4 + 0x18);
      if (pcVar4[1] == '\x01') {
        if (*(float *)(pcVar4 + 0x20) <= fVar5) {
          fVar5 = *(float *)(pcVar4 + 0x20);
        }
        if (fVar5 <= *(float *)(pcVar4 + 0x1c)) {
          fVar5 = *(float *)(pcVar4 + 0x1c);
        }
      }
      if (pcVar4[2] == '\x01') {
        if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
          fVar6 = *(float *)(param_1 + 8);
          if ((0.0 < *(float *)(pcVar4 + (ulonglong)(fVar5 < fVar6) * 4 + 0x24)) &&
             (fVar7 = fVar5 - fVar6, 1e-08 <= fVar7 * fVar7)) {
            fVar8 = fVar8 * *(float *)(pcVar4 + (ulonglong)(fVar5 < fVar6) * 4 + 0x24);
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            fVar5 = fVar6 + fVar7 * fVar8;
          }
        }
        *(float *)(param_1 + 8) = fVar5;
      }
      *(undefined1 *)((longlong)param_1 + 0x44) = 1;
      uVar1 = (**(code **)(*param_1 + 0x120))(param_1);
      local_a0 = local_a0 & 0xffffff00;
      local_a8 = fVar5;
      FUN_1447a9f5a(param_1,param_2,plVar3,uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400954cc FUN_1400954cc body=158 status=ok
// SIG undefined FUN_1400954cc(void)

undefined8 * FUN_1400954cc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 *_Dst;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar3 = &PTR_FUN_14a794948;
  puVar3[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  pvVar2 = *(void **)(param_1 + 0x28);
  *(int *)(puVar3 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x34) = 4;
  }
  else {
    _Src = (void *)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      _Src = pvVar2;
    }
    FUN_1447ab012(puVar3 + 1,iVar1,0);
    _Dst = puVar3 + 1;
    if ((undefined8 *)puVar3[5] != (undefined8 *)0x0) {
      _Dst = (undefined8 *)puVar3[5];
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 3);
  }
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 14009556a FUN_14009556a body=222 status=ok
// SIG undefined FUN_14009556a(void)

undefined8 * FUN_14009556a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  *puVar4 = &PTR_FUN_14a7df818;
  *(undefined1 *)(puVar4 + 1) = 1;
  *(undefined4 *)(puVar4 + 2) = 0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)((longlong)puVar4 + 0xc) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)(puVar4 + 2) = iVar3;
  *(bool *)(puVar4 + 1) = lVar2 != 0;
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 140095656 FUN_140095656 body=138 status=ok
// SIG undefined FUN_140095656(void)

void FUN_140095656(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_140095656(lVar2);
        FUN_1400020a8(lVar2);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1400956e0(plVar1);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400956e0 FUN_1400956e0 body=48 status=ok
// SIG undefined FUN_1400956e0(void)

void FUN_1400956e0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 140095710 FUN_140095710 body=92 status=ok
// SIG undefined FUN_140095710(void)

void FUN_140095710(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140095778 FUN_140095778 body=1098 status=ok
// SIG undefined FUN_140095778(void)

void FUN_140095778(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_cf8 [32];
  undefined8 local_cd8;
  LARGE_INTEGER *local_cd0;
  uint local_cc4;
  longlong *local_cc0;
  undefined8 *local_cb8;
  longlong local_cb0;
  LARGE_INTEGER local_ca8;
  undefined8 uStack_ca0;
  undefined1 local_c90 [1024];
  undefined1 *local_890;
  undefined8 local_888;
  undefined1 local_880 [1024];
  undefined1 *local_480;
  undefined8 local_478;
  undefined1 local_470 [1024];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_cf8;
  if (*(int *)*param_1 != *(int *)param_1[1]) {
    lVar13 = *(longlong *)(param_1[2] + 0x400);
    if (lVar13 == 0) {
      lVar13 = param_1[2];
    }
    local_cc0 = *(longlong **)(*(longlong *)(lVar13 + (longlong)*(int *)*param_1 * 8) + 8);
    local_70 = (undefined1 *)0x0;
    local_68 = 0x8000000000;
    local_480 = (undefined1 *)0x0;
    local_478 = 0x8000000000;
    local_890 = (undefined1 *)0x0;
    local_888 = 0x8000000000;
    QueryPerformanceCounter(&local_ca8);
    uVar3 = *(uint *)*param_1;
    if (uVar3 < *(uint *)param_1[1]) {
      local_cb8 = param_1;
      do {
        lVar13 = *(longlong *)(param_1[2] + 0x400);
        if (lVar13 == 0) {
          lVar13 = param_1[2];
        }
        lVar13 = *(longlong *)(lVar13 + (longlong)(int)uVar3 * 8);
        iVar1 = *(int *)(lVar13 + 0x228);
        if ((longlong)iVar1 != 0) {
          lVar8 = *(longlong *)(lVar13 + 0x220);
          lVar14 = 0;
          local_cc4 = uVar3;
          local_cb0 = lVar13;
          do {
            uVar15 = local_478;
            lVar13 = *(longlong *)(lVar8 + lVar14);
            uVar4 = *(undefined8 *)(lVar13 + 0x18);
            lVar12 = (longlong)(int)local_478;
            uVar3 = (int)local_478 + 1;
            local_478 = CONCAT44(local_478._4_4_,uVar3);
            if (local_478._4_4_ < uVar3) {
              FUN_147382dbe(local_880,uVar15 & 0xffffffff);
            }
            puVar5 = local_480;
            if (local_480 == (undefined1 *)0x0) {
              puVar5 = local_880;
            }
            *(undefined8 *)(puVar5 + lVar12 * 8) = uVar4;
            uVar4 = FUN_144ac4728(lVar13);
            uVar15 = local_888;
            lVar13 = (longlong)(int)local_888;
            uVar3 = (int)local_888 + 1;
            local_888 = CONCAT44(local_888._4_4_,uVar3);
            if (local_888._4_4_ < uVar3) {
              FUN_147382ecc(local_c90,uVar15 & 0xffffffff);
            }
            lVar12 = local_cb0;
            param_1 = local_cb8;
            uVar3 = local_cc4;
            puVar5 = local_890;
            if (local_890 == (undefined1 *)0x0) {
              puVar5 = local_c90;
            }
            *(undefined8 *)(puVar5 + lVar13 * 8) = uVar4;
            uVar15 = local_68;
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar1 * 8 != lVar14);
          uVar11 = *(uint *)(local_cb0 + 0x228);
          if ((longlong)(int)uVar11 != 0) {
            iVar1 = (int)local_68;
            lVar13 = (longlong)(int)local_68;
            local_68 = CONCAT44(local_68._4_4_,uVar11 + (int)local_68);
            if ((uint)(local_68._4_4_ - iVar1) < uVar11) {
              FUN_147382fda(local_470,uVar15 & 0xffffffff);
            }
            puVar5 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar5 = local_470;
            }
            memmove(puVar5 + lVar13 * 8,*(void **)(lVar12 + 0x220),(longlong)(int)uVar11 << 3);
            *(undefined4 *)(lVar12 + 0x228) = 0;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)param_1[1]);
    }
    plVar2 = local_cc0;
    iVar1 = (int)local_cc0[1];
    uVar3 = DAT_14c760bc4;
    if ((((iVar1 == 2) || (uVar3 = DAT_14c760bc0, iVar1 == 1)) ||
        (uVar3 = DAT_14c760bbc, uVar11 = 0x7fffffff, iVar1 == 0)) && (uVar11 = 1, 1 < (int)uVar3)) {
      uVar11 = uVar3;
    }
    iVar1 = (int)local_478;
    if (0 < (int)local_478) {
      iVar7 = 0;
      do {
        uVar6 = iVar1 - iVar7;
        uVar3 = uVar11;
        if ((int)uVar6 < (int)uVar11) {
          uVar3 = uVar6;
        }
        uVar15 = (ulonglong)uVar3;
        if (0 < DAT_14c760b84) {
          if ((int)uVar6 < 1) {
            uVar15 = 0;
          }
          else {
            puVar5 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar5 = local_470;
            }
            iVar9 = 0;
            uVar10 = 0;
            do {
              uVar15 = uVar10 + 1;
              if (uVar3 <= uVar15) break;
              iVar9 = iVar9 + *(int *)(*(longlong *)(puVar5 + uVar10 * 8 + (longlong)iVar7 * 8) +
                                      0x1c0);
              uVar10 = uVar15;
            } while (iVar9 < DAT_14c760b84);
          }
        }
        puVar5 = local_480;
        if (local_480 == (undefined1 *)0x0) {
          puVar5 = local_880;
        }
        if (DAT_14c760b88 == '\x01') {
          local_cd8 = CONCAT44(local_cd8._4_4_,(int)uVar15);
          iVar9 = FUN_1447858d2(*plVar2 + 0x90,plVar2[2]);
          if (iVar9 < 0) {
            local_ca8.QuadPart = 0;
            uStack_ca0 = 0;
            local_cd0 = &local_ca8;
            local_cd8 = 0;
            FUN_145763094(iVar9,
                          "Device->GetResidencyManager().ExecuteCommandLists( D3DCommandQueue, D3DCommandLists.GetData(), ResidencySets.GetData(), D3DCommandLists.Num() )"
                          ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp");
          }
        }
        else {
          (**(code **)(*(longlong *)plVar2[2] + 0x50))
                    ((longlong *)plVar2[2],uVar15 & 0xffffffff,puVar5 + (longlong)iVar7 * 8);
        }
        iVar7 = iVar7 + (int)uVar15;
      } while (iVar7 < iVar1);
    }
    puVar5 = local_470;
    if (local_70 != (undefined1 *)0x0) {
      puVar5 = local_70;
    }
    lVar13 = (longlong)(int)local_68;
    if (lVar13 != 0) {
      lVar8 = 0;
      do {
        FUN_144ad4bfa(**(undefined8 **)(puVar5 + lVar8));
        lVar8 = lVar8 + 8;
      } while (lVar13 * 8 != lVar8);
    }
    *(undefined4 *)*param_1 = *(undefined4 *)param_1[1];
    if (local_890 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_480 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_cf8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140095bc4 FUN_140095bc4 body=4758 status=ok
// SIG undefined FUN_140095bc4(void)

void FUN_140095bc4(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  void *_Src;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  BOOL BVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  uint *puVar14;
  void *_Dst;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  int iVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  uint uVar31;
  undefined4 uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  LPCRITICAL_SECTION p_Var36;
  ushort uVar37;
  uint uVar38;
  bool bVar39;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  uint *local_250;
  undefined4 local_248;
  undefined1 *local_240;
  longlong local_238;
  undefined8 *local_230;
  undefined4 local_228;
  longlong local_218;
  uint *local_210;
  longlong *local_208;
  uint local_1fc;
  uint local_1f8;
  undefined4 local_1f4;
  ulonglong local_1f0;
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  uint local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  uint local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  ulonglong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined1 local_130 [192];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  iVar25 = *(int *)(param_1 + 0x58);
  uVar3 = *(ushort *)(param_1 + 0x76);
  uVar37 = 1;
  if (iVar25 != 4) {
    uVar37 = *(ushort *)(param_1 + 0x74);
  }
  local_194 = (uint)uVar3;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x1000000000;
  local_218 = param_1;
  if ((local_194 != 0) && (local_68 = CONCAT44(0x10,(uint)uVar3), 0x10 < uVar3)) {
    FUN_147383f3e(local_130,0);
  }
  local_1d8 = *(longlong *)(*(longlong *)(local_218 + 0x10) + 0x10);
  local_1d0 = *(longlong **)(local_1d8 + 8);
  local_240 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    local_240 = local_130;
  }
  local_250 = &local_194;
  local_258 = &local_190;
  local_248 = 0;
  (**(code **)(*local_1d0 + 0x150))
            (local_1d0,*(undefined8 *)(local_218 + 0x20),&local_170,&local_180);
  uVar31 = local_170;
  lVar24 = DAT_14ca77060;
  if (iVar25 == 1) {
    local_180 = CONCAT71(local_180._1_7_,1);
  }
  iVar27 = local_180._4_4_;
  uVar23 = (ulonglong)local_170 * 0x10000;
  if (uVar23 <= param_3) {
    param_3 = uVar23;
  }
  iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_208 = param_2;
  if (iVar21 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar39 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
      if (iVar21 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar39 = DVar10 == DVar11;
      }
      else {
        bVar39 = false;
      }
    }
    uVar12 = (ulonglong)(bVar39 ^ 1);
  }
  local_1f0 = (longlong)*(int *)(lVar24 + uVar12 * 4) * 0x100000;
  uVar12 = (uVar23 + local_1f0) - 1;
  uVar23 = uVar12 / local_1f0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar23 & 0xffffffff,uVar12 % local_1f0);
  }
  if (*(int *)(*(longlong *)(local_218 + 0xe0) + 0xc) < (int)uVar23) {
    FUN_14631a362(*(longlong *)(local_218 + 0xe0),uVar23 & 0xffffffff);
  }
  local_1f4 = 1;
  local_1f8 = 1;
  if (DAT_14ca81480 == 0) {
    local_1f4 = *(undefined4 *)(local_218 + 0x18);
    local_1f8 = *(uint *)(local_218 + 0x1c);
  }
  local_1fc = *(uint *)(local_218 + 0x88);
  local_1e0 = *(undefined4 *)(*(longlong *)(local_218 + 0x10) + 8);
  uVar26 = local_170;
  if (iVar25 != 1) {
    uVar26 = (uVar31 - iVar27 * (uint)uVar37) / (uint)uVar37;
  }
  local_1f0 = local_1f0 >> 0x10;
  local_1e8 = (void *)CONCAT44(local_1e8._4_4_,uVar26 + iVar27);
  local_210 = (uint *)(param_3 + 0xffff >> 0x10);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  puVar13 = *(ulonglong **)(local_218 + 0xe0);
  uVar31 = (uint)puVar13[6];
  uVar26 = (uint)(param_3 + 0xffff >> 0x10);
  if (uVar26 < uVar31) {
    do {
      local_1f0 = *puVar13;
      lVar24 = (longlong)((int)puVar13[1] + -1);
      uVar26 = (*(int *)((longlong)puVar13 + 0x34) -
               *(int *)(*(longlong *)(local_1f0 + lVar24 * 8) + 0x3a)) + uVar31;
      uVar23 = (ulonglong)uVar26;
      if (uVar26 < (uint)local_210) {
        uVar23 = (ulonglong)local_210 & 0xffffffff;
      }
      iVar25 = uVar31 - (int)uVar23;
      puVar22 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar22 = local_130;
      }
      uVar31 = 0xffffffff;
      uVar38 = 0;
      lVar35 = 0;
      iVar27 = 0;
      do {
        iVar28 = iVar27;
        lVar18 = lVar35;
        iVar21 = (int)(uVar23 / ((ulonglong)local_1e8 & 0xffffffff));
        if ((ulonglong)((uint)(byte)local_180 * 4) * 3 == lVar18) {
          iVar28 = (int)local_68 * iVar21 + (uint)(byte)local_180;
          goto LAB_140095f64;
        }
        uVar38 = uVar38 + (uint)*(ushort *)(puVar22 + lVar18 + 6) *
                          (uint)*(ushort *)(puVar22 + lVar18 + 4) * *(int *)(puVar22 + lVar18);
        uVar31 = uVar31 + 1;
        uVar17 = (uint)(uVar23 % ((ulonglong)local_1e8 & 0xffffffff));
        lVar35 = lVar18 + 0xc;
        iVar27 = iVar28 + 1;
      } while (uVar38 <= uVar17);
      iVar28 = (int)local_68 * iVar21 + iVar28;
      if (uVar31 < (byte)local_180) {
        uVar38 = *(uint *)(puVar22 + lVar18);
        uVar17 = uVar17 - *(int *)(puVar22 + lVar18 + 8);
        uVar31 = uVar17 % uVar38;
        uVar32 = (undefined4)
                 (((ulonglong)uVar17 / (ulonglong)uVar38) %
                 (ulonglong)(uint)*(ushort *)(puVar22 + lVar18 + 4));
        uVar17 = uVar17 / (uVar38 * *(ushort *)(puVar22 + lVar18 + 4));
      }
      else {
LAB_140095f64:
        uVar31 = 0;
        uVar32 = 0;
        uVar17 = 0;
      }
      lVar35 = (longlong)(int)uStack_1a0;
      uVar38 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar38);
      if (uStack_1a0._4_4_ < uVar38) {
        FUN_14178c44c(&local_1a8);
      }
      lVar35 = lVar35 * 0x38;
      *(undefined4 *)(local_1a8 + lVar35) = 1;
      *(uint *)(local_1a8 + 4 + lVar35) = uVar31;
      *(undefined4 *)(local_1a8 + 8 + lVar35) = uVar32;
      *(uint *)(local_1a8 + 0xc + lVar35) = uVar17;
      *(int *)(local_1a8 + 0x10 + lVar35) = iVar28;
      *(int *)(local_1a8 + 0x14 + lVar35) = iVar25;
      *(undefined4 *)(local_1a8 + 0x18 + lVar35) = 0;
      *(undefined8 *)(local_1a8 + 0x1c + lVar35) = 0;
      *(undefined8 *)(local_1a8 + 0x28 + lVar35) = 0;
      *(undefined4 *)(local_1a8 + 0x30 + lVar35) = 0;
      if (uVar26 < (uint)local_210) {
        piVar1 = (int *)(*(longlong *)(local_218 + 0xe0) + 0x34);
        *piVar1 = *piVar1 + iVar25;
        lVar24 = local_218;
      }
      else {
        local_160 = *(ulonglong *)(local_1f0 + lVar24 * 8);
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
        FUN_140f13fea(DAT_14ca77418,&local_160);
        plVar30 = *(longlong **)(local_218 + 0xe0);
        puVar15 = *(undefined8 **)(*plVar30 + -8 + (longlong)(int)plVar30[1] * 8);
        *(undefined8 *)(*plVar30 + -8 + (longlong)(int)plVar30[1] * 8) = 0;
        FUN_14738405e(plVar30,(int)plVar30[1] + -1);
        FUN_145d38c48(plVar30);
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
        lVar24 = local_218;
        lVar35 = *(longlong *)(local_218 + 0xe0);
        iVar21 = *(int *)(lVar35 + 0x28) + -1;
        iVar27 = *(int *)(*(longlong *)(lVar35 + 0x20) + (longlong)iVar21 * 4);
        *(int *)(lVar35 + 0x28) = iVar21;
        FUN_14479f406(lVar35 + 0x20);
        for (; iVar27 != 0; iVar27 = iVar27 + -1) {
          lVar35 = *(longlong *)(lVar24 + 0xe0);
          piVar1 = (int *)(lVar35 + 0x18);
          *piVar1 = *piVar1 + -1;
          FUN_145d49762(lVar35 + 0x10);
        }
        *(undefined4 *)(*(longlong *)(lVar24 + 0xe0) + 0x34) = 0;
      }
      piVar1 = (int *)(*(longlong *)(lVar24 + 0xe0) + 0x30);
      *piVar1 = *piVar1 - iVar25;
      puVar13 = *(ulonglong **)(lVar24 + 0xe0);
      uVar31 = (uint)puVar13[6];
    } while ((uint)local_210 < uVar31);
  }
  else {
    lVar24 = local_218;
    if (uVar31 < uVar26) {
      local_1dc = 0xc0;
      if (iVar25 != 1) {
        local_1dc = (uint)((local_1fc & 3) != 0) * 0x40 + 0x44;
      }
      do {
        lVar24 = local_218;
        uVar31 = (int)local_210 - uVar31;
        local_168 = (undefined8 *)0x0;
        uVar26 = *(uint *)((longlong)puVar13 + 0x34);
        if (uVar26 == 0) {
          if ((uint)local_1f0 < uVar31) {
            uVar31 = (uint)local_1f0;
          }
          local_160 = (ulonglong)(uVar31 << 0x10);
          uStack_140 = 0x10000;
          local_138 = (ulonglong)local_1dc;
          local_158 = 1;
          local_150 = 0;
          local_14c = local_1f4;
          local_148 = (ulonglong)local_1f8;
          iVar25 = (**(code **)(*local_1d0 + 0xe0))(local_1d0,&local_160,&DAT_14a349268,&local_168);
          if (iVar25 < 0) {
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_250 = (uint *)&local_1c8;
            local_258 = (undefined8 *)0x0;
            FUN_145763094(iVar25,"D3DDevice->CreateHeap(&NewHeapDesc, IID_PPV_ARGS(&D3DHeap))",
                          ".\\Runtime/D3D12RHI/Private/D3D12Resources.cpp",0x1e0);
          }
          if ((local_1fc & 7) != 0) {
            FUN_141032dd0(local_1d8,local_168,0xa0010000,local_1e0);
          }
          puVar15 = (undefined8 *)FUN_14001cc68(0x88,0x10);
          uVar32 = *(undefined4 *)(lVar24 + 0x1c);
          puVar4 = *(undefined4 **)(lVar24 + 0x10);
          *puVar15 = &PTR_FUN_149e002e8;
          *(undefined4 *)(puVar15 + 1) = 0;
          puVar15[2] = puVar4;
          *(undefined4 *)(puVar15 + 3) = *puVar4;
          *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar32;
          *puVar15 = &PTR_FUN_14a34ce88;
          puVar15[4] = 0;
          puVar15[5] = 0;
          *(undefined1 *)(puVar15 + 6) = 1;
          puVar15[0xd] = 0;
          puVar15[0xe] = 0;
          *(undefined4 *)((longlong)puVar15 + 0x7c) = 1;
          *(undefined2 *)(puVar15 + 0x10) = 0x100;
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
            UNLOCK();
          }
          local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffffffffff00);
          FUN_141033122(puVar15,local_168,L"ReservedResourceBackingHeap",1);
          FUN_1405e2cd8(puVar15);
          bVar2 = *(byte *)((longlong)puVar15 + 0x81);
          lVar35 = *(longlong *)(lVar24 + 0xe0);
          puVar29 = puVar15 + 0xe;
          if (bVar2 == 0) {
            puVar29 = (undefined8 *)0x0;
          }
          if (bVar2 != 0) {
            iVar25 = *(int *)(lVar35 + 0x18);
            *(uint *)(lVar35 + 0x18) = iVar25 + (uint)bVar2;
            if ((uint)(*(int *)(lVar35 + 0x1c) - iVar25) < (uint)bVar2) {
              FUN_14178c5be((longlong *)(lVar35 + 0x10));
            }
            *(undefined8 *)(*(longlong *)(lVar35 + 0x10) + (longlong)iVar25 * 8) = *puVar29;
            lVar35 = *(longlong *)(lVar24 + 0xe0);
          }
          iVar25 = *(int *)(lVar35 + 0x28);
          uVar26 = iVar25 + 1;
          *(uint *)(lVar35 + 0x28) = uVar26;
          if (*(uint *)(lVar35 + 0x2c) < uVar26) {
            FUN_1446f48e2((longlong *)(lVar35 + 0x20));
          }
          *(uint *)(*(longlong *)(lVar35 + 0x20) + (longlong)iVar25 * 4) = (uint)bVar2;
          plVar30 = *(longlong **)(lVar24 + 0xe0);
          lVar35 = plVar30[1];
          uVar26 = (int)lVar35 + 1;
          *(uint *)(plVar30 + 1) = uVar26;
          if (*(uint *)((longlong)plVar30 + 0xc) < uVar26) {
            FUN_1473840be(plVar30);
          }
          *(undefined8 **)(*plVar30 + (longlong)(int)lVar35 * 8) = puVar15;
          if (bVar2 != 0) {
            iVar25 = (int)uStack_1b0;
            lVar35 = (longlong)(int)uStack_1b0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + (uint)bVar2);
            if ((uint)(uStack_1b0._4_4_ - iVar25) < (uint)bVar2) {
              FUN_14178c5be(&local_1b8);
            }
            *(undefined8 *)(local_1b8 + lVar35 * 8) = *puVar29;
          }
          iVar25 = 0;
        }
        else {
          lVar18 = (longlong)((int)puVar13[1] + -1);
          lVar35 = *(longlong *)(*puVar13 + lVar18 * 8);
          if (uVar26 < uVar31) {
            uVar31 = uVar26;
          }
          iVar25 = *(int *)(lVar35 + 0x3a) - uVar26;
          local_168 = *(undefined8 **)(lVar35 + 0x20);
          *(uint *)((longlong)puVar13 + 0x34) = uVar26 - uVar31;
          lVar35 = *(longlong *)(*puVar13 + lVar18 * 8);
          if (*(char *)(lVar35 + 0x81) != '\0') {
            iVar27 = (int)uStack_1b0;
            lVar18 = (longlong)(int)uStack_1b0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if (uStack_1b0._4_4_ == iVar27) {
              FUN_14178c5be(&local_1b8);
            }
            *(undefined8 *)(local_1b8 + lVar18 * 8) = *(undefined8 *)(lVar35 + 0x70);
          }
        }
        puVar15 = local_168;
        uVar26 = *(uint *)(*(longlong *)(lVar24 + 0xe0) + 0x30);
        uVar38 = uVar26 / (uint)local_1e8;
        uVar26 = uVar26 % (uint)local_1e8;
        puVar22 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar22 = local_130;
        }
        uVar17 = 0xffffffff;
        uVar34 = 0;
        lVar24 = 0;
        iVar27 = 0;
        do {
          iVar21 = iVar27;
          lVar35 = lVar24;
          if ((ulonglong)((uint)(byte)local_180 * 4) * 3 == lVar35) {
            iVar21 = (int)local_68 * uVar38 + (uint)(byte)local_180;
            goto LAB_1400964da;
          }
          uVar34 = uVar34 + (uint)*(ushort *)(puVar22 + lVar35 + 6) *
                            (uint)*(ushort *)(puVar22 + lVar35 + 4) * *(int *)(puVar22 + lVar35);
          uVar17 = uVar17 + 1;
          lVar24 = lVar35 + 0xc;
          iVar27 = iVar21 + 1;
        } while (uVar34 <= uVar26);
        iVar21 = (int)local_68 * uVar38 + iVar21;
        if (uVar17 < (byte)local_180) {
          uVar17 = *(uint *)(puVar22 + lVar35);
          uVar26 = uVar26 - *(int *)(puVar22 + lVar35 + 8);
          uVar38 = uVar26 % uVar17;
          uVar32 = (undefined4)
                   (((ulonglong)uVar26 / (ulonglong)uVar17) %
                   (ulonglong)(uint)*(ushort *)(puVar22 + lVar35 + 4));
          uVar26 = uVar26 / (uVar17 * *(ushort *)(puVar22 + lVar35 + 4));
        }
        else {
LAB_1400964da:
          uVar38 = 0;
          uVar32 = 0;
          uVar26 = 0;
        }
        lVar24 = (longlong)(int)uStack_1a0;
        uVar17 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar17);
        if (uStack_1a0._4_4_ < uVar17) {
          FUN_14178c44c(&local_1a8);
        }
        lVar24 = lVar24 * 0x38;
        *(undefined4 *)(local_1a8 + lVar24) = 0;
        *(uint *)(local_1a8 + 4 + lVar24) = uVar38;
        *(undefined4 *)(local_1a8 + 8 + lVar24) = uVar32;
        *(uint *)(local_1a8 + 0xc + lVar24) = uVar26;
        *(int *)(local_1a8 + 0x10 + lVar24) = iVar21;
        *(uint *)(local_1a8 + 0x14 + lVar24) = uVar31;
        *(undefined4 *)(local_1a8 + 0x18 + lVar24) = 0;
        *(undefined8 *)(local_1a8 + 0x1c + lVar24) = 0;
        *(undefined8 **)(local_1a8 + 0x28 + lVar24) = puVar15;
        *(int *)(local_1a8 + 0x30 + lVar24) = iVar25;
        piVar1 = (int *)(*(longlong *)(local_218 + 0xe0) + 0x30);
        *piVar1 = *piVar1 + uVar31;
        puVar13 = *(ulonglong **)(local_218 + 0xe0);
        uVar31 = (uint)puVar13[6];
        lVar24 = local_218;
      } while (uVar31 < (uint)local_210);
    }
  }
  lVar35 = *(longlong *)(lVar24 + 0x10);
  plVar30 = local_208;
  if ((int)uStack_1b0 != 0) {
    puVar14 = (uint *)FUN_14001cc68(0x28,0x10);
    *puVar14 = 0xffffffff;
    p_Var36 = (LPCRITICAL_SECTION)(lVar35 + 0x230);
    if (puVar14 == (uint *)0x0) {
      p_Var36 = (LPCRITICAL_SECTION)0x0;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[5] = 0;
    *(undefined2 *)(puVar14 + 6) = 0;
    *(LPCRITICAL_SECTION *)(puVar14 + 8) = p_Var36;
    if (p_Var36 == (LPCRITICAL_SECTION)0x0) {
      lVar24 = 0;
LAB_140096641:
      lVar18 = 0;
      do {
        if (*(char *)(lVar24 + 0x28 + lVar18) == '\0') {
          *puVar14 = (uint)lVar18;
          *(undefined1 *)(lVar24 + 0x28 + lVar18) = 1;
          puVar14[5] = 0;
          *(undefined2 *)(puVar14 + 6) = 1;
          break;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x400);
      if (p_Var36 != (LPCRITICAL_SECTION)0x0) goto LAB_140096671;
    }
    else {
      EnterCriticalSection(p_Var36);
      if ((puVar14[6] & 1) == 0) {
        lVar24 = *(longlong *)(puVar14 + 8);
        goto LAB_140096641;
      }
LAB_140096671:
      LeaveCriticalSection(p_Var36);
    }
    lVar24 = local_1b8;
    lVar18 = (longlong)(int)uStack_1b0;
    if (lVar18 != 0) {
      puVar19 = puVar14 + 2;
      lVar33 = 0;
      do {
        lVar5 = *(longlong *)(lVar24 + lVar33);
        if ((((lVar5 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar5 + 8) != 0)) &&
           (*(char *)(lVar5 + 0x28 + (ulonglong)*puVar14) == '\0')) {
          *(undefined1 *)(lVar5 + 0x28 + (ulonglong)*puVar14) = 1;
          _Src = *(void **)puVar19;
          if (_Src == (void *)0x0) {
            uVar31 = puVar14[4];
LAB_14009670b:
            uVar26 = (uint)((float)(int)uVar31 * 0.5 + (float)(int)uVar31);
            if (uVar31 == 0) {
              uVar26 = 0x1000;
            }
            puVar14[4] = uVar26;
            lVar20 = -1;
            if (-1 < (int)uVar26) {
              lVar20 = (longlong)(int)uVar26 * 8 + (ulonglong)((longlong)(int)uVar26 * 8 == 0);
            }
            local_210 = puVar19;
            _Dst = (void *)FUN_14001cc68(lVar20,0x10);
            if ((_Src == (void *)0x0) || (_Dst == (void *)0x0)) {
              *(void **)local_210 = _Dst;
              puVar19 = local_210;
              if (_Dst == (void *)0x0) {
                *(undefined1 *)((longlong)puVar14 + 0x19) = 1;
                goto LAB_1400966d1;
              }
              uVar26 = puVar14[5];
            }
            else {
              uVar26 = puVar14[5];
              local_1e8 = _Dst;
              memcpy(_Dst,_Src,(longlong)(int)uVar26 << 3);
              _Dst = local_1e8;
              FUN_1400020a8(_Src);
              *(void **)(puVar14 + 2) = _Dst;
              puVar19 = local_210;
            }
          }
          else {
            uVar31 = puVar14[4];
            uVar26 = puVar14[5];
            _Dst = _Src;
            if ((int)uVar31 <= (int)uVar26) goto LAB_14009670b;
          }
          puVar14[5] = uVar26 + 1;
          *(longlong *)((longlong)_Dst + (longlong)(int)uVar26 * 8) = lVar5;
        }
LAB_1400966d1:
        lVar33 = lVar33 + 8;
      } while (lVar18 * 8 != lVar33);
    }
    plVar30 = local_208;
    if (((char)puVar14[6] != '\0') && (*(char *)((longlong)puVar14 + 0x19) == '\0')) {
      uVar31 = puVar14[5];
      if (0 < (longlong)(int)uVar31) {
        lVar24 = *(longlong *)(puVar14 + 2);
        uVar26 = *puVar14;
        lVar18 = 0;
        do {
          *(undefined1 *)(*(longlong *)(lVar24 + lVar18 * 8) + 0x28 + (ulonglong)uVar26) = 0;
          lVar18 = lVar18 + 1;
        } while ((int)uVar31 != lVar18);
      }
      p_Var36 = *(LPCRITICAL_SECTION *)(puVar14 + 8);
      if (p_Var36 == (LPCRITICAL_SECTION)0x0) {
        *(undefined1 *)((ulonglong)*puVar14 + 0x28) = 0;
        *puVar14 = 0xffffffff;
      }
      else {
        EnterCriticalSection(p_Var36);
        *(undefined1 *)((longlong)&p_Var36[1].DebugInfo + (ulonglong)*puVar14) = 0;
        *puVar14 = 0xffffffff;
        LeaveCriticalSection(p_Var36);
      }
      *(undefined1 *)(puVar14 + 6) = 0;
    }
    local_160 = 0xd0000000000f0;
    local_158 = *(undefined8 *)(lVar35 + 0x220);
    local_16c = 8;
    iVar25 = (**(code **)(*plVar30 + 0x18))(plVar30,&local_160,&local_16c,&local_168);
    if (iVar25 < 0) {
      puVar16 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar16 = 0;
      puVar16[1] = 1;
      puVar15 = puVar16 + 2;
      puVar16[3] = puVar15;
      puVar16[2] = puVar15;
      local_258 = puVar16;
      iVar25 = (**(code **)(**(longlong **)(lVar35 + 0x158) + 0x120))
                         (*(longlong **)(lVar35 + 0x158),0,0,&DAT_14a34c500);
      plVar30 = local_208;
      puVar16[2] = lVar35 + 0xf8;
      puVar29 = *(undefined8 **)(lVar35 + 0x100);
      puVar16[3] = puVar29;
      *puVar29 = puVar15;
      *(undefined8 **)(lVar35 + 0x100) = puVar15;
      LOCK();
      *(int *)(lVar35 + 0x108) = *(int *)(lVar35 + 0x108) + 1;
      UNLOCK();
      lVar24 = local_218;
      if ((iVar25 < 0) ||
         (local_168 = puVar16, iVar25 = (**(code **)(*local_208 + 0x20))(local_208,&local_160,8),
         lVar24 = local_218, iVar25 < 0)) goto LAB_1400969c8;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x1d0));
    uVar6 = *(undefined8 *)(lVar35 + 0x118);
    uVar7 = *(undefined8 *)(lVar35 + 0x140);
    if ((ulonglong)*(uint *)(lVar35 + 0x21c) <=
        (ulonglong)(*(longlong *)(lVar35 + 0xf0) - *(longlong *)(lVar35 + 0xe8))) {
      do {
        WaitForSingleObject(*(HANDLE *)(lVar35 + 0x150),0xffffffff);
      } while ((ulonglong)*(uint *)(lVar35 + 0x21c) <=
               (ulonglong)(*(longlong *)(lVar35 + 0xf0) - *(longlong *)(lVar35 + 0xe8)));
    }
    lVar24 = (*(ulonglong *)(lVar35 + 0xf0) % *(ulonglong *)(lVar35 + 0x98)) * 0x18;
    *(uint **)(*(longlong *)(lVar35 + 0xa0) + 8 + lVar24) = puVar14;
    *(undefined8 *)(*(longlong *)(lVar35 + 0xa0) + 0x10 + lVar24) = uVar6;
    *(undefined8 *)(*(longlong *)(lVar35 + 0xa0) + lVar24) = uVar7;
    *(longlong *)(lVar35 + 0xf0) = *(longlong *)(lVar35 + 0xf0) + 1;
    BVar9 = SetEvent(*(HANDLE *)(lVar35 + 0xa8));
    bVar39 = true;
    if (BVar9 == 0) {
      DVar10 = GetLastError();
      bVar39 = DVar10 == 0;
    }
    lVar24 = local_218;
    if (*(longlong *)(lVar35 + 0x160) != 0) {
      if (*(longlong *)(lVar35 + 0xe8) == *(longlong *)(lVar35 + 0xf0)) {
        lVar18 = 0;
      }
      else {
        lVar18 = (*(ulonglong *)(lVar35 + 0xe8) % *(ulonglong *)(lVar35 + 0x98)) * 0x18 +
                 *(longlong *)(lVar35 + 0xa0);
        *(longlong *)(lVar35 + 0xe8) = *(longlong *)(lVar35 + 0xe8) + 1;
      }
      FUN_144ad520a(lVar35 + 0x90,lVar18);
    }
    if ((bVar39) &&
       ((**(code **)(*plVar30 + 0x78))
                  (plVar30,*(undefined8 *)(lVar35 + 0x110),*(undefined8 *)(lVar35 + 0x118)),
       *(longlong *)(lVar35 + 0x160) == 0)) {
      *(longlong *)(lVar35 + 0x118) = *(longlong *)(lVar35 + 0x118) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x1d0));
  }
LAB_1400969c8:
  if ((longlong)(int)uStack_1a0 != 0) {
    lVar33 = (longlong)(int)uStack_1a0 * 0x38;
    lVar18 = local_1a8 + 0x30;
    do {
      local_240 = (undefined1 *)(lVar18 + -0x30);
      local_258 = (undefined8 *)(lVar18 + -0x1c);
      local_250 = *(uint **)(lVar18 + -8);
      local_228 = 0;
      local_248 = 1;
      local_238 = lVar18;
      local_230 = local_258;
      (**(code **)(*plVar30 + 0x40))(plVar30,*(undefined8 *)(lVar24 + 0x20),1,lVar18 + -0x2c);
      lVar18 = lVar18 + 0x38;
      lVar33 = lVar33 + -0x38;
    } while (lVar33 != 0);
  }
  if ((int)uStack_1b0 != 0) {
    local_160 = 0xd0000000000f0;
    local_158 = *(undefined8 *)(lVar35 + 0x220);
    local_16c = 8;
    iVar25 = (**(code **)(*plVar30 + 0x18))(plVar30,&local_160,&local_16c,&local_168);
    if (iVar25 < 0) {
      puVar16 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar16 = 0;
      puVar16[1] = 1;
      puVar15 = puVar16 + 2;
      puVar16[3] = puVar15;
      puVar16[2] = puVar15;
      local_258 = puVar16;
      iVar25 = (**(code **)(**(longlong **)(lVar35 + 0x158) + 0x120))
                         (*(longlong **)(lVar35 + 0x158),0,0,&DAT_14a34c500);
      plVar30 = local_208;
      puVar16[2] = lVar35 + 0xf8;
      puVar29 = *(undefined8 **)(lVar35 + 0x100);
      puVar16[3] = puVar29;
      *puVar29 = puVar15;
      *(undefined8 **)(lVar35 + 0x100) = puVar15;
      LOCK();
      *(int *)(lVar35 + 0x108) = *(int *)(lVar35 + 0x108) + 1;
      UNLOCK();
      if ((iVar25 < 0) ||
         (local_168 = puVar16, iVar25 = (**(code **)(*local_208 + 0x20))(local_208,&local_160,8),
         iVar25 < 0)) goto LAB_140096b94;
    }
    puVar15 = local_168;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x1d0));
    iVar25 = (**(code **)(*plVar30 + 0x70))(plVar30,*puVar15);
    plVar30 = puVar15 + 1;
    *plVar30 = *plVar30 + 1;
    if (-1 < iVar25) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0xb8));
      uVar6 = *(undefined8 *)(lVar35 + 0x140);
      iVar25 = *(int *)(lVar35 + 0x108);
      puVar15 = (undefined8 *)FUN_14001cc68((ulonglong)(iVar25 - 1) * 0x10 + 0x30,0x10);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = uVar6;
        *(int *)(puVar15 + 1) = iVar25;
        puVar15[4] = 0;
        puVar15[5] = 0;
        if (*(longlong **)(lVar35 + 0xf8) != (longlong *)(lVar35 + 0xf8)) {
          uVar23 = 0;
          plVar30 = *(longlong **)(lVar35 + 0xf8);
          do {
            plVar8 = (longlong *)*plVar30;
            puVar15[uVar23 * 2 + 4] = plVar30 + -2;
            puVar15[uVar23 * 2 + 5] = plVar30[-1] + -1;
            uVar23 = (ulonglong)((int)uVar23 + 1);
            plVar30 = plVar8;
          } while (plVar8 != (longlong *)(lVar35 + 0xf8));
        }
        puVar15[2] = lVar35 + 0x130;
        puVar29 = *(undefined8 **)(lVar35 + 0x138);
        puVar15[3] = puVar29;
        *puVar29 = puVar15 + 2;
        *(undefined8 **)(lVar35 + 0x138) = puVar15 + 2;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0xb8));
    }
    *(longlong *)(lVar35 + 0x140) = *(longlong *)(lVar35 + 0x140) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x1d0));
  }
LAB_140096b94:
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140096e5c FUN_140096e5c body=137 status=ok
// SIG undefined FUN_140096e5c(void)

void FUN_140096e5c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 1);
  iVar2 = (iVar3 + 0xfU & 0xfffffff0) + 0x10;
  if ((int)(iVar3 + 0xfU) < -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 < iVar2) {
    FUN_144893a1c(puVar1);
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_2 + 1);
  }
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar4 == 0 && iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1447a127e(puVar1,iVar3);
    if (iVar3 != 0) {
      memcpy((void *)*puVar1,_Src,(longlong)iVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140096ee6 FUN_140096ee6 body=55 status=ok
// SIG undefined FUN_140096ee6(void)

void FUN_140096ee6(longlong *param_1)

{
  FUN_140098074(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140096f1e FUN_140096f1e body=107 status=ok
// SIG undefined FUN_140096f1e(void)

void FUN_140096f1e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aac0730;
  FUN_1402d4fc6(param_1 + 2);
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14009796c(param_1 + 2);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140096f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140096f8a FUN_140096f8a body=194 status=ok
// SIG undefined FUN_140096f8a(void)

void FUN_140096f8a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x418) != '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_4c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    FUN_1400d4af4(&local_68,4,0,0);
    cVar1 = FUN_1400970b2(param_1 + 0x2b8,param_2);
    if ((cVar1 == '\x02') && (0 < DAT_14c761bc0)) {
      FUN_140097136(param_1,param_2);
    }
    FUN_14009704e(&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009704e FUN_14009704e body=100 status=ok
// SIG undefined FUN_14009704e(void)

void FUN_14009704e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + 8 + lVar4);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xe8) = 0xffffffff;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400970b2 FUN_1400970b2 body=131 status=ok
// SIG undefined FUN_1400970b2(void)

ulonglong FUN_1400970b2(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
     ((*(uint *)(param_2 + 8) & 0x18000) != 0)) {
    uVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x2d2);
    *(byte *)(param_2 + 0x2d2) = bVar1 | 0x40;
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),2);
    if (-1 < (char)bVar1) {
      *(byte *)(param_2 + 0x2d2) = bVar1 | 0xc0;
      iVar2 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
        FUN_140097524((longlong *)(param_1 + 0x48),iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8) = param_2;
      *(byte *)(param_2 + 0x2d2) = *(byte *)(param_2 + 0x2d2) | 0x20;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140097136 FUN_140097136 body=335 status=ok
// SIG undefined FUN_140097136(void)

void FUN_140097136(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined1 local_b8 [96];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((*(byte *)(param_2 + 0x2d2) & 0x10) != 0) {
    local_58 = 0;
    local_50 = 0xc00000000;
    lVar4 = FUN_14494250a(param_2);
    iVar1 = *(int *)(param_1 + 0x400);
    if ((longlong)iVar1 == 0) {
      *(byte *)(param_2 + 0x2d2) = *(byte *)(param_2 + 0x2d2) & 0xef;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x3f8);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if ((plVar3 != (longlong *)0x0) && ((lVar4 == 0 || (*plVar3 == lVar4)))) {
          local_c0 = param_2;
          FUN_1402d4df2(plVar3 + 2,param_2,local_b8);
          FUN_1402d4e38(plVar3 + 9,&local_c0,1);
          FUN_1402d4e38(plVar3 + 0xb,&local_c0,1);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
      *(byte *)(param_2 + 0x2d2) = *(byte *)(param_2 + 0x2d2) & 0xef;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140097286 FUN_140097286 body=669 status=ok
// SIG undefined FUN_140097286(void)

void FUN_140097286(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  float *pfVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    *(undefined2 *)((longlong)param_1 + 0x84) = 0x100;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    param_1[1] = 0;
    *(byte *)((longlong)param_1 + 0x86) = *(byte *)((longlong)param_1 + 0x86) & 0xfc;
    return;
  }
  uVar3 = plVar2[0x18];
  uVar12 = uVar3 >> 0x18;
  uVar5 = (**(code **)(*plVar2 + 0x2a0))();
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x84);
  bVar11 = (byte)(uVar3 >> 0x18);
  if (cVar1 != '\x01') {
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    *(byte *)((longlong)param_1 + 0x86) = *(byte *)((longlong)param_1 + 0x86) & 0xfc;
    if (cVar1 == '\x03') {
      if (bVar11 != 0) {
        plVar2 = (longlong *)*param_1;
        uVar13 = uVar12 & 0xff;
        uVar9 = uVar3 >> 0x20 & 0xff;
        do {
          pfVar7 = (float *)(**(code **)(*plVar2 + 800))(plVar2,uVar9);
          *(float *)((longlong)param_1 + uVar13 * 4 + 0x30) = *pfVar7 * 0.5;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if ((cVar1 == '\x02') && (bVar11 != 0)) {
      lVar4 = *param_1;
      uVar9 = uVar12 & 0xff;
      lVar10 = (uVar3 >> 0x20 & 0xff) + 8;
      do {
        *(float *)((longlong)param_1 + uVar9 * 4 + 0x30) =
             *(float *)(*(longlong *)(lVar4 + 0xe0) + lVar10 * 4) * 0.5;
        lVar10 = lVar10 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    goto LAB_140097364;
  }
  if (uVar5 < 0x49) {
    if (*(char *)(param_2 + 0x29) == '\0') {
      fVar14 = 1.0;
    }
    else {
      fVar14 = 0.71;
    }
    if ((uVar5 & 0x7e) != 0x18) {
      if (uVar5 == 0x48) {
        if (DAT_14c761bcc <= fVar14) {
          fVar14 = DAT_14c761bcc;
        }
        uVar5 = 0x48;
      }
      else if (uVar5 == 0x16) {
        if (DAT_14c761de8 <= fVar14) {
          fVar14 = DAT_14c761de8;
        }
        uVar5 = 0x16;
      }
      else if (uVar5 == 0x11) {
        if (DAT_14c761de4 <= fVar14) {
          fVar14 = DAT_14c761de4;
        }
        uVar5 = 0x11;
      }
      goto LAB_140097346;
    }
    bVar8 = 2;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if (*(char *)(param_2 + 0x29) == '\0') {
      fVar14 = 1.0;
    }
    else {
      fVar14 = 0.71;
    }
    uVar5 = 0;
LAB_140097346:
    bVar8 = 0;
  }
  *(float *)(param_1 + 2) = fVar14;
  *(byte *)((longlong)param_1 + 0x86) =
       bVar8 | *(byte *)(param_2 + 0x51 + (ulonglong)uVar5) |
       *(byte *)((longlong)param_1 + 0x86) & 0xfc;
LAB_140097364:
  if ((uVar3 & 0xff000000) != 0) {
    uVar9 = 0;
    do {
      uVar13 = uVar9 + 1;
      uVar6 = (**(code **)(*(longlong *)*param_1 + 0x2a8))((longlong *)*param_1,uVar13 & 0xffffffff)
      ;
      *(undefined4 *)((longlong)param_1 + uVar9 * 4 + 0x14) = uVar6;
      uVar9 = uVar13;
    } while ((uVar12 & 0xff) != uVar13);
  }
  if ((byte)(uVar3 >> 0x10) < bVar11) {
    *(undefined1 *)((longlong)param_1 + 0x85) = 0;
    uVar6 = (**(code **)(*(longlong *)*param_1 + 0x2b0))
                      ((longlong *)*param_1,
                       ((uint)(uVar3 >> 0x20) & 0xff) + ((uint)(uVar3 >> 0x18) & 0xff) +
                       (~(uint)(uVar3 >> 0x10) | 0xffffff00));
    *(undefined4 *)(param_1 + 1) = uVar6;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x85) = 1;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140097524 FUN_140097524 body=353 status=ok
// SIG undefined FUN_140097524(void)

void FUN_140097524(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400975a9;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1400975a9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140097686 FUN_140097686 body=740 status=ok
// SIG undefined FUN_140097686(void)

void FUN_140097686(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  uint local_58;
  int local_54;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140097d24(param_1[3]);
  uVar2 = uStack_40;
  uVar5 = *(uint *)(param_1 + 10);
  if ((longlong)(int)uVar5 != 0) {
    iVar7 = (int)uStack_40;
    lVar4 = (longlong)(int)uStack_40;
    uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + uVar5);
    if ((uint)(uStack_40._4_4_ - iVar7) < uVar5) {
      FUN_140097524(&local_48,uVar2 & 0xffffffff);
    }
    memcpy((void *)(lVar4 * 8 + local_48),(void *)param_1[9],(longlong)(int)uVar5 << 3);
  }
  uVar2 = uStack_40;
  uVar5 = *(uint *)(param_1 + 0xc);
  if ((longlong)(int)uVar5 != 0) {
    iVar7 = (int)uStack_40;
    lVar4 = (longlong)(int)uStack_40;
    uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + uVar5);
    if ((uint)(uStack_40._4_4_ - iVar7) < uVar5) {
      FUN_140097524(&local_48,uVar2 & 0xffffffff);
    }
    memcpy((void *)(lVar4 * 8 + local_48),(void *)param_1[0xb],(longlong)(int)uVar5 << 3);
  }
  if ((longlong)(int)uStack_40 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(local_48 + lVar4) != 0) {
        pbVar1 = (byte *)(*(longlong *)(local_48 + lVar4) + 0x2d2);
        *pbVar1 = *pbVar1 & 0xef;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)uStack_40 * 8 != lVar4);
  }
  if (param_2 != 0) {
    FUN_1402d4fc6(param_1 + 4);
    FUN_1400979ba(&local_70,param_1[3]);
LAB_140097738:
    if (local_54 < *(int *)(local_60 + 0x18)) {
      uVar3 = *(undefined8 *)(*local_70 + (longlong)local_54 * 0x18);
      iVar7 = *(int *)(param_2 + 0x68);
      *(uint *)(param_2 + 0x68) = iVar7 + 1U;
      if (*(uint *)(param_2 + 0x6c) < iVar7 + 1U) {
        FUN_1405a2340(param_2,iVar7);
      }
      lVar4 = *(longlong *)(param_2 + 0x60);
      if (*(longlong *)(param_2 + 0x60) == 0) {
        lVar4 = param_2;
      }
      *(undefined8 *)(lVar4 + (longlong)iVar7 * 8) = uVar3;
      local_58 = ~local_64 & local_58;
      lVar4 = *(longlong *)(local_60 + 0x10);
      if (*(longlong *)(local_60 + 0x10) == 0) {
        lVar4 = local_60;
      }
      local_54 = *(int *)(local_60 + 0x18);
      lVar8 = (longlong)local_68;
      uVar5 = local_58 & *(uint *)(lVar4 + lVar8 * 4);
      if (uVar5 == 0) {
        iVar7 = local_54 + 0x1e;
        if (-1 < local_54 + -1) {
          iVar7 = local_54 + -1;
        }
        iVar6 = iVar7 >> 5;
        if (iVar7 >> 5 < local_68) {
          iVar6 = local_68;
        }
        iVar7 = local_68 + 1;
        lVar9 = 0;
        do {
          local_68 = iVar7 + (int)lVar9;
          local_50 = local_50 + 0x20;
          if (iVar6 - lVar8 == lVar9) goto LAB_140097738;
          uVar5 = *(uint *)(lVar4 + lVar8 * 4 + 4 + lVar9 * 4);
          local_58 = 0xffffffff;
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
      }
      local_64 = -uVar5 & uVar5;
      uVar2 = (ulonglong)local_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar7 = (local_50 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      if (iVar7 < local_54) {
        local_54 = iVar7;
      }
      goto LAB_140097738;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_14009a542(param_1 + 9,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_14009a542(param_1 + 0xb,0);
  }
  FUN_140097ee8(param_1 + 0xd);
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_1 != 0) {
    pbVar1 = (byte *)(*param_1 + 0x240);
    *pbVar1 = *pbVar1 & 0xef;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009796c FUN_14009796c body=77 status=ok
// SIG undefined FUN_14009796c(void)

void FUN_14009796c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1402d4fc6();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400979b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1400979ba FUN_1400979ba body=219 status=ok
// SIG undefined FUN_1400979ba(void)

void FUN_1400979ba(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar6 = *(int *)(param_2 + 0x60);
  uVar7 = 1;
  if (iVar6 == 0) {
    iVar4 = 0;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x58);
    if (*(uint **)(param_2 + 0x58) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x48);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar4 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar4 = iVar6 + -1;
      }
      uVar10 = 0;
      uVar2 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar2 = uVar10;
      }
      iVar8 = (int)uVar2 + 1;
      iVar4 = (int)uVar2 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        if (uVar2 == uVar10) goto LAB_140097a5b;
        iVar9 = iVar9 + 0x20;
        uVar3 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar3 == 0);
      iVar8 = (int)uVar10;
      iVar4 = iVar9;
    }
    else {
      iVar4 = 0;
      iVar8 = 0;
    }
    uVar7 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar9 = (iVar4 - ((uint)lVar1 ^ 0x3f)) + 0x3e;
    if (iVar9 < iVar6) {
      iVar6 = iVar9;
    }
  }
LAB_140097a5b:
  *param_1 = param_2 + 0x38;
  *(int *)(param_1 + 1) = iVar8;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  param_1[2] = param_2 + 0x48;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(int *)((longlong)param_1 + 0x1c) = iVar6;
  *(int *)(param_1 + 4) = iVar4;
  return;
}



// FUNCTION 140097a96 FUN_140097a96 body=409 status=ok
// SIG undefined FUN_140097a96(void)

void FUN_140097a96(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar7 != 0) && (DVar3 = GetCurrentThreadId(), DVar3 != *(DWORD *)(lVar7 + 0x20))) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
  }
  iVar4 = *(int *)(param_1 + 0x318);
  iVar5 = *(int *)(param_1 + 0x18) + iVar4;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    FUN_14640671a(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x318);
  }
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x310) + lVar7 * 8);
      if (plVar1 != (longlong *)0x0) {
        *(undefined4 *)(plVar1 + 0x17) = *(undefined4 *)(param_1 + 0x18);
        cVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1);
        if (cVar2 == '\x01') {
          uVar6 = 0x49;
          lVar8 = param_1 + 0xc4;
        }
        else if (cVar2 == '\x03') {
          lVar8 = *(longlong *)(param_1 + 0x1f8);
          uVar6 = *(undefined4 *)(param_1 + 0x200);
        }
        else if (cVar2 == '\x02') {
          lVar8 = *(longlong *)(param_1 + 0x1e8);
          uVar6 = *(undefined4 *)(param_1 + 0x1f0);
        }
        else {
          uVar6 = 0xffffffff;
          lVar8 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x1c) < iVar4 + 1U) {
          FUN_147d63b6a(param_1 + 0x10,iVar4);
        }
        FUN_140097c30((longlong)iVar4 * 0xa8 + *(longlong *)(param_1 + 0x10),plVar1,lVar8,uVar6,
                      param_1 + 0x208);
        iVar4 = *(int *)(param_1 + 0x318);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x31c) < 0) {
    FUN_147d64106((longlong *)(param_1 + 0x310));
    return;
  }
  return;
}



// FUNCTION 140097c30 FUN_140097c30 body=243 status=ok
// SIG undefined FUN_140097c30(void)

undefined8 *
FUN_140097c30(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  byte bVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = (**(code **)(*param_2 + 0x2f0))(param_2);
  *(undefined1 *)((longlong)param_1 + 0x84) = uVar1;
  bVar2 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000;
  FUN_140097286(param_1,param_5);
  FUN_1447acc2e(param_1);
  param_1[0xb] = 0xc7efffffe0000000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  if (param_2 != (longlong *)0x0) {
    bVar2 = (*(byte *)((longlong)param_2 + 0xbc) & 4) << 2;
  }
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x7e) = 0;
  *(byte *)((longlong)param_1 + 0x86) = *(byte *)((longlong)param_1 + 0x86) & 0xf | bVar2;
  *(byte *)((longlong)param_1 + 0x87) = *(byte *)((longlong)param_1 + 0x87) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x7f) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  return param_1;
}



// FUNCTION 140097d24 FUN_140097d24 body=451 status=ok
// SIG undefined FUN_140097d24(void)

void FUN_140097d24(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x1a8);
    if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x198);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *(longlong *)(param_1 + 0x188);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_140097524(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
           *(undefined8 *)((longlong)iVar3 * 0x18 + lVar10);
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar7 = *(uint **)(param_1 + 0x1a8);
      if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x198);
      }
      iVar2 = *(int *)(param_1 + 0x1b0);
      iVar3 = (int)uVar13;
      lVar10 = (longlong)iVar3;
      uVar4 = puVar7[lVar10] & uVar12;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar7[lVar10 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar10 == lVar8) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 140097ee8 FUN_140097ee8 body=375 status=ok
// SIG undefined FUN_140097ee8(void)

void FUN_140097ee8(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
      local_70 = (undefined4)local_50;
      uStack_6c = local_50._4_4_;
      uStack_68 = (undefined4)uStack_48;
      uStack_64 = uStack_48._4_4_;
      uStack_58 = CONCAT44(uStack_34,uStack_38);
      local_60 = local_40;
      uVar2 = local_60;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      iVar4 = local_60._4_4_;
      local_78 = param_1;
      if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140098074(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140098d88(param_1);
  return;
}



// FUNCTION 140098074 FUN_140098074 body=123 status=ok
// SIG undefined FUN_140098074(void)

void FUN_140098074(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1400980f0 FUN_1400980f0 body=162 status=ok
// SIG undefined FUN_1400980f0(void)

void FUN_1400980f0(longlong param_1,char param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1449b3b46(*(longlong *)(param_1 + 0x38),DAT_14ca9a438 ^ 1);
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x60) == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      if (*(char *)((longlong)puVar2 + 0x5e) == '\x01') {
        *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_1 + 0xc6);
      }
      else {
        *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_1 + 0xc5);
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
  if (param_2 != '\0') {
    FUN_144b2acd2(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 140098192 FUN_140098192 body=3062 status=ok
// SIG undefined FUN_140098192(void)

void FUN_140098192(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  lVar13 = DAT_14cb0aa00;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  if (iVar5 == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
      }
      else {
        bVar14 = false;
      }
    }
    uVar9 = (ulonglong)(bVar14 ^ 1);
  }
  *param_1 = *(undefined4 *)(lVar13 + uVar9 * 4);
  puVar2 = DAT_14cb0aa30;
  bVar8 = DAT_14c86a9f8;
  iVar5 = *piVar1;
  if (iVar5 == 0x40000002) {
    param_1[1] = *DAT_14cb0aa30;
LAB_14009825d:
    param_1[3] = *DAT_14cb0aa60;
    iVar5 = 0x40000002;
    uVar9 = 0;
    lVar13 = DAT_14cb0aac0;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      param_1[1] = *DAT_14cb0aa30;
    }
    else if (iVar5 == 2) {
      param_1[1] = *DAT_14cb0aa30;
      iVar5 = 2;
      bVar8 = DAT_14c86a9f8;
    }
    else {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[1] = puVar2[bVar14 ^ 1];
      bVar8 = DAT_14c86a9f8;
      if (iVar5 == 0x40000002) goto LAB_14009825d;
    }
    puVar2 = DAT_14cb0aa60;
    if (((bVar8 & 1) == 0) || (iVar5 == 2)) {
      param_1[3] = *DAT_14cb0aa60;
    }
    else {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[3] = puVar2[bVar14 ^ 1];
      if (iVar5 == 0x40000002) {
        iVar5 = 0x40000002;
        uVar9 = 0;
        lVar13 = DAT_14cb0aac0;
        goto LAB_140098271;
      }
    }
    lVar13 = DAT_14cb0aac0;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    uVar9 = (ulonglong)(bVar14 ^ 1);
  }
LAB_140098271:
  fVar17 = *(float *)(lVar13 + uVar9 * 4);
  fVar15 = 0.0;
  if (0.0 <= fVar17) {
    fVar15 = fVar17;
  }
  param_1[7] = (int)ROUND(fVar15 + fVar15 + -0.5) >> 1;
  puVar2 = DAT_14cb0b1d0;
  bVar8 = DAT_14c86a9f8;
  if (iVar5 == 0x40000002) {
    param_1[8] = *DAT_14cb0b1d0;
LAB_1400982ed:
    param_1[9] = *DAT_14cb0aa18;
LAB_1400982fa:
    *(bool *)((longlong)param_1 + 0x2d) = *DAT_14cb0aad8 != 0;
LAB_140098309:
    *(bool *)((longlong)param_1 + 0x29) = *DAT_14cb0b138 != 0;
LAB_14009831c:
    *(bool *)(param_1 + 10) = *DAT_14cb0ab38 != 0;
LAB_14009832b:
    *(bool *)((longlong)param_1 + 0x2a) = *DAT_14cb0aaf0 != 0;
LAB_14009833a:
    *(bool *)((longlong)param_1 + 0x2b) = *DAT_14cb0ab08 != 0;
LAB_140098349:
    *(bool *)(param_1 + 0xb) = *DAT_14cb0ab20 != 0;
LAB_14009835c:
    param_1[0xc] = *DAT_14cb0ab68;
LAB_14009836d:
    param_1[5] = *DAT_14cb0aa78;
LAB_14009837f:
    fVar17 = 1.0;
    if (1.0 <= *DAT_14cb0aa90) {
      fVar17 = *DAT_14cb0aa90;
    }
    param_1[6] = fVar17;
LAB_140098399:
    param_1[0xd] = *DAT_14cb0ab80;
    iVar5 = 0x40000002;
    uVar9 = 0;
    lVar13 = DAT_14cb0b168;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      param_1[8] = *DAT_14cb0b1d0;
    }
    else if (iVar5 == 2) {
      param_1[8] = *DAT_14cb0b1d0;
      iVar5 = 2;
      bVar8 = DAT_14c86a9f8;
    }
    else {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[8] = puVar2[bVar14 ^ 1];
      bVar8 = DAT_14c86a9f8;
      if (iVar5 == 0x40000002) goto LAB_1400982ed;
    }
    puVar2 = DAT_14cb0aa18;
    if (((bVar8 & 1) == 0) || (iVar5 == 2)) {
      param_1[9] = *DAT_14cb0aa18;
    }
    else {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[9] = puVar2[bVar14 ^ 1];
      if (iVar5 == 0x40000002) goto LAB_1400982fa;
    }
    piVar4 = DAT_14cb0aad8;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)((longlong)param_1 + 0x2d) = piVar4[bVar14 ^ 1] != 0;
    piVar4 = DAT_14cb0b138;
    if (iVar5 == 0x40000002) goto LAB_140098309;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)((longlong)param_1 + 0x29) = piVar4[bVar14 ^ 1] != 0;
    piVar4 = DAT_14cb0ab38;
    if (iVar5 == 0x40000002) goto LAB_14009831c;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)(param_1 + 10) = piVar4[bVar14 ^ 1] != 0;
    piVar4 = DAT_14cb0aaf0;
    if (iVar5 == 0x40000002) goto LAB_14009832b;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)((longlong)param_1 + 0x2a) = piVar4[bVar14 ^ 1] != 0;
    piVar4 = DAT_14cb0ab08;
    if (iVar5 == 0x40000002) goto LAB_14009833a;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)((longlong)param_1 + 0x2b) = piVar4[bVar14 ^ 1] != 0;
    piVar4 = DAT_14cb0ab20;
    if (iVar5 == 0x40000002) goto LAB_140098349;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    *(bool *)(param_1 + 0xb) = piVar4[bVar14 ^ 1] != 0;
    puVar2 = DAT_14cb0ab68;
    bVar8 = DAT_14c86a9f8;
    if (iVar5 == 0x40000002) goto LAB_14009835c;
    if (DAT_14c86a9f8 != 0) {
      if (iVar5 == 2) {
        param_1[0xc] = *DAT_14cb0ab68;
        iVar5 = 2;
        bVar8 = DAT_14c86a9f8;
        goto LAB_14009882e;
      }
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[0xc] = puVar2[bVar14 ^ 1];
      bVar8 = DAT_14c86a9f8;
      if (iVar5 != 0x40000002) goto LAB_14009882e;
      goto LAB_14009836d;
    }
    param_1[0xc] = *DAT_14cb0ab68;
LAB_14009882e:
    puVar2 = DAT_14cb0aa78;
    if (((bVar8 & 1) != 0) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[5] = puVar2[bVar14 ^ 1];
      if (iVar5 != 0x40000002) goto LAB_14009886f;
      goto LAB_14009837f;
    }
    param_1[5] = *DAT_14cb0aa78;
LAB_14009886f:
    pfVar3 = DAT_14cb0aa90;
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
    }
    fVar17 = 1.0;
    if (1.0 <= pfVar3[bVar14 ^ 1]) {
      fVar17 = pfVar3[bVar14 ^ 1];
    }
    param_1[6] = fVar17;
    puVar2 = DAT_14cb0ab80;
    bVar8 = DAT_14c86a9f8;
    if (iVar5 == 0x40000002) goto LAB_140098399;
    if (DAT_14c86a9f8 == 0) {
      param_1[0xd] = *DAT_14cb0ab80;
LAB_140098a87:
      lVar13 = DAT_14cb0b168;
      bVar14 = true;
      if (((bVar8 & 1) != 0) && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar14 = DVar6 == DVar7;
          iVar5 = *piVar1;
        }
        else {
          bVar14 = false;
        }
      }
      uVar9 = (ulonglong)(bVar14 ^ 1);
    }
    else {
      if (iVar5 == 2) {
        param_1[0xd] = *DAT_14cb0ab80;
        iVar5 = 2;
        bVar8 = DAT_14c86a9f8;
        goto LAB_140098a87;
      }
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
        iVar5 = *piVar1;
      }
      else {
        bVar14 = false;
      }
      param_1[0xd] = puVar2[bVar14 ^ 1];
      bVar8 = DAT_14c86a9f8;
      if (iVar5 != 0x40000002) goto LAB_140098a87;
      iVar5 = 0x40000002;
      uVar9 = 0;
      lVar13 = DAT_14cb0b168;
    }
  }
  param_1[0xe] = *(undefined4 *)(lVar13 + uVar9 * 4);
  lVar13 = DAT_14cb0b120;
  bVar8 = *(byte *)((longlong)param_1 + 0x29);
  if (bVar8 == 1) {
    if (iVar5 == 0x40000002) {
      iVar5 = 0x40000002;
      uVar9 = 0;
    }
    else {
      bVar14 = true;
      if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar14 = DVar6 == DVar7;
          bVar8 = *(byte *)((longlong)param_1 + 0x29);
          iVar5 = *piVar1;
        }
        else {
          bVar14 = false;
        }
      }
      uVar9 = (ulonglong)(bVar14 ^ 1);
    }
    bVar14 = *(int *)(lVar13 + uVar9 * 4) != 0;
  }
  else {
    bVar14 = false;
  }
  *(bool *)((longlong)param_1 + 0x2e) = bVar14;
  lVar13 = DAT_14cb0aaa8;
  if ((bVar8 & 1) == 0) {
    uVar16 = 0x3f800000;
  }
  else {
    if (iVar5 == 0x40000002) {
      iVar5 = 0x40000002;
      uVar9 = 0;
    }
    else {
      bVar14 = true;
      if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar14 = DVar6 == DVar7;
          iVar5 = *piVar1;
        }
        else {
          bVar14 = false;
        }
      }
      uVar9 = (ulonglong)(bVar14 ^ 1);
    }
    uVar16 = *(undefined4 *)(lVar13 + uVar9 * 4);
  }
  param_1[4] = uVar16;
  puVar2 = DAT_14cb0b180;
  bVar8 = DAT_14c86a9f8;
  if (iVar5 == 0x40000002) {
    param_1[0x11] = *DAT_14cb0b180;
LAB_1400984bc:
    *(bool *)(param_1 + 0x12) = *DAT_14cb0ab98 != 0;
LAB_1400984cc:
    *(bool *)((longlong)param_1 + 0x49) = *DAT_14cb0abc8 != 0;
    uVar9 = 0;
    lVar13 = DAT_14cb0ac28;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      param_1[0x11] = *DAT_14cb0b180;
    }
    else if (iVar5 == 2) {
      param_1[0x11] = *DAT_14cb0b180;
      iVar5 = 2;
      bVar8 = DAT_14c86a9f8;
    }
    else {
      uVar9 = 1;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
        iVar5 = *piVar1;
      }
      param_1[0x11] = puVar2[uVar9];
      bVar8 = DAT_14c86a9f8;
      if (iVar5 == 0x40000002) goto LAB_1400984bc;
    }
    piVar4 = DAT_14cb0ab98;
    if (((bVar8 & 1) == 0) || (iVar5 == 2)) {
      *(bool *)(param_1 + 0x12) = *DAT_14cb0ab98 != 0;
    }
    else {
      uVar9 = 1;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
        iVar5 = *piVar1;
      }
      *(bool *)(param_1 + 0x12) = piVar4[uVar9] != 0;
      if (iVar5 == 0x40000002) goto LAB_1400984cc;
    }
    piVar4 = DAT_14cb0abc8;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      uVar9 = 1;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
        iVar5 = *piVar1;
      }
      *(bool *)((longlong)param_1 + 0x49) = piVar4[uVar9] != 0;
      if (iVar5 != 0x40000002) goto LAB_140098a0f;
    }
    else {
      *(bool *)((longlong)param_1 + 0x49) = *DAT_14cb0abc8 != 0;
LAB_140098a0f:
      lVar13 = DAT_14cb0ac28;
      if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar9 = 1;
        }
        goto LAB_1400984de;
      }
    }
    uVar9 = 0;
    lVar13 = DAT_14cb0ac28;
  }
LAB_1400984de:
  param_1[0x13] = *(undefined4 *)(lVar13 + uVar9 * 4);
  param_1[0xf] = (uint)DAT_14cb0cc00;
  if ((int)param_1[0xc] < 1) {
    param_1[0xc] = 0x10;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
    param_1[7] = 0;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  piVar4 = DAT_14cb0abb0;
  iVar5 = *piVar1;
  if (iVar5 == 0x40000002) {
    iVar5 = *DAT_14cb0abb0;
    uVar10 = 0;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    param_1[0x10] = iVar5;
    lVar13 = DAT_14cb0aa48;
  }
  else {
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      uVar9 = 1;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar6 != DVar7);
        iVar5 = *piVar1;
      }
      uVar10 = 0;
      uVar12 = (ulonglong)(uint)piVar4[uVar9];
      if (piVar4[uVar9] < 1) {
        uVar12 = uVar10;
      }
      param_1[0x10] = (int)uVar12;
      lVar13 = DAT_14cb0aa48;
      if (iVar5 == 0x40000002) goto LAB_140098593;
    }
    else {
      iVar11 = 0;
      if (0 < *DAT_14cb0abb0) {
        iVar11 = *DAT_14cb0abb0;
      }
      param_1[0x10] = iVar11;
    }
    lVar13 = DAT_14cb0aa48;
    if ((DAT_14c86a9f8 == 1) && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 0;
    }
  }
LAB_140098593:
  param_1[2] = *(undefined4 *)(lVar13 + uVar10 * 4);
  return;
}



// FUNCTION 140098d88 FUN_140098d88 body=609 status=ok
// SIG undefined FUN_140098d88(void)

void FUN_140098d88(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0);
    }
LAB_140098de0:
    uVar5 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar5);
  }
  else {
    if (uVar9 == 0) goto LAB_140098ed1;
    FUN_1446efa72(plVar7,0);
    if (0 < (int)uVar9) goto LAB_140098de0;
  }
  local_58 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_5c = 1;
  if (iVar2 == 0) {
    local_48 = 0;
    local_60 = 0;
    local_4c = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = local_58;
    }
    uVar9 = *puVar10;
    if (uVar9 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar8 = 0;
      uVar6 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar6 = uVar8;
      }
      local_60 = (int)uVar6 + 1;
      local_48 = (int)uVar6 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_4c = iVar2;
        if (uVar6 == uVar8) goto LAB_140098ea7;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar10[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar9 == 0);
      local_60 = (int)uVar8;
      local_48 = iVar11;
    }
    else {
      local_48 = 0;
      local_60 = 0;
    }
    local_5c = -uVar9 & uVar9;
    uVar6 = (ulonglong)local_5c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_4c = (local_48 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_4c) {
      local_4c = iVar2;
    }
  }
LAB_140098ea7:
  local_50 = 0xffffffff;
  local_68 = param_1;
  if (local_4c < iVar2) {
    do {
      iVar2 = local_4c;
      lVar3 = *local_68;
      lVar4 = (longlong)local_4c * 0x1c;
      iVar11 = FUN_1447addd0(lVar3 + lVar4,0x10);
      uVar6 = (longlong)iVar11 & (longlong)(int)param_1[9] - 1U;
      iVar11 = (int)uVar6;
      *(int *)(lVar3 + 0x18 + lVar4) = iVar11;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x14 + lVar4) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) = iVar2;
      local_50 = local_50 & ~local_5c;
      FUN_1449c0562(&local_60);
    } while (local_4c < (int)local_58[6]);
  }
LAB_140098ed1:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140098fea FUN_140098fea body=5462 status=ok
// SIG undefined FUN_140098fea(void)

void FUN_140098fea(longlong param_1,float param_2,char param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong **pplVar19;
  undefined8 uVar20;
  longlong *plVar21;
  byte bVar22;
  longlong lVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  ulonglong *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  char local_2c9;
  ulonglong local_2c8;
  longlong **local_2c0;
  longlong *local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  int *local_260;
  longlong *local_258;
  longlong local_250;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined1 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 uStack_20c;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  int local_1e0;
  int local_1dc;
  undefined1 local_1d8 [96];
  undefined1 *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 uStack_160;
  longlong local_158;
  uint local_150;
  int local_14c;
  int local_148;
  longlong **local_138;
  undefined8 local_130;
  longlong local_108;
  undefined8 local_100;
  longlong **local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_178 = (undefined1 *)0x0;
  local_170 = 0xc00000000;
  iVar16 = *DAT_14cb0b1a0;
  plVar27 = &local_250;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  *(longlong **)(param_1 + 0x408) = plVar27;
  local_250 = param_1;
  if ((longlong)*(int *)(param_1 + 0x400) != 0) {
    plVar27 = *(longlong **)(param_1 + 0x3f8);
    plVar21 = plVar27 + *(int *)(param_1 + 0x400);
    uVar38 = 0x7fffffffffffffff;
    if (0 < iVar16) {
      uVar38 = (longlong)iVar16;
    }
    local_2a8 = param_1 + 0x2b8;
    local_260 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    local_2c9 = param_3;
    local_280 = param_1;
    local_258 = plVar21;
    do {
      plVar3 = (longlong *)*plVar27;
      if (plVar3 != (longlong *)0x0) {
        cVar9 = FUN_14371c4e8(plVar3,uVar38 & 0xffffffff);
        if (cVar9 != '\0') {
          local_228 = 0;
          local_220 = 0;
          uStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_20c = 0;
          uStack_204 = 0;
          local_200 = 0;
          local_21c = 0;
          uStack_214 = 0;
          FUN_1400d4af4(&local_228,4,*plVar3,plVar3 + 0xd);
          local_2b8 = plVar3 + 4;
          local_290 = plVar3 + 0xb;
          local_288 = plVar3 + 9;
          local_298 = plVar3 + 0xf;
          local_278 = plVar3 + 0x11;
          local_2a0 = plVar3 + 0xd;
          do {
            lVar31 = DAT_14cb0b168;
            bVar22 = *(byte *)(*plVar3 + 0x240);
            iVar16 = *local_260;
            if (iVar16 == 0x40000002) {
              uVar25 = 0;
            }
            else {
              bVar39 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar16 != 2)) {
                if (iVar16 == 1) {
                  DVar12 = FUN_140ad26c0();
                  local_2c8 = uVar38;
                  DVar13 = GetCurrentThreadId();
                  bVar39 = DVar12 == DVar13;
                  uVar38 = local_2c8;
                }
                else {
                  bVar39 = false;
                }
              }
              uVar25 = (ulonglong)(bVar39 ^ 1);
            }
            plVar18 = local_2a0;
            if (*(byte *)(plVar3 + 8) < 6) {
              uVar14 = *(undefined4 *)(lVar31 + uVar25 * 4);
              switch(*(byte *)(plVar3 + 8)) {
              case 0:
                uVar15 = *(uint *)(*plVar3 + 0x138);
                uVar25 = (ulonglong)uVar15;
                iVar16 = (int)plVar3[0xe];
                plVar30 = local_2a0;
                if ((uint)(iVar16 - *(int *)((longlong)plVar3 + 0x9c)) < uVar15) {
                  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456acd4b((longlong)(int)uVar15);
                  }
                  if (iVar16 < (int)uVar15) {
                    iVar34 = *(int *)((longlong)plVar3 + 0x74);
                    iVar35 = iVar16;
                    local_2c8 = uVar25;
                    if (iVar34 < (int)uVar15) {
                      FUN_140411364(local_2a0,uVar15);
                      iVar35 = (int)plVar3[0xe];
                      iVar34 = *(int *)((longlong)plVar3 + 0x74);
                    }
                    uVar15 = (int)local_2c8 - iVar16;
                    local_2c0 = (longlong **)(ulonglong)uVar15;
                    *(uint *)(plVar3 + 0xe) = iVar35 + uVar15;
                    if ((uint)(iVar34 - iVar35) < uVar15) {
                      FUN_1406245f8(plVar18,iVar35);
                    }
                    plVar8 = local_278;
                    plVar7 = local_298;
                    plVar30 = local_2a0;
                    if (iVar35 < (int)local_2c8) {
                      lVar31 = *plVar18;
                      iVar34 = *(int *)((longlong)plVar3 + 0x9c);
                      puVar24 = (undefined4 *)(local_2c8 * 0x1c + lVar31 + -0x18);
                      uVar25 = local_2c8;
                      do {
                        iVar32 = (int)uVar25;
                        if (iVar34 != 0) {
                          *(int *)(lVar31 + (longlong)(int)plVar3[0x13] * 0x1c) = iVar32 + -1;
                        }
                        puVar24[-1] = 0xffffffff;
                        if (*(int *)((longlong)plVar3 + 0x9c) < 1) {
                          uVar14 = 0xffffffff;
                        }
                        else {
                          uVar14 = (undefined4)plVar3[0x13];
                        }
                        uVar25 = uVar25 - 1;
                        *puVar24 = uVar14;
                        *(int *)(plVar3 + 0x13) = iVar32 + -1;
                        iVar34 = *(int *)((longlong)plVar3 + 0x9c) + 1;
                        *(int *)((longlong)plVar3 + 0x9c) = iVar34;
                        puVar24 = puVar24 + -7;
                      } while ((longlong)iVar35 < (longlong)uVar25);
                    }
                    if (iVar16 == 0) {
                      *(uint *)(plVar3 + 0x12) = (uint)local_2c0;
                      uVar29 = (uint)local_2c0 + 0x1f;
                      uVar15 = uVar29 >> 5;
                      plVar18 = (longlong *)plVar3[0x11];
                      if (*(int *)((longlong)plVar3 + 0x94) + 0x1fU >> 5 < uVar15) {
                        local_2b0 = (ulonglong)uVar15;
                        if (((uint)local_2c0 < 0x81) && (plVar18 == (longlong *)0x0)) {
                          plVar18 = (longlong *)0x0;
                        }
                        else {
                          uVar33 = 0;
                          if (0x80 < (uint)local_2c0) {
                            uVar33 = uVar15;
                          }
                          FUN_1446efa72(local_278,0,uVar33,4);
                          plVar18 = (longlong *)*plVar8;
                        }
                        *(uint *)((longlong)plVar3 + 0x94) = uVar29 & 0xffffffe0;
                        uVar15 = (uint)local_2b0;
                      }
                      plVar30 = local_2a0;
                      if (plVar18 == (longlong *)0x0) {
                        plVar18 = local_298;
                      }
                      if ((uint)local_2c0 < 0x101) {
                        uVar15 = uVar15 + (uVar15 == 0);
                      }
                      memset(plVar18,0,(ulonglong)(uVar15 << 2));
                      iVar16 = (int)plVar3[0x12];
                      iVar34 = iVar16 + 0x1f;
                      if (-1 < iVar16) {
                        iVar34 = iVar16;
                      }
                      uVar25 = local_2c8;
                      if (iVar16 % 0x20 != 0) {
                        plVar18 = (longlong *)*local_278;
                        if ((longlong *)*local_278 == (longlong *)0x0) {
                          plVar18 = local_298;
                        }
                        bVar22 = -(char)(iVar16 % 0x20);
                        *(uint *)((longlong)plVar18 + (longlong)(iVar34 >> 5) * 4) =
                             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar34 >> 5) * 4) <<
                                   (bVar22 & 0x1f)) >> (bVar22 & 0x1f);
                      }
                    }
                    else {
                      uVar25 = local_2c8;
                      if (-1 < (int)(uint)local_2c0) {
                        uVar14 = FUN_144a54ea4(local_298,local_2c0);
                        FUN_1447c6044(plVar7,uVar14,local_2c0,0);
                        uVar25 = local_2c8;
                      }
                    }
                  }
                  iVar16 = 1;
                  if (3 < (uint)uVar25) {
                    uVar15 = ((uint)uVar25 | 1) + 0xe;
                    iVar16 = 0x1f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                      }
                    }
                    iVar16 = 1 << ((byte)iVar16 & 0x1f);
                  }
                  if (((int)plVar3[0x16] == 0) || ((int)plVar3[0x16] < iVar16)) {
                    *(int *)(plVar3 + 0x16) = iVar16;
                    FUN_140098d88(plVar30);
                  }
                }
                local_1e0 = 0;
                lVar31 = *plVar3;
                iVar16 = *(int *)(lVar31 + 0x138);
                if (0 < iVar16) {
                  do {
                    local_168 = (longlong *)
                                ((longlong)local_1e0 * 0x10 + *(longlong *)(lVar31 + 0x130));
                    uStack_160 = &local_1e0;
                    FUN_1401337ca(plVar30,&local_1dc,&local_168,0);
                    local_1e0 = local_1e0 + 1;
                    lVar31 = *plVar3;
                    iVar16 = *(int *)(lVar31 + 0x138);
                  } while (local_1e0 < iVar16);
                }
                uVar38 = uVar38 - (longlong)iVar16;
                *(undefined1 *)(plVar3 + 8) = 1;
                FUN_1400d4af4(&local_228,4);
                break;
              case 1:
                lVar31 = *plVar3;
                if ((longlong)*(int *)(lVar31 + 0xa8) == 0) {
                  uVar15 = 0;
                }
                else {
                  plVar18 = *(longlong **)(lVar31 + 0xa0);
                  local_270 = plVar18 + *(int *)(lVar31 + 0xa8);
                  do {
                    lVar31 = *plVar18;
                    if (lVar31 != 0) {
                      lVar28 = *(longlong *)(lVar31 + 0x1c8);
                      if (lVar28 == 0) {
                        local_2c8 = 0;
                      }
                      else {
                        local_2c8 = CONCAT71((int7)((ulonglong)lVar28 >> 8),
                                             *(char *)(lVar28 + 0x1fb) == '\0');
                      }
                      local_a8 = (longlong **)0x0;
                      local_a0 = 0x1800000000;
                      local_268 = plVar18;
                      FUN_14024dbd6(lVar31,&local_168,0);
                      local_2c0 = local_a8;
                      if (local_a8 == (longlong **)0x0) {
                        local_2c0 = &local_168;
                      }
                      uVar15 = 0;
                      if ((longlong)(int)(uint)local_a0 != 0) {
                        uVar25 = (longlong)(int)(uint)local_a0 << 3;
                        uVar26 = 0;
                        local_2b0 = uVar25;
                        do {
                          lVar31 = *(longlong *)((longlong)local_2c0 + uVar26);
                          if (((char)local_2c8 == '\0') || (*(char *)(lVar31 + 0x1fb) != '\0')) {
                            bVar22 = *(byte *)(lVar31 + 0x2d2);
                            *(byte *)(lVar31 + 0x2d2) = bVar22 & 0xef;
                            if ((bVar22 & 0x40) == 0) {
                              FUN_1400970b2(local_2a8,lVar31);
                              uVar25 = local_2b0;
                            }
                          }
                          else {
                            bVar22 = *(byte *)(lVar31 + 0x2d2);
                            *(byte *)(lVar31 + 0x2d2) = bVar22 | 0x10;
                            if ((bVar22 & 0x40) != 0) {
                              FUN_14494216a(local_2a8,lVar31);
                              *(byte *)(lVar31 + 0x2d2) = *(byte *)(lVar31 + 0x2d2) & 0xbf;
                              uVar25 = local_2b0;
                            }
                            iVar16 = (int)plVar3[10];
                            *(uint *)(plVar3 + 10) = iVar16 + 1U;
                            if (*(uint *)((longlong)plVar3 + 0x54) < iVar16 + 1U) {
                              FUN_140097524(local_288,iVar16);
                              uVar25 = local_2b0;
                            }
                            *(longlong *)(*local_288 + (longlong)iVar16 * 8) = lVar31;
                          }
                          uVar26 = uVar26 + 8;
                        } while (uVar25 != uVar26);
                        uVar15 = (uint)local_a0;
                      }
                      if ((int)uVar15 < 2) {
                        uVar15 = 1;
                      }
                      if (local_a8 != (longlong **)0x0) {
                        FUN_1400020a8();
                      }
                      uVar38 = uVar38 - uVar15;
                      plVar18 = local_268;
                    }
                    plVar18 = plVar18 + 1;
                  } while (plVar18 != local_270);
                  lVar31 = *plVar3;
                  uVar15 = *(uint *)(lVar31 + 0xa8);
                }
                uVar25 = (ulonglong)uVar15;
                if ((int)uVar15 < 2) {
                  uVar25 = 1;
                }
                uVar38 = uVar38 - uVar25;
                *(byte *)(lVar31 + 0x240) = *(byte *)(lVar31 + 0x240) | 0x10;
                *(undefined1 *)(plVar3 + 8) = 2;
                break;
              case 2:
                local_2c8 = CONCAT71(local_2c8._1_7_,*(undefined1 *)(*plVar3 + 0x240));
                uVar20 = FUN_140083894();
                bVar10 = FUN_1434a2020(uVar20);
                bVar10 = bVar10 & bVar22 >> 5;
                local_2c0 = (longlong **)CONCAT71(local_2c0._1_7_,bVar10);
                uVar25 = uVar38;
                if ((bVar10 != 0) || (0 < (longlong)uVar38)) {
                  do {
                    iVar16 = (int)plVar3[10];
                    if ((longlong)iVar16 == 0) goto LAB_140099a30;
                    lVar31 = *(longlong *)(plVar3[9] + -8 + (longlong)iVar16 * 8);
                    *(int *)(plVar3 + 10) = iVar16 + -1;
                    if (plVar3[6] == 0) {
                      uVar38 = local_2c8 & 0x20;
                      FUN_1402d4fc6(local_2b8);
                      cVar9 = FUN_1448226f0(plVar3[3],lVar31,&local_228,uVar14);
                      if (uVar38 == 0 && cVar9 == '\0') goto LAB_1400999cf;
                      if (cVar9 != '\x02') goto LAB_1400999a7;
                    }
                    else if ((local_2c8 & 0x20) == 0) {
LAB_1400999cf:
                      iVar16 = (int)plVar3[0xc];
                      *(uint *)(plVar3 + 0xc) = iVar16 + 1U;
                      if (*(uint *)((longlong)plVar3 + 100) < iVar16 + 1U) {
                        FUN_140097524(local_290,iVar16);
                      }
                      *(longlong *)(*local_290 + (longlong)iVar16 * 8) = lVar31;
                    }
                    else {
LAB_1400999a7:
                      bVar22 = *(byte *)(lVar31 + 0x2d2);
                      *(byte *)(lVar31 + 0x2d2) = bVar22 & 0xef;
                      if ((bVar22 & 0x40) == 0) {
                        FUN_1400970b2(local_2a8,lVar31);
                      }
                    }
                    uVar38 = uVar25 - 1;
                    bVar39 = 1 < (longlong)uVar25;
                    uVar25 = uVar38;
                  } while (bVar39 || (char)local_2c0 != '\0');
                }
                uVar25 = uVar38;
                if ((int)plVar3[10] == 0) {
LAB_140099a30:
                  *(undefined4 *)(plVar3 + 10) = 0;
                  if (*(int *)((longlong)plVar3 + 0x54) != 0) {
                    FUN_14009a542(local_288,0);
                  }
                  *(undefined1 *)(plVar3 + 8) = 3;
                  uVar38 = uVar25;
                }
                break;
              case 3:
                if (plVar3[6] == 0) {
                  FUN_1402d4fc6(local_2b8);
                  puVar4 = (undefined8 *)plVar3[3];
                  if (0 < *(int *)(puVar4 + 0x28)) {
                    lVar31 = plVar3[5];
                    puVar5 = *(undefined8 **)(lVar31 + 0x10);
                    if (puVar5 != puVar4) {
                      *(undefined8 **)(lVar31 + 0x10) = puVar4;
                      if (puVar4 != (undefined8 *)0x0) {
                        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
                      }
                      if (puVar5 != (undefined8 *)0x0) {
                        piVar1 = (int *)(puVar5 + 1);
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 == 0) {
                          (**(code **)*puVar5)(puVar5,1);
                        }
                      }
                    }
                    *(undefined4 *)(lVar31 + 0x18) = 1;
                  }
                }
                *(undefined1 *)(plVar3 + 8) = 4;
                break;
              case 4:
                FUN_1402d4fc6(local_2b8);
                iVar16 = FUN_14496b5b2(plVar3[3]);
                uVar38 = uVar38 - (longlong)iVar16;
                *(undefined1 *)(plVar3 + 8) = 5;
                break;
              case 5:
                if ((*(byte *)(*plVar3 + 0x240) & 0x20) != 0) {
                  local_168 = (longlong *)0x0;
                  uStack_160 = (int *)0x0;
                  FUN_1402d4fc6(local_2b8);
                  uVar11 = FUN_1405a1b76(plVar3[3],&local_168);
                  plVar18 = local_168;
                  local_2c8 = CONCAT44(local_2c8._4_4_,uVar11);
                  lVar31 = (longlong)(int)uStack_160;
                  if (lVar31 != 0) {
                    lVar28 = 0;
                    do {
                      bVar22 = *(byte *)(*(longlong *)((longlong)plVar18 + lVar28) + 0x2d2);
                      *(byte *)(*(longlong *)((longlong)plVar18 + lVar28) + 0x2d2) = bVar22 & 0xef;
                      if ((bVar22 & 0x40) == 0) {
                        FUN_1400970b2(local_2a8);
                      }
                      lVar28 = lVar28 + 8;
                    } while (lVar31 * 8 != lVar28);
                  }
                  plVar18 = local_2a0;
                  iVar16 = (int)plVar3[0xc];
                  lVar31 = (longlong)iVar16;
                  if (lVar31 != 0) {
                    do {
                      lVar28 = *(longlong *)(plVar3[0xb] + -8 + (longlong)iVar16 * 8);
                      *(int *)(plVar3 + 0xc) = iVar16 + -1;
                      if (plVar3[6] == 0) {
                        FUN_1402d4fc6(local_2b8);
                        cVar9 = FUN_1448226f0(plVar3[3],lVar28,&local_228,uVar14);
                        if (cVar9 != '\x02') goto LAB_140099897;
                      }
                      else {
LAB_140099897:
                        bVar22 = *(byte *)(lVar28 + 0x2d2);
                        *(byte *)(lVar28 + 0x2d2) = bVar22 & 0xef;
                        if ((bVar22 & 0x40) == 0) {
                          FUN_1400970b2(local_2a8,lVar28);
                        }
                      }
                      iVar16 = (int)plVar3[0xc];
                    } while (iVar16 != 0);
                  }
                  *(undefined4 *)(plVar3 + 0xc) = 0;
                  if (*(int *)((longlong)plVar3 + 100) != 0) {
                    FUN_14009a542(local_290,0);
                  }
                  FUN_140097ee8(plVar18);
                  *(undefined1 *)(plVar3 + 8) = 6;
                  if (local_168 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  uVar38 = uVar38 - ((int)local_2c8 + lVar31);
                }
              }
            }
            cVar9 = FUN_14371c4e8(plVar3,uVar38 & 0xffffffff);
          } while (cVar9 != '\0');
          FUN_14009704e(&local_228);
        }
        if ((char)plVar3[8] == '\x06') {
          if ((*(byte *)(*plVar3 + 0x240) & 0x20) == 0) {
            if ((char)plVar3[1] == '\x01') {
              FUN_1402d4fc6(plVar3 + 4);
              FUN_1400979ba(&local_168,plVar3[3]);
              while (uVar25 = local_170, local_14c < *(int *)(local_158 + 0x18)) {
                uVar20 = *(undefined8 *)(*local_168 + (longlong)local_14c * 0x18);
                lVar31 = (longlong)(int)local_170;
                uVar15 = (int)local_170 + 1;
                local_170 = CONCAT44(local_170._4_4_,uVar15);
                if (local_170._4_4_ < uVar15) {
                  FUN_1405a2340(local_1d8,uVar25 & 0xffffffff);
                }
                puVar17 = local_178;
                if (local_178 == (undefined1 *)0x0) {
                  puVar17 = local_1d8;
                }
                *(undefined8 *)(puVar17 + lVar31 * 8) = uVar20;
                local_150 = ~uStack_160._4_4_ & local_150;
                lVar31 = *(longlong *)(local_158 + 0x10);
                if (*(longlong *)(local_158 + 0x10) == 0) {
                  lVar31 = local_158;
                }
                local_14c = *(int *)(local_158 + 0x18);
                lVar28 = (longlong)(int)uStack_160;
                uVar15 = local_150 & *(uint *)(lVar31 + lVar28 * 4);
                if (uVar15 == 0) {
                  iVar16 = local_14c + 0x1e;
                  if (-1 < local_14c + -1) {
                    iVar16 = local_14c + -1;
                  }
                  iVar34 = iVar16 >> 5;
                  if (iVar16 >> 5 < (int)uStack_160) {
                    iVar34 = (int)uStack_160;
                  }
                  iVar16 = (int)uStack_160 + 1;
                  lVar23 = 0;
                  do {
                    uStack_160 = (int *)CONCAT44(uStack_160._4_4_,iVar16 + (int)lVar23);
                    local_148 = local_148 + 0x20;
                    if (iVar34 - lVar28 == lVar23) goto LAB_1400992f9;
                    uVar15 = *(uint *)(lVar31 + lVar28 * 4 + 4 + lVar23 * 4);
                    local_150 = 0xffffffff;
                    lVar23 = lVar23 + 1;
                  } while (uVar15 == 0);
                }
                uStack_160 = (int *)CONCAT44(-uVar15 & uVar15,(int)uStack_160);
                uVar25 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
                lVar31 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                  }
                }
                iVar16 = (local_148 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                if (iVar16 < local_14c) {
                  local_14c = iVar16;
                }
LAB_1400992f9:
              }
              *(undefined1 *)(plVar3 + 1) = 0;
            }
          }
          else {
            *(undefined1 *)(plVar3 + 1) = 1;
            lVar31 = plVar3[4];
            LOCK();
            bVar39 = *(int *)(lVar31 + 0x30) == 1;
            if (bVar39) {
              *(int *)(lVar31 + 0x30) = 2;
            }
            UNLOCK();
            if (bVar39) {
              FUN_140342504(lVar31 + 0x10,0);
              *(undefined4 *)(lVar31 + 0x30) = 3;
            }
            lVar31 = plVar3[5];
            LOCK();
            bVar39 = *(int *)(lVar31 + 0x18) == 1;
            if (bVar39) {
              *(int *)(lVar31 + 0x18) = 2;
            }
            UNLOCK();
            if (bVar39) {
              FUN_14034264a(lVar31 + 0x10,0);
              *(undefined4 *)(lVar31 + 0x18) = 3;
            }
            lVar31 = plVar3[4];
            if (*(int *)(lVar31 + 0x30) != 0) {
              while (*(int *)(lVar31 + 0x30) != 3) {
                FUN_14000f986(0);
              }
              if (*(int *)(lVar31 + 0x18) == 0) {
                plVar18 = (longlong *)0x0;
              }
              else {
                plVar18 = *(longlong **)(lVar31 + 0x10);
              }
              (**(code **)(*plVar18 + 0x58))
                        (plVar18,*(undefined4 *)(lVar31 + 0x28),*(undefined4 *)(lVar31 + 0x2c));
              puVar4 = *(undefined8 **)(lVar31 + 0x20);
              if (puVar4 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar31 + 0x20) = 0;
                piVar1 = (int *)(puVar4 + 1);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
              }
            }
            *(undefined4 *)(lVar31 + 0x30) = 0;
            lVar31 = plVar3[5];
            if (*(int *)(lVar31 + 0x18) != 0) {
              while (*(int *)(lVar31 + 0x18) != 3) {
                FUN_14000f986(0);
              }
              puVar4 = *(undefined8 **)(lVar31 + 0x10);
              if (puVar4 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar31 + 0x10) = 0;
                piVar1 = (int *)(puVar4 + 1);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
              }
            }
            *(undefined4 *)(lVar31 + 0x18) = 0;
            puVar4 = (undefined8 *)plVar3[3];
            iVar16 = (int)plVar3[7];
            iVar34 = *(int *)(puVar4 + 0x28);
            if (iVar16 < iVar34) {
              iVar35 = iVar16 - ((int)ROUND(-0.5 - ((float)iVar34 * param_2 +
                                                   (float)iVar34 * param_2)) >> 1);
              if (iVar34 < iVar35) {
                iVar35 = iVar34;
              }
              lVar31 = plVar3[4];
              puVar5 = *(undefined8 **)(lVar31 + 0x20);
              if (puVar5 != puVar4) {
                *(undefined8 **)(lVar31 + 0x20) = puVar4;
                if (puVar4 != (undefined8 *)0x0) {
                  *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
                }
                if (puVar5 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar5 + 1);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    (**(code **)*puVar5)(puVar5,1);
                  }
                }
              }
              *(int *)(lVar31 + 0x28) = iVar16;
              *(int *)(lVar31 + 0x2c) = iVar35;
              *(undefined4 *)(lVar31 + 0x30) = 1;
              plVar21 = local_258;
            }
          }
        }
      }
      plVar27 = plVar27 + 1;
    } while (plVar27 != plVar21);
    plVar27 = *(longlong **)(local_250 + 0x408);
    param_1 = local_280;
    param_3 = local_2c9;
  }
  lVar31 = local_250;
  uVar15 = *(uint *)(plVar27 + 2);
  if ((longlong)(int)uVar15 != 0) {
    iVar16 = *(int *)(local_250 + 0x400);
    *(uint *)(local_250 + 0x400) = iVar16 + uVar15;
    if ((uint)(*(int *)(local_250 + 0x404) - iVar16) < uVar15) {
      FUN_1456c51ec(local_250 + 0x3f8,iVar16);
    }
    memcpy((void *)((longlong)iVar16 * 8 + *(longlong *)(lVar31 + 0x3f8)),(void *)plVar27[1],
           (longlong)(int)uVar15 << 3);
    plVar27 = *(longlong **)(lVar31 + 0x408);
  }
  local_108 = 0;
  local_100 = 0xc00000000;
  lVar28 = plVar27[4];
  if ((longlong)(int)lVar28 != 0) {
    lVar23 = plVar27[3];
    lVar37 = 0;
    do {
      lVar6 = *(longlong *)(lVar23 + lVar37);
      FUN_140097686(lVar6,&local_168);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0xb0) = 0;
        if (*(longlong *)(lVar6 + 0xa8) != 0) {
          FUN_1400020a8();
        }
        FUN_140096ee6(lVar6 + 0x68);
        if (*(longlong *)(lVar6 + 0x58) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar6 + 0x48) != 0) {
          FUN_1400020a8();
        }
        FUN_140096f1e(lVar6 + 0x10);
        FUN_1400020a8(lVar6);
      }
      lVar37 = lVar37 + 8;
    } while ((longlong)(int)lVar28 * 8 != lVar37);
  }
  FUN_144942036(lVar31,&local_168);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(local_250 + 0x408) = 0;
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  if ((param_3 != '\0') && (*(char *)(param_1 + 0x418) == '\x01')) {
    FUN_14034205c(param_1 + 0x2c0);
    lVar31 = *(longlong *)(param_1 + 0x2c0);
    if ((*(int *)(param_1 + 0x2f4) != -1) && (*(int *)(param_1 + 0x2f8) != -1)) {
      cVar9 = FUN_144a1fb2c(lVar31);
      if (cVar9 != '\0') {
        FUN_144aea852(lVar31);
      }
      *(undefined8 *)(param_1 + 0x2f4) = 0xffffffffffffffff;
    }
    if ((longlong)*(int *)(param_1 + 0x308) == 0) {
      uVar15 = 0;
    }
    else {
      puVar36 = *(ulonglong **)(param_1 + 0x300);
      puVar2 = puVar36 + *(int *)(param_1 + 0x308);
      local_280 = param_1;
      do {
        uVar38 = *puVar36;
        if (*(int *)(lVar31 + 400) != *(int *)(lVar31 + 0x1bc)) {
          uVar15 = ((uint)(uVar38 >> 0x14) & 0xffff ^ (uint)(uVar38 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          lVar28 = *(longlong *)(lVar31 + 0x1c8);
          if (*(longlong *)(lVar31 + 0x1c8) == 0) {
            lVar28 = lVar31 + 0x1c0;
          }
          iVar16 = *(int *)(lVar28 + (ulonglong)
                                     (*(int *)(lVar31 + 0x1d0) - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4
                           );
          if (iVar16 != -1) {
            lVar28 = *(longlong *)(lVar31 + 0x188);
            do {
              lVar23 = (longlong)iVar16;
              if (*(ulonglong *)(lVar28 + lVar23 * 0x18) == uVar38) {
                iVar16 = *(int *)(lVar28 + 8 + lVar23 * 0x18);
                FUN_1402d4ee2((longlong *)(lVar31 + 0x188));
                local_250 = CONCAT44(local_250._4_4_,iVar16);
                local_138 = (longlong **)0x0;
                local_130 = 0xc00000000;
                if (iVar16 != -1) {
                  do {
                    local_1dc = -1;
                    local_228 = 0;
                    local_2d8 = &local_228;
                    FUN_1449e7404(lVar31,iVar16,&local_250,&local_1dc);
                    uVar25 = local_130;
                    iVar16 = local_1dc;
                    if (local_1dc != -1) {
                      pplVar19 = local_138;
                      if (local_138 == (longlong **)0x0) {
                        pplVar19 = &local_168;
                      }
                      lVar28 = (longlong)(int)local_130;
                      if (lVar28 != 0) {
                        uVar26 = 0;
                        do {
                          if (*(int *)((longlong)pplVar19 + uVar26) == local_1dc) {
                            if ((int)(~uVar26 >> 2) != 0) goto LAB_14009a155;
                            break;
                          }
                          uVar26 = uVar26 + 4;
                        } while (lVar28 * 4 - uVar26 != 0);
                      }
                      uVar15 = (int)local_130 + 1;
                      local_130 = CONCAT44(local_130._4_4_,uVar15);
                      if (local_130._4_4_ < uVar15) {
                        FUN_146beb88a(&local_168,uVar25 & 0xffffffff);
                      }
                      pplVar19 = local_138;
                      if (local_138 == (longlong **)0x0) {
                        pplVar19 = &local_168;
                      }
                      *(int *)((longlong)pplVar19 + lVar28 * 4) = iVar16;
                    }
LAB_14009a155:
                    if (local_228 != 0) {
                      FUN_1449e7388(local_1d8,&local_228);
                    }
                    iVar16 = (int)local_250;
                  } while ((int)local_250 != -1);
                  if (0 < (int)local_130) {
                    lVar28 = 0;
                    do {
                      pplVar19 = local_138;
                      if (local_138 == (longlong **)0x0) {
                        pplVar19 = &local_168;
                      }
                      FUN_1405a20f0(lVar31,*(undefined4 *)((longlong)pplVar19 + lVar28 * 4));
                      lVar28 = lVar28 + 1;
                    } while (lVar28 < (int)local_130);
                  }
                  if (local_138 != (longlong **)0x0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              iVar16 = *(int *)(lVar28 + lVar23 * 0x18 + 0x10);
            } while (iVar16 != -1);
          }
        }
        *(byte *)(uVar38 + 0x2d2) = *(byte *)(uVar38 + 0x2d2) & 0x5f;
        puVar36 = puVar36 + 1;
      } while (puVar36 != puVar2);
      uVar15 = *(uint *)(local_280 + 0x308);
      param_1 = local_280;
    }
    plVar27 = (longlong *)(param_1 + 0x300);
    uVar29 = uVar15;
    if ((int)DAT_14cb0a438 < (int)uVar15) {
      uVar29 = DAT_14cb0a438;
    }
    if ((int)DAT_14cb0a438 < 1) {
      uVar29 = uVar15;
    }
    if (0 < (int)uVar29) {
      uVar38 = 0;
      do {
        lVar28 = *(longlong *)(*plVar27 + uVar38 * 8);
        if ((((lVar28 != 0) && ((*(byte *)(lVar28 + 0x2d2) & 0x20) == 0)) &&
            ((*(uint *)(lVar28 + 8) >> 0x1e & 1) == 0)) &&
           (((*(uint *)(lVar28 + 8) & 0x18000) == 0 && ((*(byte *)(lVar28 + 0x9c) & 1) != 0)))) {
          if (((*(byte *)(lVar28 + 0x9c) & 2) == 0) || (*(longlong *)(lVar28 + 0x5a8) != 0)) {
LAB_14009a2aa:
            FUN_14164f7dc(&local_168,4,lVar28);
            cVar9 = FUN_144a45796(lVar31,lVar28,&local_168);
            if (cVar9 == '\x02') {
              *(byte *)(lVar28 + 0x2d2) = *(byte *)(lVar28 + 0x2d2) | 0x20;
            }
            FUN_14009704e();
          }
          else {
            uVar20 = FUN_14078ee06();
            plVar21 = (longlong *)FUN_144718840(lVar28,uVar20);
            if (plVar21 != (longlong *)0x0) {
              iVar16 = (**(code **)(*plVar21 + 0x40))();
              if (iVar16 != -1) goto LAB_14009a2aa;
            }
          }
        }
        *(undefined8 *)(*plVar27 + uVar38 * 8) = 0;
        uVar38 = uVar38 + 1;
      } while (uVar29 != uVar38);
      uVar15 = *(uint *)(param_1 + 0x308);
    }
    if (0 < (int)uVar15) {
      lVar31 = 0;
      bVar39 = false;
      do {
        uVar29 = (uint)lVar31;
        lVar31 = (longlong)(int)uVar29;
        lVar28 = *plVar27 + lVar31 * 8;
        lVar23 = 0;
        while (*(longlong *)(lVar28 + lVar23 * 8) != 0) {
          lVar37 = lVar31 + lVar23;
          lVar23 = lVar23 + 1;
          if ((longlong)(int)uVar15 <= lVar37 + 1) {
            if (!bVar39) goto LAB_14009a39a;
            goto LAB_14009a392;
          }
        }
        iVar16 = (int)lVar23;
        if (~uVar29 + uVar15 != iVar16) {
          iVar34 = (~uVar29 + uVar15) - iVar16;
          if (0 < iVar34) {
            iVar34 = 1;
          }
          memmove((void *)(lVar28 + lVar23 * 8),
                  (void *)(*plVar27 + (longlong)(int)(uVar15 - iVar34) * 8),(longlong)iVar34 << 3);
          uVar15 = *(uint *)(param_1 + 0x308);
        }
        lVar31 = lVar31 + lVar23;
        uVar15 = uVar15 - 1;
        *(uint *)(param_1 + 0x308) = uVar15;
        bVar39 = true;
      } while ((int)(uVar29 + iVar16) < (int)uVar15);
LAB_14009a392:
      FUN_1402d50dc(plVar27);
    }
LAB_14009a39a:
    FUN_14065c15e(param_1 + 0x2b8,param_2);
  }
  FUN_144942036(param_1,local_1d8);
  if (local_178 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009a542 FUN_14009a542 body=96 status=ok
// SIG undefined FUN_14009a542(void)

void FUN_14009a542(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 14009a5a2 FUN_14009a5a2 body=353 status=ok
// SIG undefined FUN_14009a5a2(void)

void FUN_14009a5a2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14009a629;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14009a629:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14009a704 FUN_14009a704 body=353 status=ok
// SIG undefined FUN_14009a704(void)

void FUN_14009a704(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14009a78b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14009a78b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14009a872 FUN_14009a872 body=116 status=ok
// SIG undefined FUN_14009a872(void)

void FUN_14009a872(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14103c616(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9dc7e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14009a8fc FUN_14009a8fc body=278 status=ok
// SIG undefined FUN_14009a8fc(void)

undefined8 FUN_14009a8fc(char *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint *puVar11;
  bool bVar12;
  
  cVar3 = *param_1;
  if ((byte)(cVar3 - 1U) < 2) {
    puVar11 = (uint *)(param_1 + 8);
    if (((cVar3 == '\x01') ||
        ((((*(uint *)(param_1 + 0xc) != 0 && (uVar4 = *puVar11, -1 < (int)uVar4)) &&
          ((int)uVar4 < DAT_14c9647dc)) &&
         (((puVar11 = (uint *)((ulonglong)((uVar4 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           puVar11 != (uint *)0x0 && (puVar11[4] == *(uint *)(param_1 + 0xc))) &&
          ((puVar11[2] & 0x10200000) == 0)))))) && (lVar10 = *(longlong *)puVar11, lVar10 != 0)) {
      *param_2 = *(undefined8 *)(lVar10 + 0x10);
      *param_3 = lVar10;
      *param_4 = lVar10;
      return 1;
    }
  }
  else if ((cVar3 == '\x03') && (plVar5 = *(longlong **)(param_1 + 0x10), plVar5 != (longlong *)0x0)
          ) {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) {
        return 0;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    plVar6 = *(longlong **)(param_1 + 8);
    if (plVar6 != (longlong *)0x0) {
      uVar9 = (**(code **)(*plVar6 + 8))(plVar6);
      *param_2 = uVar9;
      *param_3 = (longlong)plVar6;
      if (param_1[0x20] == '\x02') {
        lVar10 = FUN_14479d2ce(param_1 + 0x18);
      }
      else {
        lVar10 = 0;
      }
      *param_4 = lVar10;
    }
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
    if (plVar6 != (longlong *)0x0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14009aa12 FUN_14009aa12 body=234 status=ok
// SIG undefined FUN_14009aa12(void)

void FUN_14009aa12(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    iVar2 = (int)(uVar1 / 0xb0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xb0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14009aafc FUN_14009aafc body=274 status=ok
// SIG undefined FUN_14009aafc(void)

void FUN_14009aafc(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0x150;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14009ac10 FUN_14009ac10 body=111 status=ok
// SIG undefined FUN_14009ac10(void)

void FUN_14009ac10(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x14);
  FUN_1447af328(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x14) != 0)) {
    FUN_1483ef5dc(param_2 + 8,0);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  puVar3[1] = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar2 = puVar3;
  }
  return;
}



// FUNCTION 14009ac80 FUN_14009ac80 body=542 status=ok
// SIG undefined FUN_14009ac80(void)

void FUN_14009ac80(code *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  code **local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    local_38 = &local_30;
    local_40 = FUN_14479fc2c;
    local_30 = param_1;
    FUN_1401a122e(*(longlong *)(param_1 + 0xf8),param_2);
    uVar1 = *(uint *)(param_2 + 1);
    if ((0 < (longlong)(int)uVar1) && (lVar4 = *(longlong *)(param_1 + 0x110), lVar4 != 0)) {
      *(uint *)(param_2 + 1) = uVar1 + 1;
      if (*(uint *)((longlong)param_2 + 0xc) <= uVar1) {
        FUN_144769b64(param_2,uVar1);
      }
      *(longlong *)(*param_2 + (longlong)(int)uVar1 * 8) = lVar4;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cad3688 == 0) {
      local_60 = &local_30;
      local_30 = FUN_144b223ce;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1417963e0;
      local_68 = &LAB_147a2f4c9;
      local_70 = &LAB_1400ea6f8;
      local_78 = L"Engine";
      local_80 = 0x200000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
        DAT_14cad3688 + 0x30)) {
      lVar4 = (**(code **)(*plVar3 + 0x648))(plVar3);
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*plVar3 + 0x648))(plVar3);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar5;
      }
      lVar4 = (**(code **)(*plVar3 + 0x658))(plVar3);
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*plVar3 + 0x658))(plVar3);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar5;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009aea0 FUN_14009aea0 body=367 status=ok
// SIG undefined FUN_14009aea0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_14009aea0(PSRWLOCK param_1,uint *param_2)

{
  PSRWLOCK pRVar1;
  PVOID pvVar2;
  int iVar3;
  PSRWLOCK pRVar4;
  int *piVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_48 [2];
  uint *local_40;
  uint *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = 0;
  if (((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != DAT_14c948000)) {
    AcquireSRWLockExclusive(param_1);
    pRVar1 = param_1 + 1;
    local_48[1] = 0xffffffff;
    local_48[0] = *param_2;
    if (*(int *)&param_1[2].Ptr != *(int *)((longlong)&param_1[7].Ptr + 4)) {
      pRVar4 = param_1 + 8;
      if (param_1[9].Ptr != (PSRWLOCK)0x0) {
        pRVar4 = param_1[9].Ptr;
      }
      iVar3 = *(int *)((longlong)&pRVar4->Ptr +
                      (ulonglong)(*(int *)&param_1[10].Ptr - 1U & local_48[0]) * 4);
      if (iVar3 != -1) {
        do {
          pvVar2 = (PVOID)((longlong)pRVar1->Ptr + (longlong)iVar3 * 0x10);
          if (*(uint *)((longlong)pRVar1->Ptr + (longlong)iVar3 * 0x10) == local_48[0]) {
            if (pvVar2 != (PVOID)0x0) goto LAB_14009af8d;
            break;
          }
          iVar3 = *(int *)((longlong)pvVar2 + 8);
        } while (iVar3 != -1);
      }
    }
    local_40 = local_48;
    local_38 = local_48 + 1;
    local_58 = 0;
    FUN_140283f54(pRVar1,&local_2c);
    pvVar2 = (PVOID)((longlong)pRVar1->Ptr + (longlong)local_2c * 0x10);
LAB_14009af8d:
    piVar5 = (int *)((longlong)pvVar2 + 4);
    if (*piVar5 == -1) {
      *piVar5 = *(int *)&param_1[0xd].Ptr;
      iVar3 = FUN_14154560e(param_1 + 0xb,1);
      FUN_1447a97f4((ulonglong)(uint)(iVar3 % 0x199) * 0x28 +
                    *(longlong *)((longlong)param_1[0xb].Ptr + (longlong)(iVar3 / 0x199) * 8),
                    param_2);
    }
    ReleaseSRWLockExclusive(param_1);
    iVar3 = *piVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14009b010 FUN_14009b010 body=1196 status=ok
// SIG undefined FUN_14009b010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009b010(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  lVar8 = DAT_14c9a1088;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = param_2;
  if (param_1 == &DAT_14c9a1308) goto LAB_14009b42e;
  if (param_3 == '\x01') {
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar6 == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar14 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
        if (iVar6 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          bVar14 = DVar9 == DVar10;
        }
        else {
          bVar14 = false;
        }
      }
      uVar11 = (ulonglong)(bVar14 ^ 1);
    }
    if (*(char *)(lVar8 + uVar11) == '\x01') {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar3 = (undefined4 *)(lVar8 + 0xc7c);
      uVar7 = *puVar3;
      pbVar4 = (byte *)(lVar8 + 0xc80);
      bVar5 = *pbVar4;
      if ((bVar5 & 1) != 0) {
        *pbVar4 = 0;
        *puVar3 = 0xffffffff;
      }
      plVar12 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14a176070;
      *(undefined1 *)((longlong)plVar12 + 0x12) = 0;
      *(byte *)((longlong)plVar12 + 0x13) = *(byte *)((longlong)plVar12 + 0x13) & 0xe0;
      *(undefined4 *)((longlong)plVar12 + 0x14) = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      *(undefined2 *)(plVar12 + 6) = 0xffff;
      *(undefined4 *)((longlong)plVar12 + 0x34) = 0;
      plVar12[7] = 0;
      *(undefined2 *)(plVar12 + 2) = 0;
      plVar12[3] = 0;
      if (plVar12 == (longlong *)0x0) {
        *param_1 = 0x10;
        plVar13 = (longlong *)param_1[1];
        if (plVar13 != (longlong *)0x0) {
          param_1[1] = 0;
LAB_14009b386:
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
          if (plVar12 != (longlong *)0x0) goto LAB_14009b3c7;
        }
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *param_1 = (longlong)(plVar12 + 2);
        plVar13 = (longlong *)param_1[1];
        if (plVar12 == plVar13) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        else {
          param_1[1] = (longlong)plVar12;
          if (plVar13 != (longlong *)0x0) goto LAB_14009b386;
        }
LAB_14009b3c7:
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      *(byte *)(*param_1 + 3) = *(byte *)(*param_1 + 3) | 8;
      if ((bVar5 & 1) != 0) {
        *puVar3 = uVar7;
        *pbVar4 = 1;
      }
    }
    else {
LAB_14009b273:
      plVar12 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14a176070;
      *(undefined1 *)((longlong)plVar12 + 0x12) = 0;
      *(byte *)((longlong)plVar12 + 0x13) = *(byte *)((longlong)plVar12 + 0x13) & 0xe0;
      *(undefined4 *)((longlong)plVar12 + 0x14) = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      *(undefined2 *)(plVar12 + 6) = 0xffff;
      *(undefined4 *)((longlong)plVar12 + 0x34) = 0;
      plVar12[7] = 0;
      *(undefined2 *)(plVar12 + 2) = 0;
      plVar12[3] = 0;
      if (plVar12 == (longlong *)0x0) {
        *param_1 = 0x10;
        plVar13 = (longlong *)param_1[1];
        if (plVar13 != (longlong *)0x0) {
          param_1[1] = 0;
LAB_14009b304:
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
          if (plVar12 != (longlong *)0x0) goto LAB_14009b348;
        }
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *param_1 = (longlong)(plVar12 + 2);
        plVar13 = (longlong *)param_1[1];
        if (plVar12 == plVar13) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        else {
          param_1[1] = (longlong)plVar12;
          if (plVar13 != (longlong *)0x0) goto LAB_14009b304;
        }
LAB_14009b348:
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  else {
    if (((param_3 != '\0') ||
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xe50) == 0)) || ((DAT_14c9a1090 & 1) == 0)) goto LAB_14009b273;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
    plVar12 = DAT_14c9a1098;
    if (DAT_14c9a1098 == (longlong *)0x0) {
      FUN_144aa7aba(&DAT_14c9a1098,0x708);
      plVar12 = DAT_14c9a1098;
    }
    DAT_14c9a1098 = (longlong *)*plVar12;
    _DAT_14c9a10a4 = _DAT_14c9a10a4 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
    plVar12[1] = (longlong)&DAT_100000001;
    *(undefined1 *)((longlong)plVar12 + 0x12) = 0;
    *(byte *)((longlong)plVar12 + 0x13) = *(byte *)((longlong)plVar12 + 0x13) & 0xe0;
    *(undefined4 *)((longlong)plVar12 + 0x14) = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    *(undefined2 *)(plVar12 + 6) = 0xffff;
    *(undefined4 *)((longlong)plVar12 + 0x34) = 0;
    plVar12[7] = 0;
    *(undefined2 *)(plVar12 + 2) = 0;
    plVar12[3] = 0;
    *plVar12 = (longlong)&PTR_FUN_14a176050;
    if (plVar12 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar13 = (longlong *)param_1[1];
      if (plVar13 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14009b168:
        LOCK();
        plVar12 = plVar13 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar6 = *piVar2;
          UNLOCK();
joined_r0x00014009b40f:
          if (iVar6 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *param_1 = (longlong)(plVar12 + 2);
      plVar13 = (longlong *)param_1[1];
      if (plVar12 == plVar13) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar6 = *piVar2;
          UNLOCK();
          plVar13 = plVar12;
          goto joined_r0x00014009b40f;
        }
      }
      else {
        param_1[1] = (longlong)plVar12;
        if (plVar13 != (longlong *)0x0) goto LAB_14009b168;
      }
    }
    *(byte *)(*param_1 + 3) = *(byte *)(*param_1 + 3) | 0x10;
  }
  FUN_14474d54a(*param_1,&local_44);
LAB_14009b42e:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009b4be FUN_14009b4be body=256 status=ok
// SIG undefined FUN_14009b4be(void)

void FUN_14009b4be(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar4 & (uVar1 + uVar4) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0);
      }
    }
    uVar4 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar4 = uVar1 >> 4 & 0xffffffff;
    }
  }
  iVar3 = (int)uVar4;
  if (iVar3 != *(int *)((longlong)param_1 + 0x14)) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
    if (iVar3 != 0 || *param_1 != 0) {
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afa99(0x20,(longlong)iVar3,0x10);
      }
      lVar2 = FUN_1456c5272(CONCAT71((int7)(uVar4 >> 8),(char)param_1[1]),*param_1,uVar4 << 4,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14009b5c0 FUN_14009b5c0 body=251 status=ok
// SIG undefined FUN_14009b5c0(void)

void FUN_14009b5c0(void *param_1,int param_2)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x408);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x41) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0x40;
    _Src = *(void **)((longlong)param_1 + 0x400);
LAB_14009b68a:
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
    goto LAB_14009b666;
  }
  if (*(uint *)((longlong)param_1 + 0x40c) < 0x41) {
    *(uint *)((longlong)param_1 + 0x40c) = uVar2;
LAB_14009b644:
    _Src = *(void **)((longlong)param_1 + 0x400);
    uVar1 = uVar2;
  }
  else {
    uVar1 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + uVar2 + 0x10;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined4 *)((longlong)param_1 + 0x40c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      goto LAB_14009b644;
    }
    *(uint *)((longlong)param_1 + 0x40c) = uVar1;
    _Src = *(void **)((longlong)param_1 + 0x400);
    if (uVar1 < 0x41) goto LAB_14009b68a;
  }
  if (_Src != (void *)0x0) {
    FUN_14009b6bc((longlong)param_1 + 0x400,param_2,uVar1);
    return;
  }
  FUN_14009b6bc((longlong)param_1 + 0x400,0,uVar1);
  _Dst = *(void **)((longlong)param_1 + 0x400);
  _Src = param_1;
LAB_14009b666:
  memmove(_Dst,_Src,(longlong)param_2 << 4);
  return;
}



// FUNCTION 14009b6bc FUN_14009b6bc body=362 status=ok
// SIG undefined FUN_14009b6bc(void)

void FUN_14009b6bc(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  int iVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146815189(param_3,0x10);
  }
  local_58 = (void *)*param_1;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar9 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar9) {
      DVar5 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar9) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  iVar4 = param_3 * 0x10;
  uVar7 = (ulonglong)(iVar4 == 0) << 3 | 0xfffffffffffffff0;
  uVar6 = (uint)(iVar4 != 0) * 8;
  lVar1 = (ulonglong)uVar6 + 7;
  _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar7);
  uVar8 = (longlong)_Dst + (longlong)iVar4;
  if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
    FUN_140023dd8(puVar2,uVar6 + 8 + iVar4);
    _Dst = (void *)(lVar1 + *puVar2 & uVar7);
    uVar8 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar8;
  *param_1 = _Dst;
  if (param_2 != 0 && local_58 != (void *)0x0) {
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    memcpy(_Dst,local_58,(longlong)param_2 << 4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009b828 FUN_14009b828 body=241 status=ok
// SIG undefined FUN_14009b828(void)

void FUN_14009b828(void *param_1,int param_2)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x1008);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x41) {
    *(undefined4 *)((longlong)param_1 + 0x100c) = 0x40;
    _Src = *(void **)((longlong)param_1 + 0x1000);
LAB_14009b876:
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
    goto LAB_14009b90e;
  }
  if (*(uint *)((longlong)param_1 + 0x100c) < 0x41) {
    *(uint *)((longlong)param_1 + 0x100c) = uVar2;
LAB_14009b890:
    _Src = *(void **)((longlong)param_1 + 0x1000);
    uVar1 = uVar2;
  }
  else {
    uVar1 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + uVar2 + 0x10;
    if ((int)uVar1 < (int)uVar2) {
      *(undefined4 *)((longlong)param_1 + 0x100c) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      goto LAB_14009b890;
    }
    *(uint *)((longlong)param_1 + 0x100c) = uVar1;
    _Src = *(void **)((longlong)param_1 + 0x1000);
    if (uVar1 < 0x41) goto LAB_14009b876;
  }
  if (_Src != (void *)0x0) {
    FUN_14009bd08((longlong)param_1 + 0x1000,param_2,uVar1);
    return;
  }
  FUN_14009bd08((longlong)param_1 + 0x1000,0,uVar1);
  _Dst = *(void **)((longlong)param_1 + 0x1000);
  _Src = param_1;
LAB_14009b90e:
  memmove(_Dst,_Src,(longlong)param_2 << 6);
  return;
}



// FUNCTION 14009b91a FUN_14009b91a body=306 status=ok
// SIG undefined FUN_14009b91a(void)

void FUN_14009b91a(ulonglong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146815189(param_2,4);
  }
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar10 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar10) {
      DVar4 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar10) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_41);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  uVar7 = param_2 * 4;
  uVar9 = (ulonglong)(uVar7 < 0x10) << 3 | 0xfffffffffffffff0;
  uVar6 = (uint)(uVar7 >= 0x10) * 8;
  lVar2 = (ulonglong)uVar6 + 7;
  uVar5 = *(longlong *)((longlong)lpTlsValue + 0x10) + lVar2 & uVar9;
  uVar8 = uVar5 + (longlong)(int)uVar7;
  if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
    FUN_140023dd8(puVar1,uVar6 + 8 + uVar7);
    uVar5 = lVar2 + *puVar1 & uVar9;
    uVar8 = (longlong)(int)uVar7 + uVar5;
  }
  *puVar1 = uVar8;
  *param_1 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009ba4e FUN_14009ba4e body=696 status=ok
// SIG undefined FUN_14009ba4e(void)

void FUN_14009ba4e(void *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  LPVOID pvVar8;
  byte bVar9;
  void *pvVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar13 = param_2 + 0x1fU >> 5;
  uVar15 = *(int *)((longlong)param_1 + 0x14) + 0x1f;
  pvVar12 = *(void **)((longlong)param_1 + 8);
  if (uVar15 < 0x60) {
    pvVar10 = param_1;
    if (pvVar12 == (void *)0x0) goto LAB_14009bb42;
  }
  else {
    uVar15 = uVar15 >> 5;
    if (pvVar12 != (void *)0x0) {
      DVar6 = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        DVar6 = TlsAlloc();
        DVar7 = 0xffffffff;
        LOCK();
        bVar18 = DAT_14c7585d0 != 0xffffffff;
        DVar4 = DVar6;
        if (bVar18) {
          DVar7 = DAT_14c7585d0;
          DVar4 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar4;
        UNLOCK();
        if (bVar18) {
          TlsFree(DVar6);
          DVar6 = DVar7;
        }
      }
      pvVar8 = TlsGetValue(DVar6);
      if (pvVar8 == (LPVOID)0x0) {
        pvVar8 = (LPVOID)FUN_140036a08(&local_49);
        FUN_140fddf04(pvVar8);
        TlsSetValue(DVar6,pvVar8);
      }
      puVar14 = (ulonglong *)((longlong)pvVar8 + 0x10);
      uVar2 = uVar15 * 4;
      uVar16 = (ulonglong)(uVar15 == 3) << 3 | 0xfffffffffffffff0;
      uVar11 = (uint)(uVar15 != 3) * 8;
      lVar1 = (ulonglong)uVar11 + 7;
      pvVar10 = (void *)(*(longlong *)((longlong)pvVar8 + 0x10) + lVar1 & uVar16);
      uVar17 = (longlong)pvVar10 + (ulonglong)uVar2;
      if (*(ulonglong *)((longlong)pvVar8 + 0x18) < uVar17) {
        local_58 = puVar14;
        FUN_140023dd8(puVar14,uVar11 + 8 + uVar2);
        pvVar10 = (void *)(lVar1 + *local_58 & uVar16);
        uVar17 = (ulonglong)uVar2 + (longlong)pvVar10;
        puVar14 = local_58;
      }
      *puVar14 = uVar17;
      *(void **)((longlong)param_1 + 8) = pvVar10;
      if (0x1f < param_2 + 0x1fU) {
        if (uVar15 < uVar13) {
          uVar13 = uVar15;
        }
        memcpy(pvVar10,pvVar12,(ulonglong)(uVar13 << 2));
      }
      goto LAB_14009bb42;
    }
    DVar6 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar6 = TlsAlloc();
      DVar7 = 0xffffffff;
      LOCK();
      bVar18 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = DVar6;
      if (bVar18) {
        DVar7 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar18) {
        TlsFree(DVar6);
        DVar6 = DVar7;
      }
    }
    pvVar8 = TlsGetValue(DVar6);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = (LPVOID)FUN_140036a08(&local_4a);
      FUN_140fddf04(pvVar8);
      TlsSetValue(DVar6,pvVar8);
    }
    puVar14 = (ulonglong *)((longlong)pvVar8 + 0x10);
    uVar2 = uVar15 * 4;
    uVar16 = (ulonglong)(uVar15 == 3) << 3 | 0xfffffffffffffff0;
    uVar15 = (uint)(uVar15 != 3) * 8;
    lVar1 = (ulonglong)uVar15 + 7;
    pvVar10 = (void *)(*(longlong *)((longlong)pvVar8 + 0x10) + lVar1 & uVar16);
    uVar17 = (longlong)pvVar10 + (ulonglong)uVar2;
    if (*(ulonglong *)((longlong)pvVar8 + 0x18) < uVar17) {
      FUN_140023dd8(puVar14,uVar15 + 8 + uVar2);
      pvVar10 = (void *)(lVar1 + *puVar14 & uVar16);
      uVar17 = (ulonglong)uVar2 + (longlong)pvVar10;
    }
    *puVar14 = uVar17;
    *(void **)((longlong)param_1 + 8) = pvVar10;
    pvVar12 = param_1;
  }
  memmove(pvVar10,pvVar12,(ulonglong)(uVar13 << 2));
LAB_14009bb42:
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  iVar5 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar5 = iVar3;
  }
  if (iVar3 % 0x20 != 0) {
    pvVar12 = *(void **)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      pvVar12 = param_1;
    }
    bVar9 = -(char)(iVar3 % 0x20);
    *(uint *)((longlong)pvVar12 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
         (bVar9 & 0x1f);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009bd08 FUN_14009bd08 body=364 status=ok
// SIG undefined FUN_14009bd08(void)

void FUN_14009bd08(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146815189(param_3,0x40);
  }
  local_58 = (void *)*param_1;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar9 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar9) {
      DVar5 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar9) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
  uVar4 = param_3 << 6;
  uVar7 = (ulonglong)(uVar4 == 0) << 3 | 0xfffffffffffffff0;
  uVar6 = (uint)(uVar4 != 0) * 8;
  lVar1 = (ulonglong)uVar6 + 7;
  _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar7);
  uVar8 = (longlong)_Dst + (longlong)(int)uVar4;
  if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
    FUN_140023dd8(puVar2,uVar6 + 8 | uVar4);
    _Dst = (void *)(lVar1 + *puVar2 & uVar7);
    uVar8 = (longlong)(int)uVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar8;
  *param_1 = _Dst;
  if (param_2 != 0 && local_58 != (void *)0x0) {
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    memcpy(_Dst,local_58,(longlong)param_2 << 6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009be76 FUN_14009be76 body=152 status=ok
// SIG undefined FUN_14009be76(void)

void FUN_14009be76(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x1000);
  if (*(longlong *)(param_1 + 0x1000) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x102c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x1028) * 0x40) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x102c)) {
    uVar5 = *(undefined4 *)(param_1 + 0x1028);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40 + 4) = uVar5;
  *(int *)(param_1 + 0x1028) = param_2;
  *(int *)(param_1 + 0x102c) = *(int *)(param_1 + 0x102c) + 1;
  lVar4 = param_1 + 0x1010;
  if (*(longlong *)(param_1 + 0x1018) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1018);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14009bf0e thunk_FUN_1447b4020 body=5 status=ok
// SIG undefined thunk_FUN_1447b4020(void)

undefined8 thunk_FUN_1447b4020(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar5 = *(uint *)(lVar2 + 0xc60);
  lVar8 = 0x118;
  if (((uVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar5 == 2)) goto LAB_1447b411d;
  puVar1 = (uint *)(lVar2 + 0xc60);
  if (uVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 == DVar7) goto LAB_1447b411d;
    uVar5 = *puVar1;
  }
  plVar3 = DAT_14c948aa0;
  if (uVar5 == 4) goto LAB_1447b411d;
  if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
    if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_1447b41a2;
    if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
      cVar4 = (**(code **)(*DAT_14c948aa0 + 0x88))(DAT_14c948aa0);
      goto LAB_1447b414f;
    }
    if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
       (DVar6 = GetCurrentThreadId(), DVar6 == *(DWORD *)(plVar3 + 0x50))) goto LAB_1447b411d;
    if ((DAT_14c86a9f8 != '\x01') || (uVar5 = *puVar1, uVar5 == 2)) {
LAB_1447b4195:
      if ((int)plVar3[0xbb] != 0) goto LAB_1447b411d;
      goto LAB_1447b41a2;
    }
    if (uVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 != DVar7) goto LAB_1447b41a2;
      goto LAB_1447b4195;
    }
  }
  else {
    cVar4 = (*(code *)PTR_FUN_14c758760)();
LAB_1447b414f:
    if (cVar4 != '\0') goto LAB_1447b411d;
LAB_1447b41a2:
    uVar5 = *puVar1;
  }
  if (uVar5 != 8) {
    if (DAT_14c86a9fc == 0) {
      lVar8 = 0x120;
      if (((0x20 < uVar5) || ((0x100010004U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
         (uVar5 != 0x40000010)) {
        return 0;
      }
    }
    else {
      lVar8 = 0x120;
      if (((uVar5 - 0x10 & 0xbfffffef) != 0) && (uVar5 != 0x20)) {
        return 0;
      }
    }
  }
LAB_1447b411d:
  return *(undefined8 *)(param_1 + lVar8);
}



// FUNCTION 14009bf14 FUN_14009bf14 body=43 status=ok
// SIG undefined FUN_14009bf14(void)

void FUN_14009bf14(longlong param_1,int *param_2)

{
  *(bool *)(param_1 + 0x83) = *param_2 != 0;
  FUN_14009bf40(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x81) = 1;
  return;
}



// FUNCTION 14009bf40 FUN_14009bf40 body=121 status=ok
// SIG undefined FUN_14009bf40(void)

void FUN_14009bf40(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x50) = 1;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_29 = *(undefined1 *)(param_1 + 0x53);
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    local_28 = param_1;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_29,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009bfba FUN_14009bfba body=9 status=ok
// SIG undefined FUN_14009bfba(void)

void FUN_14009bfba(longlong param_1)

{
  FUN_14009bfc4(param_1 + 0x10);
  return;
}



// FUNCTION 14009bfc4 FUN_14009bfc4 body=144 status=ok
// SIG undefined FUN_14009bfc4(void)

void FUN_14009bfc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a7d4e20;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14009c018;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x18);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(lVar4 + 0x10);
      }
      *(undefined8 *)(lVar7 + 0x290) = param_1[3];
    }
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
LAB_14009c018:
    plVar3 = (longlong *)param_1[5];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014009c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14009c054 FUN_14009c054 body=109 status=ok
// SIG undefined FUN_14009c054(void)

void FUN_14009c054(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 14009c0c2 FUN_14009c0c2 body=452 status=ok
// SIG undefined FUN_14009c0c2(void)

void FUN_14009c0c2(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  undefined8 *local_88;
  float local_80;
  code *local_78;
  undefined4 **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_3;
  cVar2 = (**(code **)(*param_1 + 0x480))(param_1,param_3);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
    cVar2 = FUN_144a7f202(uVar3,DAT_14c9abbf0);
    if (cVar2 == '\0') {
      local_58 = *(undefined8 *)(param_2 + 4);
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      FUN_147cb1712(param_1,&local_68,param_3,param_4);
    }
  }
  lVar5 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    plVar4 = (longlong *)FUN_145a10a92();
    lVar5 = plVar4[0x22];
    if (plVar4[0x22] == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar5 = plVar4[0x22];
    }
  }
  DAT_14c9abbe8 = lVar5;
  lVar1 = DAT_14c9abbe8;
  lVar5 = param_1[0x16];
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if (*(char *)(lVar1 + 0x3c) == '\x01') {
    fVar6 = 1.0 / (float)*(int *)(lVar1 + 0x40);
  }
  else {
    fVar6 = 1.0;
    if ((lVar5 != 0) && (1e-08 < *(float *)(lVar5 + 0x6f4))) {
      fVar6 = *(float *)(lVar5 + 0x6f4);
    }
  }
  uVar3 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  local_70 = &local_90;
  local_88 = &local_48;
  local_78 = FUN_143ce93f2;
  local_90 = param_2;
  local_80 = fVar6;
  FUN_1408d6bd2(uVar3,DAT_14c9abbf8);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009c288 FUN_14009c288 body=1114 status=ok
// SIG undefined FUN_14009c288(void)

void FUN_14009c288(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  if (param_2 != 0) {
    if (DAT_14c9abbf8 == param_2) {
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 == 0) {
        uVar14 = 1;
        uVar13 = 0;
        iVar9 = 0;
        iVar3 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x20);
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar3 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar3 = iVar5 + -1;
          }
          uVar13 = 0;
          uVar14 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar14 = uVar13;
          }
          iVar9 = 0;
          do {
            if (uVar14 == uVar13) goto LAB_14009c588;
            iVar9 = iVar9 + 0x20;
            uVar6 = puVar4[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar13 = 0;
          iVar9 = 0;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar3) {
          iVar3 = iVar5;
        }
      }
      if (iVar3 != iVar5) {
        uVar6 = 0xffffffff;
        do {
          local_50 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x460);
          (*(code *)*param_3)(param_3[1],&local_50);
          uVar6 = ~(uint)uVar14 & uVar6;
          puVar4 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar4 = (uint *)(param_1 + 0x20);
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = (int)uVar13;
          lVar11 = (longlong)iVar3;
          uVar10 = puVar4[lVar11] & uVar6;
          if (uVar10 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar7) {
              lVar12 = 0;
              do {
                uVar10 = puVar4[lVar11 + lVar12 + 1];
                if (uVar10 != 0) {
                  uVar13 = (ulonglong)(iVar3 + (int)lVar12 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_14009c531;
                }
                iVar9 = iVar9 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar8 - lVar11 != lVar12);
              uVar6 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar13 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar2;
          }
          else {
LAB_14009c531:
            uVar14 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar14 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
        } while (iVar3 != iVar5);
      }
    }
    else if ((DAT_14c9abbf0 == param_2) || (DAT_14c9abc00 == param_2)) {
      local_60 = (uint *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 == 0) {
        uVar13 = 1;
        uVar14 = 0;
        iVar9 = 0;
        iVar3 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar4 = local_60;
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar3 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar3 = iVar5 + -1;
          }
          uVar14 = 0;
          uVar13 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar13 = uVar14;
          }
          iVar9 = 0;
          do {
            if (uVar13 == uVar14) goto LAB_14009c588;
            iVar9 = iVar9 + 0x20;
            uVar6 = puVar4[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar14 = 0;
          iVar9 = 0;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar3) {
          iVar3 = iVar5;
        }
      }
      if (iVar3 != iVar5) {
        uVar6 = 0xffffffff;
        do {
          plVar15 = (longlong *)((longlong)iVar3 * 0x460 + *(longlong *)(param_1 + 0x10));
          iVar3 = FUN_14474cf0e(plVar15,&local_58);
          if (1 < iVar3) {
            local_50 = *plVar15;
            (*(code *)*param_3)(param_3[1],&local_50,plVar15 + 2);
          }
          uVar6 = uVar6 & ~(uint)uVar13;
          puVar4 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar4 = local_60;
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = (int)uVar14;
          lVar11 = (longlong)iVar3;
          uVar10 = puVar4[lVar11] & uVar6;
          if (uVar10 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar7) {
              lVar12 = 0;
              do {
                uVar10 = puVar4[lVar11 + lVar12 + 1];
                if (uVar10 != 0) {
                  uVar14 = (ulonglong)(iVar3 + (int)lVar12 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_14009c668;
                }
                iVar9 = iVar9 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar8 - lVar11 != lVar12);
              uVar6 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar14 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar2;
          }
          else {
LAB_14009c668:
            uVar13 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar13 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
        } while (iVar3 != iVar5);
      }
    }
    else if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      uVar6 = (uint)((ulonglong)param_2 >> 0x10);
      uVar10 = (uint)param_2 & 0xffff;
      lVar11 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x50);
      }
      iVar5 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(param_1 + 0x58) - 1U &
                                (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar10)
                                + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar11 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x460;
          if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x460) == param_2) {
            if (lVar11 != -0x10 && lVar11 != 0) {
              local_50 = param_2;
              (*(code *)*param_3)(param_3[1],&local_50);
            }
            break;
          }
          iVar5 = *(int *)(lVar11 + 0x450);
        } while (iVar5 != -1);
      }
    }
  }
LAB_14009c588:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009c6e4 FUN_14009c6e4 body=74 status=ok
// SIG undefined FUN_14009c6e4(void)

undefined8 * FUN_14009c6e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1402ae8a8(param_1,iVar1);
    FUN_14009c72e(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14009c72e FUN_14009c72e body=80 status=ok
// SIG undefined FUN_14009c72e(void)

void FUN_14009c72e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14009c77e FUN_14009c77e body=85 status=ok
// SIG undefined FUN_14009c77e(void)

longlong FUN_14009c77e(longlong param_1,int param_2)

{
  FUN_1447b4866(param_1 + 0x48);
  FUN_140046388(param_1 + 0x38);
  FUN_14009c7d4(param_1 + 0x28);
  FUN_140046388(param_1 + 0x18);
  FUN_14009c7d4(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14009c7d4 FUN_14009c7d4 body=99 status=ok
// SIG undefined FUN_14009c7d4(void)

void FUN_14009c7d4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14009c838 FUN_14009c838 body=71 status=ok
// SIG undefined FUN_14009c838(void)

undefined8 * FUN_14009c838(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e80d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14009c880 FUN_14009c880 body=48 status=ok
// SIG undefined FUN_14009c880(void)

void FUN_14009c880(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14009c8b0 FUN_14009c8b0 body=71 status=ok
// SIG undefined FUN_14009c8b0(void)

undefined8 * FUN_14009c8b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e82a0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14009c8f8 FUN_14009c8f8 body=71 status=ok
// SIG undefined FUN_14009c8f8(void)

undefined8 * FUN_14009c8f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e82e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14009c94e FUN_14009c94e body=291 status=ok
// SIG undefined FUN_14009c94e(void)

void FUN_14009c94e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar4 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar4;
  }
  else {
    bVar7 = false;
    do {
      lVar9 = uVar5 * 0x10 + -8;
      uVar10 = uVar5;
      while (((*(int *)(*param_1 + lVar9) != 0 &&
              (plVar1 = *(longlong **)(*param_1 + -8 + lVar9), plVar1 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2), cVar3 != '\0'))) {
        lVar9 = lVar9 + -0x10;
        bVar2 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          iVar4 = *(int *)((longlong)param_1 + 0x14);
          *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
          if (!bVar7) {
            return;
          }
          goto LAB_14009c9e7;
        }
      }
      uVar5 = uVar10 - 1;
      bVar7 = true;
    } while (1 < uVar10);
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
LAB_14009c9e7:
    if (iVar4 < 2) {
      iVar4 = (int)param_1[1];
      iVar6 = iVar4;
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10), plVar1 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar8);
            FUN_14005b248(param_1);
          }
          else {
            iVar8 = iVar8 + 1;
          }
          iVar6 = (int)param_1[1];
        } while (iVar8 < iVar6);
      }
      iVar8 = 2;
      if (2 < iVar6 * 2) {
        iVar8 = iVar6 * 2;
      }
      *(int *)(param_1 + 2) = iVar8;
      if ((iVar8 < iVar4) && (*(int *)((longlong)param_1 + 0xc) != iVar6)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14009ca72 FUN_14009ca72 body=75 status=ok
// SIG undefined FUN_14009ca72(void)

byte FUN_14009ca72(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1447b4afa();
  bVar2 = FUN_14009cabe(param_1 + 0x1488,param_2,param_3,param_4,1000);
  return bVar2 | bVar1;
}



// FUNCTION 14009cabe FUN_14009cabe body=452 status=ok
// SIG undefined FUN_14009cabe(void)

byte FUN_14009cabe(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  uint param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x6c);
  local_5c = param_5;
  if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
    plVar1 = (longlong *)(param_2 + 0x1a8);
    if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
      lVar7 = param_2 + 0x1e0;
      if (*(longlong *)(param_2 + 0x1e8) != 0) {
        lVar7 = *(longlong *)(param_2 + 0x1e8);
      }
      iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_2 + 0x1f0) - 1U & param_5) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *plVar1 + (longlong)iVar5 * 0x10;
          if (*(uint *)(*plVar1 + (longlong)iVar5 * 0x10) == param_5) {
            if (lVar7 != 0) goto LAB_14009cb62;
            break;
          }
          iVar5 = *(int *)(lVar7 + 8);
        } while (iVar5 != -1);
      }
    }
    local_58 = &local_5c;
    local_68 = 0;
    FUN_1407932ac(plVar1,&local_4c,param_5);
    lVar7 = (longlong)local_4c * 0x10 + *plVar1;
LAB_14009cb62:
    if (*(int *)(lVar7 + 4) != iVar2) {
      *(int *)(lVar7 + 4) = iVar2;
      iVar2 = *(int *)(param_2 + 0x250);
      *(uint *)(param_2 + 0x250) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x254) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_2 + 0x248),iVar2);
      }
      *(uint *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar2 * 4) = local_5c;
      goto LAB_14009cc16;
    }
  }
  else {
LAB_14009cc16:
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar7 = 0;
      bVar6 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar7 * 8);
        if (((plVar1 != (longlong *)0x0) &&
            (cVar3 = (**(code **)(*plVar1 + 0x2c8))(plVar1), cVar3 != '\0')) &&
           (cVar3 = FUN_144a5e2d4(param_2,param_5 + 1 + (int)lVar7,
                                  *(undefined4 *)((longlong)plVar1 + 0x6c)), cVar3 != '\0')) {
          bVar4 = FUN_144a5e2b6(param_2,plVar1,param_3,*param_4);
          bVar6 = bVar6 | bVar4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x38));
      goto LAB_14009cb68;
    }
  }
  bVar6 = 0;
LAB_14009cb68:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6 & 1;
}



// FUNCTION 14009cc84 FUN_14009cc84 body=131 status=ok
// SIG undefined FUN_14009cc84(void)

undefined8
FUN_14009cc84(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte in_R11B;
  longlong lVar7;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 0x228);
  if (lVar2 == 0) {
LAB_14009ccf4:
    bVar1 = 0;
    uVar4 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x220);
    lVar5 = 0;
    lVar7 = 0;
    bVar1 = 0;
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar5) == param_2) {
        lVar6 = lVar6 - lVar7;
        if (lVar6 == 0) goto LAB_14009ccf4;
        uVar3 = FUN_1447b4d5c(param_1,param_2,lVar6 + 0x18,param_3,param_4,param_5);
        in_R11B = (byte)uVar3;
        uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
        bVar1 = 1;
        break;
      }
      lVar7 = lVar7 + -0x28;
      lVar5 = lVar5 + 0x28;
    } while (-lVar7 != lVar2 * 0x28);
  }
  return CONCAT71(uVar4,bVar1 & in_R11B);
}



// FUNCTION 14009cd08 FUN_14009cd08 body=1033 status=ok
// SIG undefined FUN_14009cd08(void)

ulonglong FUN_14009cd08(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_148 [36];
  uint local_124;
  int local_120;
  uint local_11c;
  undefined **local_118 [11];
  longlong *local_c0;
  longlong local_a0;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_11c = param_4;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    uVar8 = 0;
  }
  else if ((param_4 >> 10 & 1) == 0) {
    plVar6 = (longlong *)FUN_140a478a2(param_1,param_2,0);
    uVar8 = 1;
    if (*(char *)(param_1[5] + 0x16c0) != '\x01') {
      bVar11 = *(char *)(param_1[5] + 0x16c0) == '\x02';
      if (bVar11 && plVar6 != (longlong *)0x0) {
        bVar11 = (bool)(*(byte *)(*plVar6 + 0xc) >> 7);
      }
      uVar8 = (ulonglong)bVar11;
      if ((plVar6 != (longlong *)0x0) && (bVar11 == false)) {
        cVar2 = FUN_144b236d8(*plVar6,param_4);
        uVar8 = 0;
        if ((cVar2 != '\0') && (DAT_14cad4bb8 == '\0')) goto LAB_14009cfb4;
      }
    }
    local_120 = 0;
    local_124 = *(uint *)(param_2 + 0xc);
    if ((int)local_124 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_124 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_124 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar9;
      }
    }
    local_120 = iVar4;
    cVar2 = FUN_14105d97a(*(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x1b8),param_2);
    if (cVar2 == '\0') {
      lVar10 = *(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x1b8);
      bVar3 = FUN_14008df0e(param_2);
      uVar7 = (ulonglong)bVar3;
      lVar1 = *(longlong *)(lVar10 + 0x158 + uVar7 * 8);
      *(longlong *)(lVar10 + 0x158 + uVar7 * 8) = lVar1 + 1;
      local_118[0] = (undefined **)(uVar7 + 2 + lVar1 * 2);
      FUN_140a821dc(lVar10,local_118,param_2);
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_140a47a08(param_1,param_2,1);
    }
    lVar10 = *plVar6;
    bVar3 = (byte)uVar8 | (*(byte *)(lVar10 + 0xc) & 0x10) == 0;
    if (bVar3 == 1) {
      *(byte *)((longlong)param_3 + 0xf4) = *(byte *)((longlong)param_3 + 0xf4) | 0x10;
      *(uint *)(*plVar6 + 0xc) = *(uint *)(*plVar6 + 0xc) | 0x10;
      if (DAT_14c761490 != '\0') {
        param_4 = param_4 | 2;
      }
      lVar10 = *plVar6;
    }
    FUN_144a679e2(local_118,param_3[0x17],0x2000);
    uVar5 = FUN_1434b4272(lVar10,param_3,param_4,local_118);
    uVar8 = (ulonglong)uVar5;
    local_118[0] = &PTR_FUN_149e37560;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    plVar6 = local_c0;
    local_118[0] = &PTR__purecall_149e35f70;
    if (local_c0 != (longlong *)0x0) {
      if (*local_c0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar6);
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      if (*(longlong *)(local_a0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar10);
    }
    if (bVar3 == 1 && (char)uVar5 == '\0') {
      FUN_1447400e4(local_118,0,0);
      local_118[0] = &PTR_FUN_149e898a0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1403f2c2c(param_1,param_2,param_3,0);
      local_4c = local_78;
      (**(code **)(*param_3 + 0x188))(param_3);
      (**(code **)(*param_3 + 0x178))(param_3,local_88,CONCAT44(uStack_74,local_78));
      local_118[0] = &PTR_FUN_149e37560;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_118[0] = &PTR__purecall_149e35f70;
      if (local_c0 != (longlong *)0x0) {
        if (*local_c0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_c0);
      }
      if (local_a0 != 0) {
        if (*(longlong *)(local_a0 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      uVar8 = CONCAT71((int7)((ulonglong)local_118 >> 8),1);
    }
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x358))(param_1,param_2,param_3,&local_11c);
    uVar8 = (ulonglong)uVar5;
  }
LAB_14009cfb4:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14009d112 FUN_14009d112 body=131 status=ok
// SIG undefined FUN_14009d112(void)

void FUN_14009d112(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (0 < (longlong)(int)param_2[1]) {
    uVar3 = (longlong)(int)param_2[1] + 1;
    do {
      uVar1 = *(uint *)(*param_2 + -8 + uVar3 * 4);
      iVar2 = (int)param_1[1];
      iVar4 = ~uVar1 + iVar2;
      if (iVar4 != 0) {
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + (longlong)(int)uVar1 * 0x14),
                (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 0x14),(longlong)iVar4 * 0x14);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      FUN_140a3f24e(param_1);
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14009d19e FUN_14009d19e body=85 status=ok
// SIG undefined FUN_14009d19e(void)

undefined8 FUN_14009d19e(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  FUN_1403f5866(param_1 + 8);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x30),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  return 1;
}



// FUNCTION 14009d1f4 FUN_14009d1f4 body=172 status=ok
// SIG undefined FUN_14009d1f4(void)

void FUN_14009d1f4(longlong *param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(char *)((longlong)param_1 + 0x22) != '\0') || (DAT_14c760ff0 == '\0')) {
    lVar5 = *(longlong *)(*(longlong *)(param_1[2] + 0xb8) + 0x10 + (ulonglong)param_2 * 0x28);
    lVar3 = *(longlong *)(*(longlong *)(param_1[2] + 0xb8) + 0x18 + (ulonglong)param_2 * 0x28);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[1];
    *param_1 = lVar5;
    param_1[1] = lVar3;
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
      lVar5 = *param_1;
    }
    *(ushort *)(param_1 + 4) = param_2;
    if (lVar5 != 0) {
      FUN_1456c53a2(lVar5,0);
      FUN_1447b9e4a(lVar5 + 0x50,0);
      return;
    }
  }
  return;
}



// FUNCTION 14009d2a0 FUN_14009d2a0 body=108 status=ok
// SIG undefined FUN_14009d2a0(void)

longlong FUN_14009d2a0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (DAT_14cab2628 == 0) {
    lVar2 = FUN_14001cc68(0x1c0,0x10);
    FUN_1456c677a(lVar2);
    lVar1 = DAT_14cab2628;
    if ((DAT_14cab2628 != lVar2) && (bVar3 = DAT_14cab2628 != 0, DAT_14cab2628 = lVar2, bVar3)) {
      FUN_1458081fc(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  return DAT_14cab2628;
}



// FUNCTION 14009d30c FUN_14009d30c body=255 status=ok
// SIG undefined FUN_14009d30c(void)

ulonglong FUN_14009d30c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ushort *puVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = *(uint *)(*param_1 + 0x48);
  uVar8 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0xffff);
  if ((uVar9 >> (DAT_14cab36b8 & 0x1f) & 1) != 0) {
    uVar9 = (1 << ((byte)DAT_14cab36b8 & 0x1f)) - 1U & uVar9;
    uVar10 = (ulonglong)uVar9 - (ulonglong)(uVar9 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar4 = *(longlong *)(*param_1 + 0x38);
    uVar6 = (ulonglong)*(ushort *)(lVar4 + uVar10 * 6);
    lVar11 = 0;
    if (uVar6 != 0xffff) {
      lVar11 = lVar4 + uVar6;
    }
    puVar7 = (ushort *)((ulonglong)*(byte *)(lVar4 + 4 + uVar10 * 6) + lVar11);
    if ((puVar7 != (ushort *)0x0) &&
       ((bVar3 = *(byte *)(lVar4 + uVar10 * 6 + 5), bVar3 == 0 ||
        ((bVar3 - 1 < 2 && (puVar7 = *(ushort **)puVar7, puVar7 != (ushort *)0x0)))))) {
      uVar8 = (ulonglong)*puVar7;
    }
  }
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 14009d40c FUN_14009d40c body=52 status=ok
// SIG undefined FUN_14009d40c(void)

void FUN_14009d40c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_14009d440(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14009d440 FUN_14009d440 body=56 status=ok
// SIG undefined FUN_14009d440(void)

void FUN_14009d440(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14009d478 FUN_14009d478 body=356 status=ok
// SIG undefined FUN_14009d478(void)

void FUN_14009d478(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14009d4fd;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14009d4fd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14009d5de FUN_14009d5de body=128 status=ok
// SIG undefined FUN_14009d5de(void)

void FUN_14009d5de(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xffff;
  if ((int)uVar3 < *(int *)(param_1 + 0x30)) {
    lVar1 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if ((*(uint *)(lVar1 + (ulonglong)(uVar3 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      plVar2 = (longlong *)(param_1 + 8);
      lVar1 = (ulonglong)uVar3 * 0x128;
      if (param_2 >> 0x10 == (uint)*(ushort *)(*plVar2 + 0x11c + lVar1)) {
        FUN_1432d921c(*plVar2 + lVar1);
        FUN_1409578bc(lVar1 + *plVar2);
        FUN_1432d8de8(plVar2,uVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14009d65e FUN_14009d65e body=51 status=ok
// SIG undefined FUN_14009d65e(void)

undefined8 FUN_14009d65e(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (cVar1 = FUN_147538d90(), cVar1 != '\0')) {
    FUN_140a462a4(param_1,0);
    return 1;
  }
  return 0;
}



// FUNCTION 14009d691 FUN_14009d691 body=159 status=ok
// SIG undefined FUN_14009d691(void)

void FUN_14009d691(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(param_1[9],(int)param_1[10]);
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if ((int)param_1[1] == 0) {
LAB_14009d6cd:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_14009d6cd;
      }
    }
    param_1 = param_1 + 0x13;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14009d730 FUN_14009d730 body=120 status=ok
// SIG undefined FUN_14009d730(void)

void FUN_14009d730(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x80) != 0) {
    FUN_14029f2bc(lVar5,0,0);
    lVar5 = *param_1;
  }
  *(undefined4 *)(lVar5 + 0x80) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(*param_1 + 0x84) = (int)param_1[3];
  uVar2 = *(uint *)(param_1 + 2);
  if ((-1 < (int)uVar2) && (lVar5 = param_1[1], (int)uVar2 < *(int *)(lVar5 + 0x600))) {
    lVar4 = lVar5 + 0x5e8;
    if (*(longlong *)(lVar5 + 0x5f8) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x5f8);
    }
    bVar3 = (byte)uVar2 & 0x1f;
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  return;
}



// FUNCTION 14009d7a8 FUN_14009d7a8 body=159 status=ok
// SIG undefined FUN_14009d7a8(void)

void FUN_14009d7a8(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_1447bda9c(param_1[9],(int)param_1[10]);
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if ((int)param_1[1] == 0) {
LAB_14009d7e4:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_14009d7e4;
      }
    }
    param_1 = param_1 + 0x14;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14009d848 FUN_14009d848 body=305 status=ok
// SIG undefined FUN_14009d848(void)

void FUN_14009d848(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14009d8e2;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14009d8bb:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14009d8bb;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14009d8e2;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14009d8e2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009d97a FUN_14009d97a body=2558 status=ok
// SIG undefined FUN_14009d97a(void)

void FUN_14009d97a(longlong param_1)

{
  ushort *puVar1;
  ulonglong uVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ushort *puVar25;
  undefined4 *puVar26;
  int iVar27;
  longlong *plVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 **ppuVar34;
  int iVar35;
  longlong lVar36;
  undefined4 *puVar37;
  longlong *plVar38;
  ushort *puVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_448 [44];
  int local_41c;
  longlong local_418;
  longlong *local_410;
  longlong local_408;
  undefined1 *local_400;
  longlong local_3f8;
  longlong local_3f0;
  ushort *local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [128];
  undefined1 *local_358;
  undefined8 local_350;
  undefined1 *local_348;
  undefined8 uStack_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (*(int *)(param_1 + 0x184) != *(int *)(param_1 + 0x180)) {
    FUN_1409099e8(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_1400a12e0(param_1);
    }
    local_418 = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_14009f096();
    }
    lVar33 = param_1 + 0x38;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      FUN_14009ef66(lVar33);
    }
    lVar20 = param_1 + 0x68;
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_14009ef66(lVar20);
    }
    lVar36 = param_1 + 0x98;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_1400a1296(lVar36);
    }
    local_3e8 = (ushort *)0x0;
    uStack_3e0 = 0;
    iVar27 = *(int *)(param_1 + 0xe0);
    local_408 = lVar20;
    local_3f8 = lVar33;
    local_3f0 = lVar36;
    if (iVar27 == 0) {
      uVar31 = 0;
      uVar22 = 1;
      iVar9 = 0;
      iVar35 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0xd8);
      if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 200);
      }
      uVar23 = *puVar11;
      if (uVar23 == 0) {
        iVar35 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar35 = iVar27 + -1;
        }
        uVar31 = 0;
        uVar22 = (ulonglong)(uint)(iVar35 >> 5);
        if (iVar35 >> 5 < 1) {
          uVar22 = uVar31;
        }
        iVar35 = 0;
        do {
          if (uVar22 == uVar31) goto LAB_14009dc13;
          iVar35 = iVar35 + 0x20;
          uVar23 = puVar11[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar23 == 0);
      }
      else {
        uVar31 = 0;
        iVar35 = 0;
      }
      uVar22 = (ulonglong)(-uVar23 & uVar23);
      uVar2 = uVar22 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      iVar9 = (iVar35 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
      if (iVar27 <= iVar9) {
        iVar9 = iVar27;
      }
    }
    if (iVar9 != iVar27) {
      uVar23 = 0xffffffff;
      do {
        uVar2 = uStack_3e0;
        uVar4 = *(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20 + (longlong)iVar9 * 0x28) +
                 0x36);
        lVar33 = (longlong)(int)uStack_3e0;
        uVar10 = (int)uStack_3e0 + 1;
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar10);
        if (uStack_3e0._4_4_ < uVar10) {
          local_41c = iVar35;
          FUN_14488eebe(&local_3e8,uVar2 & 0xffffffff);
          iVar35 = local_41c;
        }
        local_3e8[lVar33] = uVar4;
        uVar23 = uVar23 & ~(uint)uVar22;
        puVar11 = *(uint **)(param_1 + 0xd8);
        if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 200);
        }
        iVar6 = *(int *)(param_1 + 0xe0);
        iVar9 = (int)uVar31;
        lVar33 = (longlong)iVar9;
        uVar10 = puVar11[lVar33] & uVar23;
        if (uVar10 == 0) {
          iVar16 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar16 = iVar6 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar35 = iVar35 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar9) {
            iVar17 = iVar9;
          }
          if (iVar9 < iVar16) {
            lVar20 = 0;
            do {
              uVar10 = puVar11[lVar33 + lVar20 + 1];
              if (uVar10 != 0) {
                uVar31 = (ulonglong)(iVar9 + (int)lVar20 + 1);
                uVar23 = 0xffffffff;
                goto LAB_14009dbbc;
              }
              iVar35 = iVar35 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar17 - lVar33 != lVar20);
            uVar23 = 0xffffffff;
            iVar9 = iVar17;
          }
          uVar31 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar6;
        }
        else {
LAB_14009dbbc:
          uVar22 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar22 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          iVar9 = (iVar35 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar9) {
            iVar9 = iVar6;
          }
        }
      } while (iVar9 != iVar27);
    }
LAB_14009dc13:
    FUN_1400a18fe();
    puVar1 = local_3e8;
    local_358 = (undefined1 *)0x0;
    local_350 = 0x2000000000;
    lVar20 = (longlong)(int)uStack_3e0;
    lVar33 = local_418;
    if (lVar20 != 0) {
      lVar36 = 0;
      do {
        uVar4 = *(ushort *)((longlong)puVar1 + lVar36);
        uVar5 = *(undefined2 *)(DAT_14cab28f0 + (ulonglong)uVar4 * 2);
        lVar32 = (longlong)(int)local_350;
        uVar23 = (int)local_350 + 1;
        local_350 = CONCAT44(local_350._4_4_,uVar23);
        if (local_350._4_4_ < uVar23) {
          FUN_1456c61ce(local_3d8);
          lVar33 = local_418;
        }
        puVar12 = local_358;
        if (local_358 == (undefined1 *)0x0) {
          puVar12 = local_3d8;
        }
        *(uint *)(puVar12 + lVar32 * 4) = CONCAT22(uVar5,uVar4);
        lVar36 = lVar36 + 2;
      } while (lVar20 * 2 != lVar36);
      iVar27 = (int)local_350;
      lVar20 = (longlong)(int)local_350;
      if (1 < lVar20) {
        puVar12 = local_3d8;
        if (local_358 != (undefined1 *)0x0) {
          puVar12 = local_358;
        }
        memset(local_338,0,0x2f0);
        uStack_340 = puVar12 + lVar20 * 4 + -4;
        local_348 = puVar12;
        fVar41 = logf((float)iVar27);
        local_338[0] = (int)(longlong)(fVar41 + fVar41);
        ppuVar34 = &local_348;
        do {
          puVar13 = (undefined4 *)*ppuVar34;
          puVar29 = (undefined4 *)ppuVar34[1];
          iVar27 = *(int *)(ppuVar34 + 2);
          iVar35 = (int)((ulonglong)((longlong)puVar29 - (longlong)puVar13) >> 2);
          puVar24 = puVar13;
          puVar26 = puVar29;
          if (iVar27 != 0) {
LAB_14009dd44:
            puVar21 = puVar26;
            if (8 < (int)(iVar35 + 1U)) {
              uVar23 = iVar35 + 1U >> 1;
              uVar7 = puVar13[uVar23];
              puVar13[uVar23] = *puVar13;
              *puVar13 = uVar7;
              puVar19 = puVar21 + 1;
              puVar14 = puVar13;
              do {
                puVar26 = puVar14 + 1;
                puVar8 = puVar14 + 1;
                do {
                  puVar14 = puVar8;
                  puVar30 = puVar26;
                  if (puVar21 < puVar14) break;
                  puVar26 = puVar30 + 1;
                  puVar8 = puVar14 + 1;
                } while (*(ushort *)((longlong)puVar14 + 2) <= *(ushort *)((longlong)puVar13 + 2));
                puVar26 = puVar19 + -2;
                do {
                  puVar8 = puVar19;
                  puVar37 = puVar26;
                  puVar19 = puVar8 + -1;
                  if (puVar19 <= puVar13) break;
                  puVar26 = puVar37 + -1;
                } while (*(ushort *)((longlong)puVar13 + 2) <= *(ushort *)((longlong)puVar8 + -2));
                if (puVar19 < puVar14) goto LAB_14009ddc2;
                uVar7 = *puVar14;
                *puVar14 = *puVar19;
                *puVar19 = uVar7;
              } while( true );
            }
            for (; puVar29 = puVar13, puVar24 = puVar13, puVar13 < puVar21; puVar21 = puVar21 + -1)
            {
              while (puVar26 = puVar29, puVar29 = puVar24 + 1, puVar29 <= puVar21) {
                puVar1 = (ushort *)((longlong)puVar24 + 6);
                puVar24 = puVar29;
                if (*puVar1 <= *(ushort *)((longlong)puVar26 + 2)) {
                  puVar29 = puVar26;
                }
              }
              uVar7 = *puVar26;
              *puVar26 = *puVar21;
              *puVar21 = uVar7;
            }
            goto LAB_14009de74;
          }
LAB_14009e224:
          FUN_1400aa216(puVar13);
LAB_14009de74:
          ppuVar34 = ppuVar34 + -3;
          lVar33 = local_418;
        } while (&local_348 <= ppuVar34);
      }
    }
    bVar40 = (longlong)uStack_3e0 < 0;
    uStack_3e0 = uStack_3e0 & 0xffffffff00000000;
    if (bVar40) {
      FUN_1448759c8(&local_3e8,0);
      lVar33 = local_418;
    }
    puVar12 = local_358;
    if (local_358 == (undefined1 *)0x0) {
      puVar12 = local_3d8;
    }
    lVar20 = (longlong)(int)local_350;
    if (lVar20 != 0) {
      lVar36 = 0;
      do {
        uVar22 = uStack_3e0;
        lVar32 = (longlong)(int)uStack_3e0;
        uVar23 = (int)uStack_3e0 + 1;
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar23);
        if (uStack_3e0._4_4_ < uVar23) {
          FUN_14488eebe(&local_3e8,uVar22 & 0xffffffff);
          lVar33 = local_418;
        }
        local_3e8[lVar32] = *(ushort *)(puVar12 + lVar36);
        lVar36 = lVar36 + 4;
      } while (lVar20 * 4 != lVar36);
    }
    if (local_358 != (undefined1 *)0x0) {
      FUN_1400020a8();
      lVar33 = local_418;
    }
    local_348 = (undefined1 *)0x0;
    uStack_340 = (undefined1 *)0x0;
    if ((longlong)(int)uStack_3e0 == 0) {
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x180);
    }
    else {
      puVar1 = local_3e8 + (int)uStack_3e0;
      puVar25 = local_3e8;
      do {
        puVar12 = uStack_340;
        if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
          lVar20 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar20 = param_1 + 0x128;
          }
          iVar27 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uint)*puVar25) *
                                     4);
          if (iVar27 != -1) {
            do {
              puVar39 = (ushort *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar27 * 0xc);
              if (*puVar39 == *puVar25) goto LAB_14009df93;
              iVar27 = *(int *)(puVar39 + 2);
            } while (iVar27 != -1);
          }
        }
        puVar39 = (ushort *)0x0;
LAB_14009df93:
        lVar20 = (longlong)(int)uStack_340;
        uVar23 = (int)uStack_340 + 1;
        uStack_340 = (undefined1 *)CONCAT44(uStack_340._4_4_,uVar23);
        if (uStack_340._4_4_ < uVar23) {
          FUN_14488eebe(&local_348,(ulonglong)puVar12 & 0xffffffff);
          lVar33 = local_418;
        }
        *(ushort *)(local_348 + lVar20 * 2) = puVar39[1];
        puVar25 = puVar25 + 1;
      } while (puVar25 != puVar1);
      lVar20 = (longlong)(int)uStack_340;
      if (lVar20 != 0) {
        plVar28 = (longlong *)(param_1 + 0x58);
        lVar36 = 0;
        local_400 = local_348;
        local_41c = CONCAT31(local_41c._1_3_,DAT_14c760ff1);
        puVar12 = local_348;
        cVar18 = DAT_14c760ff1;
        local_410 = plVar28;
        do {
          uVar4 = *(ushort *)(puVar12 + lVar36);
          bVar3 = *(byte *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + 0x20 + (ulonglong)uVar4 * 0x28) + 0x32
                           );
          if ((bVar3 & 2) != 0) {
            iVar27 = *(int *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x10) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x14) < iVar27 + 1U) {
              FUN_1400aa116(param_1,iVar27);
            }
            lVar33 = *(longlong *)(param_1 + 8);
            if (*(longlong *)(param_1 + 8) == 0) {
              lVar33 = param_1;
            }
            *(ushort *)(lVar33 + (longlong)iVar27 * 2) = uVar4;
            lVar33 = local_418;
            plVar28 = local_410;
            cVar18 = (char)local_41c;
          }
          if ((bVar3 & 4) != 0) {
            iVar27 = *(int *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x30) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x34) < iVar27 + 1U) {
              FUN_1400a132a(lVar33,iVar27);
              lVar33 = local_418;
              plVar28 = local_410;
              cVar18 = (char)local_41c;
            }
            lVar32 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(param_1 + 0x28) == 0) {
              lVar32 = lVar33;
            }
            *(ushort *)(lVar32 + (longlong)iVar27 * 2) = uVar4;
          }
          lVar15 = local_3f8;
          lVar32 = local_408;
          if ((bVar3 & 8) != 0) {
            if (cVar18 == '\0') {
              iVar27 = *(int *)(param_1 + 0x90);
              *(uint *)(param_1 + 0x90) = iVar27 + 1U;
              if (*(uint *)(param_1 + 0x94) < iVar27 + 1U) {
                FUN_14009fe5c(local_408,iVar27);
              }
              lVar15 = lVar32;
              lVar33 = local_418;
              plVar28 = local_410;
              puVar12 = local_400;
              plVar38 = (longlong *)(param_1 + 0x88);
              cVar18 = (char)local_41c;
            }
            else {
              iVar27 = *(int *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar27 + 1U;
              plVar38 = plVar28;
              if (*(uint *)(param_1 + 100) < iVar27 + 1U) {
                FUN_14009fe5c(local_3f8,iVar27);
                lVar33 = local_418;
                plVar28 = local_410;
                puVar12 = local_400;
                plVar38 = local_410;
                cVar18 = (char)local_41c;
              }
            }
            if (*plVar38 != 0) {
              lVar15 = *plVar38;
            }
            *(ushort *)(lVar15 + (longlong)iVar27 * 2) = uVar4;
          }
          if ((bVar3 & 0x10) != 0) {
            iVar27 = *(int *)(param_1 + 0x90);
            *(uint *)(param_1 + 0x90) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0x94) < iVar27 + 1U) {
              FUN_14009fe5c(local_408,iVar27);
            }
            lVar33 = *(longlong *)(param_1 + 0x88);
            if (*(longlong *)(param_1 + 0x88) == 0) {
              lVar33 = local_408;
            }
            *(ushort *)(lVar33 + (longlong)iVar27 * 2) = uVar4;
            lVar33 = local_418;
            plVar28 = local_410;
            puVar12 = local_400;
            cVar18 = (char)local_41c;
          }
          lVar32 = local_3f0;
          if ((bVar3 & 0x20) != 0) {
            iVar27 = *(int *)(param_1 + 0xa8);
            *(uint *)(param_1 + 0xa8) = iVar27 + 1U;
            if (*(uint *)(param_1 + 0xac) < iVar27 + 1U) {
              FUN_1400a6698(local_3f0,iVar27);
            }
            lVar33 = *(longlong *)(param_1 + 0xa0);
            if (*(longlong *)(param_1 + 0xa0) == 0) {
              lVar33 = lVar32;
            }
            *(ushort *)(lVar33 + (longlong)iVar27 * 2) = uVar4;
            lVar33 = local_418;
            plVar28 = local_410;
            cVar18 = (char)local_41c;
          }
          lVar36 = lVar36 + 2;
        } while (lVar20 * 2 != lVar36);
      }
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x180);
      if (local_348 != (undefined1 *)0x0) {
        FUN_1400020a8(local_348);
      }
    }
    if (local_3e8 != (ushort *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14009ddc2:
  uVar7 = *puVar13;
  *puVar13 = *puVar19;
  *puVar19 = uVar7;
  iVar27 = iVar27 + -1;
  if ((longlong)puVar37 - (longlong)puVar24 < (longlong)puVar29 - (longlong)puVar30) {
    if (puVar14 < puVar21) {
      *ppuVar34 = (undefined1 *)puVar14;
      ppuVar34[1] = (undefined1 *)puVar21;
      *(int *)(ppuVar34 + 2) = iVar27;
      ppuVar34 = ppuVar34 + 3;
    }
    puVar14 = puVar13;
    puVar21 = puVar37;
    puVar26 = puVar8 + -2;
    puVar30 = puVar13;
    if (puVar19 <= puVar13 + 1) goto LAB_14009de74;
  }
  else {
    if (puVar13 + 1 < puVar19) {
      *ppuVar34 = (undefined1 *)puVar13;
      ppuVar34[1] = (undefined1 *)(puVar8 + -2);
      *(int *)(ppuVar34 + 2) = iVar27;
      ppuVar34 = ppuVar34 + 3;
    }
    puVar26 = puVar21;
    if (puVar21 <= puVar14) goto LAB_14009de74;
  }
  iVar35 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar30) >> 2);
  puVar13 = puVar14;
  puVar24 = puVar30;
  puVar29 = puVar21;
  if (iVar27 == 0) goto LAB_14009e224;
  goto LAB_14009dd44;
}



// FUNCTION 14009e37a FUN_14009e37a body=162 status=ok
// SIG undefined FUN_14009e37a(void)

void FUN_14009e37a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14009e407;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14009e407:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14009e41c FUN_14009e41c body=95 status=ok
// SIG undefined FUN_14009e41c(void)

void FUN_14009e41c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140411b96(param_1,iVar2);
    }
    FUN_1400a4d50((longlong)iVar2 * 0x98 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14009e47c FUN_14009e47c body=79 status=ok
// SIG undefined FUN_14009e47c(void)

void FUN_14009e47c(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(longlong *)(param_2 + 0x248) = *(longlong *)(param_2 + 0x248) + 1;
    if ((*(ulonglong *)(param_1 + 0x178) == 0) ||
       (*(ulonglong *)(param_1 + 0x178) < *(ulonglong *)(param_2 + 0x250))) {
      FUN_1405c378c(param_1);
    }
    FUN_1400a0630(*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  return;
}



// FUNCTION 14009e4cc FUN_14009e4cc body=186 status=ok
// SIG undefined FUN_14009e4cc(void)

void FUN_14009e4cc(ushort param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar6;
  
  FUN_1400a18fe();
  uVar9 = 0;
  uVar5 = DAT_14cab28d0;
  if (0 < (int)DAT_14cab28d0) {
    do {
      uVar1 = (uVar5 >> 1) + uVar9;
      if (*(ushort *)(DAT_14cab28c8 + (ulonglong)uVar1 * 4) < param_1) {
        uVar9 = uVar1 + (uVar5 & 1);
      }
      bVar10 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar10);
  }
  uVar5 = DAT_14cab28d0 - uVar9;
  uVar6 = (ulonglong)uVar5;
  if (uVar5 != 0 && (int)uVar9 <= (int)DAT_14cab28d0) {
    lVar8 = DAT_14cab28c8 + (ulonglong)uVar9 * 4;
    uVar7 = 0;
    do {
      if (*(ushort *)(lVar8 + uVar7 * 4) != param_1) {
        uVar6 = uVar7 & 0xffffffff;
        goto LAB_14009e53c;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
    uVar7 = (ulonglong)uVar5;
LAB_14009e53c:
    if ((int)uVar7 != 0) {
      lVar2 = lVar8 + uVar6 * 4;
      do {
        uVar3 = *(undefined2 *)(lVar8 + 2);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_14488eebe(param_2,iVar4);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar4 * 2) = uVar3;
        lVar8 = lVar8 + 4;
      } while (lVar8 != lVar2);
    }
  }
  return;
}



// FUNCTION 14009e586 FUN_14009e586 body=278 status=ok
// SIG undefined FUN_14009e586(void)

void FUN_14009e586(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x122) == *(int *)(param_1 + 0x11a)) &&
     ((*(byte *)(param_1 + 0x118) & 4) != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x100);
    local_30 = *(longlong *)(param_1 + 0x108);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    plVar1 = (longlong *)FUN_140165676(&local_38);
    if (plVar1 != (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (*(longlong *)(lVar2 + 8) == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x28);
          if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
            FUN_1456cec3c(lVar2);
          }
        }
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_1 + 0x68);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009e708 FUN_14009e708 body=272 status=ok
// SIG undefined FUN_14009e708(void)

void FUN_14009e708(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14009e818 FUN_14009e818 body=269 status=ok
// SIG undefined FUN_14009e818(void)

void FUN_14009e818(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14009e926 FUN_14009e926 body=870 status=ok
// SIG undefined FUN_14009e926(void)

void FUN_14009e926(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) < *(int *)(param_2 + 0x20)) {
        iVar1 = *(int *)(param_2 + 0x20);
      }
      if (iVar1 != 0) {
        if (*(int *)(param_3 + 0x24) < iVar1) {
          *(undefined4 *)(param_3 + 0x24) = 0x100;
          FUN_14497ddce(param_3,*(undefined4 *)(param_3 + 0x20));
        }
        *(int *)(param_3 + 0x20) = iVar1;
        iVar2 = *(int *)(param_1 + 0x20);
        uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
        if (iVar2 % 0x20 < 1) {
          uVar4 = 0xffffffff;
        }
        iVar9 = *(int *)(param_2 + 0x20);
        uVar8 = 0xffffffff >> (-(char)(iVar9 % 0x20) & 0x1fU);
        if (iVar9 % 0x20 < 1) {
          uVar8 = 0xffffffff;
        }
        if (0 < iVar1) {
          uVar12 = (int)(param_4 << 0x1b) >> 0x1f;
          uVar10 = iVar1 + 0x1fU >> 5;
          iVar3 = iVar9 + 0x3e;
          if (-1 < iVar9 + 0x1f) {
            iVar3 = iVar9 + 0x1f;
          }
          iVar13 = iVar2 + 0x3e;
          if (-1 < iVar2 + 0x1f) {
            iVar13 = iVar2 + 0x1f;
          }
          uVar11 = 0xffffffff;
          if (iVar9 - 1U < 0x20) {
            uVar11 = uVar8;
          }
          uVar5 = 0xffffffff;
          if (iVar2 - 1U < 0x20) {
            uVar5 = uVar4;
          }
          uVar14 = 0;
          do {
            uVar7 = uVar12;
            if (((longlong)uVar14 < (longlong)(iVar13 >> 5)) &&
               (uVar7 = *(uint *)(param_1 + uVar14 * 4), uVar5 != 0xffffffff)) {
              if ((int)(param_4 << 0x1b) < 0) {
                uVar7 = uVar7 | ~uVar5;
              }
              else {
                uVar7 = uVar7 & uVar5;
              }
            }
            uVar6 = uVar12;
            if (((longlong)uVar14 < (longlong)(iVar3 >> 5)) &&
               (uVar6 = *(uint *)(param_2 + uVar14 * 4), uVar11 != 0xffffffff)) {
              if ((int)(param_4 << 0x1b) < 0) {
                uVar6 = uVar6 | ~uVar11;
              }
              else {
                uVar6 = uVar6 & uVar11;
              }
            }
            uVar11 = 0xffffffff;
            if (uVar10 - 1 == uVar14) {
              uVar11 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
            }
            if (iVar1 % 0x20 < 1) {
              uVar11 = 0xffffffff;
            }
            uVar5 = 0xffffffff;
            if ((iVar13 >> 5) - 2 == uVar14) {
              uVar5 = uVar4;
            }
            *(uint *)(param_3 + uVar14 * 4) = uVar7 & uVar6 & uVar11;
            bVar15 = (iVar3 >> 5) - 2 == uVar14;
            uVar14 = uVar14 + 1;
            uVar11 = 0xffffffff;
            if (bVar15) {
              uVar11 = uVar8;
            }
          } while (uVar10 != uVar14);
        }
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
    if ((int)*(uint *)(param_1 + 0x20) < (int)*(uint *)(param_2 + 0x20)) {
      uVar4 = *(uint *)(param_1 + 0x20);
    }
    if (0 < (int)uVar4) {
      if (*(int *)(param_3 + 0x24) < (int)uVar4) {
        *(undefined4 *)(param_3 + 0x24) = 0x100;
        FUN_14497ddce(param_3,*(undefined4 *)(param_3 + 0x20));
      }
      *(uint *)(param_3 + 0x20) = uVar4;
      iVar1 = *(int *)(param_1 + 0x20);
      uVar8 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
      if (iVar1 % 0x20 < 1) {
        uVar8 = 0xffffffff;
      }
      iVar2 = *(int *)(param_2 + 0x20);
      uVar10 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
      if (iVar2 % 0x20 < 1) {
        uVar10 = 0xffffffff;
      }
      uVar14 = 0;
      uVar12 = uVar4 + 0x1f >> 5;
      iVar9 = iVar2 + 0x3e;
      if (-1 < iVar2 + 0x1f) {
        iVar9 = iVar2 + 0x1f;
      }
      uVar11 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar11 = uVar8;
      }
      iVar3 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar3 = iVar1 + 0x1f;
      }
      uVar5 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar5 = uVar10;
      }
      do {
        uVar7 = 0xffffffff;
        if (uVar12 - 1 == uVar14) {
          uVar7 = -(uint)((uVar4 & 0x1f) == 0) | 0xffffffffU >> (-(char)(uVar4 & 0x1f) & 0x1fU);
        }
        *(uint *)(param_3 + uVar14 * 4) =
             uVar11 & uVar5 & uVar7 & *(uint *)(param_2 + uVar14 * 4) &
             *(uint *)(param_1 + uVar14 * 4);
        uVar11 = 0xffffffff;
        if ((iVar3 >> 5) - 2 == uVar14) {
          uVar11 = uVar8;
        }
        bVar15 = (iVar9 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar5 = 0xffffffff;
        if (bVar15) {
          uVar5 = uVar10;
        }
      } while (uVar12 != uVar14);
    }
  }
  return;
}



// FUNCTION 14009ec8c FUN_14009ec8c body=306 status=ok
// SIG undefined FUN_14009ec8c(void)

void FUN_14009ec8c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14009ecee;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14009ecee:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14009edbe FUN_14009edbe body=158 status=ok
// SIG undefined FUN_14009edbe(void)

void FUN_14009edbe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xa0)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xa0,8);
      uVar3 = uVar3 / 0xa0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xa0,8);
    }
  }
  return;
}



// FUNCTION 14009ee5c FUN_14009ee5c body=149 status=ok
// SIG undefined FUN_14009ee5c(void)

void FUN_14009ee5c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_1400a1050(param_1,&local_20);
  if (lVar1 == 0) {
    local_28 = *param_2;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1400a4ed2(param_1,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009eef2 FUN_14009eef2 body=115 status=ok
// SIG undefined FUN_14009eef2(void)

void FUN_14009eef2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    local_18 = *(undefined8 *)(param_1 + 0x100);
    local_10 = *(longlong *)(param_1 + 0x108);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_18,param_2,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009ef66 FUN_14009ef66 body=73 status=ok
// SIG undefined FUN_14009ef66(void)

void FUN_14009ef66(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) * 2);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,2);
      return;
    }
  }
  return;
}



// FUNCTION 14009efb0 FUN_14009efb0 body=230 status=ok
// SIG undefined FUN_14009efb0(void)

void FUN_14009efb0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xcd) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 14009f096 FUN_14009f096 body=73 status=ok
// SIG undefined FUN_14009f096(void)

void FUN_14009f096(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) * 2);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,2);
      return;
    }
  }
  return;
}



// FUNCTION 14009f0e0 FUN_14009f0e0 body=1054 status=ok
// SIG undefined FUN_14009f0e0(void)

void FUN_14009f0e0(longlong param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  void *_Src;
  byte bVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  float fVar17;
  undefined1 auStack_e8 [42];
  byte local_be;
  byte local_bd;
  uint local_bc;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  longlong local_90;
  int local_88;
  undefined2 local_7c;
  char local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) == -1) {
    lVar9 = *(longlong *)(*param_2 + 0x28);
    if ((lVar9 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar9);
    }
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x30;
    uVar12 = *(uint *)(*(longlong *)(lVar9 + 0xa0) + 0x18 + lVar8);
    uVar14 = (ulonglong)uVar12;
    if (uVar14 == 0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      _Src = *(void **)(*(longlong *)(lVar9 + 0xa0) + 0x10 + lVar8);
      local_78 = (void *)0x0;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
      FUN_140a472a8(&local_78,uVar12,0);
      memcpy(local_78,_Src,uVar14 << 3);
      if (&local_78 == plVar1) {
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 0x18) = local_78;
        local_78 = (void *)0x0;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
        *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
      }
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    local_68 = *(undefined8 *)(param_3 + 0x10);
    local_78 = *(void **)param_3;
    uStack_70 = *(undefined8 *)(param_3 + 8);
    local_90 = *plVar1;
    local_88 = *(int *)(param_1 + 0x20);
    FUN_14009f4ff(&local_a0);
    cVar16 = *param_3;
    uVar12 = *(uint *)(param_3 + 4);
    fVar17 = *(float *)(param_3 + 8);
    cVar4 = param_3[0xc];
    local_7a = param_3[0xf];
    local_7c = *(undefined2 *)(param_3 + 0xd);
    if ((ulonglong)local_98 != 0) {
      uVar11 = *(undefined8 *)(param_3 + 0x10);
      local_78 = (void *)CONCAT62(CONCAT51(local_78._3_5_,param_3[3]),*(undefined2 *)(param_3 + 1));
      if ((int)local_98 < 1) {
        uVar14 = (ulonglong)uVar12;
      }
      else {
        uVar15 = 0;
        local_b0 = local_a0;
        do {
          uVar5 = *(uint *)(local_b0 + uVar15 * 8);
          local_bd = *(byte *)(local_b0 + 4 + uVar15 * 8);
          bVar6 = local_bd & 1;
          if ((cVar16 == '\x02') ||
             ((((int)uVar12 <= (int)uVar5 && ((uVar12 != uVar5 || (fVar17 <= 0.0)))) &&
              ((uVar12 != uVar5 ||
               (((fVar17 != 0.0 || (NAN(fVar17))) || ((cVar16 != '\0' && (bVar6 != 0)))))))))) {
            iVar13 = (int)param_4[1];
            lVar9 = (longlong)iVar13;
            *(uint *)(param_4 + 1) = iVar13 + 1U;
            local_be = bVar6;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
              local_bc = uVar5;
              local_b8 = uVar15;
              local_a8 = uVar11;
              FUN_1400a178c(param_4,iVar13);
              uVar11 = local_a8;
              uVar15 = local_b8;
              uVar5 = local_bc;
            }
            uVar14 = (ulonglong)uVar5;
            lVar8 = *param_4;
            *(char *)(lVar8 + lVar9 * 0x18) = cVar16;
            *(undefined2 *)(lVar8 + 1 + lVar9 * 0x18) = (undefined2)local_78;
            *(undefined1 *)(lVar8 + 3 + lVar9 * 0x18) = local_78._2_1_;
            *(ulonglong *)(lVar8 + 4 + lVar9 * 0x18) = CONCAT44(fVar17,uVar12);
            *(byte *)(lVar8 + 0xc + lVar9 * 0x18) = local_be;
            *(uint *)(lVar8 + 0x10 + lVar9 * 0x18) = uVar5;
            *(undefined4 *)(lVar8 + 0x14 + lVar9 * 0x18) = 0;
            if ((local_bd & 1) == 0) {
              fVar17 = 0.0;
              cVar16 = '\x01';
            }
            else {
              cVar16 = '\0';
              fVar17 = 0.0;
            }
          }
          else {
            uVar14 = (ulonglong)uVar12;
          }
          uVar15 = uVar15 + 1;
          uVar12 = (uint)uVar14;
        } while (local_98 != uVar15);
      }
      iVar13 = (int)uVar14;
      if ((cVar16 != '\x02') && (cVar4 != '\x02')) {
        iVar10 = (int)uVar11;
        if ((iVar10 < iVar13) ||
           ((fVar7 = (float)((ulonglong)uVar11 >> 0x20), iVar13 == iVar10 && (fVar7 < fVar17))))
        goto LAB_14009f187;
        if (iVar13 == iVar10) {
          if (((fVar17 == fVar7) && (!NAN(fVar17) && !NAN(fVar7))) &&
             (cVar4 == '\0' || cVar16 == '\0')) goto LAB_14009f187;
        }
      }
      iVar13 = (int)param_4[1];
      lVar9 = (longlong)iVar13;
      *(uint *)(param_4 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
        FUN_1400a178c(param_4,iVar13);
      }
      lVar8 = *param_4;
      *(char *)(lVar8 + lVar9 * 0x18) = cVar16;
      *(undefined2 *)(lVar8 + 1 + lVar9 * 0x18) = (undefined2)local_78;
      *(undefined1 *)(lVar8 + 3 + lVar9 * 0x18) = local_78._2_1_;
      *(ulonglong *)(lVar8 + 4 + lVar9 * 0x18) = uVar14 | (ulonglong)(uint)fVar17 << 0x20;
      *(char *)(lVar8 + 0xc + lVar9 * 0x18) = cVar4;
      *(undefined2 *)(lVar8 + 0xd + lVar9 * 0x18) = local_7c;
      *(char *)(lVar8 + 0xf + lVar9 * 0x18) = local_7a;
      *(undefined8 *)(lVar8 + 0x10 + lVar9 * 0x18) = uVar11;
    }
  }
LAB_14009f187:
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009f4ff FUN_14009f4ff body=399 status=ok
// SIG undefined FUN_14009f4ff(void)

longlong * FUN_14009f4ff(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (((int)param_2[1] != 0) && (cVar1 = FUN_140388ee0(), cVar1 == '\0')) {
    if (*param_3 == '\x01') {
      if ((*(float *)(param_3 + 8) != 0.0) || (NAN(*(float *)(param_3 + 8)))) goto LAB_14009f53e;
      uVar5 = *(uint *)(param_2 + 1);
      uVar2 = (ulonglong)uVar5;
      if ((int)uVar5 < 1) goto LAB_14009f680;
      uVar6 = 0;
      do {
        uVar7 = (uVar5 >> 1) + uVar6;
        if (*(int *)(*param_2 + (ulonglong)uVar7 * 8) < *(int *)(param_3 + 4)) {
          uVar6 = uVar7 + (uVar5 & 1);
        }
        bVar9 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar9);
    }
    else {
      if (*param_3 == '\x02') {
        uVar2 = (ulonglong)*(uint *)(param_2 + 1);
      }
      else {
LAB_14009f53e:
        uVar5 = *(uint *)(param_2 + 1);
        uVar2 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          uVar6 = 0;
          do {
            uVar7 = (uVar5 >> 1) + uVar6;
            if (*(int *)(*param_2 + (ulonglong)uVar7 * 8) <= *(int *)(param_3 + 4)) {
              uVar6 = uVar7 + (uVar5 & 1);
            }
            bVar9 = 1 < uVar5;
            uVar5 = uVar5 >> 1;
          } while (bVar9);
          goto LAB_14009f57a;
        }
      }
LAB_14009f680:
      uVar6 = 0;
    }
LAB_14009f57a:
    uVar5 = (uint)uVar2;
    if ((int)uVar6 < (int)uVar5) {
      if (param_3[0xc] == '\x01') {
        lVar3 = *param_2;
        if ((*(float *)(param_3 + 0x14) != 0.0) || (NAN(*(float *)(param_3 + 0x14)))) {
LAB_14009f5a1:
          iVar8 = 0;
          do {
            uVar7 = (int)(uVar2 >> 1) + iVar8;
            uVar5 = (uint)uVar2;
            if (*(int *)(lVar3 + (ulonglong)uVar7 * 8) <= *(int *)(param_3 + 0x10)) {
              iVar8 = uVar7 + (uVar5 & 1);
            }
            uVar2 = uVar2 >> 1;
          } while (1 < uVar5);
        }
        else {
          iVar8 = 0;
          do {
            uVar5 = uVar5 >> 1;
            uVar7 = (uint)uVar2;
            if (*(int *)(lVar3 + (ulonglong)(uVar5 + iVar8) * 8) < *(int *)(param_3 + 0x10)) {
              iVar8 = uVar5 + iVar8 + (uVar7 & 1);
            }
            uVar2 = (ulonglong)uVar5;
          } while (1 < uVar7);
        }
      }
      else {
        if (param_3[0xc] != '\x02') {
          lVar3 = *param_2;
          goto LAB_14009f5a1;
        }
        iVar8 = 0;
      }
      iVar4 = iVar8 - uVar6;
      if (iVar4 != 0 && (int)uVar6 <= iVar8) {
        lVar3 = (ulonglong)uVar6 * 8 + *param_2;
        goto LAB_14009f5d2;
      }
    }
  }
  lVar3 = 0;
  iVar4 = 0;
LAB_14009f5d2:
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar4;
  return param_1;
}



// FUNCTION 14009f68e FUN_14009f68e body=1779 status=ok
// SIG undefined FUN_14009f68e(void)

void FUN_14009f68e(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort *puVar18;
  int iVar19;
  ushort *puVar20;
  undefined1 auStack_168 [39];
  char local_141;
  longlong *local_140;
  longlong local_138;
  int local_12c;
  longlong *local_128;
  longlong local_120;
  ushort *local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e6;
  undefined1 local_e0 [64];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_141 = DAT_14c760ff1;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(), DAT_14c83f0fc == -1)) {
      uVar10 = FUN_14118da1c();
      bVar6 = FUN_14054d46e(uVar10,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer();
    }
    if (DAT_14c83f0f8 != 1) {
      local_e6 = false;
      goto LAB_14009f737;
    }
  }
  local_e6 = true;
  if (*(int *)(param_3 + 0x90) - *(int *)(param_3 + 0xbc) < DAT_14c760fe0) {
    local_e6 = DAT_14c760fe4 <= *(int *)(param_3 + 200) - *(int *)(param_3 + 0xf4);
  }
LAB_14009f737:
  *(undefined1 *)(param_3 + 0x298) = local_e6;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_a0 = 0;
  local_98 = 0x400000000;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  uVar16 = 0;
  local_f8 = param_1;
  local_f0 = param_4;
  if (0 < *(int *)(param_2 + 0x28)) {
    local_12c = *(int *)(param_3 + 0x29c);
    local_120 = param_1 + 0x128;
    iVar19 = 0;
    local_138 = param_3;
    do {
      lVar7 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar7 = param_2;
      }
      uVar3 = *(ushort *)(lVar7 + (longlong)iVar19 * 2);
      lVar7 = (ulonglong)uVar3 * 0x28;
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x20 + lVar7);
      FUN_14009d1f4(&local_108,uVar3);
      puVar14 = *(undefined1 **)(*(longlong *)(param_1 + 0xb8) + lVar7);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 8 + lVar7);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar12 = puVar14;
      if (puVar14 == (undefined1 *)0x0) {
        puVar12 = local_e0;
      }
      if (*(char *)((longlong)plVar9 + 0x3c) == '\x01') {
        lVar7 = plVar9[5];
        uVar4 = *(ushort *)((longlong)plVar9 + 0x36);
        uVar11 = (uint)uVar4;
        if ((int)(uint)uVar4 < *(int *)(lVar7 + 0x748)) {
          lVar17 = lVar7 + 0x730;
          if (*(longlong *)(lVar7 + 0x740) != 0) {
            lVar17 = *(longlong *)(lVar7 + 0x740);
          }
          if ((*(uint *)(lVar17 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0)
          goto LAB_14009f866;
        }
        if ((int)uVar11 < *(int *)(lVar7 + 0x728)) {
          lVar17 = lVar7 + 0x710;
          if (*(longlong *)(lVar7 + 0x720) != 0) {
            lVar17 = *(longlong *)(lVar7 + 0x720);
          }
          if ((*(uint *)(lVar17 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
          goto LAB_14009f839;
        }
        else {
LAB_14009f839:
          if (((*(uint *)(lVar7 + 0x70c) & *(uint *)(plVar9 + 7)) != 0) ||
             ((*(uint *)(lVar7 + 0x708) & *(uint *)(plVar9 + 7)) == 0)) goto LAB_14009f866;
        }
        *(longlong *)(lVar7 + 0x270) = *(longlong *)(lVar7 + 0x270) + 1;
        (**(code **)(*plVar9 + 0x2b0))(plVar9,puVar12,&local_108);
      }
LAB_14009f866:
      lVar7 = local_138;
      if (((local_12c != 0) && (*(char *)(local_138 + 0x704) == '\0')) &&
         ((*(ulonglong *)(local_138 + 0x6d0) == 0 ||
          (*(ulonglong *)(local_138 + 0x6d0) < *(ulonglong *)(local_138 + 0x278))))) {
        FUN_1447b9e90(local_138);
        *(undefined8 *)(lVar7 + 0x6d0) = *(undefined8 *)(lVar7 + 0x270);
      }
      if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x184)) {
        FUN_14009d97a(param_1);
        lVar7 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar7 = param_2;
        }
        iVar19 = -1;
        if (0 < (longlong)*(int *)(param_2 + 0x28)) {
          lVar17 = 0;
          do {
            if (*(ushort *)(lVar7 + lVar17 * 2) == uVar3) {
              iVar19 = (int)lVar17;
              break;
            }
            lVar17 = lVar17 + 1;
          } while (*(int *)(param_2 + 0x28) != lVar17);
        }
      }
      if (puVar14 != (undefined1 *)0x0) {
        FUN_1456c53a2(puVar14,0);
        iVar15 = *(int *)(puVar14 + 0x7c);
        puVar12 = *(undefined1 **)(puVar14 + 0x70);
        if (*(undefined1 **)(puVar14 + 0x70) == (undefined1 *)0x0) {
          puVar12 = puVar14 + 0x50;
        }
        FUN_144717c65(puVar12,*(undefined4 *)(puVar14 + 0x78));
        *(undefined4 *)(puVar14 + 0x78) = 0;
        if ((iVar15 < 0) && (*(int *)(puVar14 + 0x7c) != 0)) {
          FUN_14473dbc4(puVar14 + 0x50,0);
        }
      }
      lVar7 = local_120;
      if ((local_108 != 0) && (*(int *)(local_108 + 0x48) != 0)) {
        local_118 = (ushort *)0x0;
        uStack_110 = 0;
        FUN_14009e4cc(*(undefined2 *)((longlong)plVar9 + 0x36),&local_118);
        if ((longlong)(int)uStack_110 != 0) {
          puVar20 = local_118 + (int)uStack_110;
          puVar18 = local_118;
          do {
            if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
              lVar17 = *(longlong *)(param_1 + 0x130);
              if (*(longlong *)(param_1 + 0x130) == 0) {
                lVar17 = lVar7;
              }
              iVar15 = *(int *)(lVar17 + (ulonglong)
                                         (*(int *)(param_1 + 0x138) - 1U & (uint)*puVar18) * 4);
              if (iVar15 != -1) {
                do {
                  puVar1 = (ushort *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar15 * 0xc);
                  if (*puVar1 == *puVar18) {
                    if (puVar1 + 1 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
                      uVar16 = (ulonglong)puVar1[1];
                      bVar6 = *(byte *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) + 0x20 + uVar16 * 0x28) +
                                       0x32);
                      if (((bVar6 & 0x10) != 0) || (((bVar6 & 8) != 0 && (local_141 == '\0')))) {
                        plVar9 = (longlong *)(*(longlong *)(param_1 + 0xb8) + uVar16 * 0x28);
                        if (*plVar9 == 0) {
                          local_140 = plVar9;
                          plVar8 = (longlong *)FUN_14001cc68(0x90,0x10);
                          plVar8[1] = (longlong)&DAT_100000001;
                          *plVar8 = (longlong)&PTR_FUN_14a475ba0;
                          plVar8[10] = 0;
                          plVar8[0xb] = 0x400000000;
                          plVar8[0x10] = 0;
                          plVar8[0x11] = 0x400000000;
                          if (plVar8 == (longlong *)0x0) {
                            *local_140 = 0x10;
                            plVar13 = (longlong *)local_140[1];
                            plVar9 = local_140;
                            if (plVar13 != (longlong *)0x0) {
                              local_140[1] = 0;
LAB_14009fb4e:
                              LOCK();
                              plVar9 = plVar13 + 1;
                              *(int *)plVar9 = (int)*plVar9 + -1;
                              UNLOCK();
                              if ((int)*plVar9 == 0) {
                                local_128 = plVar13;
                                (**(code **)*plVar13)(plVar13);
                                LOCK();
                                piVar2 = (int *)((longlong)local_128 + 0xc);
                                *piVar2 = *piVar2 + -1;
                                UNLOCK();
                                if (*piVar2 == 0) {
                                  (**(code **)(*local_128 + 0x10))();
                                }
                              }
                              plVar9 = local_140;
                              if (plVar8 != (longlong *)0x0) goto LAB_14009fb83;
                            }
                          }
                          else {
                            LOCK();
                            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                            UNLOCK();
                            *local_140 = (longlong)(plVar8 + 2);
                            plVar13 = (longlong *)local_140[1];
                            if (plVar8 == plVar13) {
                              LOCK();
                              plVar9 = plVar8 + 1;
                              *(int *)plVar9 = (int)*plVar9 + -1;
                              UNLOCK();
                              if ((int)*plVar9 == 0) {
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
                            else {
                              local_140[1] = (longlong)plVar8;
                              if (plVar13 != (longlong *)0x0) goto LAB_14009fb4e;
                            }
LAB_14009fb83:
                            LOCK();
                            plVar13 = plVar8 + 1;
                            *(int *)plVar13 = (int)*plVar13 + -1;
                            UNLOCK();
                            plVar9 = local_140;
                            if ((int)*plVar13 == 0) {
                              (**(code **)*plVar8)(plVar8);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar8 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              UNLOCK();
                              plVar9 = local_140;
                              if (*piVar2 == 0) {
                                (**(code **)(*plVar8 + 0x10))(plVar8);
                                plVar9 = local_140;
                              }
                            }
                          }
                        }
                        lVar7 = *plVar9;
                        FUN_1456c53e8(lVar7,local_108);
                        FUN_1447b9e4a(lVar7 + 0x50,0);
                        lVar7 = local_120;
                      }
                    }
                    break;
                  }
                  iVar15 = *(int *)(puVar1 + 2);
                } while (iVar15 != -1);
              }
            }
            puVar18 = puVar18 + 1;
          } while (puVar18 != puVar20);
        }
        lVar7 = local_108;
        FUN_1456c53a2(local_108,0);
        iVar15 = *(int *)(lVar7 + 0x7c);
        lVar17 = *(longlong *)(lVar7 + 0x70);
        if (*(longlong *)(lVar7 + 0x70) == 0) {
          lVar17 = lVar7 + 0x50;
        }
        FUN_144717c65(lVar17,*(undefined4 *)(lVar7 + 0x78));
        *(undefined4 *)(lVar7 + 0x78) = 0;
        if ((iVar15 < 0) && (*(int *)(lVar7 + 0x7c) != 0)) {
          FUN_14473dbc4(lVar7 + 0x50,0);
        }
        if (local_118 != (ushort *)0x0) {
          FUN_1400020a8();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(param_2 + 0x28));
    uVar16 = local_68 & 0xffffffff;
  }
  puVar14 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar14 = local_90;
  }
  FUN_144717c65(puVar14,uVar16);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_e0);
  plVar9 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_100 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14009fd82 FUN_14009fd82 body=216 status=ok
// SIG undefined FUN_14009fd82(void)

void FUN_14009fd82(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined8 *)*param_2;
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  local_30 = (undefined1 *)0x0;
  local_28 = 1;
  FUN_144727e94(local_50,1,0);
  puVar2 = local_30;
  if (local_30 == (undefined1 *)0x0) {
    puVar2 = local_50;
  }
  FUN_144727e6e(puVar2,&local_58,1);
  (**(code **)(*param_1 + 0x60))(param_1,local_50,param_3);
  puVar2 = local_30;
  if (local_30 == (undefined1 *)0x0) {
    puVar2 = local_50;
  }
  FUN_144717c65(puVar2,local_28);
  if (local_30 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_58 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14009fe5c FUN_14009fe5c body=118 status=ok
// SIG undefined FUN_14009fe5c(void)

void FUN_14009fe5c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar4 = 0x10;
  if (0x10 < uVar1) {
    lVar3 = (longlong)(int)uVar1;
    if (0x10 < *(uint *)(param_1 + 0x2c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(lVar3 * 2,0);
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 1)) {
      uVar4 = uVar2 >> 1 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar4;
  FUN_14009fed2(param_1,param_2,uVar4,2);
  return;
}



// FUNCTION 14009fed2 FUN_14009fed2 body=130 status=ok
// SIG undefined FUN_14009fed2(void)

void FUN_14009fed2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 14009ff54 FUN_14009ff54 body=1166 status=ok
// SIG undefined FUN_14009ff54(void)

/* WARNING: Removing unreachable block (ram,0x0001400a0389) */

void FUN_14009ff54(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)((longlong)param_1 + 0x122) == *(int *)((longlong)param_1 + 0x11a)) &&
     ((*(byte *)((longlong)param_1 + 0x126) & 4) == 0)) goto LAB_1400a0313;
  iVar1 = *(int *)(param_1[0x20] + 0x24);
  if (iVar1 == 0) {
LAB_1400a033a:
    lVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1[0x20] + 0x20);
    lVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar1 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_1400a033a;
      lVar10 = *plVar9;
    }
  }
  *(longlong *)(lVar10 + 0x270) = *(longlong *)(lVar10 + 0x270) + 1;
  *(byte *)((longlong)param_1 + 0x126) = *(byte *)((longlong)param_1 + 0x126) | 2;
  FUN_14055c180(param_1,lVar10,0);
  local_68 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_38 = 0;
  uStack_60 = 0x8000000000;
  local_58 = 0xffffffff;
  if (&local_98 == param_1) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    uStack_40 = 0;
  }
  else {
    if (*param_1 == 0) {
      uStack_90._0_4_ = 0;
      local_98 = 0;
      uStack_90._4_4_ = 0;
    }
    else {
      FUN_1400020a8();
    }
    *param_1 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
    uStack_90 = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_88;
    local_88 = 0;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_80._4_4_;
    uStack_80 = 0;
    if (local_68 == 0) {
      *(undefined4 *)(param_1 + 4) = (undefined4)local_78;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_78._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_70._4_4_;
    }
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_68;
    local_68 = 0;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_60._4_4_;
    uStack_60 = 0;
    *(undefined4 *)(param_1 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_58._4_4_;
    local_58 = 0xffffffff;
    if (local_48 == 0) {
      *(undefined4 *)(param_1 + 9) = (undefined4)uStack_50;
    }
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = local_48;
    *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_40;
    *(undefined1 *)(param_1 + 0xc) = (undefined1)local_38;
    uStack_40 = uStack_40 & 0xffffffff00000000;
  }
  local_48 = 0;
  FUN_1409579b8(&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)param_1[0x1e];
  if (plVar9 != (longlong *)0x0) {
    local_a8 = param_1[0x20];
    local_a0 = param_1[0x21];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_a8);
  }
  local_b8 = param_1[0x20];
  local_b0 = param_1[0x21];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  lVar7 = FUN_140165676(&local_b8);
  if ((lVar7 != 0) && (lVar8 = param_1[0x1d], lVar8 != 0)) {
    lVar3 = *(longlong *)(lVar8 + 0x150);
    uVar4 = *(undefined8 *)(lVar8 + 0x158);
    lVar5 = *(longlong *)(lVar8 + 0x160);
    uVar6 = *(undefined8 *)(lVar8 + 0x168);
    *(undefined8 *)(lVar8 + 0x150) = *(undefined8 *)(lVar8 + 0x130);
    *(undefined8 *)(lVar8 + 0x158) = *(undefined8 *)(lVar8 + 0x138);
    *(undefined8 *)(lVar8 + 0x160) = *(undefined8 *)(lVar8 + 0x140);
    *(undefined8 *)(lVar8 + 0x168) = *(undefined8 *)(lVar8 + 0x148);
    local_98._0_4_ = (undefined4)lVar3;
    local_98._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_90._0_4_ = (undefined4)uVar4;
    uStack_90._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_88._0_4_ = (undefined4)lVar5;
    local_88._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    uStack_80._0_4_ = (undefined4)uVar6;
    uStack_80._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)(lVar8 + 0x130) = (undefined4)local_98;
    *(undefined4 *)(lVar8 + 0x134) = local_98._4_4_;
    *(undefined4 *)(lVar8 + 0x138) = (undefined4)uStack_90;
    *(undefined4 *)(lVar8 + 0x13c) = uStack_90._4_4_;
    *(undefined4 *)(lVar8 + 0x140) = (undefined4)local_88;
    *(undefined4 *)(lVar8 + 0x144) = local_88._4_4_;
    *(undefined4 *)(lVar8 + 0x148) = (undefined4)uStack_80;
    *(undefined4 *)(lVar8 + 0x14c) = uStack_80._4_4_;
    local_98 = lVar3;
    uStack_90 = uVar4;
    local_88 = lVar5;
    uStack_80 = uVar6;
    FUN_1400a2664(lVar8 + 0x150);
    FUN_1400a34d0(lVar8);
    FUN_1400a3a18(lVar8,lVar7,0);
  }
  if (*(int *)((longlong)param_1 + 0x122) == *(int *)((longlong)param_1 + 0x11a)) {
    lVar8 = FUN_1400a16d0(param_1[0x20] + 0x38);
    if (lVar8 != 0) {
      local_c8 = param_1[0x20];
      local_c0 = param_1[0x21];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      FUN_1400a5de2(lVar8,&local_c8);
      local_d8 = param_1[0x20];
      local_d0 = param_1[0x21];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_1400a1582(lVar8,&local_d8);
    }
    if (((lVar7 != 0) && (lVar7 = FUN_14027385c(lVar7 + 0x110), lVar7 != 0)) &&
       (*(char *)(lVar7 + 0xc) == '\x01')) {
      uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)((longlong)param_1 + 0x122));
      local_98 = lVar10;
      FUN_1456c62d8(lVar10 + 0x430);
    }
  }
LAB_1400a0313:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400a03e4 FUN_1400a03e4 body=586 status=ok
// SIG undefined FUN_1400a03e4(void)

void FUN_1400a03e4(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar2 = *(byte *)(param_1 + 0x126);
  *(byte *)(param_1 + 0x126) = bVar2 | 4;
  if ((bVar2 & 2) != 0) {
    *(byte *)(param_1 + 0x126) = bVar2 & 0xf9 | 4;
    plVar4 = *(longlong **)(param_1 + 0xf0);
    local_48 = *(undefined8 *)(param_1 + 0x100);
    local_40 = *(longlong *)(param_1 + 0x108);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,param_2);
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 8);
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  *(undefined4 *)(param_1 + 0x78) = param_2[4];
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  *(undefined4 *)(param_1 + 0x80) = uVar12;
  *(undefined4 *)(param_1 + 0x84) = uVar13;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x70) = uVar9;
  *(undefined4 *)(param_1 + 0x74) = uVar10;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0x98) = param_2[0xc];
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if (puVar1 != (undefined8 *)(param_2 + 0xe)) {
    FUN_1447bda9c(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
    iVar3 = param_2[0x10];
    uVar5 = *(undefined8 *)(param_2 + 0xe);
    *(int *)(param_1 + 0xa8) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0xac) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      FUN_14753cf4a(puVar1,iVar3);
      FUN_14753cfbd(*puVar1,uVar5,iVar3);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)(param_2 + 0x12)) {
    iVar3 = param_2[0x14];
    pvVar6 = *(void **)(param_2 + 0x12);
    *(int *)(param_1 + 0xb8) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0xbc) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      FUN_1456c5740(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar3 << 3);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0x16);
  puVar1 = (undefined8 *)(param_1 + 200);
  if (puVar1 != (undefined8 *)(param_2 + 0x18)) {
    iVar3 = param_2[0x1a];
    pvVar6 = *(void **)(param_2 + 0x18);
    *(int *)(param_1 + 0xd0) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0xd4) == 0) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      FUN_1447bda9e(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,pvVar6,(longlong)iVar3 << 2);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0xdd) = *(undefined8 *)((longlong)param_2 + 0x75);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  plVar4 = *(longlong **)(param_1 + 0xf0);
  local_58 = *(undefined8 *)(param_1 + 0x100);
  local_50 = *(longlong *)(param_1 + 0x108);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58,param_2);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a0630 FUN_1400a0630 body=2590 status=ok
// SIG undefined FUN_1400a0630(void)

void FUN_1400a0630(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong unaff_RBX;
  undefined7 uVar12;
  int iVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  int local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar9 = (int)param_1[1];
  if (iVar9 != 0) {
    lVar4 = param_1[0x1d];
    cVar1 = *(char *)(lVar4 + 0x270);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x1e) = iVar9;
      *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
      lVar11 = *(longlong *)(lVar4 + 0x248);
      param_1[0x30] = lVar11;
      iVar9 = (int)param_1[8];
      if (iVar9 != 0) {
        local_c8 = (longlong *)param_1[7];
        uVar10 = *(uint *)(local_c8 + 2);
        iVar13 = 0;
        if (uVar10 == 0) {
          uVar18 = 0x20;
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          uVar18 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
            }
          }
          uVar15 = (uint)*(ushort *)*local_c8;
          uVar10 = 0;
          if ((uVar15 | 0xffff0000) != 0) {
            for (; ((uVar15 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
        }
        iVar19 = (int)local_c8[3] << 9;
        bVar2 = true;
        local_b0 = local_c8;
        do {
          FUN_1403e6836((longlong)(int)((uVar18 & 0xff) * 0x10 + iVar19 + (uVar10 & 0xff)) * 0x78 +
                        *param_1,param_1,0xff);
          uVar15 = uVar15 & ~(1 << (uVar10 & 0x1f));
          uVar10 = 0;
          if ((uVar15 | 0xffff0000) != 0) {
            for (; ((uVar15 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          if ((short)uVar15 == 0 || uVar10 == 0x10) {
            if ((byte)uVar18 != 0x1f) {
              uVar10 = -2 << ((byte)uVar18 & 0x1f) & *(uint *)(local_c8 + 2);
              if (uVar10 == 0) {
                uVar18 = 0x20;
              }
              else {
                uVar18 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
              }
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(uint *)(local_c8 + 2) & ~(-1 << ((byte)uVar18 & 0x1f));
                uVar6 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1 & 0x15555555);
                uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
                uVar15 = (uint)*(ushort *)
                                (*local_c8 +
                                (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38) * 2);
                uVar10 = 0;
                if ((uVar15 | 0xffff0000) != 0) {
                  for (; ((uVar15 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
              }
              goto LAB_1400a0eaa;
            }
            uVar10 = 0;
LAB_1400a0eb0:
            iVar13 = iVar13 + 1;
            if (iVar13 < iVar9) {
              lVar4 = (longlong)iVar13;
              local_c8 = local_b0 + lVar4 * 4;
              uVar10 = *(uint *)(local_b0 + lVar4 * 4 + 2);
              iVar19 = (int)local_b0[lVar4 * 4 + 3] << 9;
              bVar2 = true;
              if (uVar10 == 0) {
                uVar18 = 0x20;
                uVar10 = 0;
                uVar15 = 0;
              }
              else {
                uVar18 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                uVar15 = (uint)*(ushort *)*local_c8;
                uVar10 = 0;
                if ((uVar15 | 0xffff0000) != 0) {
                  for (; ((uVar15 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
              }
            }
            else {
              iVar19 = 0;
              if (bVar2) {
                bVar2 = false;
              }
              uVar18 = 0x20;
            }
          }
          else {
LAB_1400a0eaa:
            if (0x1f < (byte)uVar18) goto LAB_1400a0eb0;
          }
        } while (iVar13 != iVar9 || bVar2);
        lVar4 = param_1[0x1d];
        lVar11 = *(longlong *)(lVar4 + 0x248);
      }
      *(ulonglong *)(lVar4 + 0x248) = (ulonglong)*(uint *)(param_1 + 0x31) + lVar11;
    }
    else {
      LOCK();
      *(int *)(param_1 + 0x1e) = iVar9;
      UNLOCK();
      *(char *)((longlong)param_1 + 0x18c) = cVar1;
      param_1[0x30] = *(longlong *)(param_1[0x1d] + 0x248);
      lVar4 = FUN_1405d8a54(0);
      param_1[0x1f] = lVar4;
      iVar9 = (int)param_1[8];
      if (iVar9 != 0) {
        local_a8 = (longlong *)param_1[7];
        uVar10 = *(uint *)(local_a8 + 2);
        if (uVar10 == 0) {
          unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),0x20);
          uVar18 = 0;
          uVar10 = 0;
        }
        else {
          uVar18 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
            }
          }
          unaff_RBX = (ulonglong)uVar18;
          uVar18 = (uint)*(ushort *)*local_a8;
          uVar10 = 0;
          if ((uVar18 | 0xffff0000) != 0) {
            for (; ((uVar18 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
        }
        local_b0 = (longlong *)CONCAT44(local_b0._4_4_,(int)local_a8[3] << 9);
        local_a0 = (ulonglong *)(param_1 + 0x20);
        local_80 = -0x3fffffad6e266600;
        local_88 = (longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
        bVar2 = true;
        iVar13 = 0;
        local_b4 = iVar9;
        local_90 = local_a8;
        do {
          local_c8 = (longlong *)CONCAT44(local_c8._4_4_,iVar13);
          iVar13 = (uVar10 & 0xff) + (int)local_b0 + ((uint)unaff_RBX & 0xff) * 0x10;
          lVar4 = *param_1;
          lVar11 = (longlong)iVar13 * 0x78;
          if ((*(byte *)(lVar4 + 0x71 + lVar11) & 1) == 0) {
            local_78 = *local_a0;
            puVar14 = (ulonglong *)0x0;
            if ((local_78 & 0x3ffffff) != 0) {
              puVar14 = (ulonglong *)
                        ((ulonglong)(((uint)local_78 & 0x3fff) * 0x18) +
                        *(longlong *)
                         (&DAT_14c833b00 + (ulonglong)(((uint)local_78 & 0x3ffffff) >> 0xe) * 8));
            }
            local_c0 = *puVar14;
            if ((local_c0 & 0x3ffffff) == 0) {
              lVar4 = *param_1;
              goto LAB_1400a083c;
            }
            plVar5 = TlsGetValue(DAT_14c896140);
            if (plVar5 == (longlong *)0x0) {
              plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
              *plVar5 = 0;
              plVar5[1] = 0;
              *(undefined4 *)(plVar5 + 2) = 0;
              TlsSetValue(DAT_14c896140,plVar5);
            }
            plVar17 = (longlong *)plVar5[1];
            if (plVar17 == (longlong *)0x0) {
              plVar17 = (longlong *)*plVar5;
              if (plVar17 == (longlong *)0x0) {
                uVar15 = (uint)DAT_14c896180;
                uVar6 = DAT_14c896180;
                uVar3 = local_94;
                while (DAT_14c896180 = uVar6, local_78 = uVar6, (uVar6 & 0x3ffffff) != 0) {
                  local_94 = uVar15 & 0x3ffffff;
                  local_c0 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
                  uVar15 = local_94;
                  if (local_c0 >> 0x1a < uVar6 >> 0x1a) {
                    FUN_14000f986(0x3a83126f);
                    uVar3 = local_94;
                    uVar15 = local_94;
                  }
                  local_94 = uVar3;
                  uVar16 = (ulonglong)((uint)uVar6 & 0x3fff);
                  local_c0 = local_c0 & 0xfffffffffc000000 |
                             (ulonglong)
                             *(uint *)(*(longlong *)
                                        (&DAT_14c833b00 + (ulonglong)(uVar15 >> 0xe) * 8) + 0x10 +
                                      uVar16 * 0x18);
                  LOCK();
                  bVar20 = local_78 == DAT_14c896180;
                  uVar6 = local_c0;
                  if (!bVar20) {
                    uVar6 = DAT_14c896180;
                  }
                  DAT_14c896180 = uVar6;
                  UNLOCK();
                  if (bVar20) {
                    *(undefined4 *)
                     (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar15 >> 0xe) * 8) + uVar16 * 0x18
                     + 0x10) = 0;
                    plVar17 = *(longlong **)
                               (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar15 >> 0xe) * 8) + 8 +
                               (ulonglong)(uVar15 & 0x3fff) * 0x18);
                    FUN_1447d080c();
                    plVar5[1] = (longlong)plVar17;
                    if (plVar17 == (longlong *)0x0) goto LAB_1400a0aa9;
                    goto LAB_1400a0ae4;
                  }
                  uVar15 = (uint)DAT_14c896180;
                  uVar6 = DAT_14c896180;
                  uVar3 = local_94;
                }
                plVar5[1] = 0;
                local_94 = uVar3;
LAB_1400a0aa9:
                puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
                plVar5[1] = (longlong)puVar7;
                iVar9 = 0xff;
                do {
                  puVar8 = puVar7 + 0x20;
                  *puVar7 = puVar8;
                  iVar9 = iVar9 + -1;
                  puVar7 = puVar8;
                } while (iVar9 != 0);
                *puVar8 = 0;
                plVar17 = (longlong *)plVar5[1];
              }
              else {
                plVar5[1] = (longlong)plVar17;
                *plVar5 = 0;
              }
LAB_1400a0ae4:
              *(undefined4 *)(plVar5 + 2) = 0x100;
              iVar9 = 0x100;
            }
            else {
              iVar9 = (int)plVar5[2];
            }
            plVar5[1] = *plVar17;
            *(int *)(plVar5 + 2) = iVar9 + -1;
            *plVar17 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
            plVar17[1] = (longlong)&DAT_100000002;
            plVar17[2] = 0;
            *(undefined4 *)(plVar17 + 3) = 0;
            *(undefined4 *)(plVar17 + 4) = 0xffffffff;
            plVar17[6] = 0;
            plVar17[7] = 0x100000000;
            *(undefined1 *)(plVar17 + 8) = 1;
            plVar17[0xe] = (longlong)
                           LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateDummy::vftable;
            plVar17[0xf] = 0;
            plVar17[0x10] = -0x17ffffffffffffe0;
            plVar17[0x12] = 0;
            plVar17[0x13] = 0x100000000;
            *(undefined2 *)(plVar17 + 0x14) = 0;
            LOCK();
            bVar20 = (char)plVar17[8] == '\x01';
            if (bVar20) {
              *(char *)(plVar17 + 8) = '\0';
            }
            UNLOCK();
            if (!bVar20) {
              FUN_14008cdb0(plVar17 + 8);
            }
            iVar9 = local_b4;
            *plVar17 = (longlong)&PTR_FUN_14a480cf8;
            if (*(code **)(plVar17[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(plVar17[0xe] + 0x18))(plVar17 + 0xe,plVar17 + 9);
            }
            plVar17[0xe] = (longlong)
                           LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            plVar17[9] = (longlong)plVar17;
            plVar17[10] = (longlong)plVar17;
            if (*local_88 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(longlong *)(*local_88 + 0x30);
            }
            plVar17[0xf] = lVar4;
            plVar17[0x10] = local_80;
            *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
            plVar17[0x15] = (longlong)param_1;
            *(int *)(plVar17 + 0x16) = iVar13;
            *plVar17 = (longlong)&PTR_FUN_14a480ce8;
            local_78 = CONCAT71(local_78._1_7_,1);
            FUN_1447439e4(plVar17,&local_78);
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar17 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar17)(plVar17,1);
              }
            }
          }
          else {
LAB_1400a083c:
            FUN_1403e70f8(local_a0,lVar11 + lVar4);
          }
          uVar18 = uVar18 & ~(1 << (uVar10 & 0x1f));
          uVar10 = 0;
          if ((uVar18 | 0xffff0000) != 0) {
            for (; ((uVar18 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          if ((short)uVar18 == 0 || uVar10 == 0x10) {
            if ((byte)unaff_RBX != 0x1f) {
              uVar10 = -2 << ((byte)unaff_RBX & 0x1f) & *(uint *)(local_a8 + 2);
              if (uVar10 == 0) {
                unaff_RBX = 0x20;
              }
              else {
                uVar15 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
                  }
                }
                unaff_RBX = (ulonglong)uVar15;
              }
              if (uVar10 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(uint *)(local_a8 + 2) & ~(-1 << ((byte)unaff_RBX & 0x1f));
                uVar6 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1 & 0x15555555);
                uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
                uVar18 = (uint)*(ushort *)
                                (*local_a8 +
                                (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38) * 2);
                uVar10 = 0;
                if ((uVar18 | 0xffff0000) != 0) {
                  for (; ((uVar18 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
              }
              goto LAB_1400a088f;
            }
            uVar10 = 0;
LAB_1400a0898:
            iVar13 = (int)local_c8 + 1;
            uVar12 = (undefined7)(unaff_RBX >> 8);
            if (iVar13 < iVar9) {
              lVar4 = (longlong)iVar13;
              local_a8 = local_90 + lVar4 * 4;
              uVar10 = *(uint *)(local_90 + lVar4 * 4 + 2);
              local_b0 = (longlong *)CONCAT44(local_b0._4_4_,(int)local_90[lVar4 * 4 + 3] << 9);
              bVar2 = true;
              iVar9 = local_b4;
              if (uVar10 == 0) {
                unaff_RBX = CONCAT71(uVar12,0x20);
                uVar18 = 0;
                uVar10 = 0;
              }
              else {
                uVar18 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                unaff_RBX = (ulonglong)uVar18;
                uVar18 = (uint)*(ushort *)*local_a8;
                uVar10 = 0;
                if ((uVar18 | 0xffff0000) != 0) {
                  for (; ((uVar18 | 0xffff0000) >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
                  }
                }
              }
            }
            else {
              local_b0 = (longlong *)((ulonglong)local_b0._4_4_ << 0x20);
              if (bVar2) {
                bVar2 = false;
              }
              unaff_RBX = CONCAT71(uVar12,0x20);
            }
          }
          else {
LAB_1400a088f:
            iVar13 = (int)local_c8;
            if (0x1f < (byte)unaff_RBX) goto LAB_1400a0898;
          }
        } while (iVar13 != iVar9 || bVar2);
      }
      while( true ) {
        lVar4 = FUN_140b633c4(param_1 + 0x20);
        uVar6 = unaff_RBX;
        if (lVar4 != 0) {
          uVar6 = unaff_RBX | 1;
          do {
            FUN_1403e6836(lVar4,param_1,unaff_RBX & 0xffffffff | 1);
            lVar4 = FUN_140b633c4(param_1 + 0x20);
          } while (lVar4 != 0);
        }
        iVar9 = (int)param_1[0x1e];
        if (iVar9 == -1) goto LAB_1400a0da6;
        if (iVar9 == 0) break;
        (**(code **)(*(longlong *)param_1[0x1f] + 0x20))((longlong *)param_1[0x1f],0xffffffff,0);
        unaff_RBX = uVar6;
      }
      do {
        if (*(char *)((longlong)param_1 + 0x18c) != '\0') {
          iVar9 = (int)param_1[0x1e];
        }
      } while (iVar9 != -1);
LAB_1400a0da6:
      *(longlong *)(param_1[0x1d] + 0x248) =
           *(longlong *)(param_1[0x1d] + 0x248) + (ulonglong)*(uint *)(param_1 + 0x31);
      if (*(char *)((longlong)param_1 + 0x18c) == '\0') {
        *(undefined4 *)(param_1 + 0x1e) = 0;
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 0x1e) = 0;
        UNLOCK();
      }
      FUN_14018802a(param_1[0x1f]);
      param_1[0x1f] = 0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a1050 FUN_1400a1050 body=580 status=ok
// SIG undefined FUN_1400a1050(void)

undefined8 FUN_1400a1050(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (DAT_14cab2770 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1475472e1;
      local_50 = &LAB_14633c0b5;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_1400a1103;
    }
    if (((*(int *)(DAT_14cab2770 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8)
         == DAT_14cab2770 + 0x30)) && (lVar3 = *param_2, lVar3 != 0)) {
      lVar4 = *(longlong *)(lVar3 + 0x110);
      if (lVar4 == 0) {
        FUN_140aa6c08(lVar3);
        lVar4 = *(longlong *)(lVar3 + 0x110);
        if (lVar4 == 0) goto LAB_1400a1103;
        if (DAT_14cab2770 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1475472e1;
          local_50 = &LAB_14633c0b5;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x40;
          FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,
                        &DAT_1475472e0);
        }
      }
      if (((*(int *)(DAT_14cab2770 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8) == DAT_14cab2770 + 0x30)) &&
         (uVar1 = *(ushort *)(lVar4 + 0x36), (int)(uint)uVar1 < *(int *)(param_1 + 0x578))) {
        lVar3 = param_1 + 0x560;
        if (*(longlong *)(param_1 + 0x570) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x570);
        }
        if ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x550) + (ulonglong)(uint)uVar1 * 8);
          goto LAB_1400a1105;
        }
      }
    }
  }
LAB_1400a1103:
  uVar2 = 0;
LAB_1400a1105:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1400a1296 FUN_1400a1296 body=73 status=ok
// SIG undefined FUN_1400a1296(void)

void FUN_1400a1296(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) * 2);
      FUN_1446efa72((longlong)param_1 + 8,0,0,2);
      return;
    }
  }
  return;
}



// FUNCTION 1400a12e0 FUN_1400a12e0 body=73 status=ok
// SIG undefined FUN_1400a12e0(void)

void FUN_1400a12e0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) * 2);
      FUN_1446efa72((longlong)param_1 + 8,0,0,2);
      return;
    }
  }
  return;
}



// FUNCTION 1400a132a FUN_1400a132a body=337 status=ok
// SIG undefined FUN_1400a132a(void)

void FUN_1400a132a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  uVar6 = 8;
  if (8 < uVar2) {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x1c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1400a13c3;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1400a13c3:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 1)) {
      uVar6 = uVar4 >> 1 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)uVar6;
  FUN_1400a147c(param_1,param_2,uVar6,2);
  return;
}



// FUNCTION 1400a147c FUN_1400a147c body=130 status=ok
// SIG undefined FUN_1400a147c(void)

void FUN_1400a147c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400a14fe FUN_1400a14fe body=131 status=ok
// SIG undefined FUN_1400a14fe(void)

void FUN_1400a14fe(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_20,1);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a1582 FUN_1400a1582 body=174 status=ok
// SIG undefined FUN_1400a1582(void)

void FUN_1400a1582(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined1 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x68) = 1;
  local_28 = &local_31;
  local_30 = &LAB_1432e10b6;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1400a1632(param_1,&local_48,&local_30);
  *(undefined1 *)(param_1 + 0x68) = uVar3;
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a1632 FUN_1400a1632 body=157 status=ok
// SIG undefined FUN_1400a1632(void)

void FUN_1400a1632(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_28;
  local_20 = FUN_1432e1072;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_3;
  FUN_1400a5ffc(param_1,&local_38,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a16d0 FUN_1400a16d0 body=188 status=ok
// SIG undefined FUN_1400a16d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400a16d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab3ff8 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab3ff8 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1400a178c FUN_1400a178c body=370 status=ok
// SIG undefined FUN_1400a178c(void)

void FUN_1400a178c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400a1815;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1400a1815:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1400a18fe FUN_1400a18fe body=2519 status=ok
// SIG undefined FUN_1400a18fe(void)

void FUN_1400a18fe(void)

{
  longlong lVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 *_Src;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  ushort uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_e9;
  uint local_e8 [4];
  uint *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  uint local_a0;
  uint local_9c;
  undefined1 local_98 [16];
  undefined1 *local_88;
  uint local_80;
  uint local_7c;
  undefined4 *local_78;
  undefined1 local_68 [16];
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14cab2904 == DAT_14cab2900) goto LAB_1400a1931;
  DAT_14cab28d0 = 0;
  if (DAT_14cab28d4 < 0) {
    FUN_14754fc6c();
  }
  iVar11 = DAT_14cab2830;
  DAT_14cab28d8 = 0;
  if (0 < DAT_14cab2830) {
    iVar16 = 0;
    do {
      uVar12 = 0;
      uVar15 = (ushort)iVar16;
      if (0 < (int)DAT_14cab2860) {
        uVar12 = 0;
        uVar19 = (ulonglong)DAT_14cab2860;
        uVar4 = DAT_14cab2860;
        do {
          uVar19 = uVar19 >> 1;
          uVar18 = (uint)uVar19 + (int)uVar12;
          if (*(ushort *)(DAT_14cab2858 + (ulonglong)uVar18 * 4) < uVar15) {
            uVar12 = (ulonglong)(uVar18 + (uVar4 & 1));
          }
          bVar23 = 1 < uVar4;
          uVar4 = (uint)uVar19;
        } while (bVar23);
      }
      uVar4 = DAT_14cab2860 - (int)uVar12;
      uVar19 = (ulonglong)uVar4;
      if (uVar4 != 0 && (int)uVar12 <= (int)DAT_14cab2860) {
        lVar22 = DAT_14cab2858 + uVar12 * 4;
        uVar12 = 0;
        do {
          if (*(ushort *)(lVar22 + uVar12 * 4) != uVar15) {
            uVar19 = uVar12 & 0xffffffff;
            goto LAB_1400a19fd;
          }
          uVar12 = uVar12 + 1;
        } while (uVar19 != uVar12);
        uVar12 = (ulonglong)uVar4;
LAB_1400a19fd:
        if ((int)uVar12 != 0) {
          lVar13 = lVar22 + uVar19 * 4;
          do {
            uVar2 = *(ushort *)(lVar22 + 2);
            if (*(short *)(DAT_14cab2828 + 8 + (ulonglong)uVar2 * 0xc) == -1) {
              FUN_1447ba426(&DAT_14cab28a8);
            }
            else {
              uVar12 = 0;
              if (0 < (int)DAT_14cab2860) {
                uVar19 = (ulonglong)DAT_14cab2860;
                uVar4 = DAT_14cab2860;
                do {
                  uVar19 = uVar19 >> 1;
                  uVar18 = (uint)uVar19 + (int)uVar12;
                  if (*(ushort *)(DAT_14cab2858 + (ulonglong)uVar18 * 4) < uVar2) {
                    uVar12 = (ulonglong)(uVar18 + (uVar4 & 1));
                  }
                  bVar23 = 1 < uVar4;
                  uVar4 = (uint)uVar19;
                } while (bVar23);
              }
              uVar4 = DAT_14cab2860 - (int)uVar12;
              uVar19 = (ulonglong)uVar4;
              if (uVar4 != 0 && (int)uVar12 <= (int)DAT_14cab2860) {
                lVar20 = DAT_14cab2858 + uVar12 * 4;
                uVar12 = 0;
                do {
                  if (*(ushort *)(lVar20 + uVar12 * 4) != uVar2) {
                    uVar19 = uVar12 & 0xffffffff;
                    goto LAB_1400a1aa4;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar19 != uVar12);
                uVar12 = (ulonglong)uVar4;
LAB_1400a1aa4:
                if ((int)uVar12 != 0) {
                  lVar1 = lVar20 + uVar19 * 4;
                  do {
                    FUN_1447ba426(&DAT_14cab28a8);
                    lVar20 = lVar20 + 4;
                  } while (lVar20 != lVar1);
                }
              }
            }
            lVar22 = lVar22 + 4;
          } while (lVar22 != lVar13);
        }
      }
      uVar12 = 0;
      if (0 < (int)DAT_14cab2898) {
        uVar19 = (ulonglong)DAT_14cab2898;
        uVar4 = DAT_14cab2898;
        do {
          uVar19 = uVar19 >> 1;
          uVar18 = (uint)uVar19 + (int)uVar12;
          if (*(ushort *)(DAT_14cab2890 + (ulonglong)uVar18 * 4) < uVar15) {
            uVar12 = (ulonglong)(uVar18 + (uVar4 & 1));
          }
          bVar23 = 1 < uVar4;
          uVar4 = (uint)uVar19;
        } while (bVar23);
      }
      uVar4 = DAT_14cab2898 - (int)uVar12;
      uVar19 = (ulonglong)uVar4;
      if (uVar4 != 0 && (int)uVar12 <= (int)DAT_14cab2898) {
        lVar22 = DAT_14cab2890 + uVar12 * 4;
        uVar12 = 0;
        do {
          if (*(ushort *)(lVar22 + uVar12 * 4) != uVar15) {
            uVar19 = uVar12 & 0xffffffff;
            goto LAB_1400a1b32;
          }
          uVar12 = uVar12 + 1;
        } while (uVar19 != uVar12);
        uVar12 = (ulonglong)uVar4;
LAB_1400a1b32:
        if ((int)uVar12 != 0) {
          lVar13 = lVar22 + uVar19 * 4;
          do {
            uVar15 = *(ushort *)(lVar22 + 2);
            if (*(short *)(DAT_14cab2828 + 8 + (ulonglong)uVar15 * 0xc) == -1) {
              FUN_1447ba426(&DAT_14cab28a8);
            }
            else {
              uVar12 = 0;
              if (0 < (int)DAT_14cab2898) {
                uVar19 = (ulonglong)DAT_14cab2898;
                uVar4 = DAT_14cab2898;
                do {
                  uVar19 = uVar19 >> 1;
                  uVar18 = (uint)uVar19 + (int)uVar12;
                  if (*(ushort *)(DAT_14cab2890 + (ulonglong)uVar18 * 4) < uVar15) {
                    uVar12 = (ulonglong)(uVar18 + (uVar4 & 1));
                  }
                  bVar23 = 1 < uVar4;
                  uVar4 = (uint)uVar19;
                } while (bVar23);
              }
              uVar4 = DAT_14cab2898 - (int)uVar12;
              uVar19 = (ulonglong)uVar4;
              if (uVar4 != 0 && (int)uVar12 <= (int)DAT_14cab2898) {
                lVar20 = DAT_14cab2890 + uVar12 * 4;
                uVar12 = 0;
                do {
                  if (*(ushort *)(lVar20 + uVar12 * 4) != uVar15) {
                    uVar19 = uVar12 & 0xffffffff;
                    goto LAB_1400a1bd1;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar19 != uVar12);
                uVar12 = (ulonglong)uVar4;
LAB_1400a1bd1:
                if ((int)uVar12 != 0) {
                  lVar1 = lVar20 + uVar19 * 4;
                  do {
                    FUN_1447ba426(&DAT_14cab28a8);
                    lVar20 = lVar20 + 4;
                  } while (lVar20 != lVar1);
                }
              }
            }
            lVar22 = lVar22 + 4;
          } while (lVar22 != lVar13);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar11);
  }
  FUN_1409099e8(&DAT_14cab28a8);
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  local_a8 = (undefined1 *)0x0;
  local_9c = 0x80;
  local_a0 = DAT_14cab28c0;
  uVar4 = DAT_14cab28c0 + 0x1f;
  if (0x1f < uVar4) {
    puVar9 = local_b8;
    if (uVar4 < 0xa0) {
LAB_1400a1c97:
      uVar4 = uVar4 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(&local_a8,0,uVar4 >> 5,4);
      local_9c = uVar4 & 0xffffffe0;
      puVar9 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar9 = local_b8;
      }
      if (uVar4 < 0x120) goto LAB_1400a1c97;
      uVar4 = (uVar4 >> 5) << 2;
    }
    memset(puVar9,0,(ulonglong)uVar4);
    uVar4 = local_a0 + 0x1f;
    if (-1 < (int)local_a0) {
      uVar4 = local_a0;
    }
    if ((int)local_a0 % 0x20 != 0) {
      puVar9 = local_b8;
      if (local_a8 != (undefined1 *)0x0) {
        puVar9 = local_a8;
      }
      bVar6 = -(char)((int)local_a0 % 0x20);
      *(uint *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) =
           (uint)(*(int *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  local_88 = (undefined1 *)0x0;
  local_7c = 0x80;
  local_80 = DAT_14cab28c0;
  uVar4 = DAT_14cab28c0 + 0x1f;
  if (0x1f < uVar4) {
    puVar9 = local_98;
    if (uVar4 < 0xa0) {
LAB_1400a1d5d:
      uVar4 = uVar4 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(&local_88,0,uVar4 >> 5,4);
      local_7c = uVar4 & 0xffffffe0;
      puVar9 = local_88;
      if (local_88 == (undefined1 *)0x0) {
        puVar9 = local_98;
      }
      if (uVar4 < 0x120) goto LAB_1400a1d5d;
      uVar4 = (uVar4 >> 5) << 2;
    }
    memset(puVar9,0,(ulonglong)uVar4);
    uVar4 = local_80 + 0x1f;
    if (-1 < (int)local_80) {
      uVar4 = local_80;
    }
    if ((int)local_80 % 0x20 != 0) {
      puVar9 = local_98;
      if (local_88 != (undefined1 *)0x0) {
        puVar9 = local_88;
      }
      bVar6 = -(char)((int)local_80 % 0x20);
      *(uint *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) =
           (uint)(*(int *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  puVar5 = DAT_14cab28b8;
  if (DAT_14cab28b8 == (undefined4 *)0x0) {
    puVar5 = &DAT_14cab28a8;
  }
  uVar4 = 0xffffffff >> (-(char)((int)DAT_14cab28c0 % 0x20) & 0x1fU);
  if ((int)DAT_14cab28c0 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  local_78 = &DAT_14cab28a8;
  if ((int)DAT_14cab28c0 < 1) {
    uVar12 = 0;
  }
  else {
    uVar19 = (ulonglong)DAT_14cab28c0 + 0x1f >> 5;
    uVar18 = 0xffffffff;
    if (DAT_14cab28c0 < 0x21) {
      uVar18 = uVar4;
    }
    uVar21 = 0;
    uVar12 = 0;
    do {
      uVar17 = (ulonglong)(uVar18 & puVar5[uVar21]) -
               (ulonglong)((uVar18 & puVar5[uVar21]) >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
      uVar12 = (ulonglong)
               ((int)uVar12 +
               (uint)(byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ));
      bVar23 = uVar19 - 2 == uVar21;
      uVar21 = uVar21 + 1;
      uVar18 = 0xffffffff;
      if (bVar23) {
        uVar18 = uVar4;
      }
    } while (uVar19 != uVar21);
  }
  if (uStack_c0._4_4_ < (int)uVar12) {
    FUN_1448759c8(&local_c8);
  }
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  local_50 = DAT_14cab28c0;
  uVar4 = DAT_14cab28c0 + 0x1f;
  if (0x1f < uVar4) {
    if (uVar4 < 0xa0) {
      puVar9 = local_68;
LAB_1400a1f10:
      uVar4 = uVar4 >> 3 & 0xfffffffc;
      iVar11 = (int)CONCAT71((int7)(uVar12 >> 8),0xff);
    }
    else {
      uVar12 = 0;
      FUN_1446efa72(&local_58,0,uVar4 >> 5,4);
      local_4c = uVar4 & 0xffffffe0;
      puVar9 = local_68;
      if (local_58 != (undefined1 *)0x0) {
        puVar9 = local_58;
      }
      if (uVar4 < 0x120) goto LAB_1400a1f10;
      uVar4 = (uVar4 >> 5) << 2;
      iVar11 = (int)CONCAT71((int7)(uVar12 >> 8),0xff);
    }
    memset(puVar9,iVar11,(ulonglong)uVar4);
    uVar4 = local_50 + 0x1f;
    if (-1 < (int)local_50) {
      uVar4 = local_50;
    }
    if ((int)local_50 % 0x20 != 0) {
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_68;
      }
      bVar6 = -(char)((int)local_50 % 0x20);
      *(uint *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) =
           (uint)(*(int *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  if (0 < DAT_14cab28d0) {
    uVar4 = 1;
    do {
      uVar15 = *(ushort *)(DAT_14cab28c8 + 2 + (ulonglong)(uVar4 - 1 & 0xffff) * 4);
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_68;
      }
      bVar6 = (byte)uVar15 & 0x1f;
      *(uint *)(puVar9 + (ulonglong)(uVar15 >> 5) * 4) =
           *(uint *)(puVar9 + (ulonglong)(uVar15 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      uVar18 = uVar4 & 0xffff;
      uVar4 = uVar4 + 1;
    } while ((int)uVar18 < DAT_14cab28d0);
  }
  local_d8 = (uint *)0x0;
  local_d0 = 0x8000000000;
  local_f8 = &local_e9;
  uVar12 = 1;
  FUN_1400aa4bb(local_68,&DAT_14cab28a8,local_e8,1);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)local_d0 == 0) {
    iVar11 = 0;
    iVar16 = 0;
    uVar19 = 0;
  }
  else {
    puVar10 = local_d8;
    if (local_d8 == (uint *)0x0) {
      puVar10 = local_e8;
    }
    uVar4 = *puVar10;
    if (uVar4 == 0) {
      iVar11 = (int)local_d0 + 0x1e;
      if (-1 < (int)local_d0 + -1) {
        iVar11 = (int)local_d0 + -1;
      }
      uVar19 = 0;
      uVar12 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar12 = uVar19;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar19) goto LAB_1400a2135;
        iVar16 = iVar16 + 0x20;
        uVar4 = puVar10[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar4 == 0);
    }
    else {
      iVar16 = 0;
      uVar19 = 0;
    }
    uVar12 = (ulonglong)(-uVar4 & uVar4);
    uVar21 = uVar12 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar11 = (iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if ((int)local_d0 <= iVar11) {
      iVar11 = (int)local_d0;
    }
  }
  if (iVar11 < (int)local_d0) {
    uVar4 = 0xffffffff;
    do {
      FUN_1400a22d6(&local_c8);
      uVar4 = ~(uint)uVar12 & uVar4;
      puVar10 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar10 = local_e8;
      }
      iVar11 = (int)uVar19;
      lVar22 = (longlong)iVar11;
      uVar18 = puVar10[lVar22] & uVar4;
      if (uVar18 == 0) {
        iVar7 = (int)local_d0 + 0x1e;
        if (-1 < (int)local_d0 + -1) {
          iVar7 = (int)local_d0 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar18 = puVar10[lVar22 + lVar13 + 1];
          if (uVar18 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar8 - lVar22 == lVar13) goto LAB_1400a2135;
        }
        uVar19 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar4 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar18 & uVar18);
      uVar21 = uVar12 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
    } while ((int)((iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e) < (int)local_d0);
  }
LAB_1400a2135:
  _Src = local_c8;
  uVar4 = (uint)uStack_c0;
  if (1 < (int)(uint)uStack_c0) {
    lVar22 = 0;
    puVar14 = local_c8;
    do {
      uVar3 = *puVar14;
      *puVar14 = local_c8[(uStack_c0 & 0xffffffff) + lVar22 + -1];
      local_c8[(uStack_c0 & 0xffffffff) + lVar22 + -1] = uVar3;
      lVar22 = lVar22 + -1;
      puVar14 = puVar14 + 1;
    } while (-lVar22 != (ulonglong)((uint)uStack_c0 >> 1));
  }
  DAT_14cab28e8 = (uint)uStack_c0;
  if (DAT_14cab28ec == 0 && (uint)uStack_c0 == 0) {
    DAT_14cab28ec = 0;
  }
  else {
    FUN_140817052(&DAT_14cab28e0,uStack_c0 & 0xffffffff);
    if (uVar4 != 0) {
      memcpy(DAT_14cab28e0,_Src,(longlong)(int)uVar4 * 2);
    }
  }
  FUN_140d04a4c(&DAT_14cab28f0,DAT_14cab2830,1);
  if (0 < (int)DAT_14cab28e8) {
    lVar22 = 0;
    do {
      *(short *)(DAT_14cab28f0 + (ulonglong)*(ushort *)((longlong)DAT_14cab28e0 + lVar22 * 2) * 2) =
           (short)lVar22;
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)DAT_14cab28e8);
  }
  DAT_14cab2904 = DAT_14cab2900;
  if (local_d8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1400a1931:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a22d6 FUN_1400a22d6 body=325 status=ok
// SIG undefined FUN_1400a22d6(void)

void FUN_1400a22d6(longlong *param_1,ushort param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  ulonglong uVar9;
  
  plVar15 = param_1 + 6;
  uVar12 = 1 << ((byte)param_2 & 0x1f);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = plVar15;
  }
  puVar2 = (uint *)((longlong)plVar8 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 | uVar12;
  uVar7 = *(uint *)(param_1[10] + 0x28);
  lVar14 = *(longlong *)(param_1[10] + 0x20);
  uVar11 = 0;
  uVar6 = uVar7;
  if (0 < (int)uVar7) {
    do {
      uVar1 = (uVar6 >> 1) + uVar11;
      if (*(ushort *)(lVar14 + (ulonglong)uVar1 * 4) < param_2) {
        uVar11 = uVar1 + (uVar6 & 1);
      }
      bVar16 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar16);
  }
  uVar6 = uVar7 - uVar11;
  uVar9 = (ulonglong)uVar6;
  if (uVar6 != 0 && (int)uVar11 <= (int)uVar7) {
    lVar14 = lVar14 + (ulonglong)uVar11 * 4;
    uVar10 = 0;
    do {
      if (*(ushort *)(lVar14 + uVar10 * 4) != param_2) {
        uVar9 = uVar10 & 0xffffffff;
        goto LAB_1400a236b;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    uVar10 = (ulonglong)uVar6;
LAB_1400a236b:
    if ((int)uVar10 != 0) {
      lVar3 = lVar14 + uVar9 * 4;
      do {
        uVar4 = *(ushort *)(lVar14 + 2);
        uVar7 = 1 << ((byte)uVar4 & 0x1f);
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        uVar9 = (ulonglong)(uVar4 >> 5);
        uVar6 = *(uint *)((longlong)plVar8 + uVar9 * 4);
        if ((uVar6 >> (uVar4 & 0x1f) & 1) == 0) {
          plVar13 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar13 = plVar15;
          }
          if ((*(uint *)((longlong)plVar13 + uVar9 * 4) & uVar7) != 0) {
            return;
          }
          *(uint *)((longlong)plVar8 + uVar9 * 4) = uVar7 | uVar6;
          FUN_1400a22d6(param_1);
        }
        lVar14 = lVar14 + 4;
      } while (lVar14 != lVar3);
    }
  }
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_14488eebe(param_1,iVar5);
  }
  *(ushort *)(*param_1 + (longlong)iVar5 * 2) = param_2;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[8];
  }
  puVar2 = (uint *)((longlong)plVar15 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & ~uVar12;
  return;
}



// FUNCTION 1400a241c FUN_1400a241c body=80 status=ok
// SIG undefined FUN_1400a241c(void)

longlong * FUN_1400a241c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1447bda9c(*param_1,(int)param_1[1]);
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



// FUNCTION 1400a246c FUN_1400a246c body=138 status=ok
// SIG undefined FUN_1400a246c(void)

undefined8 FUN_1400a246c(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_10 [4];
  uint local_c;
  char local_8 [4];
  uint local_4;
  
  local_8[0] = '\x01';
  local_4 = *param_2;
  pcVar3 = (char *)(ulonglong)local_4;
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    iVar2 = *(int *)(param_1 + 4);
    pcVar4 = param_1;
    if ((int)local_4 <= iVar2) {
      if ((int)local_4 < iVar2) {
        pcVar4 = local_8;
      }
      else {
        pcVar4 = local_8;
        if (cVar1 == '\x01') {
          pcVar4 = param_1;
        }
      }
    }
    if (*pcVar4 != cVar1) {
      return 0;
    }
    if (*(int *)(pcVar4 + 4) != iVar2) {
      return 0;
    }
  }
  local_10[0] = '\x01';
  local_c = local_4;
  cVar1 = param_1[8];
  if (cVar1 == '\x02') {
    return CONCAT71((uint7)(uint3)(local_4 >> 8),1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  pcVar4 = param_1 + 8;
  if (((iVar2 <= (int)local_4) && (pcVar4 = local_10, (int)local_4 <= iVar2)) &&
     (pcVar3 = local_10, pcVar4 = param_1 + 8, cVar1 != '\x01')) {
    pcVar3 = local_10;
    pcVar4 = local_10;
  }
  if (*pcVar4 != cVar1) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)pcVar3 >> 8),*(int *)(pcVar4 + 4) == iVar2);
}



// FUNCTION 1400a24f6 FUN_1400a24f6 body=366 status=ok
// SIG undefined FUN_1400a24f6(void)

int * FUN_1400a24f6(int *param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  fVar5 = *param_3;
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  if ((fVar5 != 1.0) || (NAN(fVar5))) {
    iVar3 = _finite((double)fVar5);
    uVar1 = *(undefined8 *)(param_3 + 1);
    if (iVar3 == 0) {
      *(undefined8 *)param_1 = uVar1;
    }
    else {
      dVar8 = ((double)fVar4 + (double)(int)param_2) * (double)*param_3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar8;
      auVar9 = roundpd(auVar9,auVar9,1);
      dVar6 = auVar9._0_8_;
      dVar8 = dVar8 - dVar6;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      fVar5 = (float)dVar8;
      fVar4 = 0.99999994;
      if (0.99999994 <= fVar5) {
        fVar5 = fVar4;
      }
      fVar7 = 0.0;
      if (fVar5 <= 0.0) {
        fVar5 = fVar7;
      }
      fVar5 = fVar5 + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = fVar4;
      }
      if (fVar5 <= 0.0) {
        fVar5 = fVar7;
      }
      fVar5 = (float)((ulonglong)uVar1 >> 0x20) + fVar5;
      auVar9 = roundss(ZEXT416(0),ZEXT416((uint)fVar5),9);
      *param_1 = (int)uVar1 + (int)dVar6 + ((int)ROUND(fVar5 + fVar5 + -0.5) >> 1);
      fVar5 = (fVar5 - auVar9._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = fVar4;
      }
      if (fVar5 <= 0.0) {
        fVar5 = fVar7;
      }
      param_1[1] = (int)fVar5;
    }
  }
  else {
    fVar4 = fVar4 + param_3[2];
    auVar9 = roundss(ZEXT416(0),ZEXT416((uint)fVar4),9);
    fVar5 = (fVar4 - auVar9._0_4_) + 0.5 + -0.5;
    auVar9 = ZEXT416((uint)fVar5);
    if (0.99999994 <= fVar5) {
      auVar9 = ZEXT416(0x3f7fffff);
    }
    *param_1 = ((int)ROUND(fVar4 + fVar4 + -0.5) >> 1) + (int)param_2 + (int)param_3[1];
    if (auVar9._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar9._4_12_;
      auVar9 = auVar2 << 0x20;
    }
    param_1[1] = auVar9._0_4_;
  }
  return param_1;
}



// FUNCTION 1400a2664 FUN_1400a2664 body=78 status=ok
// SIG undefined FUN_1400a2664(void)

void FUN_1400a2664(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14753e462(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14753e402(param_1 + 0x10,0);
  return;
}



// FUNCTION 1400a26b2 FUN_1400a26b2 body=88 status=ok
// SIG undefined FUN_1400a26b2(void)

undefined8 * FUN_1400a26b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400a3390(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400a270a FUN_1400a270a body=88 status=ok
// SIG undefined FUN_1400a270a(void)

undefined8 * FUN_1400a270a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400a32aa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400a2762 FUN_1400a2762 body=106 status=ok
// SIG undefined FUN_1400a2762(void)

longlong FUN_1400a2762(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar1 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x1c0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 0x40;
        if (*(uint *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 0x40) == param_2)
        goto LAB_1400a27c0;
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_1400a27c0:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1400a27cc FUN_1400a27cc body=2538 status=ok
// SIG undefined FUN_1400a27cc(void)

void FUN_1400a27cc(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  undefined4 uVar23;
  ulonglong *puVar24;
  uint uVar25;
  uint uVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  int iVar29;
  longlong *plVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  longlong lVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_408 [32];
  longlong local_3e8;
  uint *local_3e0;
  longlong *local_3d8;
  ulonglong local_3d0;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 local_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  longlong local_378;
  undefined8 local_370;
  uint local_368 [2];
  undefined4 local_360;
  undefined8 local_35c;
  longlong local_350;
  undefined1 local_348;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3a0 = param_3 + 0x18;
  local_398 = param_3 + 0x68;
  local_3c8 = param_1 + 2;
  local_3b8 = 0;
  uStack_3b0 = 0;
  iVar14 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
  local_3a8 = param_3;
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 != 0) {
    FUN_1475682f8(&local_3b8);
  }
  uVar26 = *(uint *)(param_1 + 7);
  local_3d8 = param_1;
  local_3c0 = param_2;
  if (uVar26 == 0) {
    uVar36 = 1;
    uVar35 = 0;
    iVar14 = 0;
    uVar25 = 0;
  }
  else {
    puVar10 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 4);
    }
    uVar25 = *puVar10;
    if (uVar25 == 0) {
      iVar14 = uVar26 + 0x1e;
      if (-1 < (int)(uVar26 - 1)) {
        iVar14 = uVar26 - 1;
      }
      uVar35 = 0;
      uVar36 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar36 = uVar35;
      }
      iVar14 = 0;
      do {
        if (uVar36 == uVar35) goto LAB_1400a28d0;
        iVar14 = iVar14 + 0x20;
        uVar25 = puVar10[uVar35 + 1];
        uVar35 = uVar35 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar35 = 0;
      iVar14 = 0;
    }
    uVar36 = (ulonglong)(-uVar25 & uVar25);
    uVar1 = uVar36 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar25 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar26 <= (int)uVar25) {
      uVar25 = uVar26;
    }
  }
  if (uVar25 != uVar26) {
    uVar18 = 0xffffffff;
    local_3e0 = (uint *)(param_1 + 4);
    local_3d0 = (ulonglong)uVar26;
    do {
      uVar1 = uStack_3b0;
      lVar20 = *local_3c8;
      lVar19 = (longlong)(int)uStack_3b0;
      uVar26 = (int)uStack_3b0 + 1;
      uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar26);
      if (uStack_3b0._4_4_ < uVar26) {
        FUN_1475683be(&local_3b8,uVar1 & 0xffffffff);
      }
      FUN_147568368(lVar19 * 0x28 + local_3b8,(longlong)(int)uVar25 * 0x38 + lVar20 + 8);
      uVar18 = uVar18 & ~(uint)uVar36;
      puVar10 = (uint *)local_3d8[6];
      if ((uint *)local_3d8[6] == (uint *)0x0) {
        puVar10 = local_3e0;
      }
      uVar26 = *(uint *)(local_3d8 + 7);
      iVar29 = (int)uVar35;
      lVar20 = (longlong)iVar29;
      uVar25 = puVar10[lVar20] & uVar18;
      if (uVar25 == 0) {
        iVar8 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar8 = uVar26 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar29) {
          iVar9 = iVar29;
        }
        if (iVar29 < iVar8) {
          lVar19 = 0;
          do {
            uVar25 = puVar10[lVar20 + lVar19 + 1];
            if (uVar25 != 0) {
              uVar35 = (ulonglong)(iVar29 + (int)lVar19 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1400a2d60;
            }
            iVar14 = iVar14 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar9 - lVar20 != lVar19);
          uVar18 = 0xffffffff;
          iVar29 = iVar9;
        }
        uVar35 = (ulonglong)(iVar29 + 1);
        uVar25 = uVar26;
      }
      else {
LAB_1400a2d60:
        uVar36 = (ulonglong)(-uVar25 & uVar25);
        uVar1 = uVar36 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar25 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar25) {
          uVar25 = uVar26;
        }
      }
    } while (uVar25 != (uint)local_3d0);
  }
LAB_1400a28d0:
  lVar20 = local_3b8;
  iVar14 = (int)uStack_3b0;
  lVar19 = (longlong)(int)uStack_3b0;
  if (1 < lVar19) {
    memset(local_368,0,0x2f0);
    local_378 = lVar20;
    local_370 = lVar20 + lVar19 * 0x28 + -0x28;
    fVar38 = logf((float)iVar14);
    local_368[0] = (uint)(longlong)(fVar38 + fVar38);
    plVar30 = &local_378;
    do {
      puVar11 = (ulonglong *)*plVar30;
      puVar28 = (ulonglong *)plVar30[1];
      iVar14 = (int)plVar30[2];
      iVar29 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar11) >> 3);
      puVar32 = puVar28;
      puVar17 = puVar11;
      if (iVar14 != 0) {
LAB_1400a2e71:
        uVar26 = iVar29 * -0x33333333 + 1;
        if (8 < (int)uVar26) {
          uVar15 = (ulonglong)(uVar26 >> 1);
          uVar35 = puVar11[uVar15 * 5 + 4];
          uVar36 = puVar11[uVar15 * 5];
          uVar1 = (puVar11 + uVar15 * 5)[1];
          uVar3 = puVar11[uVar15 * 5 + 2];
          uVar4 = (puVar11 + uVar15 * 5 + 2)[1];
          puVar11[uVar15 * 5 + 4] = puVar11[4];
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          uVar7 = puVar11[3];
          puVar11[uVar15 * 5 + 2] = puVar11[2];
          (puVar11 + uVar15 * 5 + 2)[1] = uVar7;
          puVar11[uVar15 * 5] = uVar5;
          (puVar11 + uVar15 * 5)[1] = uVar6;
          puVar11[4] = uVar35;
          puVar11[2] = uVar3;
          puVar11[3] = uVar4;
          *puVar11 = uVar36;
          puVar11[1] = uVar1;
          puVar16 = puVar28 + 5;
          puVar13 = puVar11;
          do {
            puVar31 = puVar13 + 5;
            puVar22 = puVar13 + 5;
            do {
              puVar13 = puVar22;
              puVar27 = puVar31;
              if (puVar28 < puVar13) break;
              puVar21 = puVar11;
              if ((puVar11[4] & 2) == 0) {
                puVar21 = (ulonglong *)*puVar11;
              }
              puVar34 = puVar13;
              if ((puVar13[4] & 2) == 0) {
                puVar34 = (ulonglong *)*puVar13;
              }
              puVar31 = puVar27 + 5;
              puVar22 = puVar13 + 5;
            } while ((int)puVar34[1] <= (int)puVar21[1]);
            puVar31 = puVar16 + -10;
            do {
              puVar22 = puVar16;
              puVar21 = puVar31;
              puVar16 = puVar22 + -5;
              if (puVar16 <= puVar11) break;
              puVar34 = puVar16;
              if ((puVar22[-1] & 2) == 0) {
                puVar34 = (ulonglong *)*puVar16;
              }
              puVar24 = puVar11;
              if ((puVar11[4] & 2) == 0) {
                puVar24 = (ulonglong *)*puVar11;
              }
              puVar31 = puVar21 + -5;
            } while ((int)puVar24[1] <= (int)puVar34[1]);
            if (puVar16 < puVar13) goto LAB_1400a2fcd;
            uVar35 = puVar13[4];
            uVar36 = *puVar13;
            uVar1 = puVar13[1];
            uVar3 = puVar13[2];
            uVar4 = puVar13[3];
            puVar13[4] = puVar22[-1];
            uVar5 = *puVar16;
            uVar6 = puVar22[-4];
            uVar7 = puVar22[-2];
            puVar13[2] = puVar22[-3];
            puVar13[3] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
            puVar22[-1] = uVar35;
            puVar22[-3] = uVar3;
            puVar22[-2] = uVar4;
            *puVar16 = uVar36;
            puVar22[-4] = uVar1;
          } while( true );
        }
        if (puVar11 < puVar28) {
          do {
            puVar32 = puVar11;
            if (puVar11 + 5 <= puVar28) {
              puVar17 = puVar11 + 5;
              puVar16 = (ulonglong *)*puVar11;
              puVar13 = puVar11;
              do {
                puVar31 = puVar13;
                if ((puVar13[4] & 2) == 0) {
                  puVar31 = puVar16;
                }
                puVar22 = puVar17;
                if ((puVar17[4] & 2) == 0) {
                  puVar22 = (ulonglong *)*puVar17;
                }
                puVar27 = (ulonglong *)*puVar17;
                puVar32 = puVar17;
                if ((int)puVar22[1] <= (int)puVar31[1]) {
                  puVar27 = puVar16;
                  puVar32 = puVar13;
                }
                puVar17 = puVar17 + 5;
                puVar16 = puVar27;
                puVar13 = puVar32;
              } while (puVar17 <= puVar28);
            }
            local_58 = puVar32[4];
            local_78 = *puVar32;
            uStack_70 = puVar32[1];
            local_68 = puVar32[2];
            uStack_60 = puVar32[3];
            uVar3 = local_78;
            uVar4 = uStack_70;
            puVar32[4] = puVar28[4];
            uVar35 = *puVar28;
            uVar36 = puVar28[1];
            uVar1 = puVar28[3];
            puVar32[2] = puVar28[2];
            puVar32[3] = uVar1;
            *puVar32 = uVar35;
            puVar32[1] = uVar36;
            puVar28[4] = local_58;
            local_78._4_4_ = (undefined4)(local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
            puVar28[2] = local_68;
            puVar28[3] = uStack_60;
            *(undefined4 *)puVar28 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar28 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar28 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar28 + 0xc) = uStack_70._4_4_;
            puVar28 = puVar28 + -5;
            local_78 = uVar3;
            uStack_70 = uVar4;
          } while (puVar11 < puVar28);
        }
        goto LAB_1400a3194;
      }
LAB_1400a318f:
      FUN_147568452(puVar11);
LAB_1400a3194:
      plVar30 = plVar30 + -3;
    } while (&local_378 <= plVar30);
  }
  plVar30 = local_3d8;
  local_384 = DAT_14cab2cd0;
  uStack_380 = 0xffffffff;
  uStack_37c = 0xffffffff;
  local_390 = DAT_14cab2cd0;
  uStack_38c = 0xffffffff;
  uStack_388 = 0xffffffff;
  uVar23 = 0;
  uVar35 = 0;
  if (0 < (int)uStack_3b0) {
    lVar20 = 0;
    uVar35 = 0;
    do {
      plVar12 = (longlong *)(local_3b8 + lVar20);
      if ((*(byte *)(local_3b8 + 0x20 + lVar20) & 2) == 0) {
        plVar12 = (longlong *)*plVar12;
      }
      if (0 < (int)plVar12[1]) break;
      (**(code **)(*plVar12 + 8))(plVar12,&local_3a8,param_3);
      uVar35 = uVar35 + 1;
      lVar20 = lVar20 + 0x28;
    } while ((longlong)uVar35 < (longlong)(int)uStack_3b0);
  }
  lVar20 = *plVar30;
  if ((longlong)(int)plVar30[1] != 0) {
    plVar12 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xec8);
    lVar19 = (longlong)(int)plVar30[1] * 0xf0;
    do {
      local_390 = (undefined4)*(undefined8 *)(lVar20 + 0x14);
      uStack_38c = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x14) >> 0x20);
      uStack_388 = 0xffffffff;
      uStack_37c = *(undefined4 *)(lVar20 + 0x1c);
      local_384 = (undefined4)*(undefined8 *)(lVar20 + 0x14);
      uStack_380 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x14) >> 0x20);
      cVar2 = *(char *)(lVar20 + 0x20);
      local_378 = *(longlong *)(lVar20 + 0x14);
      local_360 = *(undefined4 *)(param_3 + 0x118);
      local_370 = CONCAT44(local_360,*(undefined4 *)(lVar20 + 0x1c));
      local_368[0] = local_368[0] & 0xffffff00;
      if (((((*(int *)(param_3 + 0x114) == 0) ||
            (uVar26 = *(uint *)(param_3 + 0x110), (int)uVar26 < 0)) ||
           (DAT_14c9647dc <= (int)uVar26)) ||
          ((plVar30 = (longlong *)
                      ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
           plVar30 == (longlong *)0x0 || ((int)plVar30[2] != *(int *)(param_3 + 0x114))))) ||
         (((*(uint *)(plVar30 + 1) & 0x10200000) != 0 || (*plVar30 == 0)))) {
        local_35c._0_4_ = 0;
        iVar14 = 0;
        uVar26 = (uint)local_35c;
      }
      else {
        uVar26 = *(uint *)(*plVar30 + 0xc);
        local_35c = (ulonglong)uVar26;
        if ((int)uVar26 < DAT_14c9647dc) {
          lVar33 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
        }
        else {
          lVar33 = 0;
        }
        iVar14 = *(int *)(lVar33 + 0x10);
        if (*(int *)(lVar33 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar29 = DAT_14c964868 + 1;
          bVar37 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar37) {
            local_3e0 = (uint *)CONCAT44(local_3e0._4_4_,iVar29);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar29);
            iVar29 = (int)local_3e0;
          }
          LOCK();
          iVar14 = *(int *)(lVar33 + 0x10);
          bVar37 = iVar14 == 0;
          if (bVar37) {
            *(int *)(lVar33 + 0x10) = iVar29;
            iVar14 = 0;
          }
          UNLOCK();
          uVar26 = (uint)local_35c;
          if (bVar37) {
            iVar14 = iVar29;
          }
        }
      }
      local_35c._0_4_ = uVar26;
      local_35c = CONCAT44(iVar14,(uint)local_35c);
      local_350 = *plVar12;
      *plVar12 = (longlong)&local_378;
      plVar30 = (longlong *)(lVar20 + 0xa8);
      if ((*(byte *)(lVar20 + 0xe8) & 2) == 0) {
        plVar30 = (longlong *)*plVar30;
      }
      local_3e8 = param_3;
      local_348 = cVar2 == '\x01';
      (**(code **)(*plVar30 + 8))(plVar30,lVar20 + 0x28,lVar20,&local_3a8);
      *plVar12 = local_350;
      lVar20 = lVar20 + 0xf0;
      lVar19 = lVar19 + -0xf0;
    } while (lVar19 != 0);
    uVar23 = (undefined4)local_3d8[1];
    lVar20 = *local_3d8;
    plVar30 = local_3d8;
  }
  iVar14 = *(int *)((longlong)plVar30 + 0xc);
  FUN_140922707(lVar20,uVar23);
  *(undefined4 *)(plVar30 + 1) = 0;
  if ((iVar14 < 0) && (*(int *)((longlong)plVar30 + 0xc) != 0)) {
    FUN_147568782(plVar30);
  }
  local_384 = DAT_14cab2cd0;
  uStack_380 = 0xffffffff;
  uStack_37c = 0xffffffff;
  local_390 = DAT_14cab2cd0;
  uStack_38c = 0xffffffff;
  uStack_388 = 0xffffffff;
  if ((int)uVar35 < (int)uStack_3b0) {
    lVar20 = (uVar35 & 0xffffffff) * 0x28;
    do {
      plVar12 = (longlong *)(local_3b8 + lVar20);
      if ((*(byte *)(local_3b8 + 0x20 + lVar20) & 2) == 0) {
        plVar12 = (longlong *)*plVar12;
      }
      (**(code **)(*plVar12 + 8))(plVar12,&local_3a8,param_3);
      lVar20 = lVar20 + 0x28;
      uVar26 = (int)uVar35 + 1;
      uVar35 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)uStack_3b0);
  }
  plVar12 = local_3c8;
  if ((int)plVar30[3] != *(int *)((longlong)plVar30 + 0x44)) {
    FUN_1475687b2(local_3c8);
    FUN_1475688f6(plVar12);
  }
  FUN_144910112(plVar30 + 0xc,local_3c0,&local_3a8,param_3);
  FUN_1432dca88(local_3b8,uStack_3b0 & 0xffffffff);
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1400a2fcd:
  local_58 = puVar11[4];
  local_78 = *puVar11;
  uStack_70 = puVar11[1];
  local_68 = puVar11[2];
  uStack_60 = puVar11[3];
  uVar3 = local_78;
  uVar4 = uStack_70;
  puVar11[4] = puVar22[-1];
  uVar35 = *puVar16;
  uVar36 = puVar22[-4];
  uVar1 = puVar22[-2];
  puVar11[2] = puVar22[-3];
  puVar11[3] = uVar1;
  *puVar11 = uVar35;
  puVar11[1] = uVar36;
  puVar22[-1] = local_58;
  local_78._4_4_ = (undefined4)(local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
  puVar22[-3] = local_68;
  puVar22[-2] = uStack_60;
  *(undefined4 *)puVar16 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar22 + -0x24) = local_78._4_4_;
  *(undefined4 *)(puVar22 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar22 + -0x1c) = uStack_70._4_4_;
  iVar14 = iVar14 + -1;
  puVar22 = puVar22 + -10;
  local_78 = uVar3;
  uStack_70 = uVar4;
  if ((longlong)puVar21 - (longlong)puVar17 < (longlong)puVar32 - (longlong)puVar27) {
    if (puVar13 < puVar28) {
      *plVar30 = (longlong)puVar13;
      plVar30[1] = (longlong)puVar28;
      *(int *)(plVar30 + 2) = iVar14;
      plVar30 = plVar30 + 3;
    }
    puVar27 = puVar11;
    if (puVar16 <= puVar11 + 5) goto LAB_1400a3194;
  }
  else {
    if (puVar11 + 5 < puVar16) {
      *plVar30 = (longlong)puVar11;
      plVar30[1] = (longlong)puVar22;
      *(int *)(plVar30 + 2) = iVar14;
      plVar30 = plVar30 + 3;
    }
    puVar11 = puVar13;
    puVar21 = puVar28;
    puVar22 = puVar28;
    if (puVar28 <= puVar13) goto LAB_1400a3194;
  }
  iVar29 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar27) >> 3);
  puVar28 = puVar22;
  puVar32 = puVar21;
  puVar17 = puVar27;
  if (iVar14 == 0) goto LAB_1400a318f;
  goto LAB_1400a2e71;
}



// FUNCTION 1400a31b8 FUN_1400a31b8 body=241 status=ok
// SIG undefined FUN_1400a31b8(void)

void FUN_1400a31b8(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_147568a12(param_1,0);
  }
  local_44 = param_2;
  if (DAT_14cab2cd4 != param_2) {
    do {
      piVar4 = (int *)FUN_1400a5d6e(param_3,&local_44);
      lVar5 = FUN_1400d12c6(param_3,&local_44);
      iVar3 = local_44;
      if ((piVar4 == (int *)0x0) || (lVar5 == 0)) break;
      uVar1 = *(undefined4 *)(lVar5 + 0x68);
      iVar2 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
        FUN_147568af6(param_1,iVar2);
      }
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1;
      }
      *(ulonglong *)(lVar5 + (longlong)iVar2 * 8) = CONCAT44(iVar3,uVar1);
      local_44 = *piVar4;
    } while (local_44 != DAT_14cab2cd4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400a32aa FUN_1400a32aa body=230 status=ok
// SIG undefined FUN_1400a32aa(void)

void FUN_1400a32aa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400a3390 FUN_1400a3390 body=319 status=ok
// SIG undefined FUN_1400a3390(void)

void FUN_1400a3390(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400a33fe;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1400a33fe:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400a34d0 FUN_1400a34d0 body=856 status=ok
// SIG undefined FUN_1400a34d0(void)

void FUN_1400a34d0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [44];
  int local_8c;
  ulonglong local_88;
  uint local_7c;
  uint *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x118) != 0) &&
     (*(uint *)(*(longlong *)(param_1 + 0x170) + 0x228) <= *(uint *)(param_1 + 0x380)))
  goto LAB_1400a35ba;
  lVar4 = FUN_1400a382a(*(longlong *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x128));
  if (lVar4 != 0) {
    local_78 = (uint *)(lVar4 + 0xa8);
    uVar2 = *(uint *)(lVar4 + 0xc0);
    if (uVar2 == 0) {
      uVar17 = 1;
      uVar16 = 0;
      uVar3 = 0;
      iVar13 = 0;
    }
    else {
      puVar5 = *(uint **)(lVar4 + 0xb8);
      if (*(uint **)(lVar4 + 0xb8) == (uint *)0x0) {
        puVar5 = local_78;
      }
      uVar3 = *puVar5;
      if (uVar3 == 0) {
        iVar13 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar13 = uVar2 - 1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_1400a352c;
          iVar13 = iVar13 + 0x20;
          uVar3 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar17 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar3 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
    }
    if (uVar3 != uVar2) {
      uVar12 = 0xffffffff;
      local_88 = (ulonglong)uVar2;
      do {
        lVar11 = *(longlong *)(lVar4 + 0x98);
        lVar14 = lVar11 + (longlong)(int)uVar3 * 0x100 + 8;
        local_8c = iVar13;
        local_7c = uVar12;
        local_70 = uVar16;
        uVar6 = FUN_1400a4c08(lVar14);
        FUN_140b56bb8(*(undefined8 *)(param_1 + 0x170),&local_4c,uVar6);
        lVar7 = FUN_1400a38a4(*(undefined8 *)(param_1 + 0x170),local_4c);
        if (lVar7 != 0) {
          local_68 = uVar6;
          local_60 = lVar7;
          local_58 = lVar14;
          FUN_1400a3914(param_1 + 0x10,lVar11 + (longlong)(int)uVar3 * 0x100,&local_68);
        }
        uVar12 = local_7c & ~(uint)uVar17;
        puVar5 = *(uint **)(lVar4 + 0xb8);
        if (*(uint **)(lVar4 + 0xb8) == (uint *)0x0) {
          puVar5 = local_78;
        }
        uVar2 = *(uint *)(lVar4 + 0xc0);
        iVar15 = (int)local_70;
        lVar11 = (longlong)iVar15;
        uVar3 = puVar5[lVar11] & uVar12;
        uVar16 = local_70;
        iVar13 = local_8c;
        if (uVar3 == 0) {
          iVar8 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar8 = uVar2 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar13 = local_8c + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar15 < iVar8) {
            lVar7 = 0;
            do {
              uVar3 = puVar5[lVar11 + lVar7 + 1];
              if (uVar3 != 0) {
                uVar12 = 0xffffffff;
                uVar16 = (ulonglong)(iVar15 + (int)lVar7 + 1);
                goto LAB_1400a377b;
              }
              iVar13 = iVar13 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar9 - lVar11 != lVar7);
            uVar12 = 0xffffffff;
            iVar15 = iVar9;
          }
          uVar16 = (ulonglong)(iVar15 + 1);
          uVar3 = uVar2;
        }
        else {
LAB_1400a377b:
          uVar17 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar17 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar3 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
        }
      } while (uVar3 != (uint)local_88);
    }
  }
LAB_1400a352c:
  lVar4 = FUN_1400a38a4(*(undefined8 *)(param_1 + 0x170));
  if (lVar4 == 0) goto LAB_1400a35ba;
  if (*(int *)(param_1 + 0x124) == 0) {
LAB_1400a35e2:
    local_68 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x120);
    local_68 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x124) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1400a35e2;
      local_68 = *puVar10;
    }
  }
  local_58 = 0;
  local_60 = lVar4;
  FUN_1400a3914(param_1 + 0x10,&DAT_14cab2cd4);
LAB_1400a35ba:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400a382a FUN_1400a382a body=121 status=ok
// SIG undefined FUN_1400a382a(void)

longlong FUN_1400a382a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar2 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x118);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xd8) + (longlong)iVar3 * 0x150;
        if (*(uint *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar3 * 0x150) == param_2) break;
        iVar3 = *(int *)(lVar2 + 0x148);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_1400a383a;
    }
  }
  lVar2 = 0;
LAB_1400a383a:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1400a38a4 FUN_1400a38a4 body=112 status=ok
// SIG undefined FUN_1400a38a4(void)

longlong FUN_1400a38a4(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    lVar1 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x168);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x128) + (longlong)iVar3 * 0x170;
        if (*(uint *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar3 * 0x170) == param_2)
        goto LAB_1400a3908;
        iVar3 = *(int *)(lVar1 + 0x168);
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_1400a3908:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1400a3914 FUN_1400a3914 body=259 status=ok
// SIG undefined FUN_1400a3914(void)

void FUN_1400a3914(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  lVar4 = *(longlong *)(param_1 + 0x100);
  lVar10 = lVar4;
  if (lVar4 == 0) {
    lVar10 = param_1;
  }
  if ((int)uVar1 < 1) {
    uVar9 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar9 = 0;
    uVar7 = (ulonglong)uVar1;
    do {
      uVar8 = (int)(uVar7 >> 1) + uVar9;
      uVar6 = (uint)uVar7;
      if (*(uint *)(lVar10 + (ulonglong)uVar8 * 0x20) < uVar5) {
        uVar9 = uVar8 + (uVar6 & 1);
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar6);
    if (((int)uVar9 < (int)uVar1) && (*(uint *)(lVar10 + (ulonglong)uVar9 * 0x20) <= uVar5)) {
      puVar3 = (uint *)(lVar10 + (ulonglong)uVar9 * 0x20);
      goto LAB_1400a3991;
    }
  }
  *(uint *)(param_1 + 0x108) = uVar1 + 1;
  if (*(uint *)(param_1 + 0x10c) == uVar1) {
    FUN_1456c60c8(param_1,uVar1);
    lVar4 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar4 == 0) {
    lVar4 = param_1;
  }
  lVar10 = (ulonglong)uVar9 * 0x20;
  memmove((void *)(lVar4 + lVar10 + 0x20),(void *)(lVar4 + lVar10),(ulonglong)(uVar1 - uVar9) << 5);
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar4 = param_1;
  }
  puVar3 = (uint *)(lVar4 + lVar10);
  uVar5 = *param_2;
LAB_1400a3991:
  *puVar3 = uVar5;
  uVar2 = param_3[1];
  *(undefined8 *)(puVar3 + 2) = *param_3;
  *(undefined8 *)(puVar3 + 4) = uVar2;
  *(undefined8 *)(puVar3 + 6) = param_3[2];
  return;
}



// FUNCTION 1400a3a18 FUN_1400a3a18 body=3047 status=ok
// SIG undefined FUN_1400a3a18(void)

void FUN_1400a3a18(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_108 [36];
  uint local_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = param_3;
  plVar8 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  lVar26 = *(longlong *)(*plVar8 + 0x450);
  local_c8 = param_2;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  uVar10 = 0;
  if (*(longlong *)(lVar9 + 8) == 0) {
    local_e0 = (uint *)CONCAT44(local_e0._4_4_,0xffff);
    local_e4 = 0;
  }
  else {
    local_e4 = *(uint *)(*(longlong *)(lVar9 + 8) + 0x30);
    local_e0 = (uint *)(CONCAT44(local_e0._4_4_,local_e4) & 0xffffffff0000ffff);
    local_e4 = local_e4 & 0xffff0000;
  }
  local_88 = local_c8;
  local_80 = local_c8 + 3;
  local_78 = local_c8 + 0xd;
  local_70 = DAT_14cab2cd0;
  local_6c = 0xffffffffffffffff;
  local_64 = DAT_14cab2cd0;
  local_60 = 0xffffffffffffffff;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  local_a8 = (uint *)0x0;
  uStack_a0 = 0;
  iVar7 = *(int *)(param_1 + 0x148);
  local_d0 = lVar26;
  if (*(int *)(param_1 + 0x168) < 1) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    if (0 < iVar7) {
      uVar19 = 0;
      uVar10 = 0;
      do {
        uVar6 = uStack_90;
        uVar23 = uStack_a0;
        lVar26 = *(longlong *)(param_1 + 0x140);
        lVar9 = *(longlong *)(param_1 + 0x160);
        lVar14 = uVar19 * 0x10;
        uVar17 = *(uint *)(lVar9 + lVar14);
        uVar21 = *(uint *)(lVar9 + 4 + lVar14);
        uVar18 = *(uint *)(lVar9 + 8 + lVar14);
        uVar20 = *(uint *)(lVar9 + 0xc + lVar14);
        lVar9 = uVar10 * 0x10;
        uVar24 = *(uint *)(lVar26 + lVar9);
        uVar2 = *(uint *)(lVar26 + 4 + lVar9);
        uVar3 = *(uint *)(lVar26 + 8 + lVar9);
        uVar25 = *(uint *)(lVar26 + 0xc + lVar9);
        if (((uVar21 == uVar2) && (uVar17 == uVar24)) && (uVar18 == uVar3)) {
          uVar19 = (ulonglong)((int)uVar19 + 1);
LAB_1400a3b78:
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        else {
          if (uVar24 < uVar17) {
LAB_1400a3c12:
            lVar26 = (longlong)(int)uStack_90;
            uVar17 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
            if (uStack_90._4_4_ < uVar17) {
              local_d8 = CONCAT44(local_d8._4_4_,uVar25);
              FUN_14179cb80(&local_98,uVar6 & 0xffffffff);
              uVar25 = (uint)local_d8;
            }
            local_98[lVar26 * 4] = uVar24;
            local_98[lVar26 * 4 + 1] = uVar2;
            local_98[lVar26 * 4 + 2] = uVar3;
            local_98[lVar26 * 4 + 3] = uVar25;
            goto LAB_1400a3b78;
          }
          if (uVar24 == uVar17) {
            if ((uVar2 < uVar21) || (uVar21 == uVar2 && uVar3 < uVar18)) goto LAB_1400a3c12;
          }
          lVar26 = (longlong)(int)uStack_a0;
          uVar24 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar24);
          if (uStack_a0._4_4_ < uVar24) {
            local_d8 = CONCAT44(local_d8._4_4_,(int)uVar19);
            FUN_14179cb80(&local_a8,uVar23 & 0xffffffff);
            uVar19 = local_d8 & 0xffffffff;
          }
          local_a8[lVar26 * 4] = uVar17;
          local_a8[lVar26 * 4 + 1] = uVar21;
          local_a8[lVar26 * 4 + 2] = uVar18;
          local_a8[lVar26 * 4 + 3] = uVar20;
          uVar19 = (ulonglong)((int)uVar19 + 1);
        }
        iVar7 = *(int *)(param_1 + 0x148);
      } while ((int)uVar19 < *(int *)(param_1 + 0x168) && (int)uVar10 < iVar7);
    }
  }
  if ((int)uVar10 < iVar7 && -1 < (int)uVar10) {
    lVar26 = uVar10 << 4;
    do {
      uVar23 = uStack_90;
      puVar11 = (uint *)(*(longlong *)(param_1 + 0x140) + lVar26);
      lVar9 = (longlong)(int)uStack_90;
      uVar17 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
      if (uStack_90._4_4_ < uVar17) {
        FUN_14179cb80(&local_98,uVar23 & 0xffffffff);
      }
      uVar17 = puVar11[1];
      uVar21 = puVar11[2];
      uVar18 = puVar11[3];
      puVar16 = local_98 + lVar9 * 4;
      *puVar16 = *puVar11;
      puVar16[1] = uVar17;
      puVar16[2] = uVar21;
      puVar16[3] = uVar18;
      uVar17 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar17;
      lVar26 = lVar26 + 0x10;
    } while ((int)uVar17 < *(int *)(param_1 + 0x148));
  }
  FUN_1432dc637(local_98,uStack_90 & 0xffffffff,0xe);
  if ((-1 < (int)uVar19) && ((int)uVar19 < *(int *)(param_1 + 0x168))) {
    lVar26 = uVar19 << 4;
    do {
      uVar10 = uStack_a0;
      puVar11 = (uint *)(*(longlong *)(param_1 + 0x160) + lVar26);
      lVar9 = (longlong)(int)uStack_a0;
      uVar17 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
      if (uStack_a0._4_4_ < uVar17) {
        FUN_14179cb80(&local_a8,uVar10 & 0xffffffff);
      }
      uVar17 = puVar11[1];
      uVar21 = puVar11[2];
      uVar18 = puVar11[3];
      puVar16 = local_a8 + lVar9 * 4;
      *puVar16 = *puVar11;
      puVar16[1] = uVar17;
      puVar16[2] = uVar21;
      puVar16[3] = uVar18;
      uVar17 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar17;
      lVar26 = lVar26 + 0x10;
    } while ((int)uVar17 < *(int *)(param_1 + 0x168));
  }
  FUN_1432dc637(local_a8);
  if ((longlong)(int)uStack_90 != 0) {
    puVar11 = local_98 + (longlong)(int)uStack_90 * 4;
    local_b0 = param_1 + 0x178;
    local_d8 = param_1 + 0x10;
    uVar17 = local_e4 | (uint)local_e0;
    local_c0 = (longlong *)(local_b8 + 8);
    puVar16 = local_98;
    lVar26 = local_d0;
    local_e4 = uVar17;
    local_e0 = puVar11;
    do {
      uVar21 = *puVar16;
      if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar9 = local_b0;
        }
        lVar14 = 0;
        uVar18 = uVar21;
        do {
          uVar21 = *(uint *)(lVar9 + lVar14);
          if (uVar18 != 0) {
            uVar20 = uVar21 >> 0xd ^ uVar18 - uVar21;
            uVar18 = uVar20 << 8 ^ (-0x61c88647 - uVar21) - uVar20;
            uVar24 = uVar18 >> 0xd ^ (uVar21 - uVar20) - uVar18;
            uVar20 = uVar24 >> 0xc ^ (uVar20 - uVar18) - uVar24;
            uVar21 = uVar20 << 0x10 ^ (uVar18 - uVar24) - uVar20;
            uVar18 = uVar21 >> 5 ^ (uVar24 - uVar20) - uVar21;
            uVar20 = uVar18 >> 3 ^ (uVar20 - uVar21) - uVar18;
            uVar21 = uVar20 << 10 ^ (uVar21 - uVar18) - uVar20;
            uVar21 = uVar21 >> 0xf ^ uVar18 - (uVar20 + uVar21);
          }
          lVar14 = lVar14 + 8;
          uVar18 = uVar21;
        } while ((longlong)*(int *)(param_1 + 0x1c0) * 8 != lVar14);
      }
      uVar18 = *(uint *)(param_1 + 0x118);
      uVar10 = *(ulonglong *)(param_1 + 0x110);
      if (*(ulonglong *)(param_1 + 0x110) == 0) {
        uVar10 = local_d8;
      }
      uVar19 = 0;
      if (0 < (int)uVar18) {
        uVar23 = (ulonglong)uVar18;
        do {
          uVar24 = (int)(uVar23 >> 1) + (int)uVar19;
          uVar20 = (uint)uVar23;
          if (*(uint *)(uVar10 + (ulonglong)uVar24 * 0x20) < uVar21) {
            uVar19 = (ulonglong)(uVar24 + (uVar20 & 1));
          }
          uVar23 = uVar23 >> 1;
        } while (1 < uVar20);
      }
      uVar20 = puVar16[1];
      uVar24 = puVar16[2];
      if ((((int)uVar19 < (int)uVar18) && (*(uint *)(uVar10 + uVar19 * 0x20) <= uVar21)) &&
         (lVar9 = uVar10 + uVar19 * 0x20, lVar9 != -8)) {
        plVar8 = *(longlong **)(lVar9 + 0x10);
        if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
          plVar12 = plVar8 + 7;
          if ((longlong *)plVar8[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar8[8];
          }
          iVar7 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & uVar20) * 4);
          if (iVar7 != -1) {
            do {
              lVar26 = *plVar8 + (longlong)iVar7 * 0x88;
              if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x88) == uVar20) {
                if (lVar26 != 0) {
                  lVar26 = lVar26 + 8;
                  iVar7 = (int)plVar8[0xb];
                  iVar4 = *(int *)((longlong)plVar8 + 0x84);
                  goto LAB_1400a3f10;
                }
                break;
              }
              iVar7 = *(int *)(lVar26 + 0x80);
            } while (iVar7 != -1);
          }
        }
        iVar7 = (int)plVar8[0xb];
        iVar4 = *(int *)((longlong)plVar8 + 0x84);
        if (iVar7 != iVar4) {
          plVar12 = plVar8 + 0x11;
          if ((longlong *)plVar8[0x12] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar8[0x12];
          }
          iVar22 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[0x13] - 1U & uVar20) * 4);
          if (iVar22 != -1) {
            do {
              lVar9 = plVar8[10] + (longlong)iVar22 * 0x88;
              if (*(uint *)(plVar8[10] + (longlong)iVar22 * 0x88) == uVar20) goto LAB_1400a4203;
              iVar22 = *(int *)(lVar9 + 0x80);
            } while (iVar22 != -1);
          }
        }
        lVar9 = 0;
LAB_1400a4203:
        lVar26 = lVar9 + 8;
        if (lVar9 == 0) {
          lVar26 = 0;
        }
LAB_1400a3f10:
        if (iVar7 == iVar4) {
LAB_1400a3f6c:
          bVar27 = false;
        }
        else {
          plVar12 = plVar8 + 0x11;
          if ((longlong *)plVar8[0x12] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar8[0x12];
          }
          iVar7 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[0x13] - 1U & uVar20) * 4);
          if (iVar7 == -1) goto LAB_1400a3f6c;
          do {
            bVar27 = *(uint *)(plVar8[10] + (longlong)iVar7 * 0x88) == uVar20;
            if (bVar27) break;
            iVar7 = *(int *)((longlong)iVar7 * 0x88 + plVar8[10] + 0x80);
          } while (iVar7 != -1);
        }
        local_70 = uVar21;
        local_6c = CONCAT44(0xffffffff,uVar20);
        if (uVar24 == 0xffffffff) {
          puVar11 = &local_70;
          if ((lVar26 != 0) && ((*(byte *)(lVar26 + 0x60) & 1) != 0)) {
            plVar8 = (longlong *)(lVar26 + 0x30);
            if ((*(byte *)(lVar26 + 0x60) & 2) == 0) {
              plVar8 = (longlong *)*plVar8;
            }
            bVar1 = *(byte *)(plVar8 + 1);
            goto joined_r0x0001400a4027;
          }
LAB_1400a403c:
          plVar8 = local_80;
          if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
            plVar12 = local_80 + 7;
            if ((longlong *)local_80[8] != (longlong *)0x0) {
              plVar12 = (longlong *)local_80[8];
            }
            uVar17 = *(uint *)((longlong)plVar12 +
                              ((longlong)(int)~(*puVar11 ^ puVar11[1] ^ puVar11[2]) &
                              (longlong)(int)local_80[9] - 1U) * 4);
            if (uVar17 != 0xffffffff) {
              lVar26 = *local_80;
LAB_1400a4092:
              lVar9 = (longlong)(int)uVar17 * 0x20;
              puVar13 = (uint *)(lVar26 + lVar9);
              if (((*(uint *)(lVar26 + 4 + lVar9) != puVar11[1]) || (*puVar13 != *puVar11)) ||
                 (puVar13[2] != puVar11[2])) goto LAB_1400a40af;
              uVar18 = *(uint *)((longlong)plVar12 + (longlong)(int)puVar13[7] * 4);
              if (uVar18 == uVar17) {
                puVar11 = (uint *)((longlong)plVar12 + (longlong)(int)puVar13[7] * 4);
              }
              else {
                do {
                  puVar11 = (uint *)(lVar26 + (longlong)(int)uVar18 * 0x20 + 0x18);
                  uVar18 = *puVar11;
                } while (uVar18 != uVar17);
              }
              *puVar11 = puVar13[6];
              puVar5 = *(undefined8 **)(*local_80 + 0x10 + lVar9);
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5,1);
              }
              FUN_1432db88c(plVar8);
            }
          }
        }
        else if (((lVar26 != 0) && (-1 < (int)uVar24)) &&
                (((int)uVar24 < *(int *)(lVar26 + 0x28) &&
                 (lVar9 = (ulonglong)uVar24 * 0x88,
                 (*(byte *)(*(longlong *)(lVar26 + 0x20) + 0x80 + lVar9) & 1) != 0)))) {
          local_64 = uVar21;
          local_60 = *(undefined8 *)(puVar16 + 1);
          plVar8 = (longlong *)(*(longlong *)(lVar26 + 0x20) + lVar9);
          if ((*(byte *)(*(longlong *)(lVar26 + 0x20) + 0x80 + lVar9) & 2) == 0) {
            plVar8 = (longlong *)*plVar8;
          }
          bVar1 = *(byte *)(plVar8 + 1);
          puVar11 = &local_64;
joined_r0x0001400a4027:
          if ((bVar1 & 2) != 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
          goto LAB_1400a403c;
        }
LAB_1400a40ff:
        uVar17 = local_e4;
        puVar11 = local_e0;
        lVar26 = local_d0;
        if (!bVar27 || local_b8 == 0) goto joined_r0x0001400a4167;
        lVar26 = (longlong)*(int *)(local_b8 + 0x10);
        uVar17 = *(int *)(local_b8 + 0x10) + 1;
        *(uint *)(local_b8 + 0x10) = uVar17;
        if (*(uint *)(local_b8 + 0x14) < uVar17) {
          FUN_14755f9ee(local_c0);
        }
        lVar9 = *local_c0;
        *(uint *)(lVar9 + lVar26 * 0xc) = uVar21;
        *(uint *)(lVar9 + 4 + lVar26 * 0xc) = uVar20;
        *(uint *)(lVar9 + 8 + lVar26 * 0xc) = uVar24;
        lVar26 = local_d0;
        puVar11 = local_e0;
        uVar17 = local_e4;
      }
      else {
joined_r0x0001400a4167:
        if (lVar26 != 0) {
          local_58 = uVar21;
          local_54 = uVar20;
          local_50 = uVar24;
          local_4c = uVar17;
          FUN_140da2682(lVar26);
        }
      }
      puVar16 = puVar16 + 4;
    } while (puVar16 != puVar11);
  }
  if ((longlong)(int)uStack_a0 == 0) {
LAB_1400a4501:
    if (local_a8 != (uint *)0x0) {
      FUN_1400020a8(local_a8);
    }
    if (local_98 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar16 = local_a8 + (longlong)(int)uStack_a0 * 4;
  puVar11 = local_a8;
LAB_1400a4240:
  uVar17 = *puVar11;
  if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
    lVar26 = *(longlong *)(param_1 + 0x1b8);
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar26 = param_1 + 0x178;
    }
    lVar9 = 0;
    do {
      uVar21 = *(uint *)(lVar26 + lVar9);
      if (uVar17 != 0) {
        uVar17 = uVar21 >> 0xd ^ uVar17 - uVar21;
        uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar21) - uVar17;
        uVar21 = uVar18 >> 0xd ^ (uVar21 - uVar17) - uVar18;
        uVar17 = uVar21 >> 0xc ^ (uVar17 - uVar18) - uVar21;
        uVar18 = uVar17 << 0x10 ^ (uVar18 - uVar21) - uVar17;
        uVar21 = uVar18 >> 5 ^ (uVar21 - uVar17) - uVar18;
        uVar20 = uVar21 >> 3 ^ (uVar17 - uVar18) - uVar21;
        uVar17 = uVar20 << 10 ^ (uVar18 - uVar21) - uVar20;
        uVar21 = uVar17 >> 0xf ^ uVar21 - (uVar20 + uVar17);
      }
      uVar17 = uVar21;
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1c0) * 8 != lVar9);
  }
  uVar21 = *(uint *)(param_1 + 0x118);
  lVar26 = *(longlong *)(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x110) == 0) {
    lVar26 = param_1 + 0x10;
  }
  uVar20 = 0;
  uVar18 = uVar21;
  if (0 < (int)uVar21) {
    do {
      uVar24 = (uVar18 >> 1) + uVar20;
      if (*(uint *)(lVar26 + (ulonglong)uVar24 * 0x20) < uVar17) {
        uVar20 = uVar24 + (uVar18 & 1);
      }
      bVar27 = 1 < uVar18;
      uVar18 = uVar18 >> 1;
    } while (bVar27);
  }
  if ((int)uVar20 < (int)uVar21) {
    puVar15 = (uint *)((ulonglong)uVar20 * 0x20 + lVar26);
    puVar13 = (uint *)0x0;
    if (*puVar15 <= uVar17) {
      puVar13 = puVar15 + 2;
    }
  }
  else {
    puVar13 = (uint *)0x0;
  }
  uVar21 = puVar11[1];
  plVar8 = *(longlong **)(puVar13 + 2);
  if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
    plVar12 = plVar8 + 7;
    if ((longlong *)plVar8[8] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar8[8];
    }
    iVar7 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & uVar21) * 4);
    if (iVar7 != -1) {
      do {
        lVar26 = *plVar8 + (longlong)iVar7 * 0x88;
        if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x88) == uVar21) {
          if (lVar26 != 0) goto LAB_1400a43f8;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x80);
      } while (iVar7 != -1);
    }
  }
  if ((int)plVar8[0xb] != *(int *)((longlong)plVar8 + 0x84)) {
    plVar12 = plVar8 + 0x11;
    if ((longlong *)plVar8[0x12] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar8[0x12];
    }
    iVar7 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[0x13] - 1U & uVar21) * 4);
    if (iVar7 != -1) {
      do {
        lVar26 = plVar8[10] + (longlong)iVar7 * 0x88;
        if (*(uint *)(plVar8[10] + (longlong)iVar7 * 0x88) == uVar21) {
          if (lVar26 != 0) goto LAB_1400a43f8;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x80);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1400a44ef;
LAB_1400a40af:
  uVar17 = puVar13[6];
  if (uVar17 == 0xffffffff) goto LAB_1400a40ff;
  goto LAB_1400a4092;
LAB_1400a43f8:
  if (lVar26 != -8) {
    local_6c = CONCAT44(0xffffffff,uVar21);
    local_70 = uVar17;
    if (puVar11[2] == 0xffffffff) {
      bVar1 = *(byte *)(lVar26 + 0x68);
      if ((bVar1 & 1) == 0) goto LAB_1400a44ef;
      plVar8 = (longlong *)(lVar26 + 0x38);
    }
    else {
      lVar9 = (longlong)(int)puVar11[2] * 0x88;
      plVar8 = (longlong *)(*(longlong *)(lVar26 + 0x28) + lVar9);
      bVar1 = *(byte *)(*(longlong *)(lVar26 + 0x28) + 0x80 + lVar9);
      local_64 = uVar17;
      local_60 = *(undefined8 *)(puVar11 + 1);
    }
    if ((bVar1 & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    if ((*(byte *)(plVar8 + 1) & 1) != 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_88);
    }
  }
LAB_1400a44ef:
  puVar11 = puVar11 + 4;
  if (puVar11 == puVar16) goto LAB_1400a4501;
  goto LAB_1400a4240;
}



// FUNCTION 1400a4600 FUN_1400a4600 body=1329 status=ok
// SIG undefined FUN_1400a4600(void)

void FUN_1400a4600(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  uint *local_b0;
  ulonglong local_a8;
  uint local_9c;
  ulonglong local_98;
  uint *local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar18 = *(uint *)(param_1 + 0xd0);
  if (uVar18 == 0) {
    uVar17 = 1;
    uVar10 = 0;
    uVar2 = 0;
    iVar12 = 0;
  }
  else {
    puVar15 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar15 = (uint *)(param_1 + 0xb8);
    }
    uVar2 = *puVar15;
    if (uVar2 == 0) {
      iVar12 = uVar18 + 0x1e;
      if (-1 < (int)(uVar18 - 1)) {
        iVar12 = uVar18 - 1;
      }
      uVar10 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar10) goto LAB_1400a4a32;
        iVar12 = iVar12 + 0x20;
        uVar2 = puVar15[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar2 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar18 <= (int)uVar2) {
      uVar2 = uVar18;
    }
  }
  if (uVar2 != uVar18) {
    uVar11 = 0xffffffff;
    local_98 = (ulonglong)uVar18;
    local_90 = (uint *)(param_1 + 0xb8);
    local_88 = param_1;
    do {
      lVar13 = *(longlong *)(local_88 + 0xa8) + (longlong)(int)uVar2 * 400;
      lVar19 = lVar13 + 8;
      lVar14 = *(longlong *)(local_88 + 0xa8) + (longlong)(int)uVar2 * 400;
      puVar15 = (uint *)(lVar14 + 0x40);
      iVar9 = *(int *)(lVar14 + 0x58);
      local_b4 = iVar12;
      local_a8 = uVar17;
      local_9c = uVar11;
      local_80 = uVar10;
      if (iVar9 == 0) {
        uVar10 = 1;
        uVar17 = 0;
        iVar5 = 0;
        iVar12 = 0;
      }
      else {
        puVar4 = *(uint **)(lVar13 + 0x50);
        if (*(uint **)(lVar13 + 0x50) == (uint *)0x0) {
          puVar4 = puVar15;
        }
        uVar18 = *puVar4;
        if (uVar18 == 0) {
          iVar12 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar12 = iVar9 + -1;
          }
          uVar17 = 0;
          uVar10 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar10 = uVar17;
          }
          iVar12 = 0;
          do {
            if (uVar10 == uVar17) goto LAB_1400a48dc;
            iVar12 = iVar12 + 0x20;
            uVar18 = puVar4[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar17 = 0;
          iVar12 = 0;
        }
        uVar10 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar5) {
          iVar5 = iVar9;
        }
      }
      if (iVar5 != iVar9) {
        uVar18 = 0xffffffff;
        iVar3 = iVar9;
        local_b0 = puVar15;
        do {
          if (*(char *)(*(longlong *)(lVar13 + 0x30) + 0x10 + (longlong)iVar5 * 0x38) == '\x01') {
            lVar8 = *(longlong *)(lVar13 + 0x30) + (longlong)iVar5 * 0x38;
            lVar14 = lVar8 + 0x18;
            if (*(longlong *)(lVar8 + 0x20) != 0) {
              lVar14 = *(longlong *)(lVar8 + 0x20);
            }
            puVar15 = local_b0;
            local_b8 = iVar12;
            if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
              lVar16 = 0;
              do {
                iVar5 = *(int *)(lVar14 + 4 + lVar16);
                if ((((iVar5 == 0) || (uVar2 = *(uint *)(lVar14 + lVar16), (int)uVar2 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar2)) ||
                   (((plVar20 = (longlong *)
                                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     plVar20 == (longlong *)0x0 || ((int)plVar20[2] != iVar5)) ||
                    (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (*plVar20 == 0)))))) {
                  FUN_1400a4b32(lVar19);
                  iVar3 = *(int *)(lVar13 + 0x58);
                  puVar15 = local_b0;
                  iVar12 = local_b8;
                  break;
                }
                lVar16 = lVar16 + 8;
              } while ((longlong)*(int *)(lVar8 + 0x28) * 8 != lVar16);
            }
          }
          uVar18 = uVar18 & ~(uint)uVar10;
          puVar4 = *(uint **)(lVar13 + 0x50);
          if (*(uint **)(lVar13 + 0x50) == (uint *)0x0) {
            puVar4 = puVar15;
          }
          iVar5 = (int)uVar17;
          lVar14 = (longlong)iVar5;
          uVar2 = puVar4[lVar14] & uVar18;
          if (uVar2 == 0) {
            iVar6 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar6 = iVar3 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar5) {
              iVar7 = iVar5;
            }
            if (iVar5 < iVar6) {
              lVar8 = 0;
              do {
                uVar2 = puVar4[lVar14 + lVar8 + 1];
                if (uVar2 != 0) {
                  uVar17 = (ulonglong)(iVar5 + (int)lVar8 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_1400a48b3;
                }
                iVar12 = iVar12 + 0x20;
                lVar8 = lVar8 + 1;
              } while (iVar7 - lVar14 != lVar8);
              uVar18 = 0xffffffff;
              iVar5 = iVar7;
            }
            uVar17 = (ulonglong)(iVar5 + 1);
            puVar15 = local_b0;
            iVar5 = iVar3;
          }
          else {
LAB_1400a48b3:
            uVar10 = (ulonglong)(-uVar2 & uVar2);
            uVar1 = uVar10 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar5) {
              iVar5 = iVar3;
            }
          }
        } while (iVar5 != iVar9);
      }
LAB_1400a48dc:
      uVar11 = local_9c;
      uVar18 = (uint)local_a8;
      if ((((*(int *)(lVar13 + 0x24) != 0) && (uVar2 = *(uint *)(lVar13 + 0x20), -1 < (int)uVar2))
          && (((int)uVar2 < DAT_14c9647dc &&
              (((plVar20 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar20 != (longlong *)0x0 && ((int)plVar20[2] == *(int *)(lVar13 + 0x24))) &&
               ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)))))) &&
         (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)) {
        local_78 = 0;
        uStack_70 = 0;
        (**(code **)(*plVar20 + 0x2e0))(plVar20,lVar19,&local_78);
        if ((longlong)(int)uStack_70 != 0) {
          lVar8 = (longlong)(int)uStack_70 << 4;
          lVar14 = local_78;
          do {
            FUN_1400a4b32(lVar19,lVar14);
            lVar14 = lVar14 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
          uVar18 = (uint)local_a8;
        }
        if (local_78 != 0) {
          FUN_1400020a8(local_78);
        }
      }
      *(int *)(lVar13 + 0x170) = *(int *)(lVar13 + 0x170) + 1;
      uVar11 = uVar11 & ~uVar18;
      puVar15 = *(uint **)(local_88 + 200);
      if (*(uint **)(local_88 + 200) == (uint *)0x0) {
        puVar15 = local_90;
      }
      uVar18 = *(uint *)(local_88 + 0xd0);
      iVar9 = (int)local_80;
      lVar13 = (longlong)iVar9;
      uVar2 = puVar15[lVar13] & uVar11;
      uVar10 = local_80;
      iVar12 = local_b4;
      if (uVar2 == 0) {
        iVar5 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar5 = uVar18 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar12 = local_b4 + 0x20;
        iVar3 = iVar5;
        if (iVar5 < iVar9) {
          iVar3 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar14 = 0;
          do {
            uVar2 = puVar15[lVar13 + lVar14 + 1];
            if (uVar2 != 0) {
              uVar11 = 0xffffffff;
              uVar10 = (ulonglong)(iVar9 + (int)lVar14 + 1);
              goto LAB_1400a49f1;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar3 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          lVar13 = (longlong)iVar3;
        }
        uVar10 = lVar13 + 1U & 0xffffffff;
        uVar17 = local_a8;
        uVar2 = uVar18;
      }
      else {
LAB_1400a49f1:
        uVar17 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar2 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 <= (int)uVar2) {
          uVar2 = uVar18;
        }
      }
    } while (uVar2 != (uint)local_98);
  }
LAB_1400a4a32:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400a4b32 FUN_1400a4b32 body=214 status=ok
// SIG undefined FUN_1400a4b32(void)

void FUN_1400a4b32(longlong param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_1447bdbdc((longlong *)(param_1 + 0x28),param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3]
                        ,param_2);
  if (iVar1 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if ((lVar4 + (longlong)iVar1 * 0x38 != 0) &&
       (puVar2 = (undefined1 *)((longlong)iVar1 * 0x38 + lVar4 + 0x10), puVar2 != (undefined1 *)0x0)
       ) {
      *puVar2 = 0;
      iVar1 = FUN_1400a4ce0((longlong *)(param_1 + 0x78),
                            param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3],param_2);
      if (iVar1 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x78);
        lVar3 = lVar4 + (longlong)iVar1 * 0x68;
        if ((lVar3 != 0) && (lVar4 = lVar4 + (longlong)iVar1 * 0x68 + 0x10, lVar4 != 0)) {
          if (*(longlong *)(lVar3 + 0x50) != 0) {
            lVar4 = *(longlong *)(lVar3 + 0x50);
          }
          if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
            lVar3 = (longlong)*(int *)(lVar3 + 0x58) << 4;
            do {
              FUN_1400a4b32(param_1,lVar4);
              lVar4 = lVar4 + 0x10;
              lVar3 = lVar3 + -0x10;
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
  FUN_140874968(param_1,param_2);
  return;
}



// FUNCTION 1400a4c08 FUN_1400a4c08 body=216 status=ok
// SIG undefined FUN_1400a4c08(void)

longlong FUN_1400a4c08(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
    return *plVar4;
  }
  lVar2 = FUN_140007850(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_140ce4600();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_1400a4c9d;
  }
  lVar2 = FUN_140081d40(param_1,0);
  if (lVar2 != 0) {
    lVar3 = FUN_140ce4600();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_1400a4c9d;
  }
  lVar2 = 0;
LAB_1400a4c9d:
  FUN_14485c47a((uint *)(param_1 + 0xd8),lVar2);
  return lVar2;
}



// FUNCTION 1400a4ce0 FUN_1400a4ce0 body=112 status=ok
// SIG undefined FUN_1400a4ce0(void)

int FUN_1400a4ce0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x68;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x60);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1400a4d50 FUN_1400a4d50 body=385 status=ok
// SIG undefined FUN_1400a4d50(void)

void FUN_1400a4d50(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)(param_1 + 0x48);
  do {
    puVar11[-9] = 0;
    *(undefined4 *)(puVar11 + -8) = 0;
    FUN_14009d848(puVar11 + -9,param_2);
    puVar11[-3] = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    uVar6 = *(undefined4 *)(param_2 + 0x18);
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    uVar9 = *(undefined4 *)(param_2 + 0x28);
    uVar10 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(puVar11 + -5) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)puVar11 + -0x24) = uVar8;
    *(undefined4 *)(puVar11 + -4) = uVar9;
    *(undefined4 *)((longlong)puVar11 + -0x1c) = uVar10;
    *(undefined4 *)(puVar11 + -7) = uVar4;
    *(undefined4 *)((longlong)puVar11 + -0x34) = uVar5;
    *(undefined4 *)(puVar11 + -6) = uVar6;
    *(undefined4 *)((longlong)puVar11 + -0x2c) = uVar7;
    puVar11[-2] = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(puVar11 + -1) = *(undefined4 *)(param_2 + 0x40);
    *puVar11 = 0;
    iVar1 = *(int *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(int *)(puVar11 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    }
    else {
      FUN_14753cf4a(puVar11,iVar1,0);
      FUN_14753cfbd(*puVar11,uVar2);
    }
    puVar11[2] = 0;
    iVar1 = *(int *)(param_2 + 0x60);
    pvVar3 = *(void **)(param_2 + 0x58);
    *(int *)(puVar11 + 3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    }
    else {
      FUN_1456c5740(puVar11 + 2,iVar1,0);
      memcpy((void *)puVar11[2],pvVar3,(longlong)iVar1 << 3);
    }
    *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(param_2 + 0x68);
    puVar11[5] = 0;
    iVar1 = *(int *)(param_2 + 0x78);
    pvVar3 = *(void **)(param_2 + 0x70);
    *(int *)(puVar11 + 6) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0x34) = 0;
    }
    else {
      FUN_1447bda9e(puVar11 + 5,iVar1,0);
      memcpy((void *)puVar11[5],pvVar3,(longlong)iVar1 << 2);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)((longlong)puVar11 + 0x3d) = *(undefined8 *)(param_2 + 0x85);
    puVar11[7] = uVar2;
    puVar11[9] = *(undefined8 *)(param_2 + 0x90);
    param_2 = param_2 + 0x98;
    puVar11 = puVar11 + 0x13;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1400a4ed2 FUN_1400a4ed2 body=3385 status=ok
// SIG undefined FUN_1400a4ed2(void)

longlong * FUN_1400a4ed2(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  code *pcVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  int *piVar28;
  ulonglong *puVar29;
  code *pcVar30;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  ulonglong local_e8;
  undefined2 local_e0;
  undefined2 local_de;
  undefined1 local_dc [4];
  code *local_d8;
  undefined2 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar18 = (longlong *)(param_1 + 0x588);
  uVar15 = *param_2;
  if (uVar15 == 0) {
LAB_1400a4f29:
    local_d8 = (code *)0x0;
    pcVar24 = (code *)0x0;
  }
  else {
    if (DAT_14cab2770 == 0) {
      local_100 = &local_d8;
      local_d8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1475472e1;
      local_110 = &LAB_14633c0b5;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10000000;
      local_130 = 8;
      local_138 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_1400a4f29;
    }
    if (*(int *)(uVar15 + 0x38) < *(int *)(DAT_14cab2770 + 0x38)) goto LAB_1400a4f29;
    pcVar3 = (code *)*param_2;
    pcVar30 = (code *)0x0;
    if (*(longlong *)(*(longlong *)(uVar15 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8)
        == DAT_14cab2770 + 0x30) {
      pcVar30 = pcVar3;
    }
    pcVar24 = pcVar30;
    if (pcVar30 != (code *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(pcVar30);
      pcVar24 = pcVar3;
    }
    local_d8 = pcVar24;
    if ((~DAT_14c950c29 & 1) == 0 && pcVar30 != (code *)0x0) {
      FUN_1456cec3c(pcVar24);
    }
    if (((DAT_14c950c29 & 1) != 0) && (pcVar24 != (code *)0x0)) {
      FUN_1456cec3c(pcVar24);
    }
  }
  uVar4 = ((uint)((ulonglong)pcVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar24 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_1432d82e2(plVar18,uVar4 >> 0x10 ^ uVar4,&local_d8);
  if ((iVar5 == -1) ||
     (lVar12 = *plVar18 + (longlong)iVar5 * 0x18, puVar10 = (undefined8 *)(lVar12 + 8),
     puVar10 == (undefined8 *)0x0 || lVar12 == 0)) {
    uVar15 = *param_2;
    if (uVar15 == 0) {
LAB_1400a4fc9:
      pcVar24 = (code *)0x0;
    }
    else {
      if (DAT_14cab2770 == 0) {
        local_d8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_14081d0ea;
        local_108 = &LAB_1475472e1;
        local_110 = &LAB_14633c0b5;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = 0x40;
        local_100 = &local_d8;
        FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0)
        ;
        if (DAT_14cab2770 == 0) goto LAB_1400a4fc9;
      }
      if ((*(int *)(uVar15 + 0x38) < *(int *)(DAT_14cab2770 + 0x38)) ||
         (*(longlong *)(*(longlong *)(uVar15 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8)
          != DAT_14cab2770 + 0x30)) goto LAB_1400a4fc9;
      pcVar24 = (code *)*param_2;
    }
    lVar12 = *(longlong *)(pcVar24 + 0x18);
    if (lVar12 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_88 = (longlong *)0x0;
    local_58 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_d8 = pcVar24;
    local_d0 = (undefined2 *)param_1;
    local_c8 = lVar12;
    plVar11 = (longlong *)FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    goto LAB_1400a51ac;
  }
  plVar11 = (longlong *)*puVar10;
  uVar15 = *param_2;
  if (uVar15 == 0) {
LAB_1400a506b:
    uVar15 = 0;
  }
  else {
    if (DAT_14cab2770 == 0) {
      local_d8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1475472e1;
      local_110 = &LAB_14633c0b5;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10000000;
      local_130 = 8;
      local_138 = 0x40;
      local_100 = &local_d8;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_1400a506b;
    }
    if (*(int *)(uVar15 + 0x38) < *(int *)(DAT_14cab2770 + 0x38)) goto LAB_1400a506b;
    uVar14 = *param_2;
    uVar19 = 0;
    if (*(longlong *)(*(longlong *)(uVar15 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8)
        == DAT_14cab2770 + 0x30) {
      uVar19 = uVar14;
    }
    uVar15 = uVar19;
    if (uVar19 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar19);
      uVar15 = uVar14;
    }
    if ((uVar19 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(uVar15);
    }
  }
  if (*(int *)(param_1 + 0x590) != *(int *)(param_1 + 0x5bc)) {
    if ((DAT_14c950c29 == 1) && (uVar15 != 0)) {
      FUN_1456cec3c(uVar15);
    }
    uVar4 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar12 = *(longlong *)(param_1 + 0x5c8);
    if (*(longlong *)(param_1 + 0x5c8) == 0) {
      lVar12 = param_1 + 0x5c0;
    }
    uVar14 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)*(int *)(param_1 + 0x5d0) - 1U;
    iVar5 = *(int *)(lVar12 + uVar14 * 4);
    if (iVar5 != -1) {
      puVar29 = (ulonglong *)(lVar12 + uVar14 * 4);
      bVar16 = DAT_14c950c29;
LAB_1400a50f5:
      puVar23 = (ulonglong *)((longlong)iVar5 * 0x18 + *plVar18);
      if (((bVar16 & 1) != 0) && (uVar15 != 0)) {
        FUN_1456cec3c(uVar15);
        bVar16 = DAT_14c950c29;
      }
      uVar14 = *puVar23;
      if (((bVar16 & 1) != 0) && (uVar14 != 0)) {
        FUN_1456cec3c(uVar14);
        bVar16 = DAT_14c950c29;
      }
      if (((bVar16 & 1) != 0) && (uVar15 != 0)) {
        FUN_1456cec3c(uVar15);
        bVar16 = DAT_14c950c29;
      }
      if (uVar14 != uVar15) goto code_r0x0001400a5127;
      iVar5 = (int)*puVar29;
      lVar12 = param_1 + 0x5c0;
      if (*(longlong *)(param_1 + 0x5c8) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x5c8);
      }
      lVar22 = *(longlong *)(param_1 + 0x588) + (longlong)iVar5 * 0x18;
      lVar27 = (longlong)*(int *)(lVar22 + 0x14);
      iVar25 = *(int *)(lVar12 + lVar27 * 4);
      if (iVar25 == iVar5) {
        piVar28 = (int *)(lVar12 + lVar27 * 4);
      }
      else {
        do {
          piVar28 = (int *)(*(longlong *)(param_1 + 0x588) + (longlong)iVar25 * 0x18 + 0x10);
          iVar25 = *piVar28;
        } while (iVar25 != iVar5);
      }
      *piVar28 = *(int *)(lVar22 + 0x10);
      FUN_1432d83b2(plVar18);
    }
  }
LAB_1400a51ac:
  if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar11);
  }
  if (*(int *)(param_1 + 0x38c) == 0) {
    iVar5 = *(int *)(param_1 + 0x360);
    *(int *)(param_1 + 0x360) = iVar5 + 1;
    if (*(int *)(param_1 + 0x364) == iVar5) {
      FUN_140549c28(param_1 + 0x358,iVar5);
    }
    iVar25 = *(int *)(param_1 + 0x380);
    if (iVar25 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar6 = iVar25 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar22 = param_1 + 0x368;
    iVar17 = iVar25 + 1;
    iVar7 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar7 = iVar25;
    }
    if (iVar7 >> 5 == iVar6) {
      *(int *)(param_1 + 0x380) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 900) <= iVar25) {
        iVar6 = iVar25;
        if (iVar25 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar4 = iVar25 + 0x20U >> 5;
          if (*(int *)(param_1 + 900) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar4) {
              uVar20 = uVar4;
            }
          }
          else {
            uVar20 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar20 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar15 + 0xf);
              if (uVar20 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
              }
              else {
                uVar14 = uVar15 + 0xf & 0xfffffffffffffff0;
                if (uVar14 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar19 = 0x32;
                  if (0x32 < bVar16) {
                    uVar19 = (ulonglong)bVar16;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_1400a58f7;
                    lVar12 = uVar19 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar14 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar6 = *(int *)(param_1 + 0x380);
            }
          }
LAB_1400a58f7:
          iVar9 = (int)(uVar15 >> 2);
          iVar17 = -0x20;
          if ((int)uVar4 <= iVar9) {
            iVar17 = iVar9 << 5;
          }
        }
        *(int *)(param_1 + 900) = iVar17;
        FUN_1446efbd8(lVar22,iVar6);
        iVar17 = *(int *)(param_1 + 0x380) + 1;
      }
      iVar6 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar6 = iVar17;
      }
      *(int *)(param_1 + 0x380) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x378);
        if (*(longlong *)(param_1 + 0x378) == 0) {
          lVar12 = lVar22;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar6 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar5;
    if (*(longlong *)(param_1 + 0x378) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x378);
    }
    bVar16 = (byte)iVar25 & 0x1f;
    puVar1 = (uint *)(lVar22 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x388);
    lVar12 = (longlong)iVar5;
    iVar25 = *(int *)(*(longlong *)(param_1 + 0x358) + 4 + lVar12 * 0x28);
    *(int *)(param_1 + 0x388) = iVar25;
    iVar6 = *(int *)(param_1 + 0x38c) + -1;
    *(int *)(param_1 + 0x38c) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar25 * 0x28) = 0xffffffff;
    }
  }
  lVar22 = param_1 + 0x368;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    lVar22 = *(longlong *)(param_1 + 0x378);
  }
  iVar25 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar25 = iVar5;
  }
  puVar1 = (uint *)(lVar22 + (longlong)(iVar25 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  lVar22 = *(longlong *)(param_1 + 0x358);
  puVar10 = (undefined8 *)(lVar22 + 0x10 + lVar12 * 0x28);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar22 + lVar12 * 0x28);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(longlong **)(lVar22 + 0x20 + lVar12 * 0x28) = plVar11;
  if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar11);
  }
  local_de = (short)iVar5;
  FUN_1409098b2(param_1 + 0x3e0,iVar5);
  *(short *)((longlong)plVar11 + 0x34) = (short)iVar5;
  local_e0 = *(undefined2 *)((longlong)plVar11 + 0x36);
  local_d8 = (code *)&local_e0;
  local_d0 = &local_de;
  FUN_140728a6a(param_1 + 0x390,local_dc,&local_d8,0);
  *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  plVar11[5] = param_1;
  (**(code **)(*plVar11 + 0x2a0))(plVar11);
  lVar12 = plVar11[5];
  uVar2 = *(ushort *)((longlong)plVar11 + 0x36);
  uVar15 = (ulonglong)uVar2;
  iVar5 = *(int *)(lVar12 + 0x558);
  if ((int)(uint)uVar2 < iVar5) {
    lVar22 = *(longlong *)(lVar12 + 0x550);
  }
  else {
    iVar25 = uVar2 + 1;
    *(int *)(lVar12 + 0x558) = iVar25;
    if ((uint)(*(int *)(lVar12 + 0x55c) - iVar5) < (uint)(iVar25 - iVar5)) {
      FUN_14055ddfe();
      iVar25 = *(int *)(lVar12 + 0x558);
    }
    lVar22 = *(longlong *)(lVar12 + 0x550);
    iVar5 = *(int *)(lVar12 + 0x578);
    if (iVar5 < iVar25) {
      lVar27 = lVar12 + 0x560;
      do {
        *(undefined4 *)(lVar22 + (longlong)iVar5 * 8) = 0xffffffff;
        iVar25 = *(int *)(lVar12 + 0x580);
        *(int *)(lVar22 + 4 + (longlong)iVar5 * 8) = iVar25;
        if (*(int *)(lVar12 + 0x584) != 0) {
          *(int *)(lVar22 + (longlong)iVar25 * 8) = iVar5;
        }
        *(int *)(lVar12 + 0x580) = iVar5;
        iVar5 = *(int *)(lVar12 + 0x578);
        if (iVar5 == 0) {
          iVar25 = -1;
        }
        else {
          iVar25 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar25 = iVar5 + -1;
          }
          iVar25 = iVar25 >> 5;
        }
        iVar6 = iVar5 + 1;
        iVar17 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar17 = iVar5;
        }
        if (iVar17 >> 5 == iVar25) {
          *(int *)(lVar12 + 0x578) = iVar6;
        }
        else {
          if (*(int *)(lVar12 + 0x57c) <= iVar5) {
            iVar25 = iVar5;
            if (iVar5 + 0x20U < 0xa0) {
              iVar6 = 0x80;
            }
            else {
              uVar4 = iVar5 + 0x20U >> 5;
              local_e8 = (ulonglong)uVar4;
              if (*(int *)(lVar12 + 0x57c) + 0x1fU < 0xa0) {
                uVar20 = 4;
                if (4 < uVar4) {
                  uVar20 = uVar4;
                }
              }
              else {
                uVar20 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
              }
              uVar14 = (ulonglong)(uVar20 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar4 = (uint)(uVar14 + 0xf);
                  if (uVar20 < 0x1ffd) {
                    uVar14 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
                  }
                  else {
                    uVar19 = uVar14 + 0xf & 0xfffffffffffffff0;
                    if (uVar19 < 0x7ff1) {
                      bVar16 = (&DAT_14c841e00)[uVar4 >> 4];
                      uVar21 = 0x32;
                      if (0x32 < bVar16) {
                        uVar21 = (ulonglong)bVar16;
                      }
                      uVar26 = 0x32 - (ulonglong)bVar16;
                      do {
                        uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_1400a5528;
                        lVar13 = uVar21 + 1 + uVar26;
                        uVar26 = uVar26 - 1;
                      } while (lVar13 != 0x33);
                    }
                    uVar14 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar14 = 0x10;
                    }
                    uVar14 = -uVar14 & (uVar19 + uVar14) - 1;
                  }
                }
                else {
                  uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
                  iVar25 = *(int *)(lVar12 + 0x578);
                }
              }
LAB_1400a5528:
              iVar7 = (int)(uVar14 >> 2);
              iVar6 = iVar7 << 5;
              if (iVar7 < (int)local_e8) {
                iVar6 = -0x20;
              }
            }
            *(int *)(lVar12 + 0x57c) = iVar6;
            FUN_1446efbd8(lVar27,iVar25);
            iVar6 = *(int *)(lVar12 + 0x578) + 1;
          }
          iVar25 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar25 = iVar6;
          }
          *(int *)(lVar12 + 0x578) = iVar6;
          if (iVar6 % 0x20 != 0) {
            lVar13 = *(longlong *)(lVar12 + 0x570);
            if (*(longlong *)(lVar12 + 0x570) == 0) {
              lVar13 = lVar27;
            }
            bVar16 = -(char)(iVar6 % 0x20);
            *(uint *)(lVar13 + (longlong)(iVar25 >> 5) * 4) =
                 (uint)(*(int *)(lVar13 + (longlong)(iVar25 >> 5) * 4) << (bVar16 & 0x1f)) >>
                 (bVar16 & 0x1f);
          }
        }
        lVar13 = *(longlong *)(lVar12 + 0x570);
        if (*(longlong *)(lVar12 + 0x570) == 0) {
          lVar13 = lVar27;
        }
        bVar16 = (byte)iVar5 & 0x1f;
        puVar1 = (uint *)(lVar13 + (longlong)(iVar17 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
        *(int *)(lVar12 + 0x584) = *(int *)(lVar12 + 0x584) + 1;
        iVar5 = *(int *)(lVar12 + 0x578);
      } while (iVar5 < *(int *)(lVar12 + 0x558));
    }
  }
  *(int *)(lVar12 + 0x584) = *(int *)(lVar12 + 0x584) + -1;
  iVar5 = *(int *)(lVar22 + uVar15 * 8);
  iVar25 = *(int *)(lVar22 + 4 + uVar15 * 8);
  if ((longlong)iVar5 == -1) {
    *(int *)(lVar12 + 0x580) = iVar25;
  }
  else {
    *(int *)(lVar22 + 4 + (longlong)iVar5 * 8) = iVar25;
  }
  if (iVar25 != -1) {
    *(int *)(lVar22 + (longlong)iVar25 * 8) = iVar5;
  }
  lVar22 = lVar12 + 0x560;
  if (*(longlong *)(lVar12 + 0x570) != 0) {
    lVar22 = *(longlong *)(lVar12 + 0x570);
  }
  puVar1 = (uint *)(lVar22 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  *(longlong **)(*(longlong *)(lVar12 + 0x550) + uVar15 * 8) = plVar11;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
code_r0x0001400a5127:
  iVar5 = (int)puVar23[2];
  puVar29 = puVar23 + 2;
  if (iVar5 == -1) goto LAB_1400a51ac;
  goto LAB_1400a50f5;
}



// FUNCTION 1400a5c0c FUN_1400a5c0c body=353 status=ok
// SIG undefined FUN_1400a5c0c(void)

void FUN_1400a5c0c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400a5c91;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1400a5c91:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 1400a5d6e FUN_1400a5d6e body=116 status=ok
// SIG undefined FUN_1400a5d6e(void)

uint * FUN_1400a5d6e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *param_2;
  if (uVar1 != DAT_14cab2cd4) {
    if (param_1[0x3c] != param_1[0x47]) {
      puVar3 = param_1 + 0x48;
      if (*(uint **)(param_1 + 0x4a) != (uint *)0x0) {
        puVar3 = *(uint **)(param_1 + 0x4a);
      }
      uVar2 = puVar3[param_1[0x4c] - 1 & uVar1];
      if (uVar2 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x3a) + (longlong)(int)uVar2 * 0x28);
          if (*puVar3 == uVar1) goto LAB_1400a5dca;
          uVar2 = puVar3[8];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar3 = (uint *)0x0;
LAB_1400a5dca:
    param_1 = puVar3 + 2;
    if (puVar3 == (uint *)0x0) {
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}



// FUNCTION 1400a5de2 FUN_1400a5de2 body=538 status=ok
// SIG undefined FUN_1400a5de2(void)

void FUN_1400a5de2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  
  lVar5 = FUN_1405e0c42(*param_2 + 0x38);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x28);
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar16 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar16 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar10 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar10 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar10 == uVar15) goto LAB_1400a5e28;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar10 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0x18);
      lVar12 = (longlong)iVar11 * 0x3c;
      if (*(char *)(lVar13 + 0x30 + lVar12) == '\x02') {
        if (lVar5 != 0) {
          FUN_140e06640(lVar5,lVar13 + lVar12,lVar12 + lVar13 + 0x10);
        }
        FUN_1400a6508((longlong *)(param_1 + 0x18),iVar11);
        iVar4 = *(int *)(param_1 + 0x40);
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar9 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x28);
      }
      iVar11 = (int)uVar15;
      lVar13 = (longlong)iVar11;
      uVar6 = puVar9[lVar13] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) break;
        lVar12 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar6 = puVar9[lVar13 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar13 == lVar12) goto LAB_1400a5e28;
        }
        uVar15 = (ulonglong)(iVar11 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar10 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_1400a5e28:
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
                    /* WARNING: Could not recover jumptable at 0x0001400a5fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400a5ffc FUN_1400a5ffc body=1291 status=ok
// SIG undefined FUN_1400a5ffc(void)

void FUN_1400a5ffc(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  int local_b8;
  uint local_b4;
  ulonglong local_b0;
  uint *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar18 = (uint *)(param_1 + 5);
  local_68 = 0;
  uStack_60 = 0;
  iVar4 = (int)param_1[8];
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar19 = 0;
    iVar17 = 0;
    iVar16 = 0;
  }
  else {
    puVar11 = (uint *)param_1[7];
    if ((uint *)param_1[7] == (uint *)0x0) {
      puVar11 = puVar18;
    }
    uVar6 = *puVar11;
    if (uVar6 == 0) {
      iVar17 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar17 = iVar4 + -1;
      }
      uVar19 = 0;
      uVar13 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar13 = uVar19;
      }
      iVar17 = 0;
      do {
        if (uVar13 == uVar19) goto LAB_1400a6055;
        iVar17 = iVar17 + 0x20;
        uVar6 = puVar11[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar19 = 0;
      iVar17 = 0;
    }
    uVar15 = (ulonglong)(-uVar6 & uVar6);
    uVar13 = uVar15 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar16 = (iVar17 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar16) {
      iVar16 = iVar4;
    }
  }
  if (iVar16 < iVar4) {
    local_c0 = param_1 + 3;
    uVar6 = 0xffffffff;
    do {
      lVar20 = (longlong)iVar16 * 0x3c;
      local_88 = *(undefined4 *)(*local_c0 + lVar20 + 0x14);
      lVar7 = *local_c0 + 0x18 + lVar20;
      local_49 = *(undefined1 *)(lVar7 + 0x18);
      local_d8 = &local_88;
      local_b8 = iVar17;
      local_b4 = uVar6;
      cVar5 = (*(code *)*param_3)(param_3[1],lVar7,&local_49);
      if (cVar5 != '\0') {
        iVar4 = *(int *)(*local_c0 + 0x2c + lVar20);
        if (((((iVar4 != 0) && (uVar6 = *(uint *)(*local_c0 + 0x28 + lVar20), -1 < (int)uVar6)) &&
             ((int)uVar6 < DAT_14c9647dc)) &&
            ((plVar12 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar4)))) &&
           (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (local_c8 = *plVar12, local_c8 != 0)))) {
          lVar7 = FUN_1405e0c42(*param_2 + 0x38);
          local_b0 = uVar19;
          local_a8 = puVar18;
          local_a0 = param_3;
          if ((((lVar7 == 0) ||
               (plVar12 = (longlong *)FUN_1400a65d2(lVar7,*local_c0 + lVar20 + 0x10),
               plVar12 == (longlong *)0x0)) ||
              (lVar7 = (**(code **)(*plVar12 + 0x2a8))(plVar12), lVar7 == 0)) ||
             (lVar7 = FUN_140bf242e(lVar7,*local_c0 + lVar20,
                                    *(undefined4 *)(*local_c0 + 0x14 + lVar20)), lVar7 == 0)) {
LAB_1400a6433:
            plVar12 = (longlong *)0x0;
            lVar7 = local_c8;
          }
          else {
            local_78 = *param_2;
            local_70 = param_2[1];
            if (local_70 != 0) {
              LOCK();
              *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
              UNLOCK();
            }
            plVar12 = (longlong *)FUN_140f96da0(lVar7,&local_78);
            lVar7 = local_c8;
            if (plVar12 == (longlong *)0x0) goto LAB_1400a6433;
            lVar14 = *local_c0 + lVar20;
            local_d8 = (undefined4 *)(lVar14 + 0x10);
            (**(code **)(*plVar12 + 0x2e8))
                      (plVar12,local_c8,*local_c0 + lVar20,*(undefined4 *)(lVar14 + 0x14));
          }
          local_d8 = (undefined4 *)(param_1[3] + lVar20 + 0x10);
          (**(code **)(*param_1 + 0x38))(param_1,lVar7,param_1[3] + lVar20,0);
          uVar19 = uStack_60;
          lVar14 = param_1[3];
          puVar3 = (undefined4 *)(lVar14 + lVar20);
          local_88 = *puVar3;
          uStack_84 = puVar3[1];
          uStack_80 = puVar3[2];
          uStack_7c = puVar3[3];
          lVar21 = (longlong)(int)uStack_60;
          uVar6 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
          if (uStack_60._4_4_ < uVar6) {
            FUN_1400aa350(&local_68,uVar19 & 0xffffffff);
            lVar7 = local_c8;
          }
          *(longlong *)(local_68 + lVar21 * 0x28) = lVar7;
          puVar3 = (undefined4 *)(local_68 + 8 + lVar21 * 0x28);
          *puVar3 = local_88;
          puVar3[1] = uStack_84;
          puVar3[2] = uStack_80;
          puVar3[3] = uStack_7c;
          *(longlong *)(local_68 + 0x18 + lVar21 * 0x28) = lVar14 + lVar20 + 0x10;
          *(longlong **)(local_68 + 0x20 + lVar21 * 0x28) = plVar12;
          puVar18 = local_a8;
          uVar19 = local_b0;
          param_3 = local_a0;
        }
        FUN_1400a6508(local_c0,iVar16);
      }
      lVar7 = local_68;
      uVar6 = local_b4 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar11 = puVar18;
      }
      iVar4 = (int)param_1[8];
      iVar16 = (int)uVar19;
      lVar20 = (longlong)iVar16;
      uVar8 = puVar11[lVar20] & uVar6;
      iVar17 = local_b8;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar16) {
          iVar10 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar14 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar8 = puVar11[lVar20 + lVar14 + 1];
          if (uVar8 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar10 - lVar20 == lVar14) goto LAB_1400a6478;
        }
        uVar19 = (ulonglong)(iVar16 + (int)lVar14 + 1);
        uVar6 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar13 = uVar15 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar16 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar4);
LAB_1400a6478:
    lVar20 = (longlong)(int)uStack_60;
    if (lVar20 != 0) {
      lVar14 = local_68 + 8;
      lVar21 = 0;
      do {
        local_98 = *param_2;
        local_90 = param_2[1];
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
          UNLOCK();
        }
        local_d8 = *(undefined4 **)(lVar7 + 0x18 + lVar21);
        local_d0 = &local_98;
        (**(code **)(*param_1 + 0x20))
                  (param_1,*(undefined8 *)(lVar7 + lVar21),*(undefined8 *)(lVar7 + 0x20 + lVar21),
                   lVar14 + lVar21);
        lVar21 = lVar21 + 0x28;
      } while (lVar20 * 0x28 != lVar21);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
LAB_1400a6055:
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400a6508 FUN_1400a6508 body=86 status=ok
// SIG undefined FUN_1400a6508(void)

void FUN_1400a6508(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x38 + (longlong)param_2 * 0x3c);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x3c + 0x34);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x3c + 0x34);
  FUN_1400a655e();
  return;
}



// FUNCTION 1400a655e FUN_1400a655e body=116 status=ok
// SIG undefined FUN_1400a655e(void)

void FUN_1400a655e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x3c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3c + 4) = uVar5;
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



// FUNCTION 1400a65d2 FUN_1400a65d2 body=198 status=ok
// SIG undefined FUN_1400a65d2(void)

undefined8 FUN_1400a65d2(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_2) * 4);
    if (iVar4 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 400,
            *(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 400) != *param_2) {
        iVar4 = *(int *)(lVar2 + 0x188);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar2 == 0) {
        return 0;
      }
      if (lVar2 == -8) {
        return 0;
      }
      if (*(int *)(lVar2 + 0x24) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(lVar2 + 0x20);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (puVar3 != (undefined8 *)0x0) {
        if (*(int *)(puVar3 + 2) != *(int *)(lVar2 + 0x24)) {
          return 0;
        }
        if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
          return *puVar3;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1400a6698 FUN_1400a6698 body=273 status=ok
// SIG undefined FUN_1400a6698(void)

void FUN_1400a6698(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar1 < 3) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 2;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x0001400a676d:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < 3) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 * 2,0);
    uVar2 = (uint)(uVar3 >> 1);
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar2;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar2 < 3) goto joined_r0x0001400a676d;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar2,2);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar2,2);
  return;
}



// FUNCTION 1400a67aa FUN_1400a67aa body=14699 status=ok
// SIG undefined FUN_1400a67aa(void)

void FUN_1400a67aa(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  void *_Dst;
  ushort uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  byte bVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  undefined8 **ppuVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong *puVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  longlong lVar27;
  void *pvVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  undefined8 *puVar32;
  undefined **ppuVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  int iVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  undefined **ppuVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  uint *puVar45;
  longlong lVar46;
  ulonglong *puVar47;
  bool bVar48;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined8 **local_268;
  uint *local_260;
  longlong *local_258;
  uint *local_250;
  longlong local_248;
  uint *local_240;
  uint *local_238;
  ulonglong local_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  uint local_1f0;
  uint local_1ec;
  undefined1 local_1e8 [32];
  undefined1 *local_1c8;
  ulonglong local_1c0;
  undefined8 *local_1b8 [8];
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168 [4];
  longlong *local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  int iStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  ulonglong uStack_100;
  ulonglong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined8 auStack_d0 [4];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 4;
  local_1c8 = (undefined1 *)0x0;
  local_1c0 = 0x400000000;
  local_200 = param_2 + 0x2a0;
  local_218 = param_1;
  FUN_14009d97a();
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar13 = FUN_14118da1c();
      bVar16 = FUN_14054d46e(uVar13,L"nothreading");
      DAT_14c83f0f8 = bVar16 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 1) goto LAB_1400a684f;
    bVar48 = false;
  }
  else {
LAB_1400a684f:
    bVar48 = true;
    if (*(int *)(param_2 + 0x90) - *(int *)(param_2 + 0xbc) < DAT_14c760fe0) {
      bVar48 = DAT_14c760fe4 <= *(int *)(param_2 + 200) - *(int *)(param_2 + 0xf4);
    }
  }
  *(bool *)(param_2 + 0x298) = bVar48;
  local_138 = 0;
  uStack_130 = (longlong *)0x0;
  local_128 = local_200;
  puStack_120 = local_1e8;
  local_118._0_3_ = CONCAT12(bVar48,(undefined2)local_118);
  local_178 = 0;
  local_170 = 0x400000000;
  local_148 = (longlong *)0x0;
  local_140 = 0x400000000;
  uVar26 = 0;
  if (0 < *(int *)(param_2 + 0x2d0)) {
    local_258 = (longlong *)CONCAT44(local_258._4_4_,*(undefined4 *)(param_2 + 0x29c));
    iVar35 = 0;
    do {
      lVar12 = *(longlong *)(param_2 + 0x2c8);
      if (*(longlong *)(param_2 + 0x2c8) == 0) {
        lVar12 = param_2 + 0x2b8;
      }
      uVar8 = *(ushort *)(lVar12 + (longlong)iVar35 * 2);
      lVar12 = (ulonglong)uVar8 * 0x28;
      plVar14 = *(longlong **)(*(longlong *)(param_2 + 0x358) + 0x20 + lVar12);
      FUN_14009d1f4(&local_138,uVar8);
      ppuVar11 = *(undefined8 ***)(*(longlong *)(param_2 + 0x358) + lVar12);
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x358) + 8 + lVar12);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      ppuVar20 = ppuVar11;
      if (ppuVar11 == (undefined8 **)0x0) {
        ppuVar20 = local_1b8;
      }
      if (*(char *)((longlong)plVar14 + 0x3c) == '\x01') {
        lVar12 = plVar14[5];
        uVar17 = *(ushort *)((longlong)plVar14 + 0x36);
        uVar29 = (uint)uVar17;
        if ((int)(uint)uVar17 < *(int *)(lVar12 + 0x748)) {
          lVar27 = lVar12 + 0x730;
          if (*(longlong *)(lVar12 + 0x740) != 0) {
            lVar27 = *(longlong *)(lVar12 + 0x740);
          }
          if ((*(uint *)(lVar27 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar29 & 0x1f) & 1) != 0)
          goto LAB_1400a69c3;
        }
        if ((int)uVar29 < *(int *)(lVar12 + 0x728)) {
          lVar27 = lVar12 + 0x710;
          if (*(longlong *)(lVar12 + 0x720) != 0) {
            lVar27 = *(longlong *)(lVar12 + 0x720);
          }
          if ((*(uint *)(lVar27 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar29 & 0x1f) & 1) == 0)
          goto LAB_1400a6993;
        }
        else {
LAB_1400a6993:
          if (((*(uint *)(lVar12 + 0x70c) & *(uint *)(plVar14 + 7)) != 0) ||
             ((*(uint *)(lVar12 + 0x708) & *(uint *)(plVar14 + 7)) == 0)) goto LAB_1400a69c3;
        }
        *(longlong *)(lVar12 + 0x270) = *(longlong *)(lVar12 + 0x270) + 1;
        (**(code **)(*plVar14 + 0x2b0))(plVar14,ppuVar20,&local_138);
      }
LAB_1400a69c3:
      if ((((int)local_258 != 0) && (*(char *)(param_2 + 0x704) == '\0')) &&
         ((*(ulonglong *)(param_2 + 0x6d0) == 0 ||
          (*(ulonglong *)(param_2 + 0x6d0) < *(ulonglong *)(param_2 + 0x278))))) {
        FUN_1447b9e90(param_2);
        *(undefined8 *)(param_2 + 0x6d0) = *(undefined8 *)(param_2 + 0x270);
      }
      if (*(int *)(param_2 + 0x420) != *(int *)(param_2 + 0x424)) {
        FUN_14009d97a(local_200);
        lVar12 = *(longlong *)(param_2 + 0x2c8);
        if (*(longlong *)(param_2 + 0x2c8) == 0) {
          lVar12 = param_2 + 0x2b8;
        }
        iVar35 = -1;
        if (0 < (longlong)*(int *)(param_2 + 0x2d0)) {
          lVar27 = 0;
          do {
            if (*(ushort *)(lVar12 + lVar27 * 2) == uVar8) {
              iVar35 = (int)lVar27;
              break;
            }
            lVar27 = lVar27 + 1;
          } while (*(int *)(param_2 + 0x2d0) != lVar27);
        }
      }
      if (ppuVar11 != (undefined8 **)0x0) {
        FUN_1456c53a2(ppuVar11,0);
        local_268 = ppuVar11 + 10;
        iVar18 = *(int *)((longlong)ppuVar11 + 0x7c);
        ppuVar20 = (undefined8 **)ppuVar11[0xe];
        if ((undefined8 **)ppuVar11[0xe] == (undefined8 **)0x0) {
          ppuVar20 = local_268;
        }
        FUN_144717c65(ppuVar20,*(undefined4 *)(ppuVar11 + 0xf));
        *(undefined4 *)(ppuVar11 + 0xf) = 0;
        if ((iVar18 < 0) && (*(int *)((longlong)ppuVar11 + 0x7c) != 0)) {
          FUN_14473dbc4(local_268,0);
        }
      }
      if ((local_138 != 0) && (*(int *)(local_138 + 0x48) != 0)) {
        local_d8 = (undefined **)0x0;
        auStack_d0[0] = 0;
        FUN_14009e4cc(*(undefined2 *)((longlong)plVar14 + 0x36),&local_d8);
        if ((longlong)(int)auStack_d0[0] != 0) {
          ppuVar42 = (undefined **)((longlong)local_d8 + (longlong)(int)auStack_d0[0] * 2);
          ppuVar33 = local_d8;
          do {
            if (*(int *)(param_2 + 0x398) != *(int *)(param_2 + 0x3c4)) {
              lVar12 = *(longlong *)(param_2 + 0x3d0);
              if (*(longlong *)(param_2 + 0x3d0) == 0) {
                lVar12 = param_2 + 0x3c8;
              }
              iVar18 = *(int *)(lVar12 + (ulonglong)
                                         (*(int *)(param_2 + 0x3d8) - 1U & (uint)*(ushort *)ppuVar33
                                         ) * 4);
              if (iVar18 != -1) {
                do {
                  puVar3 = (ushort *)(*(longlong *)(param_2 + 0x390) + (longlong)iVar18 * 0xc);
                  if (*puVar3 == *(ushort *)ppuVar33) {
                    if (puVar3 + 1 != (ushort *)0x0 && puVar3 != (ushort *)0x0) {
                      uVar26 = (ulonglong)puVar3[1];
                      if ((*(byte *)(*(longlong *)
                                      (*(longlong *)(param_2 + 0x358) + 0x20 + uVar26 * 0x28) + 0x32
                                    ) & 4) != 0) {
                        ppuVar11 = (undefined8 **)(*(longlong *)(param_2 + 0x358) + uVar26 * 0x28);
                        if (*ppuVar11 == (undefined8 *)0x0) {
                          local_268 = ppuVar11;
                          puVar31 = (uint *)FUN_14001cc68(0x90,0x10);
                          *(undefined1 **)(puVar31 + 2) = &DAT_100000001;
                          *(undefined ***)puVar31 = &PTR_FUN_14a475ba0;
                          puVar31[0x14] = 0;
                          puVar31[0x15] = 0;
                          puVar31[0x16] = 0;
                          puVar31[0x17] = 4;
                          puVar31[0x20] = 0;
                          puVar31[0x21] = 0;
                          puVar31[0x22] = 0;
                          puVar31[0x23] = 4;
                          if (puVar31 == (uint *)0x0) {
                            *local_268 = (undefined8 *)0x10;
                            puVar45 = (uint *)local_268[1];
                            ppuVar11 = local_268;
                            if (puVar45 != (uint *)0x0) {
                              local_268[1] = (undefined8 *)0x0;
LAB_1400a6cfd:
                              LOCK();
                              puVar22 = puVar45 + 2;
                              *puVar22 = *puVar22 - 1;
                              UNLOCK();
                              if (*puVar22 == 0) {
                                local_250 = puVar45;
                                (*(code *)**(undefined8 **)puVar45)(puVar45);
                                LOCK();
                                puVar45 = local_250 + 3;
                                *puVar45 = *puVar45 - 1;
                                UNLOCK();
                                if (*puVar45 == 0) {
                                  (**(code **)(*(longlong *)local_250 + 0x10))();
                                }
                              }
                              ppuVar11 = local_268;
                              if (puVar31 != (uint *)0x0) goto LAB_1400a6d32;
                            }
                          }
                          else {
                            LOCK();
                            puVar31[2] = puVar31[2] + 1;
                            UNLOCK();
                            *local_268 = (undefined8 *)(puVar31 + 4);
                            puVar45 = (uint *)local_268[1];
                            if (puVar31 == puVar45) {
                              LOCK();
                              puVar45 = puVar31 + 2;
                              *puVar45 = *puVar45 - 1;
                              UNLOCK();
                              if (*puVar45 == 0) {
                                (*(code *)**(undefined8 **)puVar31)(puVar31);
                                LOCK();
                                puVar45 = puVar31 + 3;
                                *puVar45 = *puVar45 - 1;
                                UNLOCK();
                                if (*puVar45 == 0) {
                                  (**(code **)(*(longlong *)puVar31 + 0x10))(puVar31);
                                }
                              }
                            }
                            else {
                              local_268[1] = (undefined8 *)puVar31;
                              if (puVar45 != (uint *)0x0) goto LAB_1400a6cfd;
                            }
LAB_1400a6d32:
                            LOCK();
                            puVar45 = puVar31 + 2;
                            *puVar45 = *puVar45 - 1;
                            UNLOCK();
                            ppuVar11 = local_268;
                            if (*puVar45 == 0) {
                              (*(code *)**(undefined8 **)puVar31)(puVar31);
                              LOCK();
                              puVar45 = puVar31 + 3;
                              *puVar45 = *puVar45 - 1;
                              UNLOCK();
                              ppuVar11 = local_268;
                              if (*puVar45 == 0) {
                                (**(code **)(*(longlong *)puVar31 + 0x10))(puVar31);
                                ppuVar11 = local_268;
                              }
                            }
                          }
                        }
                        puVar44 = *ppuVar11;
                        FUN_1456c53e8(puVar44,local_138);
                        FUN_1447b9e4a(puVar44 + 10,0);
                      }
                    }
                    break;
                  }
                  iVar18 = *(int *)(puVar3 + 2);
                } while (iVar18 != -1);
              }
            }
            ppuVar33 = (undefined **)((longlong)ppuVar33 + 2);
          } while (ppuVar33 != ppuVar42);
        }
        lVar12 = local_138;
        FUN_1456c53a2(local_138,0);
        iVar18 = *(int *)(lVar12 + 0x7c);
        lVar27 = *(longlong *)(lVar12 + 0x70);
        if (*(longlong *)(lVar12 + 0x70) == 0) {
          lVar27 = lVar12 + 0x50;
        }
        FUN_144717c65(lVar27,*(undefined4 *)(lVar12 + 0x78));
        *(undefined4 *)(lVar12 + 0x78) = 0;
        if ((iVar18 < 0) && (*(int *)(lVar12 + 0x7c) != 0)) {
          FUN_14473dbc4(lVar12 + 0x50,0);
        }
        if (local_d8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar5 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      iVar35 = iVar35 + 1;
    } while (iVar35 < *(int *)(param_2 + 0x2d0));
    uVar26 = local_140 & 0xffffffff;
  }
  plVar14 = local_148;
  if (local_148 == (longlong *)0x0) {
    plVar14 = local_168;
  }
  FUN_144717c65(plVar14,uVar26);
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_1b8);
  plVar14 = uStack_130;
  if (uStack_130 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_130 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*uStack_130)(uStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((int)local_1c0 != 0) {
    puVar44 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar31 = (uint *)*puVar44;
    if (puVar31 != (uint *)0x0) goto LAB_1400a9a42;
    while( true ) {
      uVar29 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar29 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar29 | 1;
        __tlregdtor(&LAB_1432d8424);
      }
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar15 = *(undefined4 **)(lVar12 + 0x310);
      *(undefined8 *)(lVar12 + 0x310) = 0;
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar15 = 0xffffffff;
      *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
      puVar15[0x12] = 0;
      *puVar44 = puVar15;
      FUN_140217a48(puVar44);
      puVar31 = (uint *)*puVar44;
LAB_1400a9a42:
      puVar32 = (undefined8 *)(*(longlong *)(puVar31 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar45 = (uint *)(puVar32 + 0x16);
      uVar29 = puVar31[0x12];
      if (puVar45 <= puVar31 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar31 + 0x10) = puVar31 + 0x4000;
        LOCK();
        uVar41 = *puVar31;
        *puVar31 = *puVar31 + uVar29 + 1;
        UNLOCK();
        if ((uVar41 ^ uVar29) != 0xffffffff) break;
        puVar31 = (uint *)*puVar44;
        *puVar31 = 0xffffffff;
        *(uint **)(puVar31 + 0x10) = puVar31 + 0x16;
        puVar31[0x12] = 0;
        *puVar44 = puVar31;
        puVar32 = (undefined8 *)((longlong)puVar31 + 0x5fU & 0xfffffffffffffff8);
        puVar45 = (uint *)(puVar32 + 0x16);
        uVar29 = 0;
        if (puVar45 <= puVar31 + 0x4000) {
          uVar29 = 1;
          goto LAB_1400a9ac2;
        }
      }
    }
    uVar29 = uVar29 + 1;
LAB_1400a9ac2:
    *(uint **)(puVar31 + 0x10) = puVar45;
    puVar31[0x12] = uVar29;
    FUN_1447247dc(puVar32,local_1e8);
    *puVar32 = &PTR_FUN_149f56280;
    uVar29 = *(uint *)(local_218 + 0xf);
    *(uint *)(puVar32 + 0x15) = uVar29;
    if (((ulonglong)uVar29 & 0xff) == 0xff) {
      uVar41 = uVar29 >> 10 & 3;
      iVar35 = 0;
      if ((uVar29 >> 9 & 1) == 0 || uVar41 < 2) {
        uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar41];
        iVar35 = 0;
      }
      else {
        uVar26 = 2;
      }
    }
    else {
      iVar35 = (uVar29 >> 7 & 2 | uVar29 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar29 & 0xff) * 4);
      uVar26 = 5;
    }
    if (*(code **)(puVar32[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar32[0xe] + 0x18))(puVar32 + 0xe,puVar32 + 9);
    }
    puVar32[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar32[9] = puVar32;
    puVar32[10] = puVar32;
    lVar12 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar12 == 0) {
      uVar43 = 1;
      if ((char)uVar26 != '\x06') {
        uVar43 = uVar26;
      }
      uVar26 = uVar43;
      uVar13 = 0;
    }
    else {
      if ((char)uVar26 == '\x06') {
        uVar26 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
      }
      uVar13 = *(undefined8 *)(lVar12 + 0x30);
    }
    puVar32[0xf] = uVar13;
    puVar32[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar32 + 0x1c) = iVar35;
    if (puVar32 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
      UNLOCK();
    }
    local_138 = CONCAT71(local_138._1_7_,1);
    local_1b8[0] = puVar32;
    FUN_1447439e4(puVar32);
    FUN_14009fd82(DAT_14c82b500,local_1b8,0x101);
    if (local_1b8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1b8[0] + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1b8[0])(local_1b8[0],1);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x6e0) = *(undefined8 *)(param_2 + 0x270);
  lVar27 = *(longlong *)(param_2 + 0x548);
  lVar12 = lVar27 + 0x48;
  iVar35 = *(int *)(lVar27 + 0x90);
  if (iVar35 < 2) {
    lVar36 = lVar27 + 0x80;
    if (*(longlong *)(lVar27 + 0x88) != 0) {
      lVar36 = *(longlong *)(lVar27 + 0x88);
    }
    iVar18 = iVar35 + 3;
    if (-1 < iVar35) {
      iVar18 = iVar35;
    }
    if (*(int *)(lVar27 + 0x50) - *(int *)(lVar27 + 0x7c) < iVar18 >> 2) {
      iVar35 = *(int *)(lVar27 + 0x70);
      if (iVar35 != 0) {
        puVar31 = *(uint **)(lVar27 + 0x68);
        if (*(uint **)(lVar27 + 0x68) == (uint *)0x0) {
          puVar31 = (uint *)(lVar27 + 0x58);
        }
        uVar29 = *puVar31;
        if (uVar29 == 0) {
          iVar18 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar18 = iVar35 + -1;
          }
          uVar26 = 0;
          uVar43 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar43 = uVar26;
          }
          iVar18 = 0;
          do {
            if (uVar43 == uVar26) goto LAB_1400a6eed;
            iVar18 = iVar18 + 0x20;
            uVar29 = puVar31[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar26 = 0;
          iVar18 = 0;
        }
        uVar40 = (ulonglong)(-uVar29 & uVar29);
        uVar43 = uVar40 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar43 != 0) {
          for (; uVar43 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar38 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar38 < iVar35) {
          uVar29 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar36 + (longlong)
                       *(int *)(*(longlong *)(lVar27 + 0x48) + 0x18 + (longlong)iVar38 * 0x1c) * 4)
                 = 0xffffffff;
            uVar29 = ~(uint)uVar40 & uVar29;
            puVar31 = *(uint **)(lVar27 + 0x68);
            if (*(uint **)(lVar27 + 0x68) == (uint *)0x0) {
              puVar31 = (uint *)(lVar27 + 0x58);
            }
            iVar19 = *(int *)(lVar27 + 0x70);
            iVar38 = (int)uVar26;
            lVar21 = (longlong)iVar38;
            uVar41 = puVar31[lVar21] & uVar29;
            if (uVar41 == 0) {
              iVar30 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar30 = iVar19 + -1;
              }
              iVar30 = iVar30 >> 5;
              iVar18 = iVar18 + 0x20;
              iVar10 = iVar30;
              if (iVar30 < iVar38) {
                iVar10 = iVar38;
              }
              if (iVar38 < iVar30) {
                lVar34 = 0;
                do {
                  uVar41 = puVar31[lVar21 + lVar34 + 1];
                  if (uVar41 != 0) {
                    uVar26 = (ulonglong)(iVar38 + (int)lVar34 + 1);
                    uVar29 = 0xffffffff;
                    goto LAB_1400a9fee;
                  }
                  iVar18 = iVar18 + 0x20;
                  lVar34 = lVar34 + 1;
                } while (iVar10 - lVar21 != lVar34);
                uVar29 = 0xffffffff;
                lVar21 = (longlong)iVar10;
              }
              uVar26 = lVar21 + 1U & 0xffffffff;
              iVar38 = iVar19;
            }
            else {
LAB_1400a9fee:
              uVar40 = (ulonglong)(-uVar41 & uVar41);
              uVar43 = uVar40 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar43 != 0) {
                for (; uVar43 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar38 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar19 <= iVar38) {
                iVar38 = iVar19;
              }
            }
          } while (iVar38 != iVar35);
        }
      }
    }
    else if (iVar35 == 1) {
      lVar21 = 0;
      do {
        *(undefined4 *)(lVar36 + lVar21 * 4) = 0xffffffff;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar27 + 0x90));
    }
LAB_1400a6eed:
    FUN_140956572(lVar12);
  }
  else {
    FUN_140956572(lVar12);
    *(undefined4 *)(lVar27 + 0x90) = 1;
    FUN_1408750a8(lVar12);
  }
  iVar35 = *(int *)(lVar27 + 0x30);
  if (iVar35 == 0) {
    iVar18 = -1;
  }
  else {
    iVar18 = -1;
    lVar12 = *(longlong *)(lVar27 + 0x28);
    if (*(longlong *)(lVar27 + 0x28) == 0) {
      lVar12 = lVar27 + 0x18;
    }
    uVar26 = (ulonglong)(iVar35 + 0x1fU >> 5);
    iVar38 = -0x3e - (iVar35 + 0x1fU & 0xffffffe0);
    uVar29 = 0xffffffff >> (-(char)iVar35 & 0x1fU);
    do {
      bVar48 = uVar26 == 0;
      uVar26 = uVar26 - 1;
      if (bVar48) goto LAB_1400a6f69;
      iVar38 = iVar38 + 0x20;
      uVar41 = uVar29 & *(uint *)(lVar12 + uVar26 * 4);
      uVar29 = 0xffffffff;
    } while (uVar41 == 0);
    uVar26 = (ulonglong)uVar41 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar18 = -(((uint)lVar12 ^ 0x3f) + iVar38);
  }
LAB_1400a6f69:
  iVar35 = iVar18 + 1;
  iVar38 = *(int *)(lVar27 + 0x10);
  if (iVar35 < iVar38) {
    if ((0 < *(int *)(lVar27 + 0x3c)) &&
       (uVar26 = (ulonglong)*(uint *)(lVar27 + 0x38), *(uint *)(lVar27 + 0x38) != 0xffffffff)) {
      lVar12 = *(longlong *)(lVar27 + 8);
      do {
        iVar38 = (int)uVar26;
        if (iVar18 < iVar38) {
          lVar36 = (longlong)iVar38 * 0x128;
          iVar38 = *(int *)(lVar12 + lVar36);
          iVar19 = *(int *)(lVar12 + 4 + lVar36);
          uVar26 = (ulonglong)iVar19;
          if (uVar26 != 0xffffffffffffffff) {
            *(int *)(lVar12 + uVar26 * 0x128) = iVar38;
          }
          if (iVar38 == -1) {
            *(int *)(lVar27 + 0x38) = iVar19;
          }
          else {
            *(int *)(lVar12 + 4 + (longlong)iVar38 * 0x128) = iVar19;
          }
          *(int *)(lVar27 + 0x3c) = *(int *)(lVar27 + 0x3c) + -1;
        }
        else {
          uVar26 = (ulonglong)*(uint *)(lVar12 + 4 + (longlong)iVar38 * 0x128);
        }
      } while ((int)uVar26 != -1);
      iVar38 = *(int *)(lVar27 + 0x10);
    }
    if (iVar38 != iVar35) {
      *(int *)(lVar27 + 0x10) = iVar35;
    }
    *(int *)(lVar27 + 0x30) = iVar35;
    iVar18 = iVar18 + 0x20;
    if (-1 < iVar35) {
      iVar18 = iVar35;
    }
    iVar38 = iVar35;
    if (iVar35 % 0x20 != 0) {
      lVar12 = lVar27 + 0x18;
      if (*(longlong *)(lVar27 + 0x28) != 0) {
        lVar12 = *(longlong *)(lVar27 + 0x28);
      }
      bVar16 = -(char)(iVar35 % 0x20);
      *(uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4) =
           (uint)(*(int *)(lVar12 + (longlong)(iVar18 >> 5) * 4) << (bVar16 & 0x1f)) >>
           (bVar16 & 0x1f);
      iVar38 = *(int *)(lVar27 + 0x10);
    }
  }
  if (*(int *)(lVar27 + 0x14) != iVar38) {
    FUN_1409565ca(lVar27 + 8);
  }
  lVar12 = FUN_14009d2a0();
  local_d8 = &PTR_FUN_14a474170;
  local_b0 = 0x10000000000;
  puVar44 = (undefined8 *)(lVar12 + 0x20);
  if (auStack_d0 != puVar44) {
    iVar35 = *(int *)(lVar12 + 0x40);
    if (0x100 < (int)(iVar35 + 0x1fU & 0xffffffe0)) {
      local_b0 = ((ulonglong)(iVar35 + 0x1fU) & 0xffffffe0) << 0x20;
      FUN_14497ddce(auStack_d0,0);
      iVar35 = *(int *)(lVar12 + 0x40);
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar35);
    if (iVar35 != 0) {
      memcpy(auStack_d0,puVar44,(ulonglong)(iVar35 + 0x1fU >> 3 & 0xfffffffc));
    }
  }
  local_210 = param_2 + 0x28;
  FUN_140dbcc30(auStack_d0);
  iStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  iStack_104 = 0;
  uStack_100 = 0;
  local_128 = 0;
  puStack_120 = (undefined1 *)0x0;
  local_138 = 0;
  uStack_130 = (longlong *)0x0;
  local_f8 = (ulonglong *)0x0;
  local_118 = (uint *)0x10000000000;
  local_f0 = 0x10000000000;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar13 = FUN_140dad9c2(&local_138,puVar44,2);
  FUN_1403b8af8(local_1b8,uVar13);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140857d6a(local_210,local_1b8,&local_d8,1);
  iStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  iStack_104 = 0;
  uStack_100 = 0;
  local_128 = 0;
  puStack_120 = (undefined1 *)0x0;
  local_138 = 0;
  uStack_130 = (longlong *)0x0;
  local_f8 = (ulonglong *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0x100;
  local_f0 = 0x10000000000;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar8 = *(ushort *)(lVar12 + 0x11c);
  iVar18 = uVar8 + 1;
  iVar35 = iVar18;
  if (0xff < uVar8) {
    FUN_14497ddce(&local_138,0);
    iVar35 = (int)local_118 + iVar18;
  }
  iVar38 = iVar35 + 0x1f;
  if (-1 < iVar35) {
    iVar38 = iVar35;
  }
  local_118 = (uint *)CONCAT44(local_118._4_4_,iVar35);
  if (iVar35 % 0x20 != 0) {
    bVar16 = -(char)(iVar35 % 0x20);
    *(uint *)((longlong)&local_138 + (longlong)(iVar38 >> 5) * 4) =
         (uint)(*(int *)((longlong)&local_138 + (longlong)(iVar38 >> 5) * 4) << (bVar16 & 0x1f)) >>
         (bVar16 & 0x1f);
  }
  FUN_1447c45ca(&local_138,0,iVar18,0);
  puVar31 = (uint *)((longlong)&local_138 + (ulonglong)(uVar8 >> 5) * 4);
  *puVar31 = *puVar31 | 1 << ((byte)uVar8 & 0x1f);
  FUN_1403b5634(local_210);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_2 + 0x704) != '\0') ||
     ((*(ulonglong *)(param_2 + 0x6d8) != 0 &&
      (*(ulonglong *)(param_2 + 0x278) <= *(ulonglong *)(param_2 + 0x6d8))))) goto LAB_1400a8719;
  *(int *)(param_2 + 0x428) = *(int *)(param_2 + 0x428) + 1;
  local_220 = (longlong *)(param_2 + 0x3e0);
  puVar31 = (uint *)&local_128;
  local_138 = 0;
  uStack_130 = (longlong *)0x0;
  local_118 = (uint *)0x0;
  uStack_10c = 0x80;
  iStack_110 = *(int *)(param_2 + 0x3f8);
  uVar29 = *(int *)(param_2 + 0x3f8) + 0x1f;
  if (0x1f < uVar29) {
    if (uVar29 < 0xa0) {
LAB_1400a71f1:
      uVar29 = uVar29 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(&local_118,0,uVar29 >> 5,4);
      uStack_10c = uVar29 & 0xffffffe0;
      puVar31 = local_118;
      if (local_118 == (uint *)0x0) {
        puVar31 = (uint *)&local_128;
      }
      if (uVar29 < 0x120) goto LAB_1400a71f1;
      uVar29 = (uVar29 >> 5) << 2;
    }
    memset(puVar31,0,(ulonglong)uVar29);
    iVar35 = iStack_110 + 0x1f;
    if (-1 < iStack_110) {
      iVar35 = iStack_110;
    }
    if (iStack_110 % 0x20 != 0) {
      puVar31 = local_118;
      if (local_118 == (uint *)0x0) {
        puVar31 = (uint *)&local_128;
      }
      bVar16 = -(char)(iStack_110 % 0x20);
      puVar31[iVar35 >> 5] = (puVar31[iVar35 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
    }
  }
  uStack_100 = uStack_100 & 0xffffffff00000000;
  uStack_108 = SUB84(local_220,0);
  iStack_104 = (int)((ulonglong)local_220 >> 0x20);
  uVar29 = *(uint *)(param_2 + 0x3f8);
  plVar14 = *(longlong **)(param_2 + 0x3f0);
  if (*(longlong **)(param_2 + 0x3f0) == (longlong *)0x0) {
    plVar14 = local_220;
  }
  uVar41 = 0xffffffff >> (-(char)((int)uVar29 % 0x20) & 0x1fU);
  if ((int)uVar29 % 0x20 < 1) {
    uVar41 = 0xffffffff;
  }
  if ((int)uVar29 < 1) {
    iVar35 = 0;
  }
  else {
    uVar26 = (ulonglong)uVar29 + 0x1f >> 5;
    uVar39 = 0xffffffff;
    if (uVar29 < 0x21) {
      uVar39 = uVar41;
    }
    uVar43 = 0;
    iVar35 = 0;
    do {
      uVar39 = uVar39 & *(uint *)((longlong)plVar14 + uVar43 * 4);
      uVar40 = (ulonglong)uVar39 - (ulonglong)(uVar39 >> 1 & 0x55555555);
      uVar40 = (uVar40 >> 2 & 0x3333333333333333) + (uVar40 & 0x3333333333333333);
      iVar35 = iVar35 + (uint)(byte)(((uVar40 >> 4) + uVar40 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      bVar48 = uVar26 - 2 == uVar43;
      uVar43 = uVar43 + 1;
      uVar39 = 0xffffffff;
      if (bVar48) {
        uVar39 = uVar41;
      }
    } while (uVar26 != uVar43);
  }
  if ((int)uStack_130._4_4_ < iVar35) {
    FUN_1448759c8(&local_138);
  }
  local_218 = (longlong *)(param_2 + 0x358);
  local_268 = (undefined8 **)(param_2 + 0x368);
  uVar29 = *(uint *)(param_2 + 0x380);
  if (uVar29 == 0) {
    uVar26 = 0;
    uVar43 = 1;
    uVar41 = 0;
    iVar35 = 0;
  }
  else {
    puVar31 = *(uint **)(param_2 + 0x378);
    if (*(uint **)(param_2 + 0x378) == (uint *)0x0) {
      puVar31 = (uint *)local_268;
    }
    uVar41 = *puVar31;
    if (uVar41 == 0) {
      iVar35 = uVar29 + 0x1e;
      if (-1 < (int)(uVar29 - 1)) {
        iVar35 = uVar29 - 1;
      }
      uVar26 = 0;
      uVar43 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar43 = uVar26;
      }
      iVar35 = 0;
      do {
        if (uVar43 == uVar26) goto LAB_1400a7a3e;
        iVar35 = iVar35 + 0x20;
        uVar41 = puVar31[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar41 == 0);
    }
    else {
      uVar26 = 0;
      iVar35 = 0;
    }
    uVar43 = (ulonglong)(-uVar41 & uVar41);
    uVar40 = uVar43 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar41 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar29 <= (int)uVar41) {
      uVar41 = uVar29;
    }
  }
  if (uVar41 != uVar29) {
    local_240 = (uint *)(param_2 + 0x1d0);
    local_238 = (uint *)(param_2 + 0x40);
    uVar39 = 0xffffffff;
    local_250 = (uint *)(ulonglong)uVar29;
    do {
      local_258 = (longlong *)CONCAT44(local_258._4_4_,iVar35);
      plVar14 = *(longlong **)(*local_218 + 0x20 + (longlong)(int)uVar41 * 0x28);
      uVar8 = *(ushort *)((longlong)plVar14 + 0x34);
      uVar29 = 1 << ((byte)uVar8 & 0x1f);
      puVar31 = local_118;
      if (local_118 == (uint *)0x0) {
        puVar31 = (uint *)&local_128;
      }
      uVar17 = uVar8 >> 5;
      if ((puVar31[uVar17] >> (uVar8 & 0x1f) & 1) == 0) {
        uVar4 = *(ushort *)(plVar14 + 6);
        if (uVar4 == 0xffff) {
LAB_1400a748d:
          if ((*(code **)(*plVar14 + 0x2c0) == (code *)&LAB_1475473d0) ||
             (cVar7 = (**(code **)(*plVar14 + 0x2c0))(plVar14,param_2), cVar7 == '\0'))
          goto LAB_1400a74a7;
        }
        else {
          if (*(char *)(param_2 + 0x289) == '\x01') {
            *(undefined4 *)(param_2 + 0x1f0) = 0;
            uVar41 = *(uint *)(param_2 + 0x58);
            if (uVar41 == 0) {
              local_260 = (uint *)0x0;
              local_230 = 1;
              uVar9 = 0;
              iVar35 = 0;
            }
            else {
              puVar31 = *(uint **)(param_2 + 0x50);
              if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
                puVar31 = local_238;
              }
              uVar9 = *puVar31;
              if (uVar9 == 0) {
                iVar35 = uVar41 + 0x1e;
                if (-1 < (int)(uVar41 - 1)) {
                  iVar35 = uVar41 - 1;
                }
                local_260 = (uint *)0x0;
                puVar45 = (uint *)(ulonglong)(uint)(iVar35 >> 5);
                if (iVar35 >> 5 < 1) {
                  puVar45 = local_260;
                }
                iVar35 = 0;
                do {
                  if (puVar45 == local_260) goto LAB_1400a799d;
                  iVar35 = iVar35 + 0x20;
                  uVar9 = puVar31[(longlong)local_260 + 1];
                  local_260 = (uint *)((longlong)local_260 + 1);
                } while (uVar9 == 0);
              }
              else {
                local_260 = (uint *)0x0;
                iVar35 = 0;
              }
              local_230 = (ulonglong)(-uVar9 & uVar9);
              uVar40 = local_230 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uVar9 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              if ((int)uVar41 <= (int)uVar9) {
                uVar9 = uVar41;
              }
            }
            puVar31 = local_260;
            if (uVar9 != uVar41) {
              local_228 = CONCAT44(local_228._4_4_,0xffffffff);
              local_208 = CONCAT44(local_208._4_4_,uVar39);
              local_1f8 = (ulonglong)uVar41;
              do {
                local_248 = CONCAT44(local_248._4_4_,iVar35);
                FUN_14010b303((longlong)(int)uVar9 * 0x28 + *(longlong *)(param_2 + 0x30),local_240,
                              1,&local_88);
                uVar41 = ~(uint)local_230 & (uint)local_228;
                puVar31 = *(uint **)(param_2 + 0x50);
                if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
                  puVar31 = local_238;
                }
                uVar39 = *(uint *)(param_2 + 0x58);
                iVar35 = (int)local_260;
                lVar12 = (longlong)iVar35;
                uVar9 = puVar31[lVar12] & uVar41;
                if (uVar9 == 0) {
                  iVar18 = uVar39 + 0x1e;
                  if (-1 < (int)(uVar39 - 1)) {
                    iVar18 = uVar39 - 1;
                  }
                  iVar18 = iVar18 >> 5;
                  local_248 = CONCAT44(local_248._4_4_,(int)local_248 + 0x20);
                  iVar38 = iVar18;
                  if (iVar18 < iVar35) {
                    iVar38 = iVar35;
                  }
                  if (iVar35 < iVar18) {
                    lVar27 = 0;
                    do {
                      uVar9 = puVar31[lVar12 + lVar27 + 1];
                      if (uVar9 != 0) {
                        local_260 = (uint *)(ulonglong)(iVar35 + (int)lVar27 + 1);
                        uVar41 = 0xffffffff;
                        goto LAB_1400a7911;
                      }
                      local_248 = CONCAT44(local_248._4_4_,(int)local_248 + 0x20);
                      lVar27 = lVar27 + 1;
                    } while (iVar38 - lVar12 != lVar27);
                    uVar41 = 0xffffffff;
                    lVar12 = (longlong)iVar38;
                  }
                  local_260 = (uint *)(lVar12 + 1);
                  uVar9 = uVar39;
                }
                else {
LAB_1400a7911:
                  local_230 = (ulonglong)(-uVar9 & uVar9);
                  uVar40 = local_230 * 2 + 1;
                  lVar12 = 0x3f;
                  if (uVar40 != 0) {
                    for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                    }
                  }
                  uVar9 = ((int)local_248 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                  if ((int)uVar39 <= (int)uVar9) {
                    uVar9 = uVar39;
                  }
                }
                local_228 = CONCAT44(local_228._4_4_,uVar41);
                puVar31 = local_260;
                uVar39 = (uint)local_208;
                iVar35 = (int)local_248;
              } while (uVar9 != (uint)local_1f8);
            }
LAB_1400a799d:
            local_260 = puVar31;
            *(undefined1 *)(param_2 + 0x289) = 0;
          }
          if ((*(uint *)(param_2 + 0x1f0) == (uint)uVar4 ||
               (int)*(uint *)(param_2 + 0x1f0) < (int)(uint)uVar4) ||
             ((local_240[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_1400a748d;
        }
        puVar31 = local_118;
        if (local_118 == (uint *)0x0) {
          puVar31 = (uint *)&local_128;
        }
        if ((puVar31[uVar17] & uVar29) == 0) {
          bVar48 = (longlong)uStack_130 < 0;
          uStack_130 = (longlong *)((ulonglong)uStack_130 & 0xffffffff00000000);
          if (bVar48) {
            FUN_1448759c8(&local_138,0);
          }
          uVar40 = (ulonglong)uStack_130;
          uStack_100 = uStack_100 & 0xffffffff00000000;
          puVar31 = local_118;
          if (local_118 == (uint *)0x0) {
            puVar31 = (uint *)&local_128;
          }
          puVar31[uVar17] = puVar31[uVar17] | uVar29;
          lVar12 = (longlong)(int)uStack_130;
          uVar29 = (int)uStack_130 + 1;
          uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,uVar29);
          if (uStack_130._4_4_ < uVar29) {
            FUN_14488eebe(&local_138,uVar40 & 0xffffffff);
          }
          *(ushort *)(local_138 + lVar12 * 2) = uVar8;
          iVar35 = (int)uStack_130;
          iVar18 = (int)uStack_100;
          while (iVar18 < iVar35) {
            if (iVar18 < iVar35) {
              do {
                uVar8 = *(ushort *)(local_138 + (longlong)iVar18 * 2);
                uVar29 = *(uint *)(CONCAT44(iStack_104,uStack_108) + 0x28);
                lVar12 = *(longlong *)(CONCAT44(iStack_104,uStack_108) + 0x20);
                uVar40 = 0;
                if (0 < (int)uVar29) {
                  uVar37 = (ulonglong)uVar29;
                  uVar41 = uVar29;
                  do {
                    uVar37 = uVar37 >> 1;
                    uVar9 = (uint)uVar37 + (int)uVar40;
                    if (*(ushort *)(lVar12 + (ulonglong)uVar9 * 4) < uVar8) {
                      uVar40 = (ulonglong)(uVar9 + (uVar41 & 1));
                    }
                    bVar48 = 1 < uVar41;
                    uVar41 = (uint)uVar37;
                  } while (bVar48);
                }
                uVar41 = uVar29 - (int)uVar40;
                uVar37 = (ulonglong)uVar41;
                if (uVar41 != 0 && (int)uVar40 <= (int)uVar29) {
                  puVar31 = (uint *)(lVar12 + uVar40 * 4);
                  uVar40 = 0;
                  do {
                    if ((ushort)puVar31[uVar40] != uVar8) {
                      uVar37 = uVar40 & 0xffffffff;
                      goto LAB_1400a769f;
                    }
                    uVar40 = uVar40 + 1;
                  } while (uVar37 != uVar40);
                  uVar40 = (ulonglong)uVar41;
LAB_1400a769f:
                  if ((int)uVar40 != 0) {
                    puVar45 = puVar31 + uVar37;
                    do {
                      uVar40 = (ulonglong)uStack_130;
                      uVar29 = *puVar31;
                      puVar22 = local_118;
                      if (local_118 == (uint *)0x0) {
                        puVar22 = (uint *)&local_128;
                      }
                      if ((puVar22[uVar29 >> 0x15] >> (uVar29 >> 0x10 & 0x1f) & 1) == 0) {
                        puVar22[uVar29 >> 0x15] =
                             1 << ((byte)(uVar29 >> 0x10) & 0x1f) | puVar22[uVar29 >> 0x15];
                        lVar12 = (longlong)(int)uStack_130;
                        uVar41 = (int)uStack_130 + 1;
                        uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,uVar41);
                        if (uStack_130._4_4_ < uVar41) {
                          local_260 = puVar45;
                          FUN_14488eebe(&local_138,uVar40 & 0xffffffff);
                          puVar45 = local_260;
                        }
                        *(short *)(local_138 + lVar12 * 2) = (short)(uVar29 >> 0x10);
                      }
                      puVar31 = puVar31 + 1;
                    } while (puVar31 != puVar45);
                    iVar18 = (int)uStack_100;
                  }
                }
                iVar18 = iVar18 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,iVar18);
              } while (iVar18 < iVar35);
              iVar35 = (int)uStack_130;
            }
          }
        }
      }
LAB_1400a74a7:
      uVar39 = uVar39 & ~(uint)uVar43;
      ppuVar11 = (undefined8 **)*(uint **)(param_2 + 0x378);
      if (*(uint **)(param_2 + 0x378) == (uint *)0x0) {
        ppuVar11 = local_268;
      }
      uVar29 = *(uint *)(param_2 + 0x380);
      iVar18 = (int)uVar26;
      lVar12 = (longlong)iVar18;
      uVar41 = *(uint *)((longlong)ppuVar11 + lVar12 * 4) & uVar39;
      iVar35 = (int)local_258;
      if (uVar41 == 0) {
        iVar38 = uVar29 + 0x1e;
        if (-1 < (int)(uVar29 - 1)) {
          iVar38 = uVar29 - 1;
        }
        iVar38 = iVar38 >> 5;
        iVar35 = (int)local_258 + 0x20;
        iVar19 = iVar38;
        if (iVar38 < iVar18) {
          iVar19 = iVar18;
        }
        if (iVar18 < iVar38) {
          lVar27 = 0;
          do {
            uVar41 = *(uint *)((longlong)ppuVar11 + (lVar12 + lVar27 + 1) * 4);
            if (uVar41 != 0) {
              uVar26 = (ulonglong)(iVar18 + (int)lVar27 + 1);
              uVar39 = 0xffffffff;
              goto LAB_1400a7538;
            }
            iVar35 = iVar35 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar19 - lVar12 != lVar27);
          uVar39 = 0xffffffff;
          iVar18 = iVar19;
        }
        uVar26 = (ulonglong)(iVar18 + 1);
        uVar41 = uVar29;
      }
      else {
LAB_1400a7538:
        uVar43 = (ulonglong)(-uVar41 & uVar41);
        uVar40 = uVar43 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar41 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar29 <= (int)uVar41) {
          uVar41 = uVar29;
        }
      }
    } while (uVar41 != (uint)local_250);
  }
LAB_1400a7a3e:
  iVar35 = *(int *)(param_2 + 0x360);
  if (iStack_110 < iVar35) {
    if (0 < iVar35) {
LAB_1400a7ac6:
      local_238 = (uint *)(param_2 + 0x390);
      puVar31 = (uint *)0x0;
      uVar29 = 0;
      ppuVar11 = local_268;
      do {
        uVar41 = 1 << ((byte)uVar29 & 0x1f);
        puVar45 = *(uint **)(param_2 + 0x378);
        if (*(uint **)(param_2 + 0x378) == (uint *)0x0) {
          puVar45 = (uint *)ppuVar11;
        }
        uVar39 = uVar29 >> 5;
        if ((puVar45[uVar39] >> (uVar29 & 0x1f) & 1) != 0) {
          puVar45 = local_118;
          if (local_118 == (uint *)0x0) {
            puVar45 = (uint *)&local_128;
          }
          if ((puVar45[uVar39] & uVar41) == 0) {
            plVar14 = *(longlong **)(param_2 + 0x3f0);
            if (*(longlong **)(param_2 + 0x3f0) == (longlong *)0x0) {
              plVar14 = local_220;
            }
            puVar45 = (uint *)((longlong)plVar14 + (ulonglong)(uVar39 & 0x7ff) * 4);
            *puVar45 = *puVar45 & ~uVar41;
            uVar26 = (ulonglong)(uVar29 & 0xffff);
            *(undefined1 *)(param_2 + 0x410) = 1;
            lVar12 = *(longlong *)(param_2 + 0x358);
            plVar14 = *(longlong **)(lVar12 + 0x18 + uVar26 * 0x28);
            plVar5 = *(longlong **)(lVar12 + 0x20 + uVar26 * 0x28);
            local_250 = puVar31;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar14 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            plVar14 = *(longlong **)(lVar12 + uVar26 * 0x28 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar14 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            FUN_1432d816c(local_218,uVar26);
            *(undefined2 *)((longlong)plVar5 + 0x34) = 0xffff;
            FUN_140831aae(local_238,*(undefined2 *)((longlong)plVar5 + 0x36));
            if (*(short *)((longlong)plVar5 + 0x34) != -1) {
              FUN_147547674(plVar5[5] + 0x2a0,plVar5);
            }
            (**(code **)(*plVar5 + 0x2b8))(plVar5);
            lVar12 = plVar5[5];
            uVar8 = *(ushort *)((longlong)plVar5 + 0x36);
            lVar27 = *(longlong *)(lVar12 + 0x550);
            if (*(int *)(lVar12 + 0x584) != 0) {
              *(uint *)(lVar27 + (longlong)*(int *)(lVar12 + 0x580) * 8) = (uint)uVar8;
            }
            *(undefined4 *)(lVar27 + (ulonglong)uVar8 * 8) = 0xffffffff;
            if (*(int *)(lVar12 + 0x584) < 1) {
              uVar25 = 0xffffffff;
            }
            else {
              uVar25 = *(undefined4 *)(lVar12 + 0x580);
            }
            *(undefined4 *)(lVar27 + 4 + (ulonglong)uVar8 * 8) = uVar25;
            *(uint *)(lVar12 + 0x580) = (uint)uVar8;
            *(int *)(lVar12 + 0x584) = *(int *)(lVar12 + 0x584) + 1;
            lVar27 = lVar12 + 0x560;
            if (*(longlong *)(lVar12 + 0x570) != 0) {
              lVar27 = *(longlong *)(lVar12 + 0x570);
            }
            bVar16 = (byte)uVar8 & 0x1f;
            puVar31 = (uint *)(lVar27 + (ulonglong)(uVar8 >> 5) * 4);
            *puVar31 = *puVar31 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            FUN_140457ffc(lVar12 + 0x640,plVar5);
            FUN_140457ffc(lVar12 + 0x658,plVar5);
            FUN_140457ffc(lVar12 + 0x670,plVar5);
            FUN_140457ffc(lVar12 + 0x688,plVar5);
            FUN_140457ffc(lVar12 + 0x6a0,plVar5);
            puVar31 = (uint *)plVar5[2];
            if (puVar31 != (uint *)0x0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(puVar31);
            }
            local_88 = puVar31;
            if ((~DAT_14c950c29 & 1) == 0 && puVar31 != (uint *)0x0) {
              FUN_1456cec3c(puVar31);
            }
            if ((puVar31 != (uint *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(puVar31);
            }
            local_258 = (longlong *)(lVar12 + 0x588);
            uVar41 = ((uint)((ulonglong)puVar31 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar31 >> 4))
                     * -0x7a143595;
            uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
            FUN_1432d82e2(local_258,uVar41 >> 0x10 ^ uVar41,&local_88);
            if (plVar5 != (longlong *)0x0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(plVar5);
            }
            lVar27 = plVar5[2];
            if ((lVar27 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(lVar27);
            }
            if (*(int *)(lVar12 + 0x5bc) == 0) {
              iVar35 = *(int *)(lVar12 + 0x590);
              *(int *)(lVar12 + 0x590) = iVar35 + 1;
              if (*(int *)(lVar12 + 0x594) == iVar35) {
                FUN_14482b872(local_258,iVar35);
              }
              iVar18 = *(int *)(lVar12 + 0x5b0);
              if (iVar18 == 0) {
                iVar38 = -1;
              }
              else {
                iVar38 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar38 = iVar18 + -1;
                }
                iVar38 = iVar38 >> 5;
              }
              local_240 = (uint *)(lVar12 + 0x598);
              iVar19 = iVar18 + 1;
              iVar30 = iVar18 + 0x1f;
              if (-1 < iVar18) {
                iVar30 = iVar18;
              }
              if (iVar30 >> 5 == iVar38) {
                *(int *)(lVar12 + 0x5b0) = iVar19;
              }
              else {
                if (*(int *)(lVar12 + 0x5b4) <= iVar18) {
                  iVar38 = iVar18;
                  if (iVar18 + 0x20U < 0xa0) {
                    iVar19 = 0x80;
                  }
                  else {
                    uVar41 = iVar18 + 0x20U >> 5;
                    local_260 = (uint *)(ulonglong)uVar41;
                    if (*(int *)(lVar12 + 0x5b4) + 0x1fU < 0xa0) {
                      uVar39 = 4;
                      if (4 < uVar41) {
                        uVar39 = uVar41;
                      }
                    }
                    else {
                      uVar39 = uVar41 + (uVar41 * 3 >> 3) + 0x10;
                    }
                    uVar26 = (ulonglong)(uVar39 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar41 = (uint)(uVar26 + 0xf);
                        if (uVar39 < 0x1ffd) {
                          uVar26 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
                        }
                        else {
                          uVar43 = (ulonglong)(uVar41 & 0xfffffff0);
                          if (uVar43 < 0x7ff1) {
                            bVar16 = (&DAT_14c841e00)[uVar41 >> 4];
                            uVar40 = 0x32;
                            if (0x32 < bVar16) {
                              uVar40 = (ulonglong)bVar16;
                            }
                            uVar37 = 0x32 - (ulonglong)bVar16;
                            do {
                              uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0)
                              goto LAB_1400a8425;
                              lVar36 = uVar40 + 1 + uVar37;
                              uVar37 = uVar37 - 1;
                            } while (lVar36 != 0x33);
                          }
                          uVar26 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar26 = 0x10;
                          }
                          uVar26 = -uVar26 & (uVar43 + uVar26) - 1;
                        }
                      }
                      else {
                        uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
                        iVar38 = *(int *)(lVar12 + 0x5b0);
                      }
                    }
LAB_1400a8425:
                    iVar10 = (int)(uVar26 >> 2);
                    iVar19 = iVar10 << 5;
                    if (iVar10 < (int)local_260) {
                      iVar19 = -0x20;
                    }
                  }
                  *(int *)(lVar12 + 0x5b4) = iVar19;
                  FUN_1446efbd8(local_240,iVar38);
                  iVar19 = *(int *)(lVar12 + 0x5b0) + 1;
                }
                iVar38 = iVar19 + 0x1f;
                if (-1 < iVar19) {
                  iVar38 = iVar19;
                }
                *(int *)(lVar12 + 0x5b0) = iVar19;
                if (iVar19 % 0x20 != 0) {
                  lVar36 = *(longlong *)(lVar12 + 0x5a8);
                  if (*(longlong *)(lVar12 + 0x5a8) == 0) {
                    lVar36 = (longlong)local_240;
                  }
                  bVar16 = -(char)(iVar19 % 0x20);
                  *(uint *)(lVar36 + (longlong)(iVar38 >> 5) * 4) =
                       (uint)(*(int *)(lVar36 + (longlong)(iVar38 >> 5) * 4) << (bVar16 & 0x1f)) >>
                       (bVar16 & 0x1f);
                }
              }
              lVar36 = (longlong)iVar35;
              if (*(longlong *)(lVar12 + 0x5a8) != 0) {
                local_240 = (uint *)*(longlong *)(lVar12 + 0x5a8);
              }
              bVar16 = (byte)iVar18 & 0x1f;
              local_240 = (uint *)((longlong)local_240 + (longlong)(iVar30 >> 5) * 4);
              *local_240 = *local_240 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            }
            else {
              iVar35 = *(int *)(lVar12 + 0x5b8);
              lVar36 = (longlong)iVar35;
              iVar18 = *(int *)(*(longlong *)(lVar12 + 0x588) + 4 + lVar36 * 0x18);
              *(int *)(lVar12 + 0x5b8) = iVar18;
              iVar38 = *(int *)(lVar12 + 0x5bc) + -1;
              *(int *)(lVar12 + 0x5bc) = iVar38;
              if (iVar38 != 0) {
                *(undefined4 *)(*(longlong *)(lVar12 + 0x588) + (longlong)iVar18 * 0x18) =
                     0xffffffff;
              }
            }
            local_240 = (uint *)(lVar12 + 0x598);
            puVar31 = *(uint **)(lVar12 + 0x5a8);
            if (*(uint **)(lVar12 + 0x5a8) == (uint *)0x0) {
              puVar31 = local_240;
            }
            iVar18 = iVar35 + 0x1f;
            if (-1 < iVar35) {
              iVar18 = iVar35;
            }
            puVar31[iVar18 >> 5] = puVar31[iVar18 >> 5] | 1 << ((byte)iVar35 & 0x1f);
            lVar21 = *(longlong *)(lVar12 + 0x588);
            *(longlong *)(lVar21 + lVar36 * 0x18) = lVar27;
            if (DAT_14c950c29 == 1 && lVar27 != 0) {
              FUN_1456cec3c(lVar27);
            }
            bVar16 = DAT_14c950c29;
            puVar47 = (ulonglong *)(lVar21 + lVar36 * 0x18);
            puVar47[1] = (ulonglong)plVar5;
            if ((~bVar16 & 1) == 0 && plVar5 != (longlong *)0x0) {
              FUN_1456cec3c(plVar5);
              bVar16 = DAT_14c950c29;
            }
            *(undefined4 *)(puVar47 + 2) = 0xffffffff;
            uVar26 = *puVar47;
            if (((bVar16 & 1) != 0) && (uVar26 != 0)) {
              FUN_1456cec3c(uVar26);
            }
            uVar41 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
            uVar39 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
            uVar39 = uVar39 >> 0x10 ^ uVar39;
            uVar41 = 1;
            if (*(int *)(lVar12 + 0x590) - *(int *)(lVar12 + 0x5bc) == 1) {
              uVar9 = 1;
LAB_1400a7f7d:
              if (((int)uVar9 < 1) || ((int)uVar41 <= *(int *)(lVar12 + 0x5d0))) {
                uVar39 = *(int *)(lVar12 + 0x5d0) - 1U & uVar39;
                *(uint *)((longlong)puVar47 + 0x14) = uVar39;
                lVar27 = *(longlong *)(lVar12 + 0x5c8);
                if (*(longlong *)(lVar12 + 0x5c8) == 0) {
                  lVar27 = lVar12 + 0x5c0;
                }
                *(undefined4 *)(puVar47 + 2) =
                     *(undefined4 *)
                      (lVar27 + ((longlong)*(int *)(lVar12 + 0x5d0) - 1U & (longlong)(int)uVar39) *
                                4);
                lVar27 = *(longlong *)(lVar12 + 0x5c8);
                if (*(longlong *)(lVar12 + 0x5c8) == 0) {
                  lVar27 = lVar12 + 0x5c0;
                }
                *(int *)(lVar27 + ((longlong)*(int *)(lVar12 + 0x5d0) - 1U & (longlong)(int)uVar39)
                                  * 4) = iVar35;
              }
              else {
                *(uint *)(lVar12 + 0x5d0) = uVar41;
                plVar14 = (longlong *)(lVar12 + 0x5c8);
                if (*(longlong *)(lVar12 + 0x5c8) != 0) {
                  FUN_1446efa72(plVar14,0,0,4);
                  uVar41 = *(uint *)(lVar12 + 0x5d0);
                }
                lVar27 = lVar12 + 0x5c0;
                local_228 = lVar27;
                if (uVar41 == 1) {
                  if (*plVar14 != 0) {
                    FUN_1446efa72(plVar14,0,0,4);
                  }
LAB_1400a8109:
                  uVar39 = 0;
                  do {
                    lVar36 = *(longlong *)(lVar12 + 0x5c8);
                    if (*(longlong *)(lVar12 + 0x5c8) == 0) {
                      lVar36 = lVar27;
                    }
                    *(undefined4 *)
                     (lVar36 + (ulonglong)(*(int *)(lVar12 + 0x5d0) + 0x7fffffffU & uVar39) * 4) =
                         0xffffffff;
                    uVar39 = uVar39 + 1;
                  } while (uVar41 != uVar39);
                }
                else {
                  if (uVar41 == 0) goto LAB_1400a7fe9;
                  FUN_1446efa72(plVar14,0,uVar41,4);
                  lVar27 = local_228;
                  if (0 < (int)uVar41) goto LAB_1400a8109;
                }
                iVar35 = *(int *)(lVar12 + 0x5b0);
                if (iVar35 == 0) {
                  puVar31 = (uint *)0x0;
                  uVar26 = 1;
                  iVar38 = 0;
                  iVar18 = 0;
                }
                else {
                  puVar45 = *(uint **)(lVar12 + 0x5a8);
                  if (*(uint **)(lVar12 + 0x5a8) == (uint *)0x0) {
                    puVar45 = local_240;
                  }
                  uVar41 = *puVar45;
                  if (uVar41 == 0) {
                    iVar18 = iVar35 + 0x1e;
                    if (-1 < iVar35 + -1) {
                      iVar18 = iVar35 + -1;
                    }
                    puVar31 = (uint *)0x0;
                    puVar22 = (uint *)(ulonglong)(uint)(iVar18 >> 5);
                    if (iVar18 >> 5 < 1) {
                      puVar22 = puVar31;
                    }
                    iVar18 = 0;
                    do {
                      if (puVar22 == puVar31) goto LAB_1400a7fe9;
                      iVar18 = iVar18 + 0x20;
                      uVar41 = puVar45[(longlong)puVar31 + 1];
                      puVar31 = (uint *)((longlong)puVar31 + 1);
                    } while (uVar41 == 0);
                  }
                  else {
                    puVar31 = (uint *)0x0;
                    iVar18 = 0;
                  }
                  uVar26 = (ulonglong)(-uVar41 & uVar41);
                  uVar43 = uVar26 * 2 + 1;
                  lVar27 = 0x3f;
                  if (uVar43 != 0) {
                    for (; uVar43 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  iVar38 = (iVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                  if (iVar35 <= iVar38) {
                    iVar38 = iVar35;
                  }
                }
                if (iVar38 < iVar35) {
                  uVar41 = 0xffffffff;
                  bVar16 = DAT_14c950c29;
                  do {
                    local_248 = CONCAT44(local_248._4_4_,iVar18);
                    lVar27 = *local_258;
                    uVar43 = *(ulonglong *)(lVar27 + (longlong)iVar38 * 0x18);
                    local_230 = CONCAT44(local_230._4_4_,uVar41);
                    local_260 = puVar31;
                    if (((bVar16 & 1) != 0) && (uVar43 != 0)) {
                      local_208 = lVar27;
                      FUN_1456cec3c(uVar43);
                      lVar27 = local_208;
                      bVar16 = DAT_14c950c29;
                    }
                    lVar27 = lVar27 + (longlong)iVar38 * 0x18;
                    uVar41 = ((uint)(uVar43 >> 0x14) & 0xffff ^ (uint)(uVar43 >> 4)) * -0x7a143595;
                    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
                    uVar43 = (longlong)(int)(uVar41 >> 0x10 ^ uVar41) &
                             (longlong)*(int *)(lVar12 + 0x5d0) - 1U;
                    iVar35 = (int)uVar43;
                    *(int *)(lVar27 + 0x14) = iVar35;
                    lVar36 = *(longlong *)(lVar12 + 0x5c8);
                    if (*(longlong *)(lVar12 + 0x5c8) == 0) {
                      lVar36 = local_228;
                    }
                    *(undefined4 *)(lVar27 + 0x10) =
                         *(undefined4 *)
                          (lVar36 + ((longlong)*(int *)(lVar12 + 0x5d0) - 1U & uVar43) * 4);
                    lVar27 = *(longlong *)(lVar12 + 0x5c8);
                    if (*(longlong *)(lVar12 + 0x5c8) == 0) {
                      lVar27 = local_228;
                    }
                    *(int *)(lVar27 + ((longlong)iVar35 & (longlong)*(int *)(lVar12 + 0x5d0) - 1U) *
                                      4) = iVar38;
                    uVar41 = (uint)local_230 & ~(uint)uVar26;
                    puVar45 = *(uint **)(lVar12 + 0x5a8);
                    if (*(uint **)(lVar12 + 0x5a8) == (uint *)0x0) {
                      puVar45 = local_240;
                    }
                    iVar35 = *(int *)(lVar12 + 0x5b0);
                    iVar38 = (int)local_260;
                    lVar27 = (longlong)iVar38;
                    uVar39 = puVar45[lVar27] & uVar41;
                    puVar31 = local_260;
                    iVar18 = (int)local_248;
                    if (uVar39 == 0) {
                      iVar19 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar19 = iVar35 + -1;
                      }
                      iVar19 = iVar19 >> 5;
                      iVar30 = iVar19;
                      if (iVar19 < iVar38) {
                        iVar30 = iVar38;
                      }
                      if (iVar19 <= iVar38) break;
                      lVar36 = 0;
                      while( true ) {
                        iVar18 = iVar18 + 0x20;
                        uVar39 = puVar45[lVar27 + lVar36 + 1];
                        if (uVar39 != 0) break;
                        lVar36 = lVar36 + 1;
                        if (iVar30 - lVar27 == lVar36) goto LAB_1400a7fe9;
                      }
                      uVar41 = 0xffffffff;
                      puVar31 = (uint *)(ulonglong)(iVar38 + (int)lVar36 + 1);
                    }
                    uVar26 = (ulonglong)(-uVar39 & uVar39);
                    uVar43 = uVar26 * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar43 != 0) {
                      for (; uVar43 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    iVar38 = (iVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                  } while (iVar38 < iVar35);
                }
              }
            }
            else {
              local_88 = (uint *)*puVar47;
              if ((DAT_14c950c29 == 1) && (local_88 != (uint *)0x0)) {
                FUN_1456cec3c();
              }
              iVar18 = FUN_1432d82e2(local_258,uVar39);
              if (iVar18 == -1) {
                uVar9 = *(int *)(lVar12 + 0x590) - *(int *)(lVar12 + 0x5bc);
                if (3 < uVar9) {
                  uVar26 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
                  lVar27 = 0x3f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  uVar41 = 1 << ((byte)lVar27 & 0x1f);
                }
                goto LAB_1400a7f7d;
              }
              uVar25 = *(undefined4 *)((longlong)puVar47 + 4);
              uVar26 = puVar47[1];
              uVar6 = *(undefined4 *)((longlong)puVar47 + 0xc);
              puVar15 = (undefined4 *)(*local_258 + (longlong)iVar18 * 0x18);
              *puVar15 = (int)*puVar47;
              puVar15[1] = uVar25;
              puVar15[2] = (int)uVar26;
              puVar15[3] = uVar6;
              FUN_1432d83b2(local_258,iVar35);
            }
LAB_1400a7fe9:
            plVar5[5] = 0;
            puVar31 = (uint *)(ulonglong)((int)local_250 + 1);
            iVar35 = *(int *)(param_2 + 0x360);
            ppuVar11 = local_268;
          }
        }
        uVar29 = uVar29 + 1;
      } while ((int)uVar29 < iVar35);
      if (0 < (int)puVar31) {
        *(int *)(param_2 + 0x420) = *(int *)(param_2 + 0x420) + 1;
        FUN_1409099e8(local_220);
      }
    }
  }
  else {
    puVar31 = local_118;
    if (local_118 == (uint *)0x0) {
      puVar31 = (uint *)&local_128;
    }
    if (0x1f < iStack_110 + 0x1fU) {
      lVar12 = 0;
LAB_1400a7a7e:
      if (*puVar31 == 0xffffffff) goto code_r0x0001400a7a87;
      if (0 < iVar35) {
        uVar29 = ~*puVar31;
        iVar18 = 0;
        if (uVar29 != 0) {
          for (; (uVar29 >> iVar18 & 1) == 0; iVar18 = iVar18 + 1) {
          }
        }
        if ((iVar18 - (int)lVar12 < iStack_110) && (iVar18 + 1 != (int)lVar12)) goto LAB_1400a7ac6;
      }
    }
  }
LAB_1400a86ea:
  *(int *)(param_2 + 0x428) = *(int *)(param_2 + 0x428) + -1;
  if (local_118 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 0x6d8) = *(undefined8 *)(param_2 + 0x270);
LAB_1400a8719:
  local_268 = (undefined8 **)(param_2 + 0x88);
  uVar26 = (ulonglong)*(uint *)(param_2 + 0x90);
  if (0 < (int)*(uint *)(param_2 + 0x90)) {
    local_218 = (longlong *)(param_2 + 0x98);
    puVar31 = (uint *)(param_2 + 0x68);
    local_220 = (longlong *)(param_2 + 0x30);
    uVar43 = 0;
    local_250 = puVar31;
    do {
      uVar29 = (uint)uVar43;
      local_240 = (uint *)CONCAT44(local_240._4_4_,1 << ((byte)uVar43 & 0x1f));
      plVar14 = *(longlong **)(param_2 + 0xa8);
      if (*(longlong **)(param_2 + 0xa8) == (longlong *)0x0) {
        plVar14 = local_218;
      }
      if ((*(uint *)((longlong)plVar14 + (uVar43 >> 5 & 0x7ffffff) * 4) >> (uVar29 & 0x1f) & 1) != 0
         ) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,
                                     (uint)*(ushort *)
                                            (*(longlong *)
                                              (*(longlong *)(param_2 + 0x88) + uVar43 * 8) + 0xe));
        iVar35 = *(int *)(param_2 + 0x80);
        if (iVar35 == 0) {
          uVar26 = 1;
          iVar38 = 0;
          iVar18 = 0;
          uVar40 = 0;
        }
        else {
          puVar45 = *(uint **)(param_2 + 0x78);
          if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
            puVar45 = puVar31;
          }
          uVar41 = *puVar45;
          if (uVar41 == 0) {
            iVar18 = iVar35 + 0x1e;
            if (-1 < iVar35 + -1) {
              iVar18 = iVar35 + -1;
            }
            uVar40 = 0;
            uVar26 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar26 = uVar40;
            }
            iVar38 = 0;
            do {
              if (uVar26 == uVar40) goto LAB_1400a8b9a;
              iVar38 = iVar38 + 0x20;
              uVar41 = puVar45[uVar40 + 1];
              uVar40 = uVar40 + 1;
            } while (uVar41 == 0);
          }
          else {
            iVar38 = 0;
            uVar40 = 0;
          }
          uVar26 = (ulonglong)(-uVar41 & uVar41);
          uVar37 = uVar26 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar18 = (iVar38 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar35 <= iVar18) {
            iVar18 = iVar35;
          }
        }
        if ((iVar18 < iVar35) && ((longlong)iVar18 < (longlong)uVar43)) {
          uVar41 = 0xffffffff;
          local_258 = (longlong *)(uVar43 * 5);
          do {
            puVar45 = (uint *)(longlong)iVar18;
            cVar7 = FUN_1403b8874(*local_220 + (longlong)puVar45 * 0x28,
                                  *local_220 + (longlong)local_258 * 8);
            puVar31 = local_250;
            if (cVar7 != '\0') {
              lVar12 = *(longlong *)((longlong)*local_268 + (longlong)puVar45 * 8);
              uVar8 = *(ushort *)(lVar12 + 0xe);
              if ((int)local_238 <= (int)((uint)*(ushort *)(lVar12 + 0x12) - (uint)uVar8)) {
                local_260 = puVar45;
                if (iVar18 != -1) {
                  uVar26 = *(ulonglong *)((longlong)*local_268 + (longlong)(int)uVar29 * 8);
                  uVar17 = *(ushort *)(uVar26 + 0xe);
                  if ((int)((uint)*(ushort *)(lVar12 + 0x10) - (uint)uVar8) < (int)(uint)uVar17) {
                    lVar12 = FUN_1405625b8(local_210,iVar18);
                    uVar8 = *(ushort *)(lVar12 + 0xe);
                    uVar17 = *(ushort *)(uVar26 + 0xe);
                  }
                  if (uVar17 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    lVar27 = *(longlong *)(uVar26 + 0x18);
                    uVar40 = 0;
                    do {
                      uVar37 = (ulonglong)*(ushort *)(lVar27 + uVar40 * 2);
                      lVar36 = *(longlong *)(param_2 + 0xc0);
                      *(short *)(lVar36 + uVar37 * 8) = (short)iVar18;
                      *(ushort *)(lVar36 + 2 + uVar37 * 8) = uVar8 + (short)uVar40;
                      uVar40 = uVar40 + 1;
                    } while (uVar17 != uVar40);
                    uVar17 = *(ushort *)(uVar26 + 0xe);
                    uVar8 = *(ushort *)(lVar12 + 0xe);
                  }
                  local_258 = *(longlong **)(param_2 + 600);
                  local_238 = (uint *)(ulonglong)uVar17;
                  *(ushort *)(lVar12 + 0xe) = uVar17 + uVar8;
                  local_230 = uVar26;
                  memcpy((void *)((ulonglong)((uint)uVar8 + (uint)uVar8) +
                                 *(longlong *)(lVar12 + 0x18)),*(void **)(uVar26 + 0x18),
                         (ulonglong)((uint)uVar17 + (uint)uVar17));
                  uVar17 = *(ushort *)(lVar12 + 0xc);
                  local_248 = lVar12;
                  if (uVar17 != 0) {
                    lVar12 = *(longlong *)(lVar12 + 0x28);
                    lVar27 = *(longlong *)(local_230 + 0x28);
                    lVar36 = 0;
                    do {
                      if (*(char *)(lVar27 + 0x1c + lVar36) != '\0') {
                        lVar21 = (ulonglong)*(ushort *)(lVar27 + 0x1e + lVar36) * 0x10;
                        puVar44 = (undefined8 *)(local_258[0x23] + lVar21);
                        pvVar28 = (void *)((ulonglong)*(byte *)(lVar12 + 0x1c + lVar36) *
                                           (ulonglong)uVar8 + *(longlong *)(lVar12 + lVar36));
                        if ((~*(byte *)(local_258[0x23] + 10 + lVar21) & 6) == 0) {
                          memmove(pvVar28,*(void **)(lVar27 + lVar36),
                                  (ulonglong)((uint)*(byte *)(puVar44 + 1) * (int)local_238));
                        }
                        else {
                          plVar14 = (longlong *)*puVar44;
                          (**(code **)(*plVar14 + 0x20))
                                    (plVar14,pvVar28,*(void **)(lVar27 + lVar36),local_238);
                        }
                        *(undefined8 *)(lVar27 + lVar36) = 0;
                      }
                      lVar36 = lVar36 + 0x20;
                    } while ((ulonglong)uVar17 * 0x20 != lVar36);
                  }
                  uVar26 = local_230;
                  *(undefined2 *)(local_230 + 0xe) = 0;
                  if (*(longlong *)(local_230 + 0x20) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(uVar26);
                  FUN_14055d61a(local_220,uVar43 & 0xffffffff);
                  FUN_14055d5b2(local_268,uVar43 & 0xffffffff);
                  puVar31 = *(uint **)(param_2 + 0x78);
                  if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
                    puVar31 = local_250;
                  }
                  uVar41 = uVar29 + 0x1f;
                  if (-1 < (int)uVar29) {
                    uVar41 = uVar29;
                  }
                  puVar31[(int)uVar41 >> 5] = puVar31[(int)uVar41 >> 5] & ~(uint)local_240;
                  uVar29 = 1 << ((byte)local_260 & 0x1f);
                  puVar31 = *(uint **)(param_2 + 0x78);
                  if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
                    puVar31 = local_250;
                  }
                  iVar35 = iVar18 + 0x1f;
                  if (-1 < iVar18) {
                    iVar35 = iVar18;
                  }
                  iVar35 = iVar35 >> 5;
                  if (*(ushort *)(local_248 + 0xe) < *(ushort *)(local_248 + 0x12)) {
                    uVar29 = uVar29 | puVar31[iVar35];
                  }
                  else {
                    uVar29 = ~uVar29 & puVar31[iVar35];
                  }
                  puVar31[iVar35] = uVar29;
                  *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
                  *(undefined1 *)(param_2 + 0x289) = 1;
                  puVar31 = local_250;
                }
                break;
              }
            }
            uVar41 = uVar41 & ~(uint)uVar26;
            puVar45 = *(uint **)(param_2 + 0x78);
            if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
              puVar45 = local_250;
            }
            iVar35 = *(int *)(param_2 + 0x80);
            iVar18 = (int)uVar40;
            lVar12 = (longlong)iVar18;
            uVar39 = puVar45[lVar12] & uVar41;
            if (uVar39 == 0) {
              iVar19 = iVar35 + 0x1e;
              if (-1 < iVar35 + -1) {
                iVar19 = iVar35 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar30 = iVar19;
              if (iVar19 < iVar18) {
                iVar30 = iVar18;
              }
              if (iVar19 <= iVar18) break;
              lVar27 = 0;
              while( true ) {
                iVar38 = iVar38 + 0x20;
                uVar39 = puVar45[lVar12 + lVar27 + 1];
                if (uVar39 != 0) break;
                lVar27 = lVar27 + 1;
                if (iVar30 - lVar12 == lVar27) goto LAB_1400a8b9a;
              }
              uVar40 = (ulonglong)(iVar18 + (int)lVar27 + 1);
              uVar41 = 0xffffffff;
            }
            uVar26 = (ulonglong)(-uVar39 & uVar39);
            uVar37 = uVar26 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar19 = (iVar38 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            iVar18 = iVar19;
            if (iVar35 <= iVar19) {
              iVar18 = iVar35;
            }
          } while (iVar19 < iVar35 && (longlong)iVar18 < (longlong)uVar43);
        }
      }
LAB_1400a8b9a:
      uVar43 = uVar43 + 1;
      uVar26 = (ulonglong)*(int *)(param_2 + 0x90);
    } while ((longlong)uVar43 < (longlong)uVar26);
  }
  local_1ec = 0;
  local_1f0 = 0;
  local_118 = (uint *)0x0;
  iStack_110 = 0;
  local_138 = 0;
  uStack_130 = (longlong *)0x0;
  uStack_10c = 0x80;
  uStack_108 = 0xffffffff;
  iStack_104 = 0;
  local_f8 = (ulonglong *)0x0;
  local_f0 = local_f0 & 0xffffffff00000000;
  if (0 < (int)uVar26) {
    lVar27 = param_2 + 0x98;
    lVar12 = param_2 + 0x68;
    local_258 = (longlong *)(param_2 + 0x40);
    do {
      uVar29 = local_1f0;
      lVar36 = *(longlong *)(param_2 + 0xa8);
      if (*(longlong *)(param_2 + 0xa8) == 0) {
        lVar36 = lVar27;
      }
      uVar41 = local_1ec + 0x1f;
      if (-1 < (int)local_1ec) {
        uVar41 = local_1ec;
      }
      if ((*(uint *)(lVar36 + (longlong)((int)uVar41 >> 5) * 4) >> (local_1ec & 0x1f) & 1) != 0) {
        lVar36 = (longlong)*local_268;
        lVar21 = *(longlong *)(lVar36 + (longlong)(int)local_1ec * 8);
        if (*(short *)(lVar21 + 0xe) == 0) {
          FUN_14085836e(local_210,lVar21);
          lVar36 = *(longlong *)(param_2 + 0x78);
          if (*(longlong *)(param_2 + 0x78) == 0) {
            lVar36 = lVar12;
          }
          uVar29 = local_1ec + 0x1f;
          if (-1 < (int)local_1ec) {
            uVar29 = local_1ec;
          }
          bVar16 = (byte)local_1ec & 0x1f;
          puVar31 = (uint *)(lVar36 + (longlong)((int)uVar29 >> 5) * 4);
          *puVar31 = *puVar31 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
        }
        else {
          lVar34 = (longlong)(int)local_1f0;
          uVar41 = local_1ec;
          if (local_1ec != local_1f0) {
            iVar35 = (int)uVar26;
            if (iVar35 <= (int)local_1f0) {
              iVar18 = local_1f0 + 1;
              *(int *)(param_2 + 0x90) = iVar18;
              if ((uint)(*(int *)(param_2 + 0x94) - iVar35) < (uint)(iVar18 - iVar35)) {
                FUN_14055ddfe(local_268);
                iVar18 = *(int *)(param_2 + 0x90);
                lVar36 = *(longlong *)(param_2 + 0x88);
              }
              iVar35 = *(int *)(param_2 + 0xb0);
              if (iVar35 < iVar18) {
                do {
                  *(undefined4 *)(lVar36 + (longlong)iVar35 * 8) = 0xffffffff;
                  iVar18 = *(int *)(param_2 + 0xb8);
                  *(int *)(lVar36 + 4 + (longlong)iVar35 * 8) = iVar18;
                  if (*(int *)(param_2 + 0xbc) != 0) {
                    *(int *)(lVar36 + (longlong)iVar18 * 8) = iVar35;
                  }
                  *(int *)(param_2 + 0xb8) = iVar35;
                  iVar35 = FUN_144a54ea4(lVar27,1);
                  lVar46 = *(longlong *)(param_2 + 0xa8);
                  if (*(longlong *)(param_2 + 0xa8) == 0) {
                    lVar46 = lVar27;
                  }
                  iVar18 = iVar35 + 0x1f;
                  if (-1 < iVar35) {
                    iVar18 = iVar35;
                  }
                  bVar16 = (byte)iVar35 & 0x1f;
                  puVar31 = (uint *)(lVar46 + (longlong)(iVar18 >> 5) * 4);
                  *puVar31 = *puVar31 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
                  iVar35 = *(int *)(param_2 + 0xb0);
                } while (iVar35 < *(int *)(param_2 + 0x90));
              }
            }
            *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
            iVar35 = *(int *)(lVar36 + lVar34 * 8);
            iVar18 = *(int *)(lVar36 + 4 + lVar34 * 8);
            if ((longlong)iVar35 == -1) {
              *(int *)(param_2 + 0xb8) = iVar18;
            }
            else {
              *(int *)(lVar36 + 4 + (longlong)iVar35 * 8) = iVar18;
            }
            if (iVar18 != -1) {
              *(int *)(lVar36 + (longlong)iVar18 * 8) = iVar35;
            }
            lVar36 = *(longlong *)(param_2 + 0xa8);
            if (*(longlong *)(param_2 + 0xa8) == 0) {
              lVar36 = lVar27;
            }
            uVar41 = uVar29 + 0x1f;
            if (-1 < (int)uVar29) {
              uVar41 = uVar29;
            }
            puVar31 = (uint *)(lVar36 + (longlong)((int)uVar41 >> 5) * 4);
            *puVar31 = *puVar31 | 1 << ((byte)uVar29 & 0x1f);
            *(longlong *)(*(longlong *)(param_2 + 0x88) + lVar34 * 8) = lVar21;
            FUN_14055d5b2(local_268,local_1ec);
            uVar29 = local_1f0;
            lVar46 = (longlong)(int)local_1ec;
            lVar36 = *(longlong *)(param_2 + 0x30);
            lVar34 = (longlong)(int)local_1f0;
            iVar35 = *(int *)(param_2 + 0x38);
            lVar21 = lVar36;
            if (iVar35 <= (int)local_1f0) {
              iVar18 = local_1f0 + 1;
              *(int *)(param_2 + 0x38) = iVar18;
              if ((uint)(*(int *)(param_2 + 0x3c) - iVar35) < (uint)(iVar18 - iVar35)) {
                FUN_14055df60(param_2 + 0x30);
                iVar18 = *(int *)(param_2 + 0x38);
                lVar21 = *(longlong *)(param_2 + 0x30);
              }
              iVar35 = *(int *)(param_2 + 0x58);
              if (iVar35 < iVar18) {
                do {
                  *(undefined4 *)(lVar21 + (longlong)iVar35 * 0x28) = 0xffffffff;
                  iVar18 = *(int *)(param_2 + 0x60);
                  *(int *)(lVar21 + 4 + (longlong)iVar35 * 0x28) = iVar18;
                  if (*(int *)(param_2 + 100) != 0) {
                    *(int *)(lVar21 + (longlong)iVar18 * 0x28) = iVar35;
                  }
                  *(int *)(param_2 + 0x60) = iVar35;
                  iVar35 = FUN_144a54ea4(local_258,1);
                  plVar14 = *(longlong **)(param_2 + 0x50);
                  if (*(longlong **)(param_2 + 0x50) == (longlong *)0x0) {
                    plVar14 = local_258;
                  }
                  iVar18 = iVar35 + 0x1f;
                  if (-1 < iVar35) {
                    iVar18 = iVar35;
                  }
                  bVar16 = (byte)iVar35 & 0x1f;
                  puVar31 = (uint *)((longlong)plVar14 + (longlong)(iVar18 >> 5) * 4);
                  *puVar31 = *puVar31 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                  iVar35 = *(int *)(param_2 + 0x58);
                } while (iVar35 < *(int *)(param_2 + 0x38));
              }
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + -1;
            iVar35 = *(int *)(lVar21 + lVar34 * 0x28);
            iVar18 = *(int *)(lVar21 + 4 + lVar34 * 0x28);
            if ((longlong)iVar35 == -1) {
              *(int *)(param_2 + 0x60) = iVar18;
            }
            else {
              *(int *)(lVar21 + 4 + (longlong)iVar35 * 0x28) = iVar18;
            }
            if (iVar18 != -1) {
              *(int *)(lVar21 + (longlong)iVar18 * 0x28) = iVar35;
            }
            plVar14 = *(longlong **)(param_2 + 0x50);
            if (*(longlong **)(param_2 + 0x50) == (longlong *)0x0) {
              plVar14 = local_258;
            }
            uVar41 = uVar29 + 0x1f;
            if (-1 < (int)uVar29) {
              uVar41 = uVar29;
            }
            puVar31 = (uint *)((longlong)plVar14 + (longlong)((int)uVar41 >> 5) * 4);
            *puVar31 = *puVar31 | 1 << ((byte)uVar29 & 0x1f);
            pvVar28 = (void *)(lVar36 + lVar46 * 0x28);
            _Dst = (void *)(*(longlong *)(param_2 + 0x30) + lVar34 * 0x28);
            *(undefined8 *)((longlong)_Dst + 0x20) = 0;
            iVar35 = *(int *)((longlong)pvVar28 + 0x20);
            uVar29 = iVar35 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar29) {
              if (uVar29 < 0x101) {
                uVar29 = 0x100;
              }
              *(uint *)((longlong)_Dst + 0x24) = uVar29;
              FUN_14497ddce(_Dst,0);
              iVar35 = *(int *)((longlong)pvVar28 + 0x20);
            }
            *(int *)((longlong)_Dst + 0x20) = iVar35;
            if (iVar35 != 0) {
              memcpy(_Dst,pvVar28,(ulonglong)(iVar35 + 0x1fU >> 3 & 0xfffffffc));
            }
            FUN_14055d61a(param_2 + 0x30,local_1ec);
            lVar36 = *(longlong *)(param_2 + 0x78);
            if (*(longlong *)(param_2 + 0x78) == 0) {
              lVar36 = lVar12;
            }
            uVar29 = local_1ec + 0x1f;
            if (-1 < (int)local_1ec) {
              uVar29 = local_1ec;
            }
            uVar39 = 1 << ((byte)local_1f0 & 0x1f);
            uVar41 = local_1f0 + 0x1f;
            if (-1 < (int)local_1f0) {
              uVar41 = local_1f0;
            }
            lVar21 = (longlong)((int)uVar41 >> 5);
            local_88 = &local_1ec;
            uStack_80 = &local_1f0;
            if ((*(uint *)(lVar36 + (longlong)((int)uVar29 >> 5) * 4) >> (local_1ec & 0x1f) & 1) ==
                0) {
              uVar39 = ~uVar39 & *(uint *)(lVar36 + lVar21 * 4);
            }
            else {
              uVar39 = uVar39 | *(uint *)(lVar36 + lVar21 * 4);
            }
            *(uint *)(lVar36 + lVar21 * 4) = uVar39;
            lVar36 = *(longlong *)(param_2 + 0x78);
            if (*(longlong *)(param_2 + 0x78) == 0) {
              lVar36 = lVar12;
            }
            uVar29 = local_1ec + 0x1f;
            if (-1 < (int)local_1ec) {
              uVar29 = local_1ec;
            }
            bVar16 = (byte)local_1ec & 0x1f;
            puVar31 = (uint *)(lVar36 + (longlong)((int)uVar29 >> 5) * 4);
            *puVar31 = *puVar31 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            FUN_140263e2a(&local_138,&local_a8,&local_88,0);
            uVar41 = local_1f0;
          }
          local_1f0 = uVar41 + 1;
        }
      }
      local_1ec = local_1ec + 1;
      uVar26 = (ulonglong)*(uint *)(param_2 + 0x90);
    } while ((int)local_1ec < (int)*(uint *)(param_2 + 0x90));
    if (iStack_104 < (int)uStack_130) {
      iVar35 = *(int *)(param_2 + 0xe8);
      if (iVar35 == 0) {
        uVar43 = 1;
        uVar26 = 0;
        iVar18 = 0;
        iVar38 = 0;
      }
      else {
        puVar31 = *(uint **)(param_2 + 0xe0);
        if (*(uint **)(param_2 + 0xe0) == (uint *)0x0) {
          puVar31 = (uint *)(param_2 + 0xd0);
        }
        uVar29 = *puVar31;
        if (uVar29 == 0) {
          iVar18 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar18 = iVar35 + -1;
          }
          uVar26 = 0;
          uVar43 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar43 = uVar26;
          }
          iVar38 = 0;
          do {
            if (uVar43 == uVar26) goto LAB_1400a92df;
            iVar38 = iVar38 + 0x20;
            uVar29 = puVar31[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar26 = 0;
          iVar38 = 0;
        }
        uVar43 = (ulonglong)(-uVar29 & uVar29);
        uVar40 = uVar43 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar18 = (iVar38 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar35 <= iVar18) {
          iVar18 = iVar35;
        }
      }
      if (iVar18 != iVar35) {
        uVar29 = 0xffffffff;
        iVar19 = iVar35;
        do {
          uVar8 = *(ushort *)(*(longlong *)(param_2 + 0xc0) + (longlong)iVar18 * 8);
          if ((uVar8 != 0xffff) && ((int)uStack_130 != iStack_104)) {
            puVar47 = local_f8;
            if (local_f8 == (ulonglong *)0x0) {
              puVar47 = &uStack_100;
            }
            iVar30 = *(int *)((longlong)puVar47 + (ulonglong)((int)local_f0 - 1U & (uint)uVar8) * 4)
            ;
            while (iVar30 != -1) {
              lVar12 = local_138 + (longlong)iVar30 * 0x10;
              if (*(uint *)(local_138 + (longlong)iVar30 * 0x10) == (uint)uVar8) {
                if ((undefined2 *)(lVar12 + 4) != (undefined2 *)0x0 && lVar12 != 0) {
                  *(undefined2 *)(*(longlong *)(param_2 + 0xc0) + (longlong)iVar18 * 8) =
                       *(undefined2 *)(lVar12 + 4);
                  iVar19 = *(int *)(param_2 + 0xe8);
                }
                break;
              }
              iVar30 = *(int *)(lVar12 + 8);
            }
          }
          uVar29 = uVar29 & ~(uint)uVar43;
          puVar31 = *(uint **)(param_2 + 0xe0);
          if (*(uint **)(param_2 + 0xe0) == (uint *)0x0) {
            puVar31 = (uint *)(param_2 + 0xd0);
          }
          iVar18 = (int)uVar26;
          lVar12 = (longlong)iVar18;
          uVar41 = puVar31[lVar12] & uVar29;
          if (uVar41 == 0) {
            iVar30 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar30 = iVar19 + -1;
            }
            iVar30 = iVar30 >> 5;
            iVar38 = iVar38 + 0x20;
            iVar10 = iVar30;
            if (iVar30 < iVar18) {
              iVar10 = iVar18;
            }
            if (iVar18 < iVar30) {
              lVar27 = 0;
              do {
                uVar41 = puVar31[lVar12 + lVar27 + 1];
                if (uVar41 != 0) {
                  uVar26 = (ulonglong)(iVar18 + (int)lVar27 + 1);
                  uVar29 = 0xffffffff;
                  goto LAB_1400a9297;
                }
                iVar38 = iVar38 + 0x20;
                lVar27 = lVar27 + 1;
              } while (iVar10 - lVar12 != lVar27);
              uVar29 = 0xffffffff;
              lVar12 = (longlong)iVar10;
            }
            uVar26 = lVar12 + 1U & 0xffffffff;
            iVar18 = iVar19;
          }
          else {
LAB_1400a9297:
            uVar43 = (ulonglong)(-uVar41 & uVar41);
            uVar40 = uVar43 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar18 = (iVar38 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar19 <= iVar18) {
              iVar18 = iVar19;
            }
          }
        } while (iVar18 != iVar35);
      }
    }
  }
LAB_1400a92df:
  if (local_1f0 != local_1ec) {
    iVar35 = *(int *)(param_2 + 0xb0);
    if (iVar35 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = -1;
      lVar12 = *(longlong *)(param_2 + 0xa8);
      if (*(longlong *)(param_2 + 0xa8) == 0) {
        lVar12 = param_2 + 0x98;
      }
      uVar26 = (ulonglong)(iVar35 + 0x1fU >> 5);
      iVar38 = -0x3e - (iVar35 + 0x1fU & 0xffffffe0);
      uVar29 = 0xffffffff >> (-(char)iVar35 & 0x1fU);
      do {
        bVar48 = uVar26 == 0;
        uVar26 = uVar26 - 1;
        if (bVar48) goto LAB_1400a936a;
        iVar38 = iVar38 + 0x20;
        uVar41 = uVar29 & *(uint *)(lVar12 + uVar26 * 4);
        uVar29 = 0xffffffff;
      } while (uVar41 == 0);
      uVar26 = (ulonglong)uVar41 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar18 = -(((uint)lVar12 ^ 0x3f) + iVar38);
    }
LAB_1400a936a:
    iVar35 = iVar18 + 1;
    iVar38 = *(int *)(param_2 + 0x90);
    if (iVar35 < iVar38) {
      if ((0 < *(int *)(param_2 + 0xbc)) &&
         (uVar26 = (ulonglong)*(uint *)(param_2 + 0xb8), *(uint *)(param_2 + 0xb8) != 0xffffffff)) {
        lVar12 = *(longlong *)(param_2 + 0x88);
        do {
          lVar27 = (longlong)(int)uVar26;
          if (iVar18 < (int)uVar26) {
            iVar38 = *(int *)(lVar12 + lVar27 * 8);
            iVar19 = *(int *)(lVar12 + 4 + lVar27 * 8);
            uVar26 = (ulonglong)iVar19;
            if (uVar26 != 0xffffffffffffffff) {
              *(int *)(lVar12 + uVar26 * 8) = iVar38;
            }
            if (iVar38 == -1) {
              *(int *)(param_2 + 0xb8) = iVar19;
            }
            else {
              *(int *)(lVar12 + 4 + (longlong)iVar38 * 8) = iVar19;
            }
            *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
          }
          else {
            uVar26 = (ulonglong)*(uint *)(lVar12 + 4 + lVar27 * 8);
          }
        } while ((int)uVar26 != -1);
        iVar38 = *(int *)(param_2 + 0x90);
      }
      if (iVar38 != iVar35) {
        *(int *)(param_2 + 0x90) = iVar35;
      }
      *(int *)(param_2 + 0xb0) = iVar35;
      iVar18 = iVar18 + 0x20;
      if (-1 < iVar35) {
        iVar18 = iVar35;
      }
      iVar38 = iVar35;
      if (iVar35 % 0x20 != 0) {
        lVar12 = param_2 + 0x98;
        if (*(longlong *)(param_2 + 0xa8) != 0) {
          lVar12 = *(longlong *)(param_2 + 0xa8);
        }
        bVar16 = -(char)(iVar35 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar18 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
        iVar38 = *(int *)(param_2 + 0x90);
      }
    }
    if (*(int *)(param_2 + 0x94) != iVar38) {
      FUN_140b584e0(local_268);
    }
    iVar35 = *(int *)(param_2 + 0x58);
    if (iVar35 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = -1;
      lVar12 = *(longlong *)(param_2 + 0x50);
      if (*(longlong *)(param_2 + 0x50) == 0) {
        lVar12 = param_2 + 0x40;
      }
      uVar26 = (ulonglong)(iVar35 + 0x1fU >> 5);
      iVar38 = -0x3e - (iVar35 + 0x1fU & 0xffffffe0);
      uVar29 = 0xffffffff >> (-(char)iVar35 & 0x1fU);
      do {
        bVar48 = uVar26 == 0;
        uVar26 = uVar26 - 1;
        if (bVar48) goto LAB_1400a94c2;
        iVar38 = iVar38 + 0x20;
        uVar41 = uVar29 & *(uint *)(lVar12 + uVar26 * 4);
        uVar29 = 0xffffffff;
      } while (uVar41 == 0);
      uVar26 = (ulonglong)uVar41 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar18 = -(((uint)lVar12 ^ 0x3f) + iVar38);
    }
LAB_1400a94c2:
    iVar35 = iVar18 + 1;
    iVar38 = *(int *)(param_2 + 0x38);
    if (iVar35 < iVar38) {
      if ((0 < *(int *)(param_2 + 100)) &&
         (uVar26 = (ulonglong)*(uint *)(param_2 + 0x60), *(uint *)(param_2 + 0x60) != 0xffffffff)) {
        lVar12 = *(longlong *)(param_2 + 0x30);
        do {
          lVar27 = (longlong)(int)uVar26;
          if (iVar18 < (int)uVar26) {
            iVar38 = *(int *)(lVar12 + lVar27 * 0x28);
            iVar19 = *(int *)(lVar12 + 4 + lVar27 * 0x28);
            uVar26 = (ulonglong)iVar19;
            if (uVar26 != 0xffffffffffffffff) {
              *(int *)(lVar12 + uVar26 * 0x28) = iVar38;
            }
            if (iVar38 == -1) {
              *(int *)(param_2 + 0x60) = iVar19;
            }
            else {
              *(int *)(lVar12 + 4 + (longlong)iVar38 * 0x28) = iVar19;
            }
            *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + -1;
          }
          else {
            uVar26 = (ulonglong)*(uint *)(lVar12 + 4 + lVar27 * 0x28);
          }
        } while ((int)uVar26 != -1);
        iVar38 = *(int *)(param_2 + 0x38);
      }
      if (iVar38 != iVar35) {
        *(int *)(param_2 + 0x38) = iVar35;
      }
      *(int *)(param_2 + 0x58) = iVar35;
      iVar18 = iVar18 + 0x20;
      if (-1 < iVar35) {
        iVar18 = iVar35;
      }
      iVar38 = iVar35;
      if (iVar35 % 0x20 != 0) {
        lVar12 = param_2 + 0x40;
        if (*(longlong *)(param_2 + 0x50) != 0) {
          lVar12 = *(longlong *)(param_2 + 0x50);
        }
        bVar16 = -(char)(iVar35 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar18 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
        iVar38 = *(int *)(param_2 + 0x38);
      }
    }
    if (*(int *)(param_2 + 0x3c) != iVar38) {
      FUN_140957390(param_2 + 0x30);
    }
    uVar29 = local_1f0;
    puVar47 = (ulonglong *)(param_2 + 0x68);
    iVar35 = *(int *)(param_2 + 0x80);
    puVar23 = *(ulonglong **)(param_2 + 0x78);
    if (*(ulonglong **)(param_2 + 0x78) == (ulonglong *)0x0) {
      puVar23 = puVar47;
    }
    local_278 = 1;
    FUN_14493566c(puVar23,local_1f0,puVar23,iVar35 + -1);
    iVar18 = *(int *)(param_2 + 0x80);
    iVar35 = uVar29 - iVar35;
    uVar29 = iVar35 + iVar18 + 1;
    *(uint *)(param_2 + 0x80) = uVar29;
    uVar41 = iVar18 + iVar35 + 0x20;
    if (-1 < (int)uVar29) {
      uVar41 = uVar29;
    }
    iVar35 = uVar29 - (uVar41 & 0xffffffe0);
    if (iVar35 != 0) {
      puVar23 = *(ulonglong **)(param_2 + 0x78);
      if (*(ulonglong **)(param_2 + 0x78) == (ulonglong *)0x0) {
        puVar23 = puVar47;
      }
      bVar16 = -(char)iVar35;
      *(uint *)((longlong)puVar23 + (longlong)((int)uVar41 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar23 + (longlong)((int)uVar41 >> 5) * 4) << (bVar16 & 0x1f))
           >> (bVar16 & 0x1f);
      uVar29 = *(uint *)(param_2 + 0x80);
    }
    local_98 = (undefined4 *)0x0;
    uStack_90 = 0;
    uVar41 = uVar29 + 0x1f & 0xffffffe0;
    if (0 < (int)uVar41) {
      uVar29 = 0x80;
      if (0x80 < uVar41) {
        uVar29 = uVar41;
      }
      uStack_90 = (ulonglong)uVar29 << 0x20;
      FUN_1446efbd8(&local_a8,0);
      uVar29 = *(uint *)(param_2 + 0x80);
    }
    uStack_90._0_4_ = uVar29;
    if (uVar29 != 0) {
      puVar23 = *(ulonglong **)(param_2 + 0x78);
      if (*(ulonglong **)(param_2 + 0x78) == (ulonglong *)0x0) {
        puVar23 = puVar47;
      }
      puVar15 = local_98;
      if (local_98 == (undefined4 *)0x0) {
        puVar15 = &local_a8;
      }
      memcpy(puVar15,puVar23,(ulonglong)(uVar29 + 0x1f >> 3 & 0xfffffffc));
    }
    puVar31 = (uint *)*puVar47;
    puVar45 = *(uint **)(param_2 + 0x70);
    local_78 = *(longlong *)(param_2 + 0x78);
    uStack_70 = *(undefined8 *)(param_2 + 0x80);
    *(undefined4 **)(param_2 + 0x78) = local_98;
    *(uint *)(param_2 + 0x80) = (uint)uStack_90;
    *(undefined4 *)(param_2 + 0x84) = uStack_90._4_4_;
    *puVar47 = CONCAT44(uStack_a4,local_a8);
    *(ulonglong *)(param_2 + 0x70) = CONCAT44(uStack_9c,uStack_a0);
    local_88._0_4_ = SUB84(puVar31,0);
    local_88._4_4_ = (undefined4)((ulonglong)puVar31 >> 0x20);
    uStack_80._0_4_ = SUB84(puVar45,0);
    uStack_80._4_4_ = (undefined4)((ulonglong)puVar45 >> 0x20);
    local_a8 = (undefined4)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = (undefined4)uStack_80;
    uStack_9c = uStack_80._4_4_;
    local_98 = (undefined4 *)local_78;
    uStack_90 = uStack_70;
    local_88 = puVar31;
    uStack_80 = puVar45;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar35 = *(int *)(param_2 + 0xe8);
  if (iVar35 == 0) {
    iVar18 = -1;
  }
  else {
    iVar18 = -1;
    lVar12 = *(longlong *)(param_2 + 0xe0);
    if (*(longlong *)(param_2 + 0xe0) == 0) {
      lVar12 = param_2 + 0xd0;
    }
    uVar26 = (ulonglong)(iVar35 + 0x1fU >> 5);
    iVar38 = -0x3e - (iVar35 + 0x1fU & 0xffffffe0);
    uVar29 = 0xffffffff >> (-(char)iVar35 & 0x1fU);
    do {
      bVar48 = uVar26 == 0;
      uVar26 = uVar26 - 1;
      if (bVar48) goto LAB_1400a972f;
      iVar38 = iVar38 + 0x20;
      uVar41 = uVar29 & *(uint *)(lVar12 + uVar26 * 4);
      uVar29 = 0xffffffff;
    } while (uVar41 == 0);
    uVar26 = (ulonglong)uVar41 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar18 = -(((uint)lVar12 ^ 0x3f) + iVar38);
  }
LAB_1400a972f:
  iVar35 = iVar18 + 1;
  iVar38 = *(int *)(param_2 + 200);
  if (iVar35 < iVar38) {
    if ((0 < *(int *)(param_2 + 0xf4)) &&
       (uVar26 = (ulonglong)*(uint *)(param_2 + 0xf0), *(uint *)(param_2 + 0xf0) != 0xffffffff)) {
      lVar12 = *(longlong *)(param_2 + 0xc0);
      do {
        lVar27 = (longlong)(int)uVar26;
        if (iVar18 < (int)uVar26) {
          iVar38 = *(int *)(lVar12 + lVar27 * 8);
          iVar19 = *(int *)(lVar12 + 4 + lVar27 * 8);
          uVar26 = (ulonglong)iVar19;
          if (uVar26 != 0xffffffffffffffff) {
            *(int *)(lVar12 + uVar26 * 8) = iVar38;
          }
          if (iVar38 == -1) {
            *(int *)(param_2 + 0xf0) = iVar19;
          }
          else {
            *(int *)(lVar12 + 4 + (longlong)iVar38 * 8) = iVar19;
          }
          *(int *)(param_2 + 0xf4) = *(int *)(param_2 + 0xf4) + -1;
        }
        else {
          uVar26 = (ulonglong)*(uint *)(lVar12 + 4 + lVar27 * 8);
        }
      } while ((int)uVar26 != -1);
      iVar38 = *(int *)(param_2 + 200);
    }
    if (iVar38 != iVar35) {
      *(int *)(param_2 + 200) = iVar35;
    }
    *(int *)(param_2 + 0xe8) = iVar35;
    iVar18 = iVar18 + 0x20;
    if (-1 < iVar35) {
      iVar18 = iVar35;
    }
    iVar38 = iVar35;
    if (iVar35 % 0x20 != 0) {
      lVar12 = param_2 + 0xd0;
      if (*(longlong *)(param_2 + 0xe0) != 0) {
        lVar12 = *(longlong *)(param_2 + 0xe0);
      }
      bVar16 = -(char)(iVar35 % 0x20);
      *(uint *)(lVar12 + (longlong)(iVar18 >> 5) * 4) =
           (uint)(*(int *)(lVar12 + (longlong)(iVar18 >> 5) * 4) << (bVar16 & 0x1f)) >>
           (bVar16 & 0x1f);
      iVar38 = *(int *)(param_2 + 200);
    }
  }
  if (*(int *)(param_2 + 0xcc) != iVar38) {
    FUN_14095725c(param_2 + 0xc0);
  }
  *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
  *(undefined1 *)(param_2 + 0x289) = 1;
  local_f0 = local_f0 & 0xffffffff00000000;
  if (local_f8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  uVar26 = (ulonglong)uStack_130 >> 0x20;
  uStack_130 = (longlong *)((ulonglong)uStack_130 & 0xffffffff00000000);
  if ((int)uVar26 != 0) {
    FUN_14472eb64(&local_138,0);
  }
  uStack_108 = 0xffffffff;
  iStack_104 = 0;
  iStack_110 = 0;
  if (0x80 < uStack_10c) {
    uStack_10c = 0x80;
    FUN_1446efbd8(&local_128,0);
  }
  if (local_118 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c760ff1 == '\x01') {
    FUN_1405c378c(local_200,local_210);
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  puVar24 = local_1e8;
  if (local_1c8 != (undefined1 *)0x0) {
    puVar24 = local_1c8;
  }
  FUN_144717c65(puVar24,local_1c0 & 0xffffffff);
  if (local_1c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001400a7a87:
  lVar12 = lVar12 + -0x20;
  puVar31 = puVar31 + 1;
  if ((ulonglong)(iStack_110 + 0x1fU & 0xffffffe0) + lVar12 == 0) goto LAB_1400a86ea;
  goto LAB_1400a7a7e;
}



// FUNCTION 1400aa116 FUN_1400aa116 body=256 status=ok
// SIG undefined FUN_1400aa116(void)

void FUN_1400aa116(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 4;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x0001400aa1dd:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x14)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 * 2,0);
    uVar2 = (uint)(uVar3 >> 1);
    if ((int)uVar2 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar2 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar2;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar2 < 5) goto joined_r0x0001400aa1dd;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar2,2);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar2,2);
  return;
}



// FUNCTION 1400aa216 FUN_1400aa216 body=313 status=ok
// SIG undefined FUN_1400aa216(void)

void FUN_1400aa216(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x0001400aa237:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(ushort *)((longlong)param_1 + (longlong)iVar5 * 4 + 2) <=
            *(ushort *)((longlong)param_1 + (longlong)iVar7 * 4 + 2))) {
          iVar5 = iVar7;
        }
        lVar9 = (longlong)iVar2;
        lVar6 = (longlong)iVar5;
        if (*(ushort *)((longlong)param_1 + lVar9 * 4 + 2) <
            *(ushort *)((longlong)param_1 + lVar6 * 4 + 2)) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x0001400aa237;
        }
      }
      bVar10 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(ushort *)((longlong)param_1 + (longlong)iVar5 * 4 + 2) <=
                *(ushort *)((longlong)param_1 + (longlong)iVar2 * 4 + 2))) {
              iVar7 = iVar2;
            }
            lVar6 = (longlong)iVar8;
            lVar9 = (longlong)iVar7;
            if (*(ushort *)((longlong)param_1 + lVar9 * 4 + 2) <=
                *(ushort *)((longlong)param_1 + lVar6 * 4 + 2)) break;
            uVar1 = param_1[lVar6];
            param_1[lVar6] = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 1400aa350 FUN_1400aa350 body=363 status=ok
// SIG undefined FUN_1400aa350(void)

void FUN_1400aa350(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400aa3e6;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1400aa3e6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1400aa4bb FUN_1400aa4bb body=1029 status=ok
// SIG undefined FUN_1400aa4bb(void)

void FUN_1400aa4bb(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18)) {
        iVar1 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 0) {
        uVar18 = iVar1 + 0x1f;
        if (*(int *)(param_3 + 0x1c) < iVar1) {
          if (uVar18 < 0xa0) {
            iVar3 = 0x80;
          }
          else {
            uVar9 = uVar18 >> 5;
            if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
              uVar8 = 4;
              if (4 < uVar9) {
                uVar8 = uVar9;
              }
            }
            else {
              uVar8 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
            }
            uVar13 = FUN_144a3809e(uVar8 << 2,0);
            iVar2 = (int)(uVar13 >> 2);
            iVar3 = -0x20;
            if ((int)uVar9 <= iVar2) {
              iVar3 = iVar2 << 5;
            }
          }
          *(int *)(param_3 + 0x1c) = iVar3;
          FUN_1446efbd8(param_3,*(undefined4 *)(param_3 + 0x18));
        }
        *(int *)(param_3 + 0x18) = iVar1;
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar4 = param_1;
        }
        iVar3 = *(int *)(param_1 + 0x18);
        uVar9 = 0xffffffff >> (-(char)(iVar3 % 0x20) & 0x1fU);
        if (iVar3 % 0x20 < 1) {
          uVar9 = 0xffffffff;
        }
        lVar5 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar5 = param_2;
        }
        iVar2 = *(int *)(param_2 + 0x18);
        uVar8 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
        if (iVar2 % 0x20 < 1) {
          uVar8 = 0xffffffff;
        }
        lVar16 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar16 = param_3;
        }
        if (0 < iVar1) {
          iVar17 = param_4 << 0x1b;
          uVar6 = iVar1 + 0x3e;
          if (-1 < (int)uVar18) {
            uVar6 = uVar18;
          }
          uVar6 = (int)uVar6 >> 5;
          iVar11 = iVar2 + 0x3e;
          if (-1 < iVar2 + 0x1f) {
            iVar11 = iVar2 + 0x1f;
          }
          iVar10 = iVar3 + 0x3e;
          if (-1 < iVar3 + 0x1f) {
            iVar10 = iVar3 + 0x1f;
          }
          uVar18 = 0xffffffff;
          if (iVar2 - 1U < 0x20) {
            uVar18 = uVar8;
          }
          uVar14 = 0xffffffff;
          if (iVar3 - 1U < 0x20) {
            uVar14 = uVar9;
          }
          uVar13 = 1;
          if (1 < (int)uVar6) {
            uVar13 = (ulonglong)uVar6;
          }
          uVar12 = 0;
          do {
            uVar7 = iVar17 >> 0x1f;
            if (((longlong)uVar12 < (longlong)(iVar10 >> 5)) &&
               (uVar7 = *(uint *)(lVar4 + uVar12 * 4), uVar14 != 0xffffffff)) {
              if (iVar17 < 0) {
                uVar7 = uVar7 | ~uVar14;
              }
              else {
                uVar7 = uVar7 & uVar14;
              }
            }
            uVar15 = iVar17 >> 0x1f;
            if (((longlong)uVar12 < (longlong)(iVar11 >> 5)) &&
               (uVar15 = *(uint *)(lVar5 + uVar12 * 4), uVar18 != 0xffffffff)) {
              if (iVar17 < 0) {
                uVar15 = uVar15 | ~uVar18;
              }
              else {
                uVar15 = uVar15 & uVar18;
              }
            }
            uVar18 = 0xffffffff;
            if (uVar6 - 1 == uVar12) {
              uVar18 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
            }
            if (iVar1 % 0x20 < 1) {
              uVar18 = 0xffffffff;
            }
            uVar14 = 0xffffffff;
            if ((iVar10 >> 5) - 2 == uVar12) {
              uVar14 = uVar9;
            }
            *(uint *)(lVar16 + uVar12 * 4) = uVar7 & uVar15 & uVar18;
            bVar19 = (iVar11 >> 5) - 2 == uVar12;
            uVar12 = uVar12 + 1;
            uVar18 = 0xffffffff;
            if (bVar19) {
              uVar18 = uVar8;
            }
          } while (uVar13 != uVar12);
        }
      }
    }
  }
  else {
    uVar18 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar18 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar18) {
      FUN_1456bd906(param_3,uVar18);
      *(uint *)(param_3 + 0x18) = uVar18;
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar4 = param_1;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      uVar9 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
      if (iVar1 % 0x20 < 1) {
        uVar9 = 0xffffffff;
      }
      lVar5 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar5 = param_2;
      }
      iVar3 = *(int *)(param_2 + 0x18);
      uVar8 = 0xffffffff >> (-(char)(iVar3 % 0x20) & 0x1fU);
      if (iVar3 % 0x20 < 1) {
        uVar8 = 0xffffffff;
      }
      lVar16 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar16 = param_3;
      }
      uVar13 = 0;
      uVar6 = uVar18 + 0x1f >> 5;
      iVar2 = iVar3 + 0x3e;
      if (-1 < iVar3 + 0x1f) {
        iVar2 = iVar3 + 0x1f;
      }
      uVar14 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar14 = uVar9;
      }
      iVar17 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar17 = iVar1 + 0x1f;
      }
      uVar7 = 0xffffffff;
      if (iVar3 - 1U < 0x20) {
        uVar7 = uVar8;
      }
      do {
        uVar15 = 0xffffffff;
        if (uVar6 - 1 == uVar13) {
          uVar15 = -(uint)((uVar18 & 0x1f) == 0) | 0xffffffffU >> (-(char)(uVar18 & 0x1f) & 0x1fU);
        }
        *(uint *)(lVar16 + uVar13 * 4) =
             uVar14 & uVar7 & uVar15 & *(uint *)(lVar5 + uVar13 * 4) & *(uint *)(lVar4 + uVar13 * 4)
        ;
        uVar14 = 0xffffffff;
        if ((iVar17 >> 5) - 2 == uVar13) {
          uVar14 = uVar9;
        }
        bVar19 = (iVar2 >> 5) - 2 == uVar13;
        uVar13 = uVar13 + 1;
        uVar7 = 0xffffffff;
        if (bVar19) {
          uVar7 = uVar8;
        }
      } while (uVar6 != uVar13);
    }
  }
  return;
}



// FUNCTION 1400aa8c0 FUN_1400aa8c0 body=3928 status=ok
// SIG undefined FUN_1400aa8c0(void)

void FUN_1400aa8c0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  int *piVar24;
  int *piVar25;
  undefined8 uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  byte local_2a9;
  longlong *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  longlong local_288;
  longlong *local_280;
  int *local_278;
  int local_270;
  undefined8 local_268;
  float fStack_260;
  undefined4 uStack_25c;
  ulonglong uStack_258;
  longlong local_248 [2];
  undefined1 local_238;
  undefined8 local_228;
  int local_220;
  undefined4 *local_218;
  int local_210;
  undefined4 local_208;
  int iStack_204;
  float fStack_200;
  undefined4 local_1fc;
  int iStack_1f8;
  float fStack_1f4;
  int local_1ec;
  longlong local_1e8;
  longlong lStack_1e0;
  ulonglong local_1d8;
  undefined4 local_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  uint local_1b0;
  int iStack_1ac;
  float local_1a8;
  uint local_1a4;
  int iStack_1a0;
  float local_19c;
  undefined8 local_198;
  undefined4 local_190;
  int *local_188;
  undefined8 uStack_180;
  undefined8 local_178 [2];
  longlong *local_168;
  longlong lStack_160;
  ulonglong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  int local_128;
  undefined4 local_124;
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined5 uStack_f8;
  undefined3 local_f3;
  undefined5 uStack_f0;
  undefined1 local_d9;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar18 = *(longlong *)(*param_2 + 0x28);
  local_2a8 = param_4;
  local_280 = param_2;
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar18);
  }
  iVar17 = *(int *)(param_1 + 0xe8);
  local_148 = param_3[4];
  local_168 = (longlong *)*param_3;
  lStack_160 = param_3[1];
  local_158 = param_3[2];
  lStack_150 = param_3[3];
  local_140 = param_3[5];
  local_138 = (undefined4)param_3[6];
  local_130 = 0;
  iVar4 = (int)param_3[8];
  lVar29 = param_3[7];
  local_128 = iVar4;
  if (iVar4 == 0) {
    local_124 = 0;
  }
  else {
    FUN_14753cf4a(&local_130,iVar4,0);
    FUN_14753cfbd(local_130,lVar29,iVar4);
  }
  local_120 = (void *)0x0;
  local_118 = (int)param_3[10];
  lVar29 = (longlong)local_118;
  pvVar5 = (void *)param_3[9];
  if (lVar29 == 0) {
    local_114 = 0;
  }
  else {
    FUN_1456c5740(&local_120,local_118,0);
    memcpy(local_120,pvVar5,lVar29 << 3);
  }
  local_110 = (undefined1)param_3[0xb];
  local_108 = (void *)0x0;
  local_100 = (int)param_3[0xd];
  lVar29 = (longlong)local_100;
  pvVar5 = (void *)param_3[0xc];
  if (lVar29 == 0) {
    local_fc = 0;
  }
  else {
    FUN_1447bda9e(&local_108,local_100,0);
    memcpy(local_108,pvVar5,lVar29 << 2);
  }
  uStack_f0 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x75) >> 0x18);
  uStack_f8 = (undefined5)param_3[0xe];
  local_f3 = (undefined3)((ulonglong)param_3[0xe] >> 0x28);
  lVar29 = FUN_1400a382a(lVar18,*(undefined4 *)(param_1 + 0xe8));
  if (lVar29 != 0) {
    local_288 = lVar29;
    if (*(int *)(param_1 + 0xec) == DAT_14cab2cd4) {
      if ((longlong)*(int *)(lVar29 + 0x90) != 0) {
        lVar28 = *(longlong *)(lVar29 + 0x88);
        local_2a0 = (longlong)*(int *)(lVar29 + 0x90) * 0x18;
        do {
          FUN_147559218(lVar28,&local_d8);
          if (local_d8._1_1_ != '\0') {
            if ((char)local_d8 == '\0') {
              FUN_1456c57a2(param_3,&local_d8,lVar29 + 0x78,param_3[3]);
              local_148 = local_b8;
              local_158 = local_c8;
              lStack_150 = lStack_c0;
              local_168 = local_d8;
              lStack_160 = lStack_d0;
              local_138 = local_a8;
              local_140 = local_b0;
              FUN_1400a241c(&local_130,local_a0);
              FUN_1456c55fa(&local_120,local_90);
              uStack_f8 = local_68;
              local_f3 = uStack_63;
              uStack_f0 = uStack_60;
              goto LAB_1400ab43e;
            }
            break;
          }
          lVar28 = lVar28 + 0x18;
          local_2a0 = local_2a0 + -0x18;
        } while (local_2a0 != 0);
      }
    }
    else {
      lVar29 = FUN_1400d12c6(lVar29,param_1 + 0xec);
      if (lVar29 != 0) {
        uVar15 = FUN_1400a4c08(lVar29);
        FUN_140b56998(lVar18,&local_d8,uVar15);
        iVar17 = (int)local_d8;
        FUN_1456c57a2(param_3,&local_d8,lVar29 + 0x40,*(undefined8 *)(lVar29 + 0x60));
        local_148 = local_b8;
        local_158 = local_c8;
        lStack_150 = lStack_c0;
        local_168 = local_d8;
        lStack_160 = lStack_d0;
        local_138 = local_a8;
        local_140 = local_b0;
        FUN_1400a241c(&local_130,local_a0);
        FUN_1456c55fa(&local_120,local_90);
        uStack_f8 = local_68;
        local_f3 = uStack_63;
        uStack_f0 = uStack_60;
LAB_1400ab43e:
        FUN_144adeafa(&local_d8);
      }
    }
    FUN_14055a9ea(local_178,&local_168);
    local_188 = (int *)0x0;
    uStack_180 = 0;
    local_c8 = local_158;
    local_d8 = local_168;
    lStack_d0 = lStack_160;
    local_198 = *(undefined8 *)(*(longlong *)(lVar18 + 0xa0) + 0x10 + (longlong)iVar17 * 0x30);
    local_190 = *(undefined4 *)(*(longlong *)(lVar18 + 0xa0) + 0x18 + (longlong)iVar17 * 0x30);
    FUN_14009f4ff(&local_268);
    if ((longlong)(int)fStack_260 != 0) {
      piVar24 = (int *)CONCAT44(local_268._4_4_,(undefined4)local_268);
      piVar25 = piVar24 + (longlong)(int)fStack_260 * 2;
      do {
        uVar14 = uStack_180;
        iVar4 = *piVar24;
        bVar3 = *(byte *)(piVar24 + 1);
        lVar29 = (longlong)(int)uStack_180;
        uVar12 = (int)uStack_180 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
        if (uStack_180._4_4_ < uVar12) {
          FUN_147564866(&local_188,uVar14 & 0xffffffff);
        }
        local_188[lVar29 * 3] = iVar4;
        local_188[lVar29 * 3 + 1] = 0;
        *(byte *)(local_188 + lVar29 * 3 + 2) = bVar3 & 1;
        piVar24 = piVar24 + 2;
      } while (piVar24 != piVar25);
    }
    lVar29 = FUN_1400a382a(lVar18,iVar17);
    if (lVar29 != 0) {
      local_2a0 = lVar29 + 0x18;
      FUN_14055b2f2(&local_d8,local_2a0,local_178[0]);
      if (((int)local_c8 != -1) || (local_c8._4_4_ == 0)) {
        do {
          local_268._0_4_ = SUB84(local_d8,0);
          local_268._4_4_ = (uint)((ulonglong)local_d8 >> 0x20);
          fStack_260 = (float)lStack_d0;
          uStack_25c = (undefined4)((ulonglong)lStack_d0 >> 0x20);
          cVar11 = FUN_14055ad78(&local_268,local_178);
          if (cVar11 == '\0') break;
          uStack_258 = local_158;
          local_268._0_4_ = SUB84(local_168,0);
          local_268._4_4_ = (uint)((ulonglong)local_168 >> 0x20);
          fStack_260 = (float)lStack_160;
          uStack_25c = (undefined4)((ulonglong)lStack_160 >> 0x20);
          local_1c8 = CONCAT31(local_1c8._1_3_,2);
          bVar30 = false;
          uStack_1c4 = 0;
          uStack_1c0 = 0;
          uStack_1bc = CONCAT31(uStack_1bc._1_3_,2);
          local_1b8 = 0;
          if ((char)local_d8 == '\x01') {
            uVar22 = 1;
            bVar30 = false;
LAB_1400aab95:
            local_1c8 = CONCAT31(local_1c8._1_3_,uVar22);
            uStack_1c4 = (uint)((ulonglong)local_d8 >> 0x20);
            bVar7 = false;
          }
          else {
            bVar7 = true;
            if (((uint)local_d8 & 0xff) != 2) {
              bVar30 = true;
              uVar22 = 0;
              goto LAB_1400aab95;
            }
          }
          bVar9 = false;
          local_268 = local_168;
          if ((char)lStack_d0 == '\x01') {
            uVar22 = 1;
LAB_1400aabc8:
            uStack_1bc = CONCAT31(uStack_1bc._1_3_,uVar22);
            uVar12 = (uint)((ulonglong)lStack_d0 >> 0x20);
            local_1b8 = (ulonglong)uVar12;
            if (bVar7) {
LAB_1400ab6ec:
              bVar8 = false;
              goto LAB_1400aac41;
            }
            if ((int)uStack_1c4 <= (int)uVar12) {
              bVar8 = false;
              if (uStack_1c4 != uVar12) goto LAB_1400aac41;
              if (!bVar9 && !bVar30) {
                bVar9 = false;
                goto LAB_1400ab6ec;
              }
            }
LAB_1400ab619:
            uVar15 = 0;
            local_1b0 = local_1b0 & 0xffffff00;
            local_1a4 = local_1a4 & 0xffffff00;
            iStack_1ac = 0;
            local_1a8 = 0.0;
            iStack_1a0 = 0;
            local_19c = 0.0;
            uVar26 = 0;
LAB_1400aadc6:
            if ((iStack_1ac <= iStack_1a0) &&
               ((iStack_1ac != iStack_1a0 || (local_1a8 <= local_19c)))) {
              if (iStack_1ac == iStack_1a0) {
                if (((local_1a8 == local_19c) && (!NAN(local_1a8) && !NAN(local_19c))) &&
                   (((char)uVar15 == '\0' || ((char)uVar26 == '\0')))) goto LAB_1400aaff5;
              }
              goto LAB_1400aae15;
            }
          }
          else {
            if (((uint)lStack_d0 & 0xff) != 2) {
              bVar9 = true;
              uVar22 = 0;
              goto LAB_1400aabc8;
            }
            bVar8 = true;
LAB_1400aac41:
            local_268._0_1_ = (char)local_168;
            uStack_25c._0_1_ = (char)((ulonglong)lStack_160 >> 0x20);
            uVar12 = (uint)local_158;
            fVar19 = (float)(local_158 >> 0x20);
            if (((char)local_268 != '\x02') && ((char)uStack_25c != '\x02')) {
              if (((int)uVar12 < (int)local_268._4_4_) ||
                 ((local_268._4_4_ == uVar12 && (fVar19 < fStack_260)))) goto LAB_1400ab619;
              if (local_268._4_4_ == uVar12) {
                if (((fStack_260 == fVar19) && (!NAN(fStack_260) && !NAN(fVar19))) &&
                   (((char)local_268 == '\0' || ((char)uStack_25c == '\0')))) goto LAB_1400ab619;
              }
            }
            puVar23 = (undefined8 *)&uStack_25c;
            if ((((!bVar8) && (puVar23 = (undefined8 *)&uStack_1bc, (char)uStack_25c != '\x02')) &&
                (uVar27 = (uint)local_1b8, (int)uVar12 <= (int)uVar27)) &&
               ((uVar27 != uVar12 || (puVar23 = (undefined8 *)&uStack_1bc, fVar19 <= 0.0)))) {
              puVar23 = (undefined8 *)&uStack_25c;
              if (((int)uVar27 <= (int)uVar12) && ((uVar27 != uVar12 || 0.0 <= fVar19 && (bVar9))))
              {
                puVar23 = (undefined8 *)&uStack_1bc;
              }
            }
            puVar20 = (undefined8 *)&local_1c8;
            if (bVar7) {
              puVar20 = &local_268;
            }
            if (((((char)local_268 != '\x02' && !bVar7) &&
                 (puVar20 = (undefined8 *)&local_1c8, (int)uStack_1c4 <= (int)local_268._4_4_)) &&
                ((uStack_1c4 != local_268._4_4_ || (0.0 <= fStack_260)))) &&
               ((puVar20 = &local_268, (int)local_268._4_4_ <= (int)uStack_1c4 &&
                (uStack_1c4 != local_268._4_4_ || fStack_260 <= 0.0)))) {
              puVar20 = &local_268;
              if (bVar30) {
                puVar20 = (undefined8 *)&local_1c8;
              }
            }
            local_1a8 = *(float *)(puVar20 + 1);
            uVar15 = *puVar20;
            local_1b0 = (uint)uVar15;
            iStack_1ac = (int)((ulonglong)uVar15 >> 0x20);
            uVar26 = *puVar23;
            local_1a4 = (uint)uVar26;
            iStack_1a0 = (int)((ulonglong)uVar26 >> 0x20);
            local_19c = *(float *)(puVar23 + 1);
            if (((char)uVar15 != '\x02') && ((char)uVar26 != '\x02')) goto LAB_1400aadc6;
LAB_1400aae15:
            FUN_1400ab8bc(&local_1c8,local_2a0,local_c8);
            local_1e8 = CONCAT44(uStack_1c4,local_1c8);
            lStack_1e0 = CONCAT44(uStack_1bc,uStack_1c0);
            lVar28 = CONCAT44(uStack_1c4,local_1c8);
            local_1d8 = local_1b8;
            bVar30 = lStack_1e0 == 0;
            uVar14 = local_1b8;
            while (local_268 = local_268, !(bool)(bVar30 & (int)uVar14 == 0)) {
              if ((longlong)*(int *)(lStack_1e0 + 0x1c) == -1) {
                lVar21 = 0;
              }
              else {
                lVar21 = (longlong)
                         *(int *)(*(longlong *)(local_1e8 + 0x40) +
                                 (longlong)*(int *)(lStack_1e0 + 0x1c) * 0xc) * 0x30 +
                         *(longlong *)(local_1e8 + 0x50);
              }
              lVar21 = FUN_1400d12c6(lVar29,(longlong)(int)uVar14 * 0x30 + lVar21);
              if (lVar21 != 0) {
                lVar13 = FUN_1400a4c08(lVar21);
                if (lVar13 != 0) {
                  FUN_140b56998(lVar18,&local_1ec,lVar13);
                  if ((longlong)local_1ec != -1) {
                    lVar13 = (longlong)local_1ec * 0x30;
                    iVar17 = *(int *)(*(longlong *)(lVar18 + 0xa0) + 0x18 + lVar13);
                    if (0 < iVar17) {
                      uVar15 = *(undefined8 *)(*(longlong *)(lVar18 + 0xa0) + 0x10 + lVar13);
                      lVar21 = lVar21 + 0x40;
                      FUN_1456c5fde(lVar21,&local_208,&local_1b0);
                      iVar4 = iStack_204;
                      uVar10 = local_208;
                      if ((((char)local_208 != '\x02') && ((char)local_1fc != '\x02')) &&
                         ((iStack_1f8 < iStack_204 ||
                          ((iStack_204 == iStack_1f8 && (fStack_1f4 < fStack_200)))))) {
                        fStack_260 = fStack_200;
                        local_268 = (longlong *)CONCAT44(iStack_204,local_208);
                        fStack_200 = fStack_1f4;
                        local_208 = local_1fc;
                        iStack_204 = iStack_1f8;
                        local_1fc = uVar10;
                        iStack_1f8 = iVar4;
                        fStack_1f4 = fStack_260;
                      }
                      local_228 = uVar15;
                      local_220 = iVar17;
                      FUN_14009f4ff(&local_218,&local_228,&local_208);
                      lVar13 = (longlong)local_210;
                      if (0 < lVar13) {
                        local_268 = local_248;
                        local_248[0] = 0;
                        fStack_260 = 0.0;
                        uStack_25c = 0;
                        uStack_258 = uStack_258 & 0xfffffffffffffffe;
                        local_238 = 0;
                        local_248[1] = 0;
                        FUN_147552a96(lVar21,&local_58,CONCAT44(local_1a8,iStack_1ac));
                        FUN_14087ad3e(lVar21,&local_268);
                        local_290 = local_218 + lVar13 * 2;
                        puVar16 = local_218;
                        do {
                          bVar3 = *(byte *)(puVar16 + 1);
                          local_d9 = 0xf;
                          local_2b8 = &local_d9;
                          FUN_140cdcd7c(&local_268,&local_58,*puVar16,local_248);
                          if (local_50 == '\x01') {
                            cVar11 = FUN_1400a246c(local_178,&local_58);
                            uVar14 = uStack_180;
                            if (cVar11 != '\0') {
                              local_298 = local_58;
                              lVar21 = (longlong)(int)uStack_180;
                              uVar12 = (int)uStack_180 + 1;
                              uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
                              if (uStack_180._4_4_ < uVar12) {
                                FUN_147564866(&local_188,uVar14 & 0xffffffff);
                              }
                              local_2a9 = local_2a9 & 0xfe | bVar3 & 1;
                              *(undefined8 *)(local_188 + lVar21 * 3) = local_298;
                              *(byte *)(local_188 + lVar21 * 3 + 2) = local_2a9;
                            }
                          }
                          puVar16 = puVar16 + 2;
                        } while (puVar16 != local_290);
                        if (uStack_258 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_248[0] != 0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                  }
                }
              }
              FUN_1400ab81a(&local_1e8);
              uVar14 = local_1d8 & 0xffffffff;
              bVar30 = local_1e8 == lVar28 && lStack_1e0 == 0;
            }
          }
LAB_1400aaff5:
          FUN_14055b6c8(&local_d8,1);
        } while (((int)local_c8 != -1) || (local_c8._4_4_ == 0));
      }
    }
    if ((int)uStack_180 < 1) {
      if ((longlong)*(int *)(local_288 + 0x90) != 0) {
        lVar18 = *(longlong *)(local_288 + 0x88);
        lVar29 = (longlong)*(int *)(local_288 + 0x90) * 0x18;
        do {
          FUN_147559218(lVar18,&local_d8);
          if (local_d8._1_1_ != '\0') {
            if ((char)local_d8 == '\0') {
              local_c8 = local_158;
              local_d8 = local_168;
              lStack_d0 = lStack_160;
              iVar17 = (int)local_2a8[1];
              *(uint *)(local_2a8 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)local_2a8 + 0xc) < iVar17 + 1U) {
                FUN_1400a178c(local_2a8,iVar17);
              }
              lVar18 = *local_2a8;
              *(ulonglong *)(lVar18 + 0x10 + (longlong)iVar17 * 0x18) = local_c8;
              plVar6 = (longlong *)(lVar18 + (longlong)iVar17 * 0x18);
              *plVar6 = (longlong)local_d8;
              plVar6[1] = lStack_d0;
            }
            break;
          }
          lVar18 = lVar18 + 0x18;
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != 0);
      }
    }
    else {
      FUN_1475648fa(local_188);
      if (1 < (longlong)(int)uStack_180) {
        lVar18 = 0;
        piVar24 = local_188;
        do {
          if (*piVar24 == *(int *)((longlong)local_188 + lVar18 + 0xc)) {
            pfVar2 = (float *)((longlong)local_188 + lVar18 + 0x10);
            if (((float)piVar24[1] != *pfVar2) ||
               (piVar25 = piVar24, NAN((float)piVar24[1]) || NAN(*pfVar2))) goto LAB_1400ab686;
          }
          else {
LAB_1400ab686:
            piVar25 = piVar24 + 3;
            if ((int *)((longlong)local_188 + lVar18) != piVar24) {
              piVar24[5] = *(int *)((longlong)local_188 + lVar18 + 0x14);
              *(undefined8 *)piVar25 = *(undefined8 *)((longlong)local_188 + lVar18 + 0xc);
            }
          }
          lVar18 = lVar18 + 0xc;
          piVar24 = piVar25;
        } while ((longlong)(int)uStack_180 * 0xc + -0xc != lVar18);
        if ((int)((ulonglong)((longlong)piVar25 + (0xc - (longlong)local_188)) >> 2) * -0x55555555 <
            (int)uStack_180) {
          FUN_147552bbc(&local_188);
        }
      }
      local_c8 = local_158;
      local_d8 = local_168;
      lStack_d0 = lStack_160;
      local_278 = local_188;
      local_270 = (int)uStack_180;
      FUN_1475525f3(&local_278,&local_d8,local_2a8);
    }
    if (local_188 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_120 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_130,local_128);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)local_280[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar24 = (int *)((longlong)plVar6 + 0xc);
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ab81a FUN_1400ab81a body=161 status=ok
// SIG undefined FUN_1400ab81a(void)

void FUN_1400ab81a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  lVar1 = param_1[1];
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar1 + 0x1c) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x40) + 4 + (longlong)*(int *)(lVar1 + 0x1c) * 0xc);
    }
    if ((-1 < iVar3) && (iVar3 < iVar4)) break;
    if ((*(int *)(lVar1 + 0x10) == -1) && (*(int *)(lVar1 + 0x14) != 0)) {
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    lVar2 = *param_1;
    iVar3 = (int)*(longlong *)(lVar1 + 0x10);
    if (iVar3 != -1) {
      lVar2 = (*(longlong *)(lVar1 + 0x10) >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar3 * 0xc) * 0x20 +
              *(longlong *)(lVar2 + 0x30);
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
    lVar1 = lVar2;
  }
  return;
}



// FUNCTION 1400ab8bc FUN_1400ab8bc body=241 status=ok
// SIG undefined FUN_1400ab8bc(void)

void FUN_1400ab8bc(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  if (param_3 >> 0x20 == 0 || (param_3 & 0xffffffff) != 0xffffffff) {
    lVar3 = param_2;
    if ((int)param_3 != -1) {
      lVar3 = ((longlong)param_3 >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) *
              0x20 + *(longlong *)(param_2 + 0x30);
    }
    param_1[1] = lVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    while( true ) {
      if ((lVar3 == 0) ||
         (((longlong)*(int *)(lVar3 + 0x1c) != -1 &&
          (0 < *(int *)(*(longlong *)(param_2 + 0x40) + 4 + (longlong)*(int *)(lVar3 + 0x1c) * 0xc))
          ))) {
        return;
      }
      if ((*(int *)(lVar3 + 0x10) == -1) && (*(int *)(lVar3 + 0x14) != 0)) break;
      plVar1 = (longlong *)(lVar3 + 0x10);
      iVar2 = (int)*plVar1;
      lVar3 = param_2;
      if (iVar2 != -1) {
        lVar3 = (*plVar1 >> 0x20) * 0x20 +
                (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 0xc) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
      param_1[1] = lVar3;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1400ab9ae FUN_1400ab9ae body=114 status=ok
// SIG undefined FUN_1400ab9ae(void)

void FUN_1400ab9ae(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_20 = 2;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1400aba36();
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aba36 FUN_1400aba36 body=202 status=ok
// SIG undefined FUN_1400aba36(void)

void FUN_1400aba36(longlong param_1,undefined2 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [36];
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  local_34 = param_2;
  lVar3 = FUN_1400ac1ae(param_1,param_2);
  lVar4 = lVar3 + 0x28;
  if ((char)param_4[1] == '\x01') {
    lVar4 = lVar3;
  }
  puVar5 = (undefined2 *)*param_3;
  puVar2 = (undefined2 *)param_3[1];
  if (puVar5 != puVar2) {
    do {
      local_32 = *puVar5;
      FUN_1400abb02(lVar4,&local_32);
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
  }
  if (*param_4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x20);
    *(uint *)(lVar4 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar4 + 0x24) < iVar1 + 1U) {
      FUN_1456c946e((longlong *)(lVar4 + 0x18),iVar1);
    }
    *(longlong *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar1 * 8) = *param_4;
    *param_4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400abb02 FUN_1400abb02 body=122 status=ok
// SIG undefined FUN_1400abb02(void)

ulonglong FUN_1400abb02(longlong param_1,short *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 2;
    uVar4 = 0;
    do {
      if (*(short *)(lVar3 + uVar4 * 2) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_1400abb59;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -2;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1400ac6bc(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(short *)(param_1 + uVar5 * 2) = *param_2;
LAB_1400abb59:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1400abb7c FUN_1400abb7c body=125 status=ok
// SIG undefined FUN_1400abb7c(void)

void FUN_1400abb7c(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((longlong)param_2 + 0x20) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < (int)uVar2 || 0x100 < *(int *)((longlong)param_1 + 0x24))
  {
    uVar3 = 0x100;
    if (0x100 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar3;
    FUN_14497ddce(param_1,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    memcpy(param_1,param_2,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 1400abbfa FUN_1400abbfa body=177 status=ok
// SIG undefined FUN_1400abbfa(void)

undefined2 * FUN_1400abbfa(longlong param_1,undefined2 *param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined7 local_38;
  undefined1 uStack_31;
  undefined2 uStack_30;
  byte bStack_2e;
  undefined2 local_24;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bStack_2e = param_4 * '\x04' & 0x30 | param_4 * '\b' & 8 | 7;
  uStack_30 = 0;
  local_38 = 0;
  uStack_31 = 0;
  FUN_14179cdc4(param_1);
  if ((param_4 & 2) != 0) {
    local_24 = *param_2;
    local_22 = local_24;
    FUN_1400abd44(param_1 + 0x10);
  }
  puVar1 = (undefined8 *)CONCAT17(uStack_31,local_38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400abcac FUN_1400abcac body=150 status=ok
// SIG undefined FUN_1400abcac(void)

void FUN_1400abcac(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [36];
  undefined2 local_24;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = param_2;
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    puVar2 = (undefined8 *)*param_2;
  }
  local_22 = *(undefined2 *)(puVar2 + 1);
  local_24 = *(undefined2 *)((longlong)puVar2 + 10);
  FUN_1400abd44(param_1 + 2);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456c90b0(param_1,iVar1);
  }
  FUN_1400abe46((longlong)iVar1 * 0x48 + *param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400abd44 FUN_1400abd44 body=120 status=ok
// SIG undefined FUN_1400abd44(void)

longlong FUN_1400abd44(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400abdbe();
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_1400abeac(param_1,&local_24,&local_38,0);
    lVar1 = *param_1 + (longlong)local_24 * 0xc + 2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400abdbe FUN_1400abdbe body=136 status=ok
// SIG undefined FUN_1400abdbe(void)

longlong FUN_1400abdbe(longlong *param_1,ushort *param_2,short *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[9] == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = *param_2;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & (uint)uVar1) * 4);
    do {
      if (iVar4 == -1) {
        return 0;
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar3 + 4 + lVar6 * 0xc);
    } while (*(ushort *)(lVar3 + lVar6 * 0xc) != uVar1);
    sVar2 = *(short *)(lVar3 + lVar6 * 0xc + 2);
    while (sVar2 != *param_3) {
      do {
        if (iVar4 == -1) {
          return 0;
        }
        lVar6 = (longlong)iVar4;
        iVar4 = *(int *)(lVar3 + 4 + lVar6 * 0xc);
      } while (*(ushort *)(lVar3 + lVar6 * 0xc) != uVar1);
      sVar2 = *(short *)(lVar3 + lVar6 * 0xc + 2);
    }
    lVar3 = lVar3 + lVar6 * 0xc + 2;
  }
  return lVar3;
}



// FUNCTION 1400abe46 FUN_1400abe46 body=101 status=ok
// SIG undefined FUN_1400abe46(void)

undefined8 * FUN_1400abe46(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc | 2;
  FUN_140fa5276();
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    bVar1 = *(byte *)(param_2 + 8);
    *(byte *)(param_2 + 8) = bVar1 & 0xfe;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
  }
  return param_1;
}



// FUNCTION 1400abeac FUN_1400abeac body=283 status=ok
// SIG undefined FUN_1400abeac(void)

undefined4 *
FUN_1400abeac(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  ushort *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400abfc8(param_1,local_40);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_38 = uVar1;
  local_38[1] = *puVar2;
  local_38[2] = 0xffff;
  local_38[3] = 0xffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  if (uVar5 < 4) {
    iVar6 = 1;
  }
  else {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
    *(uint *)(local_38 + 4) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 2) =
         *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1400ad230(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400abfc8 FUN_1400abfc8 body=485 status=ok
// SIG undefined FUN_1400abfc8(void)

int * FUN_1400abfc8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447cc1b4(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1400ac1ae FUN_1400ac1ae body=973 status=ok
// SIG undefined FUN_1400ac1ae(void)

longlong FUN_1400ac1ae(longlong *param_1,uint param_2,short *param_3)

{
  uint *puVar1;
  short *_Src;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = (int)param_1[1];
  iVar14 = *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != iVar14) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar7 = *param_1 + (longlong)iVar4 * 0x60;
        if (*(short *)(*param_1 + (longlong)iVar4 * 0x60) == *param_3) {
          if (lVar7 != 0) goto LAB_1400ac412;
          break;
        }
        iVar4 = *(int *)(lVar7 + 0x58);
      } while (iVar4 != -1);
    }
  }
  if (iVar14 == 0) {
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14488f93c(param_1,iVar15);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar4 = iVar14 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar10 = iVar14 + 1;
    iVar13 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar13 = iVar14;
    }
    if (iVar13 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar4 = iVar14;
        }
        else {
          uVar5 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar5) {
              uVar9 = uVar5;
            }
          }
          else {
            uVar9 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar10 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar6,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar6;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar7 = (longlong)iVar15;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar14 + -1;
    if (iVar14 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x60) = 0xffffffff;
    }
  }
  iVar14 = 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar4 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar4 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  lVar3 = *param_1;
  lVar7 = lVar7 * 0x60;
  _Src = (short *)(lVar3 + lVar7);
  *(short *)(lVar3 + lVar7) = *param_3;
  *(undefined2 *)(lVar3 + 8 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0x100000000;
  *(undefined8 *)(lVar3 + 0x38 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar7) = 0x100000000;
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined2 *)(lVar3 + 0x30 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x48 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_140fa52f1(0,0);
  FUN_140fa52f1(0,0);
  *(undefined4 *)(lVar3 + 0x58 + lVar7) = 0xffffffff;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar5 != 0) && (uVar5 != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar4 * 0x60);
        if (*(short *)(*param_1 + (longlong)iVar4 * 0x60) == *_Src) {
          FUN_140fa52b4((longlong)_Dst + 0x30);
          FUN_140fa52b4((longlong)_Dst + 8);
          memmove(_Dst,_Src,0x58);
          FUN_1475808d2(param_1,iVar15);
          goto LAB_1400ac3ee;
        }
        iVar4 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar5) {
    uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar14 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)(_Src + 0x2e) = param_2;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x2c) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    FUN_1400b0452(param_1);
  }
LAB_1400ac3ee:
  lVar7 = *param_1 + (longlong)iVar15 * 0x60;
LAB_1400ac412:
  return lVar7 + 8;
}



// FUNCTION 1400ac57c FUN_1400ac57c body=319 status=ok
// SIG undefined FUN_1400ac57c(void)

undefined2 *
FUN_1400ac57c(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x808;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a475980;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a4759b0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ac6bc FUN_1400ac6bc body=521 status=ok
// SIG undefined FUN_1400ac6bc(void)

void FUN_1400ac6bc(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x0001400ac849:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar7 = (longlong)(int)uVar6;
    }
    else {
      lVar7 = (longlong)(int)uVar3 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1400ac74c;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1400ac74c:
    uVar8 = uVar8 >> 1;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar6 < 2) goto joined_r0x0001400ac849;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar8,2);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar8,2);
  return;
}



// FUNCTION 1400ac8c6 FUN_1400ac8c6 body=335 status=ok
// SIG undefined FUN_1400ac8c6(void)

undefined2 *
FUN_1400ac8c6(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x808;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a475ad0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a475aa0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475b00;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aca16 FUN_1400aca16 body=251 status=ok
// SIG undefined FUN_1400aca16(void)

void FUN_1400aca16(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_58 [38];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  uVar3 = *(int *)(param_2 + 0x20) + 0x1f;
  uVar6 = (ulonglong)(uVar3 >> 5);
  uVar7 = uVar6;
  if (0x1f < uVar3) {
    uVar9 = 0;
    do {
      uVar7 = (ulonglong)((uint)uVar7 ^ *(uint *)(param_2 + uVar9 * 4));
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  uVar4 = FUN_144a78877(uVar7,*(undefined4 *)(param_2 + 0x28));
  lVar5 = FUN_1456c8c9a(param_1 + 0x50,uVar4,param_2);
  lVar8 = lVar5 + 0x28;
  if ((char)param_4[1] == '\x01') {
    lVar8 = lVar5;
  }
  puVar10 = (undefined2 *)*param_3;
  puVar2 = (undefined2 *)param_3[1];
  if (puVar10 != puVar2) {
    do {
      local_32 = *puVar10;
      FUN_1400abb02(lVar8,&local_32);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
  }
  if (*param_4 != 0) {
    iVar1 = *(int *)(lVar8 + 0x20);
    *(uint *)(lVar8 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar8 + 0x24) < iVar1 + 1U) {
      FUN_1456c946e((longlong *)(lVar8 + 0x18),iVar1);
    }
    *(longlong *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar1 * 8) = *param_4;
    *param_4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400acb12 FUN_1400acb12 body=168 status=ok
// SIG undefined FUN_1400acb12(void)

int FUN_1400acb12(longlong *param_1,uint param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      iVar1 = *(int *)((longlong)param_3 + 0x20);
      iVar2 = *(int *)((longlong)param_3 + 0x28);
      do {
        lVar4 = (longlong)iVar7 * 0x88;
        if (*(int *)(lVar3 + 0x20 + lVar4) == iVar1) {
          iVar5 = memcmp((void *)(lVar3 + lVar4),param_3,
                         (ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
          if ((iVar5 == 0) && (*(int *)(lVar3 + lVar4 + 0x28) == iVar2)) {
            return iVar7;
          }
        }
        iVar7 = *(int *)(lVar3 + 0x80 + lVar4);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 1400acbba FUN_1400acbba body=335 status=ok
// SIG undefined FUN_1400acbba(void)

undefined2 *
FUN_1400acbba(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x860;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 2;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a474e80;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a474e50;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a474eb0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400acd0a FUN_1400acd0a body=340 status=ok
// SIG undefined FUN_1400acd0a(void)

undefined2 * FUN_1400acd0a(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474d00;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474cd0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474d30;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ace60 FUN_1400ace60 body=319 status=ok
// SIG undefined FUN_1400ace60(void)

undefined2 *
FUN_1400ace60(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x404;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4759d0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475a00;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400acfa0 FUN_1400acfa0 body=319 status=ok
// SIG undefined FUN_1400acfa0(void)

undefined2 *
FUN_1400acfa0(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x101;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a475930;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475960;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad0e0 FUN_1400ad0e0 body=335 status=ok
// SIG undefined FUN_1400ad0e0(void)

undefined2 *
FUN_1400ad0e0(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x410;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a474a30;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a474a00;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a474a60;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad230 FUN_1400ad230 body=534 status=ok
// SIG undefined FUN_1400ad230(void)

void FUN_1400ad230(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8;
        uVar5 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar13 + lVar12 * 0xc);
        *(uint *)(lVar13 + 8 + lVar12 * 0xc) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 4 + lVar12 * 0xc) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_1400ad401;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_1400ad401:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad448 FUN_1400ad448 body=319 status=ok
// SIG undefined FUN_1400ad448(void)

undefined2 *
FUN_1400ad448(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (undefined8 *)0x0;
  local_78 = 0x101;
  lVar1 = *param_4;
  local_76 = (*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a4758e0;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82,&local_80);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475910;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad588 FUN_1400ad588 body=324 status=ok
// SIG undefined FUN_1400ad588(void)

undefined2 * FUN_1400ad588(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x202;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474f50;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a,&local_78);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474f80;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad6ce FUN_1400ad6ce body=329 status=ok
// SIG undefined FUN_1400ad6ce(void)

undefined2 * FUN_1400ad6ce(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x404;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474690;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474660;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4746c0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad818 FUN_1400ad818 body=329 status=ok
// SIG undefined FUN_1400ad818(void)

undefined2 * FUN_1400ad818(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x810;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474b00;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474ad0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474b30;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ad962 FUN_1400ad962 body=335 status=ok
// SIG undefined FUN_1400ad962(void)

undefined2 *
FUN_1400ad962(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  char local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x810;
  lVar1 = *param_4;
  local_76 = ((*(byte *)(param_4 + 1) & 0xc) << 2 | *(byte *)(param_4 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6) + 1;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a475a50;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a475a20;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_4 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a475a80;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400adab2 FUN_1400adab2 body=340 status=ok
// SIG undefined FUN_1400adab2(void)

undefined2 * FUN_1400adab2(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x408;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474810;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4747e0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474840;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400adc08 FUN_1400adc08 body=340 status=ok
// SIG undefined FUN_1400adc08(void)

undefined2 * FUN_1400adc08(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x204;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4750d0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4750a0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475100;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400add5e FUN_1400add5e body=340 status=ok
// SIG undefined FUN_1400add5e(void)

undefined2 * FUN_1400add5e(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x408;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475520;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4754f0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475550;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400adeb4 FUN_1400adeb4 body=419 status=ok
// SIG undefined FUN_1400adeb4(void)

void FUN_1400adeb4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0xc);
        *(uint *)(lVar2 + 8 + lVar5 * 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1400ae058 FUN_1400ae058 body=495 status=ok
// SIG undefined FUN_1400ae058(void)

void FUN_1400ae058(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  uVar5 = local_60;
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar12 != uVar10);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar11 = local_60._4_4_;
      local_60 = uVar5;
      do {
        lVar3 = *local_78;
        lVar4 = (longlong)iVar11 * 0x88;
        lVar2 = lVar3 + lVar4;
        uVar12 = *(int *)(lVar3 + 0x20 + lVar4) + 0x1f;
        uVar7 = (ulonglong)(uVar12 >> 5);
        uVar8 = uVar7;
        if (0x1f < uVar12) {
          uVar13 = 0;
          do {
            uVar8 = (ulonglong)((uint)uVar8 ^ *(uint *)(lVar2 + uVar13 * 4));
            uVar13 = uVar13 + 1;
          } while (uVar7 != uVar13);
        }
        iVar6 = FUN_144a78877(uVar8,*(undefined4 *)(lVar3 + 0x28 + lVar4));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x84) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x80) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar11 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ae248 FUN_1400ae248 body=269 status=ok
// SIG undefined FUN_1400ae248(void)

undefined2 * FUN_1400ae248(undefined2 *param_1,longlong param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x808;
  local_6e = (*(byte *)(param_2 + 8) & 0xc) << 2 | *(byte *)(param_2 + 8) * '\b' & 8 | 7;
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 8) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474960;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar1 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar1 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar1)(ppppuVar1,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae356 FUN_1400ae356 body=324 status=ok
// SIG undefined FUN_1400ae356(void)

undefined2 * FUN_1400ae356(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474a80;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a,&local_78);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474ab0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae49c FUN_1400ae49c body=324 status=ok
// SIG undefined FUN_1400ae49c(void)

undefined2 * FUN_1400ae49c(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x202;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 7;
  if (lVar1 != 0) {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475120;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a,&local_78);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475150;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae5e2 FUN_1400ae5e2 body=329 status=ok
// SIG undefined FUN_1400ae5e2(void)

undefined2 * FUN_1400ae5e2(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x408;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474910;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4748e0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474940;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae72c FUN_1400ae72c body=329 status=ok
// SIG undefined FUN_1400ae72c(void)

undefined2 * FUN_1400ae72c(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x414;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x46;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4749b0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474980;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4749e0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae876 FUN_1400ae876 body=329 status=ok
// SIG undefined FUN_1400ae876(void)

undefined2 * FUN_1400ae876(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474f00;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474ed0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474f30;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ae9c0 FUN_1400ae9c0 body=329 status=ok
// SIG undefined FUN_1400ae9c0(void)

undefined2 * FUN_1400ae9c0(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x810;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475320;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4752f0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475350;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aeb0a FUN_1400aeb0a body=329 status=ok
// SIG undefined FUN_1400aeb0a(void)

undefined2 * FUN_1400aeb0a(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x820;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x42;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4753a0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475370;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4753d0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aec54 FUN_1400aec54 body=329 status=ok
// SIG undefined FUN_1400aec54(void)

undefined2 * FUN_1400aec54(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 | 0x43;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4754a0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475470;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4754d0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aed9e FUN_1400aed9e body=338 status=ok
// SIG undefined FUN_1400aed9e(void)

undefined2 * FUN_1400aed9e(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x810;
  lVar1 = *param_2;
  local_6e = (lVar1 != 0) << 6 |
             (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474fd0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474fa0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475000;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400aeef2 FUN_1400aeef2 body=340 status=ok
// SIG undefined FUN_1400aeef2(void)

undefined2 * FUN_1400aeef2(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x202;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474610;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4745e0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474640;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af048 FUN_1400af048 body=340 status=ok
// SIG undefined FUN_1400af048(void)

undefined2 * FUN_1400af048(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x204;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474710;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4746e0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474740;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af19e FUN_1400af19e body=340 status=ok
// SIG undefined FUN_1400af19e(void)

undefined2 * FUN_1400af19e(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x204;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474790;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474760;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4747c0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af2f4 FUN_1400af2f4 body=340 status=ok
// SIG undefined FUN_1400af2f4(void)

undefined2 * FUN_1400af2f4(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x40c;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474890;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474860;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4748c0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af44a FUN_1400af44a body=340 status=ok
// SIG undefined FUN_1400af44a(void)

undefined2 * FUN_1400af44a(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474b80;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474b50;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474bb0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af5a0 FUN_1400af5a0 body=340 status=ok
// SIG undefined FUN_1400af5a0(void)

undefined2 * FUN_1400af5a0(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474c00;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474bd0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474c30;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af6f6 FUN_1400af6f6 body=340 status=ok
// SIG undefined FUN_1400af6f6(void)

undefined2 * FUN_1400af6f6(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474c80;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474c50;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474cb0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af84c FUN_1400af84c body=340 status=ok
// SIG undefined FUN_1400af84c(void)

undefined2 * FUN_1400af84c(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474d80;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474d50;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474db0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400af9a2 FUN_1400af9a2 body=340 status=ok
// SIG undefined FUN_1400af9a2(void)

undefined2 * FUN_1400af9a2(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a474e00;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a474dd0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a474e30;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400afaf8 FUN_1400afaf8 body=340 status=ok
// SIG undefined FUN_1400afaf8(void)

undefined2 * FUN_1400afaf8(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 2;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475050;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475020;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475080;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400afc4e FUN_1400afc4e body=340 status=ok
// SIG undefined FUN_1400afc4e(void)

undefined2 * FUN_1400afc4e(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x202;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4751a0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475170;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4751d0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400afda4 FUN_1400afda4 body=340 status=ok
// SIG undefined FUN_1400afda4(void)

undefined2 * FUN_1400afda4(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x202;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475220;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4751f0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475250;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400afefa FUN_1400afefa body=340 status=ok
// SIG undefined FUN_1400afefa(void)

undefined2 * FUN_1400afefa(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  char local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x810;
  lVar1 = *param_2;
  local_6e = ((*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6) + 1;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4752a0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475270;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4752d0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b0050 FUN_1400b0050 body=340 status=ok
// SIG undefined FUN_1400b0050(void)

undefined2 * FUN_1400b0050(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x101;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475420;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4753f0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475450;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b01a6 FUN_1400b01a6 body=340 status=ok
// SIG undefined FUN_1400b01a6(void)

undefined2 * FUN_1400b01a6(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x808;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a4755a0;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a475570;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a4755d0;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b02fc FUN_1400b02fc body=340 status=ok
// SIG undefined FUN_1400b02fc(void)

undefined2 * FUN_1400b02fc(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [46];
  undefined2 local_7a;
  undefined8 *local_78;
  undefined2 local_70;
  byte local_6e;
  undefined ***local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0x101;
  lVar1 = *param_2;
  local_6e = (*(byte *)(param_2 + 1) & 0xc) << 2 | *(byte *)(param_2 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = &PTR_FUN_14a475620;
  }
  else {
    local_78 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_78 = &PTR_FUN_14a4755f0;
    local_78[1] = lVar1;
  }
  FUN_14179cdc4(&DAT_14cab29b8,&local_7a);
  *param_1 = local_7a;
  if ((*(byte *)(param_2 + 1) & 2) != 0) {
    local_28 = 0xff;
    local_68[0] = (undefined ***)&PTR_FUN_14a475650;
    FUN_1400abcac(&DAT_14cab29b8,local_68);
    if ((local_28 & 1) != 0) {
      ppppuVar2 = local_68;
      if ((local_28 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_28 & 2) == 0) {
        FUN_1400020a8(local_68[0]);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b0452 FUN_1400b0452 body=538 status=ok
// SIG undefined FUN_1400b0452(void)

void FUN_1400b0452(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8 * 0x60;
        uVar5 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar13 + lVar12);
        *(uint *)(lVar13 + 0x5c + lVar12) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x58 + lVar12) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_1400b0627;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_1400b0627:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b066e FUN_1400b066e body=27 status=ok
// SIG undefined FUN_1400b066e(void)

void FUN_1400b066e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_1400b068a(param_2 + 8,param_3,param_1);
    return;
  }
  return;
}



// FUNCTION 1400b068a FUN_1400b068a body=144 status=ok
// SIG undefined FUN_1400b068a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b068a(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 1) != '\0') && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)
     ) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  uVar2 = FUN_1400b071a(&DAT_14c9a0ea0,param_2,param_3 + 0xb6);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 1400b071a FUN_1400b071a body=90 status=ok
// SIG undefined FUN_1400b071a(void)

longlong FUN_1400b071a(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  lVar2 = FUN_1400b0774(param_1);
  uVar1 = *param_3;
  FUN_1447a97f4(lVar2,param_2);
  *(undefined2 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  return lVar2;
}



// FUNCTION 1400b0774 FUN_1400b0774 body=84 status=ok
// SIG undefined FUN_1400b0774(void)

void FUN_1400b0774(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x700,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 7;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1400b07c8 FUN_1400b07c8 body=469 status=ok
// SIG undefined FUN_1400b07c8(void)

void FUN_1400b07c8(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400b08f8:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400b0935:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400b0832;
LAB_1400b0827:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400b0832:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001400b085f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400b08b5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400b0935;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400b08f8;
code_r0x0001400b085f:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400b08b5;
    }
  }
  goto LAB_1400b0827;
}



// FUNCTION 1400b099e FUN_1400b099e body=469 status=ok
// SIG undefined FUN_1400b099e(void)

void FUN_1400b099e(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400b0ace:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400b0b0b:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400b0a08;
LAB_1400b09fd:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400b0a08:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001400b0a35;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400b0a8b:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400b0b0b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400b0ace;
code_r0x0001400b0a35:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400b0a8b;
    }
  }
  goto LAB_1400b09fd;
}



// FUNCTION 1400b0b74 FUN_1400b0b74 body=22 status=ok
// SIG undefined FUN_1400b0b74(void)

undefined8 FUN_1400b0b74(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400b0b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x50))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1400b0b91 FUN_1400b0b91 body=702 status=ok
// SIG undefined FUN_1400b0b91(void)

uint FUN_1400b0b91(int param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = FUN_144ae8d93();
  uVar12 = 1;
  if (iVar5 != 3) goto LAB_1400b0d49;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb02e68) && (FUN_144b3d300(&DAT_14cb02e68), DAT_14cb02e68 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MSAACount",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14cb02e60 = 0;
    }
    else {
      DAT_14cb02e60 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14cb02e68);
  }
  lVar2 = DAT_14cb02e60;
  puVar10 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar10 = DAT_14ca96af8;
  }
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  uVar13 = (ulonglong)uVar1;
  if (((((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
      ((int)(&DAT_14ca814b8)[uVar13 * 0xf] < 3)) &&
     (((&DAT_14ca814b8)[uVar13 * 0xf] != 1 ||
      ((DAT_14ca964f0 == '\x01' && ((DAT_14c760e14 & 1) != 0)))))) goto LAB_1400b0d49;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if ((iVar5 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar5 == 2)))) {
    uVar9 = 0;
  }
  else if (iVar5 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  uVar11 = *(uint *)(lVar2 + uVar9 * 4);
  uVar12 = 1;
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  if (param_2 <= uVar11) {
    uVar11 = param_2;
  }
  if (((8 < uVar11) || ((0x116U >> (uVar11 & 0x1f) & 1) == 0)) || (uVar11 < 2)) goto LAB_1400b0d49;
  FUN_140056680(&local_58,&DAT_149dfb77a);
  uVar12 = (&DAT_14ca814c8)[uVar13 * 0xf] & 0x20000;
  if (param_1 == 1) {
    cVar3 = FUN_14583c036(uVar13);
    if (cVar3 == '\0') {
      bVar4 = false;
    }
    else {
      iVar5 = FUN_147cee408();
      bVar4 = 0 < iVar5;
    }
    if ((uVar12 != 0 & (bVar4 ^ 1U)) == 0) {
      FUN_140002266(&local_68,L"RHISupportsMSAA %d, MobilePixelProjectedReflection %d",
                    uVar12 >> 0x11,bVar4);
      goto LAB_1400b0d0a;
    }
  }
  else if (uVar12 == 0) {
    FUN_140002266(&local_68,L"RHISupportsMSAA %d",0);
LAB_1400b0d0a:
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    uVar11 = 1;
    if (DAT_14cb02e6c == '\0') {
      DAT_14cb02e6c = '\x01';
    }
  }
  uVar12 = uVar11;
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
LAB_1400b0d49:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1400b0e5c FUN_1400b0e5c body=124 status=ok
// SIG undefined FUN_1400b0e5c(void)

void FUN_1400b0e5c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140fa4948(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9cc4c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400b0ee4 FUN_1400b0ee4 body=124 status=ok
// SIG undefined FUN_1400b0ee4(void)

void FUN_1400b0ee4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14075ce18(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9ce12(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400b0f6c FUN_1400b0f6c body=124 status=ok
// SIG undefined FUN_1400b0f6c(void)

void FUN_1400b0f6c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140479b38(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9dac8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400b0ff4 FUN_1400b0ff4 body=124 status=ok
// SIG undefined FUN_1400b0ff4(void)

void FUN_1400b0ff4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141016a74(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9de1a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400b1070 FUN_1400b1070 body=145 status=ok
// SIG undefined FUN_1400b1070(void)

ulonglong FUN_1400b1070(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar7 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x18);
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 1400b1102 FUN_1400b1102 body=80 status=ok
// SIG undefined FUN_1400b1102(void)

ulonglong FUN_1400b1102(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1400b1152(param_3);
  if (lVar3 == 0) {
    bVar2 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar3 + 0x3c0);
    param_3 = plVar4;
    cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x3c0) + 0x58))(plVar4);
    if (cVar1 == '\0') {
      bVar2 = (**(code **)(*plVar4 + 0x70))(plVar4);
      bVar2 = bVar2 ^ 1;
      param_3 = plVar4;
    }
    else {
      bVar2 = 0;
    }
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),lVar3 != 0 & bVar2) & 0xffffffff;
}



// FUNCTION 1400b1152 FUN_1400b1152 body=63 status=ok
// SIG undefined FUN_1400b1152(void)

longlong FUN_1400b1152(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1400b1372();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1400b1192 FUN_1400b1192 body=113 status=ok
// SIG undefined FUN_1400b1192(void)

undefined8 FUN_1400b1192(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar1 = 0;
  }
  else {
    local_18 = DAT_14c9a6400;
    local_10 = 0xffffffff;
    local_28 = DAT_14cbcd1e0;
    local_20 = 0xffffffff;
    uVar1 = FUN_1400b1204(param_1 + 0x118);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b1204 FUN_1400b1204 body=252 status=ok
// SIG undefined FUN_1400b1204(void)

undefined8 FUN_1400b1204(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar2 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  if (lVar2 == 0 && uVar5 == 0xffffffff) {
    return 0;
  }
  if ((int)uVar5 < 0) {
    lVar4 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
LAB_1400b123c:
    if (uVar7 == 0) goto LAB_1400b1273;
    uVar6 = (ulonglong)(int)uVar7;
  }
  else {
    uVar7 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar7;
    lVar4 = *param_1;
    if ((int)uVar7 <= (int)uVar5) goto LAB_1400b123c;
    if (*(longlong *)(lVar4 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar2) {
LAB_1400b1294:
      lVar4 = (longlong)(int)uVar5 * 0x88 + lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      cVar3 = FUN_1448ec59e(lVar4,param_3);
      if (cVar3 == '\0') {
        return 0;
      }
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x78) >> 8),
                      *(longlong *)(lVar4 + 0x78) == *param_3);
    }
  }
  uVar8 = 0;
  do {
    if (*(longlong *)(lVar4 + 0x68 + uVar8) == lVar2) {
      uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
      *(uint *)(param_2 + 1) = uVar5;
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      lVar4 = *param_1;
      goto LAB_1400b1294;
    }
    lVar1 = lVar4 + uVar8;
    uVar8 = uVar8 + 0x88;
  } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar4);
LAB_1400b1273:
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return 0;
}



// FUNCTION 1400b1300 FUN_1400b1300 body=113 status=ok
// SIG undefined FUN_1400b1300(void)

undefined8 FUN_1400b1300(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar1 = 0;
  }
  else {
    local_18 = DAT_14c9a6400;
    local_10 = 0xffffffff;
    local_28 = DAT_14cbcd1e8;
    local_20 = 0xffffffff;
    uVar1 = FUN_1400b1204(param_1 + 0x118);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b1372 FUN_1400b1372 body=228 status=ok
// SIG undefined FUN_1400b1372(void)

longlong FUN_1400b1372(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba5420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bda1ea;
    local_40 = &LAB_140d22e35;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2960;
    FUN_14081cfa3(L"/Script/OakGame",L"LootableObject",&DAT_14cba5420,FUN_1465c291c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b145e FUN_1400b145e body=212 status=ok
// SIG undefined FUN_1400b145e(void)

void FUN_1400b145e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 1400b1532 FUN_1400b1532 body=337 status=ok
// SIG undefined FUN_1400b1532(void)

void FUN_1400b1532(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400b159f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1400b159f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 1400b1684 FUN_1400b1684 body=44 status=ok
// SIG undefined FUN_1400b1684(void)

void FUN_1400b1684(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  *(undefined4 *)(lVar1 + 8) = 0;
  if (-1 < *(int *)(lVar1 + 0xc)) {
    return;
  }
  FUN_146ea0c12(lVar1);
  return;
}



// FUNCTION 1400b16b6 FUN_1400b16b6 body=452 status=ok
// SIG undefined FUN_1400b16b6(void)

void FUN_1400b16b6(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,400);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400b17d3:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400b1810:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 400;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400b170e;
LAB_1400b1703:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400b170e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xa4) goto code_r0x0001400b173a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 100 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400b1790:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400b1810;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400b17d3;
code_r0x0001400b173a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400b1790;
    }
  }
  goto LAB_1400b1703;
}



// FUNCTION 1400b1886 FUN_1400b1886 body=31 status=ok
// SIG undefined FUN_1400b1886(void)

undefined8 FUN_1400b1886(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b18a6 FUN_1400b18a6 body=342 status=ok
// SIG undefined FUN_1400b18a6(void)

undefined8 FUN_1400b18a6(longlong *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != '\0') {
    if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (param_1[0xcc] == 0) {
      uVar3 = CONCAT71((int7)(local_10 >> 8),1);
      goto LAB_1400b194c;
    }
  }
  local_14 = 0;
  local_18 = 0;
  (**(code **)(*param_1 + 0x758))(param_1);
  if (((*(char *)((longlong)param_1 + 0x1fb) == '\0') ||
      (((((lVar4 = param_1[0x16], lVar4 == 0 && (lVar4 = FUN_1448abda6(param_1), lVar4 == 0)) ||
         (*(longlong *)(lVar4 + 0x30) == 0)) ||
        ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar4 == 0 ||
         ((*(byte *)(lVar4 + 0x39e) & 0x10) == 0)))) &&
       (*(char *)((longlong)param_1 + 0x2cf) == '\x01')))) &&
     ((pcVar1 = *(code **)(*param_1 + 0x808),
      pcVar1 == (code *)&LAB_1401a122a || pcVar1 == (code *)&LAB_1448ac798 ||
      (cVar2 = (*pcVar1)(param_1), cVar2 != '\0')))) {
    if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (param_1[0xcc] == 0) goto LAB_1400b19a0;
    uVar3 = (**(code **)(*param_1 + 0xa98))(param_1,local_14,local_18);
  }
  else {
LAB_1400b19a0:
    uVar3 = 0;
  }
LAB_1400b194c:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1400b19fe FUN_1400b19fe body=41 status=ok
// SIG undefined FUN_1400b19fe(void)

byte FUN_1400b19fe(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0xaa0))();
  return bVar1 & (0 < param_3 && 0 < param_2);
}



// FUNCTION 1400b1a28 FUN_1400b1a28 body=202 status=ok
// SIG undefined FUN_1400b1a28(void)

undefined8 FUN_1400b1a28(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(lVar1 + 0x170);
  if (((-1 < (int)uVar4) && (plVar6 = *(longlong **)(lVar1 + 0xe0), plVar6 != (longlong *)0x0)) &&
     (iVar7 = (int)plVar6[1], 0 < iVar7)) {
    if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
      iVar3 = *(int *)(lVar1 + 0x150);
    }
    else {
      uVar5 = 0;
      if (DAT_14c760db4 != 1) {
        uVar5 = DAT_14c761b9c;
      }
      if (DAT_14c761de0 == 0) {
        uVar5 = DAT_14c761b9c;
      }
      iVar3 = FUN_144b1da20(lVar1 + 0xe8,uVar5);
      plVar6 = *(longlong **)(lVar1 + 0xe0);
      iVar7 = (int)plVar6[1];
      uVar4 = *(uint *)(lVar1 + 0x170);
    }
    iVar2 = iVar7 + -1;
    if (iVar3 < iVar7 + -1) {
      iVar2 = iVar3;
    }
    lVar1 = *(longlong *)(*plVar6 + (longlong)iVar2 * 8);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),uVar4 < *(uint *)(lVar1 + 0x108));
  }
  return 0;
}



// FUNCTION 1400b1af2 FUN_1400b1af2 body=1999 status=ok
// SIG undefined FUN_1400b1af2(void)

ulonglong FUN_1400b1af2(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint7 uVar14;
  longlong *plVar13;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong *unaff_R15;
  bool bVar24;
  undefined1 auStack_f8 [35];
  undefined1 local_d5;
  int local_d4;
  longlong *local_d0;
  int local_c8;
  uint local_c4;
  longlong *local_c0;
  int local_b8;
  uint local_b4;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined1 local_80 [24];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d5 = param_2;
  cVar3 = FUN_1447bff1e(param_1 + 0x1b);
  iVar12 = 0;
  uVar23 = 0;
  if (cVar3 != '\0') {
    iVar4 = DAT_14c9a1758 + 1;
    *(int *)((longlong)param_1 + 0x11c) = DAT_14c9a1758;
    DAT_14c9a1758 = iVar4;
    FUN_140220358(param_1 + 0x1b);
    *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) | 8;
    uVar22 = (**(code **)(*param_1 + 0x328))(param_1);
    uVar23 = (ulonglong)uVar22;
    *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xf7;
  }
  uVar5 = 0;
  FUN_140741ce4(local_80,10);
  local_c0 = param_1 + 0x5f;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_c0;
  if ((int)param_1[0x62] == 0) {
    uVar20 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uVar16 = 0;
  }
  else {
    unaff_R15 = &local_68;
    FUN_1449c0562(unaff_R15);
    uVar16 = local_68 & 0xffffffff;
    uVar20 = local_68 >> 0x20;
    iVar12 = (int)param_1[0x62];
  }
  local_a8 = param_1 + 0x5d;
  uVar14 = (uint7)((ulonglong)uVar5 >> 8);
  plVar21 = local_60;
  uVar22 = (uint)local_58;
  iVar4 = local_58._4_4_;
  iVar15 = local_50;
  local_d0 = param_1;
  iVar7 = iVar12;
  plVar13 = local_60;
  if (local_58._4_4_ != iVar12 || local_60 != local_c0) {
    do {
      local_b0 = plVar13;
      local_c8 = iVar7;
      lVar18 = *(longlong *)(*local_a8 + 0x10 + (longlong)iVar4 * 0x20);
      local_c4 = uVar22;
      local_98 = uVar16;
      if (lVar18 != 0) {
        unaff_R15 = (ulonglong *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),(char)param_1[0x3a]);
        cVar3 = FUN_1447bff1e(lVar18,CONCAT71(uVar14,local_d5));
        uVar16 = 0;
        if (cVar3 == '\0') {
          local_a0 = 0;
        }
        else {
          iVar12 = DAT_14c9a1758 + 1;
          *(int *)(lVar18 + 0x44) = DAT_14c9a1758;
          DAT_14c9a1758 = iVar12;
          FUN_140220358(lVar18);
          *(byte *)(lVar18 + 0x2c) = *(byte *)(lVar18 + 0x2c) | 8;
          uVar5 = (**(code **)(*param_1 + 0x420))(param_1,lVar18);
          *(byte *)(lVar18 + 0x2c) = *(byte *)(lVar18 + 0x2c) & 0xf7;
          local_a0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),
                              *(undefined1 *)((longlong)param_1 + 0x1d1));
          uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
          unaff_R15 = (ulonglong *)0x0;
        }
        local_88 = (longlong *)(lVar18 + 0x70);
        puVar2 = (ulonglong *)(lVar18 + 0x80);
        iVar12 = *(int *)(lVar18 + 0x98);
        local_b8 = iVar15;
        local_90 = uVar20;
        if (iVar12 == 0) {
          uVar20 = 1;
          iVar4 = 0;
          local_d4 = 0;
        }
        else {
          puVar6 = *(ulonglong **)(lVar18 + 0x90);
          if (*(ulonglong **)(lVar18 + 0x90) == (ulonglong *)0x0) {
            puVar6 = puVar2;
          }
          uVar22 = (uint)*puVar6;
          if (uVar22 == 0) {
            iVar4 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar4 = iVar12 + -1;
            }
            uVar16 = 0;
            uVar20 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar20 = uVar16;
            }
            local_d4 = 0;
            do {
              if (uVar20 == uVar16) goto LAB_1400b1e5f;
              local_d4 = local_d4 + 0x20;
              uVar22 = *(uint *)((longlong)puVar6 + (uVar16 + 1) * 4);
              uVar16 = uVar16 + 1;
            } while (uVar22 == 0);
          }
          else {
            uVar16 = 0;
            local_d4 = 0;
          }
          uVar20 = (ulonglong)(-uVar22 & uVar22);
          uVar1 = uVar20 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar4 = (local_d4 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar4) {
            iVar4 = iVar12;
          }
        }
        local_b4 = (uint)unaff_R15;
        if (iVar4 != iVar12) {
          uVar22 = 0xffffffff;
          do {
            lVar17 = *(longlong *)(*local_88 + 0x10 + (longlong)iVar4 * 0x20);
            if ((lVar17 == 0) || (cVar3 = FUN_1447bff1e(lVar17,local_d5), cVar3 == '\0')) {
              uVar23 = uVar23 & 0xffffffff;
            }
            else {
              if ((local_b4 & 1) != 0) {
                iVar4 = DAT_14c9a1758 + 1;
                *(int *)(lVar18 + 0x44) = DAT_14c9a1758;
                DAT_14c9a1758 = iVar4;
                FUN_140220358(lVar18);
                *(byte *)(lVar18 + 0x2c) = *(byte *)(lVar18 + 0x2c) | 8;
                (**(code **)(*local_d0 + 0x420))(local_d0,lVar18);
                *(byte *)(lVar18 + 0x2c) = *(byte *)(lVar18 + 0x2c) & 0xf7;
                local_a0 = CONCAT71((int7)((ulonglong)local_d0 >> 8),
                                    *(undefined1 *)((longlong)local_d0 + 0x1d1));
                local_b4 = 0;
              }
              iVar4 = DAT_14c9a1758 + 1;
              *(int *)(lVar17 + 0x44) = DAT_14c9a1758;
              DAT_14c9a1758 = iVar4;
              FUN_140220358(lVar17);
              *(byte *)(lVar17 + 0x2c) = *(byte *)(lVar17 + 0x2c) | 8;
              (**(code **)(*local_d0 + 0x430))(local_d0,lVar18,lVar17);
              *(byte *)(lVar17 + 0x2c) = *(byte *)(lVar17 + 0x2c) & 0xf7;
              uVar23 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
            }
            uVar22 = uVar22 & ~(uint)uVar20;
            puVar6 = *(ulonglong **)(lVar18 + 0x90);
            if (*(ulonglong **)(lVar18 + 0x90) == (ulonglong *)0x0) {
              puVar6 = puVar2;
            }
            iVar15 = *(int *)(lVar18 + 0x98);
            iVar4 = (int)uVar16;
            lVar17 = (longlong)iVar4;
            uVar11 = *(uint *)((longlong)puVar6 + lVar17 * 4) & uVar22;
            if (uVar11 == 0) {
              iVar7 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar7 = iVar15 + -1;
              }
              iVar7 = iVar7 >> 5;
              local_d4 = local_d4 + 0x20;
              iVar8 = iVar7;
              if (iVar7 < iVar4) {
                iVar8 = iVar4;
              }
              if (iVar4 < iVar7) {
                lVar19 = 0;
                do {
                  uVar11 = *(uint *)((longlong)puVar6 + (lVar17 + lVar19 + 1) * 4);
                  if (uVar11 != 0) {
                    uVar16 = (ulonglong)(iVar4 + (int)lVar19 + 1);
                    uVar22 = 0xffffffff;
                    goto LAB_1400b1e2f;
                  }
                  local_d4 = local_d4 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar8 - lVar17 != lVar19);
                uVar22 = 0xffffffff;
                iVar4 = iVar8;
              }
              uVar16 = (ulonglong)(iVar4 + 1);
              iVar4 = iVar15;
            }
            else {
LAB_1400b1e2f:
              uVar20 = (ulonglong)(-uVar11 & uVar11);
              uVar1 = uVar20 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar4 = (local_d4 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar4) {
                iVar4 = iVar15;
              }
            }
            unaff_R15 = puVar2;
          } while (iVar4 != iVar12);
        }
LAB_1400b1e5f:
        plVar21 = local_88;
        FUN_1400b272a(local_88);
        FUN_1400b26da(plVar21,*(int *)(lVar18 + 0x78) - *(int *)(lVar18 + 0xa4),1);
        param_1 = local_d0;
        plVar21 = local_b0;
        uVar20 = local_90;
        iVar15 = local_b8;
        iVar12 = local_c8;
        if ((local_a0 & 1) != 0) {
          (**(code **)(*local_d0 + 0x428))(local_d0,lVar18);
          plVar21 = local_b0;
          uVar20 = local_90;
          iVar15 = local_b8;
          iVar12 = local_c8;
        }
      }
      uVar22 = local_c4 & ~(uint)uVar20;
      plVar13 = (longlong *)plVar21[2];
      if ((longlong *)plVar21[2] == (longlong *)0x0) {
        plVar13 = plVar21;
      }
      iVar7 = (int)plVar21[3];
      iVar4 = (int)local_98;
      lVar18 = (longlong)iVar4;
      uVar11 = *(uint *)((longlong)plVar13 + lVar18 * 4) & uVar22;
      uVar16 = local_98;
      if (uVar11 == 0) {
        iVar8 = iVar7 + -1;
        iVar9 = iVar7 + 0x1e;
        if (-1 < iVar8) {
          iVar9 = iVar8;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar4) {
          iVar10 = iVar4;
        }
        if (iVar4 < iVar9) {
          lVar17 = 0;
          do {
            uVar11 = *(uint *)((longlong)plVar13 + lVar17 * 4 + lVar18 * 4 + 4);
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar4 + (int)lVar17 + 1);
              uVar22 = 0xffffffff;
              goto LAB_1400b1f29;
            }
            iVar15 = iVar15 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar10 - lVar18 != lVar17);
          uVar22 = 0xffffffff;
          iVar8 = 0;
          iVar4 = iVar10;
        }
        uVar16 = (ulonglong)(iVar4 + 1);
        param_1 = local_d0;
        plVar21 = local_b0;
        iVar4 = iVar7;
        iVar12 = local_c8;
      }
      else {
LAB_1400b1f29:
        uVar20 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar20 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar4 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        iVar8 = iVar4;
        if (iVar7 <= iVar4) {
          iVar4 = iVar7;
          iVar8 = iVar7;
        }
      }
      uVar14 = (uint7)(uint3)((uint)iVar8 >> 8);
      iVar7 = local_c8;
      plVar13 = local_b0;
    } while (iVar4 != iVar12 || plVar21 != local_c0);
    iVar12 = (int)param_1[0x62];
  }
  plVar21 = local_d0;
  if (iVar12 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar13 = (longlong *)param_1[0x61];
    if ((longlong *)param_1[0x61] == (longlong *)0x0) {
      plVar13 = local_c0;
    }
    uVar20 = (ulonglong)(iVar12 + 0x1fU >> 5);
    iVar15 = -0x3e - (iVar12 + 0x1fU & 0xffffffe0);
    uVar22 = 0xffffffff >> (-(char)iVar12 & 0x1fU);
    do {
      bVar24 = uVar20 == 0;
      uVar20 = uVar20 - 1;
      if (bVar24) goto LAB_1400b200a;
      iVar15 = iVar15 + 0x20;
      uVar11 = uVar22 & *(uint *)((longlong)plVar13 + uVar20 * 4);
      uVar22 = 0xffffffff;
    } while (uVar11 == 0);
    uVar20 = (ulonglong)uVar11 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar4 = -(((uint)lVar18 ^ 0x3f) + iVar15);
  }
LAB_1400b200a:
  iVar12 = iVar4 + 1;
  iVar15 = (int)param_1[0x5e];
  if (iVar12 < iVar15) {
    if ((0 < *(int *)((longlong)param_1 + 0x31c)) &&
       (uVar20 = (ulonglong)*(uint *)(local_d0 + 99), *(uint *)(local_d0 + 99) != 0xffffffff)) {
      lVar18 = local_d0[0x5d];
      do {
        lVar17 = (longlong)(int)uVar20 * 0x20;
        if (iVar4 < (int)uVar20) {
          iVar15 = *(int *)(lVar18 + lVar17);
          iVar7 = *(int *)(lVar18 + 4 + lVar17);
          uVar20 = (ulonglong)iVar7;
          if (uVar20 != 0xffffffffffffffff) {
            *(int *)(lVar18 + uVar20 * 0x20) = iVar15;
          }
          if (iVar15 == -1) {
            *(int *)(local_d0 + 99) = iVar7;
          }
          else {
            *(int *)(lVar18 + 4 + (longlong)iVar15 * 0x20) = iVar7;
          }
          *(int *)((longlong)local_d0 + 0x31c) = *(int *)((longlong)local_d0 + 0x31c) + -1;
        }
        else {
          uVar20 = (ulonglong)*(uint *)(lVar18 + 4 + lVar17);
        }
      } while ((int)uVar20 != -1);
      iVar15 = (int)local_d0[0x5e];
    }
    if (iVar15 != iVar12) {
      *(int *)(local_d0 + 0x5e) = iVar12;
    }
    FUN_144a6134a(local_c0,iVar12,(int)local_d0[0x62] - iVar12);
    iVar15 = (int)plVar21[0x5e];
    param_1 = plVar21;
  }
  if (*(int *)((longlong)param_1 + 0x2f4) != iVar15) {
    FUN_1446f4a44(local_a8,iVar15);
    iVar15 = (int)param_1[0x5e];
  }
  uVar22 = iVar15 - *(int *)((longlong)param_1 + 0x31c);
  if (uVar22 < 4) {
    iVar12 = 1;
  }
  else {
    uVar20 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((0 < (int)uVar22 && (int)param_1[0x66] < iVar12) || (iVar12 < (int)param_1[0x66])) {
    *(int *)(param_1 + 0x66) = iVar12;
    FUN_1402211e2(local_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar23 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b22c2 FUN_1400b22c2 body=133 status=ok
// SIG undefined FUN_1400b22c2(void)

longlong * FUN_1400b22c2(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    sVar3 = strlen(param_2);
    iVar1 = (int)sVar3;
    uVar5 = iVar1 + 1;
    uVar6 = (ulonglong)uVar5;
    if (iVar1 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if (iVar1 < 0) {
      *(uint *)(param_1 + 1) = uVar5;
    }
    else {
      FUN_1446f8c06(param_1,uVar6);
      lVar2 = param_1[1];
      *(uint *)(param_1 + 1) = (int)lVar2 + uVar5;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) < uVar5) {
        FUN_144a2dbb8(param_1);
      }
      lVar2 = *param_1;
      uVar4 = 0;
      do {
        *(short *)(lVar2 + uVar4 * 2) = (short)param_2[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1400b2348 FUN_1400b2348 body=219 status=ok
// SIG undefined FUN_1400b2348(void)

void FUN_1400b2348(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_878 [40];
  longlong local_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined1 *local_840;
  undefined1 *local_838;
  ulonglong *local_830;
  char local_828;
  undefined1 local_820 [2048];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_840 = local_820;
  local_828 = '\0';
  local_830 = &local_20;
  local_838 = local_840;
  FUN_1400b2424(param_1,&local_840);
  *local_838 = 0;
  FUN_1400b22c2(&local_850,local_840);
  if (&local_850 == param_2) {
    if (local_850 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_850;
    local_850 = 0;
    *(undefined4 *)(param_2 + 1) = local_848;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_844;
  }
  if (local_828 == '\x01') {
    FUN_1400020a8(local_840);
  }
  if ((local_20 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


