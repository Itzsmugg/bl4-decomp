// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a9ec48 FUN_147a9ec48 body=259 status=ok
// SIG undefined FUN_147a9ec48(void)

bool FUN_147a9ec48(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((((((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) ||
        (*(float *)(param_1 + 3) != *(float *)(param_2 + 0x18))) ||
       ((NAN(*(float *)(param_1 + 3)) || NAN(*(float *)(param_2 + 0x18)) ||
        (9.999999747378752e-05 < ABS((double)param_1[0x18] - *(double *)(param_2 + 0xc0)))))) ||
      ((9.999999747378752e-05 < ABS((double)param_1[0x19] - *(double *)(param_2 + 200)) ||
       ((9.999999747378752e-05 < ABS((double)param_1[0x1a] - *(double *)(param_2 + 0xd0)) ||
        (9.999999747378752e-05 < ABS((double)param_1[0x1e] - *(double *)(param_2 + 0xf0)))))))) ||
     (9.999999747378752e-05 < ABS((double)param_1[0x1f] - *(double *)(param_2 + 0xf8)))) {
    bVar2 = false;
  }
  else {
    bVar2 = ABS((double)param_1[0x20] - *(double *)(param_2 + 0x100)) <= 9.999999747378752e-05;
  }
  return bVar2;
}



// FUNCTION 147a9ed4c FUN_147a9ed4c body=84 status=ok
// SIG undefined FUN_147a9ed4c(void)

void FUN_147a9ed4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_147a9c99c();
  if (cVar2 != '\0') {
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    uVar1 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  }
  return;
}



// FUNCTION 147a9edb6 FUN_147a9edb6 body=318 status=ok
// SIG undefined FUN_147a9edb6(void)

undefined4 * FUN_147a9edb6(longlong param_1,undefined4 *param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70 [3];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    local_70[0] = local_70[0] & 0xffffffff00000000;
    local_88 = (double)CONCAT44(local_88._4_4_,0x3f800000);
    FUN_1457437e2(lVar1,local_70,&local_88);
    FUN_147a3f90a(lVar1,local_58,
                  param_3 * (local_88._0_4_ - (float)local_70[0]) + (float)local_70[0]);
    local_78 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0xd0);
    local_80 = *(double *)(param_1 + 0xf8) - *(double *)(param_1 + 200);
    local_88 = *(double *)(param_1 + 0xf0) - *(double *)(param_1 + 0xc0);
    FUN_144a79a9c(&local_88,local_70);
    local_70[0] = 0;
    FUN_1401c9a0e(local_70,param_2,local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9eef6 FUN_147a9eef6 body=1275 status=ok
// SIG undefined FUN_147a9eef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9eef6(longlong *param_1,float param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  double *pdVar9;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float local_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if ((1e-08 < param_3) && (1e-08 < *(float *)(param_1 + 4))) {
    uVar16 = 0;
    fVar15 = (*(float *)(param_1 + 3) + param_2) / *(float *)(param_1 + 4);
    lVar6 = param_1[0x23];
    if (lVar6 != 0) {
      local_f0 = 0.0;
      local_d4 = 1.0;
      FUN_1457437e2(lVar6,&local_f0,&local_d4);
      uVar10 = FUN_1449e6cbc(lVar6,fVar15 * (local_d4 - local_f0) + local_f0);
      fVar15 = (float)uVar10;
      uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    dVar11 = (double)param_1[0x20];
    dVar1 = (double)param_1[0x1a];
    dVar2 = (double)param_1[0x1f];
    dVar3 = (double)param_1[0x18];
    dVar4 = (double)param_1[0x19];
    dVar5 = (double)param_1[0x1e];
    dVar13 = (double)fVar15;
    FUN_147a9edb6(param_1,&local_f0,CONCAT44(uVar16,fVar15));
    dVar3 = (dVar5 - dVar3) * dVar13 + dVar3 + (double)CONCAT44(uStack_ec,local_f0);
    dVar2 = (dVar2 - dVar4) * dVar13 + dVar4 + local_e8;
    dVar11 = (dVar11 - dVar1) * dVar13 + dVar1 + local_e0;
    lVar6 = *(longlong *)(param_4 + 0x1c8);
    if (lVar6 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      dVar1 = DAT_14c8464f0;
    }
    else {
      pdVar9 = (double *)(lVar6 + 0x260);
      dVar1 = *(double *)(lVar6 + 0x270);
    }
    dVar13 = 1.0 / (double)param_3;
    dVar4 = (dVar11 - dVar1) * dVar13;
    dVar5 = (dVar2 - pdVar9[1]) * dVar13;
    dVar1 = (dVar3 - *pdVar9) * dVar13;
    if (((char)param_1[0x21] == '\x01') &&
       (((9.999999747378752e-05 < ABS(dVar1) || (9.999999747378752e-05 < ABS(dVar5))) ||
        (9.999999747378752e-05 < ABS(dVar4))))) {
      fVar15 = *(float *)(param_1 + 3) / *(float *)(param_1 + 4);
      lVar6 = param_1[0x23];
      if (lVar6 != 0) {
        local_f0 = 0.0;
        local_d4 = 1.0;
        FUN_1457437e2(lVar6,&local_f0,&local_d4);
        fVar15 = (float)FUN_1449e6cbc(lVar6,fVar15 * (local_d4 - local_f0) + local_f0);
      }
      local_100 = (double)param_1[0x18];
      dVar14 = (double)fVar15;
      local_f8 = ((double)param_1[0x20] - (double)param_1[0x1a]) * dVar14 + (double)param_1[0x1a];
      local_108 = ((double)param_1[0x1f] - (double)param_1[0x19]) * dVar14 + (double)param_1[0x19];
      dVar14 = ((double)param_1[0x1e] - local_100) * dVar14 + local_100;
      FUN_147a9edb6(param_1,&local_f0);
      dVar11 = (dVar11 - (local_f8 + local_e0)) * dVar13;
      dVar2 = (dVar2 - (local_108 + local_e8)) * dVar13;
      dVar13 = (dVar3 - (dVar14 + (double)CONCAT44(uStack_ec,local_f0))) * dVar13;
      fVar15 = (float)SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar2 * dVar2);
      dVar11 = dVar4 * dVar4 + dVar1 * dVar1 + dVar5 * dVar5;
      fVar12 = fVar15 + 0.5;
      if (fVar12 * fVar12 < (float)dVar11) {
        if (9.99999993922529e-09 < dVar11) {
          dVar11 = 1.0 / SQRT(dVar11);
          dVar1 = dVar1 * dVar11;
          dVar5 = dVar5 * dVar11;
          dVar4 = dVar4 * dVar11;
        }
        dVar11 = (double)fVar15;
        dVar1 = dVar1 * dVar11;
        dVar5 = dVar5 * dVar11;
        dVar4 = dVar4 * dVar11;
      }
    }
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
    auVar7._8_4_ = SUB84(dVar5,0);
    auVar7._0_8_ = dVar1;
    auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0xc) = auVar7;
    param_1[0xe] = (longlong)dVar4;
    param_1[0xf] = 0;
    lVar8 = DAT_14cacb0f0;
    lVar6 = DAT_14cacb0e8;
    param_1[0x10] = _DAT_14cacb0e0;
    param_1[0x11] = lVar6;
    param_1[0x12] = lVar8;
    param_1[0x13] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)(param_1 + 3));
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9f3f2 FUN_147a9f3f2 body=265 status=ok
// SIG undefined FUN_147a9f3f2(void)

undefined8 FUN_147a9f3f2(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a9ca4a();
  FUN_14480c34d(param_2,param_1 + 0xc0);
  FUN_14480c34d(param_2,param_1 + 0xd8);
  FUN_14480c34d(param_2,param_1 + 0xf0);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x108);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x108) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x108) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x110);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x118);
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9f4fc FUN_147a9f4fc body=55 status=ok
// SIG undefined FUN_147a9f4fc(void)

void FUN_147a9f4fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada810 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada810 = FUN_140002ddd(FUN_1463c9b0f,uVar1,L"RootMotionSource_MoveToDynamicForce");
  }
  return;
}



// FUNCTION 147a9f534 FUN_147a9f534 body=133 status=ok
// SIG undefined FUN_147a9f534(void)

undefined8 FUN_147a9f534(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u]FRootMotionSource_MoveToDynamicForce %s",
                *(undefined2 *)(param_1 + 10),puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9f5ba FUN_147a9f5ba body=75 status=ok
// SIG undefined FUN_147a9f5ba(void)

void FUN_147a9f5ba(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x110,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147a9f602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x118,0,0);
  return;
}



// FUNCTION 147a9f70c FUN_147a9f70c body=39 status=ok
// SIG undefined FUN_147a9f70c(void)

void FUN_147a9f70c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147a9f734(uVar1,param_1);
  return;
}



// FUNCTION 147a9f734 FUN_147a9f734 body=339 status=ok
// SIG undefined FUN_147a9f734(void)

undefined8 * FUN_147a9f734(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *param_1 = &PTR_FUN_14a8de520;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  puVar13 = (undefined8 *)(param_2 + 0x40);
  puVar14 = param_1 + 8;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar9 = *(undefined8 *)(param_2 + 0xa8);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar10;
  param_1[0x14] = uVar8;
  param_1[0x15] = uVar9;
  *param_1 = &PTR_FUN_14a8de8f0;
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  uVar4 = *(undefined4 *)(param_2 + 0xd0);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0x1b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar7;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0xe0);
  lVar12 = *(longlong *)(param_2 + 0xe8);
  param_1[0x1d] = lVar12;
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar11 = DAT_14c950c29;
  lVar12 = *(longlong *)(param_2 + 0xf0);
  param_1[0x1e] = lVar12;
  if ((lVar12 != 0 & bVar11) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  uVar8 = *(undefined8 *)(param_2 + 0x100);
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  param_1[0x20] = uVar8;
  return param_1;
}



// FUNCTION 147a9f888 FUN_147a9f888 body=241 status=ok
// SIG undefined FUN_147a9f888(void)

undefined8 FUN_147a9f888(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_147a9c8e8();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0xe0) == *(char *)(param_2 + 0xe0))) {
    lVar1 = *(longlong *)(param_2 + 0xe8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (*(longlong *)(param_1 + 0xe8) == lVar1) {
      lVar1 = *(longlong *)(param_2 + 0xf0);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (((*(longlong *)(param_1 + 0xf0) == lVar1) &&
          (ABS(*(float *)(param_1 + 0xd8) - *(float *)(param_2 + 0xd8)) <= 1e-08)) &&
         (ABS(*(float *)(param_1 + 0xdc) - *(float *)(param_2 + 0xdc)) <= 1e-08)) {
        uVar3 = FUN_146232d50(param_1 + 0xc0,param_2 + 0xc0,0x3ff0000000000000);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147a9f97a FUN_147a9f97a body=59 status=ok
// SIG undefined FUN_147a9f97a(void)

byte FUN_147a9f97a(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_2 + 0x18) == *(float *)(param_1 + 3)) & 1;
  }
  return bVar2;
}



// FUNCTION 147a9f9bc FUN_147a9f9bc body=262 status=ok
// SIG undefined FUN_147a9f9bc(void)

undefined4 * FUN_147a9f9bc(longlong param_1,undefined4 *param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 == 0) {
    fVar5 = param_3 + param_3 + -1.0;
    *(double *)(param_2 + 4) = (double)(1.0 - fVar5 * fVar5);
  }
  else {
    local_44 = 0.0;
    local_48 = 1.0;
    FUN_1457437e2(lVar1,&local_44,&local_48);
    FUN_147a3f90a(lVar1,param_2,param_3 * (local_48 - local_44) + local_44);
  }
  if (0.0 <= *(float *)(param_1 + 0xdc)) {
    *(double *)(param_2 + 4) = (double)*(float *)(param_1 + 0xdc) * *(double *)(param_2 + 4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9fac4 FUN_147a9fac4 body=193 status=ok
// SIG undefined FUN_147a9fac4(void)

undefined8 FUN_147a9fac4(longlong param_1,undefined8 param_2,float param_3)

{
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_40 = *(undefined8 *)(param_1 + 200);
  local_38 = *(undefined8 *)(param_1 + 0xd0);
  local_48 = 0;
  param_3 = *(float *)(param_1 + 0xd8) * param_3;
  FUN_147a9f9bc(param_3,&local_78);
  local_50 = local_68 + 0.0;
  local_58 = local_70 + 0.0;
  local_60 = (double)param_3 + local_78;
  FUN_1401c9a0e(&local_48,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9fb86 FUN_147a9fb86 body=624 status=ok
// SIG undefined FUN_147a9fb86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9fb86(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_d8 [40];
  float local_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  float local_98;
  undefined4 uStack_94;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if ((1e-08 < param_2) && (1e-08 < param_3)) {
    fVar6 = *(float *)(param_1 + 4);
    if (1e-08 < fVar6) {
      fVar3 = *(float *)(param_1 + 3) / fVar6;
      fVar6 = (*(float *)(param_1 + 3) + param_2) / fVar6;
      uVar9 = 0;
      fVar8 = fVar6;
      if (1.0 < fVar6) {
        fVar8 = fVar6 - (fVar6 + -1.0);
      }
      fVar6 = (float)(-(uint)(1.0 < fVar6) & (uint)(fVar3 - (fVar6 + -1.0)) |
                     ~-(uint)(1.0 < fVar6) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar6;
      lVar1 = param_1[0x1e];
      if (lVar1 != 0) {
        local_98 = 0.0;
        local_b0 = 1.0;
        FUN_1457437e2(lVar1,&local_98,&local_b0);
        uVar4 = FUN_1449e6cbc(lVar1,fVar6 * (local_b0 - local_98) + local_98);
        lVar1 = param_1[0x1e];
        local_98 = 0.0;
        local_b0 = 1.0;
        FUN_1457437e2(lVar1,&local_98,&local_b0);
        uVar5 = FUN_1449e6cbc(lVar1,fVar8 * (local_b0 - local_98) + local_98);
        fVar8 = (float)uVar5;
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      FUN_147a9fac4(param_1,&local_98,uVar4);
      FUN_147a9fac4(param_1,&local_b0,CONCAT44(uVar9,fVar8));
      *(undefined1 *)(param_1 + 6) = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      dVar7 = 1.0 / (double)param_3;
      param_1[10] = 0;
      param_1[0xb] = 0x3ff0000000000000;
      param_1[0xc] = (longlong)
                     (dVar7 * ((double)CONCAT44(uStack_ac,local_b0) -
                              (double)CONCAT44(uStack_94,local_98)));
      param_1[0xd] = (longlong)((local_a8 - local_90) * dVar7);
      param_1[0xe] = (longlong)((local_a0 - local_88) * dVar7);
      param_1[0xf] = 0;
      lVar2 = DAT_14cacb0f0;
      lVar1 = DAT_14cacb0e8;
      param_1[0x10] = _DAT_14cacb0e0;
      param_1[0x11] = lVar1;
      param_1[0x12] = lVar2;
      param_1[0x13] = 0;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)(param_1 + 3));
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9fdf8 FUN_147a9fdf8 body=400 status=ok
// SIG undefined FUN_147a9fdf8(void)

undefined8 FUN_147a9fdf8(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a9ca4a();
  FUN_1401fb57a(param_2,param_1 + 0xc0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xdc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0xe0);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xe0) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0xe0) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xe8);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xf0);
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9ff8a FUN_147a9ff8a body=55 status=ok
// SIG undefined FUN_147a9ff8a(void)

void FUN_147a9ff8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada828 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada828 = FUN_140002ddd(FUN_1463c9ba5,uVar1,L"RootMotionSource_JumpForce");
  }
  return;
}



// FUNCTION 147a9ffc2 FUN_147a9ffc2 body=133 status=ok
// SIG undefined FUN_147a9ffc2(void)

undefined8 FUN_147a9ffc2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u]FRootMotionSource_JumpForce %s",*(undefined2 *)(param_1 + 10),
                puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147aa0048 FUN_147aa0048 body=75 status=ok
// SIG undefined FUN_147aa0048(void)

void FUN_147aa0048(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xe8,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147aa0090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xf0,0,0);
  return;
}



// FUNCTION 147aa0094 FUN_147aa0094 body=99 status=ok
// SIG undefined FUN_147aa0094(void)

void FUN_147aa0094(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      lVar1 = *plVar3;
      if (((lVar1 != 0) && (*(char *)(lVar1 + 0x26) == param_2)) &&
         (FUN_147aa00f8(lVar1,param_5,param_6), *(char *)(*plVar3 + 0x26) == '\0')) {
        return;
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar2);
  }
  return;
}



// FUNCTION 147aa00f8 FUN_147aa00f8 body=1645 status=ok
// SIG undefined FUN_147aa00f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147aa00f8(longlong param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [32];
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
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
  
  dVar23 = DAT_14c846520;
  auVar14 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  dVar13 = *(double *)(param_1 + 0x60);
  dVar15 = *(double *)(param_1 + 0x68);
  dVar11 = *(double *)(param_1 + 0x70);
  if ((*(char *)(param_1 + 0x27) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x110), lVar1 != 0))
  {
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x80);
    dVar20 = SUB168(*(undefined1 (*) [16])(param_1 + 0x90),0);
    dVar2 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar17 = *(double *)(lVar1 + 0x250);
    dVar18 = *(double *)(lVar1 + 600);
    auVar21._8_4_ = SUB84(DAT_14c846518,0);
    auVar21._0_8_ = DAT_14c846510;
    auVar21._12_4_ = (int)((ulonglong)DAT_14c846518 >> 0x20);
    auVar21 = minpd(auVar12,auVar21);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = DAT_14c846520;
    auVar24 = minpd(*(undefined1 (*) [16])(param_1 + 0x90),auVar24);
    auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    iVar8 = movmskpd((int)lVar1,auVar22);
    auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar9 = movmskpd((int)param_1,auVar25);
    if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
      dVar13 = dVar13 * DAT_14c846510;
      dVar15 = dVar15 * DAT_14c846518;
      dVar11 = dVar11 * DAT_14c846520;
      dVar20 = dVar15 * dVar2 - dVar5 * dVar13;
      dVar26 = dVar11 * dVar5 - dVar17 * dVar15;
      dVar23 = dVar13 * dVar17 - dVar2 * dVar11;
      dVar26 = dVar26 + dVar26;
      dVar23 = dVar23 + dVar23;
      dVar20 = dVar20 + dVar20;
      dVar13 = DAT_14c8464e0 + (dVar20 * dVar5 - dVar17 * dVar23) + dVar18 * dVar26 + dVar13;
      dVar15 = DAT_14c8464e8 + (dVar26 * dVar17 - dVar20 * dVar2) + dVar18 * dVar23 + dVar15;
      dVar11 = DAT_14c8464f0 + (dVar23 * dVar2 - dVar5 * dVar26) + dVar18 * dVar20 + dVar11;
    }
    else {
      local_288 = *(double *)(param_1 + 0x40);
      dStack_280 = *(double *)(param_1 + 0x48);
      dVar4 = dVar5 + dVar5;
      dVar26 = dVar17 + dVar17;
      dVar19 = dVar2 * (dVar2 + dVar2);
      dVar3 = (dVar2 + dVar2) * dVar18;
      dStack_180 = (dVar26 * dVar5 - dVar3) * DAT_14c846520;
      local_298._0_8_ = auVar12._0_8_;
      local_298._8_8_ = auVar12._8_8_;
      local_278._8_4_ = SUB84((double)local_298._8_8_ * DAT_14c846518,0);
      local_278._0_8_ = (double)local_298._0_8_ * DAT_14c846510;
      local_278._12_4_ = (int)((ulonglong)((double)local_298._8_8_ * DAT_14c846518) >> 0x20);
      dVar6 = (1.0 - (dVar17 * dVar26 + dVar19)) * DAT_14c846518;
      dVar16 = (dVar4 * dVar2 + dVar26 * dVar18) * DAT_14c846510;
      local_198 = (dVar26 * dVar5 + dVar3) * DAT_14c846518;
      local_188 = (dVar4 * dVar18 + dVar2 * dVar26) * DAT_14c846520;
      local_1b8 = (dVar2 * dVar26 - dVar4 * dVar18) * DAT_14c846510;
      dVar3 = *(double *)(param_1 + 0x50);
      dVar7 = *(double *)(param_1 + 0x58);
      local_1c8._8_4_ = SUB84(dVar16,0);
      local_1c8._0_8_ = (1.0 - (dVar17 * dVar26 + dVar5 * dVar4)) * DAT_14c846510;
      local_1c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar6,0);
      local_1a8._0_8_ = (dVar4 * dVar2 - dVar26 * dVar18) * DAT_14c846518;
      local_1a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_178 = (1.0 - (dVar19 + dVar5 * dVar4)) * DAT_14c846520;
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = DAT_14c8464e0;
      dStack_160 = DAT_14c8464e8;
      local_158 = DAT_14c8464f0;
      uStack_150 = 0x3ff0000000000000;
      dVar5 = dStack_280 + dStack_280;
      dVar17 = dVar3 + dVar3;
      dVar26 = local_288 * (local_288 + local_288);
      dVar18 = (local_288 + local_288) * dVar7;
      local_228 = (dVar5 * local_288 - dVar17 * dVar7) * (double)local_298._8_8_;
      dVar2 = (dVar17 * dStack_280 - dVar18) * dVar20;
      local_248 = ((double)DAT_149934d80 - (dVar3 * dVar17 + dStack_280 * dVar5)) *
                  (double)local_298._0_8_;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar3 * dVar17 + dVar26)) * (double)local_298._8_8_;
      dStack_240 = (dVar5 * local_288 + dVar17 * dVar7) * (double)local_298._0_8_;
      local_218 = (dVar17 * dStack_280 + dVar18) * (double)local_298._8_8_;
      local_238 = (local_288 * dVar17 - dVar5 * dVar7) * (double)local_298._0_8_;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208._8_4_ = SUB84(dVar2,0);
      local_208._0_8_ = (dVar5 * dVar7 + local_288 * dVar17) * dVar20;
      local_208._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_1f8 = (1.0 - (dVar26 + dStack_280 * dVar5)) * dVar20;
      uStack_1f0 = 0;
      uStack_1d0 = 0x3ff0000000000000;
      local_298 = auVar12;
      local_1e8 = dVar13;
      dStack_1e0 = dVar15;
      local_1d8 = dVar11;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar12._8_8_ = -(ulonglong)(0.0 <= (double)local_278._8_8_);
      auVar12._0_8_ = -(ulonglong)(0.0 <= (double)local_278._0_8_);
      auVar14 = blendvpd(_DAT_149936790,auVar14,auVar12);
      uVar10 = -(ulonglong)(0.0 <= dVar20 * dVar23);
      dVar11 = (double)(~uVar10 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar10 >> 0x20) & 0x3ff00000) << 0x20);
      dVar13 = auVar14._0_8_;
      local_138 = local_138 * dVar13;
      local_140 = local_140 * dVar13;
      local_148 = local_148 * dVar13;
      dVar13 = auVar14._8_8_;
      local_118 = local_118 * dVar13;
      local_120 = local_120 * dVar13;
      local_128 = dVar13 * local_128;
      local_f8 = local_f8 * dVar11;
      local_100 = local_100 * dVar11;
      local_108 = dVar11 * local_108;
      FUN_14481fd10(local_268,&local_148);
      dVar11 = local_d8;
      dVar13 = local_e8;
      dVar15 = dStack_e0;
    }
  }
  dVar23 = param_3[2];
  if (*(char *)(param_1 + 0x26) == '\x01') {
    *param_3 = *param_3 + dVar13;
    param_3[1] = dVar15 + param_3[1];
    dVar11 = dVar11 + dVar23;
  }
  else {
    if (*(char *)(param_1 + 0x26) != '\0') goto LAB_147aa05f6;
    *param_3 = dVar13;
    param_3[1] = dVar15;
  }
  param_3[2] = dVar11;
LAB_147aa05f6:
  if ((*(byte *)(param_1 + 0x25) & 4) != 0) {
    param_3[2] = dVar23;
  }
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa0766 FUN_147aa0766 body=259 status=ok
// SIG undefined FUN_147aa0766(void)

undefined8 FUN_147aa0766(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double *in_stack_00000028;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar14 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar14);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x26) == '\0')) {
        dVar7 = *(double *)(lVar2 + 0x40);
        dVar8 = *(double *)(lVar2 + 0x48);
        dVar9 = *(double *)(lVar2 + 0x50);
        dVar10 = *(double *)(lVar2 + 0x58);
        *in_stack_00000028 = dVar7;
        in_stack_00000028[1] = dVar8;
        in_stack_00000028[2] = dVar9;
        in_stack_00000028[3] = dVar10;
        lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar8 - DAT_14c8463d8));
        auVar6._8_4_ = (int)lVar14;
        auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7 - DAT_14c8463d0));
        auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar11 = movmskpd((int)in_stack_00000028,auVar6);
        lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar10 - DAT_14c8463e8));
        auVar5._8_4_ = (int)lVar14;
        auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar9 - DAT_14c8463e0));
        auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        iVar12 = movmskpd((int)lVar1,auVar5);
        uVar13 = iVar12 << 2 | uVar11;
        if (uVar13 == 0) {
          return 0;
        }
        auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar8 + DAT_14c8463d8));
        auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7 + DAT_14c8463d0));
        iVar12 = movmskpd(uVar11,auVar3);
        auVar4._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar10 + DAT_14c8463e8));
        auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar9 + DAT_14c8463e0));
        uVar11 = movmskpd(uVar13,auVar4);
        return CONCAT71((int7)(CONCAT44((int)((ulonglong)in_stack_00000028 >> 0x20),iVar12) >> 8),
                        (uVar11 & 0x3fffffff) != 0 || iVar12 != 0);
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x10 != lVar14);
  }
  return 0;
}



// FUNCTION 147aa086a FUN_147aa086a body=119 status=ok
// SIG undefined FUN_147aa086a(void)

void FUN_147aa086a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1479d9002(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147aaef06(param_1,param_2,iVar1 - param_2);
  FUN_147aaef60(param_1);
  return;
}



// FUNCTION 147aa08e2 FUN_147aa08e2 body=855 status=ok
// SIG undefined FUN_147aa08e2(void)

bool FUN_147aa08e2(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
                  byte param_5)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_4c = *(byte *)(param_1 + 0x28) & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    uVar9 = local_4c;
    if (1 < local_4c) {
      FUN_14572541c(param_2);
      uVar9 = local_4c;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar7 = *(byte *)(param_1 + 0x28);
  if ((uVar9 != 0) != (bool)(bVar7 & 1)) {
    bVar7 = bVar7 & 0xfe | uVar9 != 0;
    *(byte *)(param_1 + 0x28) = bVar7;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_4c = (uint)(bVar7 >> 1 & 1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    uVar9 = local_4c;
    if (1 < local_4c) {
      FUN_14572541c(param_2);
      uVar9 = local_4c;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar7 = *(byte *)(param_1 + 0x28);
  if (((bVar7 & 2) == 0) == (uVar9 != 0)) {
    bVar7 = bVar7 & 0xfd | (uVar9 != 0) * '\x02';
    *(byte *)(param_1 + 0x28) = bVar7;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_4c = (uint)(bVar7 >> 2 & 1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    uVar9 = local_4c;
    if (1 < local_4c) {
      FUN_14572541c(param_2);
      uVar9 = local_4c;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (((*(byte *)(param_1 + 0x28) & 4) == 0) == (uVar9 != 0)) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (uVar9 != 0) << 2;
  }
  uVar8 = FUN_1401fde76(param_1 + 0x30,param_2);
  *param_4 = uVar8;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_4c = *(uint *)(param_1 + 0x28) >> 3 & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    uVar9 = local_4c;
    if (1 < local_4c) {
      FUN_14572541c(param_2);
      uVar9 = local_4c;
    }
  }
  else {
    uVar9 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (((*(byte *)(param_1 + 0x28) & 8) == 0) == (uVar9 != 0)) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7 | (uVar9 != 0) << 3;
  }
  puVar5 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x29),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x29) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar2 = (longlong *)(param_1 + 8);
  local_58 = (byte)*(int *)(param_1 + 0x10);
  if ((int)(uint)param_5 <= *(int *)(param_1 + 0x10)) {
    local_58 = param_5;
  }
  cVar10 = param_5 - local_58;
  if (param_5 < local_58) {
    cVar10 = '\0';
  }
  FUN_1434e880a(param_2,param_3,param_4,plVar2);
  plVar3 = (longlong *)(param_1 + 0x18);
  local_58 = cVar10;
  FUN_1434e880a(param_2,param_3,param_4,plVar3);
  bVar7 = *(byte *)((longlong)param_2 + 0x29);
  uVar8 = 1;
  if ((bVar7 & 2) != 0) {
    uVar12 = (ulonglong)*(int *)(param_1 + 0x10);
    if (0 < (longlong)uVar12) {
      lVar11 = uVar12 << 4;
      do {
        lVar11 = lVar11 + -0x10;
        if (*(longlong *)(*plVar2 + lVar11) == 0) {
          FUN_147aaf050(plVar2,(int)uVar12 + -1);
          FUN_147aaef60();
        }
        bVar6 = 1 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar6);
    }
    uVar12 = (ulonglong)*(int *)(param_1 + 0x20);
    if (0 < (longlong)uVar12) {
      lVar11 = uVar12 << 4;
      do {
        lVar11 = lVar11 + -0x10;
        if (*(longlong *)(*plVar3 + lVar11) == 0) {
          FUN_147aaf050(plVar3,(int)uVar12 + -1);
          FUN_147aaef60();
        }
        bVar6 = 1 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar6);
    }
    uVar8 = 0;
  }
  *param_4 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (bVar7 & 2) == 0;
}



// FUNCTION 147aa0c3a FUN_147aa0c3a body=327 status=ok
// SIG undefined FUN_147aa0c3a(void)

ulonglong FUN_147aa0c3a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((((((*(byte *)(param_2 + 0x28) ^ *(byte *)(param_1 + 0x28)) & 0xf) != 0) ||
       (1.0 < ABS(*(double *)(param_1 + 0x30) - *(double *)(param_2 + 0x30)))) ||
      (1.0 < ABS(*(double *)(param_1 + 0x38) - *(double *)(param_2 + 0x38)))) ||
     (((1.0 < ABS(*(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x40)) ||
       (iVar5 = *(int *)(param_1 + 0x10), iVar5 != *(int *)(param_2 + 0x10))) ||
      (iVar3 = *(int *)(param_1 + 0x20), iVar3 != *(int *)(param_2 + 0x20))))) {
LAB_147aa0c4f:
    uVar4 = 0;
  }
  else {
    if (0 < iVar5) {
      unaff_RBX = 0;
      lVar6 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + unaff_RBX);
        if ((*(longlong *)(*(longlong *)(param_2 + 8) + unaff_RBX) != 0) !=
            (plVar1 != (longlong *)0x0)) goto LAB_147aa0c4f;
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x20))();
          if (cVar2 == '\0') goto LAB_147aa0c4f;
          iVar5 = *(int *)(param_1 + 0x10);
        }
        lVar6 = lVar6 + 1;
        unaff_RBX = unaff_RBX + 0x10;
      } while (lVar6 < iVar5);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (0 < iVar3) {
      lVar6 = 0;
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar6);
        if ((*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar6) != 0) !=
            (plVar1 != (longlong *)0x0)) goto LAB_147aa0c4f;
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x20))();
          if (cVar2 == '\0') goto LAB_147aa0c4f;
          iVar3 = *(int *)(param_1 + 0x20);
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar7 < iVar3);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147aa0d82 FUN_147aa0d82 body=227 status=ok
// SIG undefined FUN_147aa0d82(void)

void FUN_147aa0d82(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[3];
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,*(undefined4 *)(lVar1 + 0x40),8);
  FUN_146f5435e(uVar2,*(undefined4 *)(lVar1 + 0x44),4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_38 = param_2[2];
  local_30 = lVar1 + 0x20;
  local_48 = DAT_14c99b0e0;
  (*DAT_14c99b080)(param_1,&local_48);
  local_38 = param_2[2];
  local_48 = *param_2;
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_30 = lVar1;
  FUN_147aa0e66(param_1,&local_48);
  local_38 = param_2[2];
  local_48 = *param_2;
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_30 = lVar1 + 0x10;
  FUN_147aa0f32(param_1,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa0e66 FUN_147aa0e66 body=203 status=ok
// SIG undefined FUN_147aa0e66(void)

void FUN_147aa0e66(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  FUN_146f5435e(uVar2,(int)plVar4[1],8);
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar8 = 0;
    do {
      lVar5 = *plVar4;
      uVar6 = *(int *)(lVar5 + 8 + lVar8) - 1;
      if (uVar6 < *(uint *)(lVar3 + 0x18)) {
        lVar7 = (ulonglong)uVar6 * 0x10 + *(longlong *)(lVar3 + 0x10);
      }
      else {
        lVar7 = 0;
      }
      FUN_146f5435e(uVar2,lVar7 != 0,1);
      if (lVar7 != 0) {
        FUN_146f5435e(uVar2,*(undefined4 *)(lVar5 + 8 + lVar8),5);
        FUN_142a8e97e(param_1,*(undefined8 *)(lVar5 + lVar8),*(undefined8 *)(lVar7 + 8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar8);
  }
  return;
}



// FUNCTION 147aa0f32 FUN_147aa0f32 body=203 status=ok
// SIG undefined FUN_147aa0f32(void)

void FUN_147aa0f32(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  FUN_146f5435e(uVar2,(int)plVar4[1],8);
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar8 = 0;
    do {
      lVar5 = *plVar4;
      uVar6 = *(int *)(lVar5 + 8 + lVar8) - 1;
      if (uVar6 < *(uint *)(lVar3 + 0x18)) {
        lVar7 = (ulonglong)uVar6 * 0x10 + *(longlong *)(lVar3 + 0x10);
      }
      else {
        lVar7 = 0;
      }
      FUN_146f5435e(uVar2,lVar7 != 0,1);
      if (lVar7 != 0) {
        FUN_146f5435e(uVar2,*(undefined4 *)(lVar5 + 8 + lVar8),5);
        FUN_142a8e97e(param_1,*(undefined8 *)(lVar5 + lVar8),*(undefined8 *)(lVar7 + 8));
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar8);
  }
  return;
}



// FUNCTION 147aa0ffe FUN_147aa0ffe body=308 status=ok
// SIG undefined FUN_147aa0ffe(void)

void FUN_147aa0ffe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[3];
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = FUN_146f546d2(uVar2,8);
  *(undefined4 *)(lVar1 + 0x40) = uVar4;
  uVar4 = FUN_146f546d2(uVar2,4);
  *(undefined4 *)(lVar1 + 0x44) = uVar4;
  if (*(longlong *)(param_1 + 8) == 0) {
    cVar3 = FUN_146f5b7ac(param_1);
    if (cVar3 == '\0') {
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_38 = param_2[2];
      local_30 = lVar1 + 0x20;
      local_48 = DAT_14c99b0e0;
      (*DAT_14c99b088)(param_1);
      if (*(longlong *)(param_1 + 8) == 0) {
        cVar3 = FUN_146f5b7ac(param_1);
        if (cVar3 == '\0') {
          local_38 = param_2[2];
          local_48 = *param_2;
          uStack_40 = *(undefined4 *)(param_2 + 1);
          uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
          local_30 = lVar1;
          FUN_147aa1134(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            cVar3 = FUN_146f5b7ac(param_1);
            if (cVar3 == '\0') {
              local_38 = param_2[2];
              local_48 = *param_2;
              uStack_40 = *(undefined4 *)(param_2 + 1);
              uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
              local_30 = lVar1 + 0x10;
              FUN_147aa12b8(param_1);
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_146f5b7ac(param_1);
              }
            }
          }
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



// FUNCTION 147aa1134 FUN_147aa1134 body=387 status=ok
// SIG undefined FUN_147aa1134(void)

void FUN_147aa1134(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[3];
  uVar5 = FUN_146f546d2(lVar1,8);
  uVar11 = DAT_14c99c028;
  if (*(int *)(lVar1 + 0x14) == 0) {
    FUN_147aaf0fc(param_1,plVar3,lVar2);
    if (uVar5 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,(ulonglong)uVar5 << 4,8);
      *plVar3 = (longlong)pvVar7;
      *(uint *)(plVar3 + 1) = uVar5;
      memset(pvVar7,0,(ulonglong)uVar5 << 4);
      uVar5 = *(uint *)(plVar3 + 1);
      if ((ulonglong)uVar5 != 0) {
        lVar10 = 0;
        do {
          lVar4 = *plVar3;
          uVar8 = FUN_146f546d2(lVar1,1);
          if ((uVar8 & 1) != 0) {
            iVar6 = FUN_146f546d2(lVar1,5);
            if ((*(uint *)(lVar2 + 0x18) <= iVar6 - 1U) ||
               (lVar9 = (ulonglong)(iVar6 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar9 == 0)) {
              FUN_147aaf0fc(param_1,plVar3,lVar2);
              uVar11 = DAT_14c99b208;
              goto LAB_147aa126c;
            }
            lVar9 = *(longlong *)(lVar9 + 8);
            pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                       (DAT_14c872d28,*(undefined4 *)(lVar9 + 0x74),
                                        *(undefined2 *)(lVar9 + 0x7a));
            *(void **)(lVar4 + lVar10) = pvVar7;
            *(int *)(lVar4 + 8 + lVar10) = iVar6;
            memset(pvVar7,0,(ulonglong)*(uint *)(lVar9 + 0x74));
            FUN_142a8ea2a(param_1,*(undefined8 *)(lVar4 + lVar10),lVar9);
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulonglong)uVar5 << 4 != lVar10);
      }
    }
  }
  else {
LAB_147aa126c:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar11;
    }
  }
  return;
}



// FUNCTION 147aa12b8 FUN_147aa12b8 body=387 status=ok
// SIG undefined FUN_147aa12b8(void)

void FUN_147aa12b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[3];
  uVar5 = FUN_146f546d2(lVar1,8);
  uVar11 = DAT_14c99c028;
  if (*(int *)(lVar1 + 0x14) == 0) {
    FUN_147aaf1cc(param_1,plVar3,lVar2);
    if (uVar5 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,(ulonglong)uVar5 << 4,8);
      *plVar3 = (longlong)pvVar7;
      *(uint *)(plVar3 + 1) = uVar5;
      memset(pvVar7,0,(ulonglong)uVar5 << 4);
      uVar5 = *(uint *)(plVar3 + 1);
      if ((ulonglong)uVar5 != 0) {
        lVar10 = 0;
        do {
          lVar4 = *plVar3;
          uVar8 = FUN_146f546d2(lVar1,1);
          if ((uVar8 & 1) != 0) {
            iVar6 = FUN_146f546d2(lVar1,5);
            if ((*(uint *)(lVar2 + 0x18) <= iVar6 - 1U) ||
               (lVar9 = (ulonglong)(iVar6 - 1U) * 0x10 + *(longlong *)(lVar2 + 0x10), lVar9 == 0)) {
              FUN_147aaf1cc(param_1,plVar3,lVar2);
              uVar11 = DAT_14c99b208;
              goto LAB_147aa13f0;
            }
            lVar9 = *(longlong *)(lVar9 + 8);
            pvVar7 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                       (DAT_14c872d28,*(undefined4 *)(lVar9 + 0x74),
                                        *(undefined2 *)(lVar9 + 0x7a));
            *(void **)(lVar4 + lVar10) = pvVar7;
            *(int *)(lVar4 + 8 + lVar10) = iVar6;
            memset(pvVar7,0,(ulonglong)*(uint *)(lVar9 + 0x74));
            FUN_142a8ea2a(param_1,*(undefined8 *)(lVar4 + lVar10),lVar9);
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulonglong)uVar5 << 4 != lVar10);
      }
    }
  }
  else {
LAB_147aa13f0:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar11;
    }
  }
  return;
}



// FUNCTION 147aa143c FUN_147aa143c body=315 status=ok
// SIG undefined FUN_147aa143c(void)

void FUN_147aa143c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar4 = true;
  if (*(int *)(lVar1 + 0x40) == *(int *)(lVar2 + 0x40)) {
    bVar4 = *(int *)(lVar1 + 0x44) != *(int *)(lVar2 + 0x44);
  }
  local_58 = CONCAT71(local_58._1_7_,bVar4);
  FUN_146f5435e(uVar3,bVar4 != false,1);
  if ((char)local_58 != '\0') {
    FUN_146f5435e(uVar3,*(undefined4 *)(lVar1 + 0x40),8);
    FUN_146f5435e(uVar3,*(undefined4 *)(lVar1 + 0x44),4);
  }
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  local_40 = lVar1 + 0x20;
  local_38 = lVar2 + 0x20;
  local_58 = DAT_14c99b0e0;
  (*DAT_14c99b090)(param_1,&local_58);
  local_48 = param_2[2];
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_40 = lVar1;
  local_38 = lVar2;
  FUN_147aa1578(param_1,&local_58);
  local_48 = param_2[2];
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_40 = lVar1 + 0x10;
  local_38 = lVar2 + 0x10;
  FUN_147aa16fe(param_1,&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa1578 FUN_147aa1578 body=388 status=ok
// SIG undefined FUN_147aa1578(void)

void FUN_147aa1578(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  plVar5 = (longlong *)param_2[4];
  uVar6 = *(uint *)(plVar4 + 1);
  uVar1 = *(uint *)(plVar5 + 1);
  uVar10 = (ulonglong)uVar1;
  local_80 = param_1;
  FUN_146f5435e(uVar2,uVar6 == uVar1,1);
  if (uVar6 != uVar1) {
    FUN_146f5435e(uVar2,uVar6,8);
  }
  if (uVar10 != 0) {
    local_68 = param_2[2];
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    if (uVar6 != 0) {
      uVar11 = uVar10;
      if (uVar6 < uVar1) {
        uVar11 = (ulonglong)uVar6;
      }
      lVar9 = 0;
      do {
        local_60 = *plVar4 + lVar9;
        local_58 = *plVar5 + lVar9;
        FUN_147aaf29c(local_80,&local_78);
        lVar9 = lVar9 + 0x10;
      } while (uVar11 * 0x10 != lVar9);
    }
  }
  if (uVar1 < uVar6) {
    iVar7 = uVar6 - uVar1;
    uVar10 = uVar10 << 4 | 8;
    do {
      lVar9 = *plVar4;
      uVar6 = *(int *)(lVar9 + uVar10) - 1;
      if (uVar6 < *(uint *)(lVar3 + 0x18)) {
        lVar8 = (ulonglong)uVar6 * 0x10 + *(longlong *)(lVar3 + 0x10);
      }
      else {
        lVar8 = 0;
      }
      local_78 = CONCAT31(local_78._1_3_,lVar8 != 0);
      FUN_146f5435e(uVar2,lVar8 != 0,1);
      if ((char)local_78 != '\0') {
        FUN_146f5435e(uVar2,*(undefined4 *)(lVar9 + uVar10),5);
        FUN_142a8e97e(local_80,*(undefined8 *)(lVar9 + -8 + uVar10),*(undefined8 *)(lVar8 + 8));
      }
      uVar10 = uVar10 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa16fe FUN_147aa16fe body=388 status=ok
// SIG undefined FUN_147aa16fe(void)

void FUN_147aa16fe(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  plVar5 = (longlong *)param_2[4];
  uVar6 = *(uint *)(plVar4 + 1);
  uVar1 = *(uint *)(plVar5 + 1);
  uVar10 = (ulonglong)uVar1;
  local_80 = param_1;
  FUN_146f5435e(uVar2,uVar6 == uVar1,1);
  if (uVar6 != uVar1) {
    FUN_146f5435e(uVar2,uVar6,8);
  }
  if (uVar10 != 0) {
    local_68 = param_2[2];
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    if (uVar6 != 0) {
      uVar11 = uVar10;
      if (uVar6 < uVar1) {
        uVar11 = (ulonglong)uVar6;
      }
      lVar9 = 0;
      do {
        local_60 = *plVar4 + lVar9;
        local_58 = *plVar5 + lVar9;
        FUN_147aaf29c(local_80,&local_78);
        lVar9 = lVar9 + 0x10;
      } while (uVar11 * 0x10 != lVar9);
    }
  }
  if (uVar1 < uVar6) {
    iVar7 = uVar6 - uVar1;
    uVar10 = uVar10 << 4 | 8;
    do {
      lVar9 = *plVar4;
      uVar6 = *(int *)(lVar9 + uVar10) - 1;
      if (uVar6 < *(uint *)(lVar3 + 0x18)) {
        lVar8 = (ulonglong)uVar6 * 0x10 + *(longlong *)(lVar3 + 0x10);
      }
      else {
        lVar8 = 0;
      }
      local_78 = CONCAT31(local_78._1_3_,lVar8 != 0);
      FUN_146f5435e(uVar2,lVar8 != 0,1);
      if ((char)local_78 != '\0') {
        FUN_146f5435e(uVar2,*(undefined4 *)(lVar9 + uVar10),5);
        FUN_142a8e97e(local_80,*(undefined8 *)(lVar9 + -8 + uVar10),*(undefined8 *)(lVar8 + 8));
      }
      uVar10 = uVar10 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa1884 FUN_147aa1884 body=367 status=ok
// SIG undefined FUN_147aa1884(void)

void FUN_147aa1884(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
  uVar6 = FUN_146f546d2(uVar3,1);
  if ((uVar6 & 1) != 0) {
    uVar5 = FUN_146f546d2(uVar3,8);
    *(undefined4 *)(lVar1 + 0x40) = uVar5;
    uVar5 = FUN_146f546d2(uVar3,4);
    *(undefined4 *)(lVar1 + 0x44) = uVar5;
    if ((*(longlong *)(param_1 + 8) != 0) || (cVar4 = FUN_146f5b7ac(param_1), cVar4 != '\0'))
    goto LAB_147aa1915;
  }
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  local_40 = lVar1 + 0x20;
  local_38 = lVar2 + 0x20;
  local_58 = DAT_14c99b0e0;
  (*DAT_14c99b098)(param_1);
  if ((*(longlong *)(param_1 + 8) == 0) && (cVar4 = FUN_146f5b7ac(param_1), cVar4 == '\0')) {
    local_48 = param_2[2];
    local_58 = *param_2;
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_40 = lVar1;
    local_38 = lVar2;
    FUN_147aa19f4(param_1);
    if ((*(longlong *)(param_1 + 8) == 0) && (cVar4 = FUN_146f5b7ac(param_1), cVar4 == '\0')) {
      local_48 = param_2[2];
      local_58 = *param_2;
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_40 = lVar1 + 0x10;
      local_38 = lVar2 + 0x10;
      FUN_147aa1ca4(param_1);
      if (*(longlong *)(param_1 + 8) == 0) {
        FUN_146f5b7ac(param_1);
      }
    }
  }
LAB_147aa1915:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa19f4 FUN_147aa19f4 body=643 status=ok
// SIG undefined FUN_147aa19f4(void)

void FUN_147aa19f4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar14 = *param_2;
  plVar3 = (longlong *)param_2[3];
  plVar4 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar4 + 1);
  iVar7 = FUN_146f546d2(lVar2,1);
  uVar8 = uVar1;
  if (iVar7 == 0) {
    uVar8 = FUN_146f546d2(lVar2,8);
  }
  uVar13 = DAT_14c99c028;
  if (*(int *)(lVar2 + 0x14) == 0) {
    local_80 = lVar14;
    FUN_147aaf0fc(param_1,plVar3,lVar14);
    if (uVar8 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar10 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,(ulonglong)uVar8 << 4,8);
      *plVar3 = (longlong)pvVar10;
      *(uint *)(plVar3 + 1) = uVar8;
      memset(pvVar10,0,(ulonglong)uVar8 << 4);
      if (uVar1 != 0) {
        local_68 = param_2[2];
        local_78 = (undefined4)*param_2;
        uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_70 = (undefined4)param_2[1];
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
        uVar6 = uVar1;
        if (uVar8 < uVar1) {
          uVar6 = uVar8;
        }
        lVar14 = 0;
        do {
          local_60 = *plVar3 + lVar14;
          local_58 = *plVar4 + lVar14;
          FUN_147aaf394(param_1,&local_78);
          lVar14 = lVar14 + 0x10;
        } while ((ulonglong)uVar6 * 0x10 != lVar14);
      }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    if (*(int *)(lVar2 + 0x14) != 0) {
LAB_147aa1c2a:
      uVar13 = DAT_14c99c028;
      FUN_146f5b89e(param_1);
      if (*(longlong *)(param_1 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = uVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    iVar7 = uVar8 - uVar1;
    if (uVar1 <= uVar8 && iVar7 != 0) {
      lVar15 = (ulonglong)uVar1 << 4;
      lVar14 = local_80;
      do {
        lVar5 = *plVar3;
        uVar11 = FUN_146f546d2(lVar2,1);
        if ((uVar11 & 1) != 0) {
          iVar9 = FUN_146f546d2(lVar2,5);
          if ((*(uint *)(lVar14 + 0x18) <= iVar9 - 1U) ||
             (lVar12 = (ulonglong)(iVar9 - 1U) * 0x10 + *(longlong *)(lVar14 + 0x10), lVar12 == 0))
          {
            FUN_147aaf0fc(param_1,plVar3,lVar14);
            uVar13 = DAT_14c99b208;
            goto LAB_147aa1b0b;
          }
          lVar12 = *(longlong *)(lVar12 + 8);
          pvVar10 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                      (DAT_14c872d28,*(undefined4 *)(lVar12 + 0x74),
                                       *(undefined2 *)(lVar12 + 0x7a));
          *(void **)(lVar5 + lVar15) = pvVar10;
          *(int *)(lVar5 + 8 + lVar15) = iVar9;
          memset(pvVar10,0,(ulonglong)*(uint *)(lVar12 + 0x74));
          lVar14 = local_80;
          FUN_142a8ea2a(param_1,*(undefined8 *)(lVar5 + lVar15),lVar12);
        }
        lVar15 = lVar15 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (*(int *)(lVar2 + 0x14) != 0) goto LAB_147aa1c2a;
    }
  }
  else {
LAB_147aa1b0b:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar13;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa1ca4 FUN_147aa1ca4 body=643 status=ok
// SIG undefined FUN_147aa1ca4(void)

void FUN_147aa1ca4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar14 = *param_2;
  plVar3 = (longlong *)param_2[3];
  plVar4 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar4 + 1);
  iVar7 = FUN_146f546d2(lVar2,1);
  uVar8 = uVar1;
  if (iVar7 == 0) {
    uVar8 = FUN_146f546d2(lVar2,8);
  }
  uVar13 = DAT_14c99c028;
  if (*(int *)(lVar2 + 0x14) == 0) {
    local_80 = lVar14;
    FUN_147aaf1cc(param_1,plVar3,lVar14);
    if (uVar8 == 0) {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
    }
    else {
      pvVar10 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,(ulonglong)uVar8 << 4,8);
      *plVar3 = (longlong)pvVar10;
      *(uint *)(plVar3 + 1) = uVar8;
      memset(pvVar10,0,(ulonglong)uVar8 << 4);
      if (uVar1 != 0) {
        local_68 = param_2[2];
        local_78 = (undefined4)*param_2;
        uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_70 = (undefined4)param_2[1];
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
        uVar6 = uVar1;
        if (uVar8 < uVar1) {
          uVar6 = uVar8;
        }
        lVar14 = 0;
        do {
          local_60 = *plVar3 + lVar14;
          local_58 = *plVar4 + lVar14;
          FUN_147aaf394(param_1,&local_78);
          lVar14 = lVar14 + 0x10;
        } while ((ulonglong)uVar6 * 0x10 != lVar14);
      }
    }
    if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    if (*(int *)(lVar2 + 0x14) != 0) {
LAB_147aa1eda:
      uVar13 = DAT_14c99c028;
      FUN_146f5b89e(param_1);
      if (*(longlong *)(param_1 + 8) == 0) {
        *(undefined8 *)(param_1 + 8) = uVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    iVar7 = uVar8 - uVar1;
    if (uVar1 <= uVar8 && iVar7 != 0) {
      lVar15 = (ulonglong)uVar1 << 4;
      lVar14 = local_80;
      do {
        lVar5 = *plVar3;
        uVar11 = FUN_146f546d2(lVar2,1);
        if ((uVar11 & 1) != 0) {
          iVar9 = FUN_146f546d2(lVar2,5);
          if ((*(uint *)(lVar14 + 0x18) <= iVar9 - 1U) ||
             (lVar12 = (ulonglong)(iVar9 - 1U) * 0x10 + *(longlong *)(lVar14 + 0x10), lVar12 == 0))
          {
            FUN_147aaf1cc(param_1,plVar3,lVar14);
            uVar13 = DAT_14c99b208;
            goto LAB_147aa1dbb;
          }
          lVar12 = *(longlong *)(lVar12 + 8);
          pvVar10 = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                      (DAT_14c872d28,*(undefined4 *)(lVar12 + 0x74),
                                       *(undefined2 *)(lVar12 + 0x7a));
          *(void **)(lVar5 + lVar15) = pvVar10;
          *(int *)(lVar5 + 8 + lVar15) = iVar9;
          memset(pvVar10,0,(ulonglong)*(uint *)(lVar12 + 0x74));
          lVar14 = local_80;
          FUN_142a8ea2a(param_1,*(undefined8 *)(lVar5 + lVar15),lVar12);
        }
        lVar15 = lVar15 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (*(int *)(lVar2 + 0x14) != 0) goto LAB_147aa1eda;
    }
  }
  else {
LAB_147aa1dbb:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar13;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa1f54 FUN_147aa1f54 body=266 status=ok
// SIG undefined FUN_147aa1f54(void)

void FUN_147aa1f54(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lStack_40 = param_2[3];
  lVar1 = param_2[4];
  *(uint *)(lVar1 + 0x40) = (uint)*(byte *)(lStack_40 + 0x29);
  *(undefined4 *)(lVar1 + 0x44) = 0;
  uVar2 = *(byte *)(lStack_40 + 0x28) & 1;
  *(uint *)(lVar1 + 0x44) = uVar2;
  uVar2 = *(byte *)(lStack_40 + 0x28) & 2 | uVar2;
  *(uint *)(lVar1 + 0x44) = uVar2;
  uVar2 = *(byte *)(lStack_40 + 0x28) & 4 | uVar2;
  *(uint *)(lVar1 + 0x44) = uVar2;
  *(uint *)(lVar1 + 0x44) = *(byte *)(lStack_40 + 0x28) & 8 | uVar2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  lStack_40 = lStack_40 + 0x30;
  local_38 = lVar1 + 0x20;
  local_58 = DAT_14c99b0e0;
  (*DAT_14c99b0a0)(param_1,&local_58);
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  lStack_40 = param_2[3];
  local_38 = lVar1;
  FUN_1434e90ee(param_1,&local_58);
  if (*(longlong *)(param_1 + 8) == 0) {
    local_58 = *param_2;
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_48 = param_2[2];
    lStack_40 = param_2[3];
    local_38 = lVar1 + 0x10;
    FUN_1434e92a8(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa2060 FUN_147aa2060 body=282 status=ok
// SIG undefined FUN_147aa2060(void)

void FUN_147aa2060(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[3];
  local_38 = param_2[4];
  *(undefined1 *)(local_38 + 0x29) = *(undefined1 *)(lVar2 + 0x40);
  bVar3 = *(byte *)(lVar2 + 0x44) & 1;
  bVar1 = *(byte *)(local_38 + 0x28);
  *(byte *)(local_38 + 0x28) = bVar1 & 0xfe | bVar3;
  bVar4 = *(byte *)(lVar2 + 0x44) & 2;
  *(byte *)(local_38 + 0x28) = bVar1 & 0xfc | bVar3 | bVar4;
  bVar5 = *(byte *)(lVar2 + 0x44) & 4;
  *(byte *)(local_38 + 0x28) = bVar1 & 0xf8 | bVar3 | bVar4 | bVar5;
  *(byte *)(local_38 + 0x28) = bVar1 & 0xf0 | bVar3 | bVar4 | bVar5 | *(byte *)(lVar2 + 0x44) & 8;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  lStack_40 = lVar2 + 0x20;
  local_38 = local_38 + 0x30;
  local_58 = DAT_14c99b0e0;
  (*DAT_14c99b0a8)(param_1,&local_58);
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  local_38 = param_2[4];
  lStack_40 = lVar2;
  FUN_147aa217c(param_1,&local_58);
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  local_38 = param_2[4];
  lStack_40 = lVar2 + 0x10;
  FUN_147aa231e(param_1,&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa217c FUN_147aa217c body=418 status=ok
// SIG undefined FUN_147aa217c(void)

void FUN_147aa217c(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  lVar3 = param_2[4];
  lVar4 = *param_2;
  plVar5 = (longlong *)param_2[3];
  FUN_147aa2e8a(lVar3 + 8,(int)plVar5[1]);
  lVar7 = plVar5[1];
  if ((int)lVar7 != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
    iVar13 = 0;
    lVar12 = 8;
    do {
      lVar14 = *plVar5;
      uVar8 = *(int *)(lVar14 + lVar12) - 1;
      if ((uVar8 < *(uint *)(lVar4 + 0x18)) &&
         (plVar9 = (longlong *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0x10)),
         plVar9 != (longlong *)0x0)) {
        plVar11 = (longlong *)*plVar9;
        lVar6 = plVar9[1];
        lVar10 = FUN_14001cc68((longlong)
                               (int)(-*(int *)((longlong)plVar11 + 0x5c) &
                                    ((int)plVar11[0xb] + *(int *)((longlong)plVar11 + 0x5c)) - 1U));
        (**(code **)(*plVar11 + 0x2e8))(plVar11,lVar10,1);
        FUN_146f3ab54(param_1,lVar10,*(undefined8 *)(lVar14 + -8 + lVar12),lVar6);
        lVar14 = (longlong)iVar13 * 0x10;
        plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14a8ea090;
        plVar11[2] = lVar10;
        *(longlong *)(lVar3 + lVar14) = lVar10;
        plVar9 = *(longlong **)(lVar3 + 8 + lVar14);
        if (plVar11 == plVar9) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar11 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar9 = plVar11;
              goto joined_r0x000147aa2309;
            }
          }
        }
        else {
          *(longlong **)(lVar14 + lVar3 + 8) = plVar11;
          if (plVar9 != (longlong *)0x0) goto LAB_147aa22bb;
        }
      }
      else {
        lVar14 = (longlong)iVar13 * 0x10;
        *(undefined8 *)(lVar3 + lVar14) = 0;
        plVar9 = *(longlong **)(lVar3 + 8 + lVar14);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(lVar14 + lVar3 + 8) = 0;
LAB_147aa22bb:
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000147aa2309:
            if (iVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)lVar7 != iVar13);
  }
  return;
}



// FUNCTION 147aa231e FUN_147aa231e body=418 status=ok
// SIG undefined FUN_147aa231e(void)

void FUN_147aa231e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  lVar3 = param_2[4];
  lVar4 = *param_2;
  plVar5 = (longlong *)param_2[3];
  FUN_147aa2e8a(lVar3 + 0x18,(int)plVar5[1]);
  lVar7 = plVar5[1];
  if ((int)lVar7 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    iVar13 = 0;
    lVar12 = 8;
    do {
      lVar14 = *plVar5;
      uVar8 = *(int *)(lVar14 + lVar12) - 1;
      if ((uVar8 < *(uint *)(lVar4 + 0x18)) &&
         (plVar9 = (longlong *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0x10)),
         plVar9 != (longlong *)0x0)) {
        plVar11 = (longlong *)*plVar9;
        lVar6 = plVar9[1];
        lVar10 = FUN_14001cc68((longlong)
                               (int)(-*(int *)((longlong)plVar11 + 0x5c) &
                                    ((int)plVar11[0xb] + *(int *)((longlong)plVar11 + 0x5c)) - 1U));
        (**(code **)(*plVar11 + 0x2e8))(plVar11,lVar10,1);
        FUN_146f3ab54(param_1,lVar10,*(undefined8 *)(lVar14 + -8 + lVar12),lVar6);
        lVar14 = (longlong)iVar13 * 0x10;
        plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14a8ea0b0;
        plVar11[2] = lVar10;
        *(longlong *)(lVar3 + lVar14) = lVar10;
        plVar9 = *(longlong **)(lVar3 + 8 + lVar14);
        if (plVar11 == plVar9) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar11 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar9 = plVar11;
              goto joined_r0x000147aa24ab;
            }
          }
        }
        else {
          *(longlong **)(lVar14 + lVar3 + 8) = plVar11;
          if (plVar9 != (longlong *)0x0) goto LAB_147aa245d;
        }
      }
      else {
        lVar14 = (longlong)iVar13 * 0x10;
        *(undefined8 *)(lVar3 + lVar14) = 0;
        plVar9 = *(longlong **)(lVar3 + 8 + lVar14);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(lVar14 + lVar3 + 8) = 0;
LAB_147aa245d:
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000147aa24ab:
            if (iVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)lVar7 != iVar13);
  }
  return;
}



// FUNCTION 147aa24c0 FUN_147aa24c0 body=266 status=ok
// SIG undefined FUN_147aa24c0(void)

undefined8 FUN_147aa24c0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_2[3];
  lVar2 = param_2[4];
  if (*(char *)(param_2 + 5) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  uVar4 = 0;
  if ((*(int *)(lVar1 + 0x40) == *(int *)(lVar2 + 0x40)) &&
     (*(int *)(lVar1 + 0x44) == *(int *)(lVar2 + 0x44))) {
    if (*(undefined1 (*) [16])(lVar2 + 0x30) == *(undefined1 (*) [16])(lVar1 + 0x30) &&
        *(undefined1 (*) [16])(lVar2 + 0x20) == *(undefined1 (*) [16])(lVar1 + 0x20)) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      local_48 = param_2[2];
      uStack_30 = param_2[5];
      lStack_40 = lVar1;
      local_38 = lVar2;
      cVar3 = FUN_147aa25e0(param_1);
      if (cVar3 != '\0') {
        local_58 = *param_2;
        uStack_50 = param_2[1];
        local_48 = param_2[2];
        uStack_30 = param_2[5];
        lStack_40 = lVar1 + 0x10;
        local_38 = lVar2 + 0x10;
        uVar4 = FUN_147aa269c(param_1);
        goto LAB_147aa2524;
      }
    }
    uVar4 = 0;
  }
LAB_147aa2524:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa25e0 FUN_147aa25e0 body=187 status=ok
// SIG undefined FUN_147aa25e0(void)

ulonglong FUN_147aa25e0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 unaff_RSI;
  longlong lVar12;
  
  if ((char)param_2[5] != '\x01') {
    uVar9 = FUN_147aa0c3a(param_2[3],param_2[4]);
    return uVar9;
  }
  plVar3 = (longlong *)param_2[3];
  plVar4 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 == *(uint *)(plVar4 + 1)) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((ulonglong)uVar1 != 0) {
      lVar5 = *param_2;
      lVar12 = 0;
      do {
        lVar6 = *plVar3;
        lVar7 = *plVar4;
        iVar2 = *(int *)(lVar6 + 8 + lVar12);
        if ((iVar2 != *(int *)(lVar7 + 8 + lVar12)) ||
           (((uVar10 = iVar2 - 1, uVar10 < *(uint *)(lVar5 + 0x18) &&
             (lVar11 = (ulonglong)uVar10 * 0x10 + *(longlong *)(lVar5 + 0x10), lVar11 != 0)) &&
            (cVar8 = FUN_146f3acc4(param_1,*(undefined8 *)(lVar6 + lVar12),
                                   *(undefined8 *)(lVar7 + lVar12),*(undefined8 *)(lVar11 + 8)),
            cVar8 == '\0')))) goto LAB_147aa266b;
        lVar12 = lVar12 + 0x10;
      } while ((ulonglong)uVar1 << 4 != lVar12);
    }
  }
  else {
LAB_147aa266b:
    uVar9 = 0;
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147aa269c FUN_147aa269c body=187 status=ok
// SIG undefined FUN_147aa269c(void)

ulonglong FUN_147aa269c(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 unaff_RSI;
  longlong lVar12;
  
  if ((char)param_2[5] != '\x01') {
    uVar9 = FUN_147aa0c3a(param_2[3],param_2[4]);
    return uVar9;
  }
  plVar3 = (longlong *)param_2[3];
  plVar4 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar3 + 1);
  if (uVar1 == *(uint *)(plVar4 + 1)) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((ulonglong)uVar1 != 0) {
      lVar5 = *param_2;
      lVar12 = 0;
      do {
        lVar6 = *plVar3;
        lVar7 = *plVar4;
        iVar2 = *(int *)(lVar6 + 8 + lVar12);
        if ((iVar2 != *(int *)(lVar7 + 8 + lVar12)) ||
           (((uVar10 = iVar2 - 1, uVar10 < *(uint *)(lVar5 + 0x18) &&
             (lVar11 = (ulonglong)uVar10 * 0x10 + *(longlong *)(lVar5 + 0x10), lVar11 != 0)) &&
            (cVar8 = FUN_146f3acc4(param_1,*(undefined8 *)(lVar6 + lVar12),
                                   *(undefined8 *)(lVar7 + lVar12),*(undefined8 *)(lVar11 + 8)),
            cVar8 == '\0')))) goto LAB_147aa2727;
        lVar12 = lVar12 + 0x10;
      } while ((ulonglong)uVar1 << 4 != lVar12);
    }
  }
  else {
LAB_147aa2727:
    uVar9 = 0;
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147aa2758 FUN_147aa2758 body=140 status=ok
// SIG undefined FUN_147aa2758(void)

undefined8 FUN_147aa2758(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = *(undefined4 *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  local_28 = *(undefined8 *)(param_2 + 0x10);
  local_20 = *(longlong *)(param_2 + 0x18) + 0x30;
  local_38 = DAT_14c99b0e0;
  cVar1 = (*DAT_14c99b0b8)(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_147aa27e6(param_1,param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_147aa28aa(param_1,param_2);
      goto LAB_147aa27ab;
    }
  }
  uVar2 = 0;
LAB_147aa27ab:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa27e6 FUN_147aa27e6 body=195 status=ok
// SIG undefined FUN_147aa27e6(void)

ulonglong FUN_147aa27e6(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  
  uVar6 = (ulonglong)*(uint *)(param_2[3] + 0x10);
  if (uVar6 < 0x100) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (uVar6 != 0) {
      lVar2 = *param_2;
      plVar11 = *(longlong **)(param_2[3] + 8);
      plVar7 = plVar11 + uVar6 * 2;
      do {
        if (((longlong *)*plVar11 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*(longlong *)*plVar11 + 0x58))(), lVar5 != 0)) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 == 0) goto LAB_147aa2801;
          lVar3 = *(longlong *)(lVar2 + 0x10);
          lVar10 = 0;
          iVar9 = 0;
          while (*(longlong *)(lVar3 + lVar10) != lVar5) {
            iVar9 = iVar9 + -1;
            lVar10 = lVar10 + 0x10;
            if ((longlong)(int)uVar1 << 4 == lVar10) goto LAB_147aa2801;
          }
          if ((iVar9 == 1) ||
             ((((uint)-iVar9 < uVar1 && (lVar3 + (ulonglong)(uint)-iVar9 * 0x10 != 0)) &&
              (cVar4 = FUN_146f3ade0(param_1,*plVar11), cVar4 == '\0')))) goto LAB_147aa2801;
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar7);
    }
  }
  else {
LAB_147aa2801:
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147aa28aa FUN_147aa28aa body=195 status=ok
// SIG undefined FUN_147aa28aa(void)

ulonglong FUN_147aa28aa(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  
  uVar6 = (ulonglong)*(uint *)(param_2[3] + 0x20);
  if (uVar6 < 0x100) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (uVar6 != 0) {
      lVar2 = *param_2;
      plVar11 = *(longlong **)(param_2[3] + 0x18);
      plVar7 = plVar11 + uVar6 * 2;
      do {
        if (((longlong *)*plVar11 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*(longlong *)*plVar11 + 0x58))(), lVar5 != 0)) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 == 0) goto LAB_147aa28c5;
          lVar3 = *(longlong *)(lVar2 + 0x10);
          lVar10 = 0;
          iVar9 = 0;
          while (*(longlong *)(lVar3 + lVar10) != lVar5) {
            iVar9 = iVar9 + -1;
            lVar10 = lVar10 + 0x10;
            if ((longlong)(int)uVar1 << 4 == lVar10) goto LAB_147aa28c5;
          }
          if ((iVar9 == 1) ||
             ((((uint)-iVar9 < uVar1 && (lVar3 + (ulonglong)(uint)-iVar9 * 0x10 != 0)) &&
              (cVar4 = FUN_146f3ade0(param_1,*plVar11), cVar4 == '\0')))) goto LAB_147aa28c5;
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar7);
    }
  }
  else {
LAB_147aa28c5:
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147aa296e FUN_147aa296e body=152 status=ok
// SIG undefined FUN_147aa296e(void)

void FUN_147aa296e(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 6);
  lVar2 = *(longlong *)(param_2 + 8);
  local_48 = *(undefined8 *)(param_2 + 4);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = lVar1;
  local_38 = lVar2;
  FUN_147aa2a08(local_58,&local_58);
  local_48 = *(undefined8 *)(param_2 + 4);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = lVar1 + 0x10;
  local_38 = lVar2 + 0x10;
  FUN_147aa2b0a(param_1,&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa2a08 FUN_147aa2a08 body=258 status=ok
// SIG undefined FUN_147aa2a08(void)

void FUN_147aa2a08(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Dst;
  undefined8 uVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  plVar5 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 == 0) {
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = 0;
  }
  else {
    _Size = (ulonglong)uVar1 << 4;
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,_Size,8);
    *plVar5 = (longlong)_Dst;
    *(uint *)(plVar5 + 1) = uVar1;
    memset(_Dst,0,_Size);
  }
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar10 = 0;
    do {
      lVar6 = *plVar4;
      lVar7 = *plVar5;
      iVar2 = *(int *)(lVar6 + 8 + lVar10);
      if (iVar2 - 1U < *(uint *)(lVar3 + 0x18)) {
        lVar9 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar3 + 0x10);
        *(int *)(lVar7 + 8 + lVar10) = iVar2;
        if (lVar9 == 0) goto LAB_147aa2ad3;
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x28))
                          (DAT_14c872d28,*(undefined4 *)(lVar9 + 0x74),*(undefined2 *)(lVar9 + 0x7a)
                          );
        *(undefined8 *)(lVar7 + lVar10) = uVar8;
        thunk_FUN_146f3b282(param_1,uVar8,*(undefined8 *)(lVar6 + lVar10),lVar9);
      }
      else {
        *(int *)(lVar7 + 8 + lVar10) = iVar2;
LAB_147aa2ad3:
        *(undefined8 *)(lVar7 + lVar10) = 0;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar10);
  }
  return;
}



// FUNCTION 147aa2b0a FUN_147aa2b0a body=258 status=ok
// SIG undefined FUN_147aa2b0a(void)

void FUN_147aa2b0a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Dst;
  undefined8 uVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[3];
  plVar5 = (longlong *)param_2[4];
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 == 0) {
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = 0;
  }
  else {
    _Size = (ulonglong)uVar1 << 4;
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,_Size,8);
    *plVar5 = (longlong)_Dst;
    *(uint *)(plVar5 + 1) = uVar1;
    memset(_Dst,0,_Size);
  }
  uVar1 = *(uint *)(plVar4 + 1);
  if ((ulonglong)uVar1 != 0) {
    lVar10 = 0;
    do {
      lVar6 = *plVar4;
      lVar7 = *plVar5;
      iVar2 = *(int *)(lVar6 + 8 + lVar10);
      if (iVar2 - 1U < *(uint *)(lVar3 + 0x18)) {
        lVar9 = (ulonglong)(iVar2 - 1U) * 0x10 + *(longlong *)(lVar3 + 0x10);
        *(int *)(lVar7 + 8 + lVar10) = iVar2;
        if (lVar9 == 0) goto LAB_147aa2bd5;
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x28))
                          (DAT_14c872d28,*(undefined4 *)(lVar9 + 0x74),*(undefined2 *)(lVar9 + 0x7a)
                          );
        *(undefined8 *)(lVar7 + lVar10) = uVar8;
        thunk_FUN_146f3b282(param_1,uVar8,*(undefined8 *)(lVar6 + lVar10),lVar9);
      }
      else {
        *(int *)(lVar7 + 8 + lVar10) = iVar2;
LAB_147aa2bd5:
        *(undefined8 *)(lVar7 + lVar10) = 0;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar10);
  }
  return;
}



// FUNCTION 147aa2c0c FUN_147aa2c0c body=53 status=ok
// SIG undefined FUN_147aa2c0c(void)

void FUN_147aa2c0c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[3];
  FUN_147aaf0fc(param_1,lVar1,*param_2);
  FUN_147aaf1cc(param_1,lVar1 + 0x10,*param_2);
  return;
}



// FUNCTION 147aa2c42 FUN_147aa2c42 body=148 status=ok
// SIG undefined FUN_147aa2c42(void)

void FUN_147aa2c42(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 6);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  local_38 = *(undefined8 *)(param_2 + 8);
  lStack_40 = lVar1;
  FUN_147aa2cd8(local_58,&local_58);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  local_38 = *(undefined8 *)(param_2 + 8);
  lStack_40 = lVar1 + 0x10;
  FUN_147aa2d8e(param_1,&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa2cd8 FUN_147aa2cd8 body=181 status=ok
// SIG undefined FUN_147aa2cd8(void)

void FUN_147aa2cd8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)param_2[3];
  uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
  if ((uVar8 != 0) && (lVar2 = *param_2, (*(byte *)(lVar2 + 0x20) & 4) != 0)) {
    lVar3 = param_2[4];
    lVar7 = 0;
    do {
      lVar4 = *plVar1;
      uVar5 = *(int *)(lVar4 + 8 + lVar7) - 1;
      if (((uVar5 < *(uint *)(lVar2 + 0x18)) &&
          (lVar6 = (ulonglong)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x10), lVar6 != 0)) &&
         (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
        FUN_146f1190e(lVar6);
        FUN_146f11920(lVar6);
        if ((*(byte *)(lVar6 + 0xb8) & 4) != 0) {
          thunk_FUN_146f3b614(param_1,lVar3,param_2 + 1,*(undefined8 *)(lVar4 + lVar7),lVar6);
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar8 << 4 != lVar7);
  }
  return;
}



// FUNCTION 147aa2d8e FUN_147aa2d8e body=181 status=ok
// SIG undefined FUN_147aa2d8e(void)

void FUN_147aa2d8e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)param_2[3];
  uVar8 = (ulonglong)*(uint *)(plVar1 + 1);
  if ((uVar8 != 0) && (lVar2 = *param_2, (*(byte *)(lVar2 + 0x20) & 4) != 0)) {
    lVar3 = param_2[4];
    lVar7 = 0;
    do {
      lVar4 = *plVar1;
      uVar5 = *(int *)(lVar4 + 8 + lVar7) - 1;
      if (((uVar5 < *(uint *)(lVar2 + 0x18)) &&
          (lVar6 = (ulonglong)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x10), lVar6 != 0)) &&
         (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
        FUN_146f1190e(lVar6);
        FUN_146f11920(lVar6);
        if ((*(byte *)(lVar6 + 0xb8) & 4) != 0) {
          thunk_FUN_146f3b614(param_1,lVar3,param_2 + 1,*(undefined8 *)(lVar4 + lVar7),lVar6);
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar8 << 4 != lVar7);
  }
  return;
}



// FUNCTION 147aa2e44 FUN_147aa2e44 body=69 status=ok
// SIG undefined FUN_147aa2e44(void)

void FUN_147aa2e44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7b0 = FUN_140002ddd(FUN_1463c98b5,uVar1,L"RootMotionSource");
  }
  FUN_142aa3c28(&DAT_14cada878,DAT_14cada7b0);
  return;
}



// FUNCTION 147aa2e8a FUN_147aa2e8a body=130 status=ok
// SIG undefined FUN_147aa2e8a(void)

void FUN_147aa2e8a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1479d9002(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147aaef06(param_1,param_2,iVar1 - param_2);
    FUN_147aaef60(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147aa2f0e FUN_147aa2f0e body=25 status=ok
// SIG undefined FUN_147aa2f0e(void)

void FUN_147aa2f0e(void)

{
  FUN_147aa2f28();
  FUN_146f09d18(&DAT_14cadad28);
  return;
}



// FUNCTION 147aa2f28 FUN_147aa2f28 body=132 status=ok
// SIG undefined FUN_147aa2f28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147aa2f28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadad48) {
    FUN_144b3d300(&DAT_14cadad48);
    if (DAT_14cadad48 == -1) {
      _DAT_14cadad38 = &DAT_14cada8b8;
      _DAT_14cadad28 = &PTR_LAB_149f970a0;
      _DAT_14cadad40 = 0;
      _DAT_14cadad30 = DAT_14cada890;
      _Init_thread_footer(&DAT_14cadad48);
      return;
    }
  }
  return;
}



// FUNCTION 147aa2fcc FUN_147aa2fcc body=484 status=ok
// SIG undefined FUN_147aa2fcc(void)

void FUN_147aa2fcc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = (undefined4)uStack_50;
  uStack_5c = uStack_50._4_4_;
  local_70 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar2 = FUN_1434e9462(&local_70,uVar1,local_48,&local_68);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa31b6 FUN_147aa31b6 body=41 status=ok
// SIG undefined FUN_147aa31b6(void)

void FUN_147aa31b6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa31e0 FUN_147aa31e0 body=41 status=ok
// SIG undefined FUN_147aa31e0(void)

void FUN_147aa31e0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa320a FUN_147aa320a body=41 status=ok
// SIG undefined FUN_147aa320a(void)

void FUN_147aa320a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa3234 FUN_147aa3234 body=42 status=ok
// SIG undefined FUN_147aa3234(void)

void FUN_147aa3234(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa325e FUN_147aa325e body=90 status=ok
// SIG undefined FUN_147aa325e(void)

void FUN_147aa325e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa32ba FUN_147aa32ba body=41 status=ok
// SIG undefined FUN_147aa32ba(void)

void FUN_147aa32ba(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa32e4 FUN_147aa32e4 body=41 status=ok
// SIG undefined FUN_147aa32e4(void)

void FUN_147aa32e4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2e8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa330e FUN_147aa330e body=143 status=ok
// SIG undefined FUN_147aa330e(void)

void FUN_147aa330e(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa33a2 FUN_147aa33a2 body=41 status=ok
// SIG undefined FUN_147aa33a2(void)

void FUN_147aa33a2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x308))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa33cc FUN_147aa33cc body=387 status=ok
// SIG undefined FUN_147aa33cc(void)

void FUN_147aa33cc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [3];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1434e9a3c(&local_50,uVar1,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa3572 FUN_147aa3572 body=41 status=ok
// SIG undefined FUN_147aa3572(void)

void FUN_147aa3572(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa35a0 FUN_147aa35a0 body=41 status=ok
// SIG undefined FUN_147aa35a0(void)

void FUN_147aa35a0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x310))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa35ce FUN_147aa35ce body=41 status=ok
// SIG undefined FUN_147aa35ce(void)

void FUN_147aa35ce(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x300))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa35fc FUN_147aa35fc body=41 status=ok
// SIG undefined FUN_147aa35fc(void)

void FUN_147aa35fc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x318))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa3628 FUN_147aa3628 body=252 status=ok
// SIG undefined FUN_147aa3628(void)

longlong * FUN_147aa3628(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_1;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar1 = (longlong *)FUN_1461a89fa(&local_38);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1458d4c52();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_48 = (void *)0x0;
      local_40 = *(int *)(param_3 + 1);
      lVar2 = (longlong)local_40;
      _Src = (void *)*param_3;
      if (lVar2 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_40,0);
        memcpy(local_48,_Src,lVar2 * 2);
      }
      (**(code **)(*plVar1 + 800))(plVar1,param_2,&local_48,0);
      goto LAB_147aa3671;
    }
  }
  plVar1 = (longlong *)0x0;
LAB_147aa3671:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa376e FUN_147aa376e body=47 status=ok
// SIG undefined FUN_147aa376e(void)

void FUN_147aa376e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 147aa37d4 FUN_147aa37d4 body=83 status=ok
// SIG undefined FUN_147aa37d4(void)

undefined8 * FUN_147aa37d4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147aa3840 FUN_147aa3840 body=28 status=ok
// SIG undefined FUN_147aa3840(void)

bool FUN_147aa3840(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  iVar2 = (**(code **)(*param_1 + 0x2f0))();
  return iVar1 != iVar2;
}



// FUNCTION 147aa386e FUN_147aa386e body=40 status=ok
// SIG undefined FUN_147aa386e(void)

undefined4 FUN_147aa386e(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x318))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)((longlong)param_1 + 0x4c) >> 8),
                     (int)param_1[10] < *(int *)((longlong)param_1 + 0x4c));
  }
  return uVar2;
}



// FUNCTION 147aa389e FUN_147aa389e body=98 status=ok
// SIG undefined FUN_147aa389e(void)

void FUN_147aa389e(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*param_1 + 0x2e0))(param_1,param_3);
  lVar1 = 0x328;
  if (param_4 != '\0') {
    *(int *)((longlong)param_1 + 0x44) = (int)param_1[8];
    lVar1 = 0x330;
  }
  (**(code **)(*param_1 + lVar1))(param_1);
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147aa3900 FUN_147aa3900 body=65 status=ok
// SIG undefined FUN_147aa3900(void)

void FUN_147aa3900(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2f0))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  uVar2 = FUN_14477b072(param_1,DAT_14cada9e8);
                    /* WARNING: Could not recover jumptable at 0x000147aa393e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147aa3942 FUN_147aa3942 body=47 status=ok
// SIG undefined FUN_147aa3942(void)

void FUN_147aa3942(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cada9b8);
                    /* WARNING: Could not recover jumptable at 0x000147aa396e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147aa3972 FUN_147aa3972 body=96 status=ok
// SIG undefined FUN_147aa3972(void)

void FUN_147aa3972(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459dcd34(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa3a8a FUN_147aa3a8a body=148 status=ok
// SIG undefined FUN_147aa3a8a(void)

void FUN_147aa3a8a(longlong param_1,double *param_2)

{
  FUN_147a00b08();
  *(double *)(param_1 + 800) = *param_2 + *(double *)(param_1 + 800);
  *(double *)(param_1 + 0x328) = param_2[1] + *(double *)(param_1 + 0x328);
  *(double *)(param_1 + 0x330) = param_2[2] + *(double *)(param_1 + 0x330);
  *(double *)(param_1 + 0x338) = *param_2 + *(double *)(param_1 + 0x338);
  *(double *)(param_1 + 0x340) = param_2[1] + *(double *)(param_1 + 0x340);
  *(double *)(param_1 + 0x348) = param_2[2] + *(double *)(param_1 + 0x348);
  return;
}



// FUNCTION 147aa3b28 FUN_147aa3b28 body=66 status=ok
// SIG undefined FUN_147aa3b28(void)

void FUN_147aa3b28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1474acd28(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cadaa68;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 2;
  return;
}



// FUNCTION 147aa3b78 FUN_147aa3b78 body=1485 status=ok
// SIG undefined FUN_147aa3b78(void)

void FUN_147aa3b78(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  longlong *local_138;
  undefined1 local_130 [8];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*param_2 != 0) {
    local_1a0 = *(undefined4 *)(param_1 + 0x50);
    local_1b0 = *(undefined4 *)(param_1 + 0x48);
    local_1b8 = *(undefined4 *)(param_1 + 0x44);
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,*(undefined1 *)(param_1 + 0x4c));
    local_180 = param_2;
    FUN_146a88456(*param_2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                  *(undefined4 *)(param_1 + 0x40));
    local_98 = 0;
    uStack_90 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar18 = 0;
      lVar16 = 0;
      local_188 = param_1;
      do {
        FUN_147aa4146(local_130,*(longlong *)(param_1 + 0x28) + lVar18);
        uVar12 = uStack_90;
        lVar15 = (longlong)(int)uStack_90;
        uVar13 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar13);
        if (uStack_90._4_4_ < uVar13) {
          FUN_147aafb0e(&local_98,uVar12 & 0xffffffff);
        }
        lVar11 = local_98;
        lVar3 = local_128;
        lVar15 = lVar15 * 0xa8;
        *(undefined1 *)(local_98 + lVar15) = 0;
        puVar4 = (undefined8 *)(local_98 + 8 + lVar15);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(local_98 + 0x18 + lVar15);
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar14 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        puVar4 = (undefined8 *)(local_98 + 0x28 + lVar15);
        *puVar4 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        puVar4[1] = uVar14;
        uVar14 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        puVar4 = (undefined8 *)(local_98 + 0x38 + lVar15);
        *puVar4 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        puVar4[1] = uVar14;
        uVar14 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        puVar4 = (undefined8 *)(local_98 + 0x48 + lVar15);
        *puVar4 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        puVar4[1] = uVar14;
        uVar10 = DAT_14c8463f8._4_4_;
        uVar9 = (undefined4)DAT_14c8463f8;
        uVar8 = DAT_14c8463f0._4_4_;
        puVar5 = (undefined4 *)(local_98 + 0x58 + lVar15);
        *puVar5 = (undefined4)DAT_14c8463f0;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        *(undefined8 *)(local_98 + 0x68 + lVar15) = 0x3ff0000000000000;
        *(undefined8 *)(local_98 + 0x70 + lVar15) = 0x3ff0000000000000;
        puVar4 = (undefined8 *)(local_98 + 0x88 + lVar15);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(local_98 + 0x98 + lVar15);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(local_98 + 0x78 + lVar15);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(local_98 + lVar15) = local_130[0];
        if (local_128 == 0) {
          uVar14 = 0;
          plVar17 = (longlong *)0x0;
        }
        else {
          local_158 = 0;
          uStack_150 = 0;
          local_168 = &DAT_3f8000003f800000;
          puStack_160 = &DAT_3f8000003f800000;
          local_1a8 = &local_158;
          local_1b0 = 3;
          local_1b8 = 1;
          FUN_147d25558(&local_140,local_128,&local_168,0);
          local_190 = local_138;
          uVar14 = local_140;
          if (local_138 == (longlong *)0x0) {
            local_190 = (longlong *)0x0;
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_138 + 1) = (int)local_138[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_138 + 1) = (int)local_138[1] + 1;
            UNLOCK();
            plVar17 = local_138;
          }
        }
        lVar2 = lVar11 + lVar15;
        *(undefined8 *)(lVar2 + 8) = uVar14;
        plVar7 = *(longlong **)(lVar2 + 0x10);
        if (plVar17 == plVar7) {
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar17 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar6 = *piVar1;
              UNLOCK();
joined_r0x000147aa3e4f:
              if (iVar6 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        else {
          *(longlong **)(lVar2 + 0x10) = plVar17;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar7 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar6 = *piVar1;
              UNLOCK();
              plVar17 = plVar7;
              goto joined_r0x000147aa3e4f;
            }
          }
        }
        plVar17 = local_190;
        if (lVar3 != 0) {
          if (local_190 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_190 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_190)(local_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          plVar17 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_138 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        lVar3 = local_120;
        if (local_120 == 0) {
          uVar14 = 0;
          plVar17 = (longlong *)0x0;
        }
        else {
          local_158 = 0;
          uStack_150 = 0;
          local_168 = &DAT_3f8000003f800000;
          puStack_160 = &DAT_3f8000003f800000;
          local_1a8 = &local_158;
          local_1b0 = 3;
          local_1b8 = 1;
          FUN_147d25558(&local_178,local_120,&local_168,0);
          local_198 = local_170;
          uVar14 = local_178;
          if (local_170 == (longlong *)0x0) {
            local_198 = (longlong *)0x0;
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
            plVar17 = local_170;
          }
        }
        param_1 = local_188;
        *(undefined8 *)(lVar2 + 0x18) = uVar14;
        plVar7 = *(longlong **)(lVar2 + 0x20);
        if (plVar17 == plVar7) {
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar17 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar6 = *piVar1;
              UNLOCK();
joined_r0x000147aa3fa3:
              if (iVar6 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        else {
          *(longlong **)(lVar2 + 0x20) = plVar17;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar7 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar6 = *piVar1;
              UNLOCK();
              plVar17 = plVar7;
              goto joined_r0x000147aa3fa3;
            }
          }
        }
        plVar17 = local_198;
        if (lVar3 != 0) {
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_198 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          plVar17 = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_170 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        lVar3 = lVar11 + lVar15;
        *(undefined8 *)(lVar3 + 0x28) = local_118;
        *(undefined8 *)(lVar3 + 0x30) = uStack_110;
        *(undefined8 *)(lVar3 + 0x38) = local_108;
        *(undefined8 *)(lVar3 + 0x40) = uStack_100;
        *(undefined8 *)(lVar3 + 0x48) = local_f8;
        *(undefined8 *)(lVar3 + 0x50) = uStack_f0;
        if (9.999999439624929e-11 < local_d8 * local_d8 + dStack_d0 * dStack_d0) {
          *(double *)(lVar11 + lVar15 + 0x68) = local_d8;
          *(double *)(lVar11 + lVar15 + 0x70) = dStack_d0;
        }
        lVar3 = lVar11 + lVar15;
        *(undefined4 *)(lVar3 + 0x58) = local_e8;
        *(undefined4 *)(lVar3 + 0x5c) = uStack_e4;
        *(undefined4 *)(lVar3 + 0x60) = uStack_e0;
        *(undefined4 *)(lVar3 + 100) = uStack_dc;
        FUN_1413a517a(lVar11 + 0x78 + lVar15,local_c8);
        FUN_1413a517a(lVar11 + 0x90 + lVar15,local_b0);
        FUN_147aa421c(local_130);
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + 0x98;
      } while (lVar16 < *(int *)(param_1 + 0x30));
    }
    param_2 = local_180;
    FUN_146a89f5e(*local_180,&local_98);
    FUN_147aafae5(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  plVar17 = (longlong *)param_2[1];
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4146 FUN_147aa4146 body=214 status=ok
// SIG undefined FUN_147aa4146(void)

undefined1 * FUN_147aa4146(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar1 = DAT_14c950c29;
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & bVar1) == 1) {
    FUN_1456cec3c();
  }
  puVar3 = (undefined8 *)(param_2 + 0x18);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x78);
  *(longlong *)(param_1 + 0x78) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar2 = *(longlong *)(param_2 + 0x90);
  *(longlong *)(param_1 + 0x90) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 147aa421c FUN_147aa421c body=103 status=ok
// SIG undefined FUN_147aa421c(void)

void FUN_147aa421c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x90);
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
  plVar3 = *(longlong **)(param_1 + 0x78);
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
                    /* WARNING: Could not recover jumptable at 0x000147aa4277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147aa4284 FUN_147aa4284 body=317 status=ok
// SIG undefined FUN_147aa4284(void)

void FUN_147aa4284(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(uint **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  local_48 = (undefined *)(CONCAT71(local_48._1_7_,(byte)*puVar1) & 0xffffffffffffff01);
  FUN_146f5435e(uVar2,(char)local_48 != '\0',1);
  if ((char)local_48 != '\0') {
    FUN_146f5435e(uVar2,*puVar1 >> 1 & 1,1);
    FUN_146f5435e(uVar2,*puVar1 >> 2 & 0x1f,5);
    if ((*puVar1 & 2) == 0) {
      uVar3 = *(ulonglong *)(puVar1 + 2);
      FUN_146f5435e(uVar2,uVar3 & 0xffffffff,0x20);
      FUN_146f5435e(uVar2,uVar3 >> 0x20,0x20);
    }
    else {
      local_38 = 0;
      local_40 = 0;
      local_48 = &DAT_14cadab68;
      local_30 = puVar1 + 4;
      (*DAT_14c99c040)(param_1);
    }
    if ((~*puVar1 & 0x7c) == 0) {
      local_38 = 0;
      local_40 = 0;
      local_48 = &DAT_14cadab80;
      local_30 = puVar1 + 8;
      (*DAT_14c99c040)(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa43c2 FUN_147aa43c2 body=405 status=ok
// SIG undefined FUN_147aa43c2(void)

void FUN_147aa43c2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar2,1);
  local_78 = CONCAT44(local_78._4_4_,uVar3) & 0xffffffff00000001;
  if ((uVar3 & 1) != 0) {
    iVar4 = FUN_146f546d2(uVar2,1);
    uVar6 = iVar4 * 2 & 2;
    uVar3 = FUN_146f546d2(uVar2,5);
    uVar3 = (uVar3 & 0x1f) * 4;
    local_78 = CONCAT44(local_78._4_4_,uVar6 + uVar3 + 1);
    if (uVar6 == 0) {
      uVar6 = FUN_146f546d2(uVar2,0x20);
      lVar5 = FUN_146f546d2(uVar2,0x20);
      uStack_70 = lVar5 << 0x20 | (ulonglong)uVar6;
    }
    else {
      local_88 = 0;
      local_90 = 0;
      local_98 = &DAT_14cadab68;
      local_80 = &local_68;
      (*DAT_14c99c048)(param_1);
      uVar3 = (uint)local_78 & 0x7c;
    }
    if (uVar3 == 0x7c) {
      local_88 = 0;
      local_90 = 0;
      local_98 = &DAT_14cadab80;
      local_80 = &local_58;
      (*DAT_14c99c048)(param_1);
    }
  }
  FUN_147aa4558(param_1,puVar1);
  puVar1[0xc] = (undefined4)local_48;
  puVar1[0xd] = local_48._4_4_;
  puVar1[0xe] = (undefined4)uStack_40;
  puVar1[0xf] = uStack_40._4_4_;
  puVar1[8] = (undefined4)local_58;
  puVar1[9] = local_58._4_4_;
  puVar1[10] = (undefined4)uStack_50;
  puVar1[0xb] = uStack_50._4_4_;
  puVar1[4] = (undefined4)local_68;
  puVar1[5] = local_68._4_4_;
  puVar1[6] = (undefined4)uStack_60;
  puVar1[7] = uStack_60._4_4_;
  *puVar1 = (uint)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4558 FUN_147aa4558 body=173 status=ok
// SIG undefined FUN_147aa4558(void)

void FUN_147aa4558(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 2) != 0) {
      local_28 = 0;
      local_30 = 0;
      local_38 = &DAT_14cadab68;
      local_20 = param_2 + 4;
      (*DAT_14c99c088)(param_1);
      uVar1 = *param_2;
    }
    if ((~uVar1 & 0x7c) == 0) {
      local_28 = 0;
      local_30 = 0;
      local_38 = &DAT_14cadab80;
      local_20 = param_2 + 8;
      (*DAT_14c99c088)(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4612 FUN_147aa4612 body=689 status=ok
// SIG undefined FUN_147aa4612(void)

void FUN_147aa4612(longlong param_1,longlong param_2)

{
  ushort _C;
  longlong lVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint *local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x18);
  puVar2 = *(uint **)(param_2 + 0x20);
  uVar8 = *puVar2;
  if ((uVar8 & 2) != 0) {
    local_78 = 0;
    local_80 = 0;
    local_88 = &DAT_14cadab68;
    local_70 = puVar2 + 4;
    (*DAT_14c99c088)(param_1);
    uVar8 = *puVar2;
  }
  if ((~uVar8 & 0x7c) == 0) {
    local_78 = 0;
    local_80 = 0;
    local_88 = &DAT_14cadab80;
    local_70 = puVar2 + 8;
    (*DAT_14c99c088)(param_1);
    uVar8 = *puVar2;
  }
  *puVar2 = uVar8 & 0xffffff80;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if ((&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x18)] == '\x01') {
    if ((*(longlong **)(lVar1 + 8) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))(), cVar5 == '\0'))
    goto LAB_147aa4720;
  }
  else if ((*(uint *)(lVar1 + 8) & 0xffffff) == 0) goto LAB_147aa4720;
  plVar9 = (longlong *)FUN_1408e4caa(lVar1);
  (**(code **)(*plVar9 + 0x30))(plVar9,&local_58);
  lVar4 = local_58;
  if (1 < (longlong)local_50) {
    lVar11 = 0;
    uVar13 = 0;
    local_90 = param_1;
    do {
      _C = *(ushort *)(lVar4 + lVar11);
      iVar7 = iswdigit(_C);
      if (iVar7 == 0) {
        bVar14 = 0;
        goto LAB_147aa47a1;
      }
      uVar12 = ((ulonglong)_C + uVar13 * 10) - 0x30;
      if (uVar12 <= uVar13) {
        bVar14 = 0;
        uVar13 = uVar12;
        goto LAB_147aa47a1;
      }
      lVar11 = lVar11 + 2;
      uVar13 = uVar12;
    } while ((longlong)local_50 * 2 + -2 != lVar11);
    bVar14 = 1;
LAB_147aa47a1:
    plVar9 = (longlong *)FUN_1408e4caa(lVar1);
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_60);
    plVar9 = (longlong *)FUN_140489acc();
    bVar6 = (**(code **)(*plVar9 + 0x2d8))(plVar9,local_60);
    lVar1 = local_90;
    uVar3 = DAT_14c99c018;
    if (bVar6 < 0x1f) {
      bVar10 = 0x1f;
      if (local_60 == 0) {
        bVar10 = 0;
      }
      if (bVar6 == 0) {
        bVar6 = bVar10;
      }
      uVar8 = (*puVar2 & 0xfffffffc) + (uint)(bVar14 ^ 1) * 2 + 1;
      *puVar2 = uVar8;
      if (bVar14 == 0) {
        local_78 = 0;
        local_80 = 0;
        local_88 = &DAT_14cadab68;
        local_70 = (uint *)&local_58;
        local_68 = puVar2 + 4;
        (*DAT_14c99c060)(local_90);
        uVar8 = *puVar2;
      }
      else {
        *(ulonglong *)(puVar2 + 2) = uVar13;
      }
      *puVar2 = (uVar8 & 0xffffff83) + (uint)bVar6 * 4;
      if (bVar6 == 0x1f) {
        local_78 = 0;
        local_80 = 0;
        local_88 = &DAT_14cadab80;
        local_68 = puVar2 + 8;
        local_70 = (uint *)&local_60;
        (*DAT_14c99c060)(lVar1);
      }
    }
    else {
      FUN_146f5b89e(local_90);
      if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined8 *)(lVar1 + 8) = uVar3;
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147aa4720:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa48c4 FUN_147aa48c4 body=782 status=ok
// SIG undefined FUN_147aa48c4(void)

/* WARNING: Removing unreachable block (ram,0x000147aa4ad2) */
/* WARNING: Removing unreachable block (ram,0x000147aa4ad8) */
/* WARNING: Removing unreachable block (ram,0x000147aa4ae6) */

void FUN_147aa48c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined **local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *plStack_68;
  uint *local_60;
  undefined ***local_58;
  undefined8 uStack_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = *(uint **)(param_2 + 0x18);
  plVar3 = *(longlong **)(param_2 + 0x20);
  if ((*puVar2 & 1) == 0) {
    local_70 = 0;
    plStack_68 = (longlong *)0x0;
    local_60 = (uint *)((ulonglong)local_60 & 0xffffffffffffff00);
    local_78 = &PTR_FUN_14a5af930;
    local_58 = (undefined ***)0x0;
    uStack_50 = 0;
    FUN_141238a10(plVar3,&local_78);
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(ulonglong)local_60 & 0xff])(&local_70);
    goto LAB_147aa4955;
  }
  uVar7 = *puVar2 >> 2 & 0x1f;
  local_80 = (undefined **)0x0;
  if (uVar7 == 0x1f) {
    plStack_68 = (longlong *)((ulonglong)plStack_68 & 0xffffffff00000000);
    local_70 = 0;
    local_78 = (undefined **)&DAT_14cadab80;
    local_60 = puVar2 + 8;
    local_58 = &local_80;
    (*DAT_14c99c068)(param_1);
    if (*(longlong *)(param_1 + 8) != 0) goto LAB_147aa4955;
  }
  else {
    if (uVar7 == 0) {
      plVar6 = (longlong *)FUN_140489acc();
      (**(code **)(*plVar6 + 0x2c8))(plVar6,&local_78);
    }
    else {
      plVar6 = (longlong *)FUN_140489acc();
      (**(code **)(*plVar6 + 0x2e0))(plVar6,&local_78,uVar7);
    }
    local_80 = local_78;
  }
  uVar4 = DAT_14c99c018;
  if (local_80 == (undefined **)0x0) {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
    goto LAB_147aa4955;
  }
  local_98 = (undefined **)0x0;
  uStack_90 = 0;
  if ((*puVar2 & 2) == 0) {
    uVar5 = FUN_141301ee6(&local_78,L"%llu",*(undefined8 *)(puVar2 + 2));
    FUN_1400020e8(&local_98,&local_78,uVar5);
LAB_147aa4a6a:
    plVar6 = (longlong *)FUN_140489acc();
    (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_78,&local_98,local_80);
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    if ((&DAT_149fc1b6e)[(ulonglong)local_60 & 0xff] == '\x01') {
      if (plStack_68 == (longlong *)0x0) {
        local_a8 = local_70;
        plStack_a0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
        UNLOCK();
        local_a8 = local_70;
        plStack_a0 = plStack_68;
      }
    }
    (**(code **)(*plVar3 + 8))(plVar3,&local_a8);
    plVar3 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_a0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(ulonglong)local_60 & 0xff])();
  }
  else {
    plStack_68 = (longlong *)((ulonglong)plStack_68 & 0xffffffff00000000);
    local_70 = 0;
    local_78 = (undefined **)&DAT_14cadab68;
    local_60 = puVar2 + 4;
    local_58 = &local_98;
    (*DAT_14c99c068)(param_1);
    if (*(longlong *)(param_1 + 8) == 0) goto LAB_147aa4a6a;
  }
  if (local_98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_147aa4955:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4bd4 FUN_147aa4bd4 body=333 status=ok
// SIG undefined FUN_147aa4bd4(void)

undefined8 FUN_147aa4bd4(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *puStack_40;
  uint *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = *(uint **)(param_2 + 0x18);
  puVar2 = *(uint **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  uVar4 = *puVar1;
  uVar7 = *puVar2 ^ uVar4;
  uVar6 = uVar4 >> 1 & 1;
  if ((((uVar7 & 0x7c) == 0 && (uVar7 & 1) == 0) && uVar6 == ((*puVar2 >> 1 & 1) != 0)) &&
      *(longlong *)(puVar1 + 2) == *(longlong *)(puVar2 + 2)) {
    if (uVar6 != 0) {
      uStack_50 = *(undefined4 *)(param_2 + 8);
      uStack_4c = *(undefined4 *)(param_2 + 0xc);
      local_48 = *(undefined4 *)(param_2 + 0x10);
      uStack_44 = *(undefined4 *)(param_2 + 0x14);
      uStack_30 = *(undefined4 *)(param_2 + 0x28);
      uStack_2c = *(undefined4 *)(param_2 + 0x2c);
      local_58 = &DAT_14cadab68;
      puStack_40 = puVar1 + 4;
      local_38 = puVar2 + 4;
      cVar3 = (*DAT_14c99c070)(param_1);
      if (cVar3 == '\0') goto LAB_147aa4c48;
      uVar4 = *puVar1;
    }
    if ((~uVar4 & 0x7c) == 0) {
      uStack_50 = *(undefined4 *)(param_2 + 8);
      uStack_4c = *(undefined4 *)(param_2 + 0xc);
      local_48 = *(undefined4 *)(param_2 + 0x10);
      uStack_44 = *(undefined4 *)(param_2 + 0x14);
      uStack_30 = *(undefined4 *)(param_2 + 0x28);
      uStack_2c = *(undefined4 *)(param_2 + 0x2c);
      local_58 = &DAT_14cadab80;
      puStack_40 = puVar1 + 8;
      local_38 = puVar2 + 8;
      cVar3 = (*DAT_14c99c070)(param_1);
      if (cVar3 == '\0') goto LAB_147aa4c48;
    }
    uVar5 = 1;
  }
  else {
LAB_147aa4c48:
    uVar5 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4d36 FUN_147aa4d36 body=280 status=ok
// SIG undefined FUN_147aa4d36(void)

ulonglong FUN_147aa4d36(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong unaff_RDI;
  undefined7 uVar6;
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar6 = (undefined7)(unaff_RDI >> 8);
  if ((&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x18)] == '\x01') {
    unaff_RDI = CONCAT71(uVar6,1);
    if ((*(longlong **)(lVar1 + 8) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x28))(), cVar2 == '\0'))
    goto LAB_147aa4dbe;
  }
  else if ((*(uint *)(lVar1 + 8) & 0xffffff) == 0) {
    unaff_RDI = CONCAT71(uVar6,1);
    goto LAB_147aa4dbe;
  }
  plVar5 = (longlong *)FUN_1408e4caa(lVar1);
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_38);
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  if (1 < local_30) {
    plVar5 = (longlong *)FUN_1408e4caa(lVar1);
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_40);
    plVar5 = (longlong *)FUN_140489acc();
    bVar3 = (**(code **)(*plVar5 + 0x2d8))(plVar5,local_40);
    if (bVar3 < 0x1f) {
      local_50 = 0;
      local_58 = 0;
      local_60 = &DAT_14cadab68;
      local_48 = &local_38;
      uVar4 = (*DAT_14c99c078)(param_1);
      unaff_RDI = (ulonglong)uVar4;
    }
    else {
      unaff_RDI = 0;
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_147aa4dbe:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 147aa4e50 FUN_147aa4e50 body=200 status=ok
// SIG undefined FUN_147aa4e50(void)

void FUN_147aa4e50(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(uint **)(param_2 + 0x18);
  uVar3 = *puVar1;
  if ((uVar3 & 1) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if ((uVar3 & 2) != 0) {
      local_38 = 0;
      local_40 = 0;
      local_48 = &DAT_14cadab68;
      local_30 = puVar1 + 4;
      local_28 = lVar2 + 0x10;
      (*DAT_14c99c080)(param_1);
      uVar3 = *puVar1;
    }
    if ((~uVar3 & 0x7c) == 0) {
      local_38 = 0;
      local_40 = 0;
      local_48 = &DAT_14cadab80;
      local_30 = puVar1 + 8;
      local_28 = lVar2 + 0x20;
      (*DAT_14c99c080)(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa4f25 FUN_147aa4f25 body=132 status=ok
// SIG undefined FUN_147aa4f25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147aa4f25(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadabc0) {
    FUN_144b3d300(&DAT_14cadabc0);
    if (DAT_14cadabc0 == -1) {
      _DAT_14cadabb0 = &DAT_14cadaab8;
      _DAT_14cadaba0 = &PTR_LAB_149f970a0;
      _DAT_14cadabb8 = 0;
      _DAT_14cadaba8 = DAT_14cadab98;
      _Init_thread_footer(&DAT_14cadabc0);
      return;
    }
  }
  return;
}



// FUNCTION 147aa4faa FUN_147aa4faa body=25 status=ok
// SIG undefined FUN_147aa4faa(void)

void FUN_147aa4faa(void)

{
  FUN_147aa4f25();
  FUN_146f09d18(&DAT_14cadaba0);
  return;
}



// FUNCTION 147aa4fc4 FUN_147aa4fc4 body=378 status=ok
// SIG undefined FUN_147aa4fc4(void)

ushort FUN_147aa4fc4(void)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  undefined1 local_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14637c662();
  FUN_146f11b1e(local_48);
  FUN_142a6f4a0(&local_28,uVar4,local_48);
  lVar2 = DAT_14cadab78;
  DAT_14cadab78 = local_28;
  local_28 = 0;
  if (lVar2 != 0) {
    FUN_146f11920();
    if (local_28 != 0) {
      FUN_146f11920();
    }
  }
  if ((0x20 < *(uint *)(DAT_14cadab78 + 0x74)) || (0x10U % *(ushort *)(DAT_14cadab78 + 0x7a) != 0))
  {
    local_50 = (uint)*(ushort *)(DAT_14cadab78 + 0x7a);
    local_58 = *(uint *)(DAT_14cadab78 + 0x74);
    FUN_140033559(".\\Runtime/Engine/Private/GameFramework/UniqueNetIdReplNetSerializer.cpp",0x225,
                  L"FQuantizedType::QuantizedStringID has size %u but requires size %u and alignment %u."
                  ,0x10);
  }
  uVar4 = FUN_14637c6f4();
  FUN_146f11b1e(local_48);
  FUN_142a6f4a0(&local_28,uVar4,local_48);
  lVar2 = DAT_14cadab90;
  DAT_14cadab90 = local_28;
  local_28 = 0;
  if (lVar2 != 0) {
    FUN_146f11920();
    if (local_28 != 0) {
      FUN_146f11920();
    }
  }
  uVar1 = *(ushort *)(DAT_14cadab90 + 0x7a);
  if ((0x20 < *(uint *)(DAT_14cadab90 + 0x74)) || (uVar3 = 0x20 / uVar1, 0x20U % uVar1 != 0)) {
    local_50 = (uint)uVar1;
    local_58 = *(uint *)(DAT_14cadab90 + 0x74);
    uVar3 = FUN_140033559(".\\Runtime/Engine/Private/GameFramework/UniqueNetIdReplNetSerializer.cpp"
                          ,0x233,
                          L"FQuantizedType::QuantizedTypeName has size %u but requires size %u and alignment %u."
                          ,0x20);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5152 FUN_147aa5152 body=158 status=ok
// SIG undefined FUN_147aa5152(void)

void FUN_147aa5152(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x310))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa51f2 FUN_147aa51f2 body=158 status=ok
// SIG undefined FUN_147aa51f2(void)

void FUN_147aa51f2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x318))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa52c4 FUN_147aa52c4 body=76 status=ok
// SIG undefined FUN_147aa52c4(void)

void FUN_147aa52c4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  FUN_1447cd2ec(param_1 + 0xb0,&local_14);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5312 FUN_147aa5312 body=183 status=ok
// SIG undefined FUN_147aa5312(void)

void FUN_147aa5312(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14572ad1a(param_1[4],1);
  param_1[6] = lVar1;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar1 + 0x2a8) = param_1;
  lVar1 = FUN_141603f94(1,0,param_2,param_3,1,5,0,0);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar1 + 0x1f0) = param_1;
  FUN_14572aa80(param_1[6],lVar1);
                    /* WARNING: Could not recover jumptable at 0x000147aa53ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c0))(param_1);
  return;
}



// FUNCTION 147aa53ca FUN_147aa53ca body=184 status=ok
// SIG undefined FUN_147aa53ca(void)

void FUN_147aa53ca(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined2 local_48 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_1;
  FUN_140902cb4(&local_38,&local_30);
  local_50 = 0;
  local_58 = 0;
  lVar1 = FUN_140270f2c(0,local_30,0x40,0);
  *param_2 = lVar1;
  *(byte *)(lVar1 + 0x2e) = *(byte *)(lVar1 + 0x2e) | 2;
  local_50 = 0;
  local_58 = 0;
  lVar1 = FUN_14572aef8(*param_2,local_38,0,0);
  *param_3 = lVar1;
  *(undefined1 *)(lVar1 + 0x152) = 6;
  local_48[0] = 0x1000;
  local_40 = 0;
  FUN_14572b19c(*param_3,local_48,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5484 FUN_147aa5484 body=72 status=ok
// SIG undefined FUN_147aa5484(void)

void FUN_147aa5484(longlong *param_1)

{
  FUN_1463cb886(param_1 + 6);
  if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  FUN_1449db362(param_1 + 2);
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147aa5516 FUN_147aa5516 body=144 status=ok
// SIG undefined FUN_147aa5516(void)

void FUN_147aa5516(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140adf126(&local_3c);
  local_40 = 0xffffffff;
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,&local_3c,&local_40);
  FUN_14164a60a(param_1,local_3c,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa55a8 FUN_147aa55a8 body=141 status=ok
// SIG undefined FUN_147aa55a8(void)

void FUN_147aa55a8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140adf126(&local_34,param_3);
  local_38 = 0xffffffff;
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_3,&local_34,&local_38);
  (**(code **)(*param_1 + 0x328))(param_1,param_2,local_34);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5636 FUN_147aa5636 body=23 status=ok
// SIG undefined FUN_147aa5636(void)

undefined8 FUN_147aa5636(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x40))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 147aa564e FUN_147aa564e body=174 status=ok
// SIG undefined FUN_147aa564e(void)

void FUN_147aa564e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_145f81532();
  if (lVar4 != 0) {
    local_38 = *param_5;
    local_30 = param_5[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    local_48 = &local_38;
    FUN_14369600a(lVar4,param_2,param_3,param_4);
  }
  plVar3 = (longlong *)param_5[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa56fe FUN_147aa56fe body=32 status=ok
// SIG undefined FUN_147aa56fe(void)

void FUN_147aa56fe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145f81532();
  if (lVar1 != 0) {
    FUN_143696d24(lVar1);
    return;
  }
  return;
}



// FUNCTION 147aa571e FUN_147aa571e body=70 status=ok
// SIG undefined FUN_147aa571e(void)

ulonglong FUN_147aa571e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_145f81532();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_143696808(lVar2,param_2,param_3,param_4);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 147aa5764 FUN_147aa5764 body=205 status=ok
// SIG undefined FUN_147aa5764(void)

undefined4 FUN_147aa5764(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14001cc68(0x78,0x10);
  FUN_1435a849a(lVar4,param_1,param_2);
  local_30 = lVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a8e9700;
  plVar5[2] = lVar4;
  local_28 = plVar5;
  FUN_147aab614(&local_30,lVar4);
  uVar3 = FUN_1435a8808(lVar4);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5832 FUN_147aa5832 body=38 status=ok
// SIG undefined FUN_147aa5832(void)

void FUN_147aa5832(longlong param_1,undefined8 param_2)

{
  FUN_1405f35b2(*(longlong *)(param_1 + 0x30) + 0x160);
  FUN_141238aee(param_2);
  return;
}



// FUNCTION 147aa5858 FUN_147aa5858 body=169 status=ok
// SIG undefined FUN_147aa5858(void)

void FUN_147aa5858(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_70,L"ReceivedNetworkEncryptionToken not implemented");
  FUN_147aa5902(local_60,local_70);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_60);
  }
  FUN_1458da0d4(local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5902 FUN_147aa5902 body=109 status=ok
// SIG undefined FUN_147aa5902(void)

undefined1 * FUN_147aa5902(undefined1 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 147aa5970 FUN_147aa5970 body=169 status=ok
// SIG undefined FUN_147aa5970(void)

void FUN_147aa5970(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_70,L"ReceivedNetworkEncryptionAck not implemented");
  FUN_147aa5902(local_60,local_70);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_60);
  }
  FUN_1458da0d4(local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5a1a FUN_147aa5a1a body=49 status=ok
// SIG undefined FUN_147aa5a1a(void)

longlong * FUN_147aa5a1a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459870b2();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 147aa5a8c FUN_147aa5a8c body=46 status=ok
// SIG undefined FUN_147aa5a8c(void)

longlong * FUN_147aa5a8c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147aa5aba FUN_147aa5aba body=97 status=ok
// SIG undefined FUN_147aa5aba(void)

void FUN_147aa5aba(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_140bddff2(param_1 + 0x50,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5b1c FUN_147aa5b1c body=95 status=ok
// SIG undefined FUN_147aa5b1c(void)

void FUN_147aa5b1c(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_147aa5b7c(param_1 + 0x50,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5b7c FUN_147aa5b7c body=241 status=ok
// SIG undefined FUN_147aa5b7c(void)

void FUN_147aa5b7c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        FUN_145d115d8(param_1);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147aa5cc2 FUN_147aa5cc2 body=41 status=ok
// SIG undefined FUN_147aa5cc2(void)

void FUN_147aa5cc2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x848))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa5cf0 FUN_147aa5cf0 body=41 status=ok
// SIG undefined FUN_147aa5cf0(void)

void FUN_147aa5cf0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x838))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa5d1e FUN_147aa5d1e body=41 status=ok
// SIG undefined FUN_147aa5d1e(void)

void FUN_147aa5d1e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x840))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147aa5d62 FUN_147aa5d62 body=175 status=ok
// SIG undefined FUN_147aa5d62(void)

void FUN_147aa5d62(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x8b8))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5e40 FUN_147aa5e40 body=60 status=ok
// SIG undefined FUN_147aa5e40(void)

undefined8 FUN_147aa5e40(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  plVar1 = *(longlong **)(lVar2 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar1 + 0x308))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147aa5eb4 FUN_147aa5eb4 body=166 status=ok
// SIG undefined FUN_147aa5eb4(void)

void FUN_147aa5eb4(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*(longlong *)param_1[0x7d] + 0x720))();
  if ((cVar1 != '\0') && (param_1[0x86] != DAT_14cadad88)) {
    uVar3 = FUN_1447210f0(param_1);
    uVar2 = (**(code **)(*param_1 + 0x8b0))(param_1);
    FUN_1400b22c2(local_30,"?Restart");
    FUN_146152ff8(uVar3,local_30,uVar2,0);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa5f5c FUN_147aa5f5c body=56 status=ok
// SIG undefined FUN_147aa5f5c(void)

void FUN_147aa5f5c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x848))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147aa5f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x870))(param_1,DAT_14cadad80);
    return;
  }
  return;
}



// FUNCTION 147aa5f94 FUN_147aa5f94 body=86 status=ok
// SIG undefined FUN_147aa5f94(void)

void FUN_147aa5f94(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)param_1[0x7d] + 0x718))();
  cVar1 = (**(code **)(*param_1 + 0x7c8))(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_14497e828(param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_14497e828(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147aa5fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x368))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 147aa6000 FUN_147aa6000 body=1 status=ok
// SIG undefined FUN_147aa6000(void)

void FUN_147aa6000(void)

{
  return;
}



// FUNCTION 147aa6042 FUN_147aa6042 body=300 status=ok
// SIG undefined FUN_147aa6042(void)

void FUN_147aa6042(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_2 == 0) {
LAB_147aa60a8:
    uVar4 = 0;
  }
  else {
    lVar1 = FUN_144a7cbb2();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_14490fee6();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) goto LAB_147aa60a8;
      lVar1 = FUN_14490fee6();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        param_2 = 0;
      }
      puVar5 = (undefined8 *)(param_2 + 0x398);
    }
    else {
      lVar1 = FUN_144a7cbb2();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
        param_2 = 0;
      }
      puVar5 = (undefined8 *)(param_2 + 0x3b0);
    }
    uVar4 = *puVar5;
  }
  lVar1 = FUN_1447210f0(param_1);
  if (0 < *(int *)(lVar1 + 0x238)) {
    iVar6 = 0;
    lVar3 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar3);
      if (lVar2 != 0) {
        FUN_141471938(lVar2,uVar4,param_3,param_4,0);
      }
      lVar3 = lVar3 + 8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 147aa616e FUN_147aa616e body=230 status=ok
// SIG undefined FUN_147aa616e(void)

void FUN_147aa616e(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447210f0();
  if (0 < *(int *)(lVar1 + 0x238)) {
    iVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar3);
      if (lVar2 != 0) {
        local_50 = *param_3;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_60 = param_7;
        local_68 = param_6;
        FUN_145bd9f10(lVar2,&local_50,param_4,param_5);
      }
      lVar3 = lVar3 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aa6256 FUN_147aa6256 body=888 status=ok
// SIG undefined FUN_147aa6256(void)

void FUN_147aa6256(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  void *_Dst;
  char local_4c;
  
  lVar6 = FUN_1447210f0();
  if (((((*(byte *)((longlong)param_2 + 0x39a) & 0x40) == 0) &&
       (cVar3 = FUN_1414077a0(param_1,param_3), cVar3 == '\0')) &&
      ((*(byte *)(lVar6 + 0x155) & 0x20) == 0)) &&
     (plVar7 = (longlong *)(**(code **)(*param_2 + 0x6c0))(param_2), plVar7 != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x690))(*(longlong **)(param_1 + 0x3f0),plVar7);
    FUN_140c7ce82(plVar7,0);
    (**(code **)(*plVar7 + 0x388))(plVar7,*(undefined4 *)(param_1 + 0x468));
    if ((&DAT_149fc1b6e)[*(byte *)(plVar7 + 0x77)] == '\x01') {
      if ((longlong *)plVar7[0x75] == (longlong *)0x0) {
        local_4c = '\0';
      }
      else {
        local_4c = (**(code **)(*(longlong *)plVar7[0x75] + 0x28))();
      }
    }
    else {
      local_4c = (*(uint *)(plVar7 + 0x75) & 0xffffff) != 0;
    }
    plVar1 = (longlong *)(param_1 + 0x458);
    iVar5 = *(int *)(param_1 + 0x460);
    if (0 < iVar5) {
      lVar6 = plVar7[0x7d];
      iVar11 = 0;
      do {
        lVar16 = (longlong)iVar11;
        lVar2 = *(longlong *)(*plVar1 + lVar16 * 8);
        if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
          iVar4 = iVar5 - (iVar11 + 1);
          if (iVar4 != 0) {
            _Dst = (void *)(*plVar1 + lVar16 * 8);
LAB_147aa63ce:
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
            iVar5 = *(int *)(param_1 + 0x460);
          }
LAB_147aa63e8:
          *(int *)(param_1 + 0x460) = iVar5 + -1;
          FUN_145a1de10(plVar1);
          iVar11 = iVar11 + -1;
        }
        else {
          if (1 < (int)lVar6 && local_4c == '\0') {
            iVar5 = *(int *)(lVar2 + 1000);
            if (iVar5 == (int)plVar7[0x7d]) {
              if (1 < iVar5) {
                lVar12 = 0;
                while( true ) {
                  uVar9 = *(ushort *)(*(longlong *)(lVar2 + 0x3e0) + lVar12);
                  uVar15 = (ulonglong)uVar9;
                  uVar13 = *(ushort *)(plVar7[0x7c] + lVar12);
                  if (uVar9 != uVar13) break;
                  if (uVar9 == 0) goto LAB_147aa63a9;
LAB_147aa6458:
                  lVar12 = lVar12 + 2;
                }
                if ((uVar13 | uVar9) < 0x80) {
                  uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  uVar14 = (ulonglong)uVar13;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                  if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar14]) goto LAB_147aa6458;
                }
                if (uVar9 != uVar13) goto LAB_147aa638c;
              }
            }
            else if ((int)plVar7[0x7d] + iVar5 != 1) goto LAB_147aa638c;
LAB_147aa63a9:
            FUN_140aeefbc(lVar2,0);
            iVar5 = *(int *)(param_1 + 0x460);
            iVar4 = iVar5 - (iVar11 + 1);
            if (iVar4 != 0) {
              _Dst = (void *)(lVar16 * 8 + *plVar1);
              goto LAB_147aa63ce;
            }
            goto LAB_147aa63e8;
          }
LAB_147aa638c:
          if ((local_4c != '\0') &&
             (cVar3 = FUN_140ba41f1(lVar2 + 0x3a0,plVar7 + 0x74), cVar3 != '\0'))
          goto LAB_147aa63a9;
        }
        iVar11 = iVar11 + 1;
        iVar5 = *(int *)(param_1 + 0x460);
      } while (iVar11 < iVar5);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar7);
      iVar5 = *(int *)(param_1 + 0x460);
    }
    *(uint *)(param_1 + 0x460) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x464) < iVar5 + 1U) {
      FUN_145ae3328(plVar1,iVar5);
    }
    *(longlong **)(*plVar1 + (longlong)iVar5 * 8) = plVar7;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar7);
    }
    iVar5 = *(int *)(param_1 + 0x460);
    iVar11 = *(int *)(param_1 + 0x46c);
    uVar10 = iVar5 - iVar11;
    if (uVar10 != 0 && iVar11 <= iVar5) {
      if (uVar10 != 0 && iVar11 <= iVar5) {
        uVar15 = 0;
        do {
          lVar6 = *(longlong *)(*plVar1 + uVar15 * 8);
          if (lVar6 != 0) {
            FUN_140aeefbc(lVar6,0,1);
          }
          uVar15 = uVar15 + 1;
        } while (uVar10 != uVar15);
      }
      if (iVar5 != iVar11) {
        iVar5 = *(int *)(param_1 + 0x460) - uVar10;
        uVar8 = uVar10;
        if (iVar5 != 0) {
          memmove(*(void **)(param_1 + 0x458),
                  (void *)((longlong)*(void **)(param_1 + 0x458) + (longlong)(int)uVar10 * 8),
                  (longlong)iVar5 << 3);
          uVar8 = *(uint *)(param_1 + 0x460);
        }
        *(uint *)(param_1 + 0x460) = uVar8 - uVar10;
        FUN_145a1de10(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147aa65fe FUN_147aa65fe body=120 status=ok
// SIG undefined FUN_147aa65fe(void)

longlong FUN_147aa65fe(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145f9a1d6(&local_38);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_38,param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa668c FUN_147aa668c body=58 status=ok
// SIG undefined FUN_147aa668c(void)

undefined8 * FUN_147aa668c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\TimecodeProvider.h",0x47,
                L"Pure virtual not implemented (%s)",L"UTimecodeProvider::GetQualifiedFrameTime");
  *param_2 = 0;
  param_2[1] = &DAT_100000018;
  return param_2;
}



// FUNCTION 147aa66d0 FUN_147aa66d0 body=45 status=ok
// SIG undefined FUN_147aa66d0(void)

longlong FUN_147aa66d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d7aa08(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa66fe FUN_147aa66fe body=48 status=ok
// SIG undefined FUN_147aa66fe(void)

longlong FUN_147aa66fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_140d7aa08(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa672e FUN_147aa672e body=45 status=ok
// SIG undefined FUN_147aa672e(void)

longlong FUN_147aa672e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457f5538(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6762 FUN_147aa6762 body=45 status=ok
// SIG undefined FUN_147aa6762(void)

longlong FUN_147aa6762(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410e088c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6796 FUN_147aa6796 body=45 status=ok
// SIG undefined FUN_147aa6796(void)

longlong FUN_147aa6796(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461a7e2c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa67c8 FUN_147aa67c8 body=45 status=ok
// SIG undefined FUN_147aa67c8(void)

longlong FUN_147aa67c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a32900(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa67f6 FUN_147aa67f6 body=29 status=ok
// SIG undefined FUN_147aa67f6(void)

undefined8 FUN_147aa67f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6814 FUN_147aa6814 body=29 status=ok
// SIG undefined FUN_147aa6814(void)

undefined8 FUN_147aa6814(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6832 FUN_147aa6832 body=29 status=ok
// SIG undefined FUN_147aa6832(void)

undefined8 FUN_147aa6832(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6850 FUN_147aa6850 body=29 status=ok
// SIG undefined FUN_147aa6850(void)

undefined8 FUN_147aa6850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa686e FUN_147aa686e body=29 status=ok
// SIG undefined FUN_147aa686e(void)

undefined8 FUN_147aa686e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa688c FUN_147aa688c body=29 status=ok
// SIG undefined FUN_147aa688c(void)

undefined8 FUN_147aa688c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa68aa FUN_147aa68aa body=38 status=ok
// SIG undefined FUN_147aa68aa(void)

undefined8 FUN_147aa68aa(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa68d0 FUN_147aa68d0 body=45 status=ok
// SIG undefined FUN_147aa68d0(void)

longlong FUN_147aa68d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6938 FUN_147aa6938 body=45 status=ok
// SIG undefined FUN_147aa6938(void)

longlong FUN_147aa6938(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b04cda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa696c FUN_147aa696c body=22 status=ok
// SIG undefined FUN_147aa696c(void)

undefined8 FUN_147aa696c(undefined8 param_1,undefined8 param_2)

{
  FUN_14020207e();
  return param_2;
}



// FUNCTION 147aa69ac FUN_147aa69ac body=112 status=ok
// SIG undefined FUN_147aa69ac(void)

void FUN_147aa69ac(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(char *)(param_1 + 0x90) != '\x01') {
      FUN_147aa6b32(param_1);
      return;
    }
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = uVar2;
    puVar4[2] = lVar3;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x80);
      *(undefined8 **)(param_1 + 0x80) = puVar4;
      UNLOCK();
      LOCK();
      *puVar1 = puVar4;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 147aa6a1c FUN_147aa6a1c body=38 status=ok
// SIG undefined FUN_147aa6a1c(void)

undefined8 FUN_147aa6a1c(undefined8 param_1,int param_2)

{
  FUN_1458c89b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6a72 FUN_147aa6a72 body=45 status=ok
// SIG undefined FUN_147aa6a72(void)

longlong FUN_147aa6a72(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1458c89b8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6aa0 FUN_147aa6aa0 body=45 status=ok
// SIG undefined FUN_147aa6aa0(void)

longlong FUN_147aa6aa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1458c89b8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa6ad6 FUN_147aa6ad6 body=91 status=ok
// SIG undefined FUN_147aa6ad6(void)

void FUN_147aa6ad6(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    local_1c[0] = param_3;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,local_1c);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa6b32 FUN_147aa6b32 body=154 status=ok
// SIG undefined FUN_147aa6b32(void)

void FUN_147aa6b32(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar3 = FUN_144b00e3a(uVar5,0,1);
    if (cVar3 != '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
      if (0 < *(int *)(param_1 + 0x58)) {
        lVar4 = 0;
        lVar6 = 0;
        do {
          puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + lVar4);
          (**(code **)*puVar2)(puVar2,param_2);
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 0x10;
        } while (lVar6 < *(int *)(param_1 + 0x58));
      }
                    /* WARNING: Could not recover jumptable at 0x000147aa6bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
      return;
    }
  }
  return;
}



// FUNCTION 147aa6bcc FUN_147aa6bcc body=63 status=ok
// SIG undefined FUN_147aa6bcc(void)

bool FUN_147aa6bcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar2 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  bVar3 = true;
  if (*(int *)(param_1 + 1) == iVar2) {
    if (uVar1 < 2) {
      bVar3 = false;
    }
    else {
      iVar2 = FUN_144a54874(*param_1,*param_2,(longlong)iVar2);
      bVar3 = iVar2 != 0;
    }
  }
  return bVar3;
}



// FUNCTION 147aa6c0c FUN_147aa6c0c body=346 status=ok
// SIG undefined FUN_147aa6c0c(void)

undefined4 * FUN_147aa6c0c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a75156(param_1,local_48);
  iVar5 = 1;
  FUN_1446f470e(local_40,*param_3,1);
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_144b23990(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0xc) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_144869b4a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa6d68 FUN_147aa6d68 body=54 status=ok
// SIG undefined FUN_147aa6d68(void)

void FUN_147aa6d68(longlong *param_1)

{
  FUN_147aa6d9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147aa6d9e FUN_147aa6d9e body=128 status=ok
// SIG undefined FUN_147aa6d9e(void)

void FUN_147aa6d9e(longlong param_1,int param_2)

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



// FUNCTION 147aa6eb4 FUN_147aa6eb4 body=70 status=ok
// SIG undefined FUN_147aa6eb4(void)

void FUN_147aa6eb4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147a91225(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa6fae FUN_147aa6fae body=93 status=ok
// SIG undefined FUN_147aa6fae(void)

undefined1 FUN_147aa6fae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aa7034 FUN_147aa7034 body=59 status=ok
// SIG undefined FUN_147aa7034(void)

undefined8 FUN_147aa7034(longlong *param_1)

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



// FUNCTION 147aa70d6 FUN_147aa70d6 body=80 status=ok
// SIG undefined FUN_147aa70d6(void)

void FUN_147aa70d6(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14a819a60;
  *(undefined4 *)(param_2 + 2) = 0;
  memset(param_2 + 3,0,0x118);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 147aa7126 FUN_147aa7126 body=80 status=ok
// SIG undefined FUN_147aa7126(void)

void FUN_147aa7126(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14a819a60;
  *(undefined4 *)(param_2 + 2) = 0;
  memset(param_2 + 3,0,0x118);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 147aa719a FUN_147aa719a body=133 status=ok
// SIG undefined FUN_147aa719a(void)

undefined8 FUN_147aa719a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar3);
      if ((bVar2 & 1) != 0) {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + lVar3);
          bVar2 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar1;
      memcpy((void *)(param_2 + 8 + lVar3),(void *)(param_3 + lVar3 + 8),0x120);
      lVar3 = lVar3 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aa7248 FUN_147aa7248 body=59 status=ok
// SIG undefined FUN_147aa7248(void)

undefined8 FUN_147aa7248(longlong *param_1)

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



// FUNCTION 147aa7378 FUN_147aa7378 body=59 status=ok
// SIG undefined FUN_147aa7378(void)

undefined8 FUN_147aa7378(longlong *param_1)

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



// FUNCTION 147aa7496 FUN_147aa7496 body=54 status=ok
// SIG undefined FUN_147aa7496(void)

undefined1 FUN_147aa7496(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aa7602(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147aa74f4 FUN_147aa74f4 body=59 status=ok
// SIG undefined FUN_147aa74f4(void)

undefined8 FUN_147aa74f4(longlong *param_1)

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



// FUNCTION 147aa753a FUN_147aa753a body=48 status=ok
// SIG undefined FUN_147aa753a(void)

void FUN_147aa753a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a8eabe0;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147aa75b8 FUN_147aa75b8 body=57 status=ok
// SIG undefined FUN_147aa75b8(void)

undefined8 * FUN_147aa75b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8eabe0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa7602 FUN_147aa7602 body=97 status=ok
// SIG undefined FUN_147aa7602(void)

longlong FUN_147aa7602(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  
  lVar12 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar12;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  uVar9 = *(undefined4 *)(param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 0x38);
  uVar11 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x38) = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = uVar11;
  FUN_144723ece(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 147aa7664 FUN_147aa7664 body=54 status=ok
// SIG undefined FUN_147aa7664(void)

void FUN_147aa7664(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  return;
}



// FUNCTION 147aa76da FUN_147aa76da body=59 status=ok
// SIG undefined FUN_147aa76da(void)

undefined8 FUN_147aa76da(longlong *param_1)

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



// FUNCTION 147aa7818 FUN_147aa7818 body=59 status=ok
// SIG undefined FUN_147aa7818(void)

undefined8 FUN_147aa7818(longlong *param_1)

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



// FUNCTION 147aa78ba FUN_147aa78ba body=29 status=ok
// SIG undefined FUN_147aa78ba(void)

undefined8 FUN_147aa78ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa78d8 FUN_147aa78d8 body=38 status=ok
// SIG undefined FUN_147aa78d8(void)

undefined8 FUN_147aa78d8(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa795a FUN_147aa795a body=59 status=ok
// SIG undefined FUN_147aa795a(void)

undefined8 FUN_147aa795a(longlong *param_1)

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



// FUNCTION 147aa7a7c FUN_147aa7a7c body=39 status=ok
// SIG undefined FUN_147aa7a7c(void)

undefined8 FUN_147aa7a7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aa7acc FUN_147aa7acc body=59 status=ok
// SIG undefined FUN_147aa7acc(void)

undefined8 FUN_147aa7acc(longlong *param_1)

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



// FUNCTION 147aa7c00 FUN_147aa7c00 body=59 status=ok
// SIG undefined FUN_147aa7c00(void)

undefined8 FUN_147aa7c00(longlong *param_1)

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



// FUNCTION 147aa7cae FUN_147aa7cae body=138 status=ok
// SIG undefined FUN_147aa7cae(void)

undefined8 * FUN_147aa7cae(undefined8 *param_1,double param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = 0;
  auVar1._0_8_ = ((double)*param_3 / (double)param_3[1]) * param_2 + 0.5;
  auVar1._8_8_ = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  local_34 = (int)auVar1._0_8_;
  FUN_146805de4(&local_30);
  param_1[2] = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa7d82 FUN_147aa7d82 body=82 status=ok
// SIG undefined FUN_147aa7d82(void)

int FUN_147aa7d82(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa7eb0 FUN_147aa7eb0 body=59 status=ok
// SIG undefined FUN_147aa7eb0(void)

undefined8 FUN_147aa7eb0(longlong *param_1)

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



// FUNCTION 147aa7fcc FUN_147aa7fcc body=59 status=ok
// SIG undefined FUN_147aa7fcc(void)

undefined8 FUN_147aa7fcc(longlong *param_1)

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



// FUNCTION 147aa806e FUN_147aa806e body=38 status=ok
// SIG undefined FUN_147aa806e(void)

undefined8 FUN_147aa806e(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa8094 FUN_147aa8094 body=31 status=ok
// SIG undefined FUN_147aa8094(void)

undefined8 FUN_147aa8094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa80c4 FUN_147aa80c4 body=85 status=ok
// SIG undefined FUN_147aa80c4(void)

void FUN_147aa80c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e68a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e6830;
  return;
}



// FUNCTION 147aa811a FUN_147aa811a body=85 status=ok
// SIG undefined FUN_147aa811a(void)

void FUN_147aa811a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e68a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8e6830;
  return;
}



// FUNCTION 147aa8170 FUN_147aa8170 body=118 status=ok
// SIG undefined FUN_147aa8170(void)

void FUN_147aa8170(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e68a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8e6830;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147aa81d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147aa81ee FUN_147aa81ee body=19 status=ok
// SIG undefined FUN_147aa81ee(void)

undefined1 FUN_147aa81ee(undefined8 param_1,undefined8 param_2)

{
  FUN_1434ed04e(param_2);
  return 1;
}



// FUNCTION 147aa8204 FUN_147aa8204 body=470 status=ok
// SIG undefined FUN_147aa8204(void)

undefined8 * FUN_147aa8204(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149e063b2 + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) {
      return &DAT_14c872af8;
    }
LAB_147aa8248:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar5 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_147aa8248;
  }
  if (uVar4 == uVar6) {
    return &DAT_14c872af8;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"Input" + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) {
      return &DAT_14c872ae8;
    }
LAB_147aa82a1:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar5 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_147aa82a1;
  }
  if (uVar4 == uVar6) {
    return &DAT_14c872ae8;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"GameUserSettings" + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) {
      return &DAT_14c872b08;
    }
LAB_147aa82fa:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar5 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_147aa82fa;
  }
  if (uVar4 == uVar6) {
    return &DAT_14c872b08;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"Scalability" + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) {
      return &DAT_14c872ac8;
    }
LAB_147aa8353:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar5 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_147aa8353;
  }
  if (uVar4 == uVar6) {
    return &DAT_14c872ac8;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)L"Hardware" + lVar2);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_147aa83d8;
LAB_147aa839c:
    lVar2 = lVar2 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar5 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar5]) goto LAB_147aa839c;
  }
  if (uVar4 != uVar6) {
    return &DAT_14c872ce8;
  }
LAB_147aa83d8:
  return &DAT_14c872ad8;
}



// FUNCTION 147aa83da FUN_147aa83da body=100 status=ok
// SIG undefined FUN_147aa83da(void)

void FUN_147aa83da(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147aa843e FUN_147aa843e body=164 status=ok
// SIG undefined FUN_147aa843e(void)

void FUN_147aa843e(longlong *param_1,undefined8 param_2)

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
        goto LAB_147aa84be;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147aa84be:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147aa84f0 FUN_147aa84f0 body=94 status=ok
// SIG undefined FUN_147aa84f0(void)

void FUN_147aa84f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar1 = (code *)*param_1;
  local_18 = *param_3;
  *param_3 = 0;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  (*pcVar1)(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa857a FUN_147aa857a body=29 status=ok
// SIG undefined FUN_147aa857a(void)

undefined8 FUN_147aa857a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa863e FUN_147aa863e body=59 status=ok
// SIG undefined FUN_147aa863e(void)

undefined8 FUN_147aa863e(longlong *param_1)

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



// FUNCTION 147aa86df FUN_147aa86df body=166 status=ok
// SIG undefined FUN_147aa86df(void)

void FUN_147aa86df(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_147a992b8();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa8798 FUN_147aa8798 body=137 status=ok
// SIG undefined FUN_147aa8798(void)

void FUN_147aa8798(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    FUN_1434e6bd8(param_1,param_2);
    return;
  }
  FUN_147a991cc(param_1,*(undefined8 *)(param_2 + 0x18));
  memcpy(*(void **)(param_2 + 0x18),*(void **)(param_2 + 0x20),0x178);
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  FUN_146f59866(param_1,lVar1,lVar2);
  FUN_147a99408(lVar1 + 0xe0,param_1,lVar2 + 0xe0);
  return;
}



// FUNCTION 147aa8822 FUN_147aa8822 body=29 status=ok
// SIG undefined FUN_147aa8822(void)

undefined8 FUN_147aa8822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa8840 FUN_147aa8840 body=38 status=ok
// SIG undefined FUN_147aa8840(void)

undefined8 FUN_147aa8840(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa887e FUN_147aa887e body=61 status=ok
// SIG undefined FUN_147aa887e(void)

void FUN_147aa887e(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 8) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 8) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x10);
  return;
}



// FUNCTION 147aa88d2 FUN_147aa88d2 body=76 status=ok
// SIG undefined FUN_147aa88d2(void)

undefined1 FUN_147aa88d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_14115e0ba();
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aa8946 FUN_147aa8946 body=59 status=ok
// SIG undefined FUN_147aa8946(void)

undefined8 FUN_147aa8946(longlong *param_1)

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



// FUNCTION 147aa89ea FUN_147aa89ea body=75 status=ok
// SIG undefined FUN_147aa89ea(void)

void FUN_147aa89ea(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined **)(param_1 + 8) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 8) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147aa8ad8 FUN_147aa8ad8 body=54 status=ok
// SIG undefined FUN_147aa8ad8(void)

undefined1 FUN_147aa8ad8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aa8bec(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147aa8b36 FUN_147aa8b36 body=59 status=ok
// SIG undefined FUN_147aa8b36(void)

undefined8 FUN_147aa8b36(longlong *param_1)

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



// FUNCTION 147aa8b7c FUN_147aa8b7c body=34 status=ok
// SIG undefined FUN_147aa8b7c(void)

void FUN_147aa8b7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147a99aaa(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147aa8bec FUN_147aa8bec body=86 status=ok
// SIG undefined FUN_147aa8bec(void)

longlong * FUN_147aa8bec(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x15) = *(undefined8 *)((longlong)param_2 + 0x15);
  FUN_147aa8c42(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 147aa8c42 FUN_147aa8c42 body=122 status=ok
// SIG undefined FUN_147aa8c42(void)

longlong FUN_147aa8c42(longlong param_1,longlong param_2)

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
    FUN_147aa8cbc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147aa8cbc FUN_147aa8cbc body=121 status=ok
// SIG undefined FUN_147aa8cbc(void)

undefined8 * FUN_147aa8cbc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a32c2a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 147aa8d52 FUN_147aa8d52 body=44 status=ok
// SIG undefined FUN_147aa8d52(void)

void FUN_147aa8d52(undefined8 param_1,longlong *param_2)

{
  FUN_145db3da7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147aa8d94 FUN_147aa8d94 body=54 status=ok
// SIG undefined FUN_147aa8d94(void)

undefined1 FUN_147aa8d94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aa8e8e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147aa8df2 FUN_147aa8df2 body=59 status=ok
// SIG undefined FUN_147aa8df2(void)

undefined8 FUN_147aa8df2(longlong *param_1)

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



// FUNCTION 147aa8e8e FUN_147aa8e8e body=95 status=ok
// SIG undefined FUN_147aa8e8e(void)

undefined8 * FUN_147aa8e8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145db3da7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147aa8eee(param_1,iVar1);
      FUN_147aa8f61(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147aa8eee FUN_147aa8eee body=115 status=ok
// SIG undefined FUN_147aa8eee(void)

void FUN_147aa8eee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147aa8f61 FUN_147aa8f61 body=60 status=ok
// SIG undefined FUN_147aa8f61(void)

void FUN_147aa8f61(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145da1f00(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 147aa8f9e FUN_147aa8f9e body=50 status=ok
// SIG undefined FUN_147aa8f9e(void)

void FUN_147aa8f9e(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145db3da7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147aa8fd0 FUN_147aa8fd0 body=57 status=ok
// SIG undefined FUN_147aa8fd0(void)

undefined8 * FUN_147aa8fd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8eb0d0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147aa9082 FUN_147aa9082 body=59 status=ok
// SIG undefined FUN_147aa9082(void)

undefined8 FUN_147aa9082(longlong *param_1)

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



// FUNCTION 147aa915a FUN_147aa915a body=103 status=ok
// SIG undefined FUN_147aa915a(void)

undefined1 FUN_147aa915a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + lVar3) = *(undefined2 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aa91ea FUN_147aa91ea body=59 status=ok
// SIG undefined FUN_147aa91ea(void)

undefined8 FUN_147aa91ea(longlong *param_1)

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



// FUNCTION 147aa92f6 FUN_147aa92f6 body=59 status=ok
// SIG undefined FUN_147aa92f6(void)

undefined8 FUN_147aa92f6(longlong *param_1)

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



// FUNCTION 147aa93c0 FUN_147aa93c0 body=54 status=ok
// SIG undefined FUN_147aa93c0(void)

undefined1 FUN_147aa93c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aa94be(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147aa941e FUN_147aa941e body=59 status=ok
// SIG undefined FUN_147aa941e(void)

undefined8 FUN_147aa941e(longlong *param_1)

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



// FUNCTION 147aa94be FUN_147aa94be body=91 status=ok
// SIG undefined FUN_147aa94be(void)

longlong * FUN_147aa94be(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
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
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147aa9586 FUN_147aa9586 body=59 status=ok
// SIG undefined FUN_147aa9586(void)

undefined8 FUN_147aa9586(longlong *param_1)

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



// FUNCTION 147aa9660 FUN_147aa9660 body=54 status=ok
// SIG undefined FUN_147aa9660(void)

undefined1 FUN_147aa9660(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aa975e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147aa96be FUN_147aa96be body=59 status=ok
// SIG undefined FUN_147aa96be(void)

undefined8 FUN_147aa96be(longlong *param_1)

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



// FUNCTION 147aa975e FUN_147aa975e body=127 status=ok
// SIG undefined FUN_147aa975e(void)

longlong * FUN_147aa975e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
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
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 147aa9806 FUN_147aa9806 body=90 status=ok
// SIG undefined FUN_147aa9806(void)

undefined1 FUN_147aa9806(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147aa9888 FUN_147aa9888 body=59 status=ok
// SIG undefined FUN_147aa9888(void)

undefined8 FUN_147aa9888(longlong *param_1)

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



// FUNCTION 147aa99b6 FUN_147aa99b6 body=59 status=ok
// SIG undefined FUN_147aa99b6(void)

undefined8 FUN_147aa99b6(longlong *param_1)

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



// FUNCTION 147aa9af4 FUN_147aa9af4 body=65 status=ok
// SIG undefined FUN_147aa9af4(void)

undefined4 FUN_147aa9af4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(undefined4 *)(param_2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aa9c00 FUN_147aa9c00 body=59 status=ok
// SIG undefined FUN_147aa9c00(void)

undefined8 FUN_147aa9c00(longlong *param_1)

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



// FUNCTION 147aa9d06 FUN_147aa9d06 body=59 status=ok
// SIG undefined FUN_147aa9d06(void)

undefined8 FUN_147aa9d06(longlong *param_1)

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



// FUNCTION 147aa9e54 FUN_147aa9e54 body=59 status=ok
// SIG undefined FUN_147aa9e54(void)

undefined8 FUN_147aa9e54(longlong *param_1)

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



// FUNCTION 147aaa04e FUN_147aaa04e body=120 status=ok
// SIG undefined FUN_147aaa04e(void)

undefined8 FUN_147aaa04e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 8;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      puVar2 = (undefined8 *)(param_2 + 0x38 + lVar9);
      *(undefined2 *)(puVar2 + -3) = *(undefined2 *)(puVar1 + 4);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[3];
      puVar2[-5] = puVar1[2];
      puVar2[-4] = uVar5;
      puVar2[-7] = uVar3;
      puVar2[-6] = uVar4;
      *(undefined1 *)(puVar2 + -2) = *(undefined1 *)(puVar1 + 5);
      *(undefined4 *)((longlong)puVar2 + -0xc) = *(undefined4 *)((longlong)puVar1 + 0x2c);
      puVar7 = puVar1 + 7;
      puVar8 = puVar2;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar3 = puVar1[0x13];
      uVar4 = puVar1[0x14];
      uVar5 = puVar1[0x16];
      puVar2[0xe] = puVar1[0x15];
      puVar2[0xf] = uVar5;
      puVar2[0xc] = uVar3;
      puVar2[0xd] = uVar4;
      lVar9 = lVar9 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aaa0ee FUN_147aaa0ee body=59 status=ok
// SIG undefined FUN_147aaa0ee(void)

undefined8 FUN_147aaa0ee(longlong *param_1)

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



// FUNCTION 147aaa1dc FUN_147aaa1dc body=244 status=ok
// SIG undefined FUN_147aaa1dc(void)

undefined8 FUN_147aaa1dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      plVar1 = (longlong *)(param_3 + 0xd8 + lVar11);
      plVar2 = (longlong *)(param_2 + 0x40 + lVar11);
      *(short *)(plVar2 + -3) = (short)plVar1[-0x16];
      lVar7 = plVar1[-0x1a];
      lVar5 = plVar1[-0x19];
      lVar6 = plVar1[-0x17];
      plVar2[-5] = plVar1[-0x18];
      plVar2[-4] = lVar6;
      plVar2[-7] = lVar7;
      plVar2[-6] = lVar5;
      *(char *)(plVar2 + -2) = (char)plVar1[-0x15];
      *(undefined4 *)((longlong)plVar2 + -0xc) = *(undefined4 *)((longlong)plVar1 + -0xa4);
      plVar8 = plVar1 + -0x13;
      plVar9 = plVar2;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *plVar9 = *plVar8;
        plVar8 = plVar8 + 1;
        plVar9 = plVar9 + 1;
      }
      lVar7 = plVar1[-7];
      lVar5 = plVar1[-6];
      uVar3 = *(undefined4 *)((longlong)plVar1 + -0x24);
      lVar6 = plVar1[-4];
      uVar4 = *(undefined4 *)((longlong)plVar1 + -0x1c);
      *(int *)(plVar2 + 0xe) = (int)plVar1[-5];
      *(undefined4 *)((longlong)plVar2 + 0x74) = uVar3;
      *(int *)(plVar2 + 0xf) = (int)lVar6;
      *(undefined4 *)((longlong)plVar2 + 0x7c) = uVar4;
      plVar2[0xc] = lVar7;
      plVar2[0xd] = lVar5;
      plVar2[0x12] = plVar1[-1];
      uVar3 = *(undefined4 *)((longlong)plVar1 + -0x14);
      lVar7 = plVar1[-2];
      uVar4 = *(undefined4 *)((longlong)plVar1 + -0xc);
      *(int *)(plVar2 + 0x10) = (int)plVar1[-3];
      *(undefined4 *)((longlong)plVar2 + 0x84) = uVar3;
      *(int *)(plVar2 + 0x11) = (int)lVar7;
      *(undefined4 *)((longlong)plVar2 + 0x8c) = uVar4;
      lVar7 = *plVar1;
      if ((bVar10 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0xd8 + lVar11);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0xd8 + lVar11) = lVar7;
      lVar11 = lVar11 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aaa2f8 FUN_147aaa2f8 body=59 status=ok
// SIG undefined FUN_147aaa2f8(void)

undefined8 FUN_147aaa2f8(longlong *param_1)

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



// FUNCTION 147aaa3e6 FUN_147aaa3e6 body=63 status=ok
// SIG undefined FUN_147aaa3e6(void)

undefined1 FUN_147aaa3e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aaa4fa(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147aaa44e FUN_147aaa44e body=59 status=ok
// SIG undefined FUN_147aaa44e(void)

undefined8 FUN_147aaa44e(longlong *param_1)

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



// FUNCTION 147aaa4fa FUN_147aaa4fa body=341 status=ok
// SIG undefined FUN_147aaa4fa(void)

longlong FUN_147aaa4fa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  puVar9 = (undefined8 *)(param_2 + 0x40);
  puVar10 = (undefined8 *)(param_1 + 0x40);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  lVar8 = *(longlong *)(param_2 + 0xd8);
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0xd8);
    }
  }
  bVar7 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xd8) = lVar8;
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  lVar8 = *(longlong *)(param_2 + 0xf0);
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0xf0);
      bVar7 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xf0) = lVar8;
  lVar8 = *(longlong *)(param_2 + 0xf8);
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar8;
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  uVar5 = *(undefined8 *)(param_2 + 0x110);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(undefined8 *)(param_1 + 0x110) = uVar5;
  *(undefined8 *)(param_1 + 0x118) = uVar6;
  return param_1;
}



// FUNCTION 147aaa690 FUN_147aaa690 body=270 status=ok
// SIG undefined FUN_147aaa690(void)

undefined8 FUN_147aaa690(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte bVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar16 = DAT_14c950c29;
    do {
      plVar1 = (longlong *)(param_3 + 0xf8 + lVar17);
      plVar2 = (longlong *)(param_2 + 0x40 + lVar17);
      *(short *)(plVar2 + -3) = (short)plVar1[-0x1a];
      lVar13 = plVar1[-0x1e];
      lVar9 = plVar1[-0x1d];
      lVar10 = plVar1[-0x1b];
      plVar2[-5] = plVar1[-0x1c];
      plVar2[-4] = lVar10;
      plVar2[-7] = lVar13;
      plVar2[-6] = lVar9;
      *(char *)(plVar2 + -2) = (char)plVar1[-0x19];
      *(undefined4 *)((longlong)plVar2 + -0xc) = *(undefined4 *)((longlong)plVar1 + -0xc4);
      plVar14 = plVar1 + -0x17;
      plVar15 = plVar2;
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar15 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar15 = plVar15 + 1;
      }
      lVar13 = plVar1[-0xb];
      lVar9 = plVar1[-10];
      lVar10 = plVar1[-8];
      plVar2[0xe] = plVar1[-9];
      plVar2[0xf] = lVar10;
      plVar2[0xc] = lVar13;
      plVar2[0xd] = lVar9;
      *(char *)(plVar2 + 0x16) = (char)plVar1[-1];
      lVar13 = plVar1[-7];
      uVar3 = *(undefined4 *)((longlong)plVar1 + -0x34);
      lVar9 = plVar1[-6];
      uVar4 = *(undefined4 *)((longlong)plVar1 + -0x2c);
      lVar10 = plVar1[-5];
      uVar5 = *(undefined4 *)((longlong)plVar1 + -0x24);
      lVar11 = plVar1[-4];
      uVar6 = *(undefined4 *)((longlong)plVar1 + -0x1c);
      uVar7 = *(undefined4 *)((longlong)plVar1 + -0x14);
      lVar12 = plVar1[-2];
      uVar8 = *(undefined4 *)((longlong)plVar1 + -0xc);
      *(int *)(plVar2 + 0x14) = (int)plVar1[-3];
      *(undefined4 *)((longlong)plVar2 + 0xa4) = uVar7;
      *(int *)(plVar2 + 0x15) = (int)lVar12;
      *(undefined4 *)((longlong)plVar2 + 0xac) = uVar8;
      *(int *)(plVar2 + 0x12) = (int)lVar10;
      *(undefined4 *)((longlong)plVar2 + 0x94) = uVar5;
      *(int *)(plVar2 + 0x13) = (int)lVar11;
      *(undefined4 *)((longlong)plVar2 + 0x9c) = uVar6;
      *(int *)(plVar2 + 0x10) = (int)lVar13;
      *(undefined4 *)((longlong)plVar2 + 0x84) = uVar3;
      *(int *)(plVar2 + 0x11) = (int)lVar9;
      *(undefined4 *)((longlong)plVar2 + 0x8c) = uVar4;
      lVar13 = *plVar1;
      if ((bVar16 & 1) != 0) {
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar13 = *(longlong *)(param_3 + 0xf8 + lVar17);
          bVar16 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0xf8 + lVar17) = lVar13;
      lVar17 = lVar17 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147aaa7c6 FUN_147aaa7c6 body=59 status=ok
// SIG undefined FUN_147aaa7c6(void)

undefined8 FUN_147aaa7c6(longlong *param_1)

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



// FUNCTION 147aaa8b4 FUN_147aaa8b4 body=63 status=ok
// SIG undefined FUN_147aaa8b4(void)

undefined1 FUN_147aaa8b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147aaa9c8(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147aaa91c FUN_147aaa91c body=59 status=ok
// SIG undefined FUN_147aaa91c(void)

undefined8 FUN_147aaa91c(longlong *param_1)

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



// FUNCTION 147aaa9c8 FUN_147aaa9c8 body=234 status=ok
// SIG undefined FUN_147aaa9c8(void)

longlong FUN_147aaa9c8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  puVar13 = (undefined8 *)(param_2 + 0x40);
  puVar14 = (undefined8 *)(param_1 + 0x40);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xa0);
  uVar2 = *(undefined4 *)(param_2 + 0xa4);
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  uVar4 = *(undefined4 *)(param_2 + 0xac);
  uVar5 = *(undefined4 *)(param_2 + 0xb4);
  uVar6 = *(undefined4 *)(param_2 + 0xb8);
  uVar7 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar5;
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  *(undefined4 *)(param_1 + 0xbc) = uVar7;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  puVar13 = (undefined8 *)(param_2 + 0xc0);
  puVar14 = (undefined8 *)(param_1 + 0xc0);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  lVar12 = *(longlong *)(param_2 + 0x110);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x110);
    }
  }
  bVar11 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x110) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0x118);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x118);
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar12;
  return param_1;
}


