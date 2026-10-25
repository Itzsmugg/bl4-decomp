// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14801dc64 FUN_14801dc64 body=133 status=ok
// SIG undefined FUN_14801dc64(void)

void FUN_14801dc64(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      lVar2 = FUN_147fd85c6();
      lVar3 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x28);
      if (lVar3 != 0 && lVar2 != 0) {
        FUN_1438e1bee(param_1,lVar2,lVar3,param_3);
        return;
      }
    }
    else {
      dVar1 = *(double *)(param_1 + 0x28);
      if ((*(double *)(param_3 + 0x30) != dVar1) || (NAN(*(double *)(param_3 + 0x30)) || NAN(dVar1))
         ) {
        *(undefined1 *)(param_3 + 0x72) = 1;
        *(double *)(param_3 + 0x30) = dVar1;
      }
    }
  }
  return;
}



// FUNCTION 14801dcf6 FUN_14801dcf6 body=217 status=ok
// SIG undefined FUN_14801dcf6(void)

void FUN_14801dcf6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar1 = FUN_1447addd0(*(longlong *)(param_2 + 8) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 1) = uVar1;
    lVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x2a8))();
    *param_1 = lVar2;
  }
  param_1[2] = param_2 + 0x10;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    uVar1 = FUN_1447addd0(*(longlong *)(param_2 + 0x18) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 3) = uVar1;
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x2a8))();
    param_1[2] = lVar2;
  }
  param_1[4] = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    uVar1 = FUN_1447addd0(*(longlong *)(param_2 + 0x28) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 5) = uVar1;
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x2a8))();
    param_1[4] = lVar2;
  }
  param_1[6] = param_2 + 0x30;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    uVar1 = FUN_1447addd0(*(longlong *)(param_2 + 0x38) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 7) = uVar1;
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x2a8))();
    param_1[6] = lVar2;
  }
  return;
}



// FUNCTION 14801ddd0 FUN_14801ddd0 body=93 status=ok
// SIG undefined FUN_14801ddd0(void)

undefined8 * FUN_14801ddd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1480170d4(param_1,param_3);
  *param_2 = uVar1;
  uVar1 = FUN_1480170d4(param_1 + 0x10,param_3);
  param_2[1] = uVar1;
  uVar1 = FUN_1480170d4(param_1 + 0x20,param_3);
  param_2[2] = uVar1;
  uVar1 = FUN_1480170d4(param_1 + 0x30,param_3);
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 14801de2e FUN_14801de2e body=389 status=ok
// SIG undefined FUN_14801de2e(void)

void FUN_14801de2e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_1459ec7ce();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801de7c;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801de7c;
      }
    }
  }
  lVar6 = 0;
LAB_14801de7c:
  *(longlong *)(param_1 + 0x18) = lVar6 + 0x40;
  if (*(longlong *)(lVar6 + 0x48) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x48) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x18) = uVar5;
  }
  *(longlong *)(param_1 + 0x28) = lVar6 + 0x50;
  if (*(longlong *)(lVar6 + 0x58) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x58) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  *(longlong *)(param_1 + 0x38) = lVar6 + 0x60;
  if (*(longlong *)(lVar6 + 0x68) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x68) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x68) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar5;
  }
  *(longlong *)(param_1 + 0x48) = lVar6 + 0x70;
  if (*(longlong *)(lVar6 + 0x78) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x78) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  *(longlong *)(param_1 + 0x58) = lVar6 + 0x80;
  if (*(longlong *)(lVar6 + 0x88) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x88) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x88) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x58) = uVar5;
  }
  FUN_14801dcf6(param_1 + 0x68,lVar6 + 0x90);
  FUN_14801dcf6(param_1 + 0xa8,lVar6 + 0xd0);
  return;
}



// FUNCTION 14801dfb4 FUN_14801dfb4 body=320 status=ok
// SIG undefined FUN_14801dfb4(void)

undefined8 * FUN_14801dfb4(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar6 = FUN_1459ec7ce();
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar7 = 0;
      if ((lVar6 == 0) || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) goto LAB_14801dfe2;
      if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar7 = lVar4;
        }
        goto LAB_14801dfe2;
      }
    }
  }
  lVar7 = 0;
LAB_14801dfe2:
  if (*(longlong *)(lVar7 + 0x38) == 0) {
    lVar4 = FUN_14479d2ce(*(longlong *)(param_3 + 8) + 0x28);
    if (lVar4 == 0) {
      *(undefined1 *)(param_2 + 3) = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x3d0) + 0x1c8);
      if (lVar4 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar8 = (undefined4)DAT_14c8464f0;
        uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar8 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
        puVar5 = (undefined8 *)(lVar4 + 0x260);
      }
      uVar2 = puVar5[1];
      *param_2 = *puVar5;
      param_2[1] = uVar2;
      param_2[2] = CONCAT44(uVar9,uVar8);
      *(undefined1 *)(param_2 + 3) = 1;
    }
  }
  else {
    cVar3 = FUN_1480150fe(param_4 + 0x88,*(longlong *)(lVar7 + 0x38),&local_40);
    if (cVar3 != '\0') {
      param_2[2] = local_30;
      *(undefined4 *)param_2 = local_40;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_3c;
      *(undefined4 *)(param_2 + 1) = uStack_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
    }
    *(bool *)(param_2 + 3) = cVar3 != '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14801e0f6 FUN_14801e0f6 body=1297 status=ok
// SIG undefined FUN_14801e0f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14801e0f6(longlong param_1,longlong param_2,void *param_3,double *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  longlong local_278;
  longlong local_270;
  double local_268;
  double local_260;
  undefined8 local_258 [13];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  double local_128;
  double dStack_120;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar1 = (longlong)param_3 + 0x88;
  local_270 = param_2;
  uVar8 = FUN_1480170d4(param_1 + 0x18,lVar1);
  local_278 = param_1 + 0x100;
  *(undefined8 *)(param_1 + 0x100) = uVar8;
  uVar8 = FUN_1480170d4(param_1 + 0x28,lVar1);
  *(undefined8 *)(param_1 + 0x108) = uVar8;
  uVar11 = FUN_148015152(param_1 + 0x38,lVar1);
  *(undefined4 *)(param_1 + 0x110) = uVar11;
  uVar11 = FUN_148015152(param_1 + 0x48,lVar1);
  *(undefined4 *)(param_1 + 0x114) = uVar11;
  uVar11 = FUN_148015152(param_1 + 0x58,lVar1);
  *(undefined4 *)(param_1 + 0x118) = uVar11;
  FUN_14801ddd0(param_1 + 0x68,local_148,lVar1);
  FUN_14801ddd0(param_1 + 0xa8,local_168,lVar1);
  FUN_147ffa9c0(&local_1f0,local_148);
  lVar1 = param_1 + 0x120;
  *(undefined4 *)(param_1 + 0x120) = local_1f0;
  *(undefined4 *)(param_1 + 0x124) = uStack_1ec;
  *(undefined4 *)(param_1 + 0x128) = uStack_1e8;
  *(undefined4 *)(param_1 + 300) = uStack_1e4;
  *(undefined4 *)(param_1 + 0x130) = local_1e0;
  *(undefined4 *)(param_1 + 0x134) = uStack_1dc;
  *(undefined4 *)(param_1 + 0x138) = uStack_1d8;
  *(undefined4 *)(param_1 + 0x13c) = uStack_1d4;
  FUN_147ffa9c0(&local_1f0,local_168);
  lVar2 = param_1 + 0x140;
  *(ulonglong *)(param_1 + 0x140) = CONCAT44(uStack_1ec,local_1f0);
  *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_1e4,uStack_1e8);
  *(ulonglong *)(param_1 + 0x150) = CONCAT44(uStack_1dc,local_1e0);
  *(ulonglong *)(param_1 + 0x158) = CONCAT44(uStack_1d4,uStack_1d8);
  memcpy(&local_1f0,param_3,0x88);
  puVar10 = local_258;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *param_5;
    param_5 = param_5 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_147fdbbf0(&local_1f0);
  uVar8 = FUN_14479d2ce(*(longlong *)(local_270 + 8) + 0x28);
  dVar13 = (double)FUN_148012c26(&local_1f0,uVar8);
  FUN_148012cd2(&local_128,&local_1f0,dVar13);
  lVar9 = local_278;
  dVar3 = *param_4;
  dVar14 = param_4[1];
  dVar15 = param_4[2];
  local_b0 = dVar3 * local_110 + dVar14 * local_f0 + dVar15 * local_d0 + local_b0;
  dVar4 = 1.0 / (double)(~-(ulonglong)(0.0 < local_b0) & (ulonglong)ABS(local_b0) |
                        (ulonglong)local_b0 & -(ulonglong)(0.0 < local_b0));
  dVar5 = dVar4 * (dVar15 * local_e8 + dVar14 * local_108 + dVar3 * local_128 + local_c8) * 0.5 +
          0.5;
  dVar14 = (dVar15 * dStack_e0 + dVar14 * dStack_100 + dVar3 * dStack_120 + dStack_c0) * dVar4 *
           -0.5 + 1.0 + -0.5;
  *(double *)(param_1 + 0xf8) = param_4[2];
  dVar3 = param_4[1];
  *(double *)(param_1 + 0xe8) = *param_4;
  *(double *)(param_1 + 0xf0) = dVar3;
  *(double *)(param_1 + 0x160) = dVar5;
  *(double *)(param_1 + 0x168) = dVar14;
  if (*(float *)(param_1 + 0x114) <= 0.0) {
    fVar12 = *(float *)(param_1 + 0x110);
  }
  else {
    dStack_120 = dVar14 - *(double *)(param_1 + 0x108);
    local_128 = dVar5 - *(double *)(param_1 + 0x100);
    dVar15 = dStack_120 * dStack_120;
    dVar14 = local_128 * local_128;
    fVar12 = *(float *)(param_1 + 0x118);
    local_288 = 0;
    FUN_147ffab4c(lVar2,&local_268,local_278);
    local_268 = local_268 - *(double *)(param_1 + 0x100);
    local_260 = local_260 - *(double *)(param_1 + 0x108);
    dVar3 = SQRT(local_260 * local_260 + local_268 * local_268) -
            (double)*(float *)(param_1 + 0x118);
    if (dVar3 <= 1e-08) {
      dVar3 = 1e-08;
    }
    dVar3 = (SQRT(dVar14 + dVar15) - (double)fVar12) / dVar3;
    if (1.1 <= dVar3) {
      dVar3 = 1.1;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    fVar12 = (float)((double)(*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x114)) * dVar3 +
                    (double)*(float *)(param_1 + 0x114));
  }
  *(float *)(param_1 + 0x178) = fVar12;
  FUN_147ffaa6e(lVar1,lVar9);
  FUN_147ffaac4(lVar2,lVar1);
  cVar6 = FUN_147ffab1a(lVar2,param_1 + 0x160);
  cVar7 = FUN_147ffab1a(lVar1,param_1 + 0x160);
  if (cVar6 == '\0') {
    *(undefined4 *)(param_1 + 0x170) = 2;
  }
  else {
    if (cVar7 != '\0') {
      *(undefined4 *)(param_1 + 0x170) = 0;
      if ((*(char *)(param_1 + 0x174) == '\x01') &&
         (dVar3 = ((*(double *)(param_1 + 0x108) + -0.5) / dVar13 + 0.5) -
                  ((*(double *)(param_1 + 0x168) + -0.5) / dVar13 + 0.5),
         dVar14 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x160),
         SQRT(dVar3 * dVar3 + dVar14 * dVar14) <=
         (double)(*(float *)(param_1 + 0x118) + _DAT_14c76277c))) {
        *(undefined1 *)(param_1 + 0x174) = 0;
      }
      goto LAB_14801e5a3;
    }
    *(undefined4 *)(param_1 + 0x170) = 1;
  }
  *(undefined1 *)(param_1 + 0x174) = 1;
LAB_14801e5a3:
  if ((local_a0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801e608 FUN_14801e608 body=548 status=ok
// SIG undefined FUN_14801e608(void)

void FUN_14801e608(longlong param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  double dVar9;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar9 = *(double *)(param_1 + 0x100);
  dVar1 = *(double *)(param_1 + 0x108);
  dVar2 = *(double *)(param_1 + 0x168) - dVar1;
  dVar3 = *(double *)(param_1 + 0x160) - dVar9;
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
  if (((dVar4 == 0.0) && (!NAN(dVar4))) || (*(char *)(param_1 + 0x174) == '\0')) {
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x168);
    uVar7 = DAT_14c8463f8._4_4_;
    uVar6 = (undefined4)DAT_14c8463f8;
    uVar5 = DAT_14c8463f0._4_4_;
    *(undefined4 *)(param_1 + 0x198) = (undefined4)DAT_14c8463f0;
    *(undefined4 *)(param_1 + 0x19c) = uVar5;
    *(undefined4 *)(param_1 + 0x1a0) = uVar6;
    *(undefined4 *)(param_1 + 0x1a4) = uVar7;
    uVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x170) == 2) {
      FUN_14801e82e(param_1,&local_90);
      *(undefined8 *)(param_1 + 0x188) = local_90;
      *(undefined8 *)(param_1 + 400) = uStack_88;
      dVar2 = *(double *)(param_1 + 400) - dVar1;
      dVar3 = *(double *)(param_1 + 0x188) - dVar9;
      dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
    }
    dVar9 = dVar4 - (double)*(float *)(param_1 + 0x118);
    FUN_148013132(param_1 + 0x178,
                  CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                           (float)dVar9 - *(float *)(param_1 + 0x17c)),param_2);
    dVar9 = (double)*(float *)(param_1 + 0x118) + (double)*(float *)(param_1 + 0x17c);
    dVar1 = dVar2 * (1.0 / dVar4) * dVar9 + *(double *)(param_1 + 0x108);
    dVar9 = (1.0 / dVar4) * dVar3 * dVar9 + *(double *)(param_1 + 0x100);
    *(double *)(param_1 + 0x188) = dVar9;
    *(double *)(param_1 + 400) = dVar1;
    *(double *)(param_1 + 0x198) = dVar9 - *(double *)(param_1 + 0x160);
    *(double *)(param_1 + 0x1a0) = dVar1 - *(double *)(param_1 + 0x168);
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 0x1a8) = uVar8;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801e82e FUN_14801e82e body=514 status=ok
// SIG undefined FUN_14801e82e(void)

void FUN_14801e82e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(param_1 + 0x108);
  dVar5 = dVar1 - *(double *)(param_1 + 0x168);
  dVar2 = *(double *)(param_1 + 0x100);
  dVar4 = dVar2 - *(double *)(param_1 + 0x160);
  dVar3 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      if ((dVar5 != 0.0) || (NAN(dVar5))) {
        dVar6 = dVar4 * dVar4 + dVar5 * dVar5;
        dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar6) &
                        (ulonglong)(dVar4 * (1.0 / SQRT(dVar6))));
        if (9.99999993922529e-09 < dVar6) {
          dVar3 = dVar5 * (1.0 / SQRT(dVar6));
        }
        dVar5 = *(double *)(param_1 + 0x168);
        *param_2 = *(double *)(param_1 + 0x160);
        param_2[1] = dVar5;
        dVar5 = *param_2;
        if (*(double *)(param_1 + 0x140) <= dVar5) {
          dVar6 = param_2[1];
        }
        else {
          dVar5 = (*(double *)(param_1 + 0x140) - dVar2) / dVar4;
          dVar6 = dVar3 * dVar5 + dVar1;
          dVar5 = dVar5 * dVar4 + dVar2;
          *param_2 = dVar5;
          param_2[1] = dVar6;
        }
        if (dVar6 < *(double *)(param_1 + 0x148)) {
          dVar6 = (*(double *)(param_1 + 0x148) - dVar1) / dVar3;
          dVar5 = dVar6 * dVar4 + dVar2;
          *param_2 = dVar5;
          param_2[1] = dVar3 * dVar6 + dVar1;
        }
        if (*(double *)(param_1 + 0x150) < dVar5) {
          dVar6 = (*(double *)(param_1 + 0x150) - dVar2) / dVar4;
          dVar5 = dVar6 * dVar4 + dVar2;
          *param_2 = dVar5;
          param_2[1] = dVar3 * dVar6 + dVar1;
        }
        if (dVar5 <= *(double *)(param_1 + 0x158)) {
          return;
        }
        dVar5 = (*(double *)(param_1 + 0x158) - dVar1) / dVar3;
        *param_2 = dVar2 + dVar4 * dVar5;
        param_2[1] = dVar3 * dVar5 + dVar1;
        return;
      }
      dVar2 = *(double *)(param_1 + 0x140 + (ulonglong)(dVar4 <= 0.0) * 0x10);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x148 + (ulonglong)(dVar5 <= 0.0) * 0x10);
    }
    *param_2 = dVar2;
    param_2[1] = dVar1;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x168);
    *param_2 = *(double *)(param_1 + 0x160);
    param_2[1] = dVar2;
  }
  return;
}



// FUNCTION 14801ea34 FUN_14801ea34 body=265 status=ok
// SIG undefined FUN_14801ea34(void)

void FUN_14801ea34(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14801de2e();
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68ece();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801ea4f;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801ea4f;
      }
    }
  }
  lVar6 = 0;
LAB_14801ea4f:
  *(longlong *)(param_1 + 0x1b0) = lVar6 + 0x110;
  if (*(longlong *)(lVar6 + 0x118) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x118) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x1b8) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x118) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  }
  *(longlong *)(param_1 + 0x1c0) = lVar6 + 0x120;
  if (*(longlong *)(lVar6 + 0x128) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x128) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x1c8) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x128) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  }
  uVar4 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  return;
}



// FUNCTION 14801eb3e FUN_14801eb3e body=489 status=ok
// SIG undefined FUN_14801eb3e(void)

void FUN_14801eb3e(longlong param_1,longlong param_2,void *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 local_268 [104];
  undefined1 local_200 [24];
  undefined8 local_1e8 [13];
  undefined1 local_180 [136];
  undefined8 local_f8 [12];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_14801dfb4(param_1,&local_80,param_2,param_3);
  if (local_68 == '\x01') {
    local_88 = local_70;
    local_98 = local_80;
    uStack_94 = uStack_7c;
    uStack_90 = uStack_78;
    uStack_8c = uStack_74;
    FUN_14801ed28(param_1,local_f8,param_3);
    local_278 = local_f8;
    FUN_14801e0f6(param_1,param_2,param_3,&local_98);
    FUN_14801e608(param_1,*(undefined4 *)(param_2 + 0x18));
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      memcpy(local_180,param_3,0x88);
      puVar4 = local_f8;
      puVar5 = local_1e8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_147fdbbf0(local_180);
      uVar2 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x28);
      FUN_14801f304(param_1,local_200,local_180,uVar2);
      cVar1 = FUN_14801367e(param_1 + 0x1b0,(longlong)param_3 + 0x88);
      uVar6 = 0;
      uVar7 = 0;
      if (cVar1 == '\0') {
        uVar8 = 0;
        uVar9 = 0;
      }
      else {
        uVar8 = (undefined4)local_200._8_8_;
        uVar9 = SUB84(local_200._8_8_,4);
      }
      cVar1 = FUN_14801367e(param_1 + 0x1c0,(longlong)param_3 + 0x88);
      if (cVar1 != '\0') {
        uVar6 = (undefined4)local_200._16_8_;
        uVar7 = SUB84(local_200._16_8_,4);
      }
      *(double *)(param_1 + 0x1d0) = (double)CONCAT44(uVar9,uVar8) + *(double *)(param_1 + 0x1d0);
      *(double *)(param_1 + 0x1d8) = (double)CONCAT44(uVar7,uVar6) + *(double *)(param_1 + 0x1d8);
    }
    FUN_14801ed28(param_1,local_268,param_3);
    FUN_147fdbbf0(param_3,local_268);
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801ed28 FUN_14801ed28 body=1499 status=ok
// SIG undefined FUN_14801ed28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14801ed28(longlong param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar8 = FUN_147fdbb70();
  auVar27 = _DAT_149934d80;
  auVar14 = param_2[4];
  dVar12 = auVar14._0_8_;
  dVar17 = auVar14._8_8_;
  auVar1 = param_2[5];
  dVar2 = auVar1._0_8_;
  auVar14 = minpd(_DAT_149934d80,auVar14);
  auVar19 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar15);
  auVar14._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar10 = movmskpd(param_3,auVar14);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar21 = *(double *)*param_2;
    dVar22 = *(double *)(*param_2 + 8);
    local_298 = *(double *)param_2[1];
    dStack_290 = *(double *)(param_2[1] + 8);
    dVar18 = *(double *)(param_2[1] + 8);
    dVar4 = *(double *)(param_2[1] + 8);
    local_278 = dVar12 * 0.0;
    dStack_270 = *(double *)(param_1 + 0x1d0) * dVar17;
    dVar7 = *(double *)(param_1 + 0x1d8) * dVar2;
    dVar12 = auVar1._8_8_ * 0.0;
    local_288._8_4_ = SUB84(dVar12,0);
    local_288._0_8_ = dVar7;
    local_288._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar23 = dStack_270 * dVar21 - local_278 * dVar22;
    dVar25 = dVar7 * dVar22 - dStack_270 * local_298;
    dVar24 = local_278 * local_298 - dVar7 * dVar21;
    dVar20 = dVar12 * dStack_290 - dVar12 * dStack_290;
    dVar25 = dVar25 + dVar25;
    dVar24 = dVar24 + dVar24;
    dVar23 = dVar23 + dVar23;
    dVar20 = dVar20 + dVar20;
    dVar12 = *(double *)(*param_2 + 8);
    dVar17 = *(double *)(*param_2 + 8);
    dVar5 = local_298 * 0.0 * -1.0 + dVar12 * 0.0 + *(double *)*param_2 * 1.0 * 1.0 + dVar18 * 0.0;
    dVar6 = local_298 * 0.0 * 1.0 + dVar17 * 1.0 + *(double *)*param_2 * 0.0 * -1.0 + dVar4 * 0.0;
    auVar27._0_8_ =
         *(double *)param_2[1] * 1.0 * 1.0 + ((dVar21 * 0.0 * 1.0 + dVar18 * 0.0) - dVar12 * 0.0);
    auVar27._8_8_ =
         *(double *)param_2[1] * 0.0 * -1.0 + ((dVar21 * 0.0 * -1.0 + dVar4 * 1.0) - dVar17 * 0.0);
    local_e8 = (dVar23 * dVar22 - local_298 * dVar24) + dVar18 * dVar25 + local_278 +
               *(double *)param_2[2];
    dStack_e0 = (dVar25 * local_298 - dVar23 * dVar21) + dVar4 * dVar24 + dStack_270 +
                *(double *)(param_2[2] + 8);
    local_d8 = (dVar24 * dVar21 - dVar22 * dVar25) + dVar18 * dVar23 + dVar7 + *(double *)param_2[3]
    ;
    dVar12 = (dVar20 * dStack_290 - dVar20 * dStack_290) + dVar4 * dVar20 + (double)local_288._8_8_
             + *(double *)(param_2[3] + 8);
  }
  else {
    dVar7 = *(double *)*param_2;
    dVar23 = *(double *)(*param_2 + 8);
    dVar18 = *(double *)param_2[1];
    dVar20 = dVar23 + dVar23;
    dVar21 = dVar18 + dVar18;
    dVar5 = dVar7 * (dVar7 + dVar7);
    local_1c8 = ((double)DAT_149934d80 - (dVar18 * dVar21 + dVar23 * dVar20)) * dVar12;
    dVar4 = (DAT_149934d80._8_8_ - (dVar18 * dVar21 + dVar5)) * dVar17;
    dVar6 = *(double *)*param_2 * dVar21;
    dVar18 = *(double *)(param_2[1] + 8);
    dVar22 = dVar21 * dVar18;
    dVar24 = (dVar7 + dVar7) * *(double *)(param_2[1] + 8);
    dVar18 = dVar20 * dVar18;
    dStack_180 = (dVar21 * dVar23 - dVar24) * dVar2;
    local_188 = (dVar18 + dVar6) * dVar2;
    dStack_1c0 = (dVar20 * dVar7 + dVar22) * dVar12;
    local_198 = (dVar21 * dVar23 + dVar24) * dVar17;
    local_1b8 = (dVar6 - dVar18) * dVar12;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar4,0);
    local_1a8._0_8_ = (dVar20 * dVar7 - dVar22) * dVar17;
    local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_190 = 0;
    local_178 = (1.0 - (dVar5 + dVar23 * dVar20)) * dVar2;
    uStack_170 = 0;
    local_168 = *(undefined8 *)param_2[2];
    uStack_160 = *(undefined8 *)(param_2[2] + 8);
    local_158 = *(undefined8 *)param_2[3];
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1d8._8_4_ = 0;
    local_1d8._0_8_ = *(double *)(param_1 + 0x1d8);
    local_1d8._12_4_ = 0x3ff00000;
    local_228 = ZEXT816(0x3ff0000000000000) << 0x40;
    dStack_1e0 = *(double *)(param_1 + 0x1d0);
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar17);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar12);
    auVar14 = blendvpd(_DAT_149936790,auVar27,auVar19);
    uVar11 = -(ulonglong)(0.0 <= dVar2 * 1.0);
    dVar12 = (double)(~uVar11 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar11 >> 0x20) & 0x3ff00000) << 0x20);
    dVar17 = auVar14._0_8_;
    local_138 = local_138 * dVar17;
    local_140 = local_140 * dVar17;
    local_148 = local_148 * dVar17;
    dVar17 = auVar14._8_8_;
    local_118 = local_118 * dVar17;
    local_120 = local_120 * dVar17;
    local_128 = dVar17 * local_128;
    local_f8 = local_f8 * dVar12;
    local_100 = local_100 * dVar12;
    local_108 = dVar12 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar12 = local_258 * local_258 + local_268 * local_268;
    dVar17 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar16._0_8_ = dVar12 + dVar17;
    auVar16._8_8_ = dVar12 + dVar17;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar14 = sqrtpd(auVar16,auVar16);
    auVar14 = divpd(auVar27,auVar14);
    auVar26._0_8_ = auVar14._0_8_ * local_258;
    auVar26._8_8_ = auVar14._8_8_ * dStack_250;
    dVar5 = (double)((ulonglong)(local_268 * auVar14._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dVar6 = (double)((ulonglong)(dStack_260 * auVar14._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar13);
    dVar12 = 0.0;
  }
  dVar17 = auVar1._8_8_ * 0.0;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_2 = auVar1;
  param_2[1] = auVar27;
  *(double *)param_2[2] = local_e8;
  *(double *)(param_2[2] + 8) = dStack_e0;
  *(double *)param_2[3] = local_d8;
  *(double *)(param_2[3] + 8) = dVar12;
  auVar3._8_4_ = SUB84(dVar17,0);
  auVar3._0_8_ = dVar2 * 1.0;
  auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  param_2[5] = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801f304 FUN_14801f304 body=880 status=ok
// SIG undefined FUN_14801f304(void)

double * FUN_14801f304(longlong param_1,double *param_2,double *param_3,undefined8 param_4)

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
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar10 = (double)FUN_148012c26(param_3,param_4);
  FUN_148012b0c(local_108,param_3,(double)(float)dVar10);
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar10 = param_3[2];
  FUN_144a7484c(param_3 + 3,&local_f8);
  dVar14 = local_e8 * -1.0;
  dVar15 = dStack_e0 * 1.0;
  dVar16 = -local_f8;
  dVar17 = -dStack_f0;
  dVar10 = dVar10 * 1.0;
  dVar19 = dVar8 * dVar16 - dVar7 * dVar17;
  dVar2 = dVar10 * dVar17 - dVar8 * dVar14;
  dVar18 = dVar7 * dVar14 - dVar10 * dVar16;
  dVar2 = dVar2 + dVar2;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar1 = local_f8 * dVar19;
  dVar12 = *(double *)(param_1 + 0xe8);
  dVar9 = *(double *)(param_1 + 0xf0);
  dVar3 = *(double *)(param_1 + 0xf8) * 1.0;
  dVar4 = dVar9 * dVar16 - dVar17 * dVar12;
  dVar5 = dVar3 * dVar17 - dVar14 * dVar9;
  dVar6 = dVar12 * dVar14 - dVar16 * dVar3;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar11 = local_f8 * dVar4;
  dVar7 = (dVar4 * dVar17 - dVar6 * dVar14) + dVar15 * dVar5 + dVar12 +
          (0.0 - ((dVar19 * dVar17 - dVar18 * dVar14) + dVar15 * dVar2 + dVar7));
  FUN_147ffa84e(&local_f8,param_1 + 0x188,local_108);
  dVar12 = sin(dStack_f0 * 0.017453292519943295);
  dVar13 = sin(local_f8 * 0.017453292519943295);
  *param_2 = dVar7 - dVar7;
  param_2[1] = (dVar11 + dVar14 * dVar5 + dVar15 * dVar6 + dVar9 +
               (0.0 - (dVar1 + dVar14 * dVar2 + dVar15 * dVar18 + dVar8))) - dVar13 * dVar7;
  param_2[2] = dVar12 * dVar7 +
               (0.0 - (dVar15 * dVar19 + dVar10 + (dVar18 * dVar16 - dVar2 * dVar17))) +
               dVar4 * dVar15 + dVar3 + (dVar6 * dVar16 - dVar5 * dVar17);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801f682 FUN_14801f682 body=279 status=ok
// SIG undefined FUN_14801f682(void)

void FUN_14801f682(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14801de2e();
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b68fb8();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14801f69d;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_14801f69d;
      }
    }
  }
  lVar6 = 0;
LAB_14801f69d:
  *(longlong *)(param_1 + 0x1b0) = lVar6 + 0x110;
  if (*(longlong *)(lVar6 + 0x118) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x118) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x1b8) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x118) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  }
  *(longlong *)(param_1 + 0x1c0) = lVar6 + 0x120;
  if (*(longlong *)(lVar6 + 0x128) != 0) {
    uVar3 = FUN_1447addd0(*(longlong *)(lVar6 + 0x128) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x1c8) = uVar3;
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x128) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  }
  *(undefined8 *)(param_1 + 0x1e0) = DAT_14c846508;
  uVar4 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  return;
}



// FUNCTION 14801f79a FUN_14801f79a body=499 status=ok
// SIG undefined FUN_14801f79a(void)

void FUN_14801f79a(longlong param_1,longlong param_2,void *param_3)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 local_258 [96];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8 [13];
  undefined1 local_160 [136];
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_14801dfb4(param_1,&local_60,param_2,param_3);
  if (local_48 == '\x01') {
    local_68 = local_50;
    local_78 = local_60;
    uStack_74 = uStack_5c;
    uStack_70 = uStack_58;
    uStack_6c = uStack_54;
    FUN_14801f98e(param_1,local_d8,param_3);
    local_268 = local_d8;
    FUN_14801e0f6(param_1,param_2,param_3,&local_78);
    FUN_14801e608(param_1,*(undefined4 *)(param_2 + 0x18));
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      memcpy(local_160,param_3,0x88);
      puVar4 = local_d8;
      puVar5 = local_1c8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_147fdbbf0(local_160);
      uVar2 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x28);
      dVar1 = (double)FUN_148012c26(local_160,uVar2);
      FUN_148012b0c(local_1d8,local_160,(double)(float)dVar1);
      FUN_147ffa84e(&local_1e8,param_1 + 0x160,local_1d8);
      FUN_147ffa84e(&local_1f8,param_1 + 0x188,local_1d8);
      *(double *)(param_1 + 0x1d0) = (local_1f0 - local_1e0) + *(double *)(param_1 + 0x1d0);
      *(double *)(param_1 + 0x1d8) = (local_1e8 - local_1f8) + *(double *)(param_1 + 0x1d8);
      *(double *)(param_1 + 0x1e0) = *(double *)(param_1 + 0x1e0) + 0.0;
    }
    FUN_14801f98e(param_1,local_258,param_3);
    FUN_147fdbbf0(param_3,local_258);
  }
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14801f98e FUN_14801f98e body=1669 status=ok
// SIG undefined FUN_14801f98e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14801f98e(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_147fdbb70(param_3);
  param_1 = param_1 + 0x1d0;
  uVar7 = FUN_144a7484c(param_1,&local_148);
  auVar29 = _DAT_149934d80;
  auVar17 = *(undefined1 (*) [16])(param_2 + 8);
  dVar11 = auVar17._0_8_;
  dVar15 = auVar17._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_2 + 10);
  dVar3 = auVar2._0_8_;
  auVar17 = minpd(_DAT_149934d80,auVar17);
  auVar21 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar8 = movmskpd(uVar7,auVar18);
  auVar17._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  uVar9 = movmskpd((int)param_1,auVar17);
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar25 = *param_2;
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    dVar20 = param_2[3];
    dVar26 = param_2[3];
    dVar1 = param_2[1];
    dVar28 = param_2[1];
    dVar23 = param_2[2];
    dVar22 = param_2[2];
    dVar16 = dStack_140 * dVar23 * -1.0 +
             local_138 * dVar1 + dStack_130 * *param_2 * 1.0 + local_148 * dVar20;
    dVar19 = local_148 * dVar22 * 1.0 +
             dStack_130 * dVar28 + local_138 * *param_2 * -1.0 + dStack_140 * dVar26;
    auVar29._0_8_ =
         dStack_130 * dVar23 * 1.0 +
         ((*param_2 * dStack_140 * 1.0 + local_138 * dVar20) - local_148 * dVar1);
    auVar29._8_8_ =
         local_138 * dVar22 * -1.0 +
         ((*param_2 * local_148 * -1.0 + dStack_130 * dVar26) - dStack_140 * dVar28);
    dVar11 = dVar11 * 0.0;
    dVar15 = dVar15 * 0.0;
    dVar28 = dVar3 * 0.0;
    dVar1 = auVar2._8_8_ * 0.0;
    dVar24 = dVar15 * dVar25 - dVar11 * dVar4;
    dVar13 = dVar28 * dVar4 - dVar15 * dVar5;
    dVar22 = dVar11 * dVar5 - dVar28 * dVar25;
    dVar23 = dVar1 * dVar6 - dVar1 * dVar6;
    dVar13 = dVar13 + dVar13;
    dVar22 = dVar22 + dVar22;
    dVar24 = dVar24 + dVar24;
    dVar23 = dVar23 + dVar23;
    local_e8 = (dVar24 * dVar4 - dVar5 * dVar22) + dVar20 * dVar13 + dVar11 + param_2[4];
    dStack_e0 = (dVar13 * dVar5 - dVar24 * dVar25) + dVar26 * dVar22 + dVar15 + param_2[5];
    local_d8 = (dVar22 * dVar25 - dVar4 * dVar13) + dVar20 * dVar24 + dVar28 + param_2[6];
    dVar11 = (dVar23 * dVar6 - dVar23 * dVar6) + dVar26 * dVar23 + dVar1 + param_2[7];
  }
  else {
    dVar28 = *param_2;
    dVar1 = param_2[1];
    dVar20 = param_2[2];
    dVar22 = dVar1 + dVar1;
    dVar23 = dVar20 + dVar20;
    dVar26 = dVar28 * (dVar28 + dVar28);
    local_1c8 = ((double)DAT_149934d80 - (dVar20 * dVar23 + dVar1 * dVar22)) * dVar11;
    dStack_1a0 = (DAT_149934d80._8_8_ - (dVar20 * dVar23 + dVar26)) * dVar15;
    dVar20 = param_2[3];
    dVar24 = dVar23 * dVar20;
    dVar25 = (dVar28 + dVar28) * param_2[3];
    dVar20 = dVar22 * dVar20;
    local_1a8 = (dVar22 * dVar28 - dVar24) * dVar15;
    dStack_180 = (dVar23 * dVar1 - dVar25) * dVar3;
    local_188 = (dVar20 + *param_2 * dVar23) * dVar3;
    dStack_1c0 = (dVar22 * dVar28 + dVar24) * dVar11;
    local_198 = (dVar23 * dVar1 + dVar25) * dVar15;
    local_178 = (1.0 - (dVar26 + dVar1 * dVar22)) * dVar3;
    local_1b8 = (*param_2 * dVar23 - dVar20) * dVar11;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar26 = dStack_140 + dStack_140;
    dVar20 = local_138 + local_138;
    dVar28 = local_148 * (local_148 + local_148);
    local_248 = (double)DAT_149934d80 - (local_138 * dVar20 + dStack_140 * dVar26);
    dStack_220 = DAT_149934d80._8_8_ - (local_138 * dVar20 + dVar28);
    local_1f8 = 1.0 - (dVar28 + dStack_140 * dVar26);
    dStack_200 = (local_148 + local_148) * dStack_130;
    dStack_240 = dVar26 * local_148 + dVar20 * dStack_130;
    local_218 = dVar20 * dStack_140 + dStack_200;
    local_228 = dVar26 * local_148 - dVar20 * dStack_130;
    dStack_200 = dVar20 * dStack_140 - dStack_200;
    local_208 = dVar26 * dStack_130 + local_148 * dVar20;
    local_238 = local_148 * dVar20 - dVar26 * dStack_130;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar11);
    auVar17 = blendvpd(_DAT_149936790,auVar29,auVar21);
    uVar10 = -(ulonglong)(0.0 <= dVar3 * 1.0);
    dVar11 = (double)(~uVar10 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar10 >> 0x20) & 0x3ff00000) << 0x20);
    dVar15 = auVar17._0_8_;
    local_138 = local_138 * dVar15;
    dStack_140 = dStack_140 * dVar15;
    local_148 = local_148 * dVar15;
    dVar15 = auVar17._8_8_;
    local_118 = local_118 * dVar15;
    local_120 = local_120 * dVar15;
    local_128 = dVar15 * local_128;
    local_f8 = local_f8 * dVar11;
    local_100 = local_100 * dVar11;
    local_108 = dVar11 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar11 = local_258 * local_258 + local_268 * local_268;
    dVar15 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar14._0_8_ = dVar11 + dVar15;
    auVar14._8_8_ = dVar11 + dVar15;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
    auVar17 = sqrtpd(auVar14,auVar14);
    auVar17 = divpd(auVar29,auVar17);
    auVar27._0_8_ = auVar17._0_8_ * local_258;
    auVar27._8_8_ = auVar17._8_8_ * dStack_250;
    dVar16 = (double)((ulonglong)(local_268 * auVar17._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
    dVar19 = (double)((ulonglong)(dStack_260 * auVar17._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar12);
    dVar11 = 0.0;
  }
  dVar15 = auVar2._8_8_ * 0.0;
  *param_2 = dVar16;
  param_2[1] = dVar19;
  *(undefined1 (*) [16])(param_2 + 2) = auVar29;
  param_2[4] = local_e8;
  param_2[5] = dStack_e0;
  param_2[6] = local_d8;
  param_2[7] = dVar11;
  auVar2._8_4_ = SUB84(dVar15,0);
  auVar2._0_8_ = dVar3 * 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar2;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148020020 FUN_148020020 body=115 status=ok
// SIG undefined FUN_148020020(void)

void FUN_148020020(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b690a2();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148020035;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_148020035;
      }
    }
  }
  lVar5 = 0;
LAB_148020035:
  if (*(longlong *)(lVar5 + 0xa8) != 0) {
    uVar3 = FUN_147fdaba2(param_2);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  return;
}



// FUNCTION 148020094 FUN_148020094 body=94 status=ok
// SIG undefined FUN_148020094(void)

undefined8 FUN_148020094(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x90);
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_147fe89a0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480200f4 FUN_1480200f4 body=537 status=ok
// SIG undefined FUN_1480200f4(void)

void FUN_1480200f4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_2 + 8);
  uVar8 = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar6 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(lVar1 + 0x1c);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x9c) = uVar6;
    *(undefined4 *)(param_1 + 0xa0) = uVar3;
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = FUN_145b690a2();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar9 = 0;
      if ((lVar7 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14802018d;
      if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar9 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar9 = lVar1;
        }
        goto LAB_14802018d;
      }
    }
  }
  lVar9 = 0;
LAB_14802018d:
  *(longlong *)(param_1 + 0x28) = lVar9 + 0x40;
  if (*(longlong *)(lVar9 + 0x48) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0x48) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x28) = uVar8;
  }
  *(longlong *)(param_1 + 0x38) = lVar9 + 0x50;
  if (*(longlong *)(lVar9 + 0x58) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0x58) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x58) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x38) = uVar8;
  }
  *(longlong *)(param_1 + 0x48) = lVar9 + 0x68;
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0x70) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x50) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x70) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x48) = uVar8;
  }
  *(longlong *)(param_1 + 0x58) = lVar9 + 0x78;
  if (*(longlong *)(lVar9 + 0x80) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0x80) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x58) = uVar8;
  }
  *(longlong *)(param_1 + 0x68) = lVar9 + 0x88;
  if (*(longlong *)(lVar9 + 0x90) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0x90) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x70) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x90) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x68) = uVar8;
  }
  *(longlong *)(param_1 + 0x78) = lVar9 + 0x98;
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    uVar6 = FUN_1447addd0(*(longlong *)(lVar9 + 0xa0) + 0x2c,0x10);
    *(undefined4 *)(param_1 + 0x80) = uVar6;
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0xa0) + 0x2a8))();
    *(undefined8 *)(param_1 + 0x78) = uVar8;
  }
  fVar10 = (float)FUN_148015152(param_1 + 0x28,param_3 + 0x88);
  *(double *)(param_1 + 0xd0) = (double)fVar10;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 14802030e FUN_14802030e body=2142 status=ok
// SIG undefined FUN_14802030e(void)

/* WARNING: Removing unreachable block (ram,0x000148020b26) */
/* WARNING: Removing unreachable block (ram,0x000148020b31) */
/* WARNING: Removing unreachable block (ram,0x000148020b44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14802030e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 **ppuVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 *local_130;
  double local_128;
  ulonglong uStack_120;
  double local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_14802037d:
    lVar22 = 0;
  }
  else {
    lVar20 = FUN_145b690a2();
    lVar24 = *(longlong *)(param_1 + 8);
    if (lVar24 == 0) goto LAB_14802037d;
    lVar22 = 0;
    if ((lVar20 != 0) && (lVar23 = *(longlong *)(lVar24 + 0x10), lVar23 != 0)) {
      if (*(int *)(lVar23 + 0x38) < *(int *)(lVar20 + 0x38)) goto LAB_14802037d;
      lVar22 = 0;
      if (*(longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
          lVar20 + 0x30) {
        lVar22 = lVar24;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_147fdae0a(*(longlong *)(param_1 + 0x90),param_2,param_3);
    lVar24 = *(longlong *)(param_1 + 0x90);
    uVar28 = *(undefined4 *)(lVar24 + 0x1c);
    uVar31 = *(undefined4 *)(lVar24 + 0x20);
    uVar13 = *(undefined4 *)(lVar24 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar24 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = uVar28;
    *(undefined4 *)(param_1 + 0x20) = uVar31;
    *(undefined4 *)(param_1 + 0x24) = uVar13;
  }
  lVar24 = param_3 + 0x88;
  bVar16 = FUN_14801367e(param_1 + 0x58,lVar24);
  bVar17 = FUN_14801367e(param_1 + 0x68,lVar24);
  bVar18 = FUN_14801367e(param_1 + 0x78,lVar24);
  if ((bVar16 & (bVar17 | bVar18)) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_158);
  }
  lVar20 = param_2[1];
  dVar29 = *(double *)(lVar20 + 0x48);
  dVar30 = *(double *)(lVar20 + 0x50);
  dVar32 = DAT_14c8464e0;
  dVar11 = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  if ((*(char *)(param_2 + 4) == '\0') && (0.0 < *(float *)(param_2 + 3))) {
    dVar11 = dVar30 - *(double *)(param_1 + 0xb8);
    dVar12 = dVar29 - *(double *)(param_1 + 0xb0);
    dVar32 = *(double *)(lVar20 + 0x40) - *(double *)(param_1 + 0xa8);
  }
  *(double *)(param_1 + 0xa8) = *(double *)(lVar20 + 0x40);
  *(double *)(param_1 + 0xb0) = dVar29;
  *(double *)(param_1 + 0xb8) = dVar30;
  dVar29 = *(double *)(param_1 + 0x18);
  dVar30 = *(double *)(param_1 + 0x20);
  dVar5 = *(double *)(param_1 + 0x98);
  dVar6 = *(double *)(param_1 + 0xa0);
  local_138 = param_3;
  fVar27 = (float)FUN_148015152(param_1 + 0x38,lVar24);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x24);
  if (((bVar17 & (double)fVar27 <= ABS(dVar29 - dVar5)) != 0) ||
     (bVar18 == 1 && (double)fVar27 <= ABS(dVar30 - dVar6))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_158);
  }
  local_130 = (undefined8 *)&DAT_3ff0000000000000;
  local_128 = 0.0;
  uStack_120 = 0;
  FUN_1401c9a0e(lVar20 + 0x58,&local_c8,&local_130);
  dVar29 = local_c8;
  dVar30 = local_c0;
  dVar5 = local_b8;
  if (*(int *)(lVar22 + 0x38) == 1) {
    dVar6 = dVar11 * dVar11 + dVar32 * dVar32 + dVar12 * dVar12;
    if (((dVar6 != 1.0) || (dVar29 = dVar32, dVar30 = dVar12, dVar5 = dVar11, NAN(dVar6))) &&
       (dVar29 = local_c8, dVar30 = local_c0, dVar5 = local_b8, 9.99999993922529e-09 <= dVar6)) {
      dVar5 = 1.0 / SQRT(dVar6);
      dVar29 = dVar32 * dVar5;
      dVar30 = dVar12 * dVar5;
      dVar5 = dVar11 * dVar5;
    }
  }
  local_b8 = dVar5;
  local_c0 = dVar30;
  local_c8 = dVar29;
  pdVar1 = (double *)(param_1 + 0x18);
  FUN_144a79a9c(&local_c8,&local_e0);
  uVar31 = 0;
  uVar28 = 0;
  if (bVar17 != 0) {
    uVar28 = SUB84(local_d8 - *pdVar1,0);
  }
  dVar29 = (double)FUN_144719204(uVar28,0);
  dVar29 = (double)(~-(ulonglong)(dVar29 < 0.0) & (ulonglong)dVar29 |
                   (ulonglong)(dVar29 + 360.0) & -(ulonglong)(dVar29 < 0.0));
  dVar29 = (double)(~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
                   (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29));
  if (bVar18 != 0) {
    uVar31 = SUB84(local_e0 - *(double *)(param_1 + 0x20),0);
  }
  dVar30 = (double)FUN_144719204(uVar31);
  dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                   (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
  dVar30 = (double)(~-(ulonglong)(180.0 < dVar30) & (ulonglong)dVar30 |
                   (ulonglong)(dVar30 + -360.0) & -(ulonglong)(180.0 < dVar30));
  if (((double)_DAT_14c762780 <= ABS(dVar29)) ||
     (lVar20 = local_138, (double)_DAT_14c762780 <= ABS(dVar30))) {
    if ((0.0 < *(double *)(param_1 + 0xd0)) &&
       (dVar11 = *(double *)(param_1 + 0xd0) - (double)*(float *)(param_2 + 3),
       *(double *)(param_1 + 0xd0) = dVar11, 0.0 < dVar11)) goto LAB_1480206fd;
    dVar11 = SQRT(dVar29 * dVar29 + dVar30 * dVar30);
    if (*(char *)(param_1 + 0xd8) == '\0') {
      plVar9 = *(longlong **)(lVar22 + 0x60);
      if (plVar9 == (longlong *)0x0) {
        puVar21 = (undefined8 *)FUN_14001cc68(0x28,0x10);
        puVar21[1] = 0;
        puVar21[2] = 0;
        *(undefined8 *)((longlong)puVar21 + 0x11) = 0;
        *(undefined8 *)((longlong)puVar21 + 0x19) = 0;
        *puVar21 = &PTR_FUN_14ad2a860;
        puVar25 = *(undefined8 **)(param_1 + 0x88);
        *(undefined8 **)(param_1 + 0x88) = puVar21;
LAB_148020883:
        if (puVar25 != (undefined8 *)0x0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
      else {
        (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_130);
        ppuVar4 = (undefined8 **)(param_1 + 0x88);
        puVar25 = local_130;
        if (ppuVar4 == &local_130) goto LAB_148020883;
        puVar25 = *ppuVar4;
        *ppuVar4 = local_130;
        local_130 = (undefined8 *)0x0;
        if (puVar25 != (undefined8 *)0x0) {
          (**(code **)*puVar25)(puVar25,1);
          puVar25 = local_130;
          goto LAB_148020883;
        }
      }
      uVar13 = DAT_14c8463f8._4_4_;
      uVar31 = (undefined4)DAT_14c8463f8;
      uVar28 = DAT_14c8463f0._4_4_;
      *(undefined4 *)(param_1 + 0xc0) = (undefined4)DAT_14c8463f0;
      *(undefined4 *)(param_1 + 0xc4) = uVar28;
      *(undefined4 *)(param_1 + 200) = uVar31;
      *(undefined4 *)(param_1 + 0xcc) = uVar13;
      lVar20 = *(longlong *)(param_1 + 0x90);
      if (lVar20 != 0) {
        uVar28 = *(undefined4 *)(lVar20 + 0x1c);
        uVar31 = *(undefined4 *)(lVar20 + 0x20);
        uVar13 = *(undefined4 *)(lVar20 + 0x24);
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar20 + 0x18);
        *(undefined4 *)(param_1 + 0xc4) = uVar28;
        *(undefined4 *)(param_1 + 200) = uVar31;
        *(undefined4 *)(param_1 + 0xcc) = uVar13;
      }
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    plVar9 = *(longlong **)(param_1 + 0x88);
    lVar20 = plVar9[2];
    lVar22 = plVar9[3];
    plVar9[2] = (longlong)dVar11;
    plVar9[3] = 0;
    (**(code **)(*plVar9 + 8))(plVar9,(int)lVar20,lVar22);
    local_e4 = 0;
    local_e8 = *(undefined4 *)(param_2 + 3);
    plVar9 = *(longlong **)(param_1 + 0x88);
    local_f0 = lVar24;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      bVar15 = false;
      lVar20 = local_138;
    }
    else {
      local_128 = 1.0 - (double)plVar9[2] / dVar11;
      local_118 = dVar30 * local_128;
      local_128 = dVar29 * local_128;
      uStack_100 = param_2[1];
      local_f8 = (longlong *)param_2[2];
      if (local_f8 == (longlong *)0x0) {
        local_f8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      local_108 = *param_2;
      local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffff00000000);
      uStack_120 = CONCAT62(uStack_120._2_6_,0x101);
      local_110 = 0x101;
      plVar9 = *(longlong **)(param_1 + 0x90);
      if ((plVar9[1] == 0) || (*(char *)(plVar9[1] + 0x30) != '\0')) {
        (**(code **)(*plVar9 + 0x48))(plVar9,&local_108,&local_130);
        lVar20 = *(longlong *)(param_1 + 0x90);
        uVar28 = *(undefined4 *)(lVar20 + 0x18);
        uVar31 = *(undefined4 *)(lVar20 + 0x1c);
        uVar13 = *(undefined4 *)(lVar20 + 0x20);
        uVar14 = *(undefined4 *)(lVar20 + 0x24);
        *(undefined4 *)pdVar1 = uVar28;
        *(undefined4 *)(param_1 + 0x1c) = uVar31;
        *(undefined4 *)(param_1 + 0x20) = uVar13;
        *(undefined4 *)(param_1 + 0x24) = uVar14;
        *(undefined4 *)(param_1 + 0x98) = uVar28;
        *(undefined4 *)(param_1 + 0x9c) = uVar31;
        *(undefined4 *)(param_1 + 0xa0) = uVar13;
        *(undefined4 *)(param_1 + 0xa4) = uVar14;
        if (((uStack_120 & 1) != 0) || ((char)local_110 == '\x01')) goto LAB_148020b5e;
        bVar15 = false;
      }
      else {
        lVar20 = plVar9[3];
        uVar28 = *(undefined4 *)((longlong)plVar9 + 0x1c);
        lVar22 = plVar9[4];
        uVar31 = *(undefined4 *)((longlong)plVar9 + 0x24);
        *(int *)pdVar1 = (int)lVar20;
        *(undefined4 *)(param_1 + 0x1c) = uVar28;
        *(int *)(param_1 + 0x20) = (int)lVar22;
        *(undefined4 *)(param_1 + 0x24) = uVar31;
        *(undefined4 *)(param_1 + 0x98) = (int)lVar20;
        *(undefined4 *)(param_1 + 0x9c) = uVar28;
        *(int *)(param_1 + 0xa0) = (int)lVar22;
        *(undefined4 *)(param_1 + 0xa4) = uVar31;
LAB_148020b5e:
        bVar15 = true;
      }
      plVar9 = local_f8;
      lVar20 = local_138;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_f8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    if ((!bVar15) && (*(char *)(*(longlong *)(param_1 + 0x88) + 0x20) == '\0')) {
      cVar19 = FUN_14801367e(param_1 + 0x48,lVar24);
      if (cVar19 != '\0') {
        lVar22 = FUN_147fd28d4();
        uVar7 = *(undefined8 *)(param_1 + 0xc0);
        uVar8 = *(undefined8 *)(param_1 + 200);
        lVar23 = FUN_147fe7bd6(lVar24,*(undefined4 *)(lVar22 + 0x48));
        if (lVar23 != 0) {
          lVar10 = *(longlong *)(lVar20 + 0xe8);
          uVar26 = (ulonglong)*(uint *)(lVar23 + 8);
          *(undefined8 *)(lVar10 + uVar26) = uVar8;
          *(undefined8 *)(lVar10 + 8 + uVar26) = uVar7;
          *(undefined8 *)(lVar10 + 0x10 + uVar26) = 0;
          *(byte *)(lVar23 + 0xc) = *(byte *)(lVar23 + 0xc) | 0xc;
        }
        lVar24 = FUN_147fe7bd6(lVar24,*(undefined4 *)(lVar22 + 0x3c));
        if (lVar24 != 0) {
          *(undefined1 *)(*(longlong *)(lVar20 + 0xe8) + (ulonglong)*(uint *)(lVar24 + 8)) = 1;
          *(byte *)(lVar24 + 0xc) = *(byte *)(lVar24 + 0xc) | 0xc;
        }
      }
      goto LAB_1480206fd;
    }
  }
  FUN_148020bcc(param_1,lVar20);
LAB_1480206fd:
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148020bcc FUN_148020bcc body=164 status=ok
// SIG undefined FUN_148020bcc(void)

void FUN_148020bcc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x88);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar4 = param_2 + 0x88;
    fVar5 = (float)FUN_148015152(param_1 + 0x28,lVar4);
    *(double *)(param_1 + 0xd0) = (double)fVar5;
    cVar2 = FUN_14801367e(param_1 + 0x48,lVar4);
    if (cVar2 != '\0') {
      lVar3 = FUN_147fd28d4();
      lVar4 = FUN_147fe7bd6(lVar4,*(undefined4 *)(lVar3 + 0x3c));
      if (lVar4 != 0) {
        *(undefined1 *)(*(longlong *)(param_2 + 0xe8) + (ulonglong)*(uint *)(lVar4 + 8)) = 0;
        *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) | 0xc;
      }
    }
  }
  return;
}



// FUNCTION 148020c70 FUN_148020c70 body=117 status=ok
// SIG undefined FUN_148020c70(void)

undefined8 FUN_148020c70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong *)(param_1 + 0xa8);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_1480143ea(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148020ce6 FUN_148020ce6 body=152 status=ok
// SIG undefined FUN_148020ce6(void)

void FUN_148020ce6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_147fd28d4();
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_147fd807e((longlong *)(lVar2 + 8),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar3 + 0x48);
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_147fd807e((longlong *)(lVar2 + 8),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar3 + 0x44);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar3 + 0x3c);
  return;
}



// FUNCTION 148020d86 FUN_148020d86 body=163 status=ok
// SIG undefined FUN_148020d86(void)

void FUN_148020d86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_145b67362();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148020dde;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_148020dde;
      }
    }
  }
  lVar5 = 0;
LAB_148020dde:
  if ((*(int *)(lVar5 + 0x7c) != -1) && (lVar1 = *(longlong *)(param_2 + 0x30), lVar1 != 0)) {
    lVar3 = FUN_147fe7c44(lVar1 + 0x88);
    if ((lVar3 != 0) &&
       (((*(byte *)(lVar3 + 0xc) & 4) != 0 &&
        (puVar4 = (undefined8 *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(lVar1 + 0xe8)),
        puVar4 != (undefined8 *)0x0)))) {
      *(undefined8 *)(param_1 + 0x18) = *puVar4;
    }
  }
  return;
}



// FUNCTION 148020e2a FUN_148020e2a body=144 status=ok
// SIG undefined FUN_148020e2a(void)

void FUN_148020e2a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FUN_145b67362();
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_148020e7c;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar2;
        }
        goto LAB_148020e7c;
      }
    }
  }
  lVar5 = 0;
LAB_148020e7c:
  if (*(char *)(lVar5 + 0x39) == '\x01') {
    lVar2 = *param_3;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = FUN_147fe7bd6(lVar2,*(undefined4 *)(lVar5 + 0x78));
    if (lVar4 != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar4 + 8)) = uVar1;
      *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) | 0xc;
    }
  }
  return;
}



// FUNCTION 148020eba FUN_148020eba body=323 status=ok
// SIG undefined FUN_148020eba(void)

void FUN_148020eba(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b67362();
    lVar6 = *(longlong *)(param_1 + 8);
    if (lVar6 != 0) {
      lVar8 = 0;
      if ((lVar5 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 == 0)) goto LAB_148020f19;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar8 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar8 = lVar6;
        }
        goto LAB_148020f19;
      }
    }
  }
  lVar8 = 0;
LAB_148020f19:
  if (*(char *)(lVar8 + 0x39) == '\0') {
    uVar9 = (undefined4)*(undefined8 *)(param_1 + 0x20);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  }
  else {
    lVar6 = FUN_147fe7c44(param_3 + 0x88,*(undefined4 *)(lVar8 + 0x78));
    if (lVar6 == 0) {
      puVar7 = &DAT_14ad36dd8;
    }
    else {
      puVar7 = (undefined8 *)((ulonglong)*(uint *)(lVar6 + 8) + *(longlong *)(param_3 + 0xe8));
    }
    uVar1 = *puVar7;
    uVar9 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  dVar4 = (double)CONCAT44(uVar10,uVar9);
  if (*(char *)(lVar8 + 0x38) == '\x01') {
    dVar4 = (double)CONCAT44(uVar10,uVar9) + *(double *)(param_1 + 0x18);
  }
  *(double *)(param_1 + 0x18) = dVar4;
  if ((*(char *)(lVar8 + 0x60) == '\x01') && (dVar2 = *(double *)(lVar8 + 0x58), 0.0 < dVar2)) {
    for (; dVar2 < dVar4; dVar4 = dVar4 - dVar2) {
    }
  }
  *(double *)(param_1 + 0x18) = dVar4;
  if ((*(char *)(lVar8 + 0x50) == '\x01') && (dVar4 < *(double *)(lVar8 + 0x40))) {
    dVar4 = *(double *)(lVar8 + 0x40);
  }
  if ((*(char *)(lVar8 + 0x51) == '\x01') && (*(double *)(lVar8 + 0x48) < dVar4)) {
    dVar4 = *(double *)(lVar8 + 0x48);
  }
  *(double *)(param_1 + 0x18) = dVar4;
  lVar6 = FUN_147fe7bd6(param_3 + 0x88,*(undefined4 *)(lVar8 + 0x7c));
  if (lVar6 != 0) {
    *(double *)(*(longlong *)(param_3 + 0xe8) + (ulonglong)*(uint *)(lVar6 + 8)) = dVar4;
    *(byte *)(lVar6 + 0xc) = *(byte *)(lVar6 + 0xc) | 0xc;
  }
  return;
}



// FUNCTION 148020ffe FUN_148020ffe body=168 status=ok
// SIG undefined FUN_148020ffe(void)

void FUN_148020ffe(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (*param_3 != 1) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_145b67362();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_148021061;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_148021061;
      }
    }
  }
  lVar4 = 0;
LAB_148021061:
  if (*(char *)(lVar4 + 0x50) == '\x01') {
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
  }
  else {
    uVar5 = 0xffefffffffffffff;
  }
  if (*(char *)(lVar4 + 0x51) == '\x01') {
    uVar6 = *(undefined8 *)(lVar4 + 0x48);
  }
  else {
    uVar6 = 0x7fefffffffffffff;
  }
  uVar5 = FUN_1480210a6(param_3 + 2,*(undefined8 *)(param_1 + 0x18),uVar5,uVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  return;
}



// FUNCTION 1480210a6 FUN_1480210a6 body=153 status=ok
// SIG undefined FUN_1480210a6(void)

double FUN_1480210a6(double *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_2;
  }
  dVar1 = *param_1;
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    dVar2 = dVar1 + param_2;
    if (dVar2 < param_3) {
      *param_1 = dVar1 - (param_3 - param_2);
      return param_3;
    }
    if (dVar2 <= param_4) {
      *param_1 = 0.0;
      *(undefined1 *)(param_1 + 1) = 0;
      return dVar2;
    }
    *param_1 = dVar1 - (param_4 - param_2);
  }
  else {
    if (dVar1 < param_3) {
      *param_1 = dVar1 - param_3;
      *(undefined1 *)((longlong)param_1 + 9) = 1;
      return param_3;
    }
    if (dVar1 <= param_4) {
      *param_1 = 0.0;
      *(undefined1 *)(param_1 + 1) = 0;
      return dVar1;
    }
    *param_1 = dVar1 - param_4;
    *(undefined1 *)((longlong)param_1 + 9) = 1;
  }
  return param_4;
}



// FUNCTION 148021140 FUN_148021140 body=113 status=ok
// SIG undefined FUN_148021140(void)

void FUN_148021140(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1480211b2();
  puVar2 = (undefined8 *)(param_1 + 0x20);
  puVar1 = *(undefined8 **)param_3[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_3[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148021188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x170))(param_3,puVar2,8);
    return;
  }
  thunk_FUN_146821949(param_3,puVar2);
  return;
}



// FUNCTION 1480211b2 FUN_1480211b2 body=78 status=ok
// SIG undefined FUN_1480211b2(void)

void FUN_1480211b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_3[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_3[1])[1]) {
    *(undefined8 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001480211e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x170))
              (param_3,(undefined8 *)(param_1 + 0x18),8,*(code **)(*param_3 + 0x170));
    return;
  }
  thunk_FUN_146821949(param_3);
  return;
}



// FUNCTION 148021200 FUN_148021200 body=575 status=ok
// SIG undefined FUN_148021200(void)

void FUN_148021200(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      if (*(char *)(param_1 + 0x39) == '\x01') {
        lVar2 = param_2[1];
        local_58 = L"PreBlendedInputSlotRequiresVariable";
        local_50 = 0x23;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"CameraRigInputSlot";
        local_50 = 0x12;
        FUN_1446e940c(local_60,&local_58);
        FUN_140208bae(&local_58,local_60,local_5c,
                      L"An input slot with pre-blend enabled must specify a variable (built-in or custom) to blend with other input slots"
                     );
        FUN_147fd2ef2(lVar2,1,param_1,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
      }
      goto LAB_148021363;
    }
    FUN_147fdde46(*(longlong *)(param_1 + 0x70),&local_58);
    uVar9 = (uint)local_58;
    uVar11 = local_58._4_4_;
    uVar10 = (undefined1)local_50;
    uVar12 = local_50._2_2_;
  }
  else {
    uVar5 = FUN_147fd28d4();
    puVar6 = (uint *)FUN_147fd2bd2(uVar5,*(undefined4 *)(param_1 + 0x68));
    uVar9 = *puVar6;
    uVar11 = puVar6[1];
    uVar10 = (char)puVar6[2];
    uVar12 = *(undefined2 *)((longlong)puVar6 + 10);
  }
  if (uVar9 != 0xffffffff) {
    lVar2 = *param_2;
    plVar1 = (longlong *)(lVar2 + 8);
    iVar4 = *(int *)(lVar2 + 0x10);
    lVar8 = (longlong)iVar4;
    *(uint *)(lVar2 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0x14) < iVar4 + 1U) {
      FUN_147fd807e(plVar1,iVar4);
    }
    lVar3 = *plVar1;
    *(uint *)(lVar3 + lVar8 * 0xc) = uVar9;
    *(uint *)(lVar3 + 4 + lVar8 * 0xc) = uVar11;
    *(undefined1 *)(lVar3 + 8 + lVar8 * 0xc) = uVar10;
    *(undefined1 *)(lVar3 + 9 + lVar8 * 0xc) = 1;
    *(undefined2 *)(lVar3 + 10 + lVar8 * 0xc) = uVar12;
    FUN_140056680(&local_58,L"Transient");
    pwVar7 = local_58;
    if (local_50 == 0) {
      pwVar7 = L"";
    }
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    local_64 = uVar11;
    iVar4 = FUN_144a49b4a(iVar4,pwVar7);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = iVar4 + (uVar9 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9;
    iVar4 = *(int *)(lVar2 + 0x10);
    lVar8 = (longlong)iVar4;
    *(uint *)(lVar2 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0x14) < iVar4 + 1U) {
      FUN_147fd807e(plVar1,iVar4);
    }
    lVar2 = *plVar1;
    *(uint *)(lVar2 + lVar8 * 0xc) = uVar11;
    *(uint *)(lVar2 + 4 + lVar8 * 0xc) = local_64;
    *(undefined1 *)(lVar2 + 8 + lVar8 * 0xc) = uVar10;
    *(undefined1 *)(lVar2 + 9 + lVar8 * 0xc) = 1;
    *(undefined2 *)(lVar2 + 10 + lVar8 * 0xc) = uVar12;
    *(uint *)(param_1 + 0x7c) = uVar9;
    *(uint *)(param_1 + 0x78) = uVar11;
  }
LAB_148021363:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148021448 FUN_148021448 body=179 status=ok
// SIG undefined FUN_148021448(void)

void FUN_148021448(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar3 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = FUN_145a77b56();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar9 = 0;
      if ((lVar7 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1480214af;
      if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar9 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar9 = lVar1;
        }
        goto LAB_1480214af;
      }
    }
  }
  lVar9 = 0;
LAB_1480214af:
  if ((*(int *)(lVar9 + 0xa4) != -1) && (lVar1 = *(longlong *)(param_2 + 0x30), lVar1 != 0)) {
    lVar7 = FUN_147fe7c44(lVar1 + 0x88);
    if ((lVar7 != 0) &&
       (((*(byte *)(lVar7 + 0xc) & 4) != 0 &&
        (puVar8 = (undefined8 *)((ulonglong)*(uint *)(lVar7 + 8) + *(longlong *)(lVar1 + 0xe8)),
        puVar8 != (undefined8 *)0x0)))) {
      uVar3 = puVar8[1];
      *(undefined8 *)(param_1 + 0x18) = *puVar8;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
    }
  }
  return;
}



// FUNCTION 1480214fc FUN_1480214fc body=135 status=ok
// SIG undefined FUN_1480214fc(void)

void FUN_1480214fc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145a77b56();
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_148021549;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar2;
        }
        goto LAB_148021549;
      }
    }
  }
  lVar6 = 0;
LAB_148021549:
  if (*(char *)(lVar6 + 0x39) == '\x01') {
    lVar2 = *param_3;
    lVar5 = FUN_147fe7bd6(lVar2,*(undefined4 *)(lVar6 + 0xa0));
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar5 + 8));
      *puVar1 = *(undefined8 *)(param_1 + 0x28);
      puVar1[1] = uVar4;
      *(byte *)(lVar5 + 0xc) = *(byte *)(lVar5 + 0xc) | 0xc;
    }
  }
  return;
}



// FUNCTION 148021584 FUN_148021584 body=457 status=ok
// SIG undefined FUN_148021584(void)

void FUN_148021584(longlong param_1,undefined8 param_2,longlong param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  double dVar11;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = FUN_145a77b56();
    lVar8 = *(longlong *)(param_1 + 8);
    if (lVar8 != 0) {
      lVar10 = 0;
      if ((lVar7 == 0) || (lVar4 = *(longlong *)(lVar8 + 0x10), lVar4 == 0)) goto LAB_1480215e0;
      if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar10 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar10 = lVar8;
        }
        goto LAB_1480215e0;
      }
    }
  }
  lVar10 = 0;
LAB_1480215e0:
  if (*(char *)(lVar10 + 0x39) == '\x01') {
    lVar8 = FUN_147fe7c44(param_3 + 0x88,*(undefined4 *)(lVar10 + 0xa0));
    if (lVar8 == 0) {
      puVar9 = (undefined8 *)&DAT_14ad36de0;
    }
    else {
      puVar9 = (undefined8 *)((ulonglong)*(uint *)(lVar8 + 8) + *(longlong *)(param_3 + 0xe8));
    }
    uVar6 = puVar9[1];
    *(undefined8 *)(param_1 + 0x28) = *puVar9;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
  }
  pdVar1 = (double *)(param_1 + 0x18);
  if (*(char *)(lVar10 + 0x38) == '\x01') {
    dVar5 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x18) = dVar5;
    *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x20);
  }
  else {
    *pdVar1 = *(double *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    dVar5 = *pdVar1;
  }
  if ((*(char *)(lVar10 + 0x78) == '\x01') && (dVar11 = *(double *)(lVar10 + 0x70), 0.0 < dVar11)) {
    for (; dVar11 < dVar5; dVar5 = dVar5 - dVar11) {
    }
  }
  *(double *)(param_1 + 0x18) = dVar5;
  dVar11 = *(double *)(param_1 + 0x20);
  if ((*(char *)(lVar10 + 0x88) == '\x01') && (dVar3 = *(double *)(lVar10 + 0x80), 0.0 < dVar3)) {
    for (; dVar3 < dVar11; dVar11 = dVar11 - dVar3) {
    }
  }
  *(double *)(param_1 + 0x20) = dVar11;
  if ((*(char *)(lVar10 + 0x50) == '\x01') && (dVar5 < *(double *)(lVar10 + 0x40))) {
    dVar5 = *(double *)(lVar10 + 0x40);
  }
  if ((*(char *)(lVar10 + 0x51) == '\x01') && (*(double *)(lVar10 + 0x48) < dVar5)) {
    dVar5 = *(double *)(lVar10 + 0x48);
  }
  *pdVar1 = dVar5;
  if ((*(char *)(lVar10 + 0x68) == '\x01') && (dVar11 < *(double *)(lVar10 + 0x58))) {
    dVar11 = *(double *)(lVar10 + 0x58);
  }
  if ((*(char *)(lVar10 + 0x69) == '\x01') && (*(double *)(lVar10 + 0x60) < dVar11)) {
    dVar11 = *(double *)(lVar10 + 0x60);
  }
  *(double *)(param_1 + 0x20) = dVar11;
  lVar8 = FUN_147fe7bd6(param_3 + 0x88,*(undefined4 *)(lVar10 + 0xa4));
  if (lVar8 != 0) {
    dVar5 = *(double *)(param_1 + 0x20);
    pdVar2 = (double *)(*(longlong *)(param_3 + 0xe8) + (ulonglong)*(uint *)(lVar8 + 8));
    *pdVar2 = *pdVar1;
    pdVar2[1] = dVar5;
    *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 0xc;
  }
  return;
}



// FUNCTION 14802174e FUN_14802174e body=255 status=ok
// SIG undefined FUN_14802174e(void)

void FUN_14802174e(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (*param_3 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_145a77b56();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1480217c5;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1480217c5;
      }
    }
  }
  lVar4 = 0;
LAB_1480217c5:
  if (*(char *)(lVar4 + 0x50) == '\x01') {
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
  }
  else {
    uVar5 = 0xffefffffffffffff;
  }
  if (*(char *)(lVar4 + 0x51) == '\x01') {
    uVar6 = *(undefined8 *)(lVar4 + 0x48);
  }
  else {
    uVar6 = 0x7fefffffffffffff;
  }
  if (*(char *)(lVar4 + 0x68) == '\x01') {
    uVar7 = (undefined4)*(undefined8 *)(lVar4 + 0x58);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x58) >> 0x20);
  }
  else {
    uVar7 = 0xffffffff;
    uVar8 = 0xffefffff;
  }
  if (*(char *)(lVar4 + 0x69) == '\x01') {
    uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x60);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x60) >> 0x20);
  }
  else {
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
  }
  uVar5 = FUN_1480210a6(param_3 + 2,*(undefined8 *)(param_1 + 0x18),uVar5,uVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = FUN_1480210a6(param_3 + 6,*(undefined8 *)(param_1 + 0x20),CONCAT44(uVar8,uVar7),
                        CONCAT44(uVar10,uVar9));
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 14802184e FUN_14802184e body=45 status=ok
// SIG undefined FUN_14802184e(void)

void FUN_14802184e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14010abd4(param_3,param_1 + 0x18);
  FUN_14010abd4(param_3,param_1 + 0x28);
  return;
}



// FUNCTION 148021888 FUN_148021888 body=590 status=ok
// SIG undefined FUN_148021888(void)

void FUN_148021888(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x90) == 0) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      if (*(char *)(param_1 + 0x39) == '\x01') {
        lVar2 = param_2[1];
        local_58 = L"PreBlendedInputSlotRequiresVariable";
        local_50 = 0x23;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"CameraRigInputSlot";
        local_50 = 0x12;
        FUN_1446e940c(local_60,&local_58);
        FUN_140208bae(&local_58,local_60,local_5c,
                      L"An input slot with pre-blend enabled must specify a variable (built-in or custom) to blend with other input slots"
                     );
        FUN_147fd2ef2(lVar2,1,param_1,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
      }
      goto LAB_1480219fa;
    }
    FUN_147fdde46(*(longlong *)(param_1 + 0x98),&local_58);
    uVar9 = (uint)local_58;
    uVar11 = local_58._4_4_;
    uVar10 = (undefined1)local_50;
    uVar12 = local_50._2_2_;
  }
  else {
    uVar5 = FUN_147fd28d4();
    puVar6 = (uint *)FUN_147fd2c70(uVar5,*(undefined4 *)(param_1 + 0x90));
    uVar9 = *puVar6;
    uVar11 = puVar6[1];
    uVar10 = (char)puVar6[2];
    uVar12 = *(undefined2 *)((longlong)puVar6 + 10);
  }
  if (uVar9 != 0xffffffff) {
    lVar2 = *param_2;
    plVar1 = (longlong *)(lVar2 + 8);
    iVar4 = *(int *)(lVar2 + 0x10);
    lVar8 = (longlong)iVar4;
    *(uint *)(lVar2 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0x14) < iVar4 + 1U) {
      FUN_147fd807e(plVar1,iVar4);
    }
    lVar3 = *plVar1;
    *(uint *)(lVar3 + lVar8 * 0xc) = uVar9;
    *(uint *)(lVar3 + 4 + lVar8 * 0xc) = uVar11;
    *(undefined1 *)(lVar3 + 8 + lVar8 * 0xc) = uVar10;
    *(undefined1 *)(lVar3 + 9 + lVar8 * 0xc) = 1;
    *(undefined2 *)(lVar3 + 10 + lVar8 * 0xc) = uVar12;
    FUN_140056680(&local_58,L"Transient");
    pwVar7 = local_58;
    if (local_50 == 0) {
      pwVar7 = L"";
    }
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    local_64 = uVar11;
    iVar4 = FUN_144a49b4a(iVar4,pwVar7);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = iVar4 + (uVar9 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9;
    iVar4 = *(int *)(lVar2 + 0x10);
    lVar8 = (longlong)iVar4;
    *(uint *)(lVar2 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0x14) < iVar4 + 1U) {
      FUN_147fd807e(plVar1,iVar4);
    }
    lVar2 = *plVar1;
    *(uint *)(lVar2 + lVar8 * 0xc) = uVar11;
    *(uint *)(lVar2 + 4 + lVar8 * 0xc) = local_64;
    *(undefined1 *)(lVar2 + 8 + lVar8 * 0xc) = uVar10;
    *(undefined1 *)(lVar2 + 9 + lVar8 * 0xc) = 1;
    *(undefined2 *)(lVar2 + 10 + lVar8 * 0xc) = uVar12;
    *(uint *)(param_1 + 0xa4) = uVar9;
    *(uint *)(param_1 + 0xa0) = uVar11;
  }
LAB_1480219fa:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148021ae8 FUN_148021ae8 body=288 status=ok
// SIG undefined FUN_148021ae8(void)

void FUN_148021ae8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145b6744c();
  }
  uVar11 = (undefined4)DAT_14c8463f0;
  uVar12 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = (undefined4)DAT_14c8463f8;
  uVar16 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar6);
      if (lVar2 != 0) {
        dVar1 = *(double *)(lVar2 + 0x18);
        dVar8 = *(double *)(lVar2 + 0x20);
        dVar9 = dVar1 * dVar1 + dVar8 * dVar8;
        if (dVar9 <= 0.0) {
          dVar8 = (double)CONCAT44(uVar16,uVar15);
        }
        uVar7 = -(ulonglong)(0.0 < dVar9);
        auVar10._0_8_ = ~uVar7 & CONCAT44(uVar12,uVar11);
        auVar10._12_4_ = uVar14;
        auVar10._8_4_ = uVar13;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulonglong)dVar1 & uVar7;
        auVar10 = auVar10 | auVar3;
        uVar11 = auVar10._0_4_;
        uVar12 = auVar10._4_4_;
        uVar13 = auVar10._8_4_;
        uVar14 = auVar10._12_4_;
        uVar15 = SUB84(dVar8,0);
        uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(param_1 + 0x78) * 8 != lVar6);
  }
  pdVar5 = (double *)FUN_148021c08(param_1 + 0x60,*param_3);
  dVar1 = pdVar5[1];
  *(double *)(param_1 + 0x28) = (double)CONCAT44(uVar12,uVar11) * *pdVar5;
  *(double *)(param_1 + 0x30) = (double)CONCAT44(uVar16,uVar15) * dVar1;
  cVar4 = FUN_14801367e(param_1 + 0x40,*param_3);
  if (cVar4 != '\0') {
    *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) ^ 0x8000000000000000;
  }
  cVar4 = FUN_14801367e(param_1 + 0x50,*param_3);
  if (cVar4 != '\0') {
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) ^ 0x8000000000000000;
  }
  FUN_1480214fc(param_1);
  return;
}



// FUNCTION 148021c08 FUN_148021c08 body=60 status=ok
// SIG undefined FUN_148021c08(void)

longlong FUN_148021c08(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((((int)param_1[1] == -1) || (lVar1 = FUN_147fe7c44(param_2), lVar1 == 0)) ||
      ((*(byte *)(lVar1 + 0xc) & 4) == 0)) ||
     (lVar1 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 0x60), lVar1 == 0)) {
    lVar1 = *param_1;
  }
  return lVar1;
}



// FUNCTION 148021c4c FUN_148021c4c body=183 status=ok
// SIG undefined FUN_148021c4c(void)

void FUN_148021c4c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_148021d04(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148021d04 FUN_148021d04 body=168 status=ok
// SIG undefined FUN_148021d04(void)

longlong FUN_148021d04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    FUN_1415b7ec4(L"Can\'t access evaluation context outside of RunCameraDirector",2,0);
  }
  else {
    lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0xc0) + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78d6a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return *(longlong *)(lVar1 + 0xa8);
      }
    }
    lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0xc0) + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 148021dba FUN_148021dba body=175 status=ok
// SIG undefined FUN_148021dba(void)

undefined8 FUN_148021dba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148021e78 FUN_148021e78 body=287 status=ok
// SIG undefined FUN_148021e78(void)

void FUN_148021e78(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [14];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x20);
  lVar1 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 0x20);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[6] = lVar1;
  FUN_147ff0ee8(local_b8,param_3);
  plVar3 = local_b8;
  plVar4 = param_1 + 7;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_148021fb6(local_b8,param_1 + 0x18,param_2 + 8);
  lVar1 = param_1[0x1a];
  param_1[0x1a] = param_3;
  local_44 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = FUN_14477b072(param_1,DAT_14cb2b5e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_44);
  FUN_147ff0faa(param_1 + 7,param_3);
  param_1[0x1a] = lVar1;
  FUN_148022024(local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148021fb6 FUN_148021fb6 body=110 status=ok
// SIG undefined FUN_148021fb6(void)

undefined8 * FUN_148021fb6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    param_2 = (undefined8 *)*param_1;
  }
  uVar4 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  *param_2 = uVar4;
  param_2[1] = lVar3;
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
  return param_1;
}



// FUNCTION 148022024 FUN_148022024 body=127 status=ok
// SIG undefined FUN_148022024(void)

void FUN_148022024(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148022097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1480220a4 FUN_1480220a4 body=272 status=ok
// SIG undefined FUN_1480220a4(void)

void FUN_1480220a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((((lVar1 == 0) || (lVar3 = FUN_1459d68ac(), lVar3 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (*(longlong *)(param_1 + 0x38) == 0)))) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    local_40 = L"MissingBlueprintClass";
    local_38 = 0x15;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"BlueprintCameraNode";
    local_38 = 0x13;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"No evaluator Blueprint class is set.");
    FUN_147fd2ef2(uVar2,1,param_1,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480221be FUN_1480221be body=85 status=ok
// SIG undefined FUN_1480221be(void)

undefined8 * FUN_1480221be(undefined8 *param_1)

{
  FUN_147fd9220();
  *param_1 = &PTR_LAB_14ad2a780;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_147fd923c(param_1,4);
  return param_1;
}



// FUNCTION 148022214 FUN_148022214 body=8 status=ok
// SIG undefined FUN_148022214(void)

void FUN_148022214(undefined8 param_1,undefined8 param_2)

{
  FUN_14802221c(param_1,param_2,0);
  return;
}



// FUNCTION 14802221c FUN_14802221c body=470 status=ok
// SIG undefined FUN_14802221c(void)

void FUN_14802221c(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)(param_1 + 0x20);
  local_58 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar5;
  local_78 = plVar5;
  local_70 = plVar5;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      lVar1 = *local_a0 + (longlong)iStack_84 * 0x18;
      plVar5 = (longlong *)FUN_14479d2ce(*local_a0 + (longlong)iStack_84 * 0x18);
      if (plVar5 == (longlong *)0x0) {
LAB_14802237d:
        *(undefined1 *)(lVar1 + 0xd) = 1;
      }
      else {
        uVar3 = FUN_1447addd0((longlong)plVar5 + 0x2c,0x10);
        bVar2 = FUN_147fe7d8c(param_2,uVar3);
        if ((bVar2 & param_3) == 0) {
          uVar3 = FUN_1447addd0((longlong)plVar5 + 0x2c,0x10);
          uVar6 = (**(code **)(*plVar5 + 0x2a8))(plVar5);
          uVar4 = (**(code **)(*plVar5 + 0x2a0))(plVar5);
          local_a8 = 0;
          FUN_147fe7d1c(param_2,uVar3,uVar4,uVar6);
          if ((*(int *)(lVar1 + 8) == 0) && (*(char *)(lVar1 + 0xc) == '\0')) goto LAB_14802237d;
        }
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_148028938(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480223f4 FUN_1480223f4 body=274 status=ok
// SIG undefined FUN_1480223f4(void)

void FUN_1480223f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14802221c(param_1,param_2,0);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_147fd8e8e(param_3,&local_48);
  if ((longlong)(int)uStack_40 != 0) {
    puVar4 = local_48 + (longlong)(int)uStack_40 * 2;
    puVar5 = local_48;
    do {
      local_58 = *puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        FUN_148022508(param_1,&local_58);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_50 = plVar3;
        FUN_148022508(param_1,&local_58);
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  FUN_148022646(param_1);
  FUN_1480024bc(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148022508 FUN_148022508 body=293 status=ok
// SIG undefined FUN_148022508(void)

void FUN_148022508(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    FUN_14802221c(param_1,*param_2 + 200,1);
    lVar5 = (longlong)*(int *)(*param_2 + 0xb58);
    if (lVar5 != 0) {
      puVar4 = *(undefined8 **)(*param_2 + 0xb50);
      puVar6 = puVar4 + lVar5 * 2;
      do {
        local_48 = *puVar4;
        plVar3 = (longlong *)puVar4[1];
        if (plVar3 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          FUN_148022508(param_1,&local_48);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_40 = plVar3;
          FUN_148022508(param_1,&local_48);
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
        puVar4 = puVar4 + 2;
      } while (puVar4 != puVar6);
    }
  }
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148022646 FUN_148022646 body=331 status=ok
// SIG undefined FUN_148022646(void)

void FUN_148022646(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x20);
  local_28 = param_1 + 0x30;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_70 = plVar1;
  local_48 = plVar1;
  local_40 = plVar1;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = *local_70;
      *(undefined1 *)(lVar2 + 0xc + (longlong)iStack_54 * 0x18) = 0;
      if (*(char *)(lVar2 + 0xd + (longlong)iStack_54 * 0x18) == '\x01') {
        FUN_148028b32(local_48,iStack_54);
        local_38 = CONCAT11(local_38._1_1_,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_148028938(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148022792 FUN_148022792 body=138 status=ok
// SIG undefined FUN_148022792(void)

void FUN_148022792(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 6);
  if (lVar2 != 0) {
    if (*param_2 == 1) {
      iVar1 = *(int *)(lVar2 + 0xd8);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0xd0);
        lVar3 = 0;
        do {
          FUN_14802288a(param_1,*(undefined8 *)(lVar2 + lVar3));
          lVar3 = lVar3 + 8;
        } while ((longlong)iVar1 * 8 != lVar3);
      }
    }
    else if ((*param_2 == 0) && (iVar1 = *(int *)(lVar2 + 0xd8), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 0xd0);
      lVar3 = 0;
      do {
        FUN_14802281c(param_1,*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 14802281c FUN_14802281c body=109 status=ok
// SIG undefined FUN_14802281c(void)

void FUN_14802281c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
    piVar1 = (int *)FUN_148028bfc(param_1 + 0x20,
                                  (uint)((ulonglong)local_20 >> 0x20) ^ (uint)local_20,&local_20);
    *piVar1 = *piVar1 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802288a FUN_14802288a body=160 status=ok
// SIG undefined FUN_14802288a(void)

void FUN_14802288a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_20 = local_28;
    iVar2 = FUN_148028c84((longlong *)(param_1 + 0x20),
                          (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
    if (((iVar2 != -1) &&
        (lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18, piVar3 = (int *)(lVar1 + 8)
        , piVar3 != (int *)0x0 && lVar1 != 0)) && (*piVar3 != 0)) {
      *piVar3 = *piVar3 + -1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802292c FUN_14802292c body=111 status=ok
// SIG undefined FUN_14802292c(void)

void FUN_14802292c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
    lVar1 = FUN_148028bfc(param_1 + 0x20,(uint)((ulonglong)local_20 >> 0x20) ^ (uint)local_20,
                          &local_20);
    *(undefined1 *)(lVar1 + 4) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802299c FUN_14802299c body=36 status=ok
// SIG undefined FUN_14802299c(void)

void FUN_14802299c(longlong param_1,undefined8 *param_2)

{
  FUN_147fd923c(param_1,6);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  return;
}



// FUNCTION 1480229c0 FUN_1480229c0 body=212 status=ok
// SIG undefined FUN_1480229c0(void)

void FUN_1480229c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147fd8af8(*param_2 + 0x20,&local_28);
  plVar9 = local_20;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (local_28 != 0) {
    uVar6 = *(undefined8 *)(local_28 + 0x40);
    uVar7 = *(undefined8 *)(local_28 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(local_28 + 0x50);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    uVar2 = *(undefined4 *)(local_28 + 0x58);
    uVar3 = *(undefined4 *)(local_28 + 0x5c);
    uVar4 = *(undefined4 *)(local_28 + 0x60);
    uVar5 = *(undefined4 *)(local_28 + 100);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(local_28 + 0x68);
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  *(longlong *)(param_1 + 0x28) = local_28;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != local_20) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x30) = plVar9;
    plVar9 = local_20;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148022a96 FUN_148022a96 body=263 status=ok
// SIG undefined FUN_148022a96(void)

void FUN_148022a96(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_2 != 0) || ((char)param_2[1] != '\x01')) goto LAB_148022b72;
  if (*(longlong *)(param_2 + 6) == 0) {
    iVar2 = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    FUN_147fe63ce();
    if ((longlong)(int)uStack_30 != 0) {
      lVar1 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(local_38 + lVar1) + 0xb0);
        if (iVar2 != 0) goto LAB_148022b11;
        lVar1 = lVar1 + 8;
      } while ((longlong)(int)uStack_30 * 8 != lVar1);
    }
    iVar2 = 0;
LAB_148022b11:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  lVar1 = *(longlong *)(param_2 + 0xc);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x4c) == '\x01')) {
    iVar2 = *(int *)(lVar1 + 0x48);
  }
  if (3 < iVar2 - 1U) goto LAB_148022b72;
  param_2 = param_2 + 2;
  switch(iVar2) {
  case 1:
    FUN_1438e27ca(param_1,param_2);
    goto LAB_148022b72;
  case 2:
    FUN_1438e283e(param_1,param_2);
    goto LAB_148022b72;
  case 3:
    uVar3 = 0;
    break;
  case 4:
    uVar3 = 1;
  }
  FUN_1438e28b4(param_1,param_2,uVar3);
LAB_148022b72:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148022b9e FUN_148022b9e body=112 status=ok
// SIG undefined FUN_148022b9e(void)

longlong FUN_148022b9e(longlong param_1)

{
  FUN_147fdbb04();
  FUN_147fe7938(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0x200000000;
  FUN_144894d4c(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0xac0) = 0;
  *(undefined2 *)(param_1 + 0xad0) = 0;
  FUN_147fdae24(param_1 + 0xae0);
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  return param_1;
}



// FUNCTION 148022c0e FUN_148022c0e body=50 status=ok
// SIG undefined FUN_148022c0e(void)

void FUN_148022c0e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb40) != 0) {
    FUN_1400020a8();
  }
  FUN_147fd6aaa(param_1 + 0xae0);
  FUN_147fd6a5a(param_1);
  return;
}



// FUNCTION 148022c40 FUN_148022c40 body=99 status=ok
// SIG undefined FUN_148022c40(void)

undefined4 * FUN_148022c40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  uVar2 = *(undefined8 *)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_148011f9e(param_1 + 6,iVar1,0);
    FUN_148012000(*(undefined8 *)(param_1 + 6),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148022ca4 FUN_148022ca4 body=46 status=ok
// SIG undefined FUN_148022ca4(void)

void FUN_148022ca4(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
  return;
}



// FUNCTION 148022cd2 FUN_148022cd2 body=118 status=ok
// SIG undefined FUN_148022cd2(void)

ulonglong FUN_148022cd2(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148022d4a FUN_148022d4a body=375 status=ok
// SIG undefined FUN_148022d4a(void)

void FUN_148022d4a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_3;
  uVar4 = *(undefined4 *)(lVar2 + 0x18);
  uVar5 = *(undefined4 *)(lVar2 + 0x1c);
  uVar6 = *(undefined4 *)(lVar2 + 0x20);
  uVar7 = *(undefined4 *)(lVar2 + 0x24);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  FUN_147fd8af8(*param_2 + 0x20,&local_48);
  if (local_40 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    local_50 = local_40;
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_1438e2cb6(param_1,local_58);
  if (local_48 != 0) {
    plVar8 = (longlong *)FUN_14479d2ce(local_48 + 0x28);
    if (plVar8 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        *(undefined1 *)(param_1 + 0xb8) = 0;
      }
      else {
        FUN_148022ec2(param_1,param_2,param_3);
      }
      if (*(char *)(param_1 + 0x30) == '\x01') {
        (**(code **)(*plVar8 + 0x688))(plVar8,param_1 + 0xa0,1);
      }
      goto LAB_148022e55;
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_148022e55:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148022ec2 FUN_148022ec2 body=853 status=ok
// SIG undefined FUN_148022ec2(void)

void FUN_148022ec2(longlong param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  lVar6 = FUN_147fd28d4();
  bVar5 = *(byte *)(param_1 + 0xb8);
  if (bVar5 == 0) {
    lVar2 = *param_3;
    lVar7 = FUN_147fe7c44(lVar2 + 0x88,*(undefined4 *)(lVar6 + 0x3c));
    if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0xc) & 4) == 0)) ||
       (pbVar8 = (byte *)((ulonglong)*(uint *)(lVar7 + 8) + *(longlong *)(lVar2 + 0xe8)),
       pbVar8 == (byte *)0x0)) {
      bVar10 = 0;
    }
    else {
      bVar10 = *pbVar8;
    }
    lVar6 = FUN_147fe7c44(lVar2 + 0x88,*(undefined4 *)(lVar6 + 0x48));
    if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0xc) & 4) == 0)) ||
       (puVar9 = (undefined8 *)((ulonglong)*(uint *)(lVar6 + 8) + *(longlong *)(lVar2 + 0xe8)),
       puVar9 == (undefined8 *)0x0)) {
      bVar5 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x98) = puVar9[2];
      uVar4 = puVar9[1];
      *(undefined8 *)(param_1 + 0x88) = *puVar9;
      *(undefined8 *)(param_1 + 0x90) = uVar4;
      bVar5 = 1;
    }
    bVar5 = bVar5 & bVar10;
    *(byte *)(param_1 + 0xb8) = bVar5;
  }
  dVar11 = 0.0;
  dVar13 = 0.0;
  uVar19 = 0;
  uVar20 = 0;
  dVar3 = 0.0;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar6 = 0;
    dVar13 = 0.0;
    uVar15 = 0;
    uVar16 = 0;
    dVar12 = 0.0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar6);
      dVar14 = *(double *)(lVar2 + 0x18);
      dVar1 = *(double *)(lVar2 + 0x20);
      dVar3 = dVar14 * dVar14 + dVar1 * dVar1;
      uVar19 = SUB84(dVar1,0);
      uVar20 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar3 <= dVar12) {
        uVar19 = uVar15;
        uVar20 = uVar16;
      }
      dVar13 = (double)(~-(ulonglong)(dVar12 < dVar3) & (ulonglong)dVar13 |
                       (ulonglong)dVar14 & -(ulonglong)(dVar12 < dVar3));
      if (dVar3 <= dVar12) {
        dVar3 = dVar12;
      }
      lVar6 = lVar6 + 8;
      uVar15 = uVar19;
      uVar16 = uVar20;
      dVar12 = dVar3;
    } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar6);
  }
  dVar12 = *(double *)(param_1 + 0x60);
  dVar14 = *(double *)(param_1 + 0x68);
  dVar17 = dVar12 * dVar12 + dVar14 * dVar14;
  dVar1 = 1.0;
  if (9.99999993922529e-09 < dVar17) {
    dVar14 = dVar14 * (1.0 / SQRT(dVar17));
  }
  else {
    dVar14 = 0.0;
  }
  dVar18 = dVar13 * dVar13 + (double)CONCAT44(uVar20,uVar19) * (double)CONCAT44(uVar20,uVar19);
  dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar17) &
                   (ulonglong)(dVar12 * (1.0 / SQRT(dVar17))));
  if (9.99999993922529e-09 < dVar18) {
    dVar17 = (double)CONCAT44(uVar20,uVar19) * (1.0 / SQRT(dVar18));
  }
  else {
    dVar17 = 0.0;
  }
  if (((dVar12 != 0.0) || (NAN(dVar12))) || ((dVar14 != 0.0 || (NAN(dVar14))))) {
    dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar18) &
                     (ulonglong)((1.0 / SQRT(dVar18)) * dVar13));
    dVar11 = 0.0;
    if ((((dVar18 != 0.0) || (NAN(dVar18))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
      dVar12 = dVar12 * dVar18 + dVar17 * dVar14;
      dVar11 = dVar12;
      if (1.0 <= dVar12) {
        dVar11 = 1.0;
      }
      dVar11 = acos((double)(-(ulonglong)(dVar12 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar12 < -1.0) & (ulonglong)dVar11));
      dVar11 = dVar11 * 57.29577951308232;
      bVar5 = *(byte *)(param_1 + 0xb8);
    }
  }
  if (0.0 < *(float *)(param_2 + 8)) {
    dVar1 = (double)*(float *)(param_2 + 8);
  }
  *(double *)(param_1 + 0x60) = dVar13;
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uVar20,uVar19);
  if ((bVar5 & 1) != 0) {
    if ((dVar3 <= *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x20)) ||
       (*(double *)(param_1 + 0x28) <= dVar11 / dVar1)) {
      *(undefined1 *)(param_1 + 0xb8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x90);
    }
  }
  return;
}



// FUNCTION 14802324e FUN_14802324e body=301 status=ok
// SIG undefined FUN_14802324e(void)

ulonglong FUN_14802324e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1412daf9e(param_1 + 0x30);
  bVar3 = 1;
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  bVar4 = 1;
  if (cVar2 == '\0') {
    lVar1 = *param_2;
    if (lVar1 == 0) {
      bVar4 = 0;
      uVar5 = 0;
    }
    else {
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,local_58);
      FUN_147478f16(local_58,param_1 + 0x30);
      if (local_58[2] != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = (undefined7)((ulonglong)local_58 >> 8);
      bVar4 = 1;
    }
  }
  cVar2 = FUN_1412daf9e(param_1 + 0x78);
  if (cVar2 == '\0') {
    lVar1 = param_2[2];
    if (lVar1 == 0) {
      bVar3 = 0;
    }
    else {
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,local_58);
      FUN_147478f16(local_58,param_1 + 0x78);
      if (local_58[2] != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148023380 FUN_148023380 body=72 status=ok
// SIG undefined FUN_148023380(void)

undefined8 * FUN_148023380(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_14ad36eb0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1480233c8 FUN_1480233c8 body=76 status=ok
// SIG undefined FUN_1480233c8(void)

undefined8 * FUN_1480233c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *puVar1 = &PTR_FUN_14ad36ed0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148023414 FUN_148023414 body=80 status=ok
// SIG undefined FUN_148023414(void)

undefined8 * FUN_148023414(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14ad36ef0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148023468 FUN_148023468 body=84 status=ok
// SIG undefined FUN_148023468(void)

undefined8 * FUN_148023468(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_14ad36f10;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined4 *)(puVar1 + 5) = 0xbf800000;
  *(undefined1 *)((longlong)puVar1 + 0x34) = 1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1480234bc FUN_1480234bc body=88 status=ok
// SIG undefined FUN_1480234bc(void)

undefined8 * FUN_1480234bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *puVar1 = &PTR_FUN_14ad36f30;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 7) = 0xbf800000;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148023514 FUN_148023514 body=92 status=ok
// SIG undefined FUN_148023514(void)

undefined8 * FUN_148023514(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14ad36f50;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined4 *)(puVar1 + 9) = 0xbf800000;
  *(undefined1 *)((longlong)puVar1 + 0x54) = 1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14802357a FUN_14802357a body=56 status=ok
// SIG undefined FUN_14802357a(void)

undefined8 * FUN_14802357a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(200,0x10);
  FUN_148029e3a(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1480235b2 FUN_1480235b2 body=56 status=ok
// SIG undefined FUN_1480235b2(void)

undefined8 * FUN_1480235b2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_14802a758(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1480235ea FUN_1480235ea body=56 status=ok
// SIG undefined FUN_1480235ea(void)

undefined8 * FUN_1480235ea(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x178,0x10);
  FUN_14802b0dc(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14802362c FUN_14802362c body=88 status=ok
// SIG undefined FUN_14802362c(void)

undefined8 * FUN_14802362c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x19) = 0;
  *puVar1 = &PTR_FUN_14ad36f90;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x41) = *(undefined1 *)(param_1 + 0x2c);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148023684 FUN_148023684 body=92 status=ok
// SIG undefined FUN_148023684(void)

undefined8 * FUN_148023684(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29) = 0;
  *puVar1 = &PTR_FUN_14ad36fd0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x61) = *(undefined1 *)(param_1 + 0x2c);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1480236e0 FUN_1480236e0 body=102 status=ok
// SIG undefined FUN_1480236e0(void)

undefined8 * FUN_1480236e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  *puVar1 = &PTR_FUN_14ad37010;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(puVar1 + 0x10) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x81) = *(undefined1 *)(param_1 + 0x2c);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148023746 FUN_148023746 body=45 status=ok
// SIG undefined FUN_148023746(void)

longlong FUN_148023746(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023774 FUN_148023774 body=45 status=ok
// SIG undefined FUN_148023774(void)

longlong FUN_148023774(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480237a2 FUN_1480237a2 body=45 status=ok
// SIG undefined FUN_1480237a2(void)

longlong FUN_1480237a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480237d0 FUN_1480237d0 body=45 status=ok
// SIG undefined FUN_1480237d0(void)

longlong FUN_1480237d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480237fe FUN_1480237fe body=45 status=ok
// SIG undefined FUN_1480237fe(void)

longlong FUN_1480237fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802382c FUN_14802382c body=45 status=ok
// SIG undefined FUN_14802382c(void)

longlong FUN_14802382c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802385a FUN_14802385a body=45 status=ok
// SIG undefined FUN_14802385a(void)

longlong FUN_14802385a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023888 FUN_148023888 body=45 status=ok
// SIG undefined FUN_148023888(void)

longlong FUN_148023888(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480238b6 FUN_1480238b6 body=45 status=ok
// SIG undefined FUN_1480238b6(void)

longlong FUN_1480238b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023904 FUN_148023904 body=38 status=ok
// SIG undefined FUN_148023904(void)

undefined8 FUN_148023904(undefined8 param_1,int param_2)

{
  FUN_1480154ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023934 FUN_148023934 body=45 status=ok
// SIG undefined FUN_148023934(void)

longlong FUN_148023934(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023962 FUN_148023962 body=45 status=ok
// SIG undefined FUN_148023962(void)

longlong FUN_148023962(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145acf940(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480239b0 FUN_1480239b0 body=29 status=ok
// SIG undefined FUN_1480239b0(void)

undefined8 FUN_1480239b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480239ce FUN_1480239ce body=45 status=ok
// SIG undefined FUN_1480239ce(void)

longlong FUN_1480239ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480239fc FUN_1480239fc body=45 status=ok
// SIG undefined FUN_1480239fc(void)

longlong FUN_1480239fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023a2a FUN_148023a2a body=45 status=ok
// SIG undefined FUN_148023a2a(void)

longlong FUN_148023a2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023a58 FUN_148023a58 body=45 status=ok
// SIG undefined FUN_148023a58(void)

longlong FUN_148023a58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023a86 FUN_148023a86 body=45 status=ok
// SIG undefined FUN_148023a86(void)

longlong FUN_148023a86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023ab4 FUN_148023ab4 body=45 status=ok
// SIG undefined FUN_148023ab4(void)

longlong FUN_148023ab4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023ae2 FUN_148023ae2 body=45 status=ok
// SIG undefined FUN_148023ae2(void)

longlong FUN_148023ae2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ca19d8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023b10 FUN_148023b10 body=45 status=ok
// SIG undefined FUN_148023b10(void)

longlong FUN_148023b10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023b3e FUN_148023b3e body=45 status=ok
// SIG undefined FUN_148023b3e(void)

longlong FUN_148023b3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023b6c FUN_148023b6c body=45 status=ok
// SIG undefined FUN_148023b6c(void)

longlong FUN_148023b6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023b9a FUN_148023b9a body=45 status=ok
// SIG undefined FUN_148023b9a(void)

longlong FUN_148023b9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023bc8 FUN_148023bc8 body=45 status=ok
// SIG undefined FUN_148023bc8(void)

longlong FUN_148023bc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023c20 FUN_148023c20 body=65 status=ok
// SIG undefined FUN_148023c20(void)

undefined8 * FUN_148023c20(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ad330b0;
  puVar1 = (undefined8 *)param_1[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023c8c FUN_148023c8c body=29 status=ok
// SIG undefined FUN_148023c8c(void)

undefined8 FUN_148023c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023cd4 FUN_148023cd4 body=29 status=ok
// SIG undefined FUN_148023cd4(void)

undefined8 FUN_148023cd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023cf2 FUN_148023cf2 body=45 status=ok
// SIG undefined FUN_148023cf2(void)

longlong FUN_148023cf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023d20 FUN_148023d20 body=45 status=ok
// SIG undefined FUN_148023d20(void)

longlong FUN_148023d20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023d4e FUN_148023d4e body=45 status=ok
// SIG undefined FUN_148023d4e(void)

longlong FUN_148023d4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023d7c FUN_148023d7c body=45 status=ok
// SIG undefined FUN_148023d7c(void)

longlong FUN_148023d7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148023db4 FUN_148023db4 body=52 status=ok
// SIG undefined FUN_148023db4(void)

void FUN_148023db4(longlong *param_1)

{
  FUN_148023de8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148023de8 FUN_148023de8 body=342 status=ok
// SIG undefined FUN_148023de8(void)

void FUN_148023de8(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x30 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148023f40 FUN_148023f40 body=68 status=ok
// SIG undefined FUN_148023f40(void)

void FUN_148023f40(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148023f84();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148023f84 FUN_148023f84 body=322 status=ok
// SIG undefined FUN_148023f84(void)

void FUN_148023f84(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1480240c8 FUN_1480240c8 body=305 status=ok
// SIG undefined FUN_1480240c8(void)

undefined4 * FUN_1480240c8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480241fa(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_1480242e0(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_148024424(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480241fa FUN_1480241fa body=229 status=ok
// SIG undefined FUN_1480241fa(void)

int * FUN_1480241fa(longlong *param_1,int *param_2)

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



// FUNCTION 1480242e0 FUN_1480242e0 body=93 status=ok
// SIG undefined FUN_1480242e0(void)

undefined8 FUN_1480242e0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14802433e(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1480243b2(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14802433e FUN_14802433e body=115 status=ok
// SIG undefined FUN_14802433e(void)

int FUN_14802433e(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1480243b2 FUN_1480243b2 body=114 status=ok
// SIG undefined FUN_1480243b2(void)

void FUN_1480243b2(longlong *param_1,int param_2)

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



// FUNCTION 148024424 FUN_148024424 body=449 status=ok
// SIG undefined FUN_148024424(void)

void FUN_148024424(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 1480245e6 FUN_1480245e6 body=52 status=ok
// SIG undefined FUN_1480245e6(void)

void FUN_1480245e6(longlong *param_1)

{
  FUN_14802461a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14802461a FUN_14802461a body=89 status=ok
// SIG undefined FUN_14802461a(void)

void FUN_14802461a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 148024674 FUN_148024674 body=95 status=ok
// SIG undefined FUN_148024674(void)

void FUN_148024674(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffbfea(param_1,iVar2);
  }
  FUN_147fff7ad((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1480246d4 FUN_1480246d4 body=95 status=ok
// SIG undefined FUN_1480246d4(void)

void FUN_1480246d4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc14c(param_1,iVar2);
  }
  FUN_147fff8f1((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024734 FUN_148024734 body=95 status=ok
// SIG undefined FUN_148024734(void)

void FUN_148024734(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc2ae(param_1,iVar2);
  }
  FUN_147fffa35((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024794 FUN_148024794 body=95 status=ok
// SIG undefined FUN_148024794(void)

void FUN_148024794(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc410(param_1,iVar2);
  }
  FUN_147fffb7d((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1480247f4 FUN_1480247f4 body=95 status=ok
// SIG undefined FUN_1480247f4(void)

void FUN_1480247f4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc572(param_1,iVar2);
  }
  FUN_147fffcc5((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024854 FUN_148024854 body=95 status=ok
// SIG undefined FUN_148024854(void)

void FUN_148024854(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc6d2(param_1,iVar2);
  }
  FUN_147fffe0b((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1480248b4 FUN_1480248b4 body=95 status=ok
// SIG undefined FUN_1480248b4(void)

void FUN_1480248b4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc832(param_1,iVar2);
  }
  FUN_147ffff51((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024914 FUN_148024914 body=91 status=ok
// SIG undefined FUN_148024914(void)

void FUN_148024914(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffc98e(param_1,iVar2);
  }
  FUN_148000099((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024970 FUN_148024970 body=95 status=ok
// SIG undefined FUN_148024970(void)

void FUN_148024970(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffcaee(param_1,iVar2);
  }
  FUN_1480001e7((longlong)iVar2 * 0x60 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1480249d0 FUN_1480249d0 body=91 status=ok
// SIG undefined FUN_1480249d0(void)

void FUN_1480249d0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffcc4a(param_1,iVar2);
  }
  FUN_148000329((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024a2c FUN_148024a2c body=95 status=ok
// SIG undefined FUN_148024a2c(void)

void FUN_148024a2c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffcda6(param_1,iVar2);
  }
  FUN_148000477((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024a8c FUN_148024a8c body=91 status=ok
// SIG undefined FUN_148024a8c(void)

void FUN_148024a8c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffcf02(param_1,iVar2);
  }
  FUN_1480005bf((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024ae8 FUN_148024ae8 body=94 status=ok
// SIG undefined FUN_148024ae8(void)

void FUN_148024ae8(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffd070(param_1,iVar2);
  }
  FUN_1480006fc((longlong)iVar2 * 0x80 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024b46 FUN_148024b46 body=94 status=ok
// SIG undefined FUN_148024b46(void)

void FUN_148024b46(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147ffd1fe(param_1,iVar2);
  }
  FUN_148000858((longlong)iVar2 * 0xb0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148024bc4 FUN_148024bc4 body=29 status=ok
// SIG undefined FUN_148024bc4(void)

undefined8 FUN_148024bc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148024c02 FUN_148024c02 body=29 status=ok
// SIG undefined FUN_148024c02(void)

undefined8 FUN_148024c02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148024c20 FUN_148024c20 body=335 status=ok
// SIG undefined FUN_148024c20(void)

undefined4 *
FUN_148024c20(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148024d70(param_1,local_50);
  FUN_148024ee2(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_68 = param_4;
  cVar2 = FUN_148024e56(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14802505c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148024d70 FUN_148024d70 body=229 status=ok
// SIG undefined FUN_148024d70(void)

int * FUN_148024d70(longlong *param_1,int *param_2)

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



// FUNCTION 148024e56 FUN_148024e56 body=140 status=ok
// SIG undefined FUN_148024e56(void)

void FUN_148024e56(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_148024f46();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148024fd2(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_148024e77;
    }
  }
  uVar6 = 0;
LAB_148024e77:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 148024ee2 FUN_148024ee2 body=100 status=ok
// SIG undefined FUN_148024ee2(void)

undefined8 * FUN_148024ee2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 148024f46 FUN_148024f46 body=139 status=ok
// SIG undefined FUN_148024f46(void)

int FUN_148024f46(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148024fd2 FUN_148024fd2 body=138 status=ok
// SIG undefined FUN_148024fd2(void)

void FUN_148024fd2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14802505c FUN_14802505c body=476 status=ok
// SIG undefined FUN_14802505c(void)

void FUN_14802505c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148025292 FUN_148025292 body=29 status=ok
// SIG undefined FUN_148025292(void)

undefined8 FUN_148025292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480252b0 FUN_1480252b0 body=127 status=ok
// SIG undefined FUN_1480252b0(void)

undefined8 * FUN_1480252b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x38,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36430;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 14802539a FUN_14802539a body=29 status=ok
// SIG undefined FUN_14802539a(void)

undefined8 FUN_14802539a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480253ea FUN_1480253ea body=29 status=ok
// SIG undefined FUN_1480253ea(void)

undefined8 FUN_1480253ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148025434 FUN_148025434 body=29 status=ok
// SIG undefined FUN_148025434(void)

undefined8 FUN_148025434(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148025452 FUN_148025452 body=119 status=ok
// SIG undefined FUN_148025452(void)

undefined8 * FUN_148025452(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = &PTR_LAB_14ad36490;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 14802555c FUN_14802555c body=29 status=ok
// SIG undefined FUN_14802555c(void)

undefined8 FUN_14802555c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802557a FUN_14802557a body=80 status=ok
// SIG undefined FUN_14802557a(void)

void FUN_14802557a(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 4;
    return;
  }
  FUN_1480255ca(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_148025632(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1480255ca FUN_1480255ca body=104 status=ok
// SIG undefined FUN_1480255ca(void)

void FUN_1480255ca(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 5) {
      iVar3 = 4;
    }
    else {
      iVar2 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar3 = (int)(uVar1 >> 3);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
      else if (iVar3 < 1) goto LAB_148025603;
    }
    iVar2 = iVar3;
    FUN_147fd7d50(param_1,0,iVar2,8);
  }
LAB_148025603:
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}



// FUNCTION 148025632 FUN_148025632 body=82 status=ok
// SIG undefined FUN_148025632(void)

void FUN_148025632(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148025684 FUN_148025684 body=175 status=ok
// SIG undefined FUN_148025684(void)

undefined8 * FUN_148025684(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_147fd71b4(param_1,0x58,8);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 2) = 2;
  *puVar6 = &PTR_LAB_14ad365e0;
  puVar6[6] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  puVar6[4] = DAT_14c8464e0;
  puVar6[5] = uVar2;
  puVar6[9] = DAT_14c846508;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(puVar6 + 7) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
  *(undefined4 *)(puVar6 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uVar5;
  *(undefined4 *)(puVar6 + 10) = 0xbf800000;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar6;
  return puVar6;
}



// FUNCTION 148025784 FUN_148025784 body=29 status=ok
// SIG undefined FUN_148025784(void)

undefined8 FUN_148025784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480257a2 FUN_1480257a2 body=108 status=ok
// SIG undefined FUN_1480257a2(void)

undefined8 * FUN_1480257a2(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x18,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36650;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480258d0 FUN_1480258d0 body=29 status=ok
// SIG undefined FUN_1480258d0(void)

undefined8 FUN_1480258d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480258ee FUN_1480258ee body=119 status=ok
// SIG undefined FUN_1480258ee(void)

undefined8 * FUN_1480258ee(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = &PTR_LAB_14ad366c0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480259d6 FUN_1480259d6 body=81 status=ok
// SIG undefined FUN_1480259d6(void)

undefined8 * FUN_1480259d6(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ad36730;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148025a28 FUN_148025a28 body=150 status=ok
// SIG undefined FUN_148025a28(void)

undefined8 * FUN_148025a28(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x60,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36730;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148025abe FUN_148025abe body=109 status=ok
// SIG undefined FUN_148025abe(void)

void FUN_148025abe(undefined8 *param_1)

{
  memset(param_1 + 1,0,0xd8);
  *(undefined4 *)(param_1 + 2) = 2;
  *param_1 = &PTR_LAB_14ad2da80;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  return;
}



// FUNCTION 148025b38 FUN_148025b38 body=54 status=ok
// SIG undefined FUN_148025b38(void)

void FUN_148025b38(longlong *param_1)

{
  FUN_148025b6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148025b6e FUN_148025b6e body=128 status=ok
// SIG undefined FUN_148025b6e(void)

void FUN_148025b6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 148025bf0 FUN_148025bf0 body=122 status=ok
// SIG undefined FUN_148025bf0(void)

longlong FUN_148025bf0(longlong param_1,longlong param_2)

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
    FUN_148025c6a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148025c6a FUN_148025c6a body=117 status=ok
// SIG undefined FUN_148025c6a(void)

undefined8 * FUN_148025c6a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148025ce0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 148025ce0 FUN_148025ce0 body=128 status=ok
// SIG undefined FUN_148025ce0(void)

void FUN_148025ce0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 148025d62 FUN_148025d62 body=54 status=ok
// SIG undefined FUN_148025d62(void)

void FUN_148025d62(longlong *param_1)

{
  FUN_148025ce0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148025d98 FUN_148025d98 body=122 status=ok
// SIG undefined FUN_148025d98(void)

longlong FUN_148025d98(longlong param_1,longlong param_2)

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
    FUN_148025e12(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148025e12 FUN_148025e12 body=117 status=ok
// SIG undefined FUN_148025e12(void)

undefined8 * FUN_148025e12(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148025b6e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 148025e88 FUN_148025e88 body=312 status=ok
// SIG undefined FUN_148025e88(void)

undefined4 * FUN_148025e88(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_148025fc2(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1480260a8(param_1,uVar3,local_40,&local_4c);
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
      FUN_148026196(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148025fc2 FUN_148025fc2 body=229 status=ok
// SIG undefined FUN_148025fc2(void)

int * FUN_148025fc2(longlong *param_1,int *param_2)

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



// FUNCTION 1480260a8 FUN_1480260a8 body=124 status=ok
// SIG undefined FUN_1480260a8(void)

undefined8 FUN_1480260a8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148026124(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148026124 FUN_148026124 body=114 status=ok
// SIG undefined FUN_148026124(void)

void FUN_148026124(longlong *param_1,int param_2)

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



// FUNCTION 148026196 FUN_148026196 body=477 status=ok
// SIG undefined FUN_148026196(void)

void FUN_148026196(longlong *param_1)

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



// FUNCTION 148026374 FUN_148026374 body=413 status=ok
// SIG undefined FUN_148026374(void)

void FUN_148026374(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 148026512 FUN_148026512 body=322 status=ok
// SIG undefined FUN_148026512(void)

void FUN_148026512(longlong *param_1)

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



// FUNCTION 148026656 FUN_148026656 body=285 status=ok
// SIG undefined FUN_148026656(void)

undefined4 * FUN_148026656(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148026774(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_14802685a(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148026a3e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148026774 FUN_148026774 body=229 status=ok
// SIG undefined FUN_148026774(void)

int * FUN_148026774(longlong *param_1,int *param_2)

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



// FUNCTION 14802685a FUN_14802685a body=132 status=ok
// SIG undefined FUN_14802685a(void)

undefined8 FUN_14802685a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_1480268e0();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_148026996(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_14802687e;
    }
  }
  uVar2 = 0;
LAB_14802687e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480268e0 FUN_1480268e0 body=180 status=ok
// SIG undefined FUN_1480268e0(void)

int FUN_1480268e0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_148026a08(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14802696e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14802696e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148026996 FUN_148026996 body=114 status=ok
// SIG undefined FUN_148026996(void)

void FUN_148026996(longlong *param_1,int param_2)

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



// FUNCTION 148026a08 FUN_148026a08 body=53 status=ok
// SIG undefined FUN_148026a08(void)

ulonglong FUN_148026a08(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148026a3e FUN_148026a3e body=439 status=ok
// SIG undefined FUN_148026a3e(void)

void FUN_148026a3e(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 148026bf6 FUN_148026bf6 body=184 status=ok
// SIG undefined FUN_148026bf6(void)

int FUN_148026bf6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x30);
        cVar1 = FUN_148026a08(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148026c88;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148026c88:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148026cb0 FUN_148026cb0 body=299 status=ok
// SIG undefined FUN_148026cb0(void)

undefined4 * FUN_148026cb0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148026ddc(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_148026eca(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x2c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148027006(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148026ddc FUN_148026ddc body=238 status=ok
// SIG undefined FUN_148026ddc(void)

int * FUN_148026ddc(longlong *param_1,int *param_2)

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



// FUNCTION 148026eca FUN_148026eca body=193 status=ok
// SIG undefined FUN_148026eca(void)

undefined8 FUN_148026eca(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar10 = FUN_148026bf6();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar10 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined8 *)(puVar1 + 8) = param_3[4];
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148026f8c(param_1,*param_4);
      *param_4 = iVar10;
      uVar11 = 1;
      goto LAB_148026ef0;
    }
  }
  uVar11 = 0;
LAB_148026ef0:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148026f8c FUN_148026f8c body=122 status=ok
// SIG undefined FUN_148026f8c(void)

void FUN_148026f8c(longlong *param_1,int param_2)

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



// FUNCTION 148027006 FUN_148027006 body=440 status=ok
// SIG undefined FUN_148027006(void)

void FUN_148027006(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1480271c0 FUN_1480271c0 body=111 status=ok
// SIG undefined FUN_1480271c0(void)

longlong * FUN_1480271c0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 148027230 FUN_148027230 body=95 status=ok
// SIG undefined FUN_148027230(void)

void FUN_148027230(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_148027290();
  return;
}



// FUNCTION 148027290 FUN_148027290 body=76 status=ok
// SIG undefined FUN_148027290(void)

void FUN_148027290(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x30 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_148026f8c(param_1,param_2);
  return;
}



// FUNCTION 1480272dc FUN_1480272dc body=177 status=ok
// SIG undefined FUN_1480272dc(void)

undefined8 * FUN_1480272dc(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0xe0,8);
  memset(puVar2 + 1,0,0xd8);
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad2da80;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
  puVar2[0x16] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xbc) = 0xffffffff00000080;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480273d8 FUN_1480273d8 body=57 status=ok
// SIG undefined FUN_1480273d8(void)

undefined8 * FUN_1480273d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad36790;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027412 FUN_148027412 body=112 status=ok
// SIG undefined FUN_148027412(void)

undefined8 * FUN_148027412(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36790;
  puVar2[3] = 0;
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480274f6 FUN_1480274f6 body=62 status=ok
// SIG undefined FUN_1480274f6(void)

undefined8 * FUN_1480274f6(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ad367f0;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027534 FUN_148027534 body=154 status=ok
// SIG undefined FUN_148027534(void)

undefined8 * FUN_148027534(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x78,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad367f0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027604 FUN_148027604 body=84 status=ok
// SIG undefined FUN_148027604(void)

undefined8 FUN_148027604(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_14802433e((longlong *)(param_1 + 0x10),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x10),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 148027658 FUN_148027658 body=128 status=ok
// SIG undefined FUN_148027658(void)

undefined8 * FUN_148027658(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad2f0a0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 1;
  FUN_147fdabdc(puVar2,1);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027730 FUN_148027730 body=29 status=ok
// SIG undefined FUN_148027730(void)

undefined8 FUN_148027730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802774e FUN_14802774e body=127 status=ok
// SIG undefined FUN_14802774e(void)

undefined8 * FUN_14802774e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x38,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad369c0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480277ce FUN_1480277ce body=76 status=ok
// SIG undefined FUN_1480277ce(void)

void FUN_1480277ce(undefined8 *param_1)

{
  memset(param_1 + 1,0,0x98);
  *(undefined4 *)(param_1 + 2) = 2;
  *param_1 = &PTR_LAB_14ad36a20;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  return;
}



// FUNCTION 148027846 FUN_148027846 body=29 status=ok
// SIG undefined FUN_148027846(void)

undefined8 FUN_148027846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027864 FUN_148027864 body=146 status=ok
// SIG undefined FUN_148027864(void)

undefined8 * FUN_148027864(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0xa0,8);
  memset(puVar2 + 1,0,0x98);
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36a20;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  *(undefined4 *)(puVar2 + 9) = 0xbf800000;
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0xbf800000;
  *(undefined4 *)(puVar2 + 0xc) = 0xbf800000;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027946 FUN_148027946 body=29 status=ok
// SIG undefined FUN_148027946(void)

undefined8 FUN_148027946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027964 FUN_148027964 body=119 status=ok
// SIG undefined FUN_148027964(void)

undefined8 * FUN_148027964(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36a80;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027a4a FUN_148027a4a body=29 status=ok
// SIG undefined FUN_148027a4a(void)

undefined8 FUN_148027a4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027a68 FUN_148027a68 body=148 status=ok
// SIG undefined FUN_148027a68(void)

undefined8 * FUN_148027a68(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x68,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36ae0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027b6a FUN_148027b6a body=29 status=ok
// SIG undefined FUN_148027b6a(void)

undefined8 FUN_148027b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027b88 FUN_148027b88 body=148 status=ok
// SIG undefined FUN_148027b88(void)

undefined8 * FUN_148027b88(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x68,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36b40;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027c74 FUN_148027c74 body=29 status=ok
// SIG undefined FUN_148027c74(void)

undefined8 FUN_148027c74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027c92 FUN_148027c92 body=127 status=ok
// SIG undefined FUN_148027c92(void)

undefined8 * FUN_148027c92(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x38,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36ba0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027d58 FUN_148027d58 body=29 status=ok
// SIG undefined FUN_148027d58(void)

undefined8 FUN_148027d58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027d76 FUN_148027d76 body=108 status=ok
// SIG undefined FUN_148027d76(void)

undefined8 * FUN_148027d76(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x18,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36c00;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027e40 FUN_148027e40 body=29 status=ok
// SIG undefined FUN_148027e40(void)

undefined8 FUN_148027e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148027e5e FUN_148027e5e body=133 status=ok
// SIG undefined FUN_148027e5e(void)

undefined8 * FUN_148027e5e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x30,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36c60;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  puVar2[5] = 0x408f400000000000;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148027ee4 FUN_148027ee4 body=34 status=ok
// SIG undefined FUN_148027ee4(void)

void FUN_148027ee4(void *param_1)

{
  memset(param_1,0,0x1b0);
  FUN_148027f12(param_1);
  return;
}



// FUNCTION 148027f12 FUN_148027f12 body=232 status=ok
// SIG undefined FUN_148027f12(void)

undefined8 * FUN_148027f12(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *param_1 = &PTR_LAB_14ad36cc0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  FUN_147ffa9a4(param_1 + 0x24);
  FUN_147ffa9a4(param_1 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 14802801a FUN_14802801a body=29 status=ok
// SIG undefined FUN_14802801a(void)

undefined8 FUN_14802801a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148028038 FUN_148028038 body=80 status=ok
// SIG undefined FUN_148028038(void)

void FUN_148028038(undefined8 *param_1)

{
  memset(param_1,0,0x1e0);
  FUN_148027f12(param_1);
  *param_1 = &PTR_LAB_14ad36d20;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  return;
}



// FUNCTION 1480280be FUN_1480280be body=29 status=ok
// SIG undefined FUN_1480280be(void)

undefined8 FUN_1480280be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480280dc FUN_1480280dc body=151 status=ok
// SIG undefined FUN_1480280dc(void)

undefined8 * FUN_1480280dc(longlong param_1)

{
  int iVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_147fd71b4(param_1,0x1e0,8);
  memset(_Dst,0,0x1e0);
  FUN_148027f12(_Dst);
  *_Dst = &PTR_LAB_14ad36d20;
  _Dst[0x36] = 0;
  *(undefined4 *)(_Dst + 0x37) = 0xffffffff;
  _Dst[0x38] = 0;
  *(undefined4 *)(_Dst + 0x39) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = _Dst;
  return _Dst;
}



// FUNCTION 148028174 FUN_148028174 body=80 status=ok
// SIG undefined FUN_148028174(void)

void FUN_148028174(undefined8 *param_1)

{
  memset(param_1,0,0x1e8);
  FUN_148027f12(param_1);
  *param_1 = &PTR_LAB_14ad36d80;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  return;
}



// FUNCTION 1480281fa FUN_1480281fa body=29 status=ok
// SIG undefined FUN_1480281fa(void)

undefined8 FUN_1480281fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148028218 FUN_148028218 body=151 status=ok
// SIG undefined FUN_148028218(void)

undefined8 * FUN_148028218(longlong param_1)

{
  int iVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_147fd71b4(param_1,0x1e8,8);
  memset(_Dst,0,0x1e8);
  FUN_148027f12(_Dst);
  *_Dst = &PTR_LAB_14ad36d80;
  _Dst[0x36] = 0;
  *(undefined4 *)(_Dst + 0x37) = 0xffffffff;
  _Dst[0x38] = 0;
  *(undefined4 *)(_Dst + 0x39) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = _Dst;
  return _Dst;
}



// FUNCTION 14802831e FUN_14802831e body=181 status=ok
// SIG undefined FUN_14802831e(void)

undefined8 * FUN_14802831e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0xe0,8);
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad330b0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0xffffffff;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0xffffffff;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
  puVar2[0x1a] = 0;
  *(undefined1 *)(puVar2 + 0x1b) = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148028406 FUN_148028406 body=124 status=ok
// SIG undefined FUN_148028406(void)

undefined8 * FUN_148028406(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x28,8);
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad33130;
  puVar2[4] = 0;
  FUN_147fdabdc(puVar2,5);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480284bc FUN_1480284bc body=133 status=ok
// SIG undefined FUN_1480284bc(void)

undefined8 * FUN_1480284bc(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_147fd71b4(param_1,0x38,8);
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 2;
  *puVar5 = &PTR_LAB_14ad33300;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(puVar5 + 5) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar2;
  *(undefined4 *)(puVar5 + 6) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x34) = uVar4;
  FUN_147fdabdc(puVar5,5);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar5;
  return puVar5;
}



// FUNCTION 14802859a FUN_14802859a body=141 status=ok
// SIG undefined FUN_14802859a(void)

void FUN_14802859a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *param_1 = &PTR_LAB_14ad33300;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  uVar1 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 5) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  FUN_147fdabdc(uVar1,5);
  *param_1 = &PTR_LAB_14ad36df0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 148028666 FUN_148028666 body=57 status=ok
// SIG undefined FUN_148028666(void)

undefined8 * FUN_148028666(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad36df0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480286a0 FUN_1480286a0 body=132 status=ok
// SIG undefined FUN_1480286a0(void)

void FUN_1480286a0(longlong param_1,int param_2)

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



// FUNCTION 148028726 FUN_148028726 body=212 status=ok
// SIG undefined FUN_148028726(void)

undefined8 * FUN_148028726(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_147fd71b4(param_1,0x80,8);
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 2) = 2;
  *puVar5 = &PTR_LAB_14ad33300;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(puVar5 + 5) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar2;
  *(undefined4 *)(puVar5 + 6) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x34) = uVar4;
  FUN_147fdabdc(puVar5,5);
  *puVar5 = &PTR_LAB_14ad36df0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0xffffffff;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 0xb) = 0xffffffff;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar5 + 0xd) = 0xffffffff;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar5;
  return puVar5;
}



// FUNCTION 148028848 FUN_148028848 body=29 status=ok
// SIG undefined FUN_148028848(void)

undefined8 FUN_148028848(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148028866 FUN_148028866 body=116 status=ok
// SIG undefined FUN_148028866(void)

undefined8 * FUN_148028866(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x20,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad36e50;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 1480288da FUN_1480288da body=81 status=ok
// SIG undefined FUN_1480288da(void)

void FUN_1480288da(undefined8 *param_1)

{
  FUN_147fd9220();
  *param_1 = &PTR_LAB_14ad2a780;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_147fd923c(param_1,4);
  return;
}



// FUNCTION 148028938 FUN_148028938 body=68 status=ok
// SIG undefined FUN_148028938(void)

void FUN_148028938(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14802897c(param_1);
  return;
}



// FUNCTION 14802897c FUN_14802897c body=436 status=ok
// SIG undefined FUN_14802897c(void)

void FUN_14802897c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148028b32 FUN_148028b32 body=87 status=ok
// SIG undefined FUN_148028b32(void)

void FUN_148028b32(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_148028b8a();
  return;
}



// FUNCTION 148028b8a FUN_148028b8a body=114 status=ok
// SIG undefined FUN_148028b8a(void)

void FUN_148028b8a(longlong *param_1,int param_2)

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



// FUNCTION 148028bfc FUN_148028bfc body=135 status=ok
// SIG undefined FUN_148028bfc(void)

longlong FUN_148028bfc(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148028c84();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_148028c36;
  }
  local_30 = param_3;
  FUN_148028d70(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_148028c36:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148028c84 FUN_148028c84 body=180 status=ok
// SIG undefined FUN_148028c84(void)

int FUN_148028c84(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_148028d3a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148028d12;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148028d12:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148028d3a FUN_148028d3a body=53 status=ok
// SIG undefined FUN_148028d3a(void)

ulonglong FUN_148028d3a(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148028d70 FUN_148028d70 body=278 status=ok
// SIG undefined FUN_148028d70(void)

undefined4 * FUN_148028d70(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148028e88(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_148028f6e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
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
      FUN_14802897c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148028e88 FUN_148028e88 body=230 status=ok
// SIG undefined FUN_148028e88(void)

int * FUN_148028e88(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 148028f6e FUN_148028f6e body=132 status=ok
// SIG undefined FUN_148028f6e(void)

undefined8 FUN_148028f6e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_148028c84();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148028b8a(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148028f92;
    }
  }
  uVar6 = 0;
LAB_148028f92:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148028ff4 FUN_148028ff4 body=85 status=ok
// SIG undefined FUN_148028ff4(void)

void FUN_148028ff4(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fd9220();
  *param_1 = &PTR_LAB_14ad2a880;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 148029056 FUN_148029056 body=67 status=ok
// SIG undefined FUN_148029056(void)

void FUN_148029056(undefined8 *param_1)

{
  FUN_147fd9220();
  *param_1 = &PTR_LAB_14ad2a7d0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1480290a6 FUN_1480290a6 body=48 status=ok
// SIG undefined FUN_1480290a6(void)

void FUN_1480290a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}


