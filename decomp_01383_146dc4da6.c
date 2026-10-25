// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146dc4da6 FUN_146dc4da6 body=318 status=ok
// SIG undefined FUN_146dc4da6(void)

void FUN_146dc4da6(undefined8 *param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((double)param_1[0x3c] <= 0.0) || (dVar1 = (double)param_1[0x3a], dVar1 <= 0.0)) {
    param_1[0x44] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0x3ff0000000000000;
  }
  else {
    param_1[0x44] = (double)param_1[0x3c] * dVar1;
    local_c0 = (double)param_1[0x3e] * dVar1;
    local_b8 = (double)param_1[0x3f] * dVar1;
    local_b0 = dVar1 * (double)param_1[0x40];
    FUN_14013713e(*param_1,local_e8);
    FUN_14093471c(local_a8,local_e8,&local_c0);
    puVar3 = local_a8;
    puVar4 = param_1 + 0x46;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc4ee6 FUN_146dc4ee6 body=319 status=ok
// SIG undefined FUN_146dc4ee6(void)

void FUN_146dc4ee6(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(double *)(param_1 + 0x1e8) <= 0.0) || (dVar1 = *(double *)(param_1 + 0x1d8), dVar1 <= 0.0))
  {
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0x3ff0000000000000;
  }
  else {
    *(double *)(param_1 + 0x228) = *(double *)(param_1 + 0x1e8) * dVar1;
    local_c0 = *(double *)(param_1 + 0x208) * dVar1;
    local_b8 = *(double *)(param_1 + 0x210) * dVar1;
    local_b0 = dVar1 * *(double *)(param_1 + 0x218);
    FUN_14013713e(*(undefined8 *)(param_1 + 0x18),local_e8);
    FUN_14093471c(local_a8,local_e8,&local_c0);
    puVar3 = local_a8;
    puVar4 = (undefined8 *)(param_1 + 0x2b0);
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc5026 FUN_146dc5026 body=482 status=ok
// SIG undefined FUN_146dc5026(void)

void FUN_146dc5026(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = *(uint *)(param_2 + 0xfc);
  uVar1 = *(uint *)(param_2 + 0x100);
  uVar2 = *(uint *)(param_2 + 0x104);
  if ((uVar6 == 0 && uVar1 == 0) && uVar2 == 0) {
    return;
  }
  uVar5 = uVar6 ^ 2;
  if ((uVar1 == 2 && uVar5 == 0) && uVar2 == 2) {
    return;
  }
  uVar4 = uVar6 ^ 1;
  if (uVar2 == 1 && (uVar1 == 1 && uVar4 == 0)) {
    FUN_146dce860(param_1,param_2,param_3);
    return;
  }
  if (((uVar6 == 2) || (uVar1 != 2)) || (uVar2 != 2)) {
    if ((uVar5 == 0 && uVar2 == 2) && uVar1 != 2) {
      uVar3 = 1;
      uVar6 = uVar1;
    }
    else {
      if ((uVar1 != 2 || uVar5 != 0) || uVar2 == 2) {
        if (((uVar6 == 1) || (uVar1 != 1)) || (uVar2 != 1)) {
          if ((uVar4 == 0 && uVar2 == 1) && uVar1 != 1) {
            uVar3 = 1;
            uVar6 = uVar1;
          }
          else {
            if ((uVar1 != 1 || uVar4 != 0) || uVar2 == 1) {
              if (uVar6 == 1) {
                uVar3 = 0;
              }
              else if (uVar1 == 1) {
                uVar3 = 1;
              }
              else {
                if (uVar2 != 1) {
                  return;
                }
                uVar3 = 2;
              }
              FUN_146dcf1b8(param_1,uVar3,param_2);
              return;
            }
            uVar3 = 2;
            uVar6 = uVar2;
          }
        }
        else {
          uVar3 = 0;
        }
        uVar7 = 1;
        goto LAB_146dc5182;
      }
      uVar3 = 2;
      uVar6 = uVar2;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar7 = 2;
LAB_146dc5182:
  FUN_146dceb50(param_1,uVar3,uVar6,uVar7,param_2,param_3);
  return;
}



// FUNCTION 146dc5208 FUN_146dc5208 body=1054 status=ok
// SIG undefined FUN_146dc5208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dc5208(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  undefined8 uVar18;
  
  uVar9 = *(uint *)(param_3 + 0x114);
  uVar10 = *(uint *)(param_3 + 0x118);
  if ((*(int *)(param_3 + 0x110) != 0 || uVar9 != 0) || uVar10 != 0) {
    dVar1 = *(double *)(param_1 + 0x130);
    dVar2 = *(double *)(param_1 + 0x120);
    dVar3 = *(double *)(param_1 + 0x128);
    dVar11 = dVar1 - dVar2 * 0.0;
    dVar12 = dVar2 * 0.0 - dVar3;
    dVar13 = dVar3 * 0.0 + dVar1 * -0.0;
    dVar12 = dVar12 + dVar12;
    dVar11 = dVar11 + dVar11;
    dVar13 = dVar13 + dVar13;
    dVar4 = *(double *)(param_1 + 0x138);
    dVar5 = *(double *)(param_1 + 0x150);
    dVar6 = *(double *)(param_1 + 0x148);
    dVar7 = *(double *)(param_1 + 0x140);
    dVar14 = dVar5 - dVar7 * 0.0;
    dVar15 = dVar7 * 0.0 - dVar6;
    dVar16 = dVar6 * 0.0 + dVar5 * -0.0;
    dVar15 = dVar15 + dVar15;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar8 = *(double *)(param_1 + 0x158);
    dVar1 = ((dVar6 * dVar15 - dVar14 * dVar5) + dVar16 * dVar8 + 1.0) *
            ((dVar3 * dVar12 - dVar11 * dVar1) + dVar13 * dVar4 + 1.0) +
            ((dVar5 * dVar16 - dVar15 * dVar7) + dVar8 * dVar14 + 0.0) *
            ((dVar1 * dVar13 - dVar12 * dVar2) + dVar4 * dVar11 + 0.0) +
            ((dVar7 * dVar14 - dVar16 * dVar6) + dVar8 * dVar15 + 0.0) *
            ((dVar2 * dVar11 - dVar13 * dVar3) + dVar4 * dVar12 + 0.0);
    dVar2 = (double)_DAT_14c75f198;
    if (((*(char *)(param_2 + 0x45) == '\x01') && (*(int *)(param_3 + 0x110) == 1)) &&
       (dVar2 <= dVar1)) {
      FUN_146dcf4fc(param_1,param_4);
    }
    if (*(char *)(param_2 + 0x46) == '\x01') {
      uVar17 = uVar10 ^ 1;
      if ((uVar9 ^ 1) == 0 && uVar17 == 0) {
        FUN_146dcf5fa(param_1,param_3,param_4);
        return;
      }
      if (uVar9 == 2 && uVar17 == 0) {
        if (dVar2 <= dVar1) {
          uVar18 = 2;
LAB_146dc55db:
          FUN_146dcf880(param_1,param_2,uVar18,param_4);
          return;
        }
      }
      else if (uVar17 == 0 && uVar9 == 0) {
        if (dVar2 <= dVar1) {
          uVar18 = 2;
LAB_146dc54d6:
          FUN_146dcf948(param_1,uVar18,param_4);
          return;
        }
      }
      else if ((uVar9 ^ 1) == 0 && uVar10 == 2) {
        if (dVar2 <= dVar1) {
          uVar18 = 1;
          goto LAB_146dc55db;
        }
      }
      else if (((uVar9 == 1) && (uVar10 == 0)) && (dVar2 <= dVar1)) {
        uVar18 = 1;
        goto LAB_146dc54d6;
      }
    }
  }
  return;
}



// FUNCTION 146dc5626 FUN_146dc5626 body=211 status=ok
// SIG undefined FUN_146dc5626(void)

void FUN_146dc5626(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 1000) = param_3;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  if (*(char *)(param_4 + 0x43) == '\x01') {
    FUN_146dc56fa(param_1,param_2,param_4,param_5);
    FUN_146dc5ba8(param_1,param_2,param_4,param_5);
    FUN_146dc5e30(param_1,param_2,param_4,param_5);
    FUN_146dc5f38(param_1,param_2,param_4,param_5);
    return;
  }
  FUN_146dc5ba8(param_1,param_2,param_4,param_5);
  FUN_146dc56fa(param_1,param_2,param_4,param_5);
  FUN_146dc5f38(param_1,param_2,param_4,param_5);
  FUN_146dc5e30(param_1,param_2,param_4,param_5);
  return;
}



// FUNCTION 146dc56fa FUN_146dc56fa body=1198 status=ok
// SIG undefined FUN_146dc56fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dc56fa(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined4 uVar26;
  
  iVar9 = *(int *)(param_4 + 0x110);
  uVar10 = *(uint *)(param_4 + 0x114);
  uVar11 = *(uint *)(param_4 + 0x118);
  if ((iVar9 == 0 && uVar10 == 0) && uVar11 == 0) {
    return;
  }
  uVar18 = FUN_146dec9fc(param_3,param_4);
  uVar19 = FUN_146deca0c(param_3,param_4);
  dVar1 = *(double *)(param_1 + 0x130);
  dVar2 = *(double *)(param_1 + 0x120);
  dVar3 = *(double *)(param_1 + 0x128);
  dVar12 = dVar1 - dVar2 * 0.0;
  dVar13 = dVar2 * 0.0 - dVar3;
  dVar14 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  dVar4 = *(double *)(param_1 + 0x138);
  dVar5 = *(double *)(param_1 + 0x150);
  dVar6 = *(double *)(param_1 + 0x148);
  dVar7 = *(double *)(param_1 + 0x140);
  dVar15 = dVar5 - dVar7 * 0.0;
  dVar16 = dVar7 * 0.0 - dVar6;
  dVar17 = dVar6 * 0.0 + dVar5 * -0.0;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  dVar17 = dVar17 + dVar17;
  dVar8 = *(double *)(param_1 + 0x158);
  dVar1 = ((dVar6 * dVar16 - dVar15 * dVar5) + dVar17 * dVar8 + 1.0) *
          ((dVar3 * dVar13 - dVar12 * dVar1) + dVar14 * dVar4 + 1.0) +
          ((dVar5 * dVar17 - dVar16 * dVar7) + dVar8 * dVar15 + 0.0) *
          ((dVar1 * dVar14 - dVar13 * dVar2) + dVar4 * dVar12 + 0.0) +
          ((dVar7 * dVar15 - dVar17 * dVar6) + dVar8 * dVar16 + 0.0) *
          ((dVar2 * dVar12 - dVar14 * dVar3) + dVar4 * dVar13 + 0.0);
  dVar2 = (double)_DAT_14c75f198;
  if (((iVar9 == 1) && (*(char *)(param_3 + 0x45) != '\0')) && (dVar2 <= dVar1)) {
    FUN_146dc8712(param_1,param_2,param_3,param_4,uVar18);
  }
  if (*(char *)(param_3 + 0x46) != '\x01') goto LAB_146dc59b9;
  uVar22 = uVar11 ^ 1;
  uVar20 = uVar10 ^ 1;
  if (uVar20 == 0 && uVar22 == 0) {
    FUN_146dc88f4(param_1,param_2,param_3,param_4,uVar19);
    goto LAB_146dc59b9;
  }
  uVar21 = uVar10 ^ 2;
  if (uVar21 == 0 && uVar22 == 0) {
    FUN_146dc8bb0(param_1,param_3,param_4,1);
    if (dVar1 < dVar2) goto LAB_146dc59b9;
    uVar26 = 2;
  }
  else {
    if (uVar22 == 0 && uVar10 == 0) {
      if (dVar1 < dVar2) goto LAB_146dc59b9;
      uVar26 = 2;
LAB_146dc5b4a:
      FUN_146dc8e80(param_1,param_2,param_3,param_4,uVar26,uVar19);
      goto LAB_146dc59b9;
    }
    uVar22 = uVar11 ^ 2;
    if (uVar20 != 0 || uVar22 != 0) {
      if (uVar21 == 0 && uVar22 == 0) goto LAB_146dc59b9;
      if (uVar10 == 0 && uVar22 == 0) {
        uVar24 = 2;
      }
      else {
        if (uVar20 == 0 && uVar11 == 0) {
          if (dVar1 < dVar2) goto LAB_146dc59b9;
          uVar26 = 1;
          goto LAB_146dc5b4a;
        }
        if (uVar21 != 0 || uVar11 != 0) goto LAB_146dc59b9;
        uVar24 = 1;
      }
      FUN_146dc8bb0(param_1,param_3,param_4,uVar24);
      goto LAB_146dc59b9;
    }
    FUN_146dc8bb0(param_1,param_3,param_4,2);
    if (dVar1 < dVar2) goto LAB_146dc59b9;
    uVar26 = 1;
  }
  FUN_146dc8c86(param_1,param_2,param_3,param_4,uVar26,uVar19);
LAB_146dc59b9:
  bVar23 = *(int *)(param_4 + 0x110) == 2 & *(byte *)(param_3 + 0x45);
  bVar25 = false;
  if ((*(char *)(param_3 + 0x46) == '\x01') && (bVar25 = false, *(int *)(param_4 + 0x118) == 2)) {
    bVar25 = *(int *)(param_4 + 0x114) == 2;
  }
  if ((bVar23 | bVar25) == 1) {
    FUN_146dc9072(param_1,param_3,param_4,bVar23,bVar25);
  }
  return;
}



// FUNCTION 146dc5ba8 FUN_146dc5ba8 body=648 status=ok
// SIG undefined FUN_146dc5ba8(void)

void FUN_146dc5ba8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_4 + 0xfc);
  uVar1 = *(uint *)(param_4 + 0x100);
  uVar2 = *(uint *)(param_4 + 0x104);
  if ((uVar7 == 0 && uVar1 == 0) && uVar2 == 0) {
    return;
  }
  uVar5 = uVar7 ^ 2;
  if (uVar2 == 2 && (uVar1 == 2 && uVar5 == 0)) {
    if (*(double *)(param_1 + 0x220) <= 0.0) {
      uVar3 = 0;
      uVar6 = 1;
    }
    else {
      if (0.0 < *(double *)(param_1 + 0x228)) {
        FUN_1429b649a(0,param_3,param_4);
        return;
      }
      uVar3 = 1;
      uVar6 = 0;
    }
    FUN_1429b5f2c(0,uVar3,uVar6,param_3,param_4);
    return;
  }
  uVar4 = uVar7 ^ 1;
  if (uVar2 == 1 && (uVar1 == 1 && uVar4 == 0)) {
    FUN_146dca4a8(param_1,uVar2,param_3);
    return;
  }
  if (((uVar7 == 2) || (uVar1 != 2)) || (uVar2 != 2)) {
    if ((uVar5 == 0 && uVar2 == 2) && uVar1 != 2) {
      uVar3 = 2;
LAB_146dc5d9d:
      uVar6 = 1;
      uVar7 = uVar1;
      goto LAB_146dc5d84;
    }
    if ((uVar1 == 2 && uVar5 == 0) && uVar2 != 2) {
      uVar3 = 2;
    }
    else {
      if (((uVar7 != 1) && (uVar1 == 1)) && (uVar2 == 1)) {
        uVar3 = 1;
        goto LAB_146dc5d7e;
      }
      if ((uVar4 == 0 && uVar2 == 1) && uVar1 != 1) {
        uVar3 = 1;
        goto LAB_146dc5d9d;
      }
      if ((uVar1 != 1 || uVar4 != 0) || uVar2 == 1) {
        if (uVar7 - 1 < 2) {
          uVar3 = 0;
        }
        else if (uVar1 - 1 < 2) {
          uVar3 = 1;
          uVar7 = uVar1;
        }
        else {
          if (1 < uVar2 - 1) {
            return;
          }
          uVar3 = 2;
          uVar7 = uVar2;
        }
        FUN_146dcaad0(param_1,uVar2,uVar3,uVar7,param_3,param_4);
        return;
      }
      uVar3 = 1;
    }
    uVar6 = 2;
    uVar7 = uVar2;
  }
  else {
    uVar3 = 2;
LAB_146dc5d7e:
    uVar6 = 0;
  }
LAB_146dc5d84:
  FUN_146dca68c(param_1,uVar2,uVar6,uVar7,uVar3,param_3,param_4);
  return;
}



// FUNCTION 146dc5e30 FUN_146dc5e30 body=264 status=ok
// SIG undefined FUN_146dc5e30(void)

void FUN_146dc5e30(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  
  if ((((((*(char *)(param_4 + 0x26a) != '\0') || (*(char *)(param_4 + 0x26b) != '\0')) ||
        (*(char *)(param_4 + 0x26c) != '\0')) ||
       ((*(char *)(param_4 + 0x26d) != '\0' || (*(char *)(param_4 + 0x268) != '\0')))) ||
      (*(char *)(param_4 + 0x269) == '\x01')) && (*(char *)(param_3 + 0x47) == '\x01')) {
    iVar1 = *(int *)(param_4 + 0x110);
    iVar2 = *(int *)(param_4 + 0x114);
    iVar3 = *(int *)(param_4 + 0x118);
    bVar5 = iVar1 != 2;
    if (*(char *)(param_4 + 0x268) == '\0') {
      if (((iVar2 != 2) && (iVar3 != 2)) && ((iVar1 != 2 && (*(char *)(param_4 + 0x269) != '\0'))))
      goto LAB_146dc5f1a;
    }
    else if (((iVar2 != 2) && (iVar3 != 2)) && (iVar1 != 2)) {
LAB_146dc5f1a:
      FUN_146dc9330();
      return;
    }
    if ((*(char *)(param_4 + 0x26a) == '\0') && (*(char *)(param_4 + 0x26b) != '\x01')) {
      bVar5 = false;
    }
    bVar4 = *(byte *)(param_4 + 0x26d) | *(byte *)(param_4 + 0x26c);
    if (((bVar5) || ((iVar3 != 2 & bVar4) != 0)) || ((bVar4 & iVar2 != 2) != 0)) {
      FUN_146dc9b0c();
    }
  }
  return;
}



// FUNCTION 146dc5f38 FUN_146dc5f38 body=1177 status=ok
// SIG undefined FUN_146dc5f38(void)

void FUN_146dc5f38(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

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
  ulonglong uVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  double *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  char local_16b [3];
  double local_168 [17];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(char *)(param_3 + 0x47) == '\x01') {
    if ((*(char *)(param_4 + 0x1d8) == '\0') && (*(char *)(param_4 + 0x1db) != '\x01')) {
      local_16b[0] = false;
    }
    else {
      local_16b[0] = *(int *)(param_4 + 0xfc) != 2;
    }
    if ((*(char *)(param_4 + 0x1d9) == '\0') && (*(char *)(param_4 + 0x1dc) != '\x01')) {
      local_16b[1] = false;
    }
    else {
      local_16b[1] = *(int *)(param_4 + 0x100) != 2;
    }
    if ((*(char *)(param_4 + 0x1da) == '\0') && (*(char *)(param_4 + 0x1dd) != '\x01')) {
      local_16b[2] = false;
    }
    else {
      local_16b[2] = *(int *)(param_4 + 0x104) != 2;
    }
    if (((bool)local_16b[0] != false || (bool)local_16b[1] != false) || (bool)local_16b[2] != false)
    {
      pdVar21 = local_168 + 2;
      local_168[0xe] = 0.0;
      local_168[0xf] = 0.0;
      local_168[0xc] = 0.0;
      local_168[0xd] = 0.0;
      local_168[10] = 0.0;
      local_168[0xb] = 0.0;
      local_168[8] = 0.0;
      local_168[9] = 0.0;
      local_168[6] = 0.0;
      local_168[7] = 0.0;
      local_168[4] = 0.0;
      local_168[5] = 0.0;
      local_168[2] = 0.0;
      local_168[3] = 0.0;
      local_168[0] = 0.0;
      local_168[1] = 0.0;
      FUN_14076d742(param_1 + 0x120,local_168);
      dVar1 = *(double *)(param_4 + 0x1a8);
      dVar2 = *(double *)(param_4 + 0x1b0);
      dVar3 = *(double *)(param_4 + 0x1b8);
      dVar4 = *(double *)(param_1 + 0x130);
      dVar5 = *(double *)(param_1 + 0x128);
      dVar6 = *(double *)(param_1 + 0x120);
      dVar22 = dVar5 * dVar3 - dVar2 * dVar4;
      dVar22 = dVar22 + dVar22;
      dVar7 = *(double *)(param_1 + 0x138);
      dVar18 = dVar6 * dVar2 - dVar1 * dVar5;
      dVar18 = dVar18 + dVar18;
      dVar23 = dVar4 * dVar1 - dVar3 * dVar6;
      dVar23 = dVar23 + dVar23;
      dVar8 = *(double *)(param_1 + 0x100);
      dVar9 = *(double *)(param_1 + 0xf8);
      dVar10 = *(double *)(param_1 + 0xf0);
      dVar11 = *(double *)(param_4 + 0x1c0);
      dVar12 = *(double *)(param_4 + 0x1c8);
      dVar13 = *(double *)(param_4 + 0x1d0);
      dVar17 = dVar5 * dVar13 - dVar12 * dVar4;
      dVar17 = dVar17 + dVar17;
      dVar19 = dVar6 * dVar12 - dVar11 * dVar5;
      dVar19 = dVar19 + dVar19;
      dVar24 = dVar4 * dVar11 - dVar13 * dVar6;
      dVar24 = dVar24 + dVar24;
      dVar14 = *(double *)(param_1 + 0x118);
      dVar15 = *(double *)(param_1 + 0x108);
      dVar16 = *(double *)(param_1 + 0x110);
      uVar20 = 0;
      do {
        if (local_16b[uVar20] == '\x01') {
          local_178 = *pdVar21;
          local_188 = pdVar21[-2];
          local_180 = pdVar21[-1];
          local_198 = (dVar14 - ((dVar6 * dVar23 - dVar22 * dVar5) + dVar7 * dVar18 + dVar3 + dVar8)
                      ) * local_178 +
                      (dVar15 - ((dVar5 * dVar18 - dVar23 * dVar4) + dVar22 * dVar7 + dVar1 + dVar10
                                )) * local_188 +
                      (dVar16 - ((dVar4 * dVar22 - dVar18 * dVar6) + dVar7 * dVar23 + dVar2 + dVar9)
                      ) * local_180;
          local_190 = local_178 * ((dVar6 * dVar24 - dVar17 * dVar5) + dVar7 * dVar19 + dVar13) +
                      local_188 * ((dVar5 * dVar19 - dVar24 * dVar4) + dVar7 * dVar17 + dVar11) +
                      local_180 * ((dVar4 * dVar17 - dVar19 * dVar6) + dVar7 * dVar24 + dVar12);
          local_1a8 = param_4;
          local_1a0 = &local_188;
          FUN_146dcad5a(param_1,param_2,uVar20 & 0xffffffff,param_3);
        }
        uVar20 = uVar20 + 1;
        pdVar21 = pdVar21 + 4;
      } while (uVar20 != 3);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc63d2 FUN_146dc63d2 body=101 status=ok
// SIG undefined FUN_146dc63d2(void)

void FUN_146dc63d2(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 1000) = param_2;
  if (*(char *)(param_3 + 0x43) == '\x01') {
    FUN_146dc6438(param_1,param_3,param_4);
    FUN_146dc68bc(param_1,param_3,param_4);
    return;
  }
  FUN_146dc68bc(param_1,param_3,param_4);
  FUN_146dc6438(param_1,param_3,param_4);
  return;
}



// FUNCTION 146dc6438 FUN_146dc6438 body=1156 status=ok
// SIG undefined FUN_146dc6438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dc6438(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  undefined8 uVar24;
  bool bVar25;
  
  iVar9 = *(int *)(param_3 + 0x110);
  uVar10 = *(uint *)(param_3 + 0x114);
  uVar11 = *(uint *)(param_3 + 0x118);
  if ((iVar9 == 0 && uVar10 == 0) && uVar11 == 0) {
    return;
  }
  uVar18 = FUN_146dec9fc(param_2,param_3);
  uVar19 = FUN_146deca0c(param_2,param_3);
  dVar1 = *(double *)(param_1 + 0x130);
  dVar2 = *(double *)(param_1 + 0x120);
  dVar3 = *(double *)(param_1 + 0x128);
  dVar12 = dVar1 - dVar2 * 0.0;
  dVar13 = dVar2 * 0.0 - dVar3;
  dVar14 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  dVar4 = *(double *)(param_1 + 0x138);
  dVar5 = *(double *)(param_1 + 0x150);
  dVar6 = *(double *)(param_1 + 0x148);
  dVar7 = *(double *)(param_1 + 0x140);
  dVar15 = dVar5 - dVar7 * 0.0;
  dVar16 = dVar7 * 0.0 - dVar6;
  dVar17 = dVar6 * 0.0 + dVar5 * -0.0;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  dVar17 = dVar17 + dVar17;
  dVar8 = *(double *)(param_1 + 0x158);
  dVar1 = ((dVar6 * dVar16 - dVar15 * dVar5) + dVar17 * dVar8 + 1.0) *
          ((dVar3 * dVar13 - dVar12 * dVar1) + dVar14 * dVar4 + 1.0) +
          ((dVar5 * dVar17 - dVar16 * dVar7) + dVar8 * dVar15 + 0.0) *
          ((dVar1 * dVar14 - dVar13 * dVar2) + dVar4 * dVar12 + 0.0) +
          ((dVar7 * dVar15 - dVar17 * dVar6) + dVar8 * dVar16 + 0.0) *
          ((dVar2 * dVar12 - dVar14 * dVar3) + dVar4 * dVar13 + 0.0);
  dVar2 = (double)_DAT_14c75f198;
  if (((iVar9 == 1) && (*(char *)(param_2 + 0x45) != '\0')) && (dVar2 <= dVar1)) {
    FUN_146dcbfb8(param_1,param_2,param_3,uVar18);
  }
  if (*(char *)(param_2 + 0x46) != '\x01') goto LAB_146dc66e3;
  uVar22 = uVar11 ^ 1;
  uVar20 = uVar10 ^ 1;
  if (uVar20 == 0 && uVar22 == 0) {
    FUN_146dcc132(param_1,param_2,param_3,uVar19);
    goto LAB_146dc66e3;
  }
  uVar21 = uVar10 ^ 2;
  if (uVar21 == 0 && uVar22 == 0) {
    FUN_146dcc476(param_1,param_2,param_3,1);
    if (dVar1 < dVar2) goto LAB_146dc66e3;
    uVar24 = 2;
  }
  else {
    if (uVar22 == 0 && uVar10 == 0) {
      if (dVar1 < dVar2) goto LAB_146dc66e3;
      uVar24 = 2;
LAB_146dc6865:
      FUN_146dcc752(param_1,param_2,param_3,uVar24,(char)uVar19);
      goto LAB_146dc66e3;
    }
    uVar22 = uVar11 ^ 2;
    if (uVar20 != 0 || uVar22 != 0) {
      if (uVar21 == 0 && uVar22 == 0) goto LAB_146dc66e3;
      if (uVar10 == 0 && uVar22 == 0) {
        uVar24 = 2;
      }
      else {
        if (uVar20 == 0 && uVar11 == 0) {
          if (dVar1 < dVar2) goto LAB_146dc66e3;
          uVar24 = 1;
          goto LAB_146dc6865;
        }
        if (uVar21 != 0 || uVar11 != 0) goto LAB_146dc66e3;
        uVar24 = 1;
      }
      FUN_146dcc476(param_1,param_2,param_3,uVar24);
      goto LAB_146dc66e3;
    }
    FUN_146dcc476(param_1,param_2,param_3,2);
    if (dVar1 < dVar2) goto LAB_146dc66e3;
    uVar24 = 1;
  }
  FUN_146dcc5fe(param_1,param_2,param_3,uVar24,(char)uVar19);
LAB_146dc66e3:
  bVar23 = *(int *)(param_3 + 0x110) == 2 & *(byte *)(param_2 + 0x45);
  bVar25 = false;
  if ((*(char *)(param_2 + 0x46) == '\x01') && (bVar25 = false, *(int *)(param_3 + 0x118) == 2)) {
    bVar25 = *(int *)(param_3 + 0x114) == 2;
  }
  if ((bVar23 | bVar25) == 1) {
    FUN_146dcc8a4(param_1,param_2,param_3,bVar23,bVar25);
  }
  return;
}



// FUNCTION 146dc68bc FUN_146dc68bc body=523 status=ok
// SIG undefined FUN_146dc68bc(void)

void FUN_146dc68bc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = *(uint *)(param_3 + 0xfc);
  uVar1 = *(uint *)(param_3 + 0x100);
  uVar2 = *(uint *)(param_3 + 0x104);
  if ((uVar6 == 0 && uVar1 == 0) && uVar2 == 0) {
    return;
  }
  uVar5 = uVar6 ^ 2;
  if (uVar2 == 2 && (uVar1 == 2 && uVar5 == 0)) {
    FUN_146dcaea0(param_1,param_2);
    return;
  }
  uVar4 = uVar6 ^ 1;
  if (uVar2 == 1 && (uVar1 == 1 && uVar4 == 0)) {
    FUN_146dcb7b2(param_1,param_2);
    return;
  }
  if (((uVar6 == 2) || (uVar1 != 2)) || (uVar2 != 2)) {
    if ((uVar5 == 0 && uVar2 == 2) && uVar1 != 2) {
      uVar3 = 1;
      uVar6 = uVar1;
    }
    else {
      if ((uVar1 != 2 || uVar5 != 0) || uVar2 == 2) {
        if (((uVar6 == 1) || (uVar1 != 1)) || (uVar2 != 1)) {
          if ((uVar4 == 0 && uVar2 == 1) && uVar1 != 1) {
            uVar3 = 1;
            uVar6 = uVar1;
          }
          else {
            if ((uVar1 != 1 || uVar4 != 0) || uVar2 == 1) {
              if (uVar6 - 1 < 2) {
                uVar3 = 0;
              }
              else if (uVar1 - 1 < 2) {
                uVar3 = 1;
                uVar6 = uVar1;
              }
              else {
                if (1 < uVar2 - 1) {
                  return;
                }
                uVar3 = 2;
                uVar6 = uVar2;
              }
              FUN_146dcbd44(param_1,uVar3,uVar6,param_2,param_3);
              return;
            }
            uVar3 = 2;
            uVar6 = uVar2;
          }
        }
        else {
          uVar3 = 0;
        }
        uVar7 = 1;
        goto LAB_146dc6a27;
      }
      uVar3 = 2;
      uVar6 = uVar2;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar7 = 2;
LAB_146dc6a27:
  FUN_146dcb962(param_1,uVar3,uVar6,uVar7,param_2,param_3);
  return;
}



// FUNCTION 146dc6ac8 FUN_146dc6ac8 body=253 status=ok
// SIG undefined FUN_146dc6ac8(void)

void FUN_146dc6ac8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = (double)FUN_146deccbc(param_2,param_3);
  bVar1 = FUN_146dec9ec(param_2,param_3);
  if (*(int *)(param_3 + 0x100) == 2 && *(int *)(param_3 + 0xfc) == 2) {
    bVar2 = *(int *)(param_3 + 0x104) == 2;
  }
  else {
    if (*(int *)(param_3 + 0x100) == 1 && *(int *)(param_3 + 0xfc) == 1) {
      bVar3 = *(int *)(param_3 + 0x104) == 1;
      bVar2 = false;
      goto LAB_146dc6b39;
    }
    bVar2 = false;
  }
  bVar3 = false;
LAB_146dc6b39:
  if (((bVar1 ^ 1) & *(byte *)(param_3 + 0xf9)) == 1 && 0.0 < dVar4) {
    if (bVar2) {
      FUN_146dc6bc6(param_1,dVar4,param_4,param_5);
      return;
    }
    if (bVar3) {
      FUN_146dc6f92(param_1,param_3,dVar4,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146dc6bc6 FUN_146dc6bc6 body=971 status=ok
// SIG undefined FUN_146dc6bc6(void)

void FUN_146dc6bc6(longlong param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8 [4];
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_138 [136];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = *(double *)(param_1 + 0x118);
  dVar4 = dVar1 - *(double *)(param_1 + 0x100);
  dVar2 = *(double *)(param_1 + 0x110);
  dVar12 = dVar2 - *(double *)(param_1 + 0xf8);
  dVar3 = *(double *)(param_1 + 0x108);
  dVar9 = dVar3 - *(double *)(param_1 + 0xf0);
  if (0.0 < SQRT(dVar4 * dVar4 + dVar9 * dVar9 + dVar12 * dVar12)) {
    local_1c0 = *(undefined8 *)(param_1 + 0x228);
    pdVar6 = (double *)(param_1 + 0x2b0);
    pdVar7 = local_1b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    local_1c8 = dVar1 - *(double *)(lVar5 + 0x120);
    local_1d0 = dVar2 - *(double *)(lVar5 + 0x118);
    local_1d8 = dVar3 - *(double *)(lVar5 + 0x110);
    FUN_146db4c70(local_138,&local_1d8);
    FUN_14494412e(local_138,local_1b8);
    dVar8 = local_168 * dVar4 + local_1b8[2] * dVar9 + local_188 * dVar12;
    dVar10 = local_170 * dVar4 + local_1b8[1] * dVar9 + local_190 * dVar12;
    dVar1 = dVar4 * local_178 + dVar9 * local_1b8[0] + dVar12 * local_198;
    param_2 = -param_2;
    dVar2 = *(double *)(param_1 + 0x228) * param_2;
    lVar5 = *(longlong *)(param_1 + 0x18);
    dVar12 = *(double *)(param_1 + 0x118) - *(double *)(lVar5 + 0x120);
    dVar9 = *(double *)(param_1 + 0x110) - *(double *)(lVar5 + 0x118);
    dVar3 = *(double *)(param_1 + 0x108) - *(double *)(lVar5 + 0x110);
    dVar4 = dVar3 * dVar10 - dVar1 * dVar9;
    dVar11 = dVar12 * dVar1 - dVar8 * dVar3;
    dVar12 = dVar9 * dVar8 - dVar12 * dVar10;
    dVar3 = (dVar4 * *(double *)(param_1 + 0x2f0) +
            dVar12 * *(double *)(param_1 + 0x2b0) + dVar11 * *(double *)(param_1 + 0x2d0)) * param_2
    ;
    dVar9 = (*(double *)(param_1 + 0x2f8) * dVar4 +
            *(double *)(param_1 + 0x2b8) * dVar12 + *(double *)(param_1 + 0x2d8) * dVar11) * param_2
    ;
    param_2 = (*(double *)(param_1 + 0x300) * dVar4 +
              *(double *)(param_1 + 0x2c0) * dVar12 + *(double *)(param_1 + 0x2e0) * dVar11) *
              param_2;
    local_1d8 = dVar3;
    local_1d0 = dVar9;
    local_1c8 = param_2;
    local_1b8[0] = dVar1 * dVar2;
    local_1b8[1] = dVar10 * dVar2;
    local_1b8[2] = dVar2 * dVar8;
    FUN_146dcd180(param_1,1,local_1b8,&local_1d8);
    *param_3 = dVar1 * dVar2 + *param_3;
    param_3[1] = dVar10 * dVar2 + param_3[1];
    param_3[2] = dVar2 * dVar8 + param_3[2];
    *param_4 = dVar3 + *param_4;
    param_4[1] = dVar9 + param_4[1];
    param_4[2] = param_2 + param_4[2];
  }
  if ((local_b0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc6f92 FUN_146dc6f92 body=1108 status=ok
// SIG undefined FUN_146dc6f92(void)

void FUN_146dc6f92(longlong param_1,longlong param_2,double param_3,double *param_4,double *param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146deb498(param_1 + 0xf0,param_1 + 0x108,&local_e8,&local_f0);
  local_f0 = local_f0 - *(double *)(param_2 + 0x108);
  if (0.0 < local_f0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_148 = *(double *)(param_1 + 0x118) - *(double *)(lVar1 + 0x120);
    dVar7 = *(double *)(param_1 + 0x110) - *(double *)(lVar1 + 0x118);
    dVar2 = *(double *)(param_1 + 0x108) - *(double *)(lVar1 + 0x110);
    local_150 = local_e0 * local_f0;
    dVar9 = dVar2 * local_e0 - local_e8 * dVar7;
    dVar4 = local_148 * local_e8 - local_d8 * dVar2;
    dVar3 = dVar7 * local_d8 - local_e0 * local_148;
    local_130 = *(double *)(param_1 + 0x2c0);
    local_140 = *(double *)(param_1 + 0x2e0);
    local_128 = *(double *)(param_1 + 0x2d8);
    local_138 = *(double *)(param_1 + 0x2d0);
    dVar6 = (*(double *)(param_1 + 0x300) * dVar9 + local_130 * dVar3 + dVar4 * local_140) * dVar9 +
            (*(double *)(param_1 + 0x2f0) * dVar9 +
            *(double *)(param_1 + 0x2b0) * dVar3 + dVar4 * local_138) * dVar3 +
            (*(double *)(param_1 + 0x2f8) * dVar9 +
            *(double *)(param_1 + 0x2b8) * dVar3 + dVar4 * local_128) * dVar4 +
            *(double *)(param_1 + 0x228);
    dVar8 = (local_d8 * local_f0) / dVar6;
    dVar5 = local_150 / dVar6;
    param_3 = -param_3;
    dVar6 = (local_f0 * local_e8) / dVar6;
    dVar9 = *(double *)(param_1 + 0x228) * param_3;
    dVar3 = dVar2 * dVar5 - dVar6 * dVar7;
    dVar10 = local_148 * dVar6 - dVar8 * dVar2;
    dVar7 = dVar7 * dVar8 - dVar5 * local_148;
    dVar2 = (dVar3 * *(double *)(param_1 + 0x2f0) +
            dVar7 * *(double *)(param_1 + 0x2b0) + dVar10 * local_138) * param_3;
    dVar4 = (*(double *)(param_1 + 0x2f8) * dVar3 +
            *(double *)(param_1 + 0x2b8) * dVar7 + local_128 * dVar10) * param_3;
    param_3 = (*(double *)(param_1 + 0x300) * dVar3 + local_130 * dVar7 + local_140 * dVar10) *
              param_3;
    local_120 = dVar2;
    local_118 = dVar4;
    local_110 = param_3;
    local_108 = dVar9 * dVar6;
    local_100 = dVar9 * dVar5;
    local_f8 = dVar9 * dVar8;
    FUN_146dcd180(param_1,1);
    *param_4 = dVar9 * dVar6 + *param_4;
    param_4[1] = dVar9 * dVar5 + param_4[1];
    param_4[2] = dVar9 * dVar8 + param_4[2];
    *param_5 = dVar2 + *param_5;
    param_5[1] = dVar4 + param_5[1];
    param_5[2] = param_3 + param_5[2];
  }
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc73e8 FUN_146dc73e8 body=662 status=ok
// SIG undefined FUN_146dc73e8(void)

void FUN_146dc73e8(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  double dVar10;
  undefined8 in_stack_ffffffffffffffa0;
  undefined7 uVar11;
  
  dVar10 = (double)FUN_146decce0(param_2,param_3);
  bVar9 = false;
  if ((*(int *)(param_3 + 0xfc) == 2) && (*(int *)(param_3 + 0x100) == 2)) {
    bVar9 = *(int *)(param_3 + 0x104) == 2;
  }
  cVar4 = FUN_146dec9fc(param_2,param_3);
  if ((cVar4 == '\0') && (*(char *)(param_2 + 0x45) != '\0')) {
    bVar3 = 0.0 < dVar10;
    if (((0.0 < dVar10) && (*(char *)(param_3 + 0xf9) != '\0')) && (*(int *)(param_3 + 0x110) != 0))
    {
      in_stack_ffffffffffffffa0 = param_5;
      FUN_146dc767e(param_1,param_3,dVar10,bVar9,param_4,param_5);
      bVar3 = true;
    }
  }
  else {
    bVar3 = 0.0 < dVar10;
  }
  cVar4 = FUN_146deca0c(param_2,param_3);
  if (cVar4 != '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x46) == '\0') {
    return;
  }
  if (!bVar3) {
    return;
  }
  if ((*(byte *)(param_3 + 0xf9) & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x114);
  uVar2 = *(uint *)(param_3 + 0x118);
  uVar7 = uVar2 ^ 1;
  uVar5 = uVar1 ^ 1;
  if (uVar7 == 0 && uVar5 == 0) {
    FUN_146dc790a(param_1,param_3,dVar10,bVar9,param_4,param_5);
    return;
  }
  uVar6 = uVar1 ^ 2;
  uVar11 = (undefined7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
  if (uVar7 == 0 && uVar6 == 0) {
    in_stack_ffffffffffffffa0 = CONCAT71(uVar11,bVar9);
    FUN_146dc7c7a(param_1,param_2,param_3,1,dVar10,in_stack_ffffffffffffffa0,param_4,param_5);
LAB_146dc7590:
    uVar11 = (undefined7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
    uVar8 = 2;
  }
  else {
    if (uVar7 == 0 && uVar1 == 0) {
      uVar8 = 2;
LAB_146dc75d9:
      FUN_146dc7f12(param_1,param_3,uVar8,dVar10,bVar9,param_4,param_5);
      return;
    }
    uVar7 = uVar2 ^ 2;
    if (uVar7 == 0 && uVar5 == 0) {
      in_stack_ffffffffffffffa0 = CONCAT71(uVar11,bVar9);
      FUN_146dc7c7a(param_1,param_2,param_3,2,dVar10,in_stack_ffffffffffffffa0,param_4,param_5);
    }
    else {
      if (uVar7 == 0 && uVar6 == 0) {
        FUN_146dc81b6(param_1,dVar10,bVar9,param_4);
        return;
      }
      if (uVar7 == 0 && uVar1 == 0) goto LAB_146dc7590;
      if (uVar5 == 0 && uVar2 == 0) {
        uVar8 = 1;
        goto LAB_146dc75d9;
      }
      if (uVar2 != 0 || uVar6 != 0) {
        return;
      }
    }
    uVar11 = (undefined7)((ulonglong)in_stack_ffffffffffffffa0 >> 8);
    uVar8 = 1;
  }
  FUN_146dc7c7a(param_1,param_2,param_3,uVar8,dVar10,CONCAT71(uVar11,bVar9),param_4,param_5);
  return;
}



// FUNCTION 146dc767e FUN_146dc767e body=651 status=ok
// SIG undefined FUN_146dc767e(void)

void FUN_146dc767e(longlong param_1,longlong param_2,double param_3,char param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146deb7c0(param_1 + 0x120,param_1 + 0x140,&local_b8,&local_c0);
  dVar1 = *(double *)(param_2 + 0x120);
  if (local_c0 <= dVar1) {
    if (-dVar1 <= local_c0) goto LAB_146dc772b;
    local_c0 = local_c0 + dVar1;
  }
  else {
    local_c0 = local_c0 - dVar1;
  }
  if (local_c0 != 0.0) {
    param_3 = -param_3;
    local_c0 = local_c0 * param_3;
    dVar3 = local_b8 * local_c0;
    dVar4 = local_b0 * local_c0;
    dVar1 = local_c0 * local_a8;
    local_f8 = 0.0;
    dStack_f0 = 0.0;
    local_e8 = 0.0;
    if (param_4 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x18);
      dVar6 = *(double *)(param_1 + 0x118) - *(double *)(lVar2 + 0x120);
      dVar7 = *(double *)(param_1 + 0x110) - *(double *)(lVar2 + 0x118);
      dVar5 = *(double *)(param_1 + 0x108) - *(double *)(lVar2 + 0x110);
      local_f8 = (dVar4 * dVar6 - dVar7 * dVar1) * param_3;
      dStack_f0 = (dVar5 * dVar1 - dVar6 * dVar3) * param_3;
      local_e8 = (dVar3 * dVar7 - dVar5 * dVar4) * param_3;
    }
    dVar7 = local_e8;
    dVar6 = dStack_f0;
    dVar5 = local_f8;
    local_d8 = dVar3;
    local_d0 = dVar4;
    local_c8 = dVar1;
    FUN_146dcd180(param_1,1,&local_f8,&local_d8);
    *param_5 = dVar5 + *param_5;
    param_5[1] = dVar6 + param_5[1];
    param_5[2] = dVar7 + param_5[2];
    *param_6 = dVar3 + *param_6;
    param_6[1] = dVar4 + param_6[1];
    param_6[2] = dVar1 + param_6[2];
  }
LAB_146dc772b:
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc790a FUN_146dc790a body=879 status=ok
// SIG undefined FUN_146dc790a(void)

void FUN_146dc790a(longlong param_1,longlong param_2,double param_3,char param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [32];
  double *local_118;
  double *local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = &local_d0;
  local_d0 = 0.0;
  local_118 = &local_c8;
  FUN_146debc06(param_1 + 0x120,param_1 + 0x140,*(undefined8 *)(param_2 + 0x128),
                *(undefined8 *)(param_2 + 0x130));
  if (0.0 < local_d0) {
    dVar1 = *(double *)(param_1 + 0x120);
    dVar7 = *(double *)(param_1 + 0x128);
    dVar2 = *(double *)(param_1 + 0x130);
    dVar8 = *(double *)(param_1 + 0x138);
    dVar9 = dVar2 * local_c8 - local_b8 * dVar1;
    dVar9 = dVar9 + dVar9;
    dVar6 = dVar7 * local_b8 - local_c0 * dVar2;
    dVar6 = dVar6 + dVar6;
    dVar10 = dVar1 * local_c0 - local_c8 * dVar7;
    dVar10 = dVar10 + dVar10;
    param_3 = -param_3;
    dVar4 = local_d0 * param_3;
    dVar5 = ((dVar7 * dVar10 - dVar9 * dVar2) + dVar8 * dVar6 + local_c8) * dVar4;
    dVar2 = ((dVar2 * dVar6 - dVar10 * dVar1) + dVar8 * dVar9 + local_c0) * dVar4;
    dVar4 = dVar4 * ((dVar9 * dVar1 - dVar6 * dVar7) + dVar8 * dVar10 + local_b8);
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_f8 = 0.0;
    if (param_4 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x18);
      dVar7 = *(double *)(param_1 + 0x118) - *(double *)(lVar3 + 0x120);
      dVar8 = *(double *)(param_1 + 0x110) - *(double *)(lVar3 + 0x118);
      dVar1 = *(double *)(param_1 + 0x108) - *(double *)(lVar3 + 0x110);
      local_108 = (dVar2 * dVar7 - dVar8 * dVar4) * param_3;
      dStack_100 = (dVar1 * dVar4 - dVar7 * dVar5) * param_3;
      local_f8 = (dVar5 * dVar8 - dVar1 * dVar2) * param_3;
    }
    dVar8 = local_f8;
    dVar7 = dStack_100;
    dVar1 = local_108;
    local_e8 = dVar5;
    local_e0 = dVar2;
    local_d8 = dVar4;
    FUN_146dcd180(param_1,1,&local_108,&local_e8);
    *param_5 = dVar1 + *param_5;
    param_5[1] = dVar7 + param_5[1];
    param_5[2] = dVar8 + param_5[2];
    *param_6 = dVar5 + *param_6;
    param_6[1] = dVar2 + param_6[1];
    param_6[2] = dVar4 + param_6[2];
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc7c7a FUN_146dc7c7a body=662 status=ok
// SIG undefined FUN_146dc7c7a(void)

void FUN_146dc7c7a(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                  double param_5,char param_6,double *param_7,double *param_8)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  double *local_f8;
  double *local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = &local_b0;
  local_f8 = &local_a8;
  FUN_146dec596(param_1 + 0x120,param_1 + 0x140,*param_2);
  dVar1 = *(double *)(param_3 + 0x120 + (param_4 & 0xffffffff) * 8);
  if (local_b0 <= dVar1) {
    if (-dVar1 <= local_b0) goto LAB_146dc7d2b;
    local_b0 = local_b0 + dVar1;
  }
  else {
    local_b0 = local_b0 - dVar1;
  }
  if (local_b0 != 0.0) {
    param_5 = -param_5;
    local_b0 = local_b0 * param_5;
    dVar3 = local_a8 * local_b0;
    dVar4 = local_a0 * local_b0;
    dVar1 = local_b0 * local_98;
    local_e8 = 0.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
    if (param_6 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x18);
      dVar6 = *(double *)(param_1 + 0x118) - *(double *)(lVar2 + 0x120);
      dVar7 = *(double *)(param_1 + 0x110) - *(double *)(lVar2 + 0x118);
      dVar5 = *(double *)(param_1 + 0x108) - *(double *)(lVar2 + 0x110);
      local_e8 = (dVar4 * dVar6 - dVar7 * dVar1) * param_5;
      dStack_e0 = (dVar5 * dVar1 - dVar6 * dVar3) * param_5;
      local_d8 = (dVar3 * dVar7 - dVar5 * dVar4) * param_5;
    }
    dVar7 = local_d8;
    dVar6 = dStack_e0;
    dVar5 = local_e8;
    local_c8 = dVar3;
    local_c0 = dVar4;
    local_b8 = dVar1;
    FUN_146dcd180(param_1,1,&local_e8,&local_c8);
    *param_7 = dVar5 + *param_7;
    param_7[1] = dVar6 + param_7[1];
    param_7[2] = dVar7 + param_7[2];
    *param_8 = dVar3 + *param_8;
    param_8[1] = dVar4 + param_8[1];
    param_8[2] = dVar1 + param_8[2];
  }
LAB_146dc7d2b:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc7f12 FUN_146dc7f12 body=675 status=ok
// SIG undefined FUN_146dc7f12(void)

void FUN_146dc7f12(longlong param_1,longlong param_2,ulonglong param_3,double param_4,char param_5,
                  double *param_6,double *param_7)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_128 [32];
  double *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = &local_c0;
  FUN_146dec22c(param_1 + 0x120,param_1 + 0x140,param_3,&local_b8);
  dVar1 = *(double *)(param_2 + 0x120 + (param_3 & 0xffffffff) * 8);
  if (local_c0 <= dVar1) {
    if (-dVar1 <= local_c0) goto LAB_146dc7fc7;
    local_c0 = local_c0 + dVar1;
  }
  else {
    local_c0 = local_c0 - dVar1;
  }
  if (local_c0 != 0.0) {
    param_4 = -param_4;
    local_c0 = local_c0 * param_4;
    dVar3 = local_b8 * local_c0;
    dVar4 = local_b0 * local_c0;
    dVar1 = local_c0 * local_a8;
    local_f8 = 0.0;
    dStack_f0 = 0.0;
    local_e8 = 0.0;
    if (param_5 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x18);
      dVar6 = *(double *)(param_1 + 0x118) - *(double *)(lVar2 + 0x120);
      dVar7 = *(double *)(param_1 + 0x110) - *(double *)(lVar2 + 0x118);
      dVar5 = *(double *)(param_1 + 0x108) - *(double *)(lVar2 + 0x110);
      local_f8 = (dVar4 * dVar6 - dVar7 * dVar1) * param_4;
      dStack_f0 = (dVar5 * dVar1 - dVar6 * dVar3) * param_4;
      local_e8 = (dVar3 * dVar7 - dVar5 * dVar4) * param_4;
    }
    dVar7 = local_e8;
    dVar6 = dStack_f0;
    dVar5 = local_f8;
    local_d8 = dVar3;
    local_d0 = dVar4;
    local_c8 = dVar1;
    FUN_146dcd180(param_1,1,&local_f8,&local_d8);
    *param_6 = dVar5 + *param_6;
    param_6[1] = dVar6 + param_6[1];
    param_6[2] = dVar7 + param_6[2];
    *param_7 = dVar3 + *param_7;
    param_7[1] = dVar4 + param_7[1];
    param_7[2] = dVar1 + param_7[2];
  }
LAB_146dc7fc7:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc81b6 FUN_146dc81b6 body=860 status=ok
// SIG undefined FUN_146dc81b6(void)

void FUN_146dc81b6(longlong param_1,double param_2,char param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = &local_d0;
  local_d0 = 0.0;
  FUN_146debb14(param_1 + 0x120,param_1 + 0x140,0,&local_c8);
  if (0.0 < local_d0) {
    dVar1 = *(double *)(param_1 + 0x120);
    dVar7 = *(double *)(param_1 + 0x128);
    dVar2 = *(double *)(param_1 + 0x130);
    dVar8 = *(double *)(param_1 + 0x138);
    dVar9 = dVar2 * local_c8 - local_b8 * dVar1;
    dVar9 = dVar9 + dVar9;
    dVar6 = dVar7 * local_b8 - local_c0 * dVar2;
    dVar6 = dVar6 + dVar6;
    dVar10 = dVar1 * local_c0 - local_c8 * dVar7;
    dVar10 = dVar10 + dVar10;
    param_2 = -param_2;
    dVar4 = local_d0 * param_2;
    dVar5 = ((dVar7 * dVar10 - dVar9 * dVar2) + dVar8 * dVar6 + local_c8) * dVar4;
    dVar2 = ((dVar2 * dVar6 - dVar10 * dVar1) + dVar8 * dVar9 + local_c0) * dVar4;
    dVar4 = dVar4 * ((dVar9 * dVar1 - dVar6 * dVar7) + dVar8 * dVar10 + local_b8);
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_f8 = 0.0;
    if (param_3 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x18);
      dVar7 = *(double *)(param_1 + 0x118) - *(double *)(lVar3 + 0x120);
      dVar8 = *(double *)(param_1 + 0x110) - *(double *)(lVar3 + 0x118);
      dVar1 = *(double *)(param_1 + 0x108) - *(double *)(lVar3 + 0x110);
      local_108 = (dVar2 * dVar7 - dVar8 * dVar4) * param_2;
      dStack_100 = (dVar1 * dVar4 - dVar7 * dVar5) * param_2;
      local_f8 = (dVar5 * dVar8 - dVar1 * dVar2) * param_2;
    }
    dVar8 = local_f8;
    dVar7 = dStack_100;
    dVar1 = local_108;
    local_e8 = dVar5;
    local_e0 = dVar2;
    local_d8 = dVar4;
    FUN_146dcd180(param_1,1,&local_108,&local_e8);
    *param_4 = dVar1 + *param_4;
    param_4[1] = dVar7 + param_4[1];
    param_4[2] = dVar8 + param_4[2];
    *param_5 = dVar5 + *param_5;
    param_5[1] = dVar2 + param_5[1];
    param_5[2] = dVar4 + param_5[2];
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc8514 FUN_146dc8514 body=316 status=ok
// SIG undefined FUN_146dc8514(void)

void FUN_146dc8514(longlong param_1,longlong param_2,double param_3,double *param_4)

{
  float *pfVar1;
  double dVar2;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146deb498(param_1 + 0xf0,param_1 + 0x108,&local_58,&local_60);
  local_60 = local_60 - *(double *)(param_2 + 0x108);
  dVar2 = 0.0;
  if (0.0 <= local_60) {
    dVar2 = local_60;
  }
  if (0.0 < dVar2) {
    dVar2 = dVar2 * -param_3;
    local_58 = local_58 * dVar2;
    local_50 = local_50 * dVar2;
    dVar2 = dVar2 * local_48;
    pfVar1 = *(float **)(param_1 + 0x18);
    *pfVar1 = (float)local_58 + *pfVar1;
    pfVar1[1] = (float)local_50 + pfVar1[1];
    pfVar1[2] = (float)dVar2 + pfVar1[2];
    *(double *)(param_1 + 0x108) = *(double *)(param_1 + 0x108) + local_58;
    *(double *)(param_1 + 0x110) = *(double *)(param_1 + 0x110) + local_50;
    *(double *)(param_1 + 0x118) = *(double *)(param_1 + 0x118) + dVar2;
    *param_4 = local_58 + *param_4;
    param_4[1] = local_50 + param_4[1];
    param_4[2] = dVar2 + param_4[2];
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc8652 FUN_146dc8652 body=191 status=ok
// SIG undefined FUN_146dc8652(void)

void FUN_146dc8652(longlong param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  dVar3 = *param_5;
  dVar4 = param_5[1];
  dVar5 = param_5[2];
  lVar6 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar6 + 0x20) = (float)((*param_4 * param_3) / param_2) + *(float *)(lVar6 + 0x20);
  *(float *)(lVar6 + 0x24) = (float)((dVar1 * param_3) / param_2) + *(float *)(lVar6 + 0x24);
  *(float *)(lVar6 + 0x28) = (float)((dVar2 * param_3) / param_2) + *(float *)(lVar6 + 0x28);
  *(float *)(lVar6 + 0x30) = (float)((dVar3 * param_3) / param_2) + *(float *)(lVar6 + 0x30);
  *(float *)(lVar6 + 0x34) = (float)((dVar4 * param_3) / param_2) + *(float *)(lVar6 + 0x34);
  *(float *)(lVar6 + 0x38) = (float)((param_3 * dVar5) / param_2) + *(float *)(lVar6 + 0x38);
  return;
}



// FUNCTION 146dc8712 FUN_146dc8712 body=480 status=ok
// SIG undefined FUN_146dc8712(void)

void FUN_146dc8712(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  undefined1 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  ulonglong *local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  double local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146deb7c0(param_1 + 0x120,param_1 + 0x140,&local_88,&local_90);
  dVar5 = *(double *)(param_4 + 0x120);
  if (local_90 <= dVar5) {
    dVar2 = 0.0;
    if (-dVar5 <= local_90) goto LAB_146dc879f;
    local_90 = -local_90;
    local_78 = local_78 ^ 0x8000000000000000;
    local_88 = local_88 ^ 0x8000000000000000;
    uStack_80 = uStack_80 ^ 0x8000000000000000;
  }
  dVar2 = local_90 - dVar5;
LAB_146dc879f:
  if (*(double *)(param_1 + 0x3f8) <= dVar2 && dVar2 != *(double *)(param_1 + 0x3f8)) {
    if (param_5 == '\0') {
      uVar3 = FUN_146deca68(param_3,param_4);
      local_c8 = 0;
      FUN_146dcdf0a(param_1,uVar3,&local_88,dVar2);
    }
    else {
      uVar3 = FUN_146deca8c(param_3,param_4);
      uVar4 = FUN_146decab2(param_3,param_4);
      uVar1 = FUN_146decd10(param_3,param_4);
      local_a0 = param_1 + 0x3a8;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c8 = CONCAT31(local_c8._1_3_,uVar1);
      local_c0 = &local_88;
      local_b8 = dVar2;
      FUN_146dcdf80(param_1,param_2,uVar3,uVar4);
    }
    dVar5 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar2) {
      dVar5 = dVar2;
    }
    *(double *)(param_1 + 0x368) = dVar5;
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc88f4 FUN_146dc88f4 body=699 status=ok
// SIG undefined FUN_146dc88f4(void)

void FUN_146dc88f4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double *local_f8;
  double *local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = &local_b0;
  local_b0 = 0.0;
  local_f8 = &local_a8;
  FUN_146debc06(param_1 + 0x120,param_1 + 0x140,*(undefined8 *)(param_4 + 0x128),
                *(undefined8 *)(param_4 + 0x130));
  dVar9 = *(double *)(param_1 + 0x130);
  dVar1 = *(double *)(param_1 + 0x120);
  dVar2 = *(double *)(param_1 + 0x128);
  dVar4 = dVar2 * local_98 - local_a0 * dVar9;
  dVar4 = dVar4 + dVar4;
  dVar3 = *(double *)(param_1 + 0x138);
  dVar5 = dVar1 * local_a0 - local_a8 * dVar2;
  dVar5 = dVar5 + dVar5;
  dVar10 = dVar9 * local_a8 - local_98 * dVar1;
  dVar10 = dVar10 + dVar10;
  local_b8 = (dVar1 * dVar10 - dVar4 * dVar2) + dVar3 * dVar5 + local_98;
  local_c0 = (dVar9 * dVar4 - dVar5 * dVar1) + dVar3 * dVar10 + local_a0;
  local_c8 = (dVar2 * dVar5 - dVar10 * dVar9) + dVar4 * dVar3 + local_a8;
  if (*(double *)(param_1 + 0x3f8) <= local_b0 && local_b0 != *(double *)(param_1 + 0x3f8)) {
    if (param_5 == '\0') {
      uVar7 = FUN_146decad8(param_3,param_4);
      local_f8 = (double *)CONCAT44(local_f8._4_4_,1);
      FUN_146dcdf0a(param_1,uVar7,&local_c8,local_b0);
    }
    else {
      uVar7 = FUN_146decafc(param_3,param_4);
      uVar8 = FUN_146decb22(param_3,param_4);
      uVar6 = FUN_146decd10(param_3,param_4);
      local_d0 = param_1 + 0x3b0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_e8 = local_b0;
      local_f0 = &local_c8;
      local_f8 = (double *)CONCAT71(local_f8._1_7_,uVar6);
      FUN_146dcdf80(param_1,param_2,uVar7,uVar8);
    }
    dVar9 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= local_b0) {
      dVar9 = local_b0;
    }
    *(double *)(param_1 + 0x368) = dVar9;
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc8bb0 FUN_146dc8bb0 body=213 status=ok
// SIG undefined FUN_146dc8bb0(void)

void FUN_146dc8bb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  double *local_78;
  double local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_70;
  FUN_146debf8e(param_1 + 0x120,param_1 + 0x140,param_4,local_68);
  dVar1 = ABS(local_70);
  if (*(double *)(param_1 + 0x3f8) <= dVar1 && dVar1 != *(double *)(param_1 + 0x3f8)) {
    uVar2 = FUN_146decad8(param_2,param_3);
    local_78 = (double *)CONCAT44(local_78._4_4_,param_4);
    FUN_146dcdf0a(param_1,uVar2,local_68,local_70);
    dVar3 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar1) {
      dVar3 = dVar1;
    }
    *(double *)(param_1 + 0x368) = dVar3;
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc8c86 FUN_146dc8c86 body=504 status=ok
// SIG undefined FUN_146dc8c86(void)

void FUN_146dc8c86(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  uint param_5,char param_6)

{
  undefined1 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double *local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  double local_a0;
  double local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = &local_a0;
  local_d8 = &local_98;
  FUN_146dec596(param_1 + 0x120,param_1 + 0x140,*param_3,(ulonglong)param_5);
  dVar5 = *(double *)(param_4 + 0x120 + (ulonglong)param_5 * 8);
  if (local_a0 <= dVar5) {
    dVar2 = 0.0;
    if (-dVar5 <= local_a0) goto LAB_146dc8d2c;
    local_a0 = -local_a0;
    local_88 = local_88 ^ 0x8000000000000000;
    local_98 = -local_98;
    uStack_90 = uStack_90 ^ 0x8000000000000000;
  }
  dVar2 = local_a0 - dVar5;
LAB_146dc8d2c:
  if (*(double *)(param_1 + 0x3f8) <= dVar2 && dVar2 != *(double *)(param_1 + 0x3f8)) {
    if (param_6 == '\0') {
      uVar3 = FUN_146decad8(param_3,param_4);
      local_d8 = (double *)CONCAT44(local_d8._4_4_,param_5);
      FUN_146dcdf0a(param_1,uVar3,&local_98,dVar2);
    }
    else {
      uVar3 = FUN_146decafc(param_3,param_4);
      uVar4 = FUN_146decb22(param_3,param_4);
      uVar1 = FUN_146decd10(param_3,param_4);
      local_b0 = param_1 + 0x3b0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d8 = (double *)CONCAT71(local_d8._1_7_,uVar1);
      local_d0 = &local_98;
      local_c8 = dVar2;
      FUN_146dcdf80(param_1,param_2,uVar3,uVar4);
    }
    dVar5 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar2) {
      dVar5 = dVar2;
    }
    *(double *)(param_1 + 0x368) = dVar5;
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc8e80 FUN_146dc8e80 body=497 status=ok
// SIG undefined FUN_146dc8e80(void)

void FUN_146dc8e80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  uint param_5,char param_6)

{
  undefined1 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_f8 [32];
  double *local_d8;
  ulonglong *local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  double local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &local_a0;
  FUN_146dec22c(param_1 + 0x120,param_1 + 0x140,(ulonglong)param_5,&local_98);
  dVar5 = *(double *)(param_4 + 0x120 + (ulonglong)param_5 * 8);
  if (local_a0 <= dVar5) {
    dVar2 = 0.0;
    if (-dVar5 <= local_a0) goto LAB_146dc8f1f;
    local_a0 = -local_a0;
    local_88 = local_88 ^ 0x8000000000000000;
    local_98 = local_98 ^ 0x8000000000000000;
    uStack_90 = uStack_90 ^ 0x8000000000000000;
  }
  dVar2 = local_a0 - dVar5;
LAB_146dc8f1f:
  if (*(double *)(param_1 + 0x3f8) <= dVar2 && dVar2 != *(double *)(param_1 + 0x3f8)) {
    if (param_6 == '\0') {
      uVar3 = FUN_146decad8(param_3,param_4);
      local_d8 = (double *)CONCAT44(local_d8._4_4_,param_5);
      FUN_146dcdf0a(param_1,uVar3,&local_98,dVar2);
    }
    else {
      uVar3 = FUN_146decafc(param_3,param_4);
      uVar4 = FUN_146decb22(param_3,param_4);
      uVar1 = FUN_146decd10(param_3,param_4);
      local_b0 = param_1 + 0x3b0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d8 = (double *)CONCAT71(local_d8._1_7_,uVar1);
      local_d0 = &local_98;
      local_c8 = dVar2;
      FUN_146dcdf80(param_1,param_2,uVar3,uVar4);
    }
    dVar5 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar2) {
      dVar5 = dVar2;
    }
    *(double *)(param_1 + 0x368) = dVar5;
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dc9072 FUN_146dc9072 body=700 status=ok
// SIG undefined FUN_146dc9072(void)

void FUN_146dc9072(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

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
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = local_108;
  FUN_146dec78e(param_1 + 0x120,param_1 + 0x140,local_d8,local_f0);
  dVar7 = *(double *)(param_1 + 0x120);
  dVar8 = *(double *)(param_1 + 0x128);
  dVar12 = *(double *)(param_1 + 0x130) * -1.0;
  dVar2 = *(double *)(param_1 + 0x138) * 1.0;
  dVar3 = *(double *)(param_1 + 0x140);
  dVar4 = *(double *)(param_1 + 0x148);
  dVar5 = *(double *)(param_1 + 0x150);
  dVar6 = *(double *)(param_1 + 0x158);
  dVar9 = dVar12 * dVar4 * -1.0 +
          ((*(double *)(param_1 + 0x120) * dVar6 * -1.0 + dVar3 * dVar2) -
          *(double *)(param_1 + 0x128) * dVar5);
  dVar1 = dVar12 * dVar3 * 1.0 +
          ((*(double *)(param_1 + 0x120) * dVar5 * 1.0 + dVar4 * dVar2) -
          *(double *)(param_1 + 0x128) * dVar6);
  if (param_4 != '\0') {
    uVar10 = FUN_146deca68(param_2,param_3);
    local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffff00000000);
    FUN_146dcdf0a(param_1,uVar10,local_d8,dVar9);
    dVar9 = ABS(dVar9);
    dVar11 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar9) {
      dVar11 = dVar9;
    }
    *(double *)(param_1 + 0x368) = dVar11;
  }
  if (param_5 != '\0') {
    uVar10 = FUN_146decad8(param_2,param_3);
    local_118._0_4_ = 1;
    FUN_146dcdf0a(param_1,uVar10,local_f0,dVar1);
    dVar9 = ((-dVar7 * dVar4 + dVar2 * dVar5) - -dVar8 * dVar3) + dVar12 * dVar6;
    local_118 = (undefined1 *)CONCAT44(local_118._4_4_,2);
    FUN_146dcdf0a(param_1,uVar10,local_108,dVar9);
    dVar1 = ABS(dVar1);
    dVar12 = *(double *)(param_1 + 0x368);
    if (*(double *)(param_1 + 0x368) <= dVar1) {
      dVar12 = dVar1;
    }
    dVar9 = ABS(dVar9);
    if (dVar12 <= dVar9) {
      dVar12 = dVar9;
    }
    *(double *)(param_1 + 0x368) = dVar12;
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc9330 FUN_146dc9330 body=2010 status=ok
// SIG undefined FUN_146dc9330(void)

void FUN_146dc9330(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  double *local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  uVar9 = (undefined4)param_2;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1a0 = FUN_146decc6c(param_3,param_4);
  local_1a8 = FUN_146decc94(param_3,param_4);
  uVar7 = FUN_146decd28(param_3,param_4);
  uVar6 = local_1a0;
  uVar5 = local_1a8;
  local_198 = *(double *)(param_1 + 0x120);
  dStack_190 = *(double *)(param_1 + 0x128);
  dVar10 = *(double *)(param_1 + 0x130);
  dVar11 = *(double *)(param_1 + 0x138);
  local_138 = *(undefined1 (*) [16])(param_1 + 0x140);
  dVar3 = local_138._0_8_;
  dStack_170 = local_138._8_8_;
  local_148 = *(double *)(param_1 + 0x150);
  dStack_140 = *(double *)(param_1 + 0x158);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar14 = *(double *)(param_1 + 0x158);
  dVar4 = dVar1 + dVar1;
  dVar2 = local_148 + local_148;
  dVar13 = dVar3 * (dVar3 + dVar3);
  local_e0 = (dVar3 + dVar3) * dVar14;
  local_118 = 1.0 - (dVar1 * dVar4 + local_148 * dVar2);
  local_158 = 1.0 - (local_148 * dVar2 + dVar13);
  local_168 = dVar3 * dVar4 + dVar2 * dVar14;
  local_100 = dVar3 * dVar4 - dVar2 * dVar14;
  local_128 = *(double *)(param_4 + 0x230);
  dStack_120 = *(double *)(param_4 + 0x238);
  local_d8 = 1.0 - (dVar1 * dVar4 + dVar13);
  local_f0 = local_e0 + dVar1 * dVar2;
  local_e0 = dVar1 * dVar2 - local_e0;
  local_178 = dVar3 * dVar2 - dVar4 * dVar14;
  local_e8 = dVar4 * dVar14 + dVar3 * dVar2;
  uStack_1c0 = 0;
  uStack_150 = 0;
  uStack_1d0 = 0;
  dVar1 = *(double *)(param_4 + 0x250);
  dVar14 = *(double *)(param_4 + 600);
  dVar2 = *(double *)(param_4 + 0x260);
  if ((ABS(dVar1) <= 9.999999747378752e-05) && (ABS(dVar14) <= 9.999999747378752e-05)) {
    local_1f0 = 0.0;
    local_1c8 = 0.0;
    dVar4 = 0.0;
    if (ABS(dVar2) <= 9.999999747378752e-05) goto LAB_146dc9738;
  }
  dVar13 = local_198 * dVar14 - dVar1 * dStack_190;
  dVar4 = dVar10 * dVar1 - dVar2 * local_198;
  dVar12 = dStack_190 * dVar2 - dVar14 * dVar10;
  dVar13 = dVar13 + dVar13;
  dVar4 = dVar4 + dVar4;
  local_188._8_4_ = local_138._8_4_;
  local_188._0_8_ = local_f0;
  local_188._12_4_ = local_138._12_4_;
  dVar12 = dVar12 + dVar12;
  dVar2 = (local_198 * dVar4 - dVar12 * dStack_190) + dVar11 * dVar13 + dVar2;
  dVar14 = (dVar10 * dVar12 - dVar13 * local_198) + dVar11 * dVar4 + dVar14;
  dVar1 = (dStack_190 * dVar13 - dVar4 * dVar10) + dVar11 * dVar12 + dVar1;
  local_1f0 = local_178 * dVar2 + local_118 * dVar1 + local_168 * dVar14;
  local_1c8 = local_f0 * dVar2 + local_100 * dVar1 + local_158 * dVar14;
  dVar4 = dVar2 * local_d8 + dVar1 * local_e8 + local_e0 * dVar14;
  local_1b0 = param_2;
LAB_146dc9738:
  dVar10 = dVar10 * -1.0;
  dVar11 = dVar11 * 1.0;
  dVar14 = dStack_190 * dVar3 + (dVar11 * local_148 - local_198 * dStack_170 * 1.0) +
           dVar10 * dStack_140 * 1.0;
  dVar2 = dStack_190 * dStack_170 + (dVar11 * dStack_140 - local_198 * dVar3 * -1.0) +
          dVar10 * local_148 * -1.0;
  dVar13 = ((dVar11 * dVar3 - dStack_140 * local_198 * 1.0) - dStack_190 * local_148) +
           dStack_170 * dVar10 * -1.0;
  dVar12 = ((dVar11 * dStack_170 - local_148 * local_198 * -1.0) - dStack_190 * dStack_140) +
           dVar3 * dVar10 * 1.0;
  uVar8 = -(ulonglong)
           (0.0 <= dVar2 * *(double *)(param_4 + 0x248) +
                   dVar14 * *(double *)(param_4 + 0x240) + dVar13 * local_128 + dStack_120 * dVar12)
  ;
  dVar15 = (double)(~uVar8 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar8 >> 0x20) & 0x3ff00000) << 0x20);
  dVar10 = *(double *)(param_4 + 0x240) * dVar15 * -1.0;
  dVar11 = *(double *)(param_4 + 0x248) * dVar15 * 1.0;
  dVar3 = local_128 * dVar15;
  dVar15 = dVar15 * dStack_120;
  dVar1 = ((dVar14 * dVar11 + dVar12 * -dVar3) - -dVar15 * dVar13) + dVar2 * dVar10;
  dVar1 = ((dVar1 * dVar1 * 0.075 + 0.16666666666666666) * dVar1 * dVar1 + 1.0) * dVar1;
  local_1f8 = ((dVar11 * dVar13 - dVar3 * dVar2 * 1.0) - dVar15 * dVar14) + dVar12 * dVar10 * -1.0;
  dVar14 = ((dVar11 * dVar12 - dVar3 * dVar14 * -1.0) - dVar15 * dVar2) + dVar13 * dVar10 * 1.0;
  dVar14 = ((dVar14 * dVar14 * 0.075 + 0.16666666666666666) * dVar14 * dVar14 + 1.0) * dVar14;
  local_1f8 = ((local_1f8 * local_1f8 * 0.075 + 0.16666666666666666) * local_1f8 * local_1f8 + 1.0)
              * local_1f8;
  local_1f8 = local_1f8 + local_1f8;
  local_1e0 = param_1 + 0x3d0;
  local_1e8 = 0;
  local_200 = &local_118;
  local_208 = uVar7;
  local_1d8 = local_1f0;
  dStack_160 = dStack_170;
  local_110 = local_168;
  local_108 = local_178;
  local_f8 = local_158;
  FUN_146dcdf80(param_1,uVar9,local_1a0,local_1a8);
  local_1e0 = param_1 + 0x3d8;
  local_1e8 = 0;
  local_1f0 = local_1c8;
  local_208 = uVar7;
  local_200 = &local_100;
  local_1f8 = dVar14 + dVar14;
  FUN_146dcdf80(param_1,uVar9,uVar6,uVar5);
  local_1e0 = param_1 + 0x3e0;
  local_1e8 = 0;
  local_208 = uVar7;
  local_200 = &local_e8;
  local_1f8 = dVar1 + dVar1;
  local_1f0 = dVar4;
  FUN_146dcdf80(param_1,uVar9,uVar6,uVar5);
  if ((local_d0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dc9b0c FUN_146dc9b0c body=2459 status=ok
// SIG undefined FUN_146dc9b0c(void)

void FUN_146dc9b0c(longlong param_1,double param_2,undefined8 param_3,longlong param_4,char param_5,
                  char param_6,char param_7)

{
  double dVar1;
  undefined1 uVar3;
  ulonglong uVar4;
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
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  double *local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  undefined8 *local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar10 = *(double *)(param_4 + 0x230);
  dVar5 = *(double *)(param_4 + 0x238);
  dVar13 = *(double *)(param_4 + 0x240);
  dVar16 = *(double *)(param_4 + 0x248);
  dVar7 = *(double *)(param_1 + 0x138);
  dVar9 = *(double *)(param_1 + 0x138);
  dVar6 = *(double *)(param_1 + 0x128);
  dVar15 = *(double *)(param_1 + 0x128);
  dVar1 = *(double *)(param_1 + 0x120);
  dVar2 = *(double *)(param_1 + 0x120);
  dVar14 = *(double *)(param_1 + 0x130);
  dVar8 = *(double *)(param_1 + 0x130);
  dVar11 = dVar5 * dVar14 * -1.0 + dVar13 * dVar6 + dVar1 * dVar16 * 1.0 + dVar7 * dVar10;
  dVar12 = dVar10 * dVar8 * 1.0 + dVar16 * dVar15 + dVar2 * dVar13 * -1.0 + dVar9 * dVar5;
  dVar7 = dVar16 * dVar14 * 1.0 + ((dVar1 * dVar5 * 1.0 + dVar7 * dVar13) - dVar6 * dVar10);
  dVar9 = dVar13 * dVar8 * -1.0 + ((dVar2 * dVar10 * -1.0 + dVar9 * dVar16) - dVar15 * dVar5);
  uVar4 = -(ulonglong)
           (0.0 <= *(double *)(param_1 + 0x158) * dVar9 +
                   *(double *)(param_1 + 0x150) * dVar7 +
                   *(double *)(param_1 + 0x140) * dVar11 + *(double *)(param_1 + 0x148) * dVar12);
  dVar15 = (double)(~uVar4 & 0xbff0000000000000 |
                   (ulonglong)((uint)(uVar4 >> 0x20) & 0x3ff00000) << 0x20);
  dVar11 = dVar11 * dVar15;
  dVar12 = dVar12 * dVar15;
  dVar8 = dVar7 * dVar15 * -1.0;
  dVar10 = dVar15 * dVar9 * 1.0;
  dVar9 = *(double *)(param_1 + 0x140);
  dVar15 = *(double *)(param_1 + 0x148);
  dVar6 = *(double *)(param_1 + 0x150);
  dVar1 = *(double *)(param_1 + 0x158);
  dVar2 = dVar15 * dVar8 * -1.0 + ((dVar9 * dVar10 - dVar1 * dVar11 * 1.0) - dVar6 * dVar12);
  dVar14 = dVar9 * dVar8 * 1.0 + ((dVar15 * dVar10 - dVar6 * dVar11 * -1.0) - dVar1 * dVar12);
  dVar7 = dVar1 * dVar8 * 1.0 + dVar9 * dVar12 + (dVar10 * dVar6 - dVar11 * dVar15 * 1.0);
  dVar15 = dVar6 * dVar8 * -1.0 + dVar15 * dVar12 + (dVar10 * dVar1 - dVar11 * dVar9 * -1.0);
  dVar1 = dVar7 - dVar2 * 0.0;
  dVar9 = dVar2 * 0.0 - dVar14;
  dVar8 = dVar14 * 0.0 + dVar7 * -0.0;
  local_148 = (double)FUN_146decba0(param_3,param_4);
  dVar10 = (double)FUN_146decbc8(param_3,param_4);
  dVar5 = (double)FUN_146decbf0(param_3,param_4);
  local_138 = (double)FUN_146decc06(param_3,param_4);
  local_150 = (double)FUN_146decc2e(param_3,param_4);
  dVar6 = (double)FUN_146decc56(param_3,param_4);
  uVar3 = FUN_146decd28(param_3,param_4);
  dVar6 = dVar6 * param_2;
  if ((param_5 != '\0') &&
     ((0.0 < dVar10 || (*(double *)(param_1 + 0x3f8) < ABS(dVar2 + dVar2) && 0.0 < local_148)))) {
    local_178 = dVar5 * param_2 * param_2;
    local_e8 = *(undefined8 *)(param_1 + 0x3d0);
    local_170 = &local_e8;
    local_118 = *(double *)(param_1 + 0x150);
    local_158 = *(double *)(param_1 + 0x140);
    local_110 = *(double *)(param_1 + 0x148);
    dVar13 = local_118 - local_158 * 0.0;
    dVar16 = local_158 * 0.0 - local_110;
    dVar5 = local_110 * 0.0 + local_118 * -0.0;
    dVar16 = dVar16 + dVar16;
    dVar13 = dVar13 + dVar13;
    dVar5 = dVar5 + dVar5;
    dVar10 = *(double *)(param_1 + 0x158);
    local_120 = dVar10 * dVar16 + 0.0;
    local_108 = dVar5 * dVar10 + 1.0;
    local_f0 = (local_158 * dVar13 - dVar5 * local_110) + local_120;
    local_f8 = (local_118 * dVar5 - dVar16 * local_158) + dVar10 * dVar13 + 0.0;
    local_100 = (local_110 * dVar16 - dVar13 * local_118) + local_108;
    local_190 = &local_100;
    local_180 = *(undefined8 *)(param_4 + 0x250);
    local_198 = uVar3;
    local_188 = dVar2 + dVar2;
    local_168 = local_178;
    local_160 = param_2;
    FUN_146dcdf80(param_1,param_2);
    *(undefined8 *)(param_1 + 0x3d0) = local_e8;
    param_2 = local_160;
  }
  dVar9 = dVar9 + dVar9;
  dVar1 = dVar1 + dVar1;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 * param_2;
  if ((param_6 != '\0') &&
     ((dVar7 = dVar15 * dVar1 + 0.0 + (dVar7 * dVar8 - dVar9 * dVar2), 0.0 < local_150 ||
      (*(double *)(param_1 + 0x3f8) < ABS(dVar7) && 0.0 < local_138)))) {
    local_e8 = *(undefined8 *)(param_1 + 0x3e0);
    local_170 = &local_e8;
    local_158 = *(double *)(param_1 + 0x150);
    dVar10 = *(double *)(param_1 + 0x140);
    dVar5 = *(double *)(param_1 + 0x148);
    dVar16 = dVar10 * 0.0 + dVar5 * -0.0;
    dVar11 = dVar5 - local_158 * 0.0;
    dVar12 = local_158 * 0.0 - dVar10;
    dVar16 = dVar16 + dVar16;
    dVar12 = dVar12 + dVar12;
    dVar11 = dVar11 + dVar11;
    dVar13 = *(double *)(param_1 + 0x158);
    local_168 = dVar13 * dVar16 + 1.0;
    local_148 = dVar11 * dVar13 + 0.0;
    local_f0 = (dVar10 * dVar12 - dVar11 * dVar5) + local_168;
    local_f8 = (local_158 * dVar11 - dVar16 * dVar10) + dVar13 * dVar12 + 0.0;
    local_100 = (dVar5 * dVar16 - dVar12 * local_158) + local_148;
    local_190 = &local_100;
    local_180 = *(undefined8 *)(param_4 + 0x260);
    local_198 = uVar3;
    local_188 = dVar7;
    local_178 = dVar6;
    local_160 = param_2;
    FUN_146dcdf80(param_1,param_2,local_138,local_150);
    *(undefined8 *)(param_1 + 0x3e0) = local_e8;
    param_2 = local_160;
  }
  if (param_7 != '\0') {
    dVar9 = dVar15 * dVar9 + 0.0 + (dVar2 * dVar1 - dVar8 * dVar14);
    if ((0.0 < local_150) || (*(double *)(param_1 + 0x3f8) < ABS(dVar9) && 0.0 < local_138)) {
      local_188 = -dVar9;
      local_e8 = *(undefined8 *)(param_1 + 0x3d8);
      local_170 = &local_e8;
      dVar9 = *(double *)(param_1 + 0x150);
      dVar7 = *(double *)(param_1 + 0x140);
      dVar15 = *(double *)(param_1 + 0x148);
      dVar8 = dVar7 - dVar15 * 0.0;
      dVar14 = dVar9 * 0.0 + dVar7 * -0.0;
      dVar2 = dVar15 * 0.0 - dVar9;
      dVar8 = dVar8 + dVar8;
      dVar14 = dVar14 + dVar14;
      dVar2 = dVar2 + dVar2;
      dVar1 = *(double *)(param_1 + 0x158);
      local_f0 = (dVar7 * dVar14 - dVar2 * dVar15) + dVar1 * dVar8 + 0.0;
      local_f8 = (dVar9 * dVar2 - dVar8 * dVar7) + dVar1 * dVar14 + 1.0;
      local_100 = (dVar15 * dVar8 - dVar14 * dVar9) + dVar2 * dVar1 + 0.0;
      local_190 = &local_100;
      local_180 = *(undefined8 *)(param_4 + 600);
      local_198 = uVar3;
      local_178 = dVar6;
      FUN_146dcdf80(param_1,param_2,local_138,local_150);
      *(undefined8 *)(param_1 + 0x3d8) = local_e8;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dca4a8 FUN_146dca4a8 body=482 status=ok
// SIG undefined FUN_146dca4a8(void)

void FUN_146dca4a8(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double *local_d0;
  double local_c8;
  undefined8 local_c0;
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146deb498(param_1 + 0xf0,param_1 + 0x108,&local_88,&local_90);
  dVar5 = *(double *)(param_4 + 0x108);
  dVar1 = local_90 - dVar5;
  if (*(double *)(param_1 + 0x3f0) <= dVar1 && dVar1 != *(double *)(param_1 + 0x3f0)) {
    cVar2 = FUN_146dec9ec(param_3,param_4);
    if (cVar2 == '\0') {
      uVar4 = -(ulonglong)(*(double *)(param_3 + 0x48) < 0.0);
      local_98 = local_78 * dVar5;
      local_a0 = local_80 * dVar5;
      local_a8 = dVar5 * local_88;
      local_d8 = &local_a8;
      local_d0 = (double *)CONCAT44(local_d0._4_4_,0xffffffff);
      FUN_146dcd2c2(param_1,~uVar4 & (ulonglong)*(double *)(param_3 + 0x48) |
                            *(ulonglong *)(param_4 + 0xc0) & uVar4,&local_88,dVar1);
    }
    else {
      FUN_146deca1c(param_3,param_4);
      FUN_146deca42(param_3,param_4);
      uVar3 = FUN_146decd04(param_3,param_4);
      local_b8 = param_1 + 0x3a0;
      local_d8 = (double *)CONCAT71(local_d8._1_7_,uVar3);
      local_c0 = 0;
      local_d0 = &local_88;
      local_c8 = dVar1;
      FUN_1429b6d18(param_1);
    }
    dVar5 = *(double *)(param_1 + 0x360);
    if (*(double *)(param_1 + 0x360) <= dVar1 * dVar1) {
      dVar5 = dVar1 * dVar1;
    }
    *(double *)(param_1 + 0x360) = dVar5;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dca68c FUN_146dca68c body=1091 status=ok
// SIG undefined FUN_146dca68c(void)

void FUN_146dca68c(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
                  longlong param_6,longlong param_7)

{
  double *pdVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [32];
  double *local_108;
  double *local_100;
  double *local_f8;
  double *local_f0;
  longlong local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = &local_c0;
  local_100 = &local_b8;
  local_108 = &local_98;
  local_f8 = &local_b0;
  FUN_146deb516(param_1 + 0x120,param_1 + 0xf0,param_1 + 0x108,param_3);
  dVar6 = local_b8;
  uVar8 = (undefined4)((ulonglong)local_b8 >> 0x20);
  if (local_b8 < 0.0) {
    local_b8 = -local_b8;
    uVar8 = (undefined4)((ulonglong)local_b8 >> 0x20);
    local_88 = -local_88;
    local_98 = -local_98;
    dStack_90 = -dStack_90;
  }
  dVar7 = *(double *)(param_7 + 0x108);
  dVar5 = 0.0;
  if (param_4 != 2) {
    dVar5 = dVar7;
  }
  pdVar1 = (double *)((double)CONCAT44(uVar8,SUB84(dVar6,0)) - dVar5);
  dVar6 = *(double *)(param_1 + 0x3f0);
  if (dVar6 < (double)pdVar1) {
    if (param_4 != 0) {
      if (param_4 == 1) {
        cVar2 = FUN_146dec9ec(param_6,param_7);
        if (cVar2 != '\0') {
          FUN_146deca1c(param_6,param_7);
          FUN_146deca42(param_6,param_7);
          uVar3 = FUN_146decd04(param_6,param_7);
          local_e8 = param_1 + 0x3a0;
          local_108 = (double *)CONCAT71(local_108._1_7_,uVar3);
          local_f0 = (double *)0x0;
          local_100 = &local_98;
          local_f8 = pdVar1;
          FUN_1429b6d18(param_1);
          goto LAB_146dca839;
        }
      }
      uVar4 = -(ulonglong)(*(double *)(param_6 + 0x48) < 0.0);
      local_d8 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) -
                 local_98 * (double)pdVar1;
      local_d0 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) -
                 dStack_90 * (double)pdVar1;
      local_c8 = (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100)) -
                 local_88 * (double)pdVar1;
      local_108 = &local_d8;
      local_100 = (double *)((ulonglong)local_100 & 0xffffffff00000000);
      FUN_146dcd2c2(param_1,~uVar4 & (ulonglong)*(double *)(param_6 + 0x48) |
                            *(ulonglong *)(param_7 + 0xc0) & uVar4,&local_98,pdVar1);
    }
LAB_146dca839:
    dVar7 = *(double *)(param_1 + 0x360);
    if (*(double *)(param_1 + 0x360) <= (double)pdVar1 * (double)pdVar1) {
      dVar7 = (double)pdVar1 * (double)pdVar1;
    }
    dVar6 = *(double *)(param_1 + 0x3f0);
    *(double *)(param_1 + 0x360) = dVar7;
    dVar7 = *(double *)(param_7 + 0x108);
  }
  dVar5 = 0.0;
  if (param_5 != 2) {
    dVar5 = dVar7;
  }
  pdVar1 = (double *)(local_c0 - dVar5);
  if ((double)pdVar1 <= dVar6) goto LAB_146dca91d;
  if (param_5 == 1) {
    cVar2 = FUN_146dec9ec(param_6,param_7);
    if (cVar2 == '\0') goto LAB_146dca96b;
    FUN_146deca1c(param_6,param_7);
    FUN_146deca42(param_6,param_7);
    uVar3 = FUN_146decd04(param_6,param_7);
    local_e8 = param_1 + 0x3a0;
    local_108 = (double *)CONCAT71(local_108._1_7_,uVar3);
    local_f0 = (double *)0x0;
    local_100 = &local_b0;
    local_f8 = pdVar1;
    FUN_1429b6d18(param_1);
  }
  else {
LAB_146dca96b:
    uVar4 = -(ulonglong)(*(double *)(param_6 + 0x48) < 0.0);
    local_d8 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) -
               local_b0 * (double)pdVar1;
    local_d0 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) -
               local_a8 * (double)pdVar1;
    local_c8 = (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100)) -
               local_a0 * (double)pdVar1;
    local_108 = &local_d8;
    local_100 = (double *)CONCAT44(local_100._4_4_,1);
    FUN_146dcd2c2(param_1,~uVar4 & (ulonglong)*(double *)(param_6 + 0x48) |
                          *(ulonglong *)(param_7 + 0xc0) & uVar4,&local_b0,pdVar1);
  }
  dVar6 = *(double *)(param_1 + 0x360);
  if (*(double *)(param_1 + 0x360) <= (double)pdVar1 * (double)pdVar1) {
    dVar6 = (double)pdVar1 * (double)pdVar1;
  }
  *(double *)(param_1 + 0x360) = dVar6;
LAB_146dca91d:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcaad0 FUN_146dcaad0 body=649 status=ok
// SIG undefined FUN_146dcaad0(void)

void FUN_146dcaad0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  longlong param_5,longlong param_6)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double *local_d0;
  double local_c8;
  undefined8 local_c0;
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = &local_90;
  local_d8 = &local_88;
  FUN_146deb6d2(param_1 + 0x120,param_1 + 0xf0,param_1 + 0x108,param_3);
  dVar5 = local_90;
  uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
  dVar4 = 0.0;
  if (local_90 < 0.0) {
    local_90 = -local_90;
    uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
    local_78 = -local_78;
    local_88 = -local_88;
    dStack_80 = -dStack_80;
  }
  if (param_4 != 2) {
    dVar4 = *(double *)(param_6 + 0x108);
  }
  dVar4 = (double)CONCAT44(uVar6,SUB84(dVar5,0)) - dVar4;
  if (dVar4 < *(double *)(param_1 + 0x3f0) || dVar4 == *(double *)(param_1 + 0x3f0))
  goto LAB_146dcac5d;
  if (param_4 == 1) {
    cVar1 = FUN_146dec9ec(param_5,param_6);
    if (cVar1 == '\0') goto LAB_146dcaca8;
    FUN_146deca1c(param_5,param_6);
    FUN_146deca42(param_5,param_6);
    uVar2 = FUN_146decd04(param_5,param_6);
    local_b8 = param_1 + 0x3a0;
    local_d8 = (double *)CONCAT71(local_d8._1_7_,uVar2);
    local_c0 = 0;
    local_d0 = &local_88;
    local_c8 = dVar4;
    FUN_1429b6d18(param_1);
  }
  else {
LAB_146dcaca8:
    uVar3 = -(ulonglong)(*(double *)(param_5 + 0x48) < 0.0);
    local_98 = (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100)) - local_78 * dVar4;
    local_a0 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) - dStack_80 * dVar4;
    local_a8 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) - local_88 * dVar4;
    local_d8 = &local_a8;
    local_d0 = (double *)CONCAT44(local_d0._4_4_,0xffffffff);
    FUN_146dcd2c2(param_1,~uVar3 & (ulonglong)*(double *)(param_5 + 0x48) |
                          *(ulonglong *)(param_6 + 0xc0) & uVar3,&local_88,dVar4);
  }
  dVar5 = *(double *)(param_1 + 0x360);
  if (*(double *)(param_1 + 0x360) <= dVar4 * dVar4) {
    dVar5 = dVar4 * dVar4;
  }
  *(double *)(param_1 + 0x360) = dVar5;
LAB_146dcac5d:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcad5a FUN_146dcad5a body=324 status=ok
// SIG undefined FUN_146dcad5a(void)

void FUN_146dcad5a(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,double param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_146decb48(param_4,param_5);
  dVar3 = (double)FUN_146decb72(param_4,param_5,param_3);
  uVar1 = FUN_146decd1c(param_4,param_5);
  if ((0.0 < dVar3) ||
     (*(double *)(param_1 + 0x3f0) <= ABS(param_7) && ABS(param_7) != *(double *)(param_1 + 0x3f0)))
  {
    local_78 = *(undefined8 *)(param_1 + 0x3b8 + (ulonglong)param_3 * 8);
    local_88 = &local_78;
    local_90 = param_8;
    local_98 = param_7;
    local_a0 = param_6;
    local_a8 = uVar1;
    FUN_1429b6d18(param_1,param_2,uVar2,dVar3);
    *(undefined8 *)(param_1 + 0x3b8 + (ulonglong)param_3 * 8) = local_78;
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcaea0 FUN_146dcaea0 body=2320 status=ok
// SIG undefined FUN_146dcaea0(void)

void FUN_146dcaea0(longlong *param_1,longlong param_2,longlong param_3)

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
  longlong lVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  longlong lVar14;
  double *pdVar15;
  double *pdVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
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
  undefined1 auStack_2a8 [32];
  double *local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8 [5];
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (((9.999999747378752e-05 < ABS((double)param_1[0x66])) ||
      (9.999999747378752e-05 < ABS((double)param_1[0x67]))) ||
     (9.999999747378752e-05 < ABS((double)param_1[0x68]))) {
    cVar13 = FUN_146dec9ec(param_2,param_3);
    if (cVar13 == '\0') {
      uVar17 = -(ulonglong)(*(double *)(param_2 + 0x48) < 0.0);
      local_208 = (double)(~uVar17 & (ulonglong)*(double *)(param_2 + 0x48) |
                          *(ulonglong *)(param_3 + 0xc0) & uVar17) * (double)param_1[0x7d];
      uStack_200 = 0;
      lVar14 = *param_1;
      fVar1 = *(float *)(lVar14 + 0x28);
      fVar2 = *(float *)(lVar14 + 0x24);
      fVar3 = *(float *)(lVar14 + 0x20);
      local_240 = (double)param_1[0x20] - *(double *)(lVar14 + 0x120);
      local_248 = (double)param_1[0x1f] - *(double *)(lVar14 + 0x118);
      local_250 = (double)param_1[0x1e] - *(double *)(lVar14 + 0x110);
      lVar10 = param_1[3];
      dVar21 = local_250 * (double)*(float *)(lVar14 + 0x34);
      dVar22 = local_240 * (double)*(float *)(lVar14 + 0x30);
      dVar25 = (double)*(float *)(lVar14 + 0x30) * local_248;
      dVar18 = local_248 * (double)*(float *)(lVar14 + 0x38);
      dVar23 = (double)*(float *)(lVar14 + 0x38) * local_250;
      fVar4 = *(float *)(lVar10 + 0x28);
      fVar5 = *(float *)(lVar10 + 0x24);
      dVar11 = (double)param_1[0x23] - *(double *)(lVar10 + 0x120);
      dVar20 = (double)*(float *)(lVar14 + 0x34) * local_240;
      dVar24 = (double)param_1[0x22] - *(double *)(lVar10 + 0x118);
      dVar12 = (double)param_1[0x21] - *(double *)(lVar10 + 0x110);
      fVar6 = *(float *)(lVar10 + 0x38);
      fVar7 = *(float *)(lVar10 + 0x34);
      fVar8 = *(float *)(lVar10 + 0x30);
      fVar9 = *(float *)(lVar10 + 0x20);
      dVar19 = (double)param_1[0x44];
      uVar36 = SUB84(DAT_14c9960f8,0);
      uVar37 = (undefined4)((ulonglong)DAT_14c9960f8 >> 0x20);
      local_220 = DAT_14c9960b0;
      local_258 = DAT_14c9960b0;
      local_218 = DAT_14c9960b8;
      local_210 = DAT_14c9960c0;
      local_238 = DAT_14c9960d0;
      local_270 = DAT_14c9960d0;
      uVar26 = (undefined4)DAT_14c996100;
      uVar27 = (undefined4)((ulonglong)DAT_14c996100 >> 0x20);
      local_228 = DAT_14c9960d8;
      local_268 = DAT_14c9960d8;
      local_230 = DAT_14c9960e0;
      local_260 = DAT_14c9960e0;
      local_280 = DAT_14c9960f0;
      uVar38 = SUB84(DAT_14c9960f0,0);
      uVar39 = (undefined4)((ulonglong)DAT_14c9960f0 >> 0x20);
      local_278 = DAT_14c9960f8;
      local_1c8[2] = DAT_14c9960c0;
      local_1c8[1] = DAT_14c9960b8;
      uVar28 = uVar26;
      uVar29 = uVar27;
      if (9.99999993922529e-09 < dVar19) {
        pdVar15 = (double *)(param_1 + 0x46);
        pdVar16 = local_1c8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *pdVar16 = *pdVar15;
          pdVar15 = pdVar15 + 1;
          pdVar16 = pdVar16 + 1;
        }
        local_1f8 = dVar19;
        local_1e0 = local_250;
        local_1d8 = local_248;
        local_1d0 = local_240;
        FUN_146db4c70(&local_148);
        local_258 = local_148;
        local_270 = local_128;
        local_268 = local_120;
        local_260 = local_118;
        uVar38 = SUB84(local_108,0);
        uVar39 = (undefined4)((ulonglong)local_108 >> 0x20);
        uVar36 = SUB84(local_100,0);
        uVar37 = (undefined4)((ulonglong)local_100 >> 0x20);
        uVar28 = SUB84(local_f8,0);
        uVar29 = (undefined4)((ulonglong)local_f8 >> 0x20);
        local_1c8[2] = local_138;
        local_1c8[1] = local_140;
      }
      dVar25 = (((double)fVar8 * dVar24 - dVar12 * (double)fVar7) + (double)fVar4) -
               ((dVar25 - dVar21) + (double)fVar1);
      dVar22 = (((double)fVar6 * dVar12 - dVar11 * (double)fVar8) + (double)fVar5) -
               ((dVar23 - dVar22) + (double)fVar2);
      dVar18 = (((double)fVar7 * dVar11 - dVar24 * (double)fVar6) + (double)fVar9) -
               ((dVar20 - dVar18) + (double)fVar3);
      dVar19 = (double)param_1[0x45];
      uVar30 = SUB84(local_228,0);
      uVar31 = (undefined4)((ulonglong)local_228 >> 0x20);
      uVar32 = SUB84(local_230,0);
      uVar33 = (undefined4)((ulonglong)local_230 >> 0x20);
      uVar34 = SUB84(local_238,0);
      uVar35 = (undefined4)((ulonglong)local_238 >> 0x20);
      dVar20 = local_210;
      local_1c8[0] = local_220;
      dVar21 = local_218;
      if (9.99999993922529e-09 < dVar19) {
        pdVar15 = (double *)(param_1 + 0x56);
        pdVar16 = local_1c8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *pdVar16 = *pdVar15;
          pdVar15 = pdVar15 + 1;
          pdVar16 = pdVar16 + 1;
        }
        lVar14 = param_1[3];
        local_1d0 = (double)param_1[0x23] - *(double *)(lVar14 + 0x120);
        local_1d8 = (double)param_1[0x22] - *(double *)(lVar14 + 0x118);
        local_1e0 = (double)param_1[0x21] - *(double *)(lVar14 + 0x110);
        local_1f8 = dVar19;
        FUN_146db4c70(&local_148);
        uVar34 = SUB84(local_128,0);
        uVar35 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar30 = SUB84(local_120,0);
        uVar31 = (undefined4)((ulonglong)local_120 >> 0x20);
        uVar32 = SUB84(local_118,0);
        uVar33 = (undefined4)((ulonglong)local_118 >> 0x20);
        local_280 = local_108;
        local_278 = local_100;
        uVar26 = SUB84(local_f8,0);
        uVar27 = (undefined4)((ulonglong)local_f8 >> 0x20);
        dVar20 = local_138;
        local_1c8[0] = local_148;
        dVar21 = local_140;
      }
      local_1c8[0] = local_258 + local_1c8[0];
      local_1c8[4] = local_270 + (double)CONCAT44(uVar35,uVar34);
      local_188 = (double)CONCAT44(uVar39,uVar38) + local_280;
      local_1c8[1] = local_1c8[1] + dVar21;
      local_1a0 = local_268 + (double)CONCAT44(uVar31,uVar30);
      local_180 = (double)CONCAT44(uVar37,uVar36) + local_278;
      local_1c8[2] = local_1c8[2] + dVar20;
      local_198 = local_260 + (double)CONCAT44(uVar33,uVar32);
      local_178 = (double)CONCAT44(uVar29,uVar28) + (double)CONCAT44(uVar27,uVar26);
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0x3ff0000000000000;
      local_1c8[3] = 0.0;
      local_190 = 0;
      local_170 = 0;
      FUN_14494412e(local_1c8,&local_148);
      dVar19 = (dVar25 * local_108 + dVar18 * local_148 + dVar22 * local_128) * local_208;
      dVar20 = (local_100 * dVar25 + local_140 * dVar18 + local_120 * dVar22) * local_208;
      dVar18 = (local_f8 * dVar25 + local_138 * dVar18 + local_118 * dVar22) * local_208;
      local_138 = (double)param_1[0x44];
      local_148 = dVar19 * local_138;
      local_140 = dVar20 * local_138;
      local_138 = local_138 * dVar18;
      local_1c8[2] = -(double)param_1[0x45];
      local_1c8[0] = dVar19 * local_1c8[2];
      local_1c8[1] = dVar20 * local_1c8[2];
      local_1c8[2] = local_1c8[2] * dVar18;
      lVar14 = *param_1;
      dVar25 = (double)param_1[0x20] - *(double *)(lVar14 + 0x120);
      dVar21 = (double)param_1[0x1f] - *(double *)(lVar14 + 0x118);
      dVar22 = (double)param_1[0x1e] - *(double *)(lVar14 + 0x110);
      dVar23 = dVar22 * dVar20 - dVar19 * dVar21;
      dVar22 = dVar25 * dVar19 - dVar18 * dVar22;
      dVar21 = dVar21 * dVar18 - dVar20 * dVar25;
      local_1d0 = (double)param_1[0x50] * dVar23 +
                  (double)param_1[0x48] * dVar21 + (double)param_1[0x4c] * dVar22;
      local_1d8 = (double)param_1[0x4f] * dVar23 +
                  (double)param_1[0x47] * dVar21 + (double)param_1[0x4b] * dVar22;
      local_1e0 = dVar23 * (double)param_1[0x4e] +
                  dVar21 * (double)param_1[0x46] + dVar22 * (double)param_1[0x4a];
      lVar14 = param_1[3];
      dVar22 = (double)param_1[0x23] - *(double *)(lVar14 + 0x120);
      dVar23 = (double)param_1[0x22] - *(double *)(lVar14 + 0x118);
      dVar25 = (double)param_1[0x21] - *(double *)(lVar14 + 0x110);
      dVar21 = dVar19 * dVar23 - dVar25 * dVar20;
      dVar19 = dVar18 * dVar25 - dVar22 * dVar19;
      dVar18 = dVar22 * dVar20 - dVar23 * dVar18;
      local_1e8 = (double)param_1[0x60] * dVar21 +
                  (double)param_1[0x58] * dVar18 + (double)param_1[0x5c] * dVar19;
      local_1f0 = (double)param_1[0x5f] * dVar21 +
                  (double)param_1[0x57] * dVar18 + (double)param_1[0x5b] * dVar19;
      local_1f8 = dVar21 * (double)param_1[0x5e] +
                  dVar18 * (double)param_1[0x56] + dVar19 * (double)param_1[0x5a];
      local_288 = &local_1f8;
      FUN_146dcd1ec(param_1,&local_148,&local_1e0,local_1c8);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcb7b2 FUN_146dcb7b2 body=430 status=ok
// SIG undefined FUN_146dcb7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dcb7b2(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x330))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x338)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x340)))) {
    cVar2 = FUN_146dec9ec(param_2,param_3);
    if (cVar2 == '\0') {
      FUN_146deb498(param_1 + 0xf0,param_1 + 0x108,&local_40,&local_48);
      uVar3 = -(ulonglong)(*(double *)(param_2 + 0x48) < 0.0);
      local_60 = *(double *)(param_3 + 0x108);
      if (local_48 <= local_60) {
        local_60 = *(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0);
        local_58 = *(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8);
        local_50 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100);
      }
      else {
        local_50 = local_30 * local_60;
        local_58 = local_38 * local_60;
        local_60 = local_60 * local_40;
      }
      dVar1 = *(double *)(param_3 + 0x178);
      local_68 = 0;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        local_68 = -(ulonglong)((double)_DAT_14c75f194 < *(double *)(param_1 + 0x470)) &
                   (ulonglong)(-dVar1 * *(double *)(param_1 + 0x470));
      }
      FUN_146dce082(param_1,(double)(~uVar3 & (ulonglong)*(double *)(param_2 + 0x48) |
                                    *(ulonglong *)(param_3 + 0xc0) & uVar3) *
                            *(double *)(param_1 + 1000),&local_40,&local_60);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcb962 FUN_146dcb962 body=993 status=ok
// SIG undefined FUN_146dcb962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dcb962(longlong param_1,undefined4 param_2,int param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [16];
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x330))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x338)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x340)))) &&
     (cVar5 = FUN_146dec9ec(param_5,param_6), cVar5 == '\0')) {
    local_e0 = &local_c0;
    local_e8 = &local_b0;
    local_f0 = &local_b8;
    local_f8 = local_98;
    FUN_146deb516(param_1 + 0x120,param_1 + 0xf0,param_1 + 0x108,param_2);
    dVar2 = *(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100);
    dVar3 = *(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0);
    if (9.99999993922529e-09 < *(double *)(param_1 + 0x370)) {
      uVar6 = -(ulonglong)(*(double *)(param_5 + 0x48) < 0.0);
      dVar7 = (double)local_98._0_8_;
      dVar9 = (double)local_98._8_8_;
      if (local_b8 < 0.0) {
        local_b8 = -local_b8;
        local_88 = -local_88;
        dVar9 = -(double)local_98._8_8_;
        dVar7 = -(double)local_98._0_8_;
        local_98._8_4_ = local_98._8_4_;
        local_98._0_8_ = dVar7;
        local_98._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      }
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      if (param_3 != 2) {
        uVar12 = (undefined4)*(undefined8 *)(param_6 + 0x108);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 0x108) >> 0x20);
      }
      dVar8 = local_b8 - (double)CONCAT44(uVar13,uVar12);
      local_c8 = dVar2 - local_88 * dVar8;
      local_d0 = dVar3 - dVar9 * dVar8;
      local_d8 = dVar4 - dVar7 * dVar8;
      if (param_3 == 1) {
        dVar7 = *(double *)(param_6 + 0x178);
        if ((dVar7 != 0.0) || (NAN(dVar7))) {
          uVar1 = -(ulonglong)((double)_DAT_14c75f194 < *(double *)(param_1 + 0x470)) &
                  (ulonglong)(-dVar7 * *(double *)(param_1 + 0x470));
          uVar10 = (undefined4)uVar1;
          uVar11 = (undefined4)(uVar1 >> 0x20);
        }
      }
      local_f8 = (undefined1 *)CONCAT44(uVar11,uVar10);
      FUN_146dce082(param_1,(double)(~uVar6 & (ulonglong)*(double *)(param_5 + 0x48) |
                                    *(ulonglong *)(param_6 + 0xc0) & uVar6) *
                            *(double *)(param_1 + 1000),local_98,&local_d8);
    }
    if (9.99999993922529e-09 < *(double *)(param_1 + 0x378)) {
      local_f8 = (undefined1 *)0x0;
      uVar6 = -(ulonglong)(*(double *)(param_5 + 0x48) < 0.0);
      dVar7 = 0.0;
      if (param_4 != 2) {
        dVar7 = *(double *)(param_6 + 0x108);
      }
      local_c0 = local_c0 - dVar7;
      if (local_c0 <= 0.0) {
        local_c0 = 0.0;
      }
      local_c8 = dVar2 - local_c0 * local_a0;
      local_d0 = dVar3 - local_a8 * local_c0;
      local_d8 = dVar4 - local_b0 * local_c0;
      if (param_4 == 1) {
        dVar2 = *(double *)(param_6 + 0x178);
        if ((dVar2 != 0.0) || (NAN(dVar2))) {
          local_f8 = (undefined1 *)
                     (-(ulonglong)((double)_DAT_14c75f194 < *(double *)(param_1 + 0x478)) &
                     (ulonglong)(-dVar2 * *(double *)(param_1 + 0x478)));
        }
      }
      FUN_146dce082(param_1,(double)(~uVar6 & (ulonglong)*(double *)(param_5 + 0x48) |
                                    *(ulonglong *)(param_6 + 0xc0) & uVar6) *
                            *(double *)(param_1 + 1000),&local_b0,&local_d8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dcbd44 FUN_146dcbd44 body=627 status=ok
// SIG undefined FUN_146dcbd44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dcbd44(longlong param_1,undefined4 param_2,int param_3,longlong param_4,longlong param_5
                  )

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  double *local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x330))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x338)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x340)))) &&
     (cVar2 = FUN_146dec9ec(param_4,param_5), cVar2 == '\0')) {
    local_b0 = &local_90;
    local_b8 = local_88;
    FUN_146deb6d2(param_1 + 0x120,param_1 + 0xf0,param_1 + 0x108,param_2);
    uVar3 = -(ulonglong)(*(double *)(param_4 + 0x48) < 0.0);
    dVar5 = (double)local_88._0_8_;
    dVar6 = (double)local_88._8_8_;
    if (local_90 < 0.0) {
      local_90 = -local_90;
      local_78 = -local_78;
      dVar6 = -(double)local_88._8_8_;
      dVar5 = -(double)local_88._0_8_;
      local_88._8_4_ = local_88._8_4_;
      local_88._0_8_ = dVar5;
      local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    }
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    if (param_3 != 2) {
      uVar9 = (undefined4)*(undefined8 *)(param_5 + 0x108);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 0x108) >> 0x20);
    }
    dVar4 = local_90 - (double)CONCAT44(uVar10,uVar9);
    local_98 = (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x100)) - local_78 * dVar4;
    local_a0 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0xf8)) - dVar6 * dVar4;
    local_a8 = (*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xf0)) - dVar5 * dVar4;
    if (param_3 == 1) {
      dVar5 = *(double *)(param_5 + 0x178);
      if ((dVar5 != 0.0) || (NAN(dVar5))) {
        uVar1 = -(ulonglong)((double)_DAT_14c75f194 < *(double *)(param_1 + 0x470)) &
                (ulonglong)(-dVar5 * *(double *)(param_1 + 0x470));
        uVar7 = (undefined4)uVar1;
        uVar8 = (undefined4)(uVar1 >> 0x20);
      }
    }
    local_b8 = (undefined1 *)CONCAT44(uVar8,uVar7);
    FUN_146dce082(param_1,(double)(~uVar3 & (ulonglong)*(double *)(param_4 + 0x48) |
                                  *(ulonglong *)(param_5 + 0xc0) & uVar3) *
                          *(double *)(param_1 + 1000),local_88,&local_a8);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dcbfb8 FUN_146dcbfb8 body=377 status=ok
// SIG undefined FUN_146dcbfb8(void)

void FUN_146dcbfb8(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [40];
  double local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) {
    bVar3 = false;
  }
  else {
    bVar3 = ABS(*(double *)(param_1 + 0x358)) <= 9.999999747378752e-05;
  }
  if ((!bVar3 && param_4 == '\0') && (9.99999993922529e-09 < *(double *)(param_1 + 0x388))) {
    FUN_146deb7c0(param_1 + 0x120,param_1 + 0x140,&local_68,&local_70);
    uVar6 = 0;
    uVar7 = 0;
    if (local_70 < 0.0) {
      local_58 = local_58 ^ 0x8000000000000000;
      local_68 = local_68 ^ 0x8000000000000000;
      uStack_60 = uStack_60 ^ 0x8000000000000000;
    }
    dVar1 = *(double *)(param_1 + 1000);
    dVar5 = (double)FUN_146deca68(param_2,param_3);
    dVar2 = *(double *)(param_3 + 0x180);
    if ((dVar2 != 0.0) || (NAN(dVar2))) {
      uVar4 = -(ulonglong)((double)DAT_14c75f19c < *(double *)(param_1 + 0x488)) &
              (ulonglong)(-dVar2 * *(double *)(param_1 + 0x488));
      uVar6 = (undefined4)uVar4;
      uVar7 = (undefined4)(uVar4 >> 0x20);
    }
    FUN_146dccbe8(param_1,dVar5 * dVar1,&local_68,CONCAT44(uVar7,uVar6));
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcc132 FUN_146dcc132 body=835 status=ok
// SIG undefined FUN_146dcc132(void)

void FUN_146dcc132(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined8 *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) {
    bVar3 = false;
  }
  else {
    bVar3 = ABS(*(double *)(param_1 + 0x358)) <= 9.999999747378752e-05;
  }
  if ((!bVar3 && param_4 == '\0') && (9.99999993922529e-09 < *(double *)(param_1 + 0x390))) {
    local_e0 = &local_c0;
    local_c0 = 0;
    local_e8 = &local_b8;
    FUN_146debc06(param_1 + 0x120,param_1 + 0x140,*(undefined8 *)(param_3 + 0x128),
                  *(undefined8 *)(param_3 + 0x130));
    dVar10 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
    dVar8 = SQRT(dVar10);
    local_b8 = (double)(-(ulonglong)(dVar10 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                       ~-(ulonglong)(dVar10 < 9.999999747378752e-05) & (ulonglong)(local_b8 / dVar8)
                       );
    uVar12 = 0;
    uVar13 = 0;
    dVar6 = 0.0;
    dVar7 = 0.0;
    if (9.999999747378752e-05 <= dVar10) {
      dVar7 = local_a8 / dVar8;
      dVar6 = local_b0 / dVar8;
    }
    dVar8 = *(double *)(param_1 + 0x130);
    dVar10 = *(double *)(param_1 + 0x120);
    dVar1 = *(double *)(param_1 + 0x128);
    dVar9 = dVar10 * dVar6 - local_b8 * dVar1;
    dVar11 = dVar8 * local_b8 - dVar7 * dVar10;
    dVar5 = dVar1 * dVar7 - dVar6 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar11 = dVar11 + dVar11;
    dVar5 = dVar5 + dVar5;
    dVar2 = *(double *)(param_1 + 0x138);
    local_c8 = (dVar10 * dVar11 - dVar5 * dVar1) + dVar2 * dVar9 + dVar7;
    local_d0 = (dVar8 * dVar5 - dVar9 * dVar10) + dVar2 * dVar11 + dVar6;
    local_d8 = (dVar1 * dVar9 - dVar11 * dVar8) + dVar5 * dVar2 + local_b8;
    dVar8 = *(double *)(param_1 + 1000);
    local_b0 = dVar6;
    local_a8 = dVar7;
    dVar7 = (double)FUN_146decad8(param_2,param_3);
    dVar6 = *(double *)(param_3 + 0x188);
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      uVar4 = -(ulonglong)((double)DAT_14c75f19c < *(double *)(param_1 + 0x498)) &
              (ulonglong)(-dVar6 * *(double *)(param_1 + 0x498));
      uVar12 = (undefined4)uVar4;
      uVar13 = (undefined4)(uVar4 >> 0x20);
    }
    FUN_146dccbe8(param_1,dVar7 * dVar8,&local_d8,CONCAT44(uVar13,uVar12));
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcc476 FUN_146dcc476 body=391 status=ok
// SIG undefined FUN_146dcc476(void)

void FUN_146dcc476(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60 [8];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x358)))) &&
     (9.99999993922529e-09 < *(double *)(param_1 + 0x388 + (ulonglong)param_4 * 8))) {
    local_68 = local_60;
    FUN_146debf8e(param_1 + 0x120,param_1 + 0x140,param_4,&local_58);
    dVar3 = local_48 * local_48 + local_58 * local_58 + local_50 * local_50;
    dVar1 = SQRT(dVar3);
    local_58 = (double)(-(ulonglong)(dVar3 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                       ~-(ulonglong)(dVar3 < 9.999999747378752e-05) & (ulonglong)(local_58 / dVar1))
    ;
    dVar2 = 0.0;
    dVar4 = 0.0;
    if (9.999999747378752e-05 <= dVar3) {
      dVar4 = local_48 / dVar1;
      dVar2 = local_50 / dVar1;
    }
    dVar1 = *(double *)(param_1 + 1000);
    local_50 = dVar2;
    local_48 = dVar4;
    dVar2 = (double)FUN_146decad8(param_2,param_3);
    FUN_146dccbe8(param_1,dVar1 * dVar2,&local_58,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcc5fe FUN_146dcc5fe body=339 status=ok
// SIG undefined FUN_146dcc5fe(void)

void FUN_146dcc5fe(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) {
    bVar4 = false;
  }
  else {
    bVar4 = ABS(*(double *)(param_1 + 0x358)) <= 9.999999747378752e-05;
  }
  if (!bVar4 && param_5 == '\0') {
    if (9.99999993922529e-09 < *(double *)(param_1 + 0x388 + (ulonglong)param_4 * 8)) {
      local_70 = local_60;
      local_78 = local_58;
      FUN_146dec596(param_1 + 0x120,param_1 + 0x140,*param_2);
      dVar1 = *(double *)(param_1 + 1000);
      dVar5 = (double)FUN_146decad8(param_2,param_3);
      dVar2 = *(double *)(param_3 + 0x188);
      uVar6 = 0;
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        dVar3 = *(double *)(param_1 + 0x488 + (ulonglong)param_4 * 8);
        uVar6 = -(ulonglong)((double)DAT_14c75f19c < dVar3) & (ulonglong)(-dVar2 * dVar3);
      }
      FUN_146dccbe8(param_1,dVar5 * dVar1,local_58,uVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcc752 FUN_146dcc752 body=336 status=ok
// SIG undefined FUN_146dcc752(void)

void FUN_146dcc752(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) {
    bVar4 = false;
  }
  else {
    bVar4 = ABS(*(double *)(param_1 + 0x358)) <= 9.999999747378752e-05;
  }
  if (!bVar4 && param_5 == '\0') {
    if (9.99999993922529e-09 < *(double *)(param_1 + 0x388 + (ulonglong)param_4 * 8)) {
      local_68 = local_60;
      FUN_146dec22c(param_1 + 0x120,param_1 + 0x140,param_4,local_58);
      dVar1 = *(double *)(param_1 + 1000);
      dVar5 = (double)FUN_146decad8(param_2,param_3);
      dVar2 = *(double *)(param_3 + 0x188);
      uVar6 = 0;
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        dVar3 = *(double *)(param_1 + 0x488 + (ulonglong)param_4 * 8);
        uVar6 = -(ulonglong)((double)DAT_14c75f19c < dVar3) & (ulonglong)(-dVar2 * dVar3);
      }
      FUN_146dccbe8(param_1,dVar5 * dVar1,local_58,uVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcc8a4 FUN_146dcc8a4 body=834 status=ok
// SIG undefined FUN_146dcc8a4(void)

void FUN_146dcc8a4(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_d8 [32];
  double *local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x348))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x350)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x358)))) {
    local_b8 = &local_a8;
    FUN_146dec78e(param_1 + 0x120,param_1 + 0x140,&local_78,&local_90);
    if ((param_4 != '\0') && (9.99999993922529e-09 < *(double *)(param_1 + 0x388))) {
      dVar5 = *(double *)(param_1 + 1000);
      dVar6 = (double)FUN_146deca68(param_2,param_3);
      dVar1 = local_68 * local_68 + local_78 * local_78 + local_70 * local_70;
      dVar3 = SQRT(dVar1);
      local_78 = (double)((-(ulonglong)(dVar1 < 9.999999747378752e-05) >> 0x20 & 0x3ff00000) << 0x20
                         | ~-(ulonglong)(dVar1 < 9.999999747378752e-05) &
                           (ulonglong)(local_78 / dVar3));
      dVar4 = 0.0;
      dVar2 = 0.0;
      if (9.999999747378752e-05 <= dVar1) {
        dVar2 = local_68 / dVar3;
        dVar4 = local_70 / dVar3;
      }
      local_70 = dVar4;
      local_68 = dVar2;
      FUN_146dccbe8(param_1,dVar6 * dVar5,&local_78,0);
    }
    if ((param_5 != '\0') &&
       (9.99999993922529e-09 < *(double *)(param_1 + 0x390) + *(double *)(param_1 + 0x398))) {
      dVar5 = *(double *)(param_1 + 1000);
      dVar1 = (double)FUN_146decad8(param_2,param_3);
      dVar1 = dVar1 * dVar5;
      dVar2 = local_80 * local_80 + local_90 * local_90 + local_88 * local_88;
      dVar4 = SQRT(dVar2);
      local_90 = (double)(-(ulonglong)(dVar2 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar2 < 9.999999747378752e-05) &
                         (ulonglong)(local_90 / dVar4));
      dVar5 = 0.0;
      dVar6 = 0.0;
      if (9.999999747378752e-05 <= dVar2) {
        dVar6 = local_80 / dVar4;
        dVar5 = local_88 / dVar4;
      }
      local_88 = dVar5;
      local_80 = dVar6;
      FUN_146dccbe8(param_1,dVar1,&local_90,0);
      dVar2 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      dVar4 = SQRT(dVar2);
      local_a8 = (double)(-(ulonglong)(dVar2 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar2 < 9.999999747378752e-05) &
                         (ulonglong)(local_a8 / dVar4));
      dVar5 = 0.0;
      dVar6 = 0.0;
      if (9.999999747378752e-05 <= dVar2) {
        dVar6 = local_98 / dVar4;
        dVar5 = local_a0 / dVar4;
      }
      local_a0 = dVar5;
      local_98 = dVar6;
      FUN_146dccbe8(param_1,dVar1,&local_a8,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dccbe8 FUN_146dccbe8 body=1200 status=ok
// SIG undefined FUN_146dccbe8(void)

void FUN_146dccbe8(longlong *param_1,double param_2,double *param_3,double param_4)

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
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  
  lVar19 = param_1[3];
  lVar20 = *param_1;
  dVar1 = (double)param_1[0x48];
  dVar2 = (double)param_1[0x4c];
  dVar3 = (double)param_1[0x50];
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar7 = (double)param_1[0x4b];
  dVar8 = (double)param_1[0x47];
  dVar9 = (double)param_1[0x4f];
  dVar10 = (double)param_1[0x5c];
  dVar11 = (double)param_1[0x58];
  dVar12 = (double)param_1[0x60];
  dVar13 = (double)param_1[0x5b];
  dVar14 = (double)param_1[0x57];
  dVar15 = (double)param_1[0x5f];
  dVar16 = (double)param_1[0x5a];
  dVar17 = (double)param_1[0x56];
  dVar18 = (double)param_1[0x5e];
  dVar21 = (((((double)*(float *)(lVar19 + 0x38) - (double)*(float *)(lVar20 + 0x38)) * dVar6 +
             ((double)*(float *)(lVar19 + 0x30) - (double)*(float *)(lVar20 + 0x30)) * dVar4 +
             ((double)*(float *)(lVar19 + 0x34) - (double)*(float *)(lVar20 + 0x34)) * dVar5) -
            param_4) * param_2) /
           ((dVar12 * dVar6 + dVar11 * dVar4 + dVar5 * dVar10) * dVar6 +
            (dVar18 * dVar6 + dVar17 * dVar4 + dVar5 * dVar16) * dVar4 +
            (dVar15 * dVar6 + dVar14 * dVar4 + dVar5 * dVar13) * dVar5 +
           (dVar3 * dVar6 + dVar1 * dVar4 + dVar2 * dVar5) * dVar6 +
           ((double)param_1[0x4e] * dVar6 +
           (double)param_1[0x46] * dVar4 + (double)param_1[0x4a] * dVar5) * dVar4 +
           (dVar9 * dVar6 + dVar8 * dVar4 + dVar7 * dVar5) * dVar5);
  dVar4 = dVar4 * dVar21;
  dVar5 = dVar5 * dVar21;
  dVar21 = dVar21 * dVar6;
  dVar6 = -dVar4;
  *(float *)(lVar20 + 0x30) =
       (float)((double)param_1[0x4e] * dVar21 +
              (double)param_1[0x46] * dVar4 + (double)param_1[0x4a] * dVar5) +
       *(float *)(lVar20 + 0x30);
  *(float *)(lVar20 + 0x34) =
       (float)(dVar9 * dVar21 + dVar8 * dVar4 + dVar7 * dVar5) + *(float *)(lVar20 + 0x34);
  *(float *)(lVar20 + 0x38) =
       (float)(dVar3 * dVar21 + dVar1 * dVar4 + dVar2 * dVar5) + *(float *)(lVar20 + 0x38);
  lVar19 = param_1[3];
  *(float *)(lVar19 + 0x30) =
       (float)((dVar6 * dVar17 - dVar5 * dVar16) - dVar21 * dVar18) + *(float *)(lVar19 + 0x30);
  *(float *)(lVar19 + 0x34) =
       (float)((dVar14 * dVar6 - dVar13 * dVar5) - dVar15 * dVar21) + *(float *)(lVar19 + 0x34);
  *(float *)(lVar19 + 0x38) =
       (float)((dVar11 * dVar6 - dVar10 * dVar5) - dVar12 * dVar21) + *(float *)(lVar19 + 0x38);
  return;
}



// FUNCTION 146dcd098 FUN_146dcd098 body=231 status=ok
// SIG undefined FUN_146dcd098(void)

void FUN_146dcd098(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  pfVar3 = (float *)*param_1;
  *pfVar3 = (float)*param_2 + *pfVar3;
  pfVar3[1] = (float)dVar2 + pfVar3[1];
  pfVar3[2] = (float)dVar1 + pfVar3[2];
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  pfVar3 = (float *)param_1[3];
  *pfVar3 = (float)*param_3 + *pfVar3;
  pfVar3[1] = (float)dVar2 + pfVar3[1];
  pfVar3[2] = (float)dVar1 + pfVar3[2];
  param_1[0x1e] = *param_2 + (double)param_1[0x1e];
  param_1[0x1f] = param_2[1] + (double)param_1[0x1f];
  param_1[0x20] = param_2[2] + (double)param_1[0x20];
  param_1[0x21] = *param_3 + (double)param_1[0x21];
  param_1[0x22] = param_3[1] + (double)param_1[0x22];
  param_1[0x23] = param_3[2] + (double)param_1[0x23];
  return;
}



// FUNCTION 146dcd180 FUN_146dcd180 body=107 status=ok
// SIG undefined FUN_146dcd180(void)

void FUN_146dcd180(longlong param_1,uint param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  dVar3 = *param_4;
  dVar4 = param_3[2];
  dVar5 = param_3[1];
  pfVar6 = *(float **)(param_1 + (ulonglong)param_2 * 0x18);
  *pfVar6 = (float)*param_3 + *pfVar6;
  pfVar6[1] = (float)dVar5 + pfVar6[1];
  pfVar6[2] = (float)dVar4 + pfVar6[2];
  pfVar6[4] = (float)dVar3 + pfVar6[4];
  pfVar6[5] = (float)dVar2 + pfVar6[5];
  pfVar6[6] = (float)dVar1 + pfVar6[6];
  FUN_146dc4678();
  return;
}



// FUNCTION 146dcd1ec FUN_146dcd1ec body=213 status=ok
// SIG undefined FUN_146dcd1ec(void)

void FUN_146dcd1ec(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  lVar6 = *param_1;
  *(float *)(lVar6 + 0x20) = (float)*param_2 + *(float *)(lVar6 + 0x20);
  *(float *)(lVar6 + 0x24) = (float)dVar5 + *(float *)(lVar6 + 0x24);
  *(float *)(lVar6 + 0x28) = (float)dVar4 + *(float *)(lVar6 + 0x28);
  *(float *)(lVar6 + 0x30) = (float)dVar3 + *(float *)(lVar6 + 0x30);
  *(float *)(lVar6 + 0x34) = (float)dVar2 + *(float *)(lVar6 + 0x34);
  *(float *)(lVar6 + 0x38) = (float)dVar1 + *(float *)(lVar6 + 0x38);
  dVar1 = param_5[2];
  dVar2 = param_5[1];
  dVar3 = *param_5;
  dVar4 = param_4[2];
  dVar5 = param_4[1];
  lVar6 = param_1[3];
  *(float *)(lVar6 + 0x20) = (float)*param_4 + *(float *)(lVar6 + 0x20);
  *(float *)(lVar6 + 0x24) = (float)dVar5 + *(float *)(lVar6 + 0x24);
  *(float *)(lVar6 + 0x28) = (float)dVar4 + *(float *)(lVar6 + 0x28);
  *(float *)(lVar6 + 0x30) = (float)dVar3 + *(float *)(lVar6 + 0x30);
  *(float *)(lVar6 + 0x34) = (float)dVar2 + *(float *)(lVar6 + 0x34);
  *(float *)(lVar6 + 0x38) = (float)dVar1 + *(float *)(lVar6 + 0x38);
  return;
}



// FUNCTION 146dcd2c2 FUN_146dcd2c2 body=1882 status=ok
// SIG undefined FUN_146dcd2c2(void)

void FUN_146dcd2c2(undefined8 *param_1,double param_2,double *param_3,double param_4,double *param_5
                  ,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
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
  undefined1 auStack_218 [32];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)param_1[3];
  dVar9 = ((double)param_1[0x20] + param_5[2]) - ((double)pfVar1[2] + *(double *)(pfVar1 + 0x48));
  dVar5 = ((double)param_1[0x1f] + param_5[1]) - ((double)pfVar1[1] + *(double *)(pfVar1 + 0x46));
  dVar11 = ((double)param_1[0x1e] + *param_5) - ((double)*pfVar1 + *(double *)(pfVar1 + 0x44));
  dVar7 = (double)param_1[0x23] - ((double)pfVar2[2] + *(double *)(pfVar2 + 0x48));
  local_140 = (double)param_1[0x22] - ((double)pfVar2[1] + *(double *)(pfVar2 + 0x46));
  local_138 = (double)param_1[0x21] - ((double)*pfVar2 + *(double *)(pfVar2 + 0x44));
  local_190 = *param_3;
  local_188 = param_3[1];
  dVar12 = dVar11 * local_188 - local_190 * dVar5;
  local_198 = param_3[2];
  dVar8 = dVar9 * local_190 - local_198 * dVar11;
  dVar4 = dVar5 * local_198 - local_188 * dVar9;
  dVar10 = local_138 * local_188 - local_190 * local_140;
  dVar6 = dVar7 * local_190 - local_198 * local_138;
  dVar3 = local_140 * local_198 - local_188 * dVar7;
  local_158 = (double)param_1[0x4c];
  local_160 = (double)param_1[0x48];
  local_168 = (double)param_1[0x50];
  local_170 = (double)param_1[0x4b];
  local_178 = (double)param_1[0x47];
  local_180 = (double)param_1[0x4f];
  local_1f0 = (double)param_1[0x4a];
  local_1e8 = (double)param_1[0x46];
  local_1f8 = (double)param_1[0x4e];
  local_1a0 = (double)param_1[0x5c];
  local_1b0 = (double)param_1[0x58];
  local_1a8 = (double)param_1[0x60];
  local_1b8 = (double)param_1[0x5b];
  local_1c8 = (double)param_1[0x57];
  local_1c0 = (double)param_1[0x5f];
  local_1d8 = (double)param_1[0x5a];
  local_1d0 = (double)param_1[0x56];
  local_1e0 = (double)param_1[0x5e];
  local_d8 = (double)param_1[0x44];
  dVar3 = (param_2 * (double)param_1[0x7d] * param_4) /
          ((local_168 * dVar12 + local_160 * dVar4 + dVar8 * local_158) * dVar12 +
           (local_1f8 * dVar12 + local_1e8 * dVar4 + dVar8 * local_1f0) * dVar4 +
           (local_180 * dVar12 + local_178 * dVar4 + dVar8 * local_170) * dVar8 + local_d8 +
           (double)param_1[0x45] +
          (local_1a8 * dVar10 + local_1b0 * dVar3 + dVar6 * local_1a0) * dVar10 +
          (local_1e0 * dVar10 + local_1d0 * dVar3 + dVar6 * local_1d8) * dVar3 +
          (local_1c0 * dVar10 + local_1c8 * dVar3 + dVar6 * local_1b8) * dVar6);
  dVar6 = local_190 * dVar3;
  local_e8 = local_d8 * dVar6;
  dVar4 = local_188 * dVar3;
  local_e0 = local_d8 * dVar4;
  dVar8 = local_198 * dVar3;
  local_d8 = local_d8 * dVar8;
  local_f0 = -(double)param_1[0x45];
  local_100 = dVar6 * local_f0;
  local_f8 = dVar4 * local_f0;
  local_f0 = local_f0 * dVar8;
  dVar12 = dVar11 * dVar4 - dVar6 * dVar5;
  dVar10 = dVar9 * dVar6 - dVar8 * dVar11;
  dVar5 = dVar5 * dVar8 - dVar4 * dVar9;
  local_108 = local_168 * dVar12 + local_160 * dVar5 + local_158 * dVar10;
  local_110 = local_180 * dVar12 + local_178 * dVar5 + local_170 * dVar10;
  local_118 = dVar12 * local_1f8 + dVar5 * local_1e8 + dVar10 * local_1f0;
  dVar9 = local_140 * dVar6 - local_138 * dVar4;
  dVar10 = local_138 * dVar8 - dVar7 * dVar6;
  dVar5 = dVar7 * dVar4 - local_140 * dVar8;
  local_120 = local_1a8 * dVar9 + local_1b0 * dVar5 + local_1a0 * dVar10;
  local_128 = local_1c0 * dVar9 + local_1c8 * dVar5 + local_1b8 * dVar10;
  local_130 = dVar9 * local_1e0 + dVar5 * local_1d0 + dVar10 * local_1d8;
  local_150 = param_2;
  local_148 = param_4;
  FUN_146dcd098(param_1);
  FUN_1429b6c80(param_1,&local_118,&local_130);
  param_1[0x66] = dVar6 + (double)param_1[0x66];
  param_1[0x67] = dVar4 + (double)param_1[0x67];
  param_1[0x68] = dVar8 + (double)param_1[0x68];
  if (-1 < (int)param_6) {
    param_1[(ulonglong)param_6 + 0x6e] = dVar3 + (double)param_1[(ulonglong)param_6 + 0x6e];
  }
  if ((local_d0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcda1e FUN_146dcda1e body=506 status=ok
// SIG undefined FUN_146dcda1e(void)

void FUN_146dcda1e(longlong param_1,int param_2,uint param_3,double param_4,double *param_5,
                  double param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  lVar5 = (ulonglong)param_3 * 0x80;
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar7 = *(double *)(param_1 + 0x280 + lVar5) * dVar3 +
          *(double *)(param_1 + 0x240 + lVar5) * dVar1 +
          *(double *)(param_1 + 0x260 + lVar5) * dVar2;
  dVar6 = *(double *)(param_1 + 0x278 + lVar5) * dVar3 +
          *(double *)(param_1 + 0x238 + lVar5) * dVar1 + *(double *)(param_1 + 600 + lVar5) * dVar2;
  dVar4 = *(double *)(param_1 + 0x270 + lVar5) * dVar3 +
          *(double *)(param_1 + 0x230 + lVar5) * dVar1 +
          *(double *)(param_1 + 0x250 + lVar5) * dVar2;
  dVar3 = (param_6 / (dVar3 * dVar7 + dVar1 * dVar4 + dVar2 * dVar6)) *
          param_4 * *(double *)(param_1 + 1000);
  lVar5 = *(longlong *)(param_1 + (ulonglong)param_3 * 0x18);
  *(float *)(lVar5 + 0x10) = *(float *)(lVar5 + 0x10) - (float)(dVar4 * dVar3);
  *(float *)(lVar5 + 0x14) = *(float *)(lVar5 + 0x14) - (float)(dVar6 * dVar3);
  *(float *)(lVar5 + 0x18) = *(float *)(lVar5 + 0x18) - (float)(dVar7 * dVar3);
  FUN_146dc4678(param_1,param_3);
  dVar1 = param_5[1];
  dVar2 = param_5[2];
  dVar4 = dVar3;
  if (param_2 != 0) {
    dVar4 = -dVar3;
  }
  *(double *)(param_1 + 0x348) = *param_5 * dVar4 + *(double *)(param_1 + 0x348);
  *(double *)(param_1 + 0x350) = dVar1 * dVar4 + *(double *)(param_1 + 0x350);
  *(double *)(param_1 + 0x358) = dVar2 * dVar4 + *(double *)(param_1 + 0x358);
  *(double *)(param_1 + 0x388 + (ulonglong)param_7 * 8) =
       dVar3 + *(double *)(param_1 + 0x388 + (ulonglong)param_7 * 8);
  return;
}



// FUNCTION 146dcdc18 FUN_146dcdc18 body=753 status=ok
// SIG undefined FUN_146dcdc18(void)

void FUN_146dcdc18(longlong param_1,double param_2,double *param_3,double param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  local_98 = *(double *)(param_1 + 0x280) * dVar3 +
             *(double *)(param_1 + 0x240) * dVar1 + *(double *)(param_1 + 0x260) * dVar2;
  local_a0 = *(double *)(param_1 + 0x278) * dVar3 +
             *(double *)(param_1 + 0x238) * dVar1 + *(double *)(param_1 + 600) * dVar2;
  local_a8 = *(double *)(param_1 + 0x270) * dVar3 +
             *(double *)(param_1 + 0x230) * dVar1 + *(double *)(param_1 + 0x250) * dVar2;
  local_b0 = *(double *)(param_1 + 0x300) * dVar3 +
             *(double *)(param_1 + 0x2c0) * dVar1 + *(double *)(param_1 + 0x2e0) * dVar2;
  local_b8 = *(double *)(param_1 + 0x2f8) * dVar3 +
             *(double *)(param_1 + 0x2b8) * dVar1 + *(double *)(param_1 + 0x2d8) * dVar2;
  dVar4 = *(double *)(param_1 + 0x2f0) * dVar3 +
          *(double *)(param_1 + 0x2b0) * dVar1 + *(double *)(param_1 + 0x2d0) * dVar2;
  dVar3 = (param_2 * *(double *)(param_1 + 1000) * param_4) /
          (dVar3 * local_b0 + dVar1 * dVar4 + dVar2 * local_b8 +
          dVar3 * local_98 + dVar1 * local_a8 + dVar2 * local_a0);
  local_98 = local_98 * dVar3;
  local_a0 = local_a0 * dVar3;
  local_a8 = local_a8 * dVar3;
  local_c0 = -dVar3;
  local_b0 = local_b0 * local_c0;
  local_b8 = local_b8 * local_c0;
  local_c0 = local_c0 * dVar4;
  FUN_1429b6c80();
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  *(double *)(param_1 + 0x348) = *param_3 * dVar3 + *(double *)(param_1 + 0x348);
  *(double *)(param_1 + 0x350) = dVar2 * dVar3 + *(double *)(param_1 + 0x350);
  *(double *)(param_1 + 0x358) = dVar1 * dVar3 + *(double *)(param_1 + 0x358);
  *(double *)(param_1 + 0x388 + (ulonglong)param_5 * 8) =
       dVar3 + *(double *)(param_1 + 0x388 + (ulonglong)param_5 * 8);
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcdf0a FUN_146dcdf0a body=117 status=ok
// SIG undefined FUN_146dcdf0a(void)

void FUN_146dcdf0a(longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(double *)(param_1 + 0x220) <= 0.0) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    if (0.0 < *(double *)(param_1 + 0x228)) {
      FUN_146dcdc18();
      return;
    }
    param_4 = param_4 ^ 0x8000000000000000;
    uVar1 = 1;
    uVar2 = 0;
  }
  FUN_146dcda1e(0,uVar1,uVar2,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 146dcdf80 FUN_146dcdf80 body=257 status=ok
// SIG undefined FUN_146dcdf80(void)

void FUN_146dcdf80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)param_7;
  if (*(double *)(param_1 + 0x220) <= 0.0) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    if (0.0 < *(double *)(param_1 + 0x228)) {
      FUN_1429b7988();
      return;
    }
    param_7 = param_7 ^ 0x8000000000000000;
    param_8 = param_8 ^ 0x8000000000000000;
    uVar1 = 1;
    uVar2 = 0;
  }
  FUN_1429b756e(uVar3,uVar1,uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10);
  return;
}



// FUNCTION 146dce082 FUN_146dce082 body=2013 status=ok
// SIG undefined FUN_146dce082(void)

void FUN_146dce082(longlong *param_1,double param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = *param_1;
  local_138 = ((double)param_1[0x20] + param_4[2]) - *(double *)(lVar2 + 0x120);
  dVar5 = ((double)param_1[0x1f] + param_4[1]) - *(double *)(lVar2 + 0x118);
  dVar6 = ((double)param_1[0x1e] + *param_4) - *(double *)(lVar2 + 0x110);
  lVar3 = param_1[3];
  local_118 = (double)param_1[0x23] - *(double *)(lVar3 + 0x120);
  local_128 = (double)param_1[0x22] - *(double *)(lVar3 + 0x118);
  local_130 = (double)param_1[0x21] - *(double *)(lVar3 + 0x110);
  local_1b8 = *param_3;
  dVar1 = param_3[1];
  local_1f0 = dVar6 * dVar1 - local_1b8 * dVar5;
  local_1c0 = param_3[2];
  dVar7 = local_138 * local_1b8 - local_1c0 * dVar6;
  local_1e8 = dVar5 * local_1c0 - dVar1 * local_138;
  local_1e0 = local_130 * dVar1 - local_1b8 * local_128;
  dVar9 = local_118 * local_1b8 - local_1c0 * local_130;
  dVar4 = local_128 * local_1c0 - dVar1 * local_118;
  local_140 = (double)param_1[0x4c];
  local_148 = (double)param_1[0x48];
  local_150 = (double)param_1[0x50];
  local_158 = (double)param_1[0x4b];
  local_160 = (double)param_1[0x47];
  local_168 = (double)param_1[0x4f];
  local_1d0 = (double)param_1[0x4a];
  local_1c8 = (double)param_1[0x46];
  local_1d8 = (double)param_1[0x4e];
  local_170 = (double)param_1[0x5c];
  local_180 = (double)param_1[0x58];
  local_178 = (double)param_1[0x60];
  local_188 = (double)param_1[0x5b];
  local_198 = (double)param_1[0x57];
  local_190 = (double)param_1[0x5f];
  local_1a8 = (double)param_1[0x5a];
  local_1a0 = (double)param_1[0x56];
  local_1b0 = (double)param_1[0x5e];
  local_b8 = (double)param_1[0x44];
  dVar4 = (((((((double)*(float *)(lVar3 + 0x30) * local_128 -
               local_130 * (double)*(float *)(lVar3 + 0x34)) + (double)*(float *)(lVar3 + 0x28)) -
             (((double)*(float *)(lVar2 + 0x30) * dVar5 - dVar6 * (double)*(float *)(lVar2 + 0x34))
             + (double)*(float *)(lVar2 + 0x28))) * local_1c0 +
            ((((double)*(float *)(lVar3 + 0x34) * local_118 -
              local_128 * (double)*(float *)(lVar3 + 0x38)) + (double)*(float *)(lVar3 + 0x20)) -
            (((double)*(float *)(lVar2 + 0x34) * local_138 -
             dVar5 * (double)*(float *)(lVar2 + 0x38)) + (double)*(float *)(lVar2 + 0x20))) *
            local_1b8 +
            ((((double)*(float *)(lVar3 + 0x38) * local_130 -
              local_118 * (double)*(float *)(lVar3 + 0x30)) + (double)*(float *)(lVar3 + 0x24)) -
            (((double)*(float *)(lVar2 + 0x38) * dVar6 -
             local_138 * (double)*(float *)(lVar2 + 0x30)) + (double)*(float *)(lVar2 + 0x24))) *
            dVar1) - param_5) * param_2) /
          ((local_150 * local_1f0 + local_148 * local_1e8 + dVar7 * local_140) * local_1f0 +
           (local_1d8 * local_1f0 + local_1c8 * local_1e8 + dVar7 * local_1d0) * local_1e8 +
           (local_168 * local_1f0 + local_160 * local_1e8 + dVar7 * local_158) * dVar7 + local_b8 +
           (double)param_1[0x45] +
          (local_178 * local_1e0 + local_180 * dVar4 + dVar9 * local_170) * local_1e0 +
          (local_1b0 * local_1e0 + local_1a0 * dVar4 + dVar9 * local_1a8) * dVar4 +
          (local_190 * local_1e0 + local_198 * dVar4 + dVar9 * local_188) * dVar9);
  dVar8 = local_1b8 * dVar4;
  dVar1 = dVar1 * dVar4;
  dVar4 = dVar4 * local_1c0;
  local_c8 = local_b8 * dVar8;
  local_c0 = local_b8 * dVar1;
  local_b8 = local_b8 * dVar4;
  local_d0 = -(double)param_1[0x45];
  local_e0 = dVar8 * local_d0;
  local_d8 = dVar1 * local_d0;
  local_d0 = local_d0 * dVar4;
  dVar7 = dVar6 * dVar1 - dVar8 * dVar5;
  dVar9 = local_138 * dVar8 - dVar4 * dVar6;
  dVar6 = dVar5 * dVar4 - dVar1 * local_138;
  local_e8 = local_150 * dVar7 + local_148 * dVar6 + local_140 * dVar9;
  local_f0 = local_168 * dVar7 + local_160 * dVar6 + local_158 * dVar9;
  local_f8 = dVar7 * local_1d8 + dVar6 * local_1c8 + dVar9 * local_1d0;
  dVar6 = local_128 * dVar8 - local_130 * dVar1;
  dVar7 = local_130 * dVar4 - dVar8 * local_118;
  dVar1 = dVar1 * local_118 - dVar4 * local_128;
  local_100 = local_178 * dVar6 + local_180 * dVar1 + local_170 * dVar7;
  local_108 = local_190 * dVar6 + local_198 * dVar1 + local_188 * dVar7;
  local_110 = dVar6 * local_1b0 + dVar1 * local_1a0 + dVar7 * local_1a8;
  local_1f8 = &local_110;
  local_120 = param_2;
  FUN_146dcd1ec();
  if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dce860 FUN_146dce860 body=751 status=ok
// SIG undefined FUN_146dce860(void)

void FUN_146dce860(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146deb498(param_1 + 0x1e,param_1 + 0x21,&local_e8,&local_f0);
  dVar1 = *(double *)(param_2 + 0x108);
  if (local_f0 <= dVar1) {
    dVar1 = (double)param_1[0x21] - (double)param_1[0x1e];
    dVar4 = (double)param_1[0x22] - (double)param_1[0x1f];
    dVar5 = (double)param_1[0x23] - (double)param_1[0x20];
  }
  else {
    dVar5 = dVar1 * local_d8;
    dVar4 = dVar1 * local_e0;
    dVar1 = dVar1 * local_e8;
  }
  lVar2 = *param_1;
  lVar3 = param_1[3];
  dVar5 = ((double)param_1[0x20] + dVar5) - *(double *)(lVar2 + 0x120);
  dVar4 = ((double)param_1[0x1f] + dVar4) - *(double *)(lVar2 + 0x118);
  dVar1 = ((double)param_1[0x1e] + dVar1) - *(double *)(lVar2 + 0x110);
  dVar7 = (double)param_1[0x23] - *(double *)(lVar3 + 0x120);
  dVar6 = (double)param_1[0x22] - *(double *)(lVar3 + 0x118);
  dVar8 = (double)param_1[0x21] - *(double *)(lVar3 + 0x110);
  *param_3 = ((((double)*(float *)(lVar3 + 0x34) * dVar7 - dVar6 * (double)*(float *)(lVar3 + 0x38))
              + (double)*(float *)(lVar3 + 0x20)) -
             (((double)*(float *)(lVar2 + 0x34) * dVar5 - dVar4 * (double)*(float *)(lVar2 + 0x38))
             + (double)*(float *)(lVar2 + 0x20))) * local_e8 +
             local_e0 *
             ((((double)*(float *)(lVar3 + 0x38) * dVar8 - dVar7 * (double)*(float *)(lVar3 + 0x30))
              + (double)*(float *)(lVar3 + 0x24)) -
             (((double)*(float *)(lVar2 + 0x38) * dVar1 - dVar5 * (double)*(float *)(lVar2 + 0x30))
             + (double)*(float *)(lVar2 + 0x24))) +
             ((((double)*(float *)(lVar3 + 0x30) * dVar6 - dVar8 * (double)*(float *)(lVar3 + 0x34))
              + (double)*(float *)(lVar3 + 0x28)) -
             (((double)*(float *)(lVar2 + 0x30) * dVar4 - dVar1 * (double)*(float *)(lVar2 + 0x34))
             + (double)*(float *)(lVar2 + 0x28))) * local_d8;
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dceb50 FUN_146dceb50 body=1638 status=ok
// SIG undefined FUN_146dceb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dceb50(undefined8 *param_1,undefined4 param_2,int param_3,int param_4,longlong param_5,
                  double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  double *local_150;
  double *local_148;
  double *local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = &local_110;
  local_148 = &local_100;
  local_150 = &local_108;
  local_158 = local_e8;
  FUN_146deb516(param_1 + 0x24,param_1 + 0x1e,param_1 + 0x21,param_2);
  dVar7 = (double)param_1[0x23] - (double)param_1[0x20];
  dVar5 = (double)param_1[0x22] - (double)param_1[0x1f];
  dVar9 = (double)param_1[0x21] - (double)param_1[0x1e];
  if (param_3 == 1) {
    uVar17 = SUB84(local_108,0);
    uVar18 = (undefined4)((ulonglong)local_108 >> 0x20);
    local_128 = local_e8._0_4_;
    uStack_124 = local_e8._4_4_;
    if (0.0 <= local_108) {
      uVar15 = local_e8._8_4_;
      uVar16 = local_e8._12_4_;
      uVar13 = (undefined4)local_d8;
      uVar14 = (undefined4)(local_d8 >> 0x20);
      uStack_130 = 0;
      uStack_12c = 0;
    }
    else {
      uVar3 = DAT_149931e80;
      uStack_130 = DAT_149931e80._8_4_;
      uStack_12c = DAT_149931e80._12_4_;
      local_108 = (double)((ulonglong)local_108 ^ uVar3);
      uVar17 = SUB84(local_108,0);
      uVar18 = (undefined4)((ulonglong)local_108 >> 0x20);
      local_d8 = local_d8 ^ uVar3;
      uVar13 = (undefined4)local_d8;
      uVar14 = (undefined4)(local_d8 >> 0x20);
      uVar15 = (undefined4)(local_e8._8_8_ ^ uVar3);
      uVar16 = (undefined4)((local_e8._8_8_ ^ uVar3) >> 0x20);
      uVar3 = local_e8._0_8_ ^ uVar3;
      local_128 = (undefined4)uVar3;
      uStack_124 = (undefined4)(uVar3 >> 0x20);
      local_e8._8_4_ = uVar15;
      local_e8._0_8_ = uVar3;
      local_e8._12_4_ = uVar16;
    }
    local_138 = (double)CONCAT44(uVar14,uVar13);
    dVar6 = (double)CONCAT44(uVar18,uVar17) - *(double *)(param_5 + 0x108);
    pfVar1 = (float *)*param_1;
    pfVar2 = (float *)param_1[3];
    dVar10 = ((double)param_1[0x20] + (dVar7 - dVar6 * (double)CONCAT44(uVar14,uVar13))) -
             ((double)pfVar1[2] + *(double *)(pfVar1 + 0x48));
    dVar8 = ((double)param_1[0x1f] + (dVar5 - (double)CONCAT44(uVar16,uVar15) * dVar6)) -
            ((double)pfVar1[1] + *(double *)(pfVar1 + 0x46));
    dVar4 = ((double)param_1[0x1e] + (dVar9 - (double)CONCAT44(uStack_124,local_128) * dVar6)) -
            ((double)*pfVar1 + *(double *)(pfVar1 + 0x44));
    dVar12 = (double)param_1[0x23] - ((double)pfVar2[2] + *(double *)(pfVar2 + 0x48));
    dVar11 = (double)param_1[0x22] - ((double)pfVar2[1] + *(double *)(pfVar2 + 0x46));
    dVar6 = (double)param_1[0x21] - ((double)*pfVar2 + *(double *)(pfVar2 + 0x44));
    *param_6 = ((((double)pfVar2[0xc] * dVar11 - dVar6 * (double)pfVar2[0xd]) + (double)pfVar2[10])
               - (((double)pfVar1[0xc] * dVar8 - dVar4 * (double)pfVar1[0xd]) + (double)pfVar1[10]))
               * local_138 +
               ((((double)pfVar2[0xd] * dVar12 - dVar11 * (double)pfVar2[0xe]) + (double)pfVar2[8])
               - (((double)pfVar1[0xd] * dVar10 - dVar8 * (double)pfVar1[0xe]) + (double)pfVar1[8]))
               * (double)CONCAT44(uStack_124,local_128) +
               ((((double)pfVar2[0xe] * dVar6 - dVar12 * (double)pfVar2[0xc]) + (double)pfVar2[9]) -
               (((double)pfVar1[0xe] * dVar4 - dVar10 * (double)pfVar1[0xc]) + (double)pfVar1[9])) *
               (double)CONCAT44(uVar16,uVar15);
    uStack_120 = uStack_130;
    uStack_11c = uStack_12c;
  }
  if (param_4 == 1) {
    local_110 = local_110 - *(double *)(param_5 + 0x108);
    if (local_110 <= 0.0) {
      local_110 = 0.0;
    }
    local_138 = local_100;
    pfVar1 = (float *)*param_1;
    pfVar2 = (float *)param_1[3];
    dVar8 = ((dVar7 - local_110 * local_f0) + (double)param_1[0x20]) -
            ((double)pfVar1[2] + *(double *)(pfVar1 + 0x48));
    dVar6 = ((dVar5 - local_f8 * local_110) + (double)param_1[0x1f]) -
            ((double)pfVar1[1] + *(double *)(pfVar1 + 0x46));
    dVar10 = ((dVar9 - local_100 * local_110) + (double)param_1[0x1e]) -
             ((double)*pfVar1 + *(double *)(pfVar1 + 0x44));
    dVar7 = (double)param_1[0x23] - ((double)pfVar2[2] + *(double *)(pfVar2 + 0x48));
    dVar5 = (double)param_1[0x22] - ((double)pfVar2[1] + *(double *)(pfVar2 + 0x46));
    dVar9 = (double)param_1[0x21] - ((double)*pfVar2 + *(double *)(pfVar2 + 0x44));
    param_6[1] = ((((double)pfVar2[0xc] * dVar5 - dVar9 * (double)pfVar2[0xd]) + (double)pfVar2[10])
                 - (((double)pfVar1[0xc] * dVar6 - dVar10 * (double)pfVar1[0xd]) +
                   (double)pfVar1[10])) * local_f0 +
                 ((((double)pfVar2[0xd] * dVar7 - dVar5 * (double)pfVar2[0xe]) + (double)pfVar2[8])
                 - (((double)pfVar1[0xd] * dVar8 - dVar6 * (double)pfVar1[0xe]) + (double)pfVar1[8])
                 ) * local_100 +
                 ((((double)pfVar2[0xe] * dVar9 - dVar7 * (double)pfVar2[0xc]) + (double)pfVar2[9])
                 - (((double)pfVar1[0xe] * dVar10 - dVar8 * (double)pfVar1[0xc]) + (double)pfVar1[9]
                   )) * local_f8;
  }
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcf1b8 FUN_146dcf1b8 body=835 status=ok
// SIG undefined FUN_146dcf1b8(void)

void FUN_146dcf1b8(longlong *param_1,undefined4 param_2,longlong param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  undefined1 auStack_128 [32];
  double *local_108;
  double *local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = &local_f0;
  local_108 = &local_e8;
  FUN_146deb6d2(param_1 + 0x24,param_1 + 0x1e,param_1 + 0x21,param_2);
  uVar9 = (uint)((ulonglong)local_f0 >> 0x20);
  if (local_f0 < 0.0) {
    uVar9 = uVar9 ^ 0x80000000;
    local_d8 = -local_d8;
    local_e0 = -local_e0;
    local_e8 = -local_e8;
  }
  dVar3 = (double)CONCAT44(uVar9,SUB84(local_f0,0)) - *(double *)(param_3 + 0x108);
  lVar1 = *param_1;
  lVar2 = param_1[3];
  dVar5 = ((((double)param_1[0x23] - (double)param_1[0x20]) - local_d8 * dVar3) +
          (double)param_1[0x20]) - *(double *)(lVar1 + 0x120);
  dVar4 = ((((double)param_1[0x22] - (double)param_1[0x1f]) - local_e0 * dVar3) +
          (double)param_1[0x1f]) - *(double *)(lVar1 + 0x118);
  dVar3 = ((((double)param_1[0x21] - (double)param_1[0x1e]) - dVar3 * local_e8) +
          (double)param_1[0x1e]) - *(double *)(lVar1 + 0x110);
  dVar7 = (double)param_1[0x23] - *(double *)(lVar2 + 0x120);
  dVar6 = (double)param_1[0x22] - *(double *)(lVar2 + 0x118);
  dVar8 = (double)param_1[0x21] - *(double *)(lVar2 + 0x110);
  *param_4 = ((((double)*(float *)(lVar2 + 0x30) * dVar6 - dVar8 * (double)*(float *)(lVar2 + 0x34))
              + (double)*(float *)(lVar2 + 0x28)) -
             (((double)*(float *)(lVar1 + 0x30) * dVar4 - dVar3 * (double)*(float *)(lVar1 + 0x34))
             + (double)*(float *)(lVar1 + 0x28))) * local_d8 +
             ((((double)*(float *)(lVar2 + 0x34) * dVar7 - dVar6 * (double)*(float *)(lVar2 + 0x38))
              + (double)*(float *)(lVar2 + 0x20)) -
             (((double)*(float *)(lVar1 + 0x34) * dVar5 - dVar4 * (double)*(float *)(lVar1 + 0x38))
             + (double)*(float *)(lVar1 + 0x20))) * local_e8 +
             ((((double)*(float *)(lVar2 + 0x38) * dVar8 - dVar7 * (double)*(float *)(lVar2 + 0x30))
              + (double)*(float *)(lVar2 + 0x24)) -
             (((double)*(float *)(lVar1 + 0x38) * dVar3 - dVar5 * (double)*(float *)(lVar1 + 0x30))
             + (double)*(float *)(lVar1 + 0x24))) * local_e0;
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dcf4fc FUN_146dcf4fc body=253 status=ok
// SIG undefined FUN_146dcf4fc(void)

void FUN_146dcf4fc(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146deb7c0(param_1 + 0x24,param_1 + 0x28,&local_58,&local_60);
  if (local_60 < 0.0) {
    local_48 = -local_48;
    local_50 = -local_50;
    local_58 = -local_58;
  }
  lVar1 = param_1[3];
  lVar2 = *param_1;
  *param_2 = ((double)*(float *)(lVar1 + 0x30) - (double)*(float *)(lVar2 + 0x30)) * local_58 +
             ((double)*(float *)(lVar1 + 0x34) - (double)*(float *)(lVar2 + 0x34)) * local_50 +
             ((double)*(float *)(lVar1 + 0x38) - (double)*(float *)(lVar2 + 0x38)) * local_48;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dcf5fa FUN_146dcf5fa body=644 status=ok
// SIG undefined FUN_146dcf5fa(void)

void FUN_146dcf5fa(longlong *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d8 [32];
  double *local_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = &local_a0;
  local_a0 = 0;
  local_b8 = &local_98;
  FUN_146debc06(param_1 + 0x24,param_1 + 0x28,*(undefined8 *)(param_2 + 0x128),
                *(undefined8 *)(param_2 + 0x130));
  dVar5 = local_88 * local_88 + local_98 * local_98 + local_90 * local_90;
  dVar11 = SQRT(dVar5);
  dVar8 = (double)((-(ulonglong)(dVar5 < 9.999999747378752e-05) >> 0x20 & 0x3ff00000) << 0x20 |
                  ~-(ulonglong)(dVar5 < 9.999999747378752e-05) & (ulonglong)(local_98 / dVar11));
  dVar9 = 0.0;
  dVar10 = 0.0;
  if (9.999999747378752e-05 <= dVar5) {
    dVar10 = local_88 / dVar11;
    dVar9 = local_90 / dVar11;
  }
  dVar5 = (double)param_1[0x26];
  dVar11 = (double)param_1[0x25];
  dVar1 = (double)param_1[0x24];
  dVar12 = dVar1 * dVar9 - dVar8 * dVar11;
  dVar6 = dVar5 * dVar8 - dVar10 * dVar1;
  dVar7 = dVar11 * dVar10 - dVar9 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar2 = (double)param_1[0x27];
  lVar3 = param_1[3];
  lVar4 = *param_1;
  *(double *)(param_3 + 0x10) =
       ((double)*(float *)(lVar3 + 0x30) - (double)*(float *)(lVar4 + 0x30)) *
       ((dVar11 * dVar12 - dVar6 * dVar5) + dVar2 * dVar7 + dVar8) +
       ((double)*(float *)(lVar3 + 0x34) - (double)*(float *)(lVar4 + 0x34)) *
       ((dVar5 * dVar7 - dVar12 * dVar1) + dVar2 * dVar6 + dVar9) +
       ((double)*(float *)(lVar3 + 0x38) - (double)*(float *)(lVar4 + 0x38)) *
       ((dVar1 * dVar6 - dVar7 * dVar11) + dVar2 * dVar12 + dVar10);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcf880 FUN_146dcf880 body=198 status=ok
// SIG undefined FUN_146dcf880(void)

void FUN_146dcf880(longlong *param_1,undefined8 *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  double *local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = local_48;
  local_58 = &local_40;
  FUN_146dec596(param_1 + 0x24,param_1 + 0x28,*param_2,param_3);
  lVar1 = param_1[3];
  lVar2 = *param_1;
  *(double *)(param_4 + (ulonglong)param_3 * 8) =
       ((double)*(float *)(lVar1 + 0x38) - (double)*(float *)(lVar2 + 0x38)) * local_30 +
       ((double)*(float *)(lVar1 + 0x30) - (double)*(float *)(lVar2 + 0x30)) * local_40 +
       ((double)*(float *)(lVar1 + 0x34) - (double)*(float *)(lVar2 + 0x34)) * local_38;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcf948 FUN_146dcf948 body=188 status=ok
// SIG undefined FUN_146dcf948(void)

void FUN_146dcf948(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_48 [8];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  FUN_146dec22c(param_1 + 0x24,param_1 + 0x28,param_2,&local_40);
  lVar1 = param_1[3];
  lVar2 = *param_1;
  *(double *)(param_3 + (ulonglong)param_2 * 8) =
       ((double)*(float *)(lVar1 + 0x38) - (double)*(float *)(lVar2 + 0x38)) * local_30 +
       ((double)*(float *)(lVar1 + 0x30) - (double)*(float *)(lVar2 + 0x30)) * local_40 +
       ((double)*(float *)(lVar1 + 0x34) - (double)*(float *)(lVar2 + 0x34)) * local_38;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dcfa05 FUN_146dcfa05 body=278 status=ok
// SIG undefined FUN_146dcfa05(void)

void FUN_146dcfa05(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[3] = 0;
    lVar3 = 0x80;
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined4 *)((longlong)param_1 + lVar3 + -0x40);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0x3ff00000;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x10);
      *puVar1 = 0x3ff0000000000000;
      puVar1[1] = 0x3ff0000000000000;
      *(undefined8 *)((longlong)param_1 + lVar3) = 0x3ff0000000000000;
      ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != 0x140);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    memset(param_1 + 0x4a,0,0x100);
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1 = param_1 + 0x1fa;
  }
  return;
}



// FUNCTION 146dcfb1c FUN_146dcfb1c body=150 status=ok
// SIG undefined FUN_146dcfb1c(void)

void FUN_146dcfb1c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xfd0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xfd0)) {
      uVar5 = uVar4 / 0xfd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xfd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146dcfbb4 FUN_146dcfbb4 body=62 status=ok
// SIG undefined FUN_146dcfbb4(void)

void FUN_146dcfbb4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146dcfbf2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xfd0,0x10);
  }
  return;
}



// FUNCTION 146dcfbf2 FUN_146dcfbf2 body=114 status=ok
// SIG undefined FUN_146dcfbf2(void)

ulonglong FUN_146dcfbf2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xfd0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146dcfc2b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xfd0,0x10);
      param_2 = param_2 / 0xfd0;
    }
  }
LAB_146dcfc2b:
  return param_2 & 0xffffffff;
}



// FUNCTION 146dcfc64 FUN_146dcfc64 body=112 status=ok
// SIG undefined FUN_146dcfc64(void)

void FUN_146dcfc64(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x4b0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x4b0)) {
      uVar2 = uVar1 / 0x4b0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x4b0,0x10);
  }
  return;
}



// FUNCTION 146dcfcd4 FUN_146dcfcd4 body=116 status=ok
// SIG undefined FUN_146dcfcd4(void)

void FUN_146dcfcd4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xfd0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xfd0)) {
      uVar2 = uVar1 / 0xfd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xfd0,0x10);
  }
  return;
}



// FUNCTION 146dcfd48 FUN_146dcfd48 body=278 status=ok
// SIG undefined FUN_146dcfd48(void)

void FUN_146dcfd48(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[3] = 0;
    lVar3 = 0x80;
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined4 *)((longlong)param_1 + lVar3 + -0x40);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0x3ff00000;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x10);
      *puVar1 = 0x3ff0000000000000;
      puVar1[1] = 0x3ff0000000000000;
      *(undefined8 *)((longlong)param_1 + lVar3) = 0x3ff0000000000000;
      ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != 0x140);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    memset(param_1 + 0x46,0,0x100);
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1 = param_1 + 0x96;
  }
  return;
}



// FUNCTION 146dcfe5e FUN_146dcfe5e body=146 status=ok
// SIG undefined FUN_146dcfe5e(void)

void FUN_146dcfe5e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x4b0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4b0)) {
      uVar5 = uVar4 / 0x4b0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x4b0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146dcfef2 FUN_146dcfef2 body=62 status=ok
// SIG undefined FUN_146dcfef2(void)

void FUN_146dcfef2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146dcff30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x4b0,0x10);
  }
  return;
}



// FUNCTION 146dcff30 FUN_146dcff30 body=110 status=ok
// SIG undefined FUN_146dcff30(void)

ulonglong FUN_146dcff30(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x4b0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146dcff69;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x4b0,0x10);
      param_2 = param_2 / 0x4b0;
    }
  }
LAB_146dcff69:
  return param_2 & 0xffffffff;
}



// FUNCTION 146dcff9e FUN_146dcff9e body=516 status=ok
// SIG undefined FUN_146dcff9e(void)

undefined1 (*) [16] FUN_146dcff9e(longlong *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  char cVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  double dVar3;
  double dVar5;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    cVar6 = *(char *)(*(longlong *)(*param_1 + 0x2c0) + 0xb + (longlong)(int)param_1[1] * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      dVar18 = *param_3;
      dVar20 = param_3[1];
      dVar21 = param_3[2];
      dVar23 = param_3[3];
      if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
        lVar14 = *(longlong *)(*param_1 + 0x3f8);
        lVar13 = (longlong)(int)param_1[1] * 0x20;
        pdVar1 = (double *)(lVar14 + 0x10 + lVar13);
        dVar16 = *pdVar1 * -1.0;
        dVar17 = pdVar1[1] * 1.0;
        dVar2 = *(double *)(lVar14 + lVar13);
        dVar3 = *(double *)(lVar14 + lVar13);
        dVar11 = dVar2 * dVar20;
        dVar12 = dVar3 * dVar18;
        pdVar1 = (double *)(lVar14 + 8 + lVar13);
        dVar4 = *pdVar1;
        dVar5 = *pdVar1;
        dVar8 = dVar18 * dVar4;
        dVar9 = dVar20 * dVar5;
        dVar19 = dVar18 * dVar16;
        dVar22 = dVar21 * dVar16;
        dVar18 = dVar20 * dVar16 * -1.0 +
                 ((dVar18 * dVar17 - dVar23 * dVar2 * 1.0) - dVar21 * dVar4);
        dVar20 = dVar19 * 1.0 + ((dVar20 * dVar17 - dVar21 * dVar3 * -1.0) - dVar23 * dVar5);
        dVar21 = dVar23 * dVar16 * 1.0 + dVar8 + (dVar17 * dVar21 - dVar11 * 1.0);
        dVar23 = dVar22 * -1.0 + dVar9 + (dVar17 * dVar23 - dVar12 * -1.0);
      }
      local_a8 = *(undefined4 *)(param_3 + 4);
      uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_a0 = *(undefined4 *)(param_3 + 5);
      uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_98 = param_3[6];
      FUN_146dd01a8(local_a8,&local_88);
      auVar7._8_4_ = SUB84(dVar20,0);
      auVar7._0_8_ = dVar18;
      auVar7._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      *param_2 = auVar7;
      auVar10._8_4_ = SUB84(dVar23,0);
      auVar10._0_8_ = dVar21;
      auVar10._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      param_2[1] = auVar10;
      *(undefined4 *)param_2[2] = local_88;
      *(undefined4 *)(param_2[2] + 4) = uStack_84;
      *(int *)(param_2[2] + 8) = (int)uStack_80;
      *(int *)(param_2[2] + 0xc) = (int)((ulonglong)uStack_80 >> 0x20);
      *(undefined8 *)param_2[3] = local_78;
      *(undefined8 *)(param_2[3] + 8) = 0;
      *(undefined8 *)param_2[4] = 0x3ff0000000000000;
      *(undefined8 *)(param_2[4] + 8) = 0x3ff0000000000000;
      *(undefined8 *)param_2[5] = 0x3ff0000000000000;
      *(undefined8 *)(param_2[5] + 8) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
    }
  }
  pauVar15 = param_2;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(double *)*pauVar15 = *param_3;
    param_3 = param_3 + 1;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd01a8 FUN_146dd01a8 body=415 status=ok
// SIG undefined FUN_146dd01a8(void)

void FUN_146dd01a8(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    lVar6 = *param_1;
    lVar10 = (longlong)(int)param_1[1];
    cVar5 = *(char *)(*(longlong *)(lVar6 + 0x2c0) + 0xb + lVar10 * 0x10);
    if ((cVar5 == '\x04') || (cVar5 == '\x01')) {
      lVar7 = *(longlong *)(lVar6 + 0x3e0);
      lVar6 = *(longlong *)(lVar6 + 0x3f8);
      lVar11 = lVar10 * 0x20;
      dVar14 = param_3[2] - *(double *)(lVar7 + 0x10 + lVar10 * 0x18);
      dVar13 = param_3[1] - *(double *)(lVar7 + 8 + lVar10 * 0x18);
      dVar8 = *param_3 - *(double *)(lVar7 + lVar10 * 0x18);
      dVar1 = *(double *)(lVar6 + 0x10 + lVar11);
      dVar2 = *(double *)(lVar6 + lVar11);
      dVar3 = *(double *)(lVar6 + 8 + lVar11);
      dVar12 = dVar13 * dVar1 - dVar3 * dVar14;
      dVar12 = dVar12 + dVar12;
      dVar4 = *(double *)(lVar6 + 0x18 + lVar11);
      dVar9 = dVar8 * dVar3 - dVar2 * dVar13;
      dVar9 = dVar9 + dVar9;
      dVar15 = dVar14 * dVar2 - dVar1 * dVar8;
      dVar15 = dVar15 + dVar15;
      *param_2 = (dVar15 * dVar1 - dVar9 * dVar3) + dVar12 * dVar4 + dVar8;
      param_2[1] = (dVar2 * dVar9 - dVar12 * dVar1) + dVar4 * dVar15 + dVar13;
      param_2[2] = (dVar3 * dVar12 - dVar2 * dVar15) + dVar4 * dVar9 + dVar14;
      return;
    }
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 146dd0348 FUN_146dd0348 body=485 status=ok
// SIG undefined FUN_146dd0348(void)

double * FUN_146dd0348(longlong param_1,double *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_68 [32];
  float local_48 [14];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x741) & 4) == 0) {
    bVar5 = *(byte *)(param_1 + 0xce1);
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    if ((bVar5 & 4) == 0) goto LAB_146dd043c;
LAB_146dd03de:
    local_48[0] = *(float *)(param_1 + 0xb40);
    local_48[4] = *(float *)(param_1 + 0xb44);
    local_48[8] = *(float *)(param_1 + 0xb48);
    local_48[1] = local_48[0];
    local_48[2] = local_48[0];
    local_48[3] = local_48[0];
    local_48[5] = local_48[4];
    local_48[6] = local_48[4];
    local_48[7] = local_48[4];
    local_48[9] = local_48[8];
    local_48[10] = local_48[8];
    local_48[0xb] = local_48[8];
    lVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0xa70 + lVar6);
      fVar9 = fVar9 + *pfVar1 * *(float *)((longlong)local_48 + lVar6);
      fVar10 = fVar10 + pfVar1[1] * *(float *)((longlong)local_48 + lVar6 + 4);
      fVar11 = fVar11 + pfVar1[2] * *(float *)((longlong)local_48 + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
  }
  else {
    local_48[0] = *(float *)(param_1 + 0x5a0);
    local_48[4] = *(float *)(param_1 + 0x5a4);
    local_48[8] = *(float *)(param_1 + 0x5a8);
    local_48[1] = local_48[0];
    local_48[2] = local_48[0];
    local_48[3] = local_48[0];
    local_48[5] = local_48[4];
    local_48[6] = local_48[4];
    local_48[7] = local_48[4];
    local_48[9] = local_48[8];
    local_48[10] = local_48[8];
    local_48[0xb] = local_48[8];
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    lVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0x4d0 + lVar6);
      fVar9 = fVar9 + *pfVar1 * *(float *)((longlong)local_48 + lVar6);
      fVar10 = fVar10 + pfVar1[1] * *(float *)((longlong)local_48 + lVar6 + 4);
      fVar11 = fVar11 + pfVar1[2] * *(float *)((longlong)local_48 + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
    bVar5 = *(byte *)(param_1 + 0xce1);
    if ((bVar5 & 4) != 0) goto LAB_146dd03de;
  }
  dVar3 = (double)fVar11;
  dVar4 = (double)fVar10;
  dVar8 = (double)fVar9;
  local_48[0] = local_48[3];
  local_48[1] = local_48[3];
  local_48[2] = local_48[3];
  local_48[4] = local_48[7];
  local_48[5] = local_48[7];
  local_48[6] = local_48[7];
  local_48[8] = local_48[0xb];
  local_48[9] = local_48[0xb];
  local_48[10] = local_48[0xb];
LAB_146dd043c:
  lVar6 = 0xb08;
  lVar7 = 0;
  do {
    if (((*(byte *)(param_1 + 0x741) & 4) == 0) &&
       ((*(byte *)(param_1 + 0x740) & (byte)(0x40201 >> ((char)lVar7 * '\b' & 0x1fU))) != 0)) {
      dVar2 = *(double *)(param_1 + 0x690 + lVar7 * 8);
      dVar8 = dVar8 + *(double *)(param_1 + -0x5b0 + lVar6) * dVar2;
      dVar4 = dVar4 + *(double *)(param_1 + -0x5a8 + lVar6) * dVar2;
      dVar3 = dVar3 + dVar2 * *(double *)(param_1 + -0x5a0 + lVar6);
    }
    if (((bVar5 & 4) == 0) &&
       ((*(byte *)(param_1 + 0xce0) & (byte)(0x40201 >> ((char)lVar7 * '\b' & 0x1fU))) != 0)) {
      dVar2 = *(double *)(param_1 + 0xc30 + lVar7 * 8);
      dVar8 = dVar8 + *(double *)(param_1 + -0x10 + lVar6) * dVar2;
      dVar4 = dVar4 + *(double *)(param_1 + -8 + lVar6) * dVar2;
      dVar3 = dVar3 + dVar2 * *(double *)(param_1 + lVar6);
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 0x18;
  } while (lVar7 != 3);
  *param_2 = dVar8;
  param_2[1] = dVar4;
  param_2[2] = dVar3;
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146dd052e FUN_146dd052e body=496 status=ok
// SIG undefined FUN_146dd052e(void)

double * FUN_146dd052e(longlong param_1,double *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_68 [32];
  float local_48 [14];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0xa11) & 4) == 0) {
    bVar5 = *(byte *)(param_1 + 0xfb1);
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    if ((bVar5 & 4) == 0) goto LAB_146dd0622;
LAB_146dd05c4:
    local_48[0] = *(float *)(param_1 + 0xe10);
    local_48[4] = *(float *)(param_1 + 0xe14);
    local_48[8] = *(float *)(param_1 + 0xe18);
    local_48[1] = local_48[0];
    local_48[2] = local_48[0];
    local_48[3] = local_48[0];
    local_48[5] = local_48[4];
    local_48[6] = local_48[4];
    local_48[7] = local_48[4];
    local_48[9] = local_48[8];
    local_48[10] = local_48[8];
    local_48[0xb] = local_48[8];
    lVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0xd40 + lVar6);
      fVar9 = fVar9 + *pfVar1 * *(float *)((longlong)local_48 + lVar6);
      fVar10 = fVar10 + pfVar1[1] * *(float *)((longlong)local_48 + lVar6 + 4);
      fVar11 = fVar11 + pfVar1[2] * *(float *)((longlong)local_48 + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
  }
  else {
    local_48[0] = *(float *)(param_1 + 0x870);
    local_48[4] = *(float *)(param_1 + 0x874);
    local_48[8] = *(float *)(param_1 + 0x878);
    local_48[1] = local_48[0];
    local_48[2] = local_48[0];
    local_48[3] = local_48[0];
    local_48[5] = local_48[4];
    local_48[6] = local_48[4];
    local_48[7] = local_48[4];
    local_48[9] = local_48[8];
    local_48[10] = local_48[8];
    local_48[0xb] = local_48[8];
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    lVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + 0x7a0 + lVar6);
      fVar9 = fVar9 + *pfVar1 * *(float *)((longlong)local_48 + lVar6);
      fVar10 = fVar10 + pfVar1[1] * *(float *)((longlong)local_48 + lVar6 + 4);
      fVar11 = fVar11 + pfVar1[2] * *(float *)((longlong)local_48 + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x30);
    bVar5 = *(byte *)(param_1 + 0xfb1);
    if ((bVar5 & 4) != 0) goto LAB_146dd05c4;
  }
  dVar3 = (double)fVar11;
  dVar4 = (double)fVar10;
  dVar8 = (double)fVar9;
  local_48[0] = local_48[3];
  local_48[1] = local_48[3];
  local_48[2] = local_48[3];
  local_48[4] = local_48[7];
  local_48[5] = local_48[7];
  local_48[6] = local_48[7];
  local_48[8] = local_48[0xb];
  local_48[9] = local_48[0xb];
  local_48[10] = local_48[0xb];
LAB_146dd0622:
  lVar6 = -9;
  lVar7 = 0;
  do {
    if (((*(byte *)(param_1 + 0xa11) & 4) == 0) &&
       ((*(byte *)(param_1 + 0xa10) & (byte)(0x40201 >> ((char)lVar7 * '\b' & 0x1fU))) != 0)) {
      dVar2 = *(double *)(param_1 + 0x960 + lVar7 * 8);
      dVar8 = dVar8 + *(double *)(param_1 + 0x870 + lVar6 * 8) * dVar2;
      dVar4 = dVar4 + *(double *)(param_1 + 0x878 + lVar6 * 8) * dVar2;
      dVar3 = dVar3 + dVar2 * *(double *)(param_1 + 0x880 + lVar6 * 8);
    }
    if (((bVar5 & 4) == 0) &&
       ((*(byte *)(param_1 + 0xfb0) & (byte)(0x40201 >> ((char)lVar7 * '\b' & 0x1fU))) != 0)) {
      dVar2 = *(double *)(param_1 + 0xf00 + lVar7 * 8);
      dVar8 = dVar8 + *(double *)(param_1 + 0xe10 + lVar6 * 8) * dVar2;
      dVar4 = dVar4 + *(double *)(param_1 + 0xe18 + lVar6 * 8) * dVar2;
      dVar3 = dVar3 + dVar2 * *(double *)(param_1 + 0xe20 + lVar6 * 8);
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 3;
  } while (lVar7 != 3);
  *param_2 = dVar8;
  param_2[1] = dVar4;
  param_2[2] = dVar3;
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146dd0720 FUN_146dd0720 body=15 status=ok
// SIG undefined FUN_146dd0720(void)

undefined8 FUN_146dd0720(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)param_2 * 8);
}



// FUNCTION 146dd0730 FUN_146dd0730 body=2590 status=ok
// SIG undefined FUN_146dd0730(void)

void FUN_146dd0730(longlong param_1,double param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double *pdVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_168 [40];
  int local_140;
  int local_13c;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  int local_118 [4];
  int local_108 [4];
  undefined8 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_c8 = *(int *)(param_1 + 0x50);
  local_c4 = *(int *)(param_1 + 0x54);
  local_c0 = *(int *)(param_1 + 0x58);
  FUN_1448c4dd6(&local_b8,local_c4 * local_c8 * local_c0,1);
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_e8 = *(int *)(param_1 + 0x50);
  local_e4 = *(int *)(param_1 + 0x54);
  local_e0 = *(int *)(param_1 + 0x58);
  FUN_1448c4dd6(&local_d8,local_e4 * local_e8 * local_e0,
                CONCAT71((uint7)(uint3)((uint)local_e0 >> 8),1));
  if ((longlong)(int)uStack_b0 != 0) {
    memset(local_b8,0,(longlong)(int)uStack_b0);
  }
  if ((longlong)(int)uStack_d0 != 0) {
    memset(local_d8,0,(longlong)(int)uStack_d0);
  }
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  lVar10 = param_3[1];
  if ((longlong)(int)lVar10 != 0) {
    local_138 = param_1 + 0x50;
    lVar20 = *param_3;
    lVar15 = lVar20 + 8;
    lVar23 = 0;
    do {
      uVar7 = uStack_f0;
      *(undefined1 *)
       ((longlong)local_b8 +
       (longlong)local_c0 *
       ((longlong)local_c4 * (longlong)*(int *)(lVar20 + lVar23) +
       (longlong)*(int *)(lVar20 + 4 + lVar23)) + (longlong)*(int *)(lVar15 + lVar23)) = 1;
      iVar11 = *(int *)(lVar15 + lVar23);
      iVar12 = *(int *)(lVar20 + 4 + lVar23);
      iVar17 = *(int *)(lVar20 + lVar23);
      iVar18 = *(int *)(param_1 + 0x7c);
      iVar14 = *(int *)(param_1 + 0x80);
      lVar4 = *(longlong *)(param_1 + 0x88);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar11);
      local_a8 = *(undefined8 *)(lVar20 + lVar23);
      lVar13 = (longlong)(int)uStack_f0;
      uVar9 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
      if (uStack_f0._4_4_ < uVar9) {
        FUN_146ddc7fc(&local_f8,uVar7 & 0xffffffff);
      }
      piVar1 = (int *)(lVar15 + lVar23);
      local_f8[lVar13 * 3] =
           ((longlong)iVar14 * ((longlong)iVar18 * (longlong)iVar17 + (longlong)iVar12) +
           (longlong)iVar11) * 8 + lVar4;
      *(int *)(local_f8 + lVar13 * 3 + 2) = (int)uStack_a0;
      local_f8[lVar13 * 3 + 1] = local_a8;
      *(undefined1 *)
       ((longlong)local_d8 +
       (longlong)local_e0 * ((longlong)local_e4 * (longlong)piVar1[-2] + (longlong)piVar1[-1]) +
       (longlong)*piVar1) = 1;
      lVar23 = lVar23 + 0xc;
    } while ((longlong)(int)lVar10 * 0xc != lVar23);
    if ((int)uStack_f0 != 0) {
      iVar11 = ((int)uStack_f0 - ((int)uStack_f0 + -2 >> 0x1f)) + -2 >> 1;
      iVar12 = iVar11;
joined_r0x000146dd098f:
      do {
        iVar17 = iVar11 * 2 + 1;
        if (iVar17 < (int)uStack_f0) {
          iVar18 = iVar11 * 2 + 2;
          if ((iVar18 < (int)uStack_f0) &&
             (ABS(*(double *)local_f8[(longlong)iVar18 * 3]) <=
              ABS(*(double *)local_f8[(longlong)iVar17 * 3]))) {
            iVar17 = iVar18;
          }
          if (ABS(*(double *)local_f8[(longlong)iVar17 * 3]) <
              ABS(*(double *)local_f8[(longlong)iVar11 * 3])) {
            puVar2 = local_f8 + (longlong)iVar11 * 3;
            puVar3 = local_f8 + (longlong)iVar17 * 3;
            local_98 = puVar2[2];
            local_a8 = *puVar2;
            uStack_a0 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar6 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar3[2] = local_98;
            *puVar3 = local_a8;
            puVar3[1] = uStack_a0;
            iVar11 = iVar17;
            goto joined_r0x000146dd098f;
          }
        }
        bVar24 = iVar12 != 0;
        iVar11 = iVar12 + -1;
        local_130 = param_1;
        iVar12 = iVar11;
      } while (bVar24);
      do {
        pdVar5 = (double *)*local_f8;
        local_140 = *(int *)(local_f8 + 1);
        local_13c = *(int *)((longlong)local_f8 + 0xc);
        iVar11 = *(int *)(local_f8 + 2);
        iVar12 = 0;
        iVar17 = (int)uStack_f0 + -1;
        if (iVar17 != 0) {
          if (0 < iVar17) {
            iVar17 = 1;
          }
          memmove(local_f8,local_f8 + (longlong)((int)uStack_f0 - iVar17) * 3,
                  (longlong)iVar17 * 0x18);
          iVar12 = (int)uStack_f0 + -1;
        }
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar12);
        FUN_146ddc890(&local_f8);
        if (1 < (int)uStack_f0) {
          iVar12 = 0;
          iVar18 = 1;
          iVar17 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar14 = iVar18;
            if ((iVar12 < (int)uStack_f0) &&
               (ABS(*(double *)local_f8[(longlong)iVar12 * 3]) <=
                ABS(*(double *)local_f8[(longlong)iVar18 * 3]))) {
              iVar14 = iVar12;
            }
            if (ABS(*(double *)local_f8[(longlong)iVar17 * 3]) <=
                ABS(*(double *)local_f8[(longlong)iVar14 * 3])) break;
            puVar2 = local_f8 + (longlong)iVar17 * 3;
            puVar3 = local_f8 + (longlong)iVar14 * 3;
            local_98 = puVar2[2];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar8 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar8;
            puVar3[2] = local_98;
            local_a8._0_4_ = (int)uVar6;
            local_a8._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
            uStack_a0._0_4_ = (int)uVar7;
            uStack_a0._4_4_ = (undefined4)(uVar7 >> 0x20);
            *(int *)puVar3 = (int)local_a8;
            *(int *)((longlong)puVar3 + 4) = local_a8._4_4_;
            *(int *)(puVar3 + 1) = (int)uStack_a0;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_a0._4_4_;
            iVar12 = iVar14 * 2;
            iVar18 = iVar14 * 2 + 1;
            iVar17 = iVar14;
            local_a8 = uVar6;
            uStack_a0 = uVar7;
          } while (iVar18 < (int)uStack_f0);
        }
        if (((param_2 != 0.0) || (NAN(param_2))) && (param_2 < ABS(*pdVar5))) break;
        *(undefined1 *)
         ((longlong)local_b8 + (longlong)((local_c4 * local_140 + local_13c) * local_c0 + iVar11)) =
             1;
        *(undefined1 *)
         ((longlong)local_d8 + (longlong)((local_e4 * local_140 + local_13c) * local_e0 + iVar11)) =
             0;
        lVar20 = 0;
        lVar10 = local_138;
        iVar12 = local_140;
        iVar17 = local_13c;
        do {
          local_a8 = 0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          *(undefined4 *)((longlong)&local_a8 + lVar20) = 1;
          iVar19 = (int)local_a8 + iVar12;
          iVar14 = local_a8._4_4_ + iVar17;
          iVar22 = (int)uStack_a0 + iVar11;
          local_108[0] = iVar19;
          local_108[1] = iVar14;
          local_a8 = 0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          *(undefined4 *)((longlong)&local_a8 + lVar20) = 1;
          iVar16 = iVar12 - (int)local_a8;
          local_108[2] = iVar22;
          iVar21 = iVar17 - local_a8._4_4_;
          iVar18 = iVar11 - (int)uStack_a0;
          local_118[0] = iVar16;
          local_118[1] = iVar21;
          local_118[2] = iVar18;
          if ((-1 < *(int *)((longlong)local_118 + lVar20)) &&
             (*(char *)((longlong)local_b8 +
                       (longlong)((local_c4 * iVar16 + iVar21) * local_c0 + iVar18)) == '\0')) {
            uVar6 = FUN_146dd3de2(local_130,&local_c8,local_118);
            *(undefined8 *)
             (*(longlong *)(local_130 + 0x88) +
             (longlong)
             ((*(int *)(local_130 + 0x7c) * iVar16 + iVar21) * *(int *)(local_130 + 0x80) + iVar18)
             * 8) = uVar6;
            lVar10 = local_138;
            iVar12 = local_140;
            iVar17 = local_13c;
            if (*(char *)((longlong)local_d8 +
                         (longlong)((local_e4 * iVar16 + iVar21) * local_e0 + iVar18)) == '\0') {
              lVar15 = (longlong)
                       ((*(int *)(local_130 + 0x7c) * iVar16 + iVar21) * *(int *)(local_130 + 0x80)
                       + iVar18) * 8 + *(longlong *)(local_130 + 0x88);
              lVar10 = (longlong)(int)uStack_f0;
              uVar9 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
              if (uStack_f0._4_4_ < uVar9) {
                local_128 = lVar10;
                local_120 = lVar15;
                FUN_146ddc7fc(&local_f8,lVar10);
                lVar10 = local_128;
                lVar15 = local_120;
              }
              local_f8[lVar10 * 3] = lVar15;
              local_f8[lVar10 * 3 + 1] = CONCAT44(local_118[1],local_118[0]);
              *(int *)(local_f8 + lVar10 * 3 + 2) = local_118[2];
              *(undefined1 *)
               ((longlong)local_d8 + (longlong)((iVar16 * local_e4 + iVar21) * local_e0 + iVar18)) =
                   1;
              lVar10 = local_138;
              iVar12 = local_140;
              iVar17 = local_13c;
            }
          }
          lVar15 = local_130;
          if ((*(int *)((longlong)local_108 + lVar20) < *(int *)(lVar10 + lVar20)) &&
             (*(char *)((longlong)local_b8 +
                       (longlong)((local_c4 * iVar19 + iVar14) * local_c0 + iVar22)) == '\0')) {
            uVar6 = FUN_146dd3de2(local_130,&local_c8,local_108);
            uVar7 = uStack_f0;
            *(undefined8 *)
             (*(longlong *)(lVar15 + 0x88) +
             (longlong)
             ((*(int *)(lVar15 + 0x7c) * iVar19 + iVar14) * *(int *)(lVar15 + 0x80) + iVar22) * 8) =
                 uVar6;
            lVar10 = local_138;
            iVar12 = local_140;
            iVar17 = local_13c;
            if (*(char *)((longlong)local_d8 +
                         (longlong)((local_e4 * iVar19 + iVar14) * local_e0 + iVar22)) == '\0') {
              iVar12 = *(int *)(local_130 + 0x7c);
              iVar17 = *(int *)(local_130 + 0x80);
              lVar10 = *(longlong *)(local_130 + 0x88);
              lVar15 = (longlong)(int)uStack_f0;
              uVar9 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
              if (uStack_f0._4_4_ < uVar9) {
                FUN_146ddc7fc(&local_f8,uVar7 & 0xffffffff);
              }
              local_f8[lVar15 * 3] =
                   (longlong)((iVar12 * iVar19 + iVar14) * iVar17 + iVar22) * 8 + lVar10;
              local_f8[lVar15 * 3 + 1] = CONCAT44(local_108[1],local_108[0]);
              *(int *)(local_f8 + lVar15 * 3 + 2) = local_108[2];
              *(undefined1 *)
               ((longlong)local_d8 + (longlong)((iVar19 * local_e4 + iVar14) * local_e0 + iVar22)) =
                   1;
              lVar10 = local_138;
              iVar12 = local_140;
              iVar17 = local_13c;
            }
          }
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0xc);
        if ((int)uStack_f0 == 0) break;
        iVar11 = ((int)uStack_f0 - ((int)uStack_f0 + -2 >> 0x1f)) + -2 >> 1;
        iVar12 = iVar11;
joined_r0x000146dd0f8b:
        do {
          iVar17 = iVar11 * 2 + 1;
          if (iVar17 < (int)uStack_f0) {
            iVar18 = iVar11 * 2 + 2;
            if ((iVar18 < (int)uStack_f0) &&
               (ABS(*(double *)local_f8[(longlong)iVar18 * 3]) <=
                ABS(*(double *)local_f8[(longlong)iVar17 * 3]))) {
              iVar17 = iVar18;
            }
            if (ABS(*(double *)local_f8[(longlong)iVar17 * 3]) <
                ABS(*(double *)local_f8[(longlong)iVar11 * 3])) {
              puVar2 = local_f8 + (longlong)iVar11 * 3;
              puVar3 = local_f8 + (longlong)iVar17 * 3;
              local_98 = puVar2[2];
              local_a8 = *puVar2;
              uStack_a0 = puVar2[1];
              puVar2[2] = puVar3[2];
              uVar6 = puVar3[1];
              *puVar2 = *puVar3;
              puVar2[1] = uVar6;
              puVar3[2] = local_98;
              *puVar3 = local_a8;
              puVar3[1] = uStack_a0;
              iVar11 = iVar17;
              goto joined_r0x000146dd0f8b;
            }
          }
          bVar24 = iVar12 != 0;
          iVar11 = iVar12 + -1;
          iVar12 = iVar11;
        } while (bVar24);
      } while( true );
    }
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dd1150 FUN_146dd1150 body=1243 status=ok
// SIG undefined FUN_146dd1150(void)

void FUN_146dd1150(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar15 = *(int *)(param_1 + 0x50);
  if (0 < iVar15) {
    iVar14 = *(int *)(param_1 + 0x54);
    iVar18 = 0;
    do {
      if (0 < iVar14) {
        local_188 = (double)iVar18;
        iVar15 = *(int *)(param_1 + 0x58);
        iVar19 = 0;
        do {
          if (0 < iVar15) {
            lVar17 = 0;
            do {
              dVar2 = *(double *)(param_1 + 0x60);
              dVar3 = *(double *)(param_1 + 0x68);
              dVar4 = *(double *)(param_1 + 0x70);
              dVar9 = dVar4 * 0.5 + (double)(int)lVar17 * dVar4 + *(double *)(param_1 + 0x30);
              dVar10 = dVar3 * 0.5 + dVar3 * (double)iVar19 + *(double *)(param_1 + 0x28);
              dVar13 = dVar2 * 0.5 + dVar2 * local_188 + *(double *)(param_1 + 0x20);
              dVar20 = dVar4 * 0.0;
              local_f8 = dVar4 + dVar9;
              local_100 = dVar20 + dVar10;
              local_108 = dVar20 + dVar13;
              dVar6 = (double)FUN_146dd48fc(param_1,&local_108);
              local_110 = dVar9 - dVar4;
              local_118 = dVar10 - dVar20;
              local_120 = dVar13 - dVar20;
              dVar20 = (double)FUN_146dd48fc(param_1,&local_120);
              dVar11 = dVar3 * 0.0;
              local_128 = dVar11 + dVar9;
              local_130 = dVar3 + dVar10;
              local_138 = dVar11 + dVar13;
              dVar7 = (double)FUN_146dd48fc(param_1,&local_138);
              local_140 = dVar9 - dVar11;
              local_148 = dVar10 - dVar3;
              local_150 = dVar13 - dVar11;
              dVar11 = (double)FUN_146dd48fc(param_1,&local_150);
              dVar12 = dVar2 * 0.0;
              local_158 = dVar12 + dVar9;
              local_160 = dVar12 + dVar10;
              local_168 = dVar2 + dVar13;
              dVar8 = (double)FUN_146dd48fc(param_1,&local_168);
              local_170 = dVar9 - dVar12;
              local_178 = dVar10 - dVar12;
              local_180 = dVar13 - dVar2;
              dVar9 = (double)FUN_146dd48fc(param_1,&local_180);
              lVar5 = *(longlong *)(param_1 + 0xa8);
              lVar16 = (longlong)(*(int *)(param_1 + 0x9c) * iVar18 + iVar19) *
                       (longlong)*(int *)(param_1 + 0xa0) + lVar17;
              *(double *)(lVar5 + lVar16 * 0x18) = (dVar8 - dVar9) / (dVar2 + dVar2);
              *(double *)(lVar5 + 8 + lVar16 * 0x18) = (dVar7 - dVar11) / (dVar3 + dVar3);
              *(double *)(lVar5 + 0x10 + lVar16 * 0x18) = (dVar6 - dVar20) / (dVar4 + dVar4);
              pdVar1 = (double *)
                       (*(longlong *)(param_1 + 0xa8) +
                       ((longlong)(*(int *)(param_1 + 0x9c) * iVar18 + iVar19) *
                        (longlong)*(int *)(param_1 + 0xa0) + lVar17) * 0x18);
              dVar2 = *pdVar1;
              dVar3 = pdVar1[1];
              dVar4 = pdVar1[2];
              dVar20 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
              if (dVar20 <= 9.99999993922529e-09) {
                *pdVar1 = 0.0;
                pdVar1[1] = 0.0;
                pdVar1[2] = 0.0;
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0xa8) +
                 ((longlong)(*(int *)(param_1 + 0x9c) * iVar18 + iVar19) *
                  (longlong)*(int *)(param_1 + 0xa0) + lVar17) * 0x18) = 0x3ff0000000000000;
              }
              else {
                dVar20 = 1.0 / dVar20;
                *pdVar1 = dVar2 * dVar20;
                pdVar1[1] = dVar3 * dVar20;
                pdVar1[2] = dVar4 * dVar20;
              }
              iVar15 = *(int *)(param_1 + 0x58);
              lVar17 = lVar17 + 1;
            } while ((int)lVar17 < iVar15);
            iVar14 = *(int *)(param_1 + 0x54);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar14);
        iVar15 = *(int *)(param_1 + 0x50);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar15);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd162c FUN_146dd162c body=1431 status=ok
// SIG undefined FUN_146dd162c(void)

void FUN_146dd162c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
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
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    iVar12 = *(int *)(param_1 + 0x58);
    iVar28 = *(int *)(param_1 + 0x54) * iVar12;
    iVar27 = *(int *)(param_1 + 0x50) * iVar28;
    piVar26 = (int *)*param_2;
    piVar1 = piVar26 + (longlong)*(int *)(param_2 + 1) * 3;
    lVar13 = *(longlong *)(param_1 + 0x88);
    bVar17 = true;
    iVar18 = 1;
    do {
      lVar36 = (longlong)((*piVar26 * *(int *)(param_1 + 0x54) + piVar26[1]) * iVar12) +
               (longlong)piVar26[2];
      dVar2 = *(double *)(lVar13 + lVar36 * 8);
      if (dVar2 <= 0.0) {
        iVar22 = (int)lVar36;
        iVar33 = iVar22 + iVar28;
        iVar19 = iVar22;
        if (iVar33 < iVar27) {
          iVar19 = iVar33;
        }
        iVar34 = iVar22 - iVar28;
        iVar35 = iVar34;
        if (iVar34 < 0) {
          iVar35 = iVar22;
        }
        dVar3 = *(double *)(lVar13 + (longlong)iVar19 * 8);
        dVar4 = *(double *)(lVar13 + (longlong)iVar35 * 8);
        dVar5 = *(double *)(param_1 + 0x60);
        dVar6 = *(double *)(param_1 + 0x68);
        dVar14 = (dVar3 - dVar4) / (dVar5 + dVar5);
        iVar35 = iVar22 + iVar12;
        iVar19 = iVar22;
        if (iVar35 < iVar27) {
          iVar19 = iVar35;
        }
        dVar7 = *(double *)(lVar13 + (longlong)iVar19 * 8);
        iVar20 = iVar22 - iVar12;
        iVar19 = iVar20;
        if (iVar20 < 0) {
          iVar19 = iVar22;
        }
        dVar8 = *(double *)(lVar13 + (longlong)iVar19 * 8);
        iVar19 = iVar22 + 1;
        if (iVar27 <= iVar22 + 1) {
          iVar19 = iVar22;
        }
        dVar15 = (dVar7 - dVar8) / (dVar6 + dVar6);
        dVar9 = *(double *)(lVar13 + (longlong)iVar19 * 8);
        dVar10 = *(double *)(lVar13 + (longlong)(int)(iVar22 - (uint)(0 < iVar22)) * 8);
        dVar11 = *(double *)(param_1 + 0x70);
        dVar16 = (dVar9 - dVar10) / (dVar11 + dVar11);
        dVar37 = dVar15 * dVar15;
        dVar38 = dVar14 * dVar14;
        dVar40 = dVar16 * dVar16;
        dVar39 = SQRT(dVar38 + dVar37 + dVar40);
        if (9.99999993922529e-09 < dVar39) {
          iVar19 = iVar35 + -1;
          if (iVar27 < iVar35) {
            iVar19 = iVar22;
          }
          if (iVar35 < 1) {
            iVar19 = iVar22;
          }
          iVar23 = iVar20 + 1;
          if (iVar27 <= iVar20 + 1) {
            iVar23 = iVar22;
          }
          if (iVar20 < -1) {
            iVar23 = iVar22;
          }
          iVar24 = iVar20 + -1;
          if (iVar20 < 1) {
            iVar24 = iVar22;
          }
          iVar20 = iVar35 + 1;
          if (iVar27 <= iVar35 + 1) {
            iVar20 = iVar22;
          }
          iVar35 = iVar33 + -1;
          if (iVar27 < iVar33) {
            iVar35 = iVar22;
          }
          if (iVar33 < 1) {
            iVar35 = iVar22;
          }
          iVar29 = iVar34 + 1;
          if (iVar27 <= iVar34 + 1) {
            iVar29 = iVar22;
          }
          if (iVar34 < -1) {
            iVar29 = iVar22;
          }
          iVar25 = iVar34 + -1;
          if (iVar34 < 1) {
            iVar25 = iVar22;
          }
          iVar32 = iVar33 + 1;
          if (iVar27 <= iVar33 + 1) {
            iVar32 = iVar22;
          }
          iVar31 = iVar33 - iVar12;
          iVar30 = iVar22;
          if (iVar31 < iVar27) {
            iVar30 = iVar31;
          }
          if (iVar31 < 0) {
            iVar30 = iVar22;
          }
          iVar31 = iVar12 + iVar34;
          iVar21 = iVar22;
          if (iVar31 < iVar27) {
            iVar21 = iVar31;
          }
          if (iVar31 < 0) {
            iVar21 = iVar22;
          }
          iVar31 = iVar34 - iVar12;
          if (iVar34 - iVar12 < 0) {
            iVar31 = iVar22;
          }
          iVar34 = iVar33 + iVar12;
          if (iVar27 <= iVar33 + iVar12) {
            iVar34 = iVar22;
          }
          dVar2 = dVar2 * -2.0;
          dVar9 = (dVar9 + dVar10 + dVar2) / (dVar11 * dVar11);
          dVar7 = (dVar7 + dVar8 + dVar2) / (dVar6 * dVar6);
          dVar2 = (dVar3 + dVar4 + dVar2) / (dVar5 * dVar5);
          dVar2 = -(dVar7 * dVar40 +
                   dVar15 * -2.0 * dVar16 *
                   ((((*(double *)(lVar13 + (longlong)iVar24 * 8) +
                      *(double *)(lVar13 + (longlong)iVar20 * 8)) -
                     *(double *)(lVar13 + (longlong)iVar23 * 8)) -
                    *(double *)(lVar13 + (longlong)iVar19 * 8)) / (dVar6 * 4.0 * dVar11)) +
                   dVar9 * dVar37 +
                   dVar2 * dVar40 +
                   dVar14 * -2.0 * dVar16 *
                   ((((*(double *)(lVar13 + (longlong)iVar25 * 8) +
                      *(double *)(lVar13 + (longlong)iVar32 * 8)) -
                     *(double *)(lVar13 + (longlong)iVar29 * 8)) -
                    *(double *)(lVar13 + (longlong)iVar35 * 8)) / (dVar5 * 4.0 * dVar11)) +
                   dVar38 * dVar9 +
                   dVar37 * dVar2 +
                   dVar38 * dVar7 +
                   dVar14 * -2.0 * dVar15 *
                   ((((*(double *)(lVar13 + (longlong)iVar31 * 8) +
                      *(double *)(lVar13 + (longlong)iVar34 * 8)) -
                     *(double *)(lVar13 + (longlong)iVar21 * 8)) -
                    *(double *)(lVar13 + (longlong)iVar30 * 8)) / (dVar5 * 4.0 * dVar6))) /
                  (dVar39 * dVar39 * dVar39);
          iVar22 = -(uint)(dVar2 < -9.999999747378752e-05);
          if (9.999999747378752e-05 < dVar2) {
            iVar22 = 1;
          }
          iVar19 = iVar22;
          if ((!bVar17) && (iVar19 = iVar18, iVar18 != iVar22 && iVar22 != 0)) {
            *(undefined1 *)(param_1 + 0x18) = 0;
            return;
          }
          iVar18 = iVar19;
          bVar17 = false;
        }
      }
      piVar26 = piVar26 + 3;
    } while (piVar26 != piVar1);
  }
  return;
}



// FUNCTION 146dd1bc4 FUN_146dd1bc4 body=1111 status=ok
// SIG undefined FUN_146dd1bc4(void)

undefined8 *
FUN_146dd1bc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  int local_70;
  int local_6c;
  int local_68;
  longlong local_60 [5];
  
  local_60[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x606;
  *param_1 = &PTR_FUN_149f553f0;
  puVar1 = param_1 + 4;
  puVar11 = puVar1;
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *param_3;
    param_3 = param_3 + 1;
    puVar11 = puVar11 + 1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int *)(param_1 + 0xf) = *(int *)(param_1 + 10);
  *(int *)((longlong)param_1 + 0x7c) = *(int *)((longlong)param_1 + 0x54);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xb);
  FUN_1400bd09c(param_1 + 0x11,
                *(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) *
                *(int *)(param_1 + 0xb),1);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  iVar7 = *(int *)(param_1 + 0xb);
  *(int *)(param_1 + 0x13) = *(int *)(param_1 + 10);
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x54);
  *(int *)(param_1 + 0x14) = iVar7;
  FUN_146ca6f88(param_1 + 0x15,*(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) * iVar7,
                CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1));
  param_1[0x19] = param_1[6];
  param_1[0x17] = param_1[4];
  param_1[0x18] = param_1[5];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x44);
  param_1[0x1c] = param_1[9];
  (**(code **)(*param_4 + 0x80))(param_4,param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x23) = param_5;
  if (param_6 != '\0') {
    if (0 < *(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) * *(int *)(param_1 + 0xb)) {
      uVar10 = 0;
      do {
        FUN_146dd201c(puVar1,&local_70,uVar10 & 0xffffffff);
        uVar5 = FUN_146dae118(param_4,&local_70);
        *(undefined8 *)(param_1[0x11] + uVar10 * 8) = uVar5;
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 <
               (longlong)*(int *)(param_1 + 0xb) *
               (longlong)*(int *)((longlong)param_1 + 0x54) * (longlong)*(int *)(param_1 + 10));
    }
    FUN_146dd1150(param_1);
    goto LAB_146dd1d52;
  }
  local_60[0] = 0;
  local_60[1] = 0;
  local_70 = *(int *)(param_1 + 10);
  local_6c = *(int *)((longlong)param_1 + 0x54);
  local_68 = *(int *)(param_1 + 0xb);
  FUN_1400bd09c(local_60,local_6c * local_70 * local_68,
                CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1));
  if (0 < *(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) * *(int *)(param_1 + 0xb)) {
    uVar10 = 0;
    do {
      FUN_146dd201c(puVar1,local_88,uVar10 & 0xffffffff);
      uVar5 = FUN_146dae118(param_4,local_88);
      *(undefined8 *)(local_60[0] + uVar10 * 8) = uVar5;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 <
             (longlong)*(int *)(param_1 + 0xb) *
             (longlong)*(int *)((longlong)param_1 + 0x54) * (longlong)*(int *)(param_1 + 10));
  }
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_146dd20d6(param_1,&local_70);
  dVar2 = (double)param_1[0xc];
  uVar14 = SUB84(dVar2,0);
  uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar13 = (double)param_1[0xd];
  dVar3 = (double)param_1[0xe];
  if (dVar2 <= dVar13 || dVar2 <= dVar3) {
    if (dVar13 <= dVar3) {
      dVar13 = dVar3;
    }
    uVar14 = SUB84(dVar13,0);
    uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  uVar6 = *(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) * *(int *)(param_1 + 0xb);
  uVar10 = (ulonglong)uVar6;
  dVar2 = (double)CONCAT44(uVar15,uVar14) * (double)*(int *)(param_1 + 0x23);
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    if (0 < (int)uVar6) {
      lVar9 = 0;
      do {
        dVar13 = *(double *)(param_1[0x11] + lVar9 * 8);
        if (dVar2 <= dVar13) {
          dVar13 = dVar2;
        }
        *(double *)(param_1[0x11] + lVar9 * 8) = dVar13;
        lVar9 = lVar9 + 1;
        uVar10 = (longlong)*(int *)(param_1 + 0xb) *
                 (longlong)*(int *)((longlong)param_1 + 0x54) * (longlong)*(int *)(param_1 + 10);
      } while (lVar9 < (longlong)uVar10);
      goto LAB_146dd1eb0;
    }
    FUN_146dd0730(param_1,dVar2,local_88);
LAB_146dd1f5c:
    iVar7 = *(int *)(param_1 + 10);
    iVar8 = *(int *)((longlong)param_1 + 0x54);
    iVar12 = *(int *)(param_1 + 0xb);
    if (0 < iVar8 * iVar7 * iVar12) {
      lVar9 = 0;
      do {
        lVar4 = param_1[0x11];
        dVar13 = *(double *)(lVar4 + lVar9 * 8);
        if (dVar2 < ABS(dVar13)) {
          uVar10 = -(ulonglong)(0.0 < dVar13);
          *(ulonglong *)(lVar4 + lVar9 * 8) =
               ~uVar10 & (ulonglong)-dVar2 | uVar10 & (ulonglong)dVar2;
          iVar7 = *(int *)(param_1 + 10);
          iVar8 = *(int *)((longlong)param_1 + 0x54);
          iVar12 = *(int *)(param_1 + 0xb);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar8 * iVar12 * iVar7);
    }
  }
  else {
LAB_146dd1eb0:
    if (0 < (int)uVar10) {
      lVar9 = 0;
      do {
        dVar13 = *(double *)(local_60[0] + lVar9 * 8);
        uVar10 = -(ulonglong)(0.0 < dVar13);
        *(double *)(param_1[0x11] + lVar9 * 8) =
             (double)(uVar10 & 0x3ff0000000000000 |
                     ~uVar10 & -(ulonglong)(dVar13 < 0.0) & 0xbff0000000000000) *
             *(double *)(param_1[0x11] + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (longlong)*(int *)(param_1 + 0xb) *
                       (longlong)*(int *)((longlong)param_1 + 0x54) *
                       (longlong)*(int *)(param_1 + 10));
    }
    FUN_146dd0730(param_1,dVar2,local_88);
    if ((dVar2 != 0.0) || (NAN(dVar2))) goto LAB_146dd1f5c;
  }
  FUN_146dd1150(param_1);
  FUN_146dd162c(param_1,local_88);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_146dd1d52:
  if ((local_60[2] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146dd201c FUN_146dd201c body=185 status=ok
// SIG undefined FUN_146dd201c(void)

double * FUN_146dd201c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146e405ba(param_1,&local_3c);
  dVar1 = param_1[10];
  dVar2 = param_1[9];
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  *param_2 = param_1[8] * 0.5 + (double)local_3c * param_1[8] + *param_1;
  param_2[1] = dVar2 * 0.5 + (double)local_38 * dVar2 + dVar4;
  param_2[2] = dVar1 * 0.5 + (double)local_34 * dVar1 + dVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd20d6 FUN_146dd20d6 body=1496 status=ok
// SIG undefined FUN_146dd20d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dd20d6(longlong param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int local_94;
  int local_8c;
  
  auVar4 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x88);
    uVar8 = (longlong)*(int *)(param_1 + 0x90) + 0x1fffffffffffffff;
    uVar9 = uVar8 & 0x1fffffffffffffff;
    auVar19._8_4_ = (int)uVar9;
    auVar19._0_8_ = uVar9;
    auVar19._12_4_ = (int)(uVar9 >> 0x20);
    uVar10 = 0;
    auVar20 = pmovsxbq(in_XMM1,0x100);
    auVar19 = auVar19 | _DAT_149931e80;
    do {
      if ((bool)(~(auVar19._0_8_ < (longlong)(uVar10 ^ auVar4._0_8_)) & 1)) {
        *(undefined8 *)(lVar11 + uVar10 * 8) = 0x47efffffe0000000;
      }
      auVar21._8_4_ = (int)uVar10;
      auVar21._0_8_ = uVar10;
      auVar21._12_4_ = (int)(uVar10 >> 0x20);
      if ((longlong)((auVar21._8_8_ | auVar20._8_8_) ^ auVar4._8_8_) <= auVar19._8_8_) {
        *(undefined8 *)(lVar11 + 8 + uVar10 * 8) = 0x47efffffe0000000;
      }
      uVar10 = uVar10 + 2;
    } while ((uVar9 - ((uint)uVar8 & 1)) + 2 != uVar10);
  }
  iVar5 = *(int *)(param_1 + 0x50);
  if (0 < iVar5) {
    iVar14 = *(int *)(param_1 + 0x54);
    iVar17 = 0;
    local_94 = 1;
    local_8c = -1;
    do {
      if (0 < iVar14) {
        iVar5 = *(int *)(param_1 + 0x58);
        iVar12 = 0;
        iVar7 = iVar5;
        do {
          if (0 < iVar7) {
            lVar11 = 0;
            do {
              if (iVar17 == 0) {
LAB_146dd22c0:
                bVar3 = false;
              }
              else {
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar17 * *(int *)(param_2 + 4) + iVar12) * *(int *)(param_2 + 8) +
                          lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((*(int *)(param_2 + 4) * local_8c + iVar12) * *(int *)(param_2 + 8) +
                          lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar18 = (double)(uVar8 & 0x3ff0000000000000 |
                                 ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                if ((dVar1 == dVar18) && (!NAN(dVar1) && !NAN(dVar18))) goto LAB_146dd22c0;
                bVar3 = true;
              }
              if (iVar17 < *(int *)(param_1 + 0x50) + -1) {
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar17 * *(int *)(param_2 + 4) + iVar12) * *(int *)(param_2 + 8) +
                          lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((*(int *)(param_2 + 4) * local_94 + iVar12) * *(int *)(param_2 + 8) +
                          lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar18 = (double)(uVar8 & 0x3ff0000000000000 |
                                 ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                if ((dVar1 != dVar18) || (NAN(dVar1) || NAN(dVar18))) {
                  bVar3 = true;
                }
              }
              if (iVar12 != 0) {
                iVar14 = *(int *)(param_2 + 4) * iVar17;
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar14 + iVar12) * *(int *)(param_2 + 8) + lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar14 + iVar12 + -1) * *(int *)(param_2 + 8) + lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar18 = (double)(uVar8 & 0x3ff0000000000000 |
                                 ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                if ((dVar1 != dVar18) || (NAN(dVar1) || NAN(dVar18))) {
                  bVar3 = true;
                }
              }
              if (iVar12 < *(int *)(param_1 + 0x54) + -1) {
                iVar14 = *(int *)(param_2 + 4) * iVar17;
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar14 + iVar12) * *(int *)(param_2 + 8) + lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                dVar18 = *(double *)
                          (*(longlong *)(param_2 + 0x10) +
                          ((iVar14 + iVar12 + 1) * *(int *)(param_2 + 8) + lVar11) * 8);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar18 = (double)(uVar8 & 0x3ff0000000000000 |
                                 ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                if ((dVar1 != dVar18) || (NAN(dVar1) || NAN(dVar18))) {
                  bVar3 = true;
                }
              }
              iVar14 = (int)lVar11;
              if (iVar14 == 0) {
LAB_146dd258d:
                if (iVar14 < iVar7 + -1) {
                  lVar16 = *(longlong *)(param_2 + 0x10);
                  iVar13 = (*(int *)(param_2 + 4) * iVar17 + iVar12) * *(int *)(param_2 + 8);
                  lVar15 = (longlong)(iVar13 + iVar14);
LAB_146dd25b2:
                  dVar18 = *(double *)(lVar16 + lVar15 * 8);
                  if (!bVar3) {
                    dVar2 = (double)(-(ulonglong)(0.0 < dVar18) & 0x3ff0000000000000 |
                                    ~-(ulonglong)(0.0 < dVar18) &
                                    -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                    dVar1 = *(double *)(lVar16 + 8 + (iVar13 + lVar11) * 8);
                    uVar8 = -(ulonglong)(0.0 < dVar1);
                    dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                    ~uVar8 & -(ulonglong)(dVar1 < 0.0) & 0xbff0000000000000);
                    if ((dVar2 == dVar1) && (!NAN(dVar2) && !NAN(dVar1))) goto LAB_146dd257b;
                  }
                  goto LAB_146dd251d;
                }
                if (bVar3) {
                  lVar16 = *(longlong *)(param_2 + 0x10);
                  lVar15 = (longlong)
                           ((*(int *)(param_2 + 4) * iVar17 + iVar12) * *(int *)(param_2 + 8) +
                           iVar14);
                  goto LAB_146dd2517;
                }
              }
              else {
                iVar13 = (*(int *)(param_2 + 4) * iVar17 + iVar12) * *(int *)(param_2 + 8);
                lVar16 = *(longlong *)(param_2 + 0x10);
                lVar15 = iVar13 + lVar11;
                dVar18 = *(double *)(lVar16 + -8 + lVar15 * 8);
                dVar1 = *(double *)(lVar16 + lVar15 * 8);
                uVar8 = -(ulonglong)(0.0 < dVar1);
                dVar1 = (double)(uVar8 & 0x3ff0000000000000 |
                                ~uVar8 & -(ulonglong)(dVar1 < 0.0) & 0xbff0000000000000);
                uVar8 = -(ulonglong)(0.0 < dVar18);
                dVar18 = (double)(uVar8 & 0x3ff0000000000000 |
                                 ~uVar8 & -(ulonglong)(dVar18 < 0.0) & 0xbff0000000000000);
                if ((dVar1 == dVar18) && (!NAN(dVar1) && !NAN(dVar18))) goto LAB_146dd258d;
                bVar3 = true;
                if (iVar14 < iVar7 + -1) goto LAB_146dd25b2;
LAB_146dd2517:
                dVar18 = *(double *)(lVar16 + lVar15 * 8);
LAB_146dd251d:
                *(double *)
                 (*(longlong *)(param_1 + 0x88) +
                 ((longlong)(*(int *)(param_1 + 0x7c) * iVar17 + iVar12) *
                  (longlong)*(int *)(param_1 + 0x80) + lVar11) * 8) = ABS(dVar18);
                lVar16 = (longlong)(int)param_3[1];
                uVar6 = (int)param_3[1] + 1;
                *(uint *)(param_3 + 1) = uVar6;
                if (*(uint *)((longlong)param_3 + 0xc) < uVar6) {
                  FUN_141087970(param_3);
                }
                lVar15 = *param_3;
                *(int *)(lVar15 + lVar16 * 0xc) = iVar17;
                *(int *)(lVar15 + 4 + lVar16 * 0xc) = iVar12;
                *(int *)(lVar15 + 8 + lVar16 * 0xc) = iVar14;
                iVar5 = *(int *)(param_1 + 0x58);
              }
LAB_146dd257b:
              lVar11 = lVar11 + 1;
              iVar7 = iVar5;
            } while ((int)lVar11 < iVar5);
            iVar14 = *(int *)(param_1 + 0x54);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar14);
        iVar5 = *(int *)(param_1 + 0x50);
      }
      iVar17 = iVar17 + 1;
      local_94 = local_94 + 1;
      local_8c = local_8c + 1;
    } while (iVar17 < iVar5);
  }
  return;
}



// FUNCTION 146dd26ae FUN_146dd26ae body=283 status=ok
// SIG undefined FUN_146dd26ae(void)

undefined8 *
FUN_146dd26ae(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x606;
  *param_1 = &PTR_FUN_149f553f0;
  puVar3 = param_1 + 4;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 1);
  param_1[0xf] = *param_3;
  param_1[0x11] = 0;
  param_1[0x11] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_1 + 0xb);
  *(int *)(param_1 + 0x13) = *(int *)(param_1 + 10);
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x54);
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_146ca6f88(param_1 + 0x15,*(int *)((longlong)param_1 + 0x54) * *(int *)(param_1 + 10) * iVar1,
                CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
  param_1[0x19] = param_1[6];
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x44);
  param_1[0x1c] = param_1[9];
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_1[0x1f] = param_1[6];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0x44);
  param_1[0x22] = param_1[9];
  *(undefined4 *)(param_1 + 0x23) = param_4;
  FUN_146dd1150(param_1);
  return param_1;
}



// FUNCTION 146dd27ca FUN_146dd27ca body=61 status=ok
// SIG undefined FUN_146dd27ca(void)

undefined4 FUN_146dd27ca(undefined8 *param_1)

{
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 146dd2808 FUN_146dd2808 body=305 status=ok
// SIG undefined FUN_146dd2808(void)

longlong * FUN_146dd2808(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_14001cc68(0x120,0x10);
  FUN_146daec88(lVar2);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)(lVar2 + 0x20);
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  FUN_1408fdf38(lVar2 + 0x88,param_1 + 0x88);
  *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  FUN_146ddb48a(lVar2 + 0xa8,param_1 + 0xa8);
  *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar2 + 0xc0) = uVar1;
  *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(lVar2 + 0xd8) = uVar1;
  *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(lVar2 + 0xf0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(lVar2 + 0x108) = uVar1;
  *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146dd293a FUN_146dd293a body=357 status=ok
// SIG undefined FUN_146dd293a(void)

longlong * FUN_146dd293a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = FUN_14001cc68(0x120,0x10);
  FUN_146daec88(lVar5);
  puVar7 = (undefined8 *)(param_1 + 0x20);
  puVar8 = (undefined8 *)(lVar5 + 0x20);
  for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(lVar5 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  FUN_1408fdf38(lVar5 + 0x88,param_1 + 0x88);
  *(undefined8 *)(lVar5 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  FUN_146ddb48a(lVar5 + 0xa8,param_1 + 0xa8);
  *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(param_1 + 200);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar5 + 0xc0) = uVar4;
  *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(lVar5 + 0xd8) = uVar4;
  *(undefined8 *)(lVar5 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(lVar5 + 0xf0) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  uVar2 = *(undefined4 *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(lVar5 + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(lVar5 + 0x104) = uVar1;
  *(undefined4 *)(lVar5 + 0x108) = uVar2;
  *(undefined4 *)(lVar5 + 0x10c) = uVar3;
  *(undefined8 *)(lVar5 + 0x110) = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(lVar5 + 0x118) = *(undefined4 *)(param_1 + 0x118);
  lVar6 = FUN_14001cc68(0x90,0x10);
  FUN_146ddb4e4(lVar6,lVar5,param_3);
  *param_2 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146dd2aa0 FUN_146dd2aa0 body=1397 status=ok
// SIG undefined FUN_146dd2aa0(void)

void FUN_146dd2aa0(longlong param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100 [6];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = param_1 + 0x20;
  FUN_146e405e4(lVar1,&local_118,param_2);
  dVar3 = (local_108 - param_2[2]) * (local_108 - param_2[2]) +
          (local_118 - *param_2) * (local_118 - *param_2) +
          (local_110 - param_2[1]) * (local_110 - param_2[1]);
  if (dVar3 <= 0.0) {
    FUN_146e406b4(lVar1,local_100 + 3,param_1 + 0x98,&local_118);
    param_3[2] = local_100[5];
    *param_3 = local_100[3];
    param_3[1] = local_100[4];
    dVar3 = *param_3;
    dVar8 = param_3[1];
    dVar9 = param_3[2];
    dVar11 = SQRT(dVar9 * dVar9 + dVar3 * dVar3 + dVar8 * dVar8);
    dVar10 = 1.0;
    dVar12 = 1.0 / dVar11;
    if (9.99999993922529e-09 < dVar11) {
      dVar10 = dVar3 * dVar12;
    }
    if (9.99999993922529e-09 < dVar11) {
      dVar8 = dVar8 * dVar12;
    }
    else {
      dVar8 = 0.0;
    }
    *param_3 = dVar10;
    param_3[1] = dVar8;
    param_3[2] = (double)(-(ulonglong)(9.99999993922529e-09 < dVar11) & (ulonglong)(dVar9 * dVar12))
    ;
    uVar6 = FUN_146e40c4a(lVar1,param_1 + 0x78,&local_118);
    goto LAB_146dd2eea;
  }
  local_100[5] = local_108 - *(double *)(param_1 + 0xe0);
  local_100[4] = local_110 - *(double *)(param_1 + 0xd8);
  local_100[3] = local_118 - *(double *)(param_1 + 0xd0);
  local_100[2] = *(double *)(param_1 + 200) - local_108;
  local_100[1] = *(double *)(param_1 + 0xc0) - local_110;
  local_100[0] = *(double *)(param_1 + 0xb8) - local_118;
  if (((((*(double *)(param_1 + 0xd0) < local_118) || (*(double *)(param_1 + 0xd8) < local_110)) ||
       (*(double *)(param_1 + 0xe0) < local_108)) ||
      ((local_118 < *(double *)(param_1 + 0xb8) || (local_110 < *(double *)(param_1 + 0xc0))))) ||
     (local_108 < *(double *)(param_1 + 200))) {
    lVar5 = 0;
    do {
      dVar8 = local_100[lVar5 + 3];
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
        if (0.0 < local_100[lVar5]) {
          dVar8 = -local_100[lVar5];
        }
      }
      param_3[lVar5] = dVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar8 = *param_3;
    dVar9 = param_3[1];
    dVar12 = param_3[2];
    dVar11 = dVar12 * dVar12 + dVar8 * dVar8 + dVar9 * dVar9;
    if (9.999999747378752e-05 <= dVar11) {
      dVar11 = SQRT(dVar11);
      *param_3 = dVar8 / dVar11;
      param_3[1] = dVar9 / dVar11;
      param_3[2] = dVar12 / dVar11;
      if (9.999999747378752e-05 <= dVar11) goto LAB_146dd2e98;
    }
    else {
      *param_3 = 1.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
    }
    lVar5 = 0;
    do {
      dVar8 = 1.0;
      if ((0.0 < param_3[lVar5]) || (dVar8 = -1.0, param_3[lVar5] < 0.0)) {
        param_3[lVar5] = dVar8;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
    dVar8 = *param_3;
    dVar9 = param_3[1];
    dVar12 = param_3[2];
    dVar11 = dVar12 * dVar12 + dVar8 * dVar8 + dVar9 * dVar9;
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      *param_3 = dVar8 * dVar11;
      param_3[1] = dVar9 * dVar11;
      param_3[2] = dVar12 * dVar11;
    }
  }
  else {
    dVar8 = local_100[2];
    if (local_100[2] <= local_100[5]) {
      dVar8 = local_100[5];
    }
    dVar9 = local_100[1];
    if (local_100[1] <= local_100[4]) {
      dVar9 = local_100[4];
    }
    dVar12 = local_100[0];
    if (local_100[0] <= local_100[3]) {
      dVar12 = local_100[3];
    }
    iVar4 = (dVar9 <= dVar8) + 1;
    if (dVar9 < dVar12) {
      iVar4 = (uint)(dVar12 <= dVar8) * 2;
    }
    dVar8 = *(double *)((longlong)local_100 + (ulonglong)(uint)(iVar4 * 8) + 0x18);
    pdVar2 = (double *)((longlong)local_100 + (ulonglong)(uint)(iVar4 * 8));
    if (dVar8 < *pdVar2 || dVar8 == *pdVar2) {
      if (iVar4 == 0) {
        dVar9 = 1.0;
        uVar7 = 0;
        dVar8 = 0.0;
      }
      else {
        if (iVar4 == 1) {
          dVar8 = 1.0;
          uVar7 = 0;
        }
        else {
          dVar8 = 0.0;
          uVar7 = 0x3ff00000;
        }
        dVar9 = 0.0;
      }
      uVar7 = uVar7 ^ 0x80000000;
      dVar8 = -dVar8;
      dVar9 = -dVar9;
    }
    else if (iVar4 == 0) {
      dVar9 = 1.0;
      uVar7 = 0;
      dVar8 = 0.0;
    }
    else {
      if (iVar4 == 1) {
        dVar8 = 1.0;
        uVar7 = 0;
      }
      else {
        dVar8 = 0.0;
        uVar7 = 0x3ff00000;
      }
      dVar9 = 0.0;
    }
    *param_3 = dVar9;
    param_3[1] = dVar8;
    param_3[2] = (double)((ulonglong)uVar7 << 0x20);
  }
LAB_146dd2e98:
  dVar8 = (double)FUN_146e40c4a(lVar1,param_1 + 0x78,&local_118);
  uVar6 = SUB84(SQRT(dVar3) + dVar8,0);
LAB_146dd2eea:
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar6);
  }
  return;
}



// FUNCTION 146dd3016 FUN_146dd3016 body=3531 status=ok
// SIG undefined FUN_146dd3016(void)

void FUN_146dd3016(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  int local_170;
  int local_16c;
  double local_168;
  double local_160;
  
  iVar5 = *(int *)(param_1 + 0x50);
  if (1 < iVar5) {
    dVar1 = *(double *)(param_1 + 0x60);
    dVar2 = *(double *)(param_1 + 0x68);
    dVar3 = *(double *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x58);
    dVar28 = dVar3 * 0.0;
    dVar24 = dVar2 * 0.0;
    dVar25 = dVar1 * 0.0;
    local_170 = 1;
    local_168 = 0.0;
    iVar13 = 0;
    do {
      if (1 < iVar6) {
        local_160 = 0.0;
        local_16c = 1;
        iVar14 = 0;
        do {
          if (1 < iVar7) {
            dVar29 = 0.0;
            lVar17 = 0;
            do {
              iVar21 = *(int *)(param_1 + 0x80);
              lVar18 = *(longlong *)(param_1 + 0x88);
              iVar19 = iVar13 * *(int *)(param_1 + 0x7c);
              iVar16 = (iVar14 + iVar19) * iVar21;
              dVar27 = *(double *)(lVar18 + (lVar17 + iVar16) * 8);
              uVar23 = -(ulonglong)(0.0 < dVar27);
              dVar12 = (double)(uVar23 & 0x3ff0000000000000 |
                               ~uVar23 & -(ulonglong)(dVar27 < 0.0) & 0xbff0000000000000);
              dVar27 = *(double *)
                        (lVar18 + ((*(int *)(param_1 + 0x7c) * local_170 + iVar14) * iVar21 + lVar17
                                  ) * 8);
              uVar23 = -(ulonglong)(0.0 < dVar27);
              dVar26 = (double)(uVar23 & 0x3ff0000000000000 |
                               ~uVar23 & -(ulonglong)(dVar27 < 0.0) & 0xbff0000000000000);
              dVar27 = *(double *)(lVar18 + ((iVar19 + local_16c) * iVar21 + lVar17) * 8);
              dVar4 = *(double *)(lVar18 + (longlong)((int)lVar17 + iVar16 + 1) * 8);
              dVar9 = dVar3 * dVar29 + *(double *)(param_1 + 0x30);
              dVar10 = *(double *)(param_1 + 0x28) + local_160 * dVar2;
              dVar11 = *(double *)(param_1 + 0x20) + local_168 * dVar1;
              if (dVar12 <= dVar26) {
                if (dVar12 < dVar26) {
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar15 = (longlong)iVar21;
                  lVar18 = *param_2;
                  fVar30 = (float)(dVar1 + dVar11);
                  *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                  iVar16 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar16 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                    FUN_140c0b6f2(param_2,iVar16);
                  }
                  lVar15 = (longlong)iVar16;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar2 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                  iVar19 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar19 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                    FUN_140c0b6f2(param_2,iVar19);
                  }
                  lVar15 = (longlong)iVar19;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar2 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar15 = (longlong)iVar20;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                  iVar8 = (int)param_3[1];
                  lVar18 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar15 = *param_3;
                  *(int *)(lVar15 + lVar18 * 0xc) = iVar21;
                  *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar19;
                  *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar16;
                  goto LAB_146dd3445;
                }
              }
              else {
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar15 = (longlong)iVar20;
                lVar18 = *param_2;
                fVar30 = (float)(dVar1 + dVar11);
                *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                iVar16 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                  FUN_140c0b6f2(param_2,iVar16);
                }
                lVar15 = (longlong)iVar16;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar2 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                iVar19 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                  FUN_140c0b6f2(param_2,iVar19);
                }
                lVar15 = (longlong)iVar19;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar2 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar15 = (longlong)iVar21;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                iVar8 = (int)param_3[1];
                lVar18 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar15 = *param_3;
                *(int *)(lVar15 + lVar18 * 0xc) = iVar20;
                *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar16;
                *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar19;
LAB_146dd3445:
                iVar16 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar16 + 1U) {
                  FUN_146ddc768(param_3,iVar16);
                }
                lVar18 = *param_3;
                lVar15 = (longlong)iVar16;
                *(int *)(lVar18 + lVar15 * 0xc) = iVar19;
                *(int *)(lVar18 + 4 + lVar15 * 0xc) = iVar21;
                *(int *)(lVar18 + 8 + lVar15 * 0xc) = iVar20;
              }
              uVar23 = -(ulonglong)(0.0 < dVar27);
              dVar27 = (double)(uVar23 & 0x3ff0000000000000 |
                               ~uVar23 & (ulonglong)
                                         ((uint)(-(ulonglong)(dVar27 < 0.0) >> 0x20) & 0xbff00000)
                                         << 0x20);
              if (dVar12 <= dVar27) {
                if (dVar12 < dVar27) {
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar15 = (longlong)iVar21;
                  lVar18 = *param_2;
                  fVar30 = (float)(dVar2 + dVar10);
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                  iVar16 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar16 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                    FUN_140c0b6f2(param_2,iVar16);
                  }
                  lVar15 = (longlong)iVar16;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar1 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                  iVar19 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar19 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                    FUN_140c0b6f2(param_2,iVar19);
                  }
                  lVar15 = (longlong)iVar19;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar1 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar15 = (longlong)iVar20;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                  iVar8 = (int)param_3[1];
                  lVar18 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar15 = *param_3;
                  *(int *)(lVar15 + lVar18 * 0xc) = iVar21;
                  *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar16;
                  *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar19;
                  goto LAB_146dd361d;
                }
              }
              else {
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar15 = (longlong)iVar20;
                lVar18 = *param_2;
                fVar30 = (float)(dVar2 + dVar10);
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                iVar16 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                  FUN_140c0b6f2(param_2,iVar16);
                }
                lVar15 = (longlong)iVar16;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar1 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar28 + dVar9);
                iVar19 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                  FUN_140c0b6f2(param_2,iVar19);
                }
                lVar15 = (longlong)iVar19;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar1 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar15 = (longlong)iVar21;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = fVar30;
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = (float)(dVar3 + dVar9);
                iVar8 = (int)param_3[1];
                lVar18 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar15 = *param_3;
                *(int *)(lVar15 + lVar18 * 0xc) = iVar20;
                *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar19;
                *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar16;
LAB_146dd361d:
                iVar16 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar16 + 1U) {
                  FUN_146ddc768(param_3,iVar16);
                }
                lVar18 = *param_3;
                lVar15 = (longlong)iVar16;
                *(int *)(lVar18 + lVar15 * 0xc) = iVar19;
                *(int *)(lVar18 + 4 + lVar15 * 0xc) = iVar20;
                *(int *)(lVar18 + 8 + lVar15 * 0xc) = iVar21;
              }
              uVar23 = -(ulonglong)(0.0 < dVar4);
              dVar27 = (double)(uVar23 & 0x3ff0000000000000 |
                               ~uVar23 & (ulonglong)
                                         ((uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) <<
                                         0x20);
              if (dVar12 <= dVar27) {
                if (dVar12 < dVar27) {
                  iVar21 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                    FUN_140c0b6f2(param_2,iVar21);
                  }
                  lVar15 = (longlong)iVar21;
                  lVar18 = *param_2;
                  fVar30 = (float)(dVar9 + dVar3);
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                  iVar16 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar16 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                    FUN_140c0b6f2(param_2,iVar16);
                  }
                  lVar15 = (longlong)iVar16;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar11 + dVar1);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                  iVar19 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar19 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                    FUN_140c0b6f2(param_2,iVar19);
                  }
                  lVar15 = (longlong)iVar19;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar11 + dVar1);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar10 + dVar2);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                  iVar20 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                    FUN_140c0b6f2(param_2,iVar20);
                  }
                  lVar15 = (longlong)iVar20;
                  lVar18 = *param_2;
                  *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                  *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar10 + dVar2);
                  *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                  iVar8 = (int)param_3[1];
                  lVar18 = (longlong)iVar8;
                  *(uint *)(param_3 + 1) = iVar8 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                    FUN_146ddc768(param_3,iVar8);
                  }
                  lVar15 = *param_3;
                  *(int *)(lVar15 + lVar18 * 0xc) = iVar21;
                  *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar19;
                  *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar16;
                  goto LAB_146dd37e6;
                }
              }
              else {
                iVar20 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar20 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                  FUN_140c0b6f2(param_2,iVar20);
                }
                lVar15 = (longlong)iVar20;
                lVar18 = *param_2;
                fVar30 = (float)(dVar9 + dVar3);
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                iVar16 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
                  FUN_140c0b6f2(param_2,iVar16);
                }
                lVar15 = (longlong)iVar16;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar11 + dVar1);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar24 + dVar10);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                iVar19 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                  FUN_140c0b6f2(param_2,iVar19);
                }
                lVar15 = (longlong)iVar19;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar11 + dVar1);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar10 + dVar2);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                iVar21 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar21 + 1U) {
                  FUN_140c0b6f2(param_2,iVar21);
                }
                lVar15 = (longlong)iVar21;
                lVar18 = *param_2;
                *(float *)(lVar18 + lVar15 * 0xc) = (float)(dVar25 + dVar11);
                *(float *)(lVar18 + 4 + lVar15 * 0xc) = (float)(dVar10 + dVar2);
                *(float *)(lVar18 + 8 + lVar15 * 0xc) = fVar30;
                iVar8 = (int)param_3[1];
                lVar18 = (longlong)iVar8;
                *(uint *)(param_3 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                  FUN_146ddc768(param_3,iVar8);
                }
                lVar15 = *param_3;
                *(int *)(lVar15 + lVar18 * 0xc) = iVar20;
                *(int *)(lVar15 + 4 + lVar18 * 0xc) = iVar16;
                *(int *)(lVar15 + 8 + lVar18 * 0xc) = iVar19;
LAB_146dd37e6:
                iVar16 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar16 + 1U) {
                  FUN_146ddc768(param_3,iVar16);
                }
                lVar18 = *param_3;
                lVar15 = (longlong)iVar16;
                *(int *)(lVar18 + lVar15 * 0xc) = iVar19;
                *(int *)(lVar18 + 4 + lVar15 * 0xc) = iVar21;
                *(int *)(lVar18 + 8 + lVar15 * 0xc) = iVar20;
              }
              dVar29 = dVar29 + 1.0;
              lVar17 = lVar17 + 1;
            } while (iVar7 + -1 != (int)lVar17);
          }
          local_16c = local_16c + 1;
          bVar22 = iVar14 != iVar6 + -2;
          local_160 = local_160 + 1.0;
          iVar14 = iVar14 + 1;
        } while (bVar22);
      }
      local_170 = local_170 + 1;
      bVar22 = iVar13 != iVar5 + -2;
      local_168 = local_168 + 1.0;
      iVar13 = iVar13 + 1;
    } while (bVar22);
  }
  return;
}



// FUNCTION 146dd3de2 FUN_146dd3de2 body=2448 status=ok
// SIG undefined FUN_146dd3de2(void)

double FUN_146dd3de2(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1b8 [40];
  double local_190;
  longlong local_188;
  int local_17c;
  double local_178;
  int *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_144 [9];
  double local_120 [6];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar1 = *param_3;
  local_190 = (double)CONCAT44(local_190._4_4_,iVar1);
  iVar2 = param_3[1];
  local_168 = (double)CONCAT44(local_168._4_4_,iVar2);
  iVar3 = param_3[2];
  local_158 = (double)CONCAT44(local_158._4_4_,iVar3);
  lVar9 = 0;
  iVar6 = 0;
  do {
    local_144[3] = 0;
    local_144[4] = 0;
    local_144[5] = 0;
    *(undefined4 *)((longlong)local_144 + lVar9 + 0xc) = 1;
    local_144[6] = local_144[3] + iVar1;
    local_144[7] = local_144[4] + iVar2;
    local_144[8] = local_144[5] + iVar3;
    local_144[0] = 0;
    local_144[1] = 0;
    local_144[2] = 0;
    *(undefined4 *)((longlong)local_144 + lVar9) = 1;
    local_144[3] = iVar1 - local_144[0];
    local_144[4] = iVar2 - local_144[1];
    local_144[5] = iVar3 - local_144[2];
    if (*(int *)((longlong)local_144 + lVar9 + 0xc) < 0) {
LAB_146dd402b:
      if ((*(int *)((longlong)local_144 + lVar9 + 0x18) < *(int *)(param_1 + 0x50 + lVar9)) &&
         (*(char *)(*(longlong *)(param_2 + 0x10) +
                   (longlong)
                   ((*(int *)(param_2 + 4) * local_144[6] + local_144[7]) * *(int *)(param_2 + 8) +
                   local_144[8])) == '\x01')) {
        local_120[iVar6] = *(double *)(param_1 + 0x60 + lVar9 * 2);
        local_120[(longlong)iVar6 + 3] =
             *(double *)
              (*(longlong *)(param_1 + 0x88) +
              (longlong)
              ((local_144[6] * *(int *)(param_1 + 0x7c) + local_144[7]) * *(int *)(param_1 + 0x80) +
              local_144[8]) * 8);
        iVar6 = iVar6 + 1;
      }
    }
    else {
      if (*(char *)(*(longlong *)(param_2 + 0x10) +
                   (longlong)
                   ((*(int *)(param_2 + 4) * local_144[3] + local_144[4]) * *(int *)(param_2 + 8) +
                   local_144[5])) == '\0') goto LAB_146dd402b;
      if (*(int *)((longlong)local_144 + lVar9 + 0x18) < *(int *)(param_1 + 0x50 + lVar9)) {
        iVar7 = *(int *)(param_1 + 0x7c);
        iVar5 = *(int *)(param_1 + 0x80);
        dVar8 = *(double *)(param_1 + 0x88);
        local_17c = iVar5;
        local_178 = dVar8;
        if (*(char *)(*(longlong *)(param_2 + 0x10) +
                     (longlong)
                     ((*(int *)(param_2 + 4) * local_144[6] + local_144[7]) * *(int *)(param_2 + 8)
                     + local_144[8])) == '\0') goto LAB_146dd40b1;
        local_120[iVar6] = *(double *)(param_1 + 0x60 + lVar9 * 2);
        dVar15 = *(double *)
                  ((longlong)dVar8 +
                  (longlong)((local_144[6] * iVar7 + local_144[7]) * iVar5 + local_144[8]) * 8);
        dVar8 = *(double *)
                 ((longlong)dVar8 +
                 (longlong)((local_144[3] * iVar7 + local_144[4]) * iVar5 + local_144[5]) * 8);
        if (ABS(dVar8) <= ABS(dVar15)) {
          local_120[(longlong)iVar6 + 3] = dVar8;
          iVar6 = iVar6 + 1;
        }
        else {
          local_120[(longlong)iVar6 + 3] = dVar15;
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x7c);
        iVar5 = *(int *)(param_1 + 0x80);
        dVar8 = *(double *)(param_1 + 0x88);
LAB_146dd40b1:
        local_120[iVar6] = *(double *)(param_1 + 0x60 + lVar9 * 2);
        local_120[(longlong)iVar6 + 3] =
             *(double *)
              ((longlong)dVar8 +
              (longlong)((iVar7 * local_144[3] + local_144[4]) * iVar5 + local_144[5]) * 8);
        iVar6 = iVar6 + 1;
      }
    }
    lVar9 = lVar9 + 4;
    if (lVar9 == 0xc) {
      local_188 = param_1;
      local_170 = param_3;
      if (iVar6 == 1) {
        uVar10 = -(ulonglong)
                  (0.0 < *(double *)
                          (*(longlong *)(param_1 + 0x88) +
                          (longlong)
                          ((iVar1 * *(int *)(param_1 + 0x7c) + iVar2) * *(int *)(param_1 + 0x80) +
                          iVar3) * 8));
        dVar17 = (double)(~uVar10 & (ulonglong)-(ABS(local_120[3]) + local_120[0]) |
                         (ulonglong)(ABS(local_120[3]) + local_120[0]) & uVar10);
      }
      else {
        uVar20 = SUB84(local_120[0],0);
        uVar21 = (undefined4)((ulonglong)local_120[0] >> 0x20);
        uVar18 = SUB84(local_120[1],0);
        uVar19 = (undefined4)((ulonglong)local_120[1] >> 0x20);
        uVar22 = SUB84(local_120[4],0);
        uVar23 = (undefined4)((ulonglong)local_120[4] >> 0x20);
        dVar8 = (double)(&DAT_149931160)
                        [0.0 < *(double *)
                                (*(longlong *)(param_1 + 0x88) +
                                (longlong)
                                ((iVar1 * *(int *)(param_1 + 0x7c) + iVar2) *
                                 *(int *)(param_1 + 0x80) + iVar3) * 8)];
        dVar15 = ABS(local_120[3]);
        dVar12 = ABS(local_120[4]);
        if (dVar12 + local_120[1] <= dVar15) {
          dVar17 = dVar8 * local_120[1] + local_120[4];
        }
        else if (local_120[0] + dVar15 <= dVar12) {
          dVar17 = dVar8 * local_120[0] + local_120[3];
        }
        else {
          dVar17 = local_120[1] * local_120[1] + local_120[0] * local_120[0];
          dVar11 = dVar17 - (local_120[3] - local_120[4]) * (local_120[3] - local_120[4]);
          if (dVar11 < 0.0) {
            local_190 = local_120[0];
            dVar11 = sqrt(dVar11);
            uVar20 = SUB84(local_190,0);
            uVar21 = (undefined4)((ulonglong)local_190 >> 0x20);
          }
          else {
            dVar11 = SQRT(dVar11);
          }
          dVar17 = (dVar8 * local_120[0] * local_120[1] * dVar11 +
                   local_120[1] * local_120[1] * local_120[3] +
                   local_120[0] * local_120[0] * local_120[4]) / dVar17;
        }
        if ((iVar6 != 2) && (dVar8 = ABS(local_120[5]), dVar8 <= ABS(dVar17))) {
          dVar11 = (double)(&DAT_149931160)
                           [0.0 < *(double *)
                                   (*(longlong *)(local_188 + 0x88) +
                                   ((longlong)*(int *)(local_188 + 0x80) *
                                    ((longlong)*(int *)(local_188 + 0x7c) * (longlong)*local_170 +
                                    (longlong)local_170[1]) + (longlong)local_170[2]) * 8)];
          dVar14 = dVar8 + local_120[2];
          dVar13 = local_120[2];
          if (dVar14 <= dVar15) {
            dVar17 = dVar11 * local_120[2] + local_120[5];
          }
          else if ((double)CONCAT44(uVar21,uVar20) + dVar15 <= dVar8) {
            dVar17 = dVar11 * (double)CONCAT44(uVar21,uVar20) + local_120[3];
          }
          else {
            dVar13 = (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20);
            local_190 = (double)CONCAT44(uVar21,uVar20);
            dVar4 = local_120[2] * local_120[2];
            dVar17 = dVar13 + dVar4;
            dVar16 = dVar11 * local_190 * local_120[2];
            dVar11 = dVar17 - (local_120[3] - local_120[5]) * (local_120[3] - local_120[5]);
            if (dVar11 < 0.0) {
              local_158 = local_120[1];
              uStack_150 = 0;
              local_168 = local_120[4];
              uStack_160 = 0;
              local_178 = local_120[2];
              dVar11 = sqrt(dVar11);
              local_120[2] = local_178;
              uVar18 = (undefined4)local_158;
              uVar19 = local_158._4_4_;
              uVar22 = (undefined4)local_168;
              uVar23 = local_168._4_4_;
            }
            else {
              dVar11 = SQRT(dVar11);
            }
            dVar17 = (dVar16 * dVar11 + dVar4 * local_120[3] + dVar13 * local_120[5]) / dVar17;
            uVar20 = SUB84(local_190,0);
            uVar21 = (undefined4)((ulonglong)local_190 >> 0x20);
            dVar13 = local_120[2];
          }
          if (dVar12 <= ABS(dVar17)) {
            dVar11 = (double)(&DAT_149931160)
                             [0.0 < *(double *)
                                     (*(longlong *)(local_188 + 0x88) +
                                     ((longlong)*(int *)(local_188 + 0x80) *
                                      ((longlong)*(int *)(local_188 + 0x7c) * (longlong)*local_170 +
                                      (longlong)local_170[1]) + (longlong)local_170[2]) * 8)];
            if (dVar14 <= dVar12) {
              dVar17 = dVar11 * dVar13 + local_120[5];
            }
            else if (dVar12 + local_120[1] <= dVar8) {
              dVar17 = dVar11 * (double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar23,uVar22);
            }
            else {
              dVar8 = (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18);
              dVar12 = (double)CONCAT44(uVar23,uVar22) - local_120[5];
              dVar17 = dVar8 + dVar13 * dVar13;
              dVar12 = dVar17 - dVar12 * dVar12;
              if (dVar12 < 0.0) {
                dVar12 = sqrt(dVar12);
              }
              else {
                dVar12 = SQRT(dVar12);
              }
              dVar17 = (dVar11 * (double)CONCAT44(uVar19,uVar18) * dVar13 * dVar12 +
                       dVar13 * dVar13 * (double)CONCAT44(uVar23,uVar22) + dVar8 * local_120[5]) /
                       dVar17;
            }
            if (dVar15 <= ABS(dVar17)) {
              dVar14 = (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20);
              dVar12 = (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18);
              dVar11 = dVar13 * dVar13;
              dVar15 = (double)CONCAT44(uVar23,uVar22) - local_120[5];
              dVar8 = local_120[3] - (double)CONCAT44(uVar23,uVar22);
              dVar17 = dVar12 * dVar14 + dVar14 * dVar11 + dVar12 * dVar11;
              dVar8 = ((dVar17 - dVar15 * dVar15 * dVar14) -
                      (local_120[3] - local_120[5]) * (local_120[3] - local_120[5]) * dVar12) -
                      dVar8 * dVar8 * dVar11;
              dVar15 = 0.0;
              if (0.0 <= dVar8) {
                dVar15 = dVar8;
              }
              dVar13 = (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar21,uVar20) * dVar13;
              uVar10 = -(ulonglong)
                        (0.0 < *(double *)
                                (*(longlong *)(local_188 + 0x88) +
                                ((longlong)*(int *)(local_188 + 0x80) *
                                 ((longlong)*(int *)(local_188 + 0x7c) * (longlong)*local_170 +
                                 (longlong)local_170[1]) + (longlong)local_170[2]) * 8));
              dVar17 = (SQRT(dVar15) *
                        (double)(~uVar10 & (ulonglong)-dVar13 | (ulonglong)dVar13 & uVar10) +
                       dVar12 * dVar14 * local_120[5] +
                       dVar12 * dVar11 * local_120[3] +
                       dVar14 * dVar11 * (double)CONCAT44(uVar23,uVar22)) / dVar17;
            }
          }
        }
      }
      if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return dVar17;
    }
  } while( true );
}



// FUNCTION 146dd4773 FUN_146dd4773 body=393 status=ok
// SIG undefined FUN_146dd4773(void)

void FUN_146dd4773(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  
  dVar7 = param_2[2];
  dVar5 = param_3[2] - dVar7;
  dVar10 = *param_2;
  dVar1 = param_2[1];
  dVar4 = param_3[1] - dVar1;
  dVar9 = *param_3 - dVar10;
  dVar11 = param_4[2] - dVar7;
  dVar3 = param_4[1] - dVar1;
  dVar2 = *param_4 - dVar10;
  dVar8 = dVar5 * dVar5 + dVar9 * dVar9 + dVar4 * dVar4;
  dVar12 = dVar11 * dVar11 + dVar2 * dVar2 + dVar3 * dVar3;
  dVar6 = dVar5 * dVar11 + dVar9 * dVar2 + dVar4 * dVar3;
  dVar4 = dVar4 * (param_5[1] - dVar1) + (*param_5 - dVar10) * dVar9 + (param_5[2] - dVar7) * dVar5;
  dVar7 = (param_5[2] - dVar7) * dVar11 + (*param_5 - dVar10) * dVar2 + (param_5[1] - dVar1) * dVar3
  ;
  dVar10 = dVar8 * dVar12 - dVar6 * dVar6;
  *param_1 = (dVar12 * dVar4 - dVar7 * dVar6) / dVar10;
  param_1[1] = (dVar8 * dVar7 - dVar4 * dVar6) / dVar10;
  return;
}



// FUNCTION 146dd48fc FUN_146dd48fc body=201 status=ok
// SIG undefined FUN_146dd48fc(void)

ulonglong FUN_146dd48fc(longlong param_1,double *param_2)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e405e4(param_1 + 0x20,&local_58,param_2);
  dVar1 = (local_48 - param_2[2]) * (local_48 - param_2[2]) +
          (local_58 - *param_2) * (local_58 - *param_2) +
          (local_50 - param_2[1]) * (local_50 - param_2[1]);
  dVar3 = (double)FUN_146e40c4a(param_1 + 0x20,param_1 + 0x78,&local_58);
  uVar2 = -(ulonglong)(0.0 < dVar1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & (ulonglong)(SQRT(dVar1) + dVar3) | ~uVar2 & (ulonglong)dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd49c6 FUN_146dd49c6 body=191 status=ok
// SIG undefined FUN_146dd49c6(void)

void FUN_146dd49c6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  iVar6 = 0;
  if (iVar5 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_140268ec4(param_2,0);
    iVar6 = (int)param_2[1];
    iVar5 = *(int *)((longlong)param_2 + 0xc);
  }
  *(int *)(param_2 + 1) = iVar6 + 6;
  if ((uint)(iVar5 - iVar6) < 6) {
    FUN_14026a4e8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)*param_2;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar7 = uVar4 ^ 0x80000000;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 0x18) = uVar3;
  *(uint *)(lVar2 + 0x1c) = uVar7;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined4 *)(lVar2 + 0x38) = uVar3;
  *(uint *)(lVar2 + 0x3c) = uVar4;
  *(undefined4 *)(lVar2 + 0x40) = uVar3;
  *(uint *)(lVar2 + 0x44) = uVar4;
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined4 *)(lVar2 + 0x50) = uVar3;
  *(uint *)(lVar2 + 0x54) = uVar7;
  *(undefined4 *)(lVar2 + 0x58) = uVar3;
  *(uint *)(lVar2 + 0x5c) = uVar4;
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined4 *)(lVar2 + 0x68) = uVar3;
  *(uint *)(lVar2 + 0x6c) = uVar7;
  *(undefined4 *)(lVar2 + 0x70) = uVar3;
  *(uint *)(lVar2 + 0x74) = uVar7;
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined4 *)(lVar2 + 0x80) = uVar3;
  *(uint *)(lVar2 + 0x84) = uVar4;
  *(undefined4 *)(lVar2 + 0x88) = uVar3;
  *(uint *)(lVar2 + 0x8c) = uVar7;
  return;
}



// FUNCTION 146dd4a86 FUN_146dd4a86 body=42 status=ok
// SIG undefined FUN_146dd4a86(void)

void FUN_146dd4a86(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140268ec4();
    return;
  }
  return;
}



// FUNCTION 146dd4ab1 FUN_146dd4ab1 body=308 status=ok
// SIG undefined FUN_146dd4ab1(void)

void FUN_146dd4ab1(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  iVar6 = 0;
  if (iVar5 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_140268ec4(param_2,0);
    iVar6 = (int)param_2[1];
    iVar5 = *(int *)((longlong)param_2 + 0xc);
  }
  *(int *)(param_2 + 1) = iVar6 + 8;
  if ((uint)(iVar5 - iVar6) < 8) {
    FUN_14026a4e8(param_2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar3[1] = uVar2;
  puVar3[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar4 + 0x50) = uVar1;
  *(undefined8 *)(lVar4 + 0x58) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar4 + 0x68) = uVar2;
  *(undefined8 *)(lVar4 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar4 + 0x80) = uVar2;
  *(undefined8 *)(lVar4 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
  *(undefined8 *)(lVar4 + 0xa0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar4 + 0xb0) = uVar2;
  *(undefined8 *)(lVar4 + 0xb8) = uVar1;
  return;
}



// FUNCTION 146dd4be5 FUN_146dd4be5 body=428 status=ok
// SIG undefined FUN_146dd4be5(void)

void FUN_146dd4be5(longlong param_1,longlong *param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  iVar7 = 0;
  if (iVar6 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_140268ec4(param_2,0);
    iVar7 = (int)param_2[1];
    iVar6 = *(int *)((longlong)param_2 + 0xc);
  }
  *(int *)(param_2 + 1) = iVar7 + 0xe;
  if ((uint)(iVar6 - iVar7) < 0xe) {
    FUN_14026a4e8();
  }
  dVar11 = *(double *)(param_1 + 0x50) * 0.5;
  dVar1 = *(double *)(param_1 + 0x10);
  pdVar2 = (double *)*param_2;
  *pdVar2 = dVar1 + dVar11;
  dVar10 = -dVar11;
  pdVar2[1] = 0.0;
  pdVar2[2] = 0.0;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x18) = dVar10 - dVar1;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x30) = dVar11;
  *(double *)(lVar3 + 0x38) = dVar1;
  *(double *)(lVar3 + 0x40) = dVar1;
  dVar8 = -dVar1;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x48) = dVar11;
  *(double *)(lVar3 + 0x50) = dVar8;
  *(double *)(lVar3 + 0x58) = dVar1;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x60) = dVar11;
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar4._8_4_ = SUB84(dVar1,0);
  auVar4._0_8_ = dVar8;
  auVar4._12_4_ = uVar9;
  *(undefined1 (*) [16])(lVar3 + 0x68) = auVar4;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x78) = dVar11;
  *(double *)(lVar3 + 0x80) = dVar1;
  *(double *)(lVar3 + 0x88) = dVar8;
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(double *)(lVar3 + 0x98) = dVar1;
  *(double *)(lVar3 + 0xa0) = dVar1;
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(double *)(lVar3 + 0xb0) = dVar8;
  *(double *)(lVar3 + 0xb8) = dVar1;
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = dVar8;
  auVar5._12_4_ = uVar9;
  *(undefined1 (*) [16])(lVar3 + 200) = auVar5;
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(double *)(lVar3 + 0xe0) = dVar1;
  *(double *)(lVar3 + 0xe8) = dVar8;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0xf0) = dVar10;
  *(double *)(lVar3 + 0xf8) = dVar1;
  *(double *)(lVar3 + 0x100) = dVar1;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x108) = dVar10;
  *(double *)(lVar3 + 0x110) = dVar8;
  *(double *)(lVar3 + 0x118) = dVar1;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x120) = dVar10;
  *(double *)(lVar3 + 0x128) = dVar8;
  *(double *)(lVar3 + 0x130) = dVar8;
  lVar3 = *param_2;
  *(double *)(lVar3 + 0x138) = dVar10;
  *(double *)(lVar3 + 0x140) = dVar1;
  *(double *)(lVar3 + 0x148) = dVar8;
  return;
}



// FUNCTION 146dd4d91 FUN_146dd4d91 body=185 status=ok
// SIG undefined FUN_146dd4d91(void)

void FUN_146dd4d91(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_146dd4a86(param_2,*(undefined4 *)(param_1 + 0x38));
  iVar4 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar9 = 0;
    do {
      fVar1 = *(float *)(lVar6 + 8 + lVar9);
      fVar2 = *(float *)(lVar6 + 4 + lVar9);
      fVar3 = *(float *)(lVar6 + lVar9);
      iVar5 = (int)param_2[1];
      lVar8 = (longlong)iVar5;
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_14026a4e8(param_2,iVar5);
      }
      lVar7 = *param_2;
      *(double *)(lVar7 + lVar8 * 0x18) = (double)fVar3;
      *(double *)(lVar7 + 8 + lVar8 * 0x18) = (double)fVar2;
      *(double *)(lVar7 + 0x10 + lVar8 * 0x18) = (double)fVar1;
      lVar9 = lVar9 + 0xc;
    } while ((longlong)iVar4 * 0xc != lVar9);
  }
  return;
}



// FUNCTION 146dd4e4a thunk_FUN_146dd4e50 body=5 status=ok
// SIG undefined thunk_FUN_146dd4e50(void)

undefined8
thunk_FUN_146dd4e50(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd49c6(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd4e50 FUN_146dd4e50 body=747 status=ok
// SIG undefined FUN_146dd4e50(void)

undefined8
FUN_146dd4e50(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd49c6(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd513c thunk_FUN_146dd5142 body=5 status=ok
// SIG undefined thunk_FUN_146dd5142(void)

undefined8
thunk_FUN_146dd5142(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4ab1(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5142 FUN_146dd5142 body=747 status=ok
// SIG undefined FUN_146dd5142(void)

undefined8
FUN_146dd5142(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4ab1(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd542e thunk_FUN_146dd5434 body=5 status=ok
// SIG undefined thunk_FUN_146dd5434(void)

undefined8
thunk_FUN_146dd5434(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4be5(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5434 FUN_146dd5434 body=747 status=ok
// SIG undefined FUN_146dd5434(void)

undefined8
FUN_146dd5434(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4be5(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5720 thunk_FUN_146dd5726 body=5 status=ok
// SIG undefined thunk_FUN_146dd5726(void)

undefined8
thunk_FUN_146dd5726(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4d91(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5726 FUN_146dd5726 body=747 status=ok
// SIG undefined FUN_146dd5726(void)

undefined8
FUN_146dd5726(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146dd4d91(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5a12 thunk_FUN_146dd5a18 body=5 status=ok
// SIG undefined thunk_FUN_146dd5a18(void)

undefined8
thunk_FUN_146dd5a18(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddc9c8(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5a18 FUN_146dd5a18 body=747 status=ok
// SIG undefined FUN_146dd5a18(void)

undefined8
FUN_146dd5a18(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddc9c8(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5d04 thunk_FUN_146dd5d0a body=5 status=ok
// SIG undefined thunk_FUN_146dd5d0a(void)

undefined8
thunk_FUN_146dd5d0a(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddca6a(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5d0a FUN_146dd5d0a body=747 status=ok
// SIG undefined FUN_146dd5d0a(void)

undefined8
FUN_146dd5d0a(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddca6a(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5ff6 thunk_FUN_146dd5ffc body=5 status=ok
// SIG undefined thunk_FUN_146dd5ffc(void)

undefined8
thunk_FUN_146dd5ffc(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddcb0c(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd5ffc FUN_146dd5ffc body=747 status=ok
// SIG undefined FUN_146dd5ffc(void)

undefined8
FUN_146dd5ffc(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddcb0c(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd62e8 thunk_FUN_146dd62ee body=5 status=ok
// SIG undefined thunk_FUN_146dd62ee(void)

undefined8
thunk_FUN_146dd62ee(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                   undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  double *pdStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined1 auStack_fc [4];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdStack_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddcbae(param_2,&pdStack_b8);
  *param_6 = 1.79769313486232e+308;
  dStack_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = pdStack_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = pdStack_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      dStack_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      auStack_118._8_4_ = SUB84(dVar10,0);
      auStack_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      auStack_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      puStack_128 = auStack_fc;
      puStack_130 = &uStack_d8;
      puStack_138 = &uStack_f8;
      pdStack_140 = &dStack_c0;
      uStack_148 = 0;
      FUN_146dadc76(param_1,auStack_118,param_4,param_5);
      if (dStack_c0 < *param_6) {
        *param_6 = dStack_c0;
        param_7[2] = uStack_e8;
        *param_7 = uStack_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = uStack_c8;
        *param_8 = (undefined4)uStack_d8;
        param_8[1] = uStack_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (pdStack_b8 != (double *)0x0) {
    FUN_1400020a8(pdStack_b8);
  }
  if ((uStack_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd62ee FUN_146dd62ee body=747 status=ok
// SIG undefined FUN_146dd62ee(void)

undefined8
FUN_146dd62ee(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,undefined8 *param_7,undefined4 *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  double *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = (double *)0x0;
  uStack_b0 = 0;
  FUN_146ddcbae(param_2,&local_b8);
  *param_6 = 1.79769313486232e+308;
  local_c0 = 1.79769313486232e+308;
  uVar7 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    pdVar1 = local_b8 + (longlong)(int)uStack_b0 * 3;
    uVar7 = 0;
    pdVar8 = local_b8;
    do {
      dVar9 = *pdVar8 * param_3[8];
      dVar10 = pdVar8[1] * param_3[9];
      dVar3 = pdVar8[2] * param_3[10];
      dVar4 = *param_3;
      dVar5 = param_3[1];
      dVar6 = param_3[2];
      dVar2 = param_3[3];
      dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
      dVar12 = dVar3 * dVar5 - dVar10 * dVar6;
      dVar13 = dVar9 * dVar6 - dVar4 * dVar3;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_108 = dVar11 * dVar2 + dVar3 + (dVar13 * dVar4 - dVar12 * dVar5) + param_3[6];
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar2 * dVar12 + dVar9 + param_3[4];
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_128 = local_fc;
      local_130 = &local_d8;
      local_138 = &local_f8;
      local_140 = &local_c0;
      local_148 = 0;
      FUN_146dadc76(param_1,local_118,param_4,param_5);
      if (local_c0 < *param_6) {
        *param_6 = local_c0;
        param_7[2] = local_e8;
        *param_7 = local_f8;
        param_7[1] = uStack_f0;
        *(undefined8 *)(param_8 + 4) = local_c8;
        *param_8 = (undefined4)local_d8;
        param_8[1] = local_d8._4_4_;
        param_8[2] = (undefined4)uStack_d0;
        param_8[3] = uStack_d0._4_4_;
        uVar7 = 1;
      }
      pdVar8 = pdVar8 + 3;
    } while (pdVar8 != pdVar1);
  }
  if (local_b8 != (double *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146dd65da FUN_146dd65da body=130 status=ok
// SIG undefined FUN_146dd65da(void)

void FUN_146dd65da(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146dd665e(param_1,&local_28,DAT_14c75f1bc);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd665e FUN_146dd665e body=781 status=ok
// SIG undefined FUN_146dd665e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_146dd665e(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(double *)(param_1 + 0x10) <= 9.999999747378752e-05) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_14026a4e8(param_2,0);
    puVar1 = (undefined8 *)*param_2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return param_2;
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    FUN_140268ec4(param_2,param_3);
    dVar2 = *(double *)(param_1 + 0x10);
    iVar7 = (int)param_2[1];
    iVar6 = *(int *)((longlong)param_2 + 0xc);
    if ((param_3 != 1) && (9.999999747378752e-05 <= dVar2)) {
      *(uint *)(param_2 + 1) = iVar7 + param_3;
      if ((uint)(iVar6 - iVar7) < param_3) {
        FUN_14026a4e8(param_2,iVar7);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c993db0) && (FUN_144b3d300(&DAT_14c993db0), DAT_14c993db0 == -1))
      {
        _DAT_14c993da8 = 10.166407667536578;
        _Init_thread_footer(&DAT_14c993db0);
      }
      dVar4 = (double)(int)param_3;
      lVar8 = (longlong)iVar7 * 0x18 + 0x10;
      dVar5 = 0.0;
      do {
        dVar12 = dVar5 + 0.5;
        dVar9 = 1.0 - (dVar12 + dVar12) / dVar4;
        dVar10 = dVar9;
        if (1.0 <= dVar9) {
          dVar10 = 1.0;
        }
        dVar10 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar10));
        dVar12 = dVar12 * _DAT_14c993da8;
        dVar9 = sin(dVar10);
        lVar3 = *param_2;
        dVar10 = cos(dVar10);
        dVar11 = sin(dVar12);
        dVar12 = cos(dVar12);
        *(double *)(lVar3 + -0x10 + lVar8) = dVar12 * dVar2 * dVar9 + 0.0;
        *(double *)(lVar3 + -8 + lVar8) = dVar11 * dVar2 * dVar9 + 0.0;
        *(double *)(lVar3 + lVar8) = dVar10 * dVar2 + 0.0;
        dVar5 = dVar5 + 1.0;
        lVar8 = lVar8 + 0x18;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return param_2;
    }
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (iVar6 != iVar7) goto LAB_146dd689d;
  }
  FUN_14026a4e8(param_2,iVar6);
LAB_146dd689d:
  lVar8 = *param_2;
  puVar1 = (undefined8 *)(lVar8 + (longlong)iVar7 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar7 * 0x18) = 0;
  return param_2;
}



// FUNCTION 146dd696b FUN_146dd696b body=123 status=ok
// SIG undefined FUN_146dd696b(void)

void FUN_146dd696b(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146ca1ea0(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd69e7 FUN_146dd69e7 body=3189 status=ok
// SIG undefined FUN_146dd69e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dd69e7(longlong param_1,double **param_2)

{
  double dVar1;
  undefined8 uVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
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
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined1 auStack_208 [40];
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  double *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  double local_160;
  double local_158;
  double local_150;
  undefined **local_148;
  undefined8 local_140;
  double local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined2 local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_198 = (double *)0x0;
  uStack_190 = 0;
  dVar18 = *(double *)(param_1 + 0x50);
  dVar16 = dVar18 * 0.5;
  dVar23 = *(double *)(param_1 + 0x30);
  dVar17 = dVar16 * *(double *)(param_1 + 0x48) + dVar23;
  dVar22 = *(double *)(param_1 + 0x20);
  dVar19 = *(double *)(param_1 + 0x28);
  dVar26 = dVar16 * *(double *)(param_1 + 0x40) + dVar19;
  dVar25 = *(double *)(param_1 + 0x38) * dVar16 + dVar22;
  dVar16 = *(double *)(param_1 + 0x10);
  dVar20 = dVar23 - dVar17;
  dVar1 = dVar19 - dVar26;
  dVar21 = dVar22 - dVar25;
  local_140 = 0;
  local_130 = 0x101;
  local_12e = 1;
  local_12c = 0x303;
  local_148 = &PTR_FUN_149f487f0;
  dVar17 = ((*(double *)(param_1 + 0x48) * dVar18 + dVar23) - dVar17) - dVar20;
  dVar23 = ((*(double *)(param_1 + 0x40) * dVar18 + dVar19) - dVar26) - dVar1;
  dVar22 = ((dVar18 * *(double *)(param_1 + 0x38) + dVar22) - dVar25) - dVar21;
  dVar18 = dVar17 * dVar17 + dVar22 * dVar22 + dVar23 * dVar23;
  if (9.999999747378752e-05 <= dVar18) {
    dVar18 = SQRT(dVar18);
    dVar17 = dVar17 / dVar18;
    dVar23 = dVar23 / dVar18;
    dVar22 = dVar22 / dVar18;
  }
  else {
    dVar23 = 0.0;
    dVar22 = 1.0;
    dVar17 = 0.0;
    dVar18 = 0.0;
    unaff_XMM9_Dc = 0;
    unaff_XMM9_Dd = 0;
  }
  local_138 = dVar16;
  local_128 = dVar21;
  local_120 = dVar1;
  local_118 = dVar20;
  local_110 = dVar22;
  local_108 = dVar23;
  local_100 = dVar17;
  local_f8 = dVar18;
  if ((DAT_14c75f1c0 < 2) || (dVar16 <= 9.99999993922529e-09)) {
    if (dVar18 <= 9.99999993922529e-09) {
      FUN_146db27a0(&local_198,1,1);
      dVar18 = dVar18 * 0.5;
      *local_198 = dVar22 * dVar18 + dVar21;
      local_198[1] = dVar23 * dVar18 + dVar1;
      local_198[2] = dVar20 + dVar18 * dVar17;
    }
    else {
      FUN_146db27a0(&local_198,3,1);
      *local_198 = dVar21 - dVar16 * dVar22;
      local_198[1] = dVar1 - dVar16 * dVar23;
      local_198[2] = dVar20 - dVar16 * dVar17;
      dVar19 = dVar18 * 0.5;
      local_198[3] = dVar22 * dVar19 + dVar21;
      local_198[4] = dVar19 * dVar23 + dVar1;
      local_198[5] = dVar19 * dVar17 + dVar20;
      dVar18 = dVar18 + dVar16;
      local_198[6] = dVar18 * dVar22 + dVar21;
      local_198[7] = dVar23 * dVar18 + dVar1;
      local_198[8] = dVar17 * dVar18 + dVar20;
    }
LAB_146dd737e:
    local_148 = &PTR_FUN_149f553e0;
    if (&local_198 == param_2) {
      if (local_198 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (double *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_198;
      *(int *)(param_2 + 1) = (int)uStack_190;
      *(int *)((longlong)param_2 + 0xc) = uStack_190._4_4_;
    }
    if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  dVar19 = dVar16 * 6.2831854820251465 * dVar18;
  uVar12 = 0;
  iVar10 = DAT_14c75f1c0;
  if (9.999999747378752e-05 < dVar19) {
    dVar19 = (double)DAT_14c75f1c0 * (dVar19 / (dVar16 * 12.566370964050293 * dVar16 + dVar19));
    auVar24._0_8_ = (double)((ulonglong)dVar19 & 0x8000000000000000 | 0x3fdfffffffffffff) + dVar19;
    auVar24._8_8_ = 0x3fdfffffffffffff;
    auVar24 = roundsd(auVar24,auVar24,0xb);
    uVar12 = (DAT_14c75f1c0 - (int)auVar24._0_8_) % 2 + (int)auVar24._0_8_;
    iVar10 = DAT_14c75f1c0 - uVar12;
  }
  iVar7 = (iVar10 - (iVar10 >> 0x1f) & 0xfffffffeU) + uVar12;
  if (-1 < iVar7) {
    uVar15 = iVar10 / 2;
    if (iVar7 == 0) {
      iVar7 = 0;
      iVar11 = 0;
    }
    else {
      FUN_140268ec4(&local_198);
      iVar7 = uStack_190._4_4_;
      iVar11 = (int)uStack_190;
    }
    local_168 = 0;
    uStack_190 = CONCAT44(uStack_190._4_4_,iVar11 + uVar15);
    if ((uint)(iVar7 - iVar11) < uVar15) {
      FUN_14026a4e8(&local_198,iVar11);
    }
    local_1d8 = dVar1;
    local_1d0 = dVar21;
    local_1c8 = dVar20;
    local_1c0 = dVar17;
    local_1b8 = dVar22;
    local_1b0 = dVar23;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c993db0) && (FUN_144b3d300(&DAT_14c993db0), DAT_14c993db0 == -1)) {
      _DAT_14c993da8 = 10.166407667536578;
      _Init_thread_footer(&DAT_14c993db0);
    }
    dVar18 = dVar18 * 0.5;
    if (1 < iVar10) {
      local_1e0 = (double)iVar11;
      lVar9 = (longlong)iVar11 * 0x18 + 0x10;
      dVar23 = 0.0;
      uVar14 = uVar15;
      do {
        dVar22 = dVar23 + 0.5;
        dVar20 = (dVar22 + dVar22) / ((double)(int)uVar15 + (double)(int)uVar15) + -1.0;
        dVar19 = dVar20;
        if (1.0 <= dVar20) {
          dVar19 = 1.0;
        }
        dVar19 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar19));
        dVar22 = (dVar22 + local_1e0) * _DAT_14c993da8;
        dVar20 = sin(dVar19);
        pdVar3 = local_198;
        dVar19 = cos(dVar19);
        dVar21 = sin(dVar22);
        dVar22 = cos(dVar22);
        *(double *)((longlong)pdVar3 + lVar9 + -0x10) = dVar22 * dVar16 * dVar20 + 0.0;
        *(double *)((longlong)pdVar3 + lVar9 + -8) = dVar21 * dVar16 * dVar20 + 0.0;
        *(double *)((longlong)pdVar3 + lVar9) = dVar19 * dVar16 - dVar18;
        dVar23 = dVar23 + 1.0;
        lVar9 = lVar9 + 0x18;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    local_1a8._8_4_ = unaff_XMM9_Dc;
    local_1a8._0_8_ = dVar18;
    local_1a8._12_4_ = unaff_XMM9_Dd;
    iVar4 = (int)uStack_190;
    iVar7 = (int)uStack_190 + uVar12;
    if (-1 < iVar7) {
      iVar8 = (int)uStack_190;
      iVar5 = uStack_190._4_4_;
      if (uStack_190._4_4_ < iVar7) {
        FUN_140268ec4(&local_198);
        iVar7 = (int)uStack_190 + uVar12;
        iVar8 = (int)uStack_190;
        iVar5 = uStack_190._4_4_;
      }
      uStack_190 = CONCAT44(uStack_190._4_4_,iVar7);
      if ((uint)(iVar5 - iVar8) < uVar12) {
        FUN_14026a4e8(&local_198,iVar8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c993dc0) && (FUN_144b3d300(&DAT_14c993dc0), DAT_14c993dc0 == -1))
      {
        _DAT_14c993db8 = 10.166407667536578;
        _Init_thread_footer(&DAT_14c993dc0);
      }
      if (0 < (int)uVar12) {
        lVar9 = (longlong)iVar8 * 0x18;
        uVar13 = 0;
        do {
          dVar23 = ((double)(int)uVar13 + 0.5 + (double)iVar4) * _DAT_14c993db8;
          dVar22 = (double)(int)uVar13 / (double)(int)(uVar12 - 1);
          dVar19 = sin(dVar23);
          dVar23 = cos(dVar23);
          *(double *)((longlong)local_198 + lVar9) = dVar23 * dVar16;
          *(double *)((longlong)local_198 + lVar9 + 8) = dVar19 * dVar16;
          *(double *)((longlong)local_198 + lVar9 + 0x10) =
               (1.0 - dVar22) * -dVar18 + dVar22 * dVar18;
          uVar13 = uVar13 + 1;
          lVar9 = lVar9 + 0x18;
        } while (uVar12 != uVar13);
      }
      uVar13 = uStack_190;
      iVar7 = (int)uStack_190;
      lVar9 = (longlong)(int)uStack_190;
      local_168 = 0;
      uStack_190 = CONCAT44(uStack_190._4_4_,(int)uStack_190 + uVar15);
      if ((uint)(uStack_190._4_4_ - iVar7) < uVar15) {
        FUN_14026a4e8(&local_198,uVar13 & 0xffffffff);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c993db0) && (FUN_144b3d300(&DAT_14c993db0), DAT_14c993db0 == -1))
      {
        _DAT_14c993da8 = 10.166407667536578;
        _Init_thread_footer(&DAT_14c993db0);
      }
      uVar2 = local_1a8._0_8_;
      if (1 < iVar10) {
        dVar23 = (double)(int)uVar15;
        local_1e0 = (double)iVar7;
        lVar9 = lVar9 * 0x18 + 0x10;
        dVar18 = 0.0;
        do {
          dVar22 = dVar18 + 0.5;
          dVar20 = (dVar22 + dVar22) / (dVar23 + dVar23);
          dVar19 = dVar20;
          if (1.0 <= dVar20) {
            dVar19 = 1.0;
          }
          dVar19 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar19));
          dVar22 = (dVar22 + local_1e0) * _DAT_14c993da8;
          dVar20 = sin(dVar19);
          pdVar3 = local_198;
          dVar19 = cos(dVar19);
          dVar21 = sin(dVar22);
          dVar22 = cos(dVar22);
          *(double *)((longlong)pdVar3 + lVar9 + -0x10) = dVar22 * dVar16 * dVar20 + 0.0;
          *(double *)((longlong)pdVar3 + lVar9 + -8) = dVar21 * dVar16 * dVar20 + 0.0;
          *(double *)((longlong)pdVar3 + lVar9) = dVar19 * dVar16 + (double)uVar2;
          dVar18 = dVar18 + 1.0;
          lVar9 = lVar9 + 0x18;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0x3ff0000000000000;
      FUN_140269010(&local_168,&local_188,&local_110);
      if (iVar11 < (int)uStack_190) {
        local_1c8 = local_1c8 - local_1c0 * dVar16;
        local_1d8 = local_1d8 - local_1b0 * dVar16;
        local_1d0 = local_1d0 - local_1b8 * dVar16;
        lVar6 = (longlong)iVar11;
        dVar18 = (double)CONCAT44(uStack_164,local_168);
        lVar9 = lVar6 * 0x18 + 0x10;
        do {
          dVar19 = *(double *)((longlong)local_198 + lVar9) + (double)uVar2 + dVar16;
          dVar22 = *(double *)((longlong)local_198 + lVar9 + -8) + 0.0;
          dVar20 = *(double *)((longlong)local_198 + lVar9 + -0x10) + 0.0;
          dVar1 = local_160 * dVar19 + dVar22 * -local_158;
          dVar1 = dVar1 + dVar1;
          dVar21 = dVar18 * dVar22 + dVar20 * -local_160;
          dVar21 = dVar21 + dVar21;
          dVar23 = local_158 * dVar20 + dVar19 * -dVar18;
          dVar23 = dVar23 + dVar23;
          *(double *)((longlong)local_198 + lVar9 + -0x10) =
               dVar23 * -local_158 + local_160 * dVar21 + dVar1 * local_150 + dVar20 + local_1d0;
          *(double *)((longlong)local_198 + lVar9 + -8) =
               dVar21 * -dVar18 + local_158 * dVar1 + local_150 * dVar23 + dVar22 + local_1d8;
          *(double *)((longlong)local_198 + lVar9) =
               dVar18 * dVar23 + dVar1 * -local_160 + local_150 * dVar21 + dVar19 + local_1c8;
          lVar6 = lVar6 + 1;
          lVar9 = lVar9 + 0x18;
        } while (lVar6 < (int)uStack_190);
      }
      goto LAB_146dd737e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 146dd765e FUN_146dd765e body=10 status=ok
// SIG undefined FUN_146dd765e(void)

void FUN_146dd765e(void)

{
  FUN_146dd7668();
  return;
}



// FUNCTION 146dd7668 FUN_146dd7668 body=706 status=ok
// SIG undefined FUN_146dd7668(void)

undefined8 FUN_146dd7668(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146dd65da(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd792c FUN_146dd792c body=10 status=ok
// SIG undefined FUN_146dd792c(void)

void FUN_146dd792c(void)

{
  FUN_146dd7936();
  return;
}



// FUNCTION 146dd7936 FUN_146dd7936 body=706 status=ok
// SIG undefined FUN_146dd7936(void)

undefined8 FUN_146dd7936(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146dd696b(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd7bfa FUN_146dd7bfa body=10 status=ok
// SIG undefined FUN_146dd7bfa(void)

void FUN_146dd7bfa(void)

{
  FUN_146dd7c04();
  return;
}



// FUNCTION 146dd7c04 FUN_146dd7c04 body=706 status=ok
// SIG undefined FUN_146dd7c04(void)

undefined8 FUN_146dd7c04(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146dd69e7(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd7ec8 FUN_146dd7ec8 body=10 status=ok
// SIG undefined FUN_146dd7ec8(void)

void FUN_146dd7ec8(void)

{
  FUN_146dd7ed2();
  return;
}



// FUNCTION 146dd7ed2 FUN_146dd7ed2 body=706 status=ok
// SIG undefined FUN_146dd7ed2(void)

undefined8 FUN_146dd7ed2(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146dd4d91(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd8196 FUN_146dd8196 body=10 status=ok
// SIG undefined FUN_146dd8196(void)

void FUN_146dd8196(void)

{
  FUN_146dd81a0();
  return;
}



// FUNCTION 146dd81a0 FUN_146dd81a0 body=706 status=ok
// SIG undefined FUN_146dd81a0(void)

undefined8 FUN_146dd81a0(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146ddcc50(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd8464 FUN_146dd8464 body=10 status=ok
// SIG undefined FUN_146dd8464(void)

void FUN_146dd8464(void)

{
  FUN_146dd846e();
  return;
}



// FUNCTION 146dd846e FUN_146dd846e body=706 status=ok
// SIG undefined FUN_146dd846e(void)

undefined8 FUN_146dd846e(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146ddccf2(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd8732 FUN_146dd8732 body=10 status=ok
// SIG undefined FUN_146dd8732(void)

void FUN_146dd8732(void)

{
  FUN_146dd873c();
  return;
}



// FUNCTION 146dd873c FUN_146dd873c body=706 status=ok
// SIG undefined FUN_146dd873c(void)

undefined8 FUN_146dd873c(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146ddcd94(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd8a00 FUN_146dd8a00 body=10 status=ok
// SIG undefined FUN_146dd8a00(void)

void FUN_146dd8a00(void)

{
  FUN_146dd8a0a();
  return;
}



// FUNCTION 146dd8a0a FUN_146dd8a0a body=706 status=ok
// SIG undefined FUN_146dd8a0a(void)

undefined8 FUN_146dd8a0a(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 != (double *)0x0) {
    param_4[6] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  local_c8 = (double *)0x0;
  uStack_c0 = 0;
  FUN_146ddce36(param_2,&local_c8);
  if ((longlong)(int)uStack_c0 == 0) {
    uVar5 = 0;
  }
  else {
    pdVar1 = local_c8 + (longlong)(int)uStack_c0 * 3;
    uVar5 = 0;
    pdVar6 = local_c8;
    do {
      dVar9 = *pdVar6 * param_3[8];
      dVar10 = pdVar6[1] * param_3[9];
      dVar7 = pdVar6[2] * param_3[10];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar8 = param_3[3];
      dVar11 = dVar10 * dVar2 - dVar9 * dVar3;
      dVar12 = dVar7 * dVar3 - dVar10 * dVar4;
      dVar13 = dVar9 * dVar4 - dVar2 * dVar7;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar10 = (dVar4 * dVar12 - dVar2 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
      local_e8 = dVar11 * dVar8 + dVar7 + (dVar13 * dVar2 - dVar12 * dVar3) + param_3[6];
      local_f8._8_4_ = SUB84(dVar10,0);
      local_f8._0_8_ = (dVar11 * dVar3 - dVar13 * dVar4) + dVar8 * dVar12 + dVar9 + param_3[4];
      local_f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar8 = (double)FUN_146dd2aa0(param_1,local_f8,&local_e0);
      if ((param_4 == (double *)0x0) ||
         (dVar11 = -dVar8, dVar11 < param_4[6] || dVar11 == param_4[6])) {
        if (dVar8 <= 0.0) {
          uVar5 = 1;
          break;
        }
      }
      else {
        param_4[6] = dVar11;
        param_4[2] = local_d0;
        *param_4 = local_e0;
        param_4[1] = dStack_d8;
        param_4[3] = (double)local_f8._0_8_ - *param_4 * dVar8;
        param_4[4] = (double)local_f8._8_8_ - param_4[1] * dVar8;
        param_4[5] = local_e8 - param_4[2] * dVar8;
        uVar5 = 1;
      }
      pdVar6 = pdVar6 + 3;
    } while (pdVar6 != pdVar1);
  }
  if (local_c8 != (double *)0x0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146dd8ccd FUN_146dd8ccd body=881 status=ok
// SIG undefined FUN_146dd8ccd(void)

void FUN_146dd8ccd(longlong *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_188 [32];
  double local_168 [17];
  int local_dc [3];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fVar15 = 0.0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar8 = (longlong *)*param_2;
    lVar11 = (longlong)*(int *)*plVar8;
    lVar2 = *param_1;
    dVar18 = (double)*(float *)(lVar2 + 8 + lVar11 * 0xc);
    dVar17 = (double)*(float *)(lVar2 + 4 + lVar11 * 0xc);
    dVar16 = (double)*(float *)(lVar2 + lVar11 * 0xc);
    plVar7 = plVar8 + (longlong)*(int *)(param_2 + 1) * 2;
    dVar14 = 0.0;
    dVar19 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    do {
      lVar11 = plVar8[1];
      if (2 < (int)lVar11) {
        lVar3 = *plVar8;
        iVar10 = 0;
        do {
          local_dc[0] = 0;
          local_dc[1] = iVar10 + 1;
          local_dc[2] = iVar10 + 2;
          local_168[0xe] = 0.0;
          local_168[0xf] = 0.0;
          local_168[0xc] = 0.0;
          local_168[0xd] = 0.0;
          local_168[10] = 0.0;
          local_168[0xb] = 0.0;
          local_168[8] = 0.0;
          local_168[9] = 0.0;
          local_168[6] = 0.0;
          local_168[7] = 0.0;
          local_168[4] = 0.0;
          local_168[5] = 0.0;
          local_168[2] = 0.0;
          local_168[3] = 0.0;
          local_168[0] = 0.0;
          local_168[1] = 0.0;
          lVar9 = 0;
          do {
            lVar12 = (longlong)*(int *)(lVar3 + (longlong)local_dc[lVar9] * 4);
            fVar15 = *(float *)(lVar2 + 8 + lVar12 * 0xc);
            fVar1 = *(float *)(lVar2 + 4 + lVar12 * 0xc);
            local_168[lVar9] = (double)*(float *)(lVar2 + lVar12 * 0xc) - dVar16;
            local_168[lVar9 + 4] = (double)fVar1 - dVar17;
            local_168[lVar9 + 8] = (double)fVar15 - dVar18;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          dVar6 = (local_168[4] * local_168[9] - local_168[8] * local_168[5]) * local_168[2] +
                  ((local_168[5] * local_168[10] - local_168[9] * local_168[6]) * local_168[0] -
                  (local_168[10] * local_168[4] - local_168[6] * local_168[8]) * local_168[1]);
          dVar5 = dVar5 + (local_168[0] + local_168[1] + local_168[2]) * dVar6;
          dVar4 = dVar4 + (local_168[4] + local_168[5] + local_168[6]) * dVar6;
          dVar14 = dVar14 + dVar6;
          dVar19 = dVar19 + dVar6 * (local_168[8] + local_168[9] + local_168[10]);
          bVar13 = iVar10 != (int)lVar11 + -3;
          iVar10 = iVar10 + 1;
        } while (bVar13);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
    fVar15 = 0.0;
    if (0.0001 <= dVar14) {
      dVar6 = dVar14 * 4.0;
      *param_4 = (float)(dVar5 / dVar6 + dVar16);
      param_4[1] = (float)(dVar4 / dVar6 + dVar17);
      param_4[2] = (float)(dVar19 / dVar6 + dVar18);
      fVar15 = (float)(dVar14 / 6.0);
    }
  }
  *param_3 = fVar15;
  if ((local_d0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd903f thunk_FUN_146dd8ccd body=5 status=ok
// SIG undefined thunk_FUN_146dd8ccd(void)

void thunk_FUN_146dd8ccd(longlong *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_188 [32];
  double adStack_168 [17];
  int aiStack_dc [3];
  ulonglong uStack_d0;
  
  uStack_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fVar15 = 0.0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar8 = (longlong *)*param_2;
    lVar11 = (longlong)*(int *)*plVar8;
    lVar2 = *param_1;
    dVar18 = (double)*(float *)(lVar2 + 8 + lVar11 * 0xc);
    dVar17 = (double)*(float *)(lVar2 + 4 + lVar11 * 0xc);
    dVar16 = (double)*(float *)(lVar2 + lVar11 * 0xc);
    plVar7 = plVar8 + (longlong)*(int *)(param_2 + 1) * 2;
    dVar14 = 0.0;
    dVar19 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    do {
      lVar11 = plVar8[1];
      if (2 < (int)lVar11) {
        lVar3 = *plVar8;
        iVar10 = 0;
        do {
          aiStack_dc[0] = 0;
          aiStack_dc[1] = iVar10 + 1;
          aiStack_dc[2] = iVar10 + 2;
          adStack_168[0xe] = 0.0;
          adStack_168[0xf] = 0.0;
          adStack_168[0xc] = 0.0;
          adStack_168[0xd] = 0.0;
          adStack_168[10] = 0.0;
          adStack_168[0xb] = 0.0;
          adStack_168[8] = 0.0;
          adStack_168[9] = 0.0;
          adStack_168[6] = 0.0;
          adStack_168[7] = 0.0;
          adStack_168[4] = 0.0;
          adStack_168[5] = 0.0;
          adStack_168[2] = 0.0;
          adStack_168[3] = 0.0;
          adStack_168[0] = 0.0;
          adStack_168[1] = 0.0;
          lVar9 = 0;
          do {
            lVar12 = (longlong)*(int *)(lVar3 + (longlong)aiStack_dc[lVar9] * 4);
            fVar15 = *(float *)(lVar2 + 8 + lVar12 * 0xc);
            fVar1 = *(float *)(lVar2 + 4 + lVar12 * 0xc);
            adStack_168[lVar9] = (double)*(float *)(lVar2 + lVar12 * 0xc) - dVar16;
            adStack_168[lVar9 + 4] = (double)fVar1 - dVar17;
            adStack_168[lVar9 + 8] = (double)fVar15 - dVar18;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          dVar6 = (adStack_168[4] * adStack_168[9] - adStack_168[8] * adStack_168[5]) *
                  adStack_168[2] +
                  ((adStack_168[5] * adStack_168[10] - adStack_168[9] * adStack_168[6]) *
                   adStack_168[0] -
                  (adStack_168[10] * adStack_168[4] - adStack_168[6] * adStack_168[8]) *
                  adStack_168[1]);
          dVar5 = dVar5 + (adStack_168[0] + adStack_168[1] + adStack_168[2]) * dVar6;
          dVar4 = dVar4 + (adStack_168[4] + adStack_168[5] + adStack_168[6]) * dVar6;
          dVar14 = dVar14 + dVar6;
          dVar19 = dVar19 + dVar6 * (adStack_168[8] + adStack_168[9] + adStack_168[10]);
          bVar13 = iVar10 != (int)lVar11 + -3;
          iVar10 = iVar10 + 1;
        } while (bVar13);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
    fVar15 = 0.0;
    if (0.0001 <= dVar14) {
      dVar6 = dVar14 * 4.0;
      *param_4 = (float)(dVar5 / dVar6 + dVar16);
      param_4[1] = (float)(dVar4 / dVar6 + dVar17);
      param_4[2] = (float)(dVar19 / dVar6 + dVar18);
      fVar15 = (float)(dVar14 / 6.0);
    }
  }
  *param_3 = fVar15;
  if ((uStack_d0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd9044 FUN_146dd9044 body=127 status=ok
// SIG undefined FUN_146dd9044(void)

longlong * FUN_146dd9044(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = FUN_146ddced8;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0xffffffffffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_146dd92fc(puVar1 + 2,0,0);
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *param_1 = (longlong)(puVar1 + 2);
  return param_1;
}



// FUNCTION 146dd90c4 FUN_146dd90c4 body=17 status=ok
// SIG undefined FUN_146dd90c4(void)

void FUN_146dd90c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 146dd90d6 FUN_146dd90d6 body=70 status=ok
// SIG undefined FUN_146dd90d6(void)

void FUN_146dd90d6(longlong param_1,int param_2)

{
  LOCK();
  *(undefined4 *)(param_1 + 0x58) = 0;
  UNLOCK();
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_146de3078(param_1 + 0x48);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_146dd92fc(param_1,(longlong)(param_2 * 3),(longlong)(param_2 * 3));
  return;
}



// FUNCTION 146dd911c FUN_146dd911c body=25 status=ok
// SIG undefined FUN_146dd911c(void)

void FUN_146dd911c(longlong *param_1,int param_2,int param_3)

{
  FUN_146dd93a4(*param_1 + 0x48,(param_2 + param_3 * 2) * 9 + *(int *)(*param_1 + 0x58),1);
  return;
}



// FUNCTION 146dd9136 FUN_146dd9136 body=250 status=ok
// SIG undefined FUN_146dd9136(void)

void FUN_146dd9136(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_2 == param_3) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x58);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 9;
    UNLOCK();
    lVar7 = 0;
    do {
      lVar5 = (longlong)iVar3 * 0xc;
      lVar9 = 0;
      do {
        uVar2 = param_4[lVar9];
        lVar10 = *(longlong *)(param_1 + 0x48);
        *(int *)(lVar10 + lVar5) = param_2 * 3 + (int)lVar7;
        *(int *)(lVar10 + 4 + lVar5) = param_2 * 3 + (int)lVar9;
        *(undefined4 *)(lVar10 + 8 + lVar5) = uVar2;
        lVar9 = lVar9 + 1;
        lVar5 = lVar5 + 0xc;
      } while (lVar9 != 3);
      iVar3 = iVar3 + 3;
      lVar7 = lVar7 + 1;
      param_4 = param_4 + 4;
    } while (lVar7 != 3);
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0x58);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 0x12;
    UNLOCK();
    lVar7 = 0;
    do {
      lVar5 = (longlong)iVar3;
      iVar8 = param_2 * 3 + (int)lVar7;
      iVar3 = iVar3 + 6;
      lVar9 = 0;
      puVar6 = param_4;
      iVar4 = param_3 * 3;
      do {
        uVar2 = *puVar6;
        lVar10 = *(longlong *)(param_1 + 0x48) + lVar5 * 0xc;
        *(int *)(lVar9 + lVar10) = iVar8;
        *(int *)(lVar9 + 4 + lVar10) = iVar4;
        *(undefined4 *)(lVar9 + 8 + lVar10) = uVar2;
        uVar2 = *puVar6;
        lVar10 = *(longlong *)(param_1 + 0x48) + lVar5 * 0xc;
        *(int *)(lVar9 + 0xc + lVar10) = iVar4;
        *(int *)(lVar9 + 0x10 + lVar10) = iVar8;
        *(undefined4 *)(lVar9 + 0x14 + lVar10) = uVar2;
        lVar9 = lVar9 + 0x18;
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0x48);
      lVar7 = lVar7 + 1;
      param_4 = param_4 + 4;
    } while (lVar7 != 3);
  }
  return;
}



// FUNCTION 146dd9230 FUN_146dd9230 body=106 status=ok
// SIG undefined FUN_146dd9230(void)

void FUN_146dd9230(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  FUN_146dd93a4(lVar1 + 0x48,*(undefined4 *)(lVar1 + 0x58),0);
  local_20 = *(longlong *)(lVar1 + 0x48);
  local_18 = local_20 + (longlong)*(int *)(lVar1 + 0x50) * 0xc;
  FUN_146de3200(&local_20,&local_18,lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd929c FUN_146dd929c body=96 status=ok
// SIG undefined FUN_146dd929c(void)

undefined8 FUN_146dd929c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c993bd8 != 1) {
    if (DAT_14c993bd8 == 0) {
      uVar1 = FUN_1429b7fe4(*param_1);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar1 = FUN_1429b8184(*param_1);
  return uVar1;
}



// FUNCTION 146dd92fc FUN_146dd92fc body=168 status=ok
// SIG undefined FUN_146dd92fc(void)

void FUN_146dd92fc(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_2 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_2 * 4 + 4 +
                          (ulonglong)((param_2 & 0x3fffffffffffffff) == 0x3fffffffffffffff));
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    *(ulonglong *)(param_1 + 8) = param_2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_2 = *(ulonglong *)(param_1 + 8);
  }
  memset(*(void **)(param_1 + 0x18),0,param_2 * 4 + 4);
  return;
}



// FUNCTION 146dd93a4 FUN_146dd93a4 body=116 status=ok
// SIG undefined FUN_146dd93a4(void)

void FUN_146dd93a4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146de30be(param_1,iVar1);
    }
    FUN_146de30a8((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146de3152(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146dd941a FUN_146dd941a body=168 status=ok
// SIG undefined FUN_146dd941a(void)

void FUN_146dd941a(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_2 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_2 * 4 + 4 +
                          (ulonglong)((param_2 & 0x3fffffffffffffff) == 0x3fffffffffffffff));
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    *(ulonglong *)(param_1 + 8) = param_2;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_2 = *(ulonglong *)(param_1 + 8);
  }
  memset(*(void **)(param_1 + 0x18),0,param_2 * 4 + 4);
  return;
}



// FUNCTION 146dd965a FUN_146dd965a body=222 status=ok
// SIG undefined FUN_146dd965a(void)

void FUN_146dd965a(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dStack_60 = (double)*(float *)(param_1 + 0x4c);
  local_68 = (double)*(float *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  dStack_70 = (double)*(float *)(param_1 + 0x44);
  local_78 = (double)*(float *)(param_1 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  local_80 = *(undefined8 **)(param_1 + 0x50);
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = *(int *)(local_80 + 1) + 1;
    UNLOCK();
  }
  FUN_1400ed869(param_1 + 0x78,&local_80,&local_78,uVar2);
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_80 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_80 + 0xc) == 0)) {
      (**(code **)*local_80)(local_80,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd973a FUN_146dd973a body=80 status=ok
// SIG undefined FUN_146dd973a(void)

void FUN_146dd973a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x1c) == '\x05') {
    local_18 = param_2;
    local_10 = param_1;
    FUN_146dd978c(param_1,1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd978c FUN_146dd978c body=180 status=ok
// SIG undefined FUN_146dd978c(void)

void FUN_146dd978c(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c992a90 == '\0') {
    FUN_144a61b4f();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || (local_40 = *(longlong *)(lVar1 + 8), local_40 == 0)) {
    local_40 = 0;
    param_2 = 0;
  }
  else if (param_2 == 1) {
    param_2 = DAT_14c993c90 + 1;
  }
  local_48 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  FUN_1429b923a(&local_48,param_1 + 0x50);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd9854 FUN_146dd9854 body=136 status=ok
// SIG undefined FUN_146dd9854(void)

void FUN_146dd9854(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined4 local_28;
  longlong local_20;
  undefined4 **local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x88)) {
    lVar1 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x80);
    }
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2 * 8) == param_2) {
        local_30 = &local_c;
        local_c = (undefined4)lVar2;
        local_18 = &local_30;
        local_28 = 1;
        local_20 = param_1;
        FUN_146dd9922();
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x88) != lVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd98de FUN_146dd98de body=66 status=ok
// SIG undefined FUN_146dd98de(void)

void FUN_146dd98de(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  local_10 = param_2;
  FUN_146dd9922(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd9922 FUN_146dd9922 body=178 status=ok
// SIG undefined FUN_146dd9922(void)

void FUN_146dd9922(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c992a90 == '\0') {
    FUN_144a61b4f();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || (local_38 = *(longlong *)(lVar1 + 8), local_38 == 0)) {
    local_38 = 0;
    local_28 = 0;
  }
  else {
    local_28 = DAT_14c993c90 + 1;
  }
  local_40 = param_1;
  local_30 = param_2;
  FUN_146de7670(&local_40,param_1 + 0x50);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd99e8 FUN_146dd99e8 body=69 status=ok
// SIG undefined FUN_146dd99e8(void)

void FUN_146dd99e8(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  lVar1 = *(longlong *)(lVar1 + (longlong)param_2 * 8);
  if ((((*(int *)(lVar1 + 0x60) == *param_3) && (*(int *)(lVar1 + 100) == param_3[1])) &&
      (*(int *)(lVar1 + 0x68) == param_3[2])) && (*(int *)(lVar1 + 0x6c) == param_3[3])) {
    return;
  }
  FUN_144aa44d4(lVar1,param_3);
  return;
}



// FUNCTION 146dd9a2e FUN_146dd9a2e body=115 status=ok
// SIG undefined FUN_146dd9a2e(void)

undefined8 * FUN_146dd9a2e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)param_1[1];
    if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
      puVar1 = param_1;
    }
    FUN_1447a0744(puVar1,*(undefined4 *)(param_1 + 2));
    if (param_2[1] == 0) {
      *param_1 = *param_2;
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0x100000000;
  }
  return param_1;
}



// FUNCTION 146dd9aa2 FUN_146dd9aa2 body=85 status=ok
// SIG undefined FUN_146dd9aa2(void)

void FUN_146dd9aa2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_2 + 8) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
      lVar1 != 0)) && (*(char *)(lVar1 + 0x1c) == '\x05')) {
    FUN_146daf3bc();
    plVar2 = (longlong *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000146dd9aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,(longlong)(int)param_1[1],(longlong)(int)param_1[1] * 8 + plVar2[0xc]);
    return;
  }
  return;
}



// FUNCTION 146dd9af8 FUN_146dd9af8 body=110 status=ok
// SIG undefined FUN_146dd9af8(void)

void FUN_146dd9af8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if ((lVar1 != 0) && ((*(char *)(lVar1 + 0x1c) == '\x0f' || (*(char *)(lVar1 + 0x1c) == '\x05'))))
  {
    FUN_146d8d7f0(*param_1,(longlong)(int)param_1[1],param_2);
    FUN_146daf556(lVar1,param_2);
    plVar2 = (longlong *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000146dd9b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,(longlong)(int)param_1[1],(longlong)(int)param_1[1] * 8 + plVar2[0xc]);
    return;
  }
  return;
}



// FUNCTION 146dd9b66 FUN_146dd9b66 body=91 status=ok
// SIG undefined FUN_146dd9b66(void)

void FUN_146dd9b66(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x278);
  *(undefined8 *)(lVar1 + (longlong)(int)lVar2 * 0xc) = 0;
  *(undefined4 *)(lVar1 + 8 + (longlong)(int)lVar2 * 0xc) = 0;
  lVar2 = param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x290);
  *(undefined8 *)(lVar1 + (longlong)(int)lVar2 * 0xc) = 0;
  *(undefined4 *)(lVar1 + 8 + (longlong)(int)lVar2 * 0xc) = 0;
  *(ushort *)(*(longlong *)(*param_1 + 0x170) + (longlong)(int)param_1[1] * 2) =
       (ushort)(DAT_14c75f288 == 1) << 3;
  return;
}



// FUNCTION 146dd9bc2 FUN_146dd9bc2 body=117 status=ok
// SIG undefined FUN_146dd9bc2(void)

undefined8 *
FUN_146dd9bc2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x18,0x10);
  FUN_140125b88(uVar1,param_2,param_3,param_4,param_5);
  FUN_146dd9b66(uVar1,param_5);
  *param_1 = uVar1;
  FUN_1429aed1a(param_2,param_3,uVar1);
  return param_1;
}



// FUNCTION 146dd9c38 FUN_146dd9c38 body=816 status=ok
// SIG undefined FUN_146dd9c38(void)

void FUN_146dd9c38(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98 [3];
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c75f1c4 < *(int *)(param_1 + 0x10)) {
    local_a8 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
    FUN_146d8ea16(&local_58,(longlong *)(param_1 + 8),param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_98[2] = 0;
    uStack_80 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_141087922(&local_68,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(local_98 + 2,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(local_98,*(undefined4 *)(param_1 + 0x10));
    plVar1 = (longlong *)(param_1 + 0x88);
    FUN_144a9ff88(plVar1,local_50 + 1);
    if ((longlong)local_50 == 0) {
      uVar8 = 0;
    }
    else {
      plVar10 = local_58 + (longlong)local_50 * 2;
      lVar9 = 0;
      plVar7 = local_58;
      do {
        iVar2 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar9;
        lVar5 = plVar7[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar3 = *plVar7;
          lVar9 = (longlong)(int)lVar9;
          lVar6 = lVar9 * 0xc;
          lVar11 = 0;
          do {
            lVar12 = (longlong)*(int *)(lVar3 + lVar11);
            lVar4 = *(longlong *)(param_1 + 8);
            *(undefined4 *)(local_68 + 8 + lVar6) = *(undefined4 *)(lVar4 + 8 + lVar12 * 0xc);
            *(undefined8 *)(local_68 + lVar6) = *(undefined8 *)(lVar4 + lVar12 * 0xc);
            *(undefined4 *)(local_78 + lVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar12 * 4);
            *(undefined4 *)(local_98[2] + lVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar12 * 4);
            *(int *)(local_98[0] + lVar12 * 4) = (int)lVar9;
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + 0xc;
            lVar11 = lVar11 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar11);
        }
        uVar8 = (undefined4)lVar9;
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar10);
    }
    iVar2 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar8;
    if ((longlong *)(param_1 + 8) != &local_68) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if ((longlong *)(param_1 + 0x20) != &local_78) {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x20) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x2c) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0x30) != local_98 + 2) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x30) = local_98[2];
      local_98[2] = 0;
      *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x3c) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    FUN_141729db6(param_1 + 0x40,local_98);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dd9f6a FUN_146dd9f6a body=541 status=ok
// SIG undefined FUN_146dd9f6a(void)

void FUN_146dd9f6a(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)param_3;
  iVar1 = *(int *)(lVar4 + lVar7 * 0xc);
  iVar2 = *(int *)(lVar4 + 4 + lVar7 * 0xc);
  iVar3 = *(int *)(lVar4 + 8 + lVar7 * 0xc);
  local_68 = param_4;
  FUN_146dda188(param_1,&local_5c,param_2,param_3);
  fVar10 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
  if (fVar10 <= 1.0 - fVar10) {
    fVar10 = 1.0 - fVar10;
  }
  fVar9 = 2.0 / (fVar10 + 1.0);
  lVar4 = *(longlong *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x10);
  lVar8 = (longlong)iVar1 + (longlong)iVar5;
  lVar6 = *(longlong *)(lVar4 + 0x90);
  fVar10 = *(float *)(lVar6 + lVar8 * 4);
  if (0.0 < fVar10) {
    fVar10 = fVar10 * fVar9;
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    lVar8 = lVar8 * 0x10;
    *(float *)(lVar4 + lVar8) = *(float *)(lVar4 + lVar8) - local_5c * fVar10;
    *(float *)(lVar4 + 4 + lVar8) = *(float *)(lVar4 + 4 + lVar8) - local_58 * fVar10;
    *(float *)(lVar4 + 8 + lVar8) = *(float *)(lVar4 + 8 + lVar8) - fVar10 * local_54;
    lVar4 = *(longlong *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0x10);
    lVar6 = *(longlong *)(lVar4 + 0x90);
  }
  lVar8 = (longlong)iVar5 + (longlong)iVar2;
  fVar10 = *(float *)(lVar6 + lVar8 * 4);
  if (0.0 < fVar10) {
    fVar10 = fVar10 * fVar9 * *(float *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    lVar8 = lVar8 * 0x10;
    *(float *)(lVar4 + lVar8) = local_5c * fVar10 + *(float *)(lVar4 + lVar8);
    *(float *)(lVar4 + 4 + lVar8) = local_58 * fVar10 + *(float *)(lVar4 + 4 + lVar8);
    *(float *)(lVar4 + 8 + lVar8) = fVar10 * local_54 + *(float *)(lVar4 + 8 + lVar8);
    lVar4 = *(longlong *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0x10);
    lVar6 = *(longlong *)(lVar4 + 0x90);
  }
  lVar8 = (longlong)iVar5 + (longlong)iVar3;
  fVar10 = *(float *)(lVar6 + lVar8 * 4);
  if (0.0 < fVar10) {
    fVar10 = (1.0 - *(float *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4)) * fVar9 * fVar10;
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    lVar8 = lVar8 * 0x10;
    *(float *)(lVar4 + lVar8) = local_5c * fVar10 + *(float *)(lVar4 + lVar8);
    *(float *)(lVar4 + 4 + lVar8) = local_58 * fVar10 + *(float *)(lVar4 + 4 + lVar8);
    *(float *)(lVar4 + 8 + lVar8) = fVar10 * local_54 + *(float *)(lVar4 + 8 + lVar8);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dda188 FUN_146dda188 body=471 status=ok
// SIG undefined FUN_146dda188(void)

void FUN_146dda188(longlong param_1,float *param_2,longlong param_3,int param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar3 = (longlong)param_4;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)*(int *)(param_3 + 0x10);
  lVar5 = *(int *)(lVar1 + 8 + lVar3 * 0xc) + lVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
  fVar11 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
  lVar6 = *(int *)(lVar1 + 4 + lVar3 * 0xc) + lVar4;
  fVar7 = (1.0 - fVar11) * *(float *)(lVar2 + lVar5 * 4) + *(float *)(lVar2 + lVar6 * 4) * fVar11;
  lVar4 = *(int *)(lVar1 + lVar3 * 0xc) + lVar4;
  fVar8 = *(float *)(lVar2 + lVar4 * 4);
  fVar9 = 0.0;
  if ((((fVar8 != 0.0) || (NAN(fVar8))) || (fVar7 != 0.0)) || (NAN(fVar7))) {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0xa8);
    lVar4 = lVar4 * 0x10;
    lVar6 = lVar6 * 0x10;
    lVar5 = lVar5 * 0x10;
    fVar10 = *(float *)(lVar1 + 8 + lVar5);
    fVar14 = *(float *)(lVar1 + 4 + lVar5);
    fVar12 = *(float *)(lVar1 + 8 + lVar4) -
             ((*(float *)(lVar1 + 8 + lVar6) - fVar10) * fVar11 + fVar10);
    fVar10 = *(float *)(lVar1 + lVar4) -
             ((*(float *)(lVar1 + lVar6) - *(float *)(lVar1 + lVar5)) * fVar11 +
             *(float *)(lVar1 + lVar5));
    fVar11 = *(float *)(lVar1 + 4 + lVar4) -
             ((*(float *)(lVar1 + 4 + lVar6) - fVar14) * fVar11 + fVar14);
    fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (1e-08 < fVar13) {
      fVar9 = fVar13 - *(float *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4);
      fVar8 = fVar8 + fVar7;
      fVar15 = (fVar9 * (fVar12 / fVar13) * param_5) / fVar8;
      fVar14 = ((fVar11 / fVar13) * fVar9 * param_5) / fVar8;
      fVar9 = ((fVar10 / fVar13) * fVar9 * param_5) / fVar8;
    }
  }
  else {
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  *param_2 = fVar9;
  param_2[1] = fVar14;
  param_2[2] = fVar15;
  return;
}



// FUNCTION 146dda360 FUN_146dda360 body=838 status=ok
// SIG undefined FUN_146dda360(void)

void FUN_146dda360(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98 [3];
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c75f1c8 < *(int *)(param_1 + 0x10)) {
    local_a8 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_146d8f40e(&local_58,(longlong *)(param_1 + 8),param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_98[2] = 0;
    uStack_80 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_1412883ce(&local_68,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140bfb9f0(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(local_98 + 2,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a127d2(local_98,*(undefined4 *)(param_1 + 0x10));
    plVar1 = (longlong *)(param_1 + 0x120);
    FUN_144a9ff88(plVar1,local_50 + 1);
    if ((longlong)local_50 == 0) {
      iVar10 = 0;
    }
    else {
      plVar11 = local_58 + (longlong)local_50 * 2;
      iVar10 = 0;
      plVar9 = local_58;
      do {
        iVar4 = *(int *)(param_1 + 0x128);
        *(uint *)(param_1 + 0x128) = iVar4 + 1U;
        if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar10;
        lVar7 = plVar9[1];
        if ((longlong)(int)lVar7 != 0) {
          lVar5 = *plVar9;
          lVar8 = (longlong)iVar10 << 2;
          lVar12 = 0;
          do {
            lVar13 = (longlong)*(int *)(lVar5 + lVar12);
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar13 * 0x10);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(local_68 + lVar8 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            *(undefined8 *)(local_78 + lVar8 * 2) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8);
            *(undefined4 *)(local_98[2] + lVar8) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar13 * 4);
            *(int *)(local_98[0] + lVar13 * 4) = iVar10;
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 4;
            lVar12 = lVar12 + 4;
          } while ((longlong)(int)lVar7 * 4 != lVar12);
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar11);
    }
    iVar4 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar4 + 1U;
    if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
      FUN_1446f48e2(plVar1,iVar4);
    }
    *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar10;
    if ((longlong *)(param_1 + 8) != &local_68) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != &local_78) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0xf8) != local_98 + 2) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xf8) = local_98[2];
      local_98[2] = 0;
      *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x104) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    FUN_141729db6(param_1 + 0x30,local_98);
    FUN_141729db6(param_1 + 0x78,local_98);
    FUN_141729db6(param_1 + 0xb0,local_98);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dda6a8 FUN_146dda6a8 body=627 status=ok
// SIG undefined FUN_146dda6a8(void)

void FUN_146dda6a8(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)param_3 * 0x10;
  iVar1 = *(int *)(lVar5 + lVar6);
  iVar2 = *(int *)(lVar5 + 4 + lVar6);
  iVar3 = *(int *)(lVar5 + 8 + lVar6);
  iVar4 = *(int *)(lVar5 + 0xc + lVar6);
  FUN_146de79cc(param_1,&local_a0,param_2,param_3);
  local_b0 = param_5;
  local_b8 = param_4;
  fVar7 = (float)FUN_146de7a48(param_1,param_2,param_3,&local_a0);
  lVar6 = (longlong)*(int *)(param_2 + 0x10) + (longlong)iVar1;
  fVar8 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar6 * 4) * fVar7;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
  lVar6 = lVar6 * 0x10;
  *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - local_a0 * fVar8;
  *(float *)(lVar5 + 4 + lVar6) = *(float *)(lVar5 + 4 + lVar6) - local_9c * fVar8;
  *(float *)(lVar5 + 8 + lVar6) = *(float *)(lVar5 + 8 + lVar6) - fVar8 * local_98;
  lVar6 = (longlong)*(int *)(param_2 + 0x10) + (longlong)iVar2;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
  fVar8 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar6 * 4) * fVar7;
  lVar6 = lVar6 * 0x10;
  *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - local_94 * fVar8;
  *(float *)(lVar5 + 4 + lVar6) = *(float *)(lVar5 + 4 + lVar6) - local_90 * fVar8;
  *(float *)(lVar5 + 8 + lVar6) = *(float *)(lVar5 + 8 + lVar6) - fVar8 * local_8c;
  lVar6 = (longlong)*(int *)(param_2 + 0x10) + (longlong)iVar3;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
  fVar8 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar6 * 4) * fVar7;
  lVar6 = lVar6 * 0x10;
  *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - local_88 * fVar8;
  *(float *)(lVar5 + 4 + lVar6) = *(float *)(lVar5 + 4 + lVar6) - local_84 * fVar8;
  *(float *)(lVar5 + 8 + lVar6) = *(float *)(lVar5 + 8 + lVar6) - fVar8 * local_80;
  lVar6 = (longlong)*(int *)(param_2 + 0x10) + (longlong)iVar4;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
  fVar7 = fVar7 * *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar6 * 4);
  lVar6 = lVar6 * 0x10;
  *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - local_7c * fVar7;
  *(float *)(lVar5 + 4 + lVar6) = *(float *)(lVar5 + 4 + lVar6) - local_78 * fVar7;
  *(float *)(lVar5 + 8 + lVar6) = *(float *)(lVar5 + 8 + lVar6) - fVar7 * local_74;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dda91c FUN_146dda91c body=225 status=ok
// SIG undefined FUN_146dda91c(void)

void FUN_146dda91c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  
  FUN_14005ea14(param_3,*(undefined4 *)(param_2 + 1));
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar4 = (int *)*param_2;
    piVar3 = piVar4 + (longlong)*(int *)(param_2 + 1) * 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      fVar5 = (float)FUN_1408e9604(lVar2 + (longlong)*piVar4 * 0xc,lVar2 + (longlong)piVar4[1] * 0xc
                                   ,lVar2 + (longlong)piVar4[2] * 0xc,
                                   lVar2 + (longlong)piVar4[3] * 0xc);
      if (3.1415927 <= fVar5) {
        fVar5 = 3.1415927;
      }
      if (fVar5 <= -3.1415927) {
        fVar5 = -3.1415927;
      }
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_3,iVar1);
      }
      *(float *)(*param_3 + (longlong)iVar1 * 4) = fVar5;
      piVar4 = piVar4 + 4;
    } while (piVar4 != piVar3);
  }
  return;
}



// FUNCTION 146dda9fd FUN_146dda9fd body=484 status=ok
// SIG undefined FUN_146dda9fd(void)

void FUN_146dda9fd(int param_1,int param_2,longlong *param_3,float *param_4,undefined8 *param_5,
                  longlong *param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  FUN_14005ea14(param_6,*(undefined4 *)(param_5 + 1));
  if ((longlong)*(int *)(param_5 + 1) != 0) {
    piVar3 = (int *)*param_5;
    piVar2 = piVar3 + (longlong)*(int *)(param_5 + 1) * 4;
    do {
      fVar4 = *param_4;
      if ((int)param_3[1] == param_2) {
        for (fVar5 = (*(float *)(*param_3 + ((longlong)*piVar3 - (longlong)param_1) * 4) *
                      (param_4[1] - fVar4) + fVar4) * 0.017453292; 3.1415927 < fVar5;
            fVar5 = fVar5 + -6.2831855) {
        }
        for (; fVar5 < -3.1415927; fVar5 = fVar5 + 6.2831855) {
        }
        for (fVar4 = ((param_4[1] - fVar4) *
                      *(float *)(*param_3 + ((longlong)piVar3[1] - (longlong)param_1) * 4) + fVar4)
                     * 0.017453292; 3.1415927 < fVar4; fVar4 = fVar4 + -6.2831855) {
        }
        for (; fVar4 < -3.1415927; fVar4 = fVar4 + 6.2831855) {
        }
        fVar4 = (float)(~-(uint)(ABS(fVar5) < ABS(fVar4)) & (uint)fVar4 |
                       (uint)fVar5 & -(uint)(ABS(fVar5) < ABS(fVar4)));
      }
      else {
        for (fVar4 = fVar4 * 0.017453292; 3.1415927 < fVar4; fVar4 = fVar4 + -6.2831855) {
        }
        for (; fVar4 < -3.1415927; fVar4 = fVar4 + 6.2831855) {
        }
      }
      if (3.1415927 <= fVar4) {
        fVar4 = 3.1415927;
      }
      if (fVar4 <= -3.1415927) {
        fVar4 = -3.1415927;
      }
      iVar1 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_6,iVar1);
      }
      *(float *)(*param_6 + (longlong)iVar1 * 4) = fVar4;
      piVar3 = piVar3 + 4;
    } while (piVar3 != piVar2);
  }
  return;
}



// FUNCTION 146ddabe2 FUN_146ddabe2 body=134 status=ok
// SIG undefined FUN_146ddabe2(void)

void FUN_146ddabe2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0xf8;
  param_1 = param_1 + 8;
  if (param_7 == '\x01') {
    FUN_146ddad61(param_2,param_3,param_4,param_5,param_6,param_1,lVar1);
  }
  else {
    if (param_7 != '\x02') {
      FUN_146ddac68(param_2,param_1,lVar1);
      return;
    }
    FUN_146dda9fd(param_3,param_4,param_5,param_6,param_1,lVar1);
  }
  return;
}



// FUNCTION 146ddac68 FUN_146ddac68 body=249 status=ok
// SIG undefined FUN_146ddac68(void)

void FUN_146ddac68(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  
  FUN_14005ea14(param_3,*(undefined4 *)(param_2 + 1));
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar5 = (int *)*param_2;
    piVar4 = piVar5 + (longlong)*(int *)(param_2 + 1) * 4;
    do {
      lVar3 = (longlong)*(int *)(param_1 + 0x10);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      fVar6 = (float)FUN_1408e9604(lVar2 + (*piVar5 + lVar3) * 0xc,lVar2 + (piVar5[1] + lVar3) * 0xc
                                   ,lVar2 + (piVar5[2] + lVar3) * 0xc,
                                   lVar2 + (piVar5[3] + lVar3) * 0xc);
      if (3.1415927 <= fVar6) {
        fVar6 = 3.1415927;
      }
      if (fVar6 <= -3.1415927) {
        fVar6 = -3.1415927;
      }
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_3,iVar1);
      }
      *(float *)(*param_3 + (longlong)iVar1 * 4) = fVar6;
      piVar5 = piVar5 + 4;
    } while (piVar5 != piVar4);
  }
  return;
}



// FUNCTION 146ddad61 FUN_146ddad61 body=577 status=ok
// SIG undefined FUN_146ddad61(void)

void FUN_146ddad61(longlong param_1,int param_2,int param_3,longlong *param_4,float *param_5,
                  undefined8 *param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  if ((int)param_4[1] != param_3) {
    if ((*param_5 == 1.0) && (!NAN(*param_5))) {
      FUN_144aa29e6(param_7,*(undefined4 *)(param_6 + 1),1);
      return;
    }
  }
  FUN_14005ea14(param_7,*(undefined4 *)(param_6 + 1));
  if ((longlong)*(int *)(param_6 + 1) != 0) {
    piVar3 = (int *)*param_6;
    piVar4 = piVar3 + (longlong)*(int *)(param_6 + 1) * 4;
    do {
      fVar5 = *param_5;
      if ((int)param_4[1] == param_3) {
        fVar5 = fVar5 + (*(float *)(*param_4 + (longlong)(*piVar3 - param_2) * 4) +
                        *(float *)(*param_4 + (longlong)(piVar3[1] - param_2) * 4)) *
                        (param_5[1] - fVar5) * 0.5;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar6 = (float)FUN_1408e9604(lVar2 + (longlong)(*piVar3 + iVar1) * 0xc,
                                   lVar2 + (longlong)(piVar3[1] + iVar1) * 0xc,
                                   lVar2 + ((longlong)piVar3[2] + (longlong)iVar1) * 0xc,
                                   lVar2 + ((longlong)piVar3[3] + (longlong)iVar1) * 0xc);
      fVar6 = fVar6 * (1.0 - fVar5);
      if (3.1415927 <= fVar6) {
        fVar6 = 3.1415927;
      }
      if (fVar6 <= -3.1415927) {
        fVar6 = -3.1415927;
      }
      iVar1 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_7,iVar1);
      }
      *(float *)(*param_7 + (longlong)iVar1 * 4) = fVar6;
      piVar3 = piVar3 + 4;
    } while (piVar3 != piVar4);
  }
  return;
}



// FUNCTION 146ddafa2 FUN_146ddafa2 body=184 status=ok
// SIG undefined FUN_146ddafa2(void)

undefined8 FUN_146ddafa2(longlong param_1,undefined8 param_2,double param_3)

{
  undefined1 auStack_b8 [32];
  double local_98 [6];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98[0] = *(double *)(*(longlong *)(param_1 + 0x88) + 0x10);
  local_98[0] = param_3 * 0.4 * local_98[0] * local_98[0];
  local_98[4] = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0x3ff0000000000000;
  local_40 = 0;
  local_98[5] = local_98[0];
  local_48 = local_98[0];
  FUN_146ddb05b(param_2,local_98,param_1 + 0x20,0);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddb05b FUN_146ddb05b body=354 status=ok
// SIG undefined FUN_146ddb05b(void)

void FUN_146ddb05b(double *param_1,double *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = ABS(param_3[2]);
  dVar3 = ABS(param_3[1]);
  dVar5 = ABS(*param_3);
  dVar4 = (param_2[5] + *param_2 + param_2[10]) * 0.5;
  dVar8 = (dVar4 - param_2[10]) * dVar7 * dVar7;
  dVar6 = (dVar4 - param_2[5]) * dVar3 * dVar3;
  dVar4 = (dVar4 - *param_2) * dVar5 * dVar5;
  if (param_4 == '\0') {
    dVar1 = 1.0;
  }
  else {
    dVar1 = dVar5 * dVar3 * dVar7;
  }
  dVar2 = param_2[6] * dVar3 * dVar7 * dVar1;
  dVar7 = param_2[2] * dVar5 * dVar7 * dVar1;
  dVar3 = dVar3 * param_2[1] * dVar5 * dVar1;
  *param_1 = (dVar6 + dVar8) * dVar1;
  param_1[4] = dVar3;
  param_1[8] = dVar7;
  param_1[1] = dVar3;
  param_1[5] = (dVar4 + dVar8) * dVar1;
  param_1[9] = dVar2;
  param_1[2] = dVar7;
  param_1[6] = dVar2;
  param_1[10] = (dVar4 + dVar6) * dVar1;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  return;
}



// FUNCTION 146ddb1be FUN_146ddb1be body=241 status=ok
// SIG undefined FUN_146ddb1be(void)

undefined8 FUN_146ddb1be(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  double local_98 [6];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x88);
  dVar3 = *(double *)(lVar1 + 0x48) - *(double *)(lVar1 + 0x30);
  dVar4 = *(double *)(lVar1 + 0x40) - *(double *)(lVar1 + 0x28);
  dVar2 = *(double *)(lVar1 + 0x38) - *(double *)(lVar1 + 0x20);
  param_3 = param_3 / 12.0;
  dVar2 = dVar2 * dVar2;
  dVar4 = dVar4 * dVar4;
  dVar3 = dVar3 * dVar3;
  local_48 = (dVar4 + dVar2) * param_3;
  local_98[5] = (dVar2 + dVar3) * param_3;
  local_98[0] = (dVar3 + dVar4) * param_3;
  local_98[4] = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0x3ff0000000000000;
  local_40 = 0;
  FUN_146ddb05b(param_2,local_98,param_1 + 0x20,0);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddb2b0 FUN_146ddb2b0 body=401 status=ok
// SIG undefined FUN_146ddb2b0(void)

undefined8 FUN_146ddb2b0(longlong param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_c8 [32];
  double local_a8 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar2 = *(double *)(*(longlong *)(param_1 + 0x88) + 0x10);
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x88) + 0x50);
  if (1.79769313486232e+308 <= dVar2) {
    dVar2 = 1.79769313486232e+308;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (1.79769313486232e+308 <= dVar1) {
    dVar1 = 1.79769313486232e+308;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar3 = dVar2 * dVar2;
  local_a8[0] = ((dVar3 * 32.0 * dVar2 +
                 dVar1 * 45.0 * dVar3 + dVar1 * dVar1 * 5.0 * dVar1 + dVar1 * dVar1 * 20.0 * dVar2)
                * param_3) / (dVar1 * 60.0 + dVar2 * 80.0);
  local_58 = ((dVar1 * 15.0 + dVar2 * 16.0) * dVar3 * param_3) / (dVar1 * 30.0 + dVar2 * 40.0);
  local_a8[4] = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  local_50 = 0;
  local_a8[5] = local_a8[0];
  FUN_146ddb05b(param_2,local_a8,param_1 + 0x20,0);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddb442 FUN_146ddb442 body=71 status=ok
// SIG undefined FUN_146ddb442(void)

undefined8 * FUN_146ddb442(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f57480;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ddb48a FUN_146ddb48a body=89 status=ok
// SIG undefined FUN_146ddb48a(void)

undefined8 * FUN_146ddb48a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145ceb326(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ddb4e4 FUN_146ddb4e4 body=217 status=ok
// SIG undefined FUN_146ddb4e4(void)

undefined8 * FUN_146ddb4e4(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f571e0;
  param_1[0x11] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    if (*(int *)(param_2 + 8) == 1) {
      LOCK();
      *(undefined4 *)(param_2 + 0xc) = 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = 0;
  FUN_146ddbe78(param_1,param_3);
  return param_1;
}



// FUNCTION 146ddb5be FUN_146ddb5be body=38 status=ok
// SIG undefined FUN_146ddb5be(void)

undefined8 FUN_146ddb5be(undefined8 param_1,int param_2)

{
  FUN_146ddbfba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ddb5f4 FUN_146ddb5f4 body=34 status=ok
// SIG undefined FUN_146ddb5f4(void)

longlong * FUN_146ddb5f4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146ddbff8();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ddb616 FUN_146ddb616 body=137 status=ok
// SIG undefined FUN_146ddb616(void)

longlong * FUN_146ddb616(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146ddbff8();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_146ddbe78(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddb6b6 FUN_146ddb6b6 body=743 status=ok
// SIG undefined FUN_146ddb6b6(void)

undefined8
FUN_146ddb6b6(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined8 param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_2[2] * *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x38);
  local_60 = param_2[1] * *(double *)(param_1 + 0x40);
  local_68 = *param_2 * dVar7;
  dVar4 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar5 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar8 = *param_3 * dVar7;
  dVar6 = SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5);
  if (2.2250738585072014e-308 < dVar6) {
    dVar1 = 1.0 / dVar6;
    local_70 = dVar4 * dVar1;
    local_78 = dVar5 * dVar1;
    local_80 = dVar8 * dVar1;
    local_e8 = dVar7 * param_5;
    local_c8 = param_9;
    local_d0 = &local_b0;
    local_d8 = &local_98;
    local_e0 = &local_b8;
    cVar2 = FUN_146dadc76(*(undefined8 *)(param_1 + 0x88),&local_68,&local_80,dVar6 * param_4);
    if (cVar2 != '\0') {
      dVar1 = dVar1 * local_b8;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (param_4 <= dVar1) goto LAB_146ddb778;
        dVar7 = *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28);
        *param_7 = *(double *)(param_1 + 0x20) * local_98;
        param_7[1] = dVar4 * local_90;
        param_7[2] = dVar7 * local_88;
        local_a0 = *(double *)(param_1 + 0x48) * local_a0;
        local_a8 = *(double *)(param_1 + 0x40) * local_a8;
        local_b0 = *(double *)(param_1 + 0x38) * local_b0;
        dVar7 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
        if (((dVar7 != 1.0) || (dVar5 = local_b0, dVar6 = local_a8, dVar4 = local_a0, NAN(dVar7)))
           && (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
              2.2250738585072014e-308 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar5 = local_b0 * dVar7;
          dVar6 = local_a8 * dVar7;
          dVar4 = local_a0 * dVar7;
        }
      }
      else {
        param_7[2] = param_2[2];
        dVar7 = param_2[1];
        *param_7 = *param_2;
        param_7[1] = dVar7;
        dVar5 = -*param_3;
        dVar6 = -param_3[1];
        dVar4 = -param_3[2];
      }
      *param_8 = dVar5;
      param_8[1] = dVar6;
      param_8[2] = dVar4;
      *param_6 = dVar1;
      uVar3 = 1;
      goto LAB_146ddb77a;
    }
  }
LAB_146ddb778:
  uVar3 = 0;
LAB_146ddb77a:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146ddb99e FUN_146ddb99e body=46 status=ok
// SIG undefined FUN_146ddb99e(void)

void FUN_146ddb99e(longlong param_1)

{
  FUN_146ca3b50(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 146ddbad2 FUN_146ddbad2 body=135 status=ok
// SIG undefined FUN_146ddbad2(void)

bool FUN_146ddbad2(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(double *)(param_1 + 0x48) * param_2[2];
  dVar1 = *(double *)(param_1 + 0x38);
  local_30 = *(double *)(param_1 + 0x40) * param_2[1];
  local_38 = *param_2 * dVar1;
  FUN_146dae118(*(undefined8 *)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3 * dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddbb5a FUN_146ddbb5a body=225 status=ok
// SIG undefined FUN_146ddbb5a(void)

undefined8 FUN_146ddbb5a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x88);
  local_78 = CONCAT44(local_78._4_4_,(uint)*(byte *)(lVar3 + 0x1a));
  FUN_140002266(&local_60,L"ImplicitObject bIsConvex:%d, bDoCollide:%d, bHasBoundingBox:%d",
                *(undefined1 *)(lVar3 + 0x18),*(undefined1 *)(lVar3 + 0x19));
  puVar6 = local_60;
  if (local_58 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar6,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ddbc3c FUN_146ddbc3c body=186 status=ok
// SIG undefined FUN_146ddbc3c(void)

void FUN_146ddbc3c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_146ddc162(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddbcf8 FUN_146ddbcf8 body=124 status=ok
// SIG undefined FUN_146ddbcf8(void)

void FUN_146ddbcf8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  uVar3 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  lVar1 = *(longlong *)(param_1 + 0x88);
  lVar5 = (longlong)*(int *)(lVar1 + 0x90);
  if (0 < lVar5) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x88) + lVar6 * 8);
      uVar4 = FUN_144a78877(uVar4,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2);
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
  }
  FUN_144a78877(uVar4,uVar3);
  return;
}



// FUNCTION 146ddbd78 FUN_146ddbd78 body=240 status=ok
// SIG undefined FUN_146ddbd78(void)

double * FUN_146ddbd78(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddbe78 FUN_146ddbe78 body=128 status=ok
// SIG undefined FUN_146ddbe78(void)

void FUN_146ddbe78(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_146ddbef8();
  return;
}



// FUNCTION 146ddbef8 FUN_146ddbef8 body=193 status=ok
// SIG undefined FUN_146ddbef8(void)

void FUN_146ddbef8(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  dVar5 = *(double *)(lVar1 + 200) * *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(lVar1 + 0xc0) * *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(lVar1 + 0xb8) * *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x30) * *(double *)(lVar1 + 0xe0);
  dVar8 = *(double *)(param_1 + 0x28) * *(double *)(lVar1 + 0xd8);
  dVar7 = *(double *)(param_1 + 0x20) * *(double *)(lVar1 + 0xd0);
  dVar2 = dVar5;
  if (dVar6 <= dVar5) {
    dVar2 = dVar6;
  }
  dVar3 = dVar9;
  if (dVar8 <= dVar9) {
    dVar3 = dVar8;
  }
  dVar4 = dVar10;
  if (dVar7 <= dVar10) {
    dVar4 = dVar7;
  }
  *(double *)(param_1 + 0x58) = dVar4;
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar2;
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  if (dVar10 <= dVar7) {
    dVar10 = dVar7;
  }
  *(double *)(param_1 + 0x70) = dVar10;
  *(double *)(param_1 + 0x78) = dVar9;
  *(double *)(param_1 + 0x80) = dVar5;
  return;
}



// FUNCTION 146ddbfba FUN_146ddbfba body=61 status=ok
// SIG undefined FUN_146ddbfba(void)

undefined4 FUN_146ddbfba(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 146ddbff8 FUN_146ddbff8 body=120 status=ok
// SIG undefined FUN_146ddbff8(void)

undefined8 FUN_146ddbff8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_146ddc072(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddc072 FUN_146ddc072 body=240 status=ok
// SIG undefined FUN_146ddc072(void)

undefined8 *
FUN_146ddc072(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f571e0;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_146ddbe78(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 146ddc162 FUN_146ddc162 body=147 status=ok
// SIG undefined FUN_146ddc162(void)

void FUN_146ddc162(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_146ddc1f6();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_146ddc5e6(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddc1f6 FUN_146ddc1f6 body=1006 status=ok
// SIG undefined FUN_146ddc1f6(void)

void FUN_146ddc1f6(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146ddc3e8;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146ddc3cf;
            iVar11 = *(int *)(lVar7 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      uVar10 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar10);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar10 = uVar4;
      }
      FUN_146db20be(uVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146ddc3e8;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar9[1];
    uVar5 = iVar6 - iVar11;
    if (uVar5 != 0 && iVar11 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar11) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146ddc508;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar11) {
      uVar10 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar10 == 0) {
        uVar10 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar10);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar10 = uVar4;
        }
        FUN_146db20be(uVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar10;
      }
      goto LAB_146ddc3e8;
    }
  }
LAB_146ddc508:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146ddc3e8:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146ddc3cf:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146ddc444;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146ddc444:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146ddc3e8;
}



// FUNCTION 146ddc5e6 FUN_146ddc5e6 body=310 status=ok
// SIG undefined FUN_146ddc5e6(void)

undefined8 * FUN_146ddc5e6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar4 = (undefined8 *)puVar1[1], puVar4 != (undefined8 *)0x0)) goto LAB_146ddc669;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_149f57488;
  puVar4[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar4;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_146ddc669:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 + 1;
}



// FUNCTION 146ddc71e FUN_146ddc71e body=74 status=ok
// SIG undefined FUN_146ddc71e(void)

undefined8 * FUN_146ddc71e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f57488;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ddc768 FUN_146ddc768 body=147 status=ok
// SIG undefined FUN_146ddc768(void)

void FUN_146ddc768(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ddc7fc FUN_146ddc7fc body=147 status=ok
// SIG undefined FUN_146ddc7fc(void)

void FUN_146ddc7fc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ddc890 FUN_146ddc890 body=62 status=ok
// SIG undefined FUN_146ddc890(void)

void FUN_146ddc890(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ddc8ce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146ddc8ce FUN_146ddc8ce body=112 status=ok
// SIG undefined FUN_146ddc8ce(void)

ulonglong FUN_146ddc8ce(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146ddc908;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146ddc908:
  return param_2 & 0xffffffff;
}



// FUNCTION 146ddc93e FUN_146ddc93e body=138 status=ok
// SIG undefined FUN_146ddc93e(void)

void FUN_146ddc93e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ddc9c8 FUN_146ddc9c8 body=162 status=ok
// SIG undefined FUN_146ddc9c8(void)

void FUN_146ddc9c8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd49c6(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddca6a FUN_146ddca6a body=162 status=ok
// SIG undefined FUN_146ddca6a(void)

void FUN_146ddca6a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd4ab1(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddcb0c FUN_146ddcb0c body=162 status=ok
// SIG undefined FUN_146ddcb0c(void)

void FUN_146ddcb0c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd4be5(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddcbae FUN_146ddcbae body=162 status=ok
// SIG undefined FUN_146ddcbae(void)

void FUN_146ddcbae(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd4d91(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddcc50 FUN_146ddcc50 body=162 status=ok
// SIG undefined FUN_146ddcc50(void)

void FUN_146ddcc50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd65da(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddccf2 FUN_146ddccf2 body=162 status=ok
// SIG undefined FUN_146ddccf2(void)

void FUN_146ddccf2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd696b(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddcd94 FUN_146ddcd94 body=162 status=ok
// SIG undefined FUN_146ddcd94(void)

void FUN_146ddcd94(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd69e7(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddce36 FUN_146ddce36 body=162 status=ok
// SIG undefined FUN_146ddce36(void)

void FUN_146ddce36(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  double *pdVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    FUN_146dd4d91(puVar6,param_2);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = *(double *)(param_1 + 0x30);
      pdVar7 = (double *)*param_2;
      pdVar2 = pdVar7 + (longlong)*(int *)(param_2 + 1) * 3;
      do {
        *pdVar7 = *pdVar7 * dVar3;
        pdVar7[1] = pdVar7[1] * dVar4;
        pdVar7[2] = pdVar7[2] * dVar5;
        pdVar7 = pdVar7 + 3;
      } while (pdVar7 != pdVar2);
    }
  }
  return;
}



// FUNCTION 146ddced8 FUN_146ddced8 body=44 status=ok
// SIG undefined FUN_146ddced8(void)

void FUN_146ddced8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_146ddcf04(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146ddcf04 FUN_146ddcf04 body=66 status=ok
// SIG undefined FUN_146ddcf04(void)

void FUN_146ddcf04(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ddcf46 FUN_146ddcf46 body=58 status=ok
// SIG undefined FUN_146ddcf46(void)

void FUN_146ddcf46(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0xe0));
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_146ddcf04(param_1 + 0x90);
  }
  FUN_146ddcf04(param_1 + 8);
  return;
}



// FUNCTION 146ddcf80 FUN_146ddcf80 body=109 status=ok
// SIG undefined FUN_146ddcf80(void)

undefined1 * FUN_146ddcf80(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_146dd92fc(param_1,0,0);
  param_1[0x48] = 0;
  param_1[0xd0] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_146ddcfee(param_1 + 0x48,param_1);
  return param_1;
}



// FUNCTION 146ddcfee FUN_146ddcfee body=146 status=ok
// SIG undefined FUN_146ddcfee(void)

void FUN_146ddcfee(undefined1 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(param_2 + 0x18);
  if (puVar7 == (undefined1 *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = FUN_146ddd080(param_2);
    lVar2 = *(longlong *)(param_2 + 0x10) * *(longlong *)(param_2 + 8);
    puVar7 = param_1 + 0x18;
    uVar3 = 1;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = FUN_146ddd080(param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    lVar2 = *(longlong *)(param_2 + 0x10);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 **)(param_1 + 0x20) = puVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  return;
}



// FUNCTION 146ddd080 FUN_146ddd080 body=124 status=ok
// SIG undefined FUN_146ddd080(void)

longlong FUN_146ddd080(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  longlong local_20 [2];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = (longlong)(*(int **)(param_1 + 0x18))[*(longlong *)(param_1 + 8)] -
            (longlong)**(int **)(param_1 + 0x18);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      local_40 = lVar3;
      local_38 = lVar1;
      local_20[0] = lVar3;
      local_10 = lVar1;
      iVar2 = FUN_146ddd0fe(local_20,&local_41);
      lVar3 = (longlong)iVar2;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddd0fe FUN_146ddd0fe body=254 status=ok
// SIG undefined FUN_146ddd0fe(void)

int FUN_146ddd0fe(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar2 = param_3[1];
  uVar6 = uVar2;
  if (((*param_3 & 3) == 0) &&
     (uVar6 = (ulonglong)(-((uint)(*param_3 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar2 <= (longlong)uVar6)) {
    uVar6 = uVar2;
  }
  uVar9 = uVar2 - uVar6;
  uVar5 = uVar9;
  uVar8 = uVar9;
  if ((longlong)uVar9 < 0) {
    uVar5 = uVar9 + 3;
    uVar8 = uVar9 + 7;
  }
  piVar3 = (int *)*param_1;
  if (uVar9 + 3 < 7) {
    iVar4 = *piVar3;
    if (1 < (longlong)uVar2) {
      uVar6 = 1;
      do {
        iVar4 = iVar4 + piVar3[uVar6];
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
  }
  else {
    auVar12 = *(undefined1 (*) [16])(piVar3 + uVar6);
    if (7 < (longlong)uVar9) {
      lVar7 = (uVar8 & 0xfffffffffffffff8) + uVar6;
      piVar1 = piVar3 + uVar6 + 4;
      iVar4 = *piVar1;
      iVar13 = piVar1[1];
      iVar14 = piVar1[2];
      iVar15 = piVar1[3];
      auVar11 = auVar12;
      if (0xf < uVar9) {
        lVar10 = uVar6 + 8;
        do {
          piVar1 = piVar3 + lVar10;
          auVar11._0_4_ = auVar12._0_4_ + *piVar1;
          auVar11._4_4_ = auVar12._4_4_ + piVar1[1];
          auVar11._8_4_ = auVar12._8_4_ + piVar1[2];
          auVar11._12_4_ = auVar12._12_4_ + piVar1[3];
          piVar1 = piVar3 + lVar10 + 4;
          iVar4 = iVar4 + *piVar1;
          iVar13 = iVar13 + piVar1[1];
          iVar14 = iVar14 + piVar1[2];
          iVar15 = iVar15 + piVar1[3];
          lVar10 = lVar10 + 8;
          auVar12 = auVar11;
        } while (lVar10 < lVar7);
      }
      auVar12._0_4_ = iVar4 + auVar11._0_4_;
      auVar12._4_4_ = iVar13 + auVar11._4_4_;
      auVar12._8_4_ = iVar14 + auVar11._8_4_;
      auVar12._12_4_ = iVar15 + auVar11._12_4_;
      if ((longlong)(uVar8 & 0xfffffffffffffff8) < (longlong)(uVar5 & 0xfffffffffffffffc)) {
        piVar1 = piVar3 + lVar7;
        auVar12._0_4_ = auVar12._0_4_ + *piVar1;
        auVar12._4_4_ = auVar12._4_4_ + piVar1[1];
        auVar12._8_4_ = auVar12._8_4_ + piVar1[2];
        auVar12._12_4_ = auVar12._12_4_ + piVar1[3];
      }
    }
    auVar12 = phaddd(auVar12,auVar12);
    auVar12 = phaddd(auVar12,auVar12);
    lVar7 = (uVar5 & 0xfffffffffffffffc) + uVar6;
    iVar4 = auVar12._0_4_;
    if (0 < (longlong)uVar6) {
      uVar8 = 0;
      do {
        iVar4 = iVar4 + piVar3[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    for (; lVar7 < (longlong)uVar2; lVar7 = lVar7 + 1) {
      iVar4 = iVar4 + piVar3[lVar7];
    }
  }
  return iVar4;
}



// FUNCTION 146ddd1fc FUN_146ddd1fc body=88 status=ok
// SIG undefined FUN_146ddd1fc(void)

void FUN_146ddd1fc(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_146ddcf04(param_1 + 0x88);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_146ddcfee(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 146ddd254 FUN_146ddd254 body=166 status=ok
// SIG undefined FUN_146ddd254(void)

longlong * FUN_146ddd254(longlong *param_1,longlong param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_146ddd2fa(param_1,*(undefined8 *)(param_2 + 0x10));
  if (0 < *(longlong *)(param_2 + 8)) {
    uVar2 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + uVar2 * 4);
      if (*(longlong *)(param_2 + 0x38) == 0) {
        lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + uVar2 * 4);
      }
      else {
        lVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + uVar2 * 4) + lVar3;
      }
      fVar5 = 1.0;
      if (lVar3 < lVar4) {
        do {
          if (uVar2 == *(uint *)(*(longlong *)(param_2 + 0x28) + lVar3 * 4)) {
            fVar1 = *(float *)(*(longlong *)(param_2 + 0x30) + lVar3 * 4);
            if ((fVar1 != 0.0) || (fVar5 = 1.0, NAN(fVar1))) {
              fVar5 = 1.0 / fVar1;
            }
            goto LAB_146ddd2b9;
          }
          lVar3 = lVar3 + 1;
        } while (lVar4 != lVar3);
        fVar5 = 1.0;
      }
LAB_146ddd2b9:
      *(float *)(*param_1 + uVar2 * 4) = fVar5;
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < *(longlong *)(param_2 + 8));
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 146ddd2fa FUN_146ddd2fa body=57 status=ok
// SIG undefined FUN_146ddd2fa(void)

void FUN_146ddd2fa(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1[1] != param_2) {
    FUN_1400020a8(*param_1);
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_141729e88(param_2);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 146ddd334 FUN_146ddd334 body=149 status=ok
// SIG undefined FUN_146ddd334(void)

void FUN_146ddd334(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar4 = uVar3;
  if (((uVar5 & 3) == 0) &&
     (uVar4 = (ulonglong)(-((uint)(uVar5 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar4)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar3 - uVar4;
  uVar5 = uVar7 + 3;
  if (-1 < (longlong)uVar7) {
    uVar5 = uVar7;
  }
  lVar6 = (uVar5 & 0xfffffffffffffffc) + uVar4;
  FUN_146ddd3ca(param_1,0,uVar4);
  if (3 < (longlong)uVar7) {
    do {
      uVar2 = *(undefined4 *)param_1[1];
      puVar1 = (undefined4 *)(*(longlong *)*param_1 + uVar4 * 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
      uVar4 = uVar4 + 4;
    } while ((longlong)uVar4 < lVar6);
  }
  FUN_146ddd3ca(param_1,lVar6,uVar3);
  return;
}



// FUNCTION 146ddd3ca FUN_146ddd3ca body=34 status=ok
// SIG undefined FUN_146ddd3ca(void)

void FUN_146ddd3ca(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) = *(undefined4 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146ddd3ec FUN_146ddd3ec body=124 status=ok
// SIG undefined FUN_146ddd3ec(void)

void FUN_146ddd3ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x60) * 2;
  }
  *(longlong *)(param_1 + 0x108) = lVar1;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x100);
  FUN_146ddd468(param_1 + 0x50,param_2,param_3,param_1 + 0xe0,param_1 + 0x108,param_1 + 0x104);
  *(uint *)(param_1 + 0x110) = (uint)(*(float *)(param_1 + 0x100) < *(float *)(param_1 + 0x104)) * 2
  ;
  return;
}



// FUNCTION 146ddd468 FUN_146ddd468 body=1483 status=ok
// SIG undefined FUN_146ddd468(void)

void FUN_146ddd468(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                  longlong *param_5,float *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  ulonglong *local_188;
  longlong local_180;
  ulonglong local_178;
  ulonglong *puStack_170;
  ulonglong local_168;
  ulonglong *puStack_160;
  ulonglong local_158;
  ulonglong *local_150;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_131;
  ulonglong *local_130;
  ulonglong *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  ulonglong *local_110;
  undefined8 local_108;
  ulonglong *local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  fVar9 = *param_6;
  local_190 = *param_5;
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  local_f0 = param_3[2];
  local_100 = (ulonglong *)*param_3;
  uStack_f8 = param_3[1];
  local_128 = (ulonglong *)*param_2;
  puStack_120 = (ulonglong *)param_2[1];
  local_118 = (ulonglong *)param_2[2];
  local_188 = param_4;
  local_108 = param_1;
  FUN_146ddda34(&local_148,&local_130);
  local_128 = (ulonglong *)*param_2;
  puStack_120 = (ulonglong *)param_2[1];
  local_118 = (ulonglong *)param_2[2];
  if (puStack_120 != (ulonglong *)0x0) {
    local_d0 = (ulonglong)local_128;
    local_c0 = puStack_120;
    fVar5 = (float)FUN_146dddcaa(&local_d8);
    fVar7 = 0.0;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      fVar8 = fVar9 * fVar9 * fVar5;
      fVar9 = 1.1754944e-38;
      if (1.1754944e-38 <= fVar8) {
        fVar9 = fVar8;
      }
      local_128 = &local_148;
      if (local_140 != 0) {
        local_d0 = local_148;
        fVar7 = (float)FUN_146dddd88(&local_d8,&local_130);
      }
      if (fVar7 < fVar9) {
        *param_5 = 0;
        fVar7 = fVar7 / fVar5;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        *param_6 = fVar7;
      }
      else {
        local_158 = 0;
        if (0 < (longlong)puVar1) {
          local_158 = FUN_141729e88(puVar1);
        }
        local_130 = local_188;
        local_150 = puVar1;
        local_128 = &local_148;
        FUN_146ddde6a();
        local_168 = 0;
        puStack_160 = (ulonglong *)0x0;
        puVar2 = puStack_160;
        if ((puVar1 == (ulonglong *)0x0) || (puVar2 = puVar1, (longlong)puVar1 < 1)) {
          puStack_160 = puVar2;
          local_178 = 0;
        }
        else {
          local_168 = FUN_141729e88(puVar1);
          puStack_170 = (ulonglong *)0x0;
          puStack_160 = puVar1;
          local_178 = FUN_141729e88(puVar1);
        }
        puStack_120 = &local_158;
        fVar8 = 0.0;
        puStack_170 = puVar1;
        local_128 = &local_148;
        if (local_150 != (ulonglong *)0x0) {
          local_d0 = local_148;
          local_c8 = local_158;
          fVar8 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
        }
        if (local_190 < 1) {
          lVar4 = 0;
        }
        else {
          lVar3 = 0;
          do {
            local_180 = lVar3;
            if (puStack_170 != *(ulonglong **)(param_1 + 8)) {
              FUN_146dddaba(&local_178,*(ulonglong **)(param_1 + 8),1);
            }
            FUN_146dde0e2(&local_178,param_1,&local_158);
            fVar7 = 0.0;
            fVar6 = 0.0;
            if (puStack_170 != (ulonglong *)0x0) {
              local_d0 = local_158;
              local_c8 = local_178;
              local_128 = &local_158;
              puStack_120 = &local_178;
              fVar6 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
            }
            local_d8 = CONCAT44(fVar8 / fVar6,(undefined4)local_d8);
            local_c8 = local_158;
            local_b8[0] = *param_3;
            local_a8 = param_3[1];
            puStack_120 = (ulonglong *)&local_131;
            local_130 = local_b8;
            local_128 = &local_d8;
            local_118 = param_3;
            FUN_146dde30a(&local_130);
            puStack_120 = puStack_170;
            local_118 = (ulonglong *)CONCAT44(fVar8 / fVar6,(undefined4)local_118);
            local_110 = &local_178;
            FUN_146dde3e1(&local_148,&local_130,&local_d8);
            local_128 = &local_148;
            if (local_140 != 0) {
              local_d0 = local_148;
              fVar7 = (float)FUN_146dddd88(&local_d8,&local_130);
            }
            lVar3 = local_180;
            lVar4 = local_180;
            if (fVar7 < fVar9) break;
            local_130 = local_188;
            local_128 = &local_148;
            FUN_146ddde6a(&local_168,&local_130);
            puStack_120 = &local_168;
            fVar6 = 0.0;
            if (puStack_160 != (ulonglong *)0x0) {
              local_d0 = local_148;
              local_c8 = local_168;
              local_128 = &local_148;
              fVar6 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
            }
            local_128 = &local_168;
            local_110 = local_150;
            local_108 = CONCAT44(fVar6 / fVar8,(undefined4)local_108);
            local_100 = &local_158;
            FUN_146dde4cc(local_100,&local_130,&local_d8);
            lVar3 = lVar3 + 1;
            lVar4 = local_190;
            fVar8 = fVar6;
          } while (local_190 != lVar3);
        }
        fVar7 = fVar7 / fVar5;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        *param_6 = fVar7;
        *param_5 = lVar4;
        FUN_1400020a8(local_178);
        FUN_1400020a8(local_168);
        FUN_1400020a8(local_158);
      }
      goto LAB_146ddd598;
    }
  }
  local_128 = local_b8;
  local_b8[0] = local_b8[0] & 0xffffffff00000000;
  local_d8 = *param_3;
  local_130 = &local_d8;
  local_c8 = param_3[1];
  puStack_120 = &local_158;
  local_118 = param_3;
  FUN_146ddd334();
  *param_5 = 0;
  *param_6 = 0.0;
LAB_146ddd598:
  FUN_1400020a8(local_148);
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ddda34 FUN_146ddda34 body=132 status=ok
// SIG undefined FUN_146ddda34(void)

undefined8 * FUN_146ddda34(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146dddaba(0,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8),1);
  FUN_146dddb31(param_1,param_2 + 8,&local_1d);
  local_1c = 0xbf800000;
  FUN_146dddc26(param_1,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dddaba FUN_146dddaba body=119 status=ok
// SIG undefined FUN_146dddaba(void)

void FUN_146dddaba(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 0 && param_2 != 0) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_3),0) < param_2)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  param_3 = param_3 * param_2;
  if (param_1[1] != param_3) {
    FUN_1400020a8(*param_1);
    if (param_3 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_141729e88(param_3);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 146dddb31 FUN_146dddb31 body=134 status=ok
// SIG undefined FUN_146dddb31(void)

void FUN_146dddb31(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = param_2[1];
  if (param_1[1] != local_20) {
    FUN_146dddaba(param_1,local_20,1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_146dddbb8();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dddbb8 FUN_146dddbb8 body=110 status=ok
// SIG undefined FUN_146dddbb8(void)

void FUN_146dddbb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 146dddc26 FUN_146dddc26 body=131 status=ok
// SIG undefined FUN_146dddc26(void)

void FUN_146dddc26(longlong *param_1,longlong param_2,longlong *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (0 < lVar1) {
    lVar2 = *param_3;
    lVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar4 * 4);
      if (*(longlong *)(param_2 + 0x38) == 0) {
        lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + lVar4 * 4);
      }
      else {
        lVar3 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar4 * 4) + lVar5;
      }
      fVar6 = 0.0;
      if (lVar5 < lVar3) {
        do {
          fVar6 = fVar6 + *(float *)(*(longlong *)(param_2 + 0x30) + lVar5 * 4) *
                          *(float *)(lVar2 + (longlong)
                                             *(int *)(*(longlong *)(param_2 + 0x28) + lVar5 * 4) * 4
                                    );
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
      }
      *(float *)(*param_1 + lVar4 * 4) = fVar6 * *param_4 + *(float *)(*param_1 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar1);
  }
  return;
}



// FUNCTION 146dddcaa FUN_146dddcaa body=222 status=ok
// SIG undefined FUN_146dddcaa(void)

undefined8 FUN_146dddcaa(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  uVar6 = uVar3;
  uVar5 = uVar3;
  if ((longlong)uVar3 < 0) {
    uVar6 = uVar3 + 3;
    uVar5 = uVar3 + 7;
  }
  pfVar4 = *(float **)(param_1 + 8);
  if (uVar3 + 3 < 7) {
    fVar10 = 0.0;
    fVar8 = *pfVar4 * *pfVar4;
    if (1 < (longlong)uVar3) {
      uVar5 = 1;
      do {
        fVar8 = fVar8 + pfVar4[uVar5] * pfVar4[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    fVar8 = *pfVar4 * *pfVar4;
    fVar10 = pfVar4[1] * pfVar4[1];
    fVar14 = pfVar4[2] * pfVar4[2];
    fVar15 = pfVar4[3] * pfVar4[3];
    if (7 < (longlong)uVar3) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      fVar9 = pfVar4[4] * pfVar4[4];
      fVar11 = pfVar4[5] * pfVar4[5];
      fVar12 = pfVar4[6] * pfVar4[6];
      fVar13 = pfVar4[7] * pfVar4[7];
      if (0xf < uVar3) {
        lVar7 = 8;
        do {
          pfVar1 = pfVar4 + lVar7;
          pfVar2 = pfVar4 + lVar7 + 4;
          fVar8 = fVar8 + *pfVar1 * *pfVar1;
          fVar10 = fVar10 + pfVar1[1] * pfVar1[1];
          fVar14 = fVar14 + pfVar1[2] * pfVar1[2];
          fVar15 = fVar15 + pfVar1[3] * pfVar1[3];
          fVar9 = fVar9 + *pfVar2 * *pfVar2;
          fVar11 = fVar11 + pfVar2[1] * pfVar2[1];
          fVar12 = fVar12 + pfVar2[2] * pfVar2[2];
          fVar13 = fVar13 + pfVar2[3] * pfVar2[3];
          lVar7 = lVar7 + 8;
        } while (lVar7 < (longlong)uVar5);
      }
      fVar8 = fVar9 + fVar8;
      fVar10 = fVar11 + fVar10;
      fVar14 = fVar12 + fVar14;
      fVar15 = fVar13 + fVar15;
      if ((longlong)uVar5 < (longlong)uVar6) {
        pfVar1 = pfVar4 + uVar5;
        fVar8 = fVar8 + *pfVar1 * *pfVar1;
        fVar10 = fVar10 + pfVar1[1] * pfVar1[1];
        fVar14 = fVar14 + pfVar1[2] * pfVar1[2];
        fVar15 = fVar15 + pfVar1[3] * pfVar1[3];
      }
    }
    fVar8 = fVar14 + fVar8 + fVar15 + fVar10;
    fVar10 = fVar14 + fVar14 + fVar15 + fVar15;
    if ((longlong)uVar6 < (longlong)uVar3) {
      do {
        fVar8 = fVar8 + pfVar4[uVar6] * pfVar4[uVar6];
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  return CONCAT44(fVar10,fVar8);
}



// FUNCTION 146dddd88 FUN_146dddd88 body=226 status=ok
// SIG undefined FUN_146dddd88(void)

undefined8 FUN_146dddd88(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 8);
  uVar6 = uVar3;
  uVar5 = uVar3;
  if ((longlong)uVar3 < 0) {
    uVar6 = uVar3 + 3;
    uVar5 = uVar3 + 7;
  }
  pfVar4 = *(float **)(param_1 + 8);
  if (uVar3 + 3 < 7) {
    fVar10 = 0.0;
    fVar8 = *pfVar4 * *pfVar4;
    if (1 < (longlong)uVar3) {
      uVar5 = 1;
      do {
        fVar8 = fVar8 + pfVar4[uVar5] * pfVar4[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    fVar8 = *pfVar4 * *pfVar4;
    fVar10 = pfVar4[1] * pfVar4[1];
    fVar14 = pfVar4[2] * pfVar4[2];
    fVar15 = pfVar4[3] * pfVar4[3];
    if (7 < (longlong)uVar3) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      fVar9 = pfVar4[4] * pfVar4[4];
      fVar11 = pfVar4[5] * pfVar4[5];
      fVar12 = pfVar4[6] * pfVar4[6];
      fVar13 = pfVar4[7] * pfVar4[7];
      if (0xf < uVar3) {
        lVar7 = 8;
        do {
          pfVar1 = pfVar4 + lVar7;
          pfVar2 = pfVar4 + lVar7 + 4;
          fVar8 = fVar8 + *pfVar1 * *pfVar1;
          fVar10 = fVar10 + pfVar1[1] * pfVar1[1];
          fVar14 = fVar14 + pfVar1[2] * pfVar1[2];
          fVar15 = fVar15 + pfVar1[3] * pfVar1[3];
          fVar9 = fVar9 + *pfVar2 * *pfVar2;
          fVar11 = fVar11 + pfVar2[1] * pfVar2[1];
          fVar12 = fVar12 + pfVar2[2] * pfVar2[2];
          fVar13 = fVar13 + pfVar2[3] * pfVar2[3];
          lVar7 = lVar7 + 8;
        } while (lVar7 < (longlong)uVar5);
      }
      fVar8 = fVar9 + fVar8;
      fVar10 = fVar11 + fVar10;
      fVar14 = fVar12 + fVar14;
      fVar15 = fVar13 + fVar15;
      if ((longlong)uVar5 < (longlong)uVar6) {
        pfVar1 = pfVar4 + uVar5;
        fVar8 = fVar8 + *pfVar1 * *pfVar1;
        fVar10 = fVar10 + pfVar1[1] * pfVar1[1];
        fVar14 = fVar14 + pfVar1[2] * pfVar1[2];
        fVar15 = fVar15 + pfVar1[3] * pfVar1[3];
      }
    }
    fVar8 = fVar14 + fVar8 + fVar15 + fVar10;
    fVar10 = fVar14 + fVar14 + fVar15 + fVar15;
    if ((longlong)uVar6 < (longlong)uVar3) {
      do {
        fVar8 = fVar8 + pfVar4[uVar6] * pfVar4[uVar6];
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  return CONCAT44(fVar10,fVar8);
}



// FUNCTION 146ddde6a FUN_146ddde6a body=116 status=ok
// SIG undefined FUN_146ddde6a(void)

void FUN_146ddde6a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_2;
  if (*(longlong *)(param_1 + 8) != *(longlong *)(local_30 + 8)) {
    FUN_146dddaba(param_1,*(longlong *)(local_30 + 8),1);
    local_30 = *param_2;
  }
  local_28 = param_2[1];
  FUN_146dddedf(param_1,local_38,&local_39);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dddedf FUN_146dddedf body=214 status=ok
// SIG undefined FUN_146dddedf(void)

void FUN_146dddedf(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = **(longlong **)(param_2 + 8);
  lVar5 = **(longlong **)(param_2 + 0x10);
  uVar12 = (*(longlong **)(param_2 + 0x10))[1];
  local_38 = lVar4;
  local_30 = lVar5;
  if (param_1[1] != uVar12) {
    FUN_146dddaba(param_1,uVar12);
    uVar12 = param_1[1];
  }
  local_48 = *param_1;
  local_68 = &local_48;
  local_60 = local_40;
  uVar13 = uVar12 + 3;
  if (-1 < (longlong)uVar12) {
    uVar13 = uVar12;
  }
  if (3 < (longlong)uVar12) {
    lVar14 = 0;
    do {
      pfVar1 = (float *)(lVar5 + lVar14 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(lVar4 + lVar14 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(local_48 + lVar14 * 4);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar6 * fVar9;
      pfVar3[2] = fVar7 * fVar10;
      pfVar3[3] = fVar8 * fVar11;
      lVar14 = lVar14 + 4;
    } while (lVar14 < (longlong)(uVar13 & 0xfffffffffffffffc));
  }
  local_58 = param_3;
  local_50 = param_1;
  FUN_146dddfb6(&local_68,uVar13 & 0xfffffffffffffffc,uVar12);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dddfb6 FUN_146dddfb6 body=49 status=ok
// SIG undefined FUN_146dddfb6(void)

void FUN_146dddfb6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)(param_1[1] + 8) + param_2 * 4) *
           *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146dddfe8 FUN_146dddfe8 body=249 status=ok
// SIG undefined FUN_146dddfe8(void)

undefined8 FUN_146dddfe8(longlong param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar5 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 8);
  uVar9 = uVar5;
  uVar8 = uVar5;
  if ((longlong)uVar5 < 0) {
    uVar9 = uVar5 + 3;
    uVar8 = uVar5 + 7;
  }
  pfVar6 = *(float **)(param_1 + 0x10);
  if (uVar5 + 3 < 7) {
    fVar13 = 0.0;
    fVar11 = **(float **)(param_1 + 8) * *pfVar6;
    if (1 < (longlong)uVar5) {
      uVar8 = 1;
      do {
        fVar11 = fVar11 + (*(float **)(param_1 + 8))[uVar8] * pfVar6[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
  }
  else {
    uVar9 = uVar9 & 0xfffffffffffffffc;
    pfVar7 = *(float **)(param_1 + 8);
    fVar11 = *pfVar6 * *pfVar7;
    fVar13 = pfVar6[1] * pfVar7[1];
    fVar17 = pfVar6[2] * pfVar7[2];
    fVar18 = pfVar6[3] * pfVar7[3];
    if (7 < (longlong)uVar5) {
      uVar8 = uVar8 & 0xfffffffffffffff8;
      fVar12 = pfVar6[4] * pfVar7[4];
      fVar14 = pfVar6[5] * pfVar7[5];
      fVar15 = pfVar6[6] * pfVar7[6];
      fVar16 = pfVar6[7] * pfVar7[7];
      if (0xf < uVar5) {
        lVar10 = 8;
        do {
          pfVar1 = pfVar6 + lVar10;
          pfVar3 = pfVar6 + lVar10 + 4;
          pfVar2 = pfVar7 + lVar10;
          pfVar4 = pfVar7 + lVar10 + 4;
          fVar11 = fVar11 + *pfVar1 * *pfVar2;
          fVar13 = fVar13 + pfVar1[1] * pfVar2[1];
          fVar17 = fVar17 + pfVar1[2] * pfVar2[2];
          fVar18 = fVar18 + pfVar1[3] * pfVar2[3];
          fVar12 = fVar12 + *pfVar3 * *pfVar4;
          fVar14 = fVar14 + pfVar3[1] * pfVar4[1];
          fVar15 = fVar15 + pfVar3[2] * pfVar4[2];
          fVar16 = fVar16 + pfVar3[3] * pfVar4[3];
          lVar10 = lVar10 + 8;
        } while (lVar10 < (longlong)uVar8);
      }
      fVar11 = fVar12 + fVar11;
      fVar13 = fVar14 + fVar13;
      fVar17 = fVar15 + fVar17;
      fVar18 = fVar16 + fVar18;
      if ((longlong)uVar8 < (longlong)uVar9) {
        pfVar1 = pfVar6 + uVar8;
        pfVar2 = pfVar7 + uVar8;
        fVar11 = fVar11 + *pfVar1 * *pfVar2;
        fVar13 = fVar13 + pfVar1[1] * pfVar2[1];
        fVar17 = fVar17 + pfVar1[2] * pfVar2[2];
        fVar18 = fVar18 + pfVar1[3] * pfVar2[3];
      }
    }
    fVar11 = fVar17 + fVar11 + fVar18 + fVar13;
    fVar13 = fVar17 + fVar17 + fVar18 + fVar18;
    if ((longlong)uVar9 < (longlong)uVar5) {
      do {
        fVar11 = fVar11 + pfVar7[uVar9] * pfVar6[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
    }
  }
  return CONCAT44(fVar13,fVar11);
}



// FUNCTION 146dde0e2 FUN_146dde0e2 body=207 status=ok
// SIG undefined FUN_146dde0e2(void)

void FUN_146dde0e2(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1[1];
  local_2c = 0;
  FUN_146dde1b2(param_1,local_40,&local_41);
  lVar1 = *(longlong *)(param_2 + 8);
  if (0 < lVar1) {
    lVar2 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar2 * 4);
      if (*(longlong *)(param_2 + 0x38) == 0) {
        lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + lVar2 * 4);
      }
      else {
        lVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar2 * 4) + lVar3;
      }
      fVar5 = 0.0;
      if (lVar3 < lVar4) {
        do {
          fVar5 = fVar5 + *(float *)(*(longlong *)(param_2 + 0x30) + lVar3 * 4) *
                          *(float *)(*param_3 +
                                    (longlong)*(int *)(*(longlong *)(param_2 + 0x28) + lVar3 * 4) *
                                    4);
          lVar3 = lVar3 + 1;
        } while (lVar4 != lVar3);
      }
      *(float *)(*param_1 + lVar2 * 4) = fVar5 + *(float *)(*param_1 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dde1b2 FUN_146dde1b2 body=343 status=ok
// SIG undefined FUN_146dde1b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146dde1b2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Dst;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (param_1[1] != lVar3) {
    FUN_146dddaba(param_1,lVar3,1);
    lVar3 = param_1[1];
  }
  auVar2 = _DAT_149931e80;
  if (0 < lVar3) {
    iVar1 = *(int *)(param_2 + 0x14);
    _Dst = (void *)*param_1;
    if (iVar1 == 0) {
      memset(_Dst,0,lVar3 << 2);
      return;
    }
    lVar4 = lVar3 + -1;
    auVar6._8_4_ = (int)lVar4;
    auVar6._0_8_ = lVar4;
    auVar6._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = 0;
    auVar8 = pmovsxbq(in_XMM2,0x302);
    auVar9 = pmovsxbq(in_XMM3,0x100);
    auVar6 = auVar6 ^ _DAT_149931e80;
    do {
      lVar4 = auVar6._0_8_;
      lVar7 = auVar6._8_8_;
      if ((bool)(~(lVar4 < (longlong)(uVar5 ^ auVar2._0_8_)) & 1)) {
        *(int *)((longlong)_Dst + uVar5 * 4) = iVar1;
      }
      auVar10._8_4_ = (int)uVar5;
      auVar10._0_8_ = uVar5;
      auVar10._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar10._8_8_ | auVar9._8_8_) ^ auVar2._8_8_) <= lVar7) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 4) = iVar1;
      }
      auVar10 = (auVar10 | auVar8) ^ auVar2;
      if (auVar10._0_8_ <= lVar4) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 8) = iVar1;
      }
      if (auVar10._8_8_ <= lVar7) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 0xc) = iVar1;
      }
      uVar5 = uVar5 + 4;
    } while ((lVar3 + 3U & 0xfffffffffffffffc) != uVar5);
  }
  return;
}



// FUNCTION 146dde30a FUN_146dde30a body=165 status=ok
// SIG undefined FUN_146dde30a(void)

void FUN_146dde30a(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar13 = *(ulonglong *)param_1[3];
  uVar5 = ((ulonglong *)param_1[3])[1];
  uVar12 = uVar5;
  if (((uVar13 & 3) == 0) &&
     (uVar12 = (ulonglong)(-((uint)(uVar13 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar5 <= (longlong)uVar12)) {
    uVar12 = uVar5;
  }
  uVar15 = uVar5 - uVar12;
  uVar13 = uVar15 + 3;
  if (-1 < (longlong)uVar15) {
    uVar13 = uVar15;
  }
  lVar14 = (uVar13 & 0xfffffffffffffffc) + uVar12;
  FUN_146dde3b0(param_1,0,uVar12);
  if (3 < (longlong)uVar15) {
    do {
      pfVar1 = (float *)(*(longlong *)(param_1[1] + 0x10) + uVar12 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      fVar4 = *(float *)(param_1[1] + 4);
      pfVar2 = (float *)(*(longlong *)*param_1 + uVar12 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(*(longlong *)*param_1 + uVar12 * 4);
      *pfVar3 = fVar4 * *pfVar1 + *pfVar2;
      pfVar3[1] = fVar4 * fVar6 + fVar9;
      pfVar3[2] = fVar4 * fVar7 + fVar10;
      pfVar3[3] = fVar4 * fVar8 + fVar11;
      uVar12 = uVar12 + 4;
    } while ((longlong)uVar12 < lVar14);
  }
  FUN_146dde3b0(param_1,lVar14,uVar5);
  return;
}



// FUNCTION 146dde3b0 FUN_146dde3b0 body=49 status=ok
// SIG undefined FUN_146dde3b0(void)

void FUN_146dde3b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(param_1[1] + 4) * *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4) +
           *(float *)(*(longlong *)*param_1 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146dde3e1 FUN_146dde3e1 body=179 status=ok
// SIG undefined FUN_146dde3e1(void)

void FUN_146dde3e1(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 local_20 [4];
  float local_1c;
  longlong lStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = *(float *)(param_2 + 0x1c);
  local_40 = local_20;
  lStack_10 = **(longlong **)(param_2 + 0x20);
  local_28 = *param_1;
  local_48 = &local_28;
  uVar4 = param_1[1];
  uVar12 = uVar4 + 3;
  if (-1 < (longlong)uVar4) {
    uVar12 = uVar4;
  }
  if (3 < (longlong)uVar4) {
    lVar11 = 0;
    do {
      pfVar1 = (float *)(lStack_10 + lVar11 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(local_28 + lVar11 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(local_28 + lVar11 * 4);
      *pfVar3 = *pfVar2 - *pfVar1 * local_1c;
      pfVar3[1] = fVar8 - fVar5 * local_1c;
      pfVar3[2] = fVar9 - fVar6 * local_1c;
      pfVar3[3] = fVar10 - fVar7 * local_1c;
      lVar11 = lVar11 + 4;
    } while (lVar11 < (longlong)(uVar12 & 0xfffffffffffffffc));
  }
  local_38 = param_3;
  local_30 = param_1;
  FUN_146dde496(&local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dde496 FUN_146dde496 body=54 status=ok
// SIG undefined FUN_146dde496(void)

void FUN_146dde496(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)*param_1 + param_2 * 4) -
           *(float *)(param_1[1] + 4) * *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146dde4cc FUN_146dde4cc body=237 status=ok
// SIG undefined FUN_146dde4cc(void)

void FUN_146dde4cc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  float local_3c;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = **(longlong **)(param_2 + 8);
  local_3c = *(float *)(param_2 + 0x2c);
  lVar5 = **(longlong **)(param_2 + 0x30);
  uVar12 = (*(longlong **)(param_2 + 0x30))[1];
  local_48 = lVar4;
  lStack_30 = lVar5;
  if (param_1[1] != uVar12) {
    FUN_146dddaba(param_1,uVar12);
    uVar12 = param_1[1];
  }
  local_58 = *param_1;
  local_78 = &local_58;
  local_70 = local_50;
  uVar13 = uVar12 + 3;
  if (-1 < (longlong)uVar12) {
    uVar13 = uVar12;
  }
  if (3 < (longlong)uVar12) {
    lVar14 = 0;
    do {
      pfVar1 = (float *)(lVar5 + lVar14 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(lVar4 + lVar14 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(local_58 + lVar14 * 4);
      *pfVar3 = *pfVar1 * local_3c + *pfVar2;
      pfVar3[1] = fVar6 * local_3c + fVar9;
      pfVar3[2] = fVar7 * local_3c + fVar10;
      pfVar3[3] = fVar8 * local_3c + fVar11;
      lVar14 = lVar14 + 4;
    } while (lVar14 < (longlong)(uVar13 & 0xfffffffffffffffc));
  }
  local_68 = param_3;
  local_60 = param_1;
  FUN_146dde5ba(&local_78,uVar13 & 0xfffffffffffffffc,uVar12);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dde5ba FUN_146dde5ba body=53 status=ok
// SIG undefined FUN_146dde5ba(void)

void FUN_146dde5ba(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(lVar1 + 0x14) * *(float *)(*(longlong *)(lVar1 + 0x20) + param_2 * 4) +
           *(float *)(*(longlong *)(lVar1 + 8) + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146dde5f0 FUN_146dde5f0 body=82 status=ok
// SIG undefined FUN_146dde5f0(void)

void FUN_146dde5f0(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x150));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x130));
  FUN_146de02bc(param_1 + 0xe8);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_146ddcf04(param_1 + 0x90);
  }
  FUN_146ddcf04(param_1 + 8);
  return;
}



// FUNCTION 146dde642 FUN_146dde642 body=183 status=ok
// SIG undefined FUN_146dde642(void)

undefined1 * FUN_146dde642(undefined1 *param_1)

{
  *param_1 = 0;
  FUN_146ddcf80(param_1 + 8);
  param_1[0xe0] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_146dde6fa(param_1 + 0xe8,0,0);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0x3a83126f;
  *(undefined2 *)(param_1 + 0x144) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0x34000000;
  return param_1;
}



// FUNCTION 146dde6fa FUN_146dde6fa body=168 status=ok
// SIG undefined FUN_146dde6fa(void)

void FUN_146dde6fa(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_3 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_3 * 4 + 4 +
                          (ulonglong)((param_3 & 0x3fffffffffffffff) == 0x3fffffffffffffff));
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    *(ulonglong *)(param_1 + 8) = param_3;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_3 = *(ulonglong *)(param_1 + 8);
  }
  memset(*(void **)(param_1 + 0x18),0,param_3 * 4 + 4);
  return;
}



// FUNCTION 146dde7a2 FUN_146dde7a2 body=229 status=ok
// SIG undefined FUN_146dde7a2(void)

void FUN_146dde7a2(undefined1 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  lStack_30 = 0;
  local_40 = param_2;
  FUN_146ddf38a();
  lVar2 = lStack_30;
  if (lStack_30 < 1) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8(*(undefined8 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    lVar3 = FUN_141729f83(lStack_30);
    uVar5 = (uint)lVar2;
    if (0 < (int)uVar5) {
      uVar4 = 0;
      do {
        *(int *)(lVar3 + (longlong)*(int *)(local_38 + uVar4 * 4) * 4) = (int)uVar4;
        uVar4 = uVar4 + 1;
      } while ((uVar5 & 0x7fffffff) != uVar4);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(longlong *)(param_1 + 0x70) = lVar3;
    *(longlong *)(param_1 + 0x78) = lVar2;
    FUN_1400020a8(uVar1);
  }
  FUN_146dde6fa(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  param_1[100] = 1;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_1400020a8(local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dde888 FUN_146dde888 body=2817 status=ok
// SIG undefined FUN_146dde888(void)

void FUN_146dde888(longlong param_1,longlong **param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong **pplVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_318 [32];
  longlong **local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  ulonglong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong local_288;
  longlong local_280;
  undefined1 local_271;
  longlong *local_270;
  longlong local_268;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  longlong *local_220;
  undefined8 uStack_218;
  int *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e0;
  longlong local_1d8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong *local_190;
  undefined8 local_188;
  longlong *local_170;
  longlong local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_130;
  undefined8 uStack_128;
  undefined1 local_110 [8];
  longlong local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 uStack_f0;
  int *local_e8;
  int *piStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 **local_c8;
  int **local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  longlong *local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (*(longlong **)(param_1 + 0x78) == param_2[1]) {
    local_110[0] = 0;
    local_108 = 0;
    uStack_100 = (longlong *)0x0;
    local_f8 = (int *)0x0;
    uStack_f0 = 0;
    local_e8 = (int *)0x0;
    piStack_e0 = (int *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_146dde6fa(local_110,*(longlong **)(param_1 + 0x78),param_2[2]);
    local_c8 = param_2;
    local_c0 = (int **)(param_1 + 0x70);
    FUN_146de0bae(local_110);
    FUN_146de1251(local_110,param_1 + 8);
    FUN_146de02bc(local_110);
  }
  else {
    FUN_146de146c(param_2,param_1 + 8);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_2c8 = FUN_146de087c(param_1 + 8);
  local_130 = *(longlong **)(param_1 + 0x30);
  local_150 = *(undefined8 ***)(param_1 + 0x38);
  local_2d0 = lVar3 + 1;
  local_170 = *(longlong **)(param_1 + 0x20);
  local_280 = lVar3 + -1;
  local_288 = 0;
  local_2e0 = param_1;
  local_168 = local_2d0;
  uStack_148 = local_2c8;
  uStack_128 = local_2c8;
  if (1 < lVar3) {
    local_288 = FUN_141729f83(local_280);
  }
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  FUN_146de1688(&local_2a8,lVar3);
  if ((lVar3 == 0) || (lVar3 < 1)) {
    local_2b8 = 0;
    piVar10 = (int *)0x0;
    pplVar9 = (longlong **)0x0;
  }
  else {
    pplVar9 = (longlong **)FUN_141729e88(lVar3);
    piVar10 = (int *)FUN_141729f83(lVar3);
    lStack_2b0 = 0;
    local_2b8 = FUN_141729f83(lVar3);
  }
  uStack_100 = (longlong *)CONCAT44(0xffffffff,(undefined4)uStack_100);
  lStack_2b0 = lVar3;
  local_108 = lVar3;
  FUN_146de04ef(&local_2b8,local_110,&local_c8);
  lVar8 = local_2e0;
  plVar16 = (longlong *)(local_2e0 + 0x50);
  FUN_146ddd2fa(plVar16,lVar3);
  local_108 = *(undefined8 *)(lVar8 + 0x58);
  uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff);
  FUN_146dde1b2(plVar16,local_110,&local_c8);
  uStack_100 = plVar16;
  if (lVar3 < 1) {
    FUN_146de17f7(plVar16,local_110,&local_c8);
    fVar21 = 3.4028235e+38;
  }
  else {
    lVar8 = 0;
    do {
      iVar18 = *(int *)((longlong)local_170 + lVar8 * 4);
      lVar13 = (longlong)iVar18;
      lVar7 = lVar8 + 1;
      if (iVar18 < *(int *)((longlong)local_170 + lVar8 * 4 + 4)) {
        do {
          fVar21 = *(float *)((longlong)local_130 + lVar13 * 4);
          *(float *)(*plVar16 + lVar8 * 4) = fVar21 * fVar21 + *(float *)(*plVar16 + lVar8 * 4);
          lVar17 = (longlong)*(int *)((longlong)local_150 + lVar13 * 4);
          if (lVar8 != lVar17) {
            fVar21 = *(float *)((longlong)local_130 + lVar13 * 4);
            *(float *)(*plVar16 + lVar17 * 4) = fVar21 * fVar21 + *(float *)(*plVar16 + lVar17 * 4);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((longlong)local_170 + lVar7 * 4));
      }
      lVar8 = lVar7;
    } while (lVar7 != lVar3);
    FUN_146de17f7(plVar16,local_110,&local_c8);
    lVar8 = 0;
    do {
      fVar21 = *(float *)(*plVar16 + lVar8 * 4);
      uVar19 = -(uint)(1.1754944e-38 < fVar21);
      *(uint *)(*plVar16 + lVar8 * 4) = ~uVar19 & 0x3f800000 | (uint)(1.0 / fVar21) & uVar19;
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    fVar21 = 3.4028235e+38;
    lVar8 = 0;
    do {
      iVar18 = *(int *)((longlong)local_170 + lVar8 * 4);
      lVar13 = (longlong)iVar18;
      lVar7 = lVar8 + 1;
      if (iVar18 < *(int *)((longlong)local_170 + lVar8 * 4 + 4)) {
        do {
          *(float *)((longlong)local_130 + lVar13 * 4) =
               *(float *)(*plVar16 + lVar8 * 4) *
               *(float *)(*plVar16 + (longlong)*(int *)((longlong)local_150 + lVar13 * 4) * 4) *
               *(float *)((longlong)local_130 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((longlong)local_170 + lVar7 * 4));
        lVar13 = (longlong)*(int *)((longlong)local_170 + lVar8 * 4);
      }
      fVar22 = *(float *)((longlong)local_130 + lVar13 * 4);
      if (fVar22 <= fVar21) {
        fVar21 = fVar22;
      }
      lVar8 = lVar7;
    } while (lVar7 != lVar3);
  }
  local_110[0] = 0;
  local_108 = 0;
  uStack_100 = (longlong *)0x0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_e8 = (int *)0x0;
  piStack_e0 = (int *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_146de1ac6(local_110,param_1 + 8);
  fVar22 = 0.0;
  if (fVar21 <= 0.0) {
    fVar22 = *(float *)(local_2e0 + 0x60) - fVar21;
  }
  *(undefined4 *)(local_2e0 + 0x68) = 1;
  uVar11 = 0;
  lVar8 = local_2e0;
  do {
    if (0 < lVar3) {
      lVar8 = 0;
      do {
        lVar7 = (longlong)*(int *)((longlong)local_170 + lVar8 * 4);
        *(float *)((longlong)local_130 + lVar7 * 4) =
             *(float *)((longlong)local_130 + lVar7 * 4) + fVar22;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      local_2c0 = 0;
      local_2d8 = uVar11;
LAB_146ddecce:
      lVar8 = (longlong)*(int *)((longlong)local_170 + local_2c0 * 4);
      fVar21 = *(float *)((longlong)local_130 + lVar8 * 4);
      lVar8 = lVar8 + 1;
      iVar18 = 0;
      if ((int)lVar8 < *(int *)((longlong)local_170 + local_2c0 * 4 + 4)) {
        iVar18 = 0;
        pplVar12 = pplVar9;
        piVar14 = piVar10;
        do {
          iVar2 = *(int *)((longlong)local_150 + lVar8 * 4);
          *(undefined4 *)pplVar12 = *(undefined4 *)((longlong)local_130 + lVar8 * 4);
          *piVar14 = iVar2;
          *(int *)(local_2b8 + (longlong)iVar2 * 4) = iVar18;
          lVar8 = lVar8 + 1;
          iVar18 = iVar18 + 1;
          piVar14 = piVar14 + 1;
          pplVar12 = (longlong **)((longlong)pplVar12 + 4);
        } while (lVar8 < *(int *)((longlong)local_170 + local_2c0 * 4 + 4));
      }
      plVar16 = *(longlong **)(local_2a8 + local_2c0 * 0x10);
      plVar15 = (longlong *)*plVar16;
      lVar7 = local_2c0;
      lVar13 = local_2a8;
      if (plVar15 != plVar16) {
        do {
          local_200 = (int *)(longlong)(int)plVar15[2];
          lVar8 = (longlong)*(int *)(local_288 + (longlong)local_200 * 4);
          fVar20 = *(float *)((longlong)local_130 + lVar8 * 4);
          local_c8 = (undefined8 **)(lVar8 + 1);
          pplVar12 = local_c8;
          if ((longlong)local_c8 <
              (longlong)*(int *)((longlong)local_170 + (longlong)local_200 * 4 + 4)) {
            do {
              iVar2 = *(int *)((longlong)local_150 + (longlong)pplVar12 * 4);
              lVar8 = (longlong)*(int *)(local_2b8 + (longlong)iVar2 * 4);
              fVar1 = *(float *)((longlong)local_130 + (longlong)pplVar12 * 4);
              if (lVar8 < 0) {
                *(float *)((longlong)pplVar9 + (longlong)iVar18 * 4) = fVar1 * fVar20;
                piVar10[iVar18] = iVar2;
                *(int *)(local_2b8 + (longlong)iVar2 * 4) = iVar18;
                iVar18 = iVar18 + 1;
              }
              else {
                *(float *)((longlong)pplVar9 + lVar8 * 4) =
                     *(float *)((longlong)pplVar9 + lVar8 * 4) - fVar1 * fVar20;
              }
              pplVar12 = (longlong **)((longlong)pplVar12 + 1);
              local_200 = (int *)(longlong)(int)plVar15[2];
              lVar7 = local_2c0;
              lVar13 = local_2a8;
            } while ((longlong)pplVar12 <
                     (longlong)*(int *)((longlong)local_170 + (longlong)local_200 * 4 + 4));
          }
          local_190 = local_130;
          local_188 = uStack_128;
          local_1b0 = (undefined4)local_150;
          uStack_1ac = local_150._4_4_;
          uStack_1a8 = (undefined4)uStack_148;
          uStack_1a4 = uStack_148._4_4_;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1e0 = local_170;
          local_1d8 = local_168;
          local_2e8 = &local_2a8;
          local_2f0 = &local_288;
          local_2f8 = (longlong **)&local_c8;
          FUN_146de098c(&local_1e0,&local_1b0,&local_190,&local_200);
          plVar15 = (longlong *)*plVar15;
        } while (plVar15 != (longlong *)*(longlong *)(lVar13 + lVar7 * 0x10));
      }
      uVar6 = local_2c8;
      if (0.0 < fVar21) break;
      if ((int)local_2d8 < 9) {
        local_2d8 = (ulonglong)((int)local_2d8 + 1);
        fVar22 = fVar22 + fVar22;
        fVar21 = *(float *)(local_2e0 + 0x60);
        local_200 = local_e8;
        local_1f0 = local_2c8;
        local_a8[0] = local_130;
        local_98 = uStack_128;
        local_b8 = &local_271;
        local_b0 = &local_130;
        local_c8 = local_a8;
        local_c0 = &local_200;
        FUN_146de2010(&local_c8);
        local_200 = piStack_e0;
        local_1f0 = uVar6;
        local_a8[0] = (longlong *)local_150;
        local_98 = uStack_148;
        local_b0 = (undefined8 **)&local_150;
        local_c8 = local_a8;
        local_c0 = &local_200;
        local_b8 = &local_271;
        FUN_146de20ca(&local_c8);
        local_200 = local_f8;
        local_1f0 = local_2d0;
        local_a8[0] = local_170;
        local_98 = local_168;
        local_b0 = &local_170;
        local_c8 = local_a8;
        local_c0 = &local_200;
        local_b8 = &local_271;
        FUN_146de20ca(&local_c8);
        local_c0 = (int **)lStack_2b0;
        local_b8 = (undefined1 *)CONCAT44(0xffffffff,(undefined4)local_b8);
        FUN_146de04ef(&local_2b8,&local_c8,&local_200);
        lVar17 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar13 + lVar17 * 0x10);
          *(undefined8 *)puVar4[1] = 0;
          puVar4 = (undefined8 *)*puVar4;
          lVar8 = local_2e0;
          uVar11 = local_2d8;
          lVar7 = local_2c0;
          while (local_2e0 = lVar8, local_2d8 = uVar11, local_2c0 = lVar7,
                puVar4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar4;
            FUN_1400020a8();
            lVar8 = local_2e0;
            uVar11 = local_2d8;
            lVar7 = local_2c0;
          }
          plVar16 = (longlong *)(lVar17 * 0x10 + lVar13);
          lVar5 = *plVar16;
          *(longlong *)lVar5 = lVar5;
          *(longlong *)(lVar5 + 8) = lVar5;
          plVar16[1] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 != lVar3);
        if (fVar22 <= fVar21) {
          fVar22 = fVar21;
        }
        goto LAB_146ddf2d3;
      }
      goto LAB_146ddf2fc;
    }
    lVar7 = 0;
LAB_146ddf2d3:
    if (lVar7 == lVar3) {
      *(undefined1 *)(lVar8 + 0x65) = 1;
      *(undefined4 *)(lVar8 + 0x68) = 0;
      goto LAB_146ddf2fc;
    }
    if (*(int *)(lVar8 + 0x68) == 0) {
LAB_146ddf2fc:
      FUN_146de02bc(local_110);
      FUN_1400020a8(local_2b8);
      FUN_1400020a8(piVar10);
      FUN_1400020a8(pplVar9);
      FUN_146de1780(&local_2a8);
      FUN_1400020a8(local_288);
      if ((local_90 ^ (ulonglong)auStack_318) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
  }
  else {
    fVar21 = SQRT(fVar21);
  }
  *(float *)((longlong)local_130 + (longlong)*(int *)((longlong)local_170 + lVar7 * 4) * 4) = fVar21
  ;
  local_1f8 = (longlong)iVar18;
  if (0 < iVar18) {
    lVar8 = 0;
    do {
      iVar18 = piVar10[lVar8];
      fVar20 = *(float *)((longlong)pplVar9 + lVar8 * 4) / fVar21;
      *(float *)((longlong)pplVar9 + lVar8 * 4) = fVar20;
      lVar7 = (longlong)*(int *)((longlong)local_170 + (longlong)iVar18 * 4);
      *(float *)((longlong)local_130 + lVar7 * 4) =
           *(float *)((longlong)local_130 + lVar7 * 4) - fVar20 * fVar20;
      lVar8 = lVar8 + 1;
      lVar7 = local_2c0;
    } while (local_1f8 != lVar8);
  }
  local_200 = piVar10;
  local_c8 = pplVar9;
  local_c0 = (int **)local_1f8;
  FUN_146de0abe(&local_c8,&local_200,
                (longlong)
                (int)(~*(uint *)((longlong)local_170 + lVar7 * 4) +
                     *(int *)((longlong)local_170 + lVar7 * 4 + 4)));
  local_a8[0] = (longlong *)((longlong)*(int *)((longlong)local_170 + lVar7 * 4) + 1);
  if ((int)local_a8[0] < *(int *)((longlong)local_170 + lVar7 * 4 + 4)) {
    lVar8 = 0;
    do {
      *(undefined4 *)((longlong)local_130 + (longlong)local_a8[0] * 4) =
           *(undefined4 *)((longlong)pplVar9 + lVar8);
      iVar18 = *(int *)((longlong)piVar10 + lVar8);
      *(int *)((longlong)local_150 + (longlong)local_a8[0] * 4) = iVar18;
      *(undefined4 *)(local_2b8 + (longlong)iVar18 * 4) = 0xffffffff;
      local_a8[0] = (longlong *)((longlong)local_a8[0] + 1);
      lVar8 = lVar8 + 4;
    } while ((longlong)local_a8[0] < (longlong)*(int *)((longlong)local_170 + lVar7 * 4 + 4));
    local_a8[0] = (longlong *)((longlong)*(int *)((longlong)local_170 + lVar7 * 4) + 1);
  }
  local_220 = local_130;
  uStack_218 = uStack_128;
  local_240 = (undefined4)local_150;
  uStack_23c = local_150._4_4_;
  uStack_238 = (undefined4)uStack_148;
  uStack_234 = uStack_148._4_4_;
  local_250 = 0;
  uStack_248 = 0;
  local_270 = local_170;
  local_268 = local_168;
  local_2e8 = &local_2a8;
  local_2f0 = &local_288;
  local_2f8 = local_a8;
  FUN_146de098c(&local_270,&local_240,&local_220,&local_2c0);
  lVar7 = lVar7 + 1;
  lVar8 = local_2e0;
  uVar11 = local_2d8;
  local_2c0 = lVar7;
  if (lVar3 <= lVar7) goto LAB_146ddf2d3;
  goto LAB_146ddecce;
}



// FUNCTION 146ddf38a FUN_146ddf38a body=140 status=ok
// SIG undefined FUN_146ddf38a(void)

void FUN_146ddf38a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_146dde6fa(local_68,0,0);
  FUN_146de02fe(*param_1,local_68);
  FUN_146ddf417(local_68,param_2);
  FUN_146de02bc(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ddf417 FUN_146ddf417 body=3743 status=ok
// SIG undefined FUN_146ddf417(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146ddf417(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  size_t _Size;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  undefined1 *puVar32;
  bool bVar33;
  double dVar34;
  undefined1 auStack_168 [8];
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  undefined1 *local_138;
  uint *local_130;
  int local_128;
  int local_124;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong local_100;
  int *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined1 *local_b8;
  uint local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 *local_98;
  uint local_90;
  int local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_e8;
  local_68 = *(ulonglong *)(param_1 + 8);
  dVar34 = (double)(int)local_68;
  local_108 = param_2;
  if (dVar34 < 0.0) {
    dVar34 = sqrt(dVar34);
  }
  else {
    dVar34 = SQRT(dVar34);
  }
  iVar30 = 0x10;
  if (0x10 < (int)(dVar34 * 10.0)) {
    iVar30 = (int)(dVar34 * 10.0);
  }
  iVar8 = (int)local_68;
  if (iVar8 + -2 <= iVar30) {
    iVar30 = iVar8 + -2;
  }
  uVar10 = FUN_146de087c(param_1);
  iVar22 = iVar8 + 1;
  local_100 = (longlong)iVar22;
  FUN_141729ef6(local_108);
  local_124 = (int)uVar10 + iVar8 * 2 + (int)uVar10 / 5;
  local_60 = uVar10;
  FUN_146de0756(param_1 + 0x28,(longlong)local_124,0);
  if (iVar8 * 8 + 8 < 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  local_150 = local_100 * 0x20;
  if (local_150 < 0x20001) {
    puVar21 = auStack_168 + -(local_150 + 0x10);
    puVar11 = auStack_168 + -(local_150 + 0x10);
  }
  else {
    puVar11 = (undefined1 *)FUN_14001cc68(local_150,0x10);
    puVar21 = auStack_168;
    if (puVar11 == (undefined1 *)0x0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      puVar21 = auStack_168;
      puVar11 = (undefined1 *)0x0;
    }
  }
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar30);
  local_140 = (longlong)(iVar22 * 3);
  local_148 = (longlong)(iVar22 * 2);
  uVar10 = (ulonglong)(iVar22 * 6);
  lVar15 = *local_108;
  lVar17 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (0 < (int)(uint)local_68) {
    uVar25 = (uint)local_68 & 0x7fffffff;
    uVar27 = 0;
    do {
      *(int *)(puVar11 + uVar27 * 4) =
           *(int *)(lVar17 + 4 + uVar27 * 4) - *(int *)(lVar17 + uVar27 * 4);
      uVar27 = uVar27 + 1;
    } while (uVar25 != uVar27);
  }
  lVar28 = local_100;
  local_50 = lVar17;
  puVar20 = puVar11 + local_100 * 4;
  puVar32 = puVar11 + local_148 * 4;
  local_b8 = puVar11 + local_140 * 4;
  local_70 = puVar11 + (longlong)(iVar22 * 4) * 4;
  local_88 = puVar11 + (longlong)(iVar22 * 5) * 4;
  puVar1 = (undefined4 *)(puVar11 + uVar10 * 4);
  iVar30 = (int)local_68;
  local_e0 = (longlong)iVar30;
  *(undefined4 *)(puVar11 + (longlong)iVar30 * 4) = 0;
  puVar6 = local_70;
  puVar5 = local_88;
  puVar4 = local_b8;
  local_138 = puVar11 + (longlong)(iVar22 * 7) * 4;
  if (-1 < iVar30) {
    local_98 = (undefined1 *)(lVar28 * 4);
    lVar17 = 0;
    uVar10 = 0xffffffff;
    do {
      *(undefined4 *)(puVar4 + lVar17) = 0xffffffff;
      *(undefined4 *)(lVar15 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar32 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar11 + (longlong)(iVar22 * 7) * 4 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar20 + lVar17) = 1;
      *(undefined4 *)((longlong)puVar1 + lVar17) = 1;
      *(undefined4 *)(puVar6 + lVar17) = 0;
      *(undefined4 *)(puVar5 + lVar17) = *(undefined4 *)(puVar11 + lVar17);
      lVar17 = lVar17 + 4;
    } while (local_98 != (undefined1 *)lVar17);
    if (0 < (int)(uint)local_68) {
      uVar27 = (ulonglong)((uint)local_68 & 0x7fffffff);
      uVar10 = 0;
      do {
        if (puVar1[uVar10] != 0) {
          puVar1[uVar10] = 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar27 != uVar10);
      iVar30 = -2 - (uint)local_68;
      uVar10 = 0;
      local_54 = 0;
      do {
        puVar4 = local_b8;
        iVar8 = *(int *)(local_50 + uVar10 * 4);
        iVar22 = *(int *)(local_50 + 4 + uVar10 * 4);
        if (iVar8 < iVar22) {
          lVar17 = 0;
          do {
            if (uVar10 == *(uint *)(lVar2 + (longlong)iVar8 * 4 + lVar17 * 4)) {
              lVar17 = (longlong)*(int *)(local_88 + uVar10 * 4);
              if (lVar17 == 1) {
                *(undefined4 *)(local_70 + uVar10 * 4) = 0xfffffffe;
                local_54 = local_54 + 1;
                *(undefined4 *)(local_50 + uVar10 * 4) = 0xffffffff;
                puVar1[uVar10] = 0;
                goto LAB_146de0100;
              }
              if (*(int *)(local_88 + uVar10 * 4) <= (int)local_80) {
                if ((longlong)*(int *)(local_b8 + lVar17 * 4) == -1) {
                  uVar7 = 0xffffffff;
                }
                else {
                  *(int *)(lVar15 + (longlong)*(int *)(local_b8 + lVar17 * 4) * 4) = (int)uVar10;
                  uVar7 = *(undefined4 *)(local_b8 + lVar17 * 4);
                }
                *(undefined4 *)(puVar32 + uVar10 * 4) = uVar7;
                *(int *)(puVar4 + lVar17 * 4) = (int)uVar10;
                goto LAB_146de0100;
              }
              break;
            }
            lVar17 = lVar17 + 1;
          } while (iVar22 - iVar8 != (int)lVar17);
        }
        *(undefined4 *)(puVar20 + uVar10 * 4) = 0;
        *(undefined4 *)(local_70 + uVar10 * 4) = 0xffffffff;
        local_54 = local_54 + 1;
        *(int *)(local_50 + uVar10 * 4) = iVar30;
        *(int *)(puVar20 + local_e0 * 4) = *(int *)(puVar20 + local_e0 * 4) + 1;
LAB_146de0100:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar27);
      goto LAB_146ddf641;
    }
  }
  local_54 = 0;
LAB_146ddf641:
  uVar27 = local_60;
  *(undefined4 *)(local_70 + local_e0 * 4) = 0xfffffffe;
  *(undefined4 *)(local_50 + local_e0 * 4) = 0xffffffff;
  puVar1[local_e0] = 0;
  uVar25 = (uint)local_68;
  local_98 = puVar11;
  local_80 = puVar32;
  local_78 = puVar20;
  if (local_54 < (int)uVar25) {
    local_160 = (ulonglong)(uVar25 & 0x7fffffff);
    local_e8 = 0;
    iVar30 = 2;
    local_a0 = 0;
    local_d8 = lVar15;
    uVar14 = local_68;
    do {
      uVar7 = 0xffffffff;
      iVar8 = (int)local_a0;
      if (iVar8 < (int)uVar14) {
        lVar17 = 0;
        do {
          uVar25 = *(uint *)(local_b8 + lVar17 * 4 + (longlong)iVar8 * 4);
          if (uVar25 != 0xffffffff) {
            local_a0 = (ulonglong)(uint)(iVar8 + (int)lVar17);
            goto LAB_146ddf6f5;
          }
          lVar17 = lVar17 + 1;
        } while (local_e0 - iVar8 != lVar17);
        local_a0 = local_68;
      }
      uVar25 = 0xffffffff;
LAB_146ddf6f5:
      local_ac = uVar25;
      uVar10 = (ulonglong)(int)uVar25;
      if ((longlong)*(int *)(puVar32 + uVar10 * 4) != -1) {
        *(undefined4 *)(lVar15 + (longlong)*(int *)(puVar32 + uVar10 * 4) * 4) = 0xffffffff;
        uVar7 = *(undefined4 *)(puVar32 + uVar10 * 4);
      }
      *(undefined4 *)(local_b8 + (longlong)(int)local_a0 * 4) = uVar7;
      local_120 = (ulonglong)*(uint *)(local_70 + uVar10 * 4);
      local_8c = *(int *)(puVar20 + uVar10 * 4);
      local_f0 = uVar10;
      iVar8 = (int)uVar27;
      if (((int)*(uint *)(local_70 + uVar10 * 4) < 1) || ((int)local_a0 + iVar8 < local_124)) {
        uVar14 = uVar27 & 0xffffffff;
      }
      else {
        if (0 < (int)(uint)local_68) {
          iVar22 = -2;
          uVar14 = 0;
          do {
            lVar17 = (longlong)*(int *)(local_50 + uVar14 * 4);
            if (-1 < lVar17) {
              *(undefined4 *)(local_50 + uVar14 * 4) = *(undefined4 *)(lVar2 + lVar17 * 4);
              *(int *)(lVar2 + lVar17 * 4) = iVar22;
            }
            uVar14 = uVar14 + 1;
            iVar22 = iVar22 + -1;
          } while (local_160 != uVar14);
        }
        if (iVar8 < 1) {
          uVar14 = 0;
        }
        else {
          iVar22 = 0;
          uVar14 = 0;
          local_60 = uVar27;
          do {
            lVar17 = (longlong)iVar22;
            iVar22 = iVar22 + 1;
            uVar12 = -*(int *)(lVar2 + lVar17 * 4) - 2;
            if (-1 < (int)uVar12) {
              uVar27 = (ulonglong)uVar12;
              iVar9 = (int)uVar14;
              *(undefined4 *)(lVar2 + (longlong)iVar9 * 4) = *(undefined4 *)(local_50 + uVar27 * 4);
              *(int *)(local_50 + uVar27 * 4) = iVar9;
              uVar12 = iVar9 + 1;
              uVar14 = (ulonglong)uVar12;
              if (1 < *(int *)(puVar11 + uVar27 * 4)) {
                lVar17 = 0;
                do {
                  *(undefined4 *)(lVar2 + (longlong)(int)uVar12 * 4 + lVar17 * 4) =
                       *(undefined4 *)(lVar2 + (longlong)iVar22 * 4 + lVar17 * 4);
                  lVar17 = lVar17 + 1;
                  iVar9 = (int)lVar17;
                } while (iVar9 < *(int *)(puVar11 + uVar27 * 4) + -1);
                iVar22 = iVar22 + iVar9;
                uVar14 = (ulonglong)(uVar12 + iVar9);
              }
            }
          } while (iVar22 < iVar8);
        }
      }
      local_54 = local_54 + local_8c;
      *(int *)(puVar20 + uVar10 * 4) = -local_8c;
      uVar12 = *(uint *)(local_50 + uVar10 * 4);
      iVar8 = (int)local_120;
      local_c8 = CONCAT44(local_c8._4_4_,uVar12);
      uVar13 = (uint)uVar14;
      if (iVar8 == 0) {
        uVar13 = uVar12;
      }
      local_90 = uVar13;
      local_158 = uVar14;
      if (iVar8 < 0) {
        puVar26 = (uint *)(local_88 + uVar10 * 4);
        uVar25 = 0;
        *puVar26 = 0;
        piVar18 = (int *)(puVar11 + uVar10 * 4);
        *piVar18 = 0;
        *(undefined4 *)(local_70 + uVar10 * 4) = 0xfffffffe;
LAB_146ddfc2c:
        *puVar26 = uVar25;
        if ((int)uVar25 < (int)(uint)local_e8) {
          uVar25 = (uint)local_e8;
        }
        iVar30 = iVar30 + uVar25;
        *(int *)(puVar20 + uVar10 * 4) = local_8c;
        *piVar18 = 0;
        local_e8 = (ulonglong)uVar25;
LAB_146ddfc5a:
        uVar14 = local_68;
        *(undefined4 *)(local_50 + uVar10 * 4) = 0xffffffff;
        puVar1[uVar10] = 0;
        uVar12 = local_90;
      }
      else {
        local_f8 = (int *)(puVar11 + uVar10 * 4);
        local_a8 = CONCAT44(local_a8._4_4_,-2 - uVar25);
        local_118 = CONCAT44(local_118._4_4_,iVar8 + 1);
        local_60 = 0;
        uVar10 = 1;
        uVar25 = local_ac;
        do {
          if ((int)local_120 < (int)uVar10) {
            iVar22 = *local_f8 - (int)local_120;
            local_d0 = (ulonglong)uVar25;
            iVar8 = (int)local_c8;
          }
          else {
            lVar17 = (longlong)(int)local_c8;
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
            local_d0 = (ulonglong)*(int *)(lVar2 + lVar17 * 4);
            iVar8 = *(int *)(local_50 + local_d0 * 4);
            iVar22 = *(int *)(puVar11 + local_d0 * 4);
          }
          local_c0 = uVar10;
          if (0 < iVar22) {
            lVar17 = 0;
            do {
              iVar9 = *(int *)(lVar2 + (longlong)iVar8 * 4 + lVar17 * 4);
              lVar28 = (longlong)iVar9;
              iVar29 = *(int *)(puVar20 + lVar28 * 4);
              if (0 < iVar29) {
                *(int *)(puVar20 + lVar28 * 4) = -iVar29;
                *(int *)(lVar2 + (longlong)(int)uVar13 * 4) = iVar9;
                iVar9 = *(int *)(lVar15 + lVar28 * 4);
                if ((longlong)*(int *)(puVar32 + lVar28 * 4) == -1) {
                  uVar7 = 0xffffffff;
                }
                else {
                  *(int *)(lVar15 + (longlong)*(int *)(puVar32 + lVar28 * 4) * 4) = iVar9;
                  uVar7 = *(undefined4 *)(puVar32 + lVar28 * 4);
                }
                lVar15 = local_148;
                if (iVar9 == -1) {
                  iVar9 = *(int *)(local_88 + lVar28 * 4);
                  lVar15 = local_140;
                }
                local_60 = (ulonglong)(uint)((int)local_60 + iVar29);
                uVar13 = uVar13 + 1;
                *(undefined4 *)(puVar11 + (longlong)iVar9 * 4 + lVar15 * 4) = uVar7;
                puVar20 = local_78;
                lVar15 = local_d8;
              }
              lVar17 = lVar17 + 1;
            } while (iVar22 != (int)lVar17);
          }
          uVar25 = local_ac;
          uVar12 = (uint)local_d0;
          if (uVar12 != local_ac) {
            *(undefined4 *)(local_50 + (longlong)(int)uVar12 * 4) = (undefined4)local_a8;
            puVar1[(int)uVar12] = 0;
          }
          uVar12 = local_90;
          uVar27 = local_f0;
          uVar10 = (ulonglong)((int)local_c0 + 1);
        } while ((int)local_c0 != (int)local_118);
        local_130 = (uint *)(local_88 + local_f0 * 4);
        *(uint *)(local_88 + local_f0 * 4) = (uint)local_60;
        *(uint *)(local_50 + local_f0 * 4) = local_90;
        iVar8 = uVar13 - local_90;
        *local_f8 = iVar8;
        lVar17 = local_50;
        *(undefined4 *)(local_70 + uVar27 * 4) = 0xfffffffe;
        if (iVar8 == 0 || (int)uVar13 < (int)uVar12) {
          uVar25 = (uint)local_60;
          uVar10 = local_f0;
          piVar18 = local_f8;
          puVar26 = local_130;
          goto LAB_146ddfc2c;
        }
        uVar10 = (ulonglong)(int)uVar12;
        local_c0 = (longlong)(int)uVar13;
        local_110 = uVar10;
        do {
          lVar15 = (longlong)*(int *)(lVar2 + uVar10 * 4);
          iVar8 = *(int *)(local_70 + lVar15 * 4);
          if (0 < iVar8) {
            iVar22 = *(int *)(local_78 + lVar15 * 4);
            iVar9 = *(int *)(lVar17 + lVar15 * 4);
            lVar28 = (longlong)iVar9;
            do {
              lVar31 = (longlong)*(int *)(lVar2 + lVar28 * 4);
              iVar29 = puVar1[lVar31];
              if (iVar29 < iVar30) {
                if (iVar29 != 0) {
                  iVar29 = *(int *)(local_88 + lVar31 * 4) + iVar22 + iVar30;
                  goto LAB_146ddfa28;
                }
              }
              else {
                iVar29 = iVar29 + iVar22;
LAB_146ddfa28:
                puVar1[lVar31] = iVar29;
                iVar9 = *(int *)(lVar17 + lVar15 * 4);
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < iVar9 + iVar8);
          }
          uVar10 = uVar10 + 1;
          uVar27 = local_110;
          puVar11 = local_98;
        } while (uVar10 != local_c0);
        do {
          local_c8 = uVar27;
          iVar8 = *(int *)(lVar2 + uVar27 * 4);
          lVar17 = (longlong)iVar8;
          uVar25 = *(uint *)(local_50 + lVar17 * 4);
          uVar10 = (ulonglong)uVar25;
          lVar15 = (longlong)(int)uVar25;
          iVar22 = *(int *)(local_70 + lVar17 * 4);
          local_d0 = uVar10;
          local_118 = lVar15;
          local_128 = iVar22 + uVar25;
          if (iVar22 < 1) {
            iVar29 = 0;
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            iVar29 = 0;
            do {
              iVar24 = *(int *)(lVar2 + lVar15 * 4);
              lVar28 = (longlong)iVar24;
              iVar16 = puVar1[lVar28];
              if (iVar16 != 0) {
                if (iVar16 - iVar30 == 0 || iVar16 < iVar30) {
                  *(undefined4 *)(local_50 + lVar28 * 4) = (undefined4)local_a8;
                  puVar1[lVar28] = 0;
                }
                else {
                  iVar29 = iVar29 + (iVar16 - iVar30);
                  iVar16 = (int)uVar10;
                  uVar10 = (ulonglong)(iVar16 + 1);
                  *(int *)(lVar2 + (longlong)iVar16 * 4) = iVar24;
                  iVar9 = iVar9 + iVar24;
                }
              }
              lVar15 = lVar15 + 1;
              puVar11 = local_98;
            } while (lVar15 < (int)(iVar22 + uVar25));
          }
          puVar20 = local_78;
          puVar32 = local_80;
          lVar15 = local_d8;
          iVar19 = (int)uVar10;
          iVar23 = (int)local_d0;
          *(int *)(local_70 + lVar17 * 4) = (iVar19 - iVar23) + 1;
          iVar24 = *(int *)(puVar11 + lVar17 * 4);
          iVar16 = iVar19;
          if (iVar22 < iVar24) {
            lVar28 = (longlong)local_128;
            do {
              iVar22 = *(int *)(lVar2 + lVar28 * 4);
              if (0 < *(int *)(local_78 + (longlong)iVar22 * 4)) {
                iVar29 = iVar29 + *(int *)(local_78 + (longlong)iVar22 * 4);
                iVar16 = (int)uVar10;
                uVar10 = (ulonglong)(iVar16 + 1);
                *(int *)(lVar2 + (longlong)iVar16 * 4) = iVar22;
                iVar9 = iVar9 + iVar22;
              }
              iVar16 = (int)uVar10;
              lVar28 = lVar28 + 1;
            } while (lVar28 < iVar24 + iVar23);
          }
          if (iVar29 == 0) {
            *(undefined4 *)(local_50 + lVar17 * 4) = (undefined4)local_a8;
            iVar8 = *(int *)(local_78 + lVar17 * 4);
            uVar10 = (ulonglong)(uint)((int)local_60 + iVar8);
            local_8c = local_8c - iVar8;
            local_54 = local_54 - iVar8;
            *(undefined4 *)(local_78 + lVar17 * 4) = 0;
            *(undefined4 *)(local_70 + lVar17 * 4) = 0xffffffff;
          }
          else {
            iVar22 = *(int *)(local_88 + lVar17 * 4);
            if (iVar29 < *(int *)(local_88 + lVar17 * 4)) {
              iVar22 = iVar29;
            }
            *(int *)(local_88 + lVar17 * 4) = iVar22;
            *(undefined4 *)(lVar2 + (longlong)iVar16 * 4) =
                 *(undefined4 *)(lVar2 + (longlong)iVar19 * 4);
            *(undefined4 *)(lVar2 + (longlong)iVar19 * 4) = *(undefined4 *)(lVar2 + local_118 * 4);
            *(uint *)(lVar2 + local_118 * 4) = local_ac;
            *(int *)(puVar11 + lVar17 * 4) = (iVar16 - iVar23) + 1;
            iVar9 = iVar9 % (int)(uint)local_68;
            *(undefined4 *)(local_80 + lVar17 * 4) =
                 *(undefined4 *)(local_138 + (longlong)iVar9 * 4);
            *(int *)(local_138 + (longlong)iVar9 * 4) = iVar8;
            *(int *)(local_d8 + lVar17 * 4) = iVar9;
            uVar10 = local_60;
          }
          uVar27 = local_c8 + 1;
          local_60 = uVar10;
        } while (local_c8 + 1 != local_c0);
        *local_130 = (uint)uVar10;
        uVar27 = local_e8;
        if ((int)local_e8 <= (int)(uint)uVar10) {
          uVar27 = uVar10;
        }
        local_e8 = uVar27 & 0xffffffff;
        iVar30 = iVar30 + (int)uVar27;
        uVar27 = local_110;
        do {
          lVar17 = (longlong)*(int *)(lVar2 + uVar27 * 4);
          local_a8 = uVar27;
          if (*(int *)(puVar20 + lVar17 * 4) < 0) {
            lVar17 = (longlong)*(int *)(lVar15 + lVar17 * 4);
            iVar8 = *(int *)(local_138 + lVar17 * 4);
            *(undefined4 *)(local_138 + lVar17 * 4) = 0xffffffff;
            lVar17 = local_50;
            while (local_50 = lVar17, iVar8 != -1) {
              lVar28 = (longlong)iVar8;
              iVar22 = *(int *)(puVar32 + lVar28 * 4);
              if (iVar22 == -1) break;
              iVar9 = *(int *)(puVar11 + lVar28 * 4);
              iVar29 = *(int *)(local_70 + lVar28 * 4);
              iVar24 = *(int *)(lVar17 + lVar28 * 4);
              lVar15 = (longlong)iVar24;
              if (iVar24 < iVar24 + iVar9 + -1) {
                do {
                  lVar31 = lVar15 * 4;
                  lVar15 = lVar15 + 1;
                  puVar1[*(int *)(lVar2 + 4 + lVar31)] = iVar30;
                } while (lVar15 < *(int *)(lVar17 + lVar28 * 4) + iVar9 + -1);
                iVar22 = *(int *)(puVar32 + lVar28 * 4);
                if (iVar22 == -1) {
                  iVar30 = iVar30 + 1;
                  puVar20 = local_78;
                  lVar15 = local_d8;
                  break;
                }
              }
              iVar24 = -2 - iVar8;
              do {
                lVar15 = (longlong)iVar22;
                if ((*(int *)(puVar11 + lVar15 * 4) == iVar9) &&
                   (*(int *)(local_70 + lVar15 * 4) == iVar29)) {
                  iVar16 = *(int *)(local_50 + lVar15 * 4);
                  lVar17 = (longlong)iVar16;
                  iVar19 = iVar16 + iVar9 + -1;
                  if (iVar19 < iVar16) {
                    iVar19 = iVar16;
                  }
                  do {
                    if (iVar19 == lVar17) {
                      *(int *)(local_50 + lVar15 * 4) = iVar24;
                      *(int *)(local_78 + lVar28 * 4) =
                           *(int *)(local_78 + lVar28 * 4) + *(int *)(local_78 + lVar15 * 4);
                      *(undefined4 *)(local_78 + lVar15 * 4) = 0;
                      *(undefined4 *)(local_70 + lVar15 * 4) = 0xffffffff;
                      iVar22 = *(int *)(local_80 + lVar15 * 4);
                      *(int *)(local_80 + (longlong)iVar8 * 4) = iVar22;
                      goto LAB_146ddfdb3;
                    }
                    lVar31 = lVar17 * 4;
                    lVar17 = lVar17 + 1;
                  } while (puVar1[*(int *)(lVar2 + 4 + lVar31)] == iVar30);
                }
                iVar8 = iVar22;
                iVar22 = *(int *)(local_80 + lVar15 * 4);
LAB_146ddfdb3:
                puVar11 = local_98;
              } while (iVar22 != -1);
              iVar30 = iVar30 + 1;
              puVar20 = local_78;
              lVar15 = local_d8;
              puVar32 = local_80;
              lVar17 = local_50;
              iVar8 = *(int *)(local_80 + lVar28 * 4);
            }
          }
          uVar10 = local_f0;
          uVar27 = local_a8 + 1;
        } while (uVar27 != local_c0);
        iVar8 = (int)local_68 - local_54;
        local_a8 = CONCAT44(local_a8._4_4_,iVar8);
        uVar27 = local_110;
        uVar12 = local_90;
        do {
          iVar22 = *(int *)(lVar2 + uVar27 * 4);
          lVar17 = (longlong)iVar22;
          iVar9 = *(int *)(puVar20 + lVar17 * 4);
          if (iVar9 < 0) {
            *(int *)(puVar20 + lVar17 * 4) = -iVar9;
            uVar13 = (int)local_60 + iVar9 + *(int *)(local_88 + lVar17 * 4);
            uVar25 = iVar9 + iVar8;
            if ((int)uVar13 <= (int)uVar25) {
              uVar25 = uVar13;
            }
            lVar28 = (longlong)(int)uVar25;
            if ((longlong)*(int *)(local_b8 + lVar28 * 4) == -1) {
              uVar7 = 0xffffffff;
            }
            else {
              *(int *)(lVar15 + (longlong)*(int *)(local_b8 + lVar28 * 4) * 4) = iVar22;
              uVar7 = *(undefined4 *)(local_b8 + lVar28 * 4);
            }
            *(undefined4 *)(puVar32 + lVar17 * 4) = uVar7;
            *(undefined4 *)(lVar15 + lVar17 * 4) = 0xffffffff;
            *(int *)(local_b8 + lVar28 * 4) = iVar22;
            uVar14 = local_a0 & 0xffffffff;
            if ((int)uVar25 < (int)local_a0) {
              uVar14 = (ulonglong)uVar25;
            }
            local_a0 = uVar14;
            *(uint *)(local_88 + lVar17 * 4) = uVar25;
            lVar17 = (longlong)(int)uVar12;
            uVar12 = uVar12 + 1;
            *(int *)(lVar2 + lVar17 * 4) = iVar22;
          }
          uVar27 = uVar27 + 1;
        } while (local_c0 != uVar27);
        *(int *)(puVar20 + local_f0 * 4) = local_8c;
        iVar8 = uVar12 - local_90;
        *local_f8 = iVar8;
        uVar14 = local_68;
        if (iVar8 == 0) goto LAB_146ddfc5a;
      }
      uVar25 = (uint)uVar14;
      if ((int)local_120 == 0) {
        uVar12 = (uint)local_158;
      }
      uVar27 = (ulonglong)uVar12;
    } while (local_54 < (int)uVar25);
  }
  puVar11 = local_b8;
  lVar15 = local_100;
  plVar3 = local_108;
  uVar12 = (uint)local_68;
  if (0 < (int)uVar25) {
    uVar27 = 0;
    do {
      uVar25 = -*(int *)(local_50 + uVar27 * 4) - 2;
      uVar10 = (ulonglong)uVar25;
      *(uint *)(local_50 + uVar27 * 4) = uVar25;
      uVar27 = uVar27 + 1;
    } while ((uVar12 & 0x7fffffff) != uVar27);
  }
  if (-1 < (int)uVar12) {
    _Size = local_100 * 4;
    *(undefined8 *)(puVar21 + -0x28) = 0x146de0190;
    memset(puVar11,(int)CONCAT71((int7)(uVar10 >> 8),0xff),_Size);
    uVar27 = (ulonglong)(uVar12 & 0x7fffffff);
    uVar10 = uVar27;
    do {
      if (*(int *)(local_78 + uVar10 * 4) < 1) {
        *(undefined4 *)(local_80 + uVar10 * 4) =
             *(undefined4 *)(puVar11 + (longlong)*(int *)(local_50 + uVar10 * 4) * 4);
        *(int *)(puVar11 + (longlong)*(int *)(local_50 + uVar10 * 4) * 4) = (int)uVar10;
      }
      bVar33 = 0 < (longlong)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar33);
    do {
      if ((0 < *(int *)(local_78 + uVar27 * 4)) &&
         (lVar17 = (longlong)*(int *)(local_50 + uVar27 * 4), lVar17 != -1)) {
        *(undefined4 *)(local_80 + uVar27 * 4) = *(undefined4 *)(puVar11 + lVar17 * 4);
        *(int *)(puVar11 + (longlong)*(int *)(local_50 + uVar27 * 4) * 4) = (int)uVar27;
      }
      bVar33 = 0 < (longlong)uVar27;
      uVar27 = uVar27 - 1;
    } while (bVar33);
    bVar33 = local_80 != (undefined1 *)0x0;
    lVar17 = 0;
    iVar30 = 0;
    do {
      iVar8 = iVar30;
      if (*(int *)(local_50 + lVar17 * 4) == -1) {
        lVar2 = *plVar3;
        iVar8 = -1;
        if ((puVar1 != (undefined4 *)0x0) &&
           (lVar2 != 0 && (bVar33 && puVar11 != (undefined1 *)0x0))) {
          *puVar1 = (int)lVar17;
          uVar10 = 0;
          do {
            iVar8 = puVar1[uVar10];
            iVar22 = *(int *)(puVar11 + (longlong)iVar8 * 4);
            if ((longlong)iVar22 == -1) {
              uVar25 = (int)uVar10 - 1;
              lVar28 = (longlong)iVar30;
              iVar30 = iVar30 + 1;
              *(int *)(lVar2 + lVar28 * 4) = iVar8;
            }
            else {
              *(undefined4 *)(puVar11 + (longlong)iVar8 * 4) =
                   *(undefined4 *)(local_80 + (longlong)iVar22 * 4);
              uVar25 = (int)uVar10 + 1;
              puVar1[uVar10 + 1] = iVar22;
            }
            uVar10 = (ulonglong)uVar25;
            iVar8 = iVar30;
          } while (-1 < (int)uVar25);
        }
      }
      lVar17 = lVar17 + 1;
      iVar30 = iVar8;
    } while (lVar17 != lVar15);
  }
  lVar2 = local_e0;
  lVar15 = *plVar3;
  lVar17 = plVar3[1];
  *(undefined8 *)(puVar21 + -0x28) = 0x146ddff74;
  lVar15 = FUN_146de08f9(lVar15,lVar2,lVar17);
  puVar11 = local_98;
  *plVar3 = lVar15;
  plVar3[1] = lVar2;
  if (0x20000 < local_150) {
    *(undefined8 *)(puVar21 + -0x28) = 0x146ddff96;
    FUN_1400020a8(puVar11);
  }
  if ((local_48 ^ (ulonglong)&local_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar21 + -0x28) = &UNK_146de02b6;
  FUN_144d8e3a0();
}



// FUNCTION 146de02bc FUN_146de02bc body=66 status=ok
// SIG undefined FUN_146de02bc(void)

void FUN_146de02bc(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146de02fe FUN_146de02fe body=496 status=ok
// SIG undefined FUN_146de02fe(void)

void FUN_146de02fe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_49;
  longlong local_48;
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 8);
  local_60 = 0;
  if (lVar2 != 0) {
    if (lVar2 < 1) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_141729f83(lVar2);
    }
  }
  local_34 = 0;
  local_58 = lVar2;
  local_40 = lVar2;
  FUN_146de04ef(&local_60,&local_48,&local_49);
  FUN_146dde6fa(param_2,lVar2,lVar2);
  if (0 < lVar2) {
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar7;
      }
      if (lVar7 < lVar8) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        do {
          piVar1 = (int *)(local_60 + (longlong)*(int *)(lVar3 + lVar7 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar8 != lVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar2);
  }
  if (local_58 == 0) {
    lVar6 = 0;
  }
  else {
    local_48 = local_60;
    iVar5 = FUN_146de06a4(&local_48,&local_49);
    lVar6 = (longlong)iVar5;
  }
  FUN_146de0756(param_2 + 0x28,lVar6,0);
  **(undefined4 **)(param_2 + 0x18) = 0;
  if (0 < lVar2) {
    lVar6 = 0;
    do {
      *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar6 * 4) =
           *(int *)(local_60 + lVar6 * 4) + *(int *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar6 = 0;
    do {
      *(undefined4 *)(local_60 + lVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar7;
      }
      if (lVar7 < lVar8) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        lVar4 = *(longlong *)(param_1 + 0x28);
        do {
          lVar9 = (longlong)*(int *)(lVar4 + lVar7 * 4);
          iVar5 = *(int *)(local_60 + lVar9 * 4);
          *(int *)(local_60 + lVar9 * 4) = iVar5 + 1;
          *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar5 * 4) = (int)lVar6;
          *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5 * 4) =
               *(undefined4 *)(lVar3 + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar8 != lVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar2);
  }
  FUN_1400020a8(local_60);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de04ef FUN_146de04ef body=317 status=ok
// SIG undefined FUN_146de04ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146de04ef(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Dst;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (param_1[1] != lVar3) {
    FUN_146de062c(param_1,lVar3,1);
    lVar3 = param_1[1];
  }
  auVar2 = _DAT_149931e80;
  if (0 < lVar3) {
    iVar1 = *(int *)(param_2 + 0x14);
    _Dst = (void *)*param_1;
    if (iVar1 == 0) {
      memset(_Dst,0,lVar3 << 2);
      return;
    }
    lVar4 = lVar3 + -1;
    auVar6._8_4_ = (int)lVar4;
    auVar6._0_8_ = lVar4;
    auVar6._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = 0;
    auVar8 = pmovsxbq(in_XMM1,0x302);
    auVar9 = pmovsxbq(in_XMM2,0x100);
    auVar6 = auVar6 ^ _DAT_149931e80;
    do {
      lVar4 = auVar6._0_8_;
      lVar7 = auVar6._8_8_;
      if ((bool)(~(lVar4 < (longlong)(uVar5 ^ auVar2._0_8_)) & 1)) {
        *(int *)((longlong)_Dst + uVar5 * 4) = iVar1;
      }
      auVar10._8_4_ = (int)uVar5;
      auVar10._0_8_ = uVar5;
      auVar10._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar10._8_8_ | auVar9._8_8_) ^ auVar2._8_8_) <= lVar7) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 4) = iVar1;
      }
      auVar10 = (auVar10 | auVar8) ^ auVar2;
      if (auVar10._0_8_ <= lVar4) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 8) = iVar1;
      }
      if (auVar10._8_8_ <= lVar7) {
        *(int *)((longlong)_Dst + uVar5 * 4 + 0xc) = iVar1;
      }
      uVar5 = uVar5 + 4;
    } while ((lVar3 + 3U & 0xfffffffffffffffc) != uVar5);
  }
  return;
}



// FUNCTION 146de062c FUN_146de062c body=119 status=ok
// SIG undefined FUN_146de062c(void)

void FUN_146de062c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 0 && param_2 != 0) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_3),0) < param_2)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  param_3 = param_3 * param_2;
  if (param_1[1] != param_3) {
    FUN_1400020a8(*param_1);
    if (param_3 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_141729f83(param_3);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_2;
  return;
}


